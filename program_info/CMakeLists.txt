if(UNIX)
    find_package(PkgConfig)
    if(PkgConfig_FOUND)
        pkg_search_module(SCDOC scdoc)
        if(SCDOC_FOUND)
            pkg_get_variable(SCDOC_SCDOC scdoc scdoc)
        endif()
    endif()
endif()

set(Launcher_CommonName "AetherMC")

set(Launcher_Copyright "AetherMC Contributors\\n© 2012-2021 MultiMC Contributors")
set(Launcher_Copyright "${Launcher_Copyright}" PARENT_SCOPE)
set(Launcher_Domain "aethermc.org" PARENT_SCOPE)
set(Launcher_Name "${Launcher_CommonName}" PARENT_SCOPE)
set(Launcher_DisplayName "${Launcher_CommonName}" PARENT_SCOPE)
set(Launcher_UserAgent "${Launcher_CommonName}/${Launcher_VERSION_NAME}" PARENT_SCOPE)
set(Launcher_ConfigFile "aethermc.cfg" PARENT_SCOPE)
set(Launcher_Git "https://github.com/AetherMC/AetherMC" PARENT_SCOPE)
set(Launcher_DesktopFileName "org.aethermc.AetherMC.desktop" PARENT_SCOPE)

set(Launcher_Desktop "program_info/org.aethermc.AetherMC.desktop" PARENT_SCOPE)
set(Launcher_MetaInfo "program_info/org.aethermc.AetherMC.metainfo.xml" PARENT_SCOPE)
set(Launcher_SVG "program_info/org.aethermc.AetherMC.svg" PARENT_SCOPE)
set(Launcher_Branding_ICNS "program_info/aethermc.icns" PARENT_SCOPE)
set(Launcher_Branding_ICO "program_info/aethermc.ico")
set(Launcher_Branding_ICO "${Launcher_Branding_ICO}" PARENT_SCOPE)
set(Launcher_Branding_WindowsRC "program_info/aethermc.rc" PARENT_SCOPE)
set(Launcher_Branding_LogoQRC "program_info/aethermc.qrc" PARENT_SCOPE)

set(Launcher_Portable_File "program_info/portable.txt" PARENT_SCOPE)

configure_file(org.aethermc.AetherMC.desktop.in org.aethermc.AetherMC.desktop)
configure_file(org.aethermc.AetherMC.metainfo.xml.in org.aethermc.AetherMC.metainfo.xml)
configure_file(aethermc.rc.in aethermc.rc @ONLY)
configure_file(aethermc.manifest.in aethermc.manifest @ONLY)
configure_file(aethermc.ico aethermc.ico COPYONLY)
configure_file(win_install.nsi.in win_install.nsi @ONLY)

if(SCDOC_FOUND)
    set(in_scd "${CMAKE_CURRENT_SOURCE_DIR}/aethermc.6.scd")
    set(out_man "${CMAKE_CURRENT_BINARY_DIR}/aethermc.6")
    add_custom_command(
        DEPENDS "${in_scd}"
        OUTPUT "${out_man}"
        COMMAND ${SCDOC_SCDOC} < "${in_scd}" > "${out_man}"
    )
    add_custom_target(man ALL DEPENDS ${out_man})
    set(Launcher_ManPage "program_info/aethermc.6" PARENT_SCOPE)
endif()
