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
    return "QToolTip { color: #e6e6f5; background-color: #6b4fc4; border: 1px solid #8b7ce8; }";
}
