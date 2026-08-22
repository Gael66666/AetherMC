#pragma once

#include "FusionTheme.h"

class AetherTheme: public FusionTheme
{
public:
    virtual ~AetherTheme() {}

    QString id() override;
    QString name() override;
    bool hasStyleSheet() override;
    QString appStyleSheet() override;
    bool hasColorScheme() override;
    QPalette colorScheme() override;
    double fadeAmount() override;
    QColor fadeColor() override;
};
