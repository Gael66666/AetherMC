#include "AetherTheme.h"

#include <QObject>

QString AetherTheme::id()
{
    return "aether";
}

QString AetherTheme::name()
{
    return QObject::tr("Aether");
}

bool AetherTheme::hasColorScheme()
{
    return true;
}

QPalette AetherTheme::colorScheme()
{
    QPalette aetherPalette;
    aetherPalette.setColor(QPalette::Window, QColor(26, 20, 48));
    aetherPalette.setColor(QPalette::WindowText, QColor(230, 230, 245));
    aetherPalette.setColor(QPalette::Base, QColor(20, 15, 38));
    aetherPalette.setColor(QPalette::AlternateBase, QColor(35, 27, 61));
    aetherPalette.setColor(QPalette::ToolTipBase, QColor(230, 230, 245));
    aetherPalette.setColor(QPalette::ToolTipText, QColor(230, 230, 245));
    aetherPalette.setColor(QPalette::Text, QColor(230, 230, 245));
    aetherPalette.setColor(QPalette::Button, QColor(43, 33, 64));
    aetherPalette.setColor(QPalette::ButtonText, QColor(230, 230, 245));
    aetherPalette.setColor(QPalette::BrightText, QColor(255, 120, 120));
    aetherPalette.setColor(QPalette::Link, QColor(139, 124, 232));
    aetherPalette.setColor(QPalette::Highlight, QColor(107, 79, 196));
    aetherPalette.setColor(QPalette::HighlightedText, Qt::white);
    aetherPalette.setColor(QPalette::PlaceholderText, QColor(150, 145, 170));
    return fadeInactive(aetherPalette, fadeAmount(), fadeColor());
}

double AetherTheme::fadeAmount()
{
    return 0.5;
}

QColor AetherTheme::fadeColor()
{
    return QColor(26, 20, 48);
}

bool AetherTheme::hasStyleSheet()
{
    return true;
}

QString AetherTheme::appStyleSheet()
{
    return R"(
        QToolTip {
            color: #e6e6f5;
            background-color: #6b4fc4;
            border: 1px solid #8b7ce8;
            border-radius: 4px;
            padding: 4px;
        }
        QPushButton {
            background-color: #2b2140;
            border: 1px solid #6b4fc4;
            border-radius: 6px;
            padding: 5px 14px;
            color: #e6e6e5;
        }
        QPushButton:hover {
            background-color: #3d2f5e;
            border: 1px solid #8b7ce8;
        }
        QPushButton:pressed {
            background-color: #6b4fc4;
        }
        QPushButton:disabled {
            background-color: #211a33;
            border: 1px solid #3d2f5e;
            color: #6a6480;
        }
        QTabWidget::pane {
            border: 1px solid #3d2f5e;
            border-radius: 6px;
            top: -1px;
        }
        QTabBar::tab {
            background-color: #211a33;
            border: 1px solid #3d2f5e;
            border-bottom: none;
            border-top-left-radius: 6px;
            border-top-right-radius: 6px;
            padding: 6px 12px;
            color: #b8b3cc;
        }
        QTabBar::tab:selected {
            background-color: #2b2140;
            color: #e6e6f5;
            border-bottom: 2px solid #8b7ce8;
        }
        QTabBar::tab:hover:!selected {
            background-color: #2b2140;
        }
        QScrollBar:vertical {
            background: #1a1430;
            width: 12px;
            margin: 0;
        }
        QScrollBar::handle:vertical {
            background: #4d3f9e;
            border-radius: 5px;
            min-height: 24px;
        }
        QScrollBar::handle:vertical:hover {
            background: #6b4fc4;
        }
        QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
            height: 0;
        }
        QScrollBar:horizontal {
            background: #1a1430;
            height: 12px;
            margin: 0;
        }
        QScrollBar::handle:horizontal {
            background: #4d3f9e;
            border-radius: 5px;
            min-width: 24px;
        }
        QScrollBar::handle:horizontal:hover {
            background: #6b4fc4;
        }
        QLineEdit, QTextEdit, QPlainTextEdit {
            background-color: #14102a;
            border: 1px solid #3d2f5e;
            border-radius: 4px;
            padding: 3px;
            color: #e6e6f5;
        }
        QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus {
            border: 1px solid #8b7ce8;
        }
        QGroupBox {
            border: 1px solid #3d2f5e;
            border-radius: 6px;
            margin-top: 10px;
            padding-top: 6px;
        }
        QGroupBox::title {
            subcontrol-origin: margin;
            left: 8px;
            padding: 0 4px;
            color: #b09af0;
        }
        QMenuBar {
            background-color: #1a1430;
        }
        QMenuBar::item:selected {
            background-color: #6b4fc4;
            border-radius: 4px;
        }
        QMenu {
            background-color: #211a33;
            border: 1px solid #3d2f5e;
        }
        QMenu::item:selected {
            background-color: #6b4fc4;
        }
        QCheckBox::indicator, QRadioButton::indicator {
            border: 1px solid #6b4fc4;
            background-color: #14102a;
        }
        QCheckBox::indicator:checked, QRadioButton::indicator:checked {
            background-color: #8b7ce8;
        }
        QProgressBar {
            border: 1px solid #3d2f5e;
            border-radius: 4px;
            text-align: center;
            background-color: #14102a;
        }
        QProgressBar::chunk {
            background-color: #6b4fc4;
            border-radius: 3px;
        }
    )";
}
