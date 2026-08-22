# How to import

To import with flakes use

```nix
{
  inputs = {
    aethermc.url = "github:AetherMC/AetherMC";
  };

...

  nixpkgs.overlays = [ inputs.aethermc.overlay ]; ## Within configuration.nix
  environment.systemPackages = with pkgs; [ aethermc ]; ##
}
```

To import without flakes use channels:

```sh
nix-channel --add https://github.com/AetherMC/AetherMC/archive/master.tar.gz aethermc
nix-channel --update aethermc
nix-env -iA aethermc
```

or alternatively you can use

```nix
{
  nixpkgs.overlays = [
    (import (builtins.fetchTarball "https://github.com/AetherMC/AetherMC/archive/develop.tar.gz")).overlay
  ];

  environment.systemPackages = with pkgs; [ aethermc ];
}
```
