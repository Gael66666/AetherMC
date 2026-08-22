cmake_minimum_required(VERSION 3.9.4)
project(launcher Java)
find_package(Java 1.8 REQUIRED COMPONENTS Development)

include(UseJava)
set(CMAKE_JAVA_JAR_ENTRY_POINT org.aethermc.EntryPoint)
set(CMAKE_JAVA_COMPILE_FLAGS -target 8 -source 8 -Xlint:deprecation -Xlint:unchecked)

set(SRC
    org/aethermc/EntryPoint.java
    org/aethermc/Launcher.java
    org/aethermc/LauncherFactory.java
    org/aethermc/impl/OneSixLauncher.java
    org/aethermc/applet/LegacyFrame.java
    org/aethermc/exception/ParameterNotFoundException.java
    org/aethermc/exception/ParseException.java
    org/aethermc/utils/Parameters.java
    org/aethermc/utils/Utils.java
    net/minecraft/Launcher.java
)
add_jar(NewLaunch ${SRC})
install_jar(NewLaunch "${JARS_DEST_DIR}")
