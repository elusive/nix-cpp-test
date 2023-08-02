{
	description = "Elusive CXX Nix Test App";

	inputs = {
		nixpkgs.url = "nixpkgs/nixos-22.05";
	};

	outputs = { self, nixpkgs }: {
		packages."x86_64-linux" = let
			pkgs = import nixpkgs {
				system = "x86_64-linux";
			};
		in {
			default = pkgs.stdenv.mkDerivation {
				name = "cpp_test_app";
				src = ./.;

				nativeBuildInputs = with pkgs; [
					pkgs.cmake
				];

				buildInputs = with pkgs; [
					pkgs.boost
					pkgs.SDL2
				];
			};

		};
	};
}
	
