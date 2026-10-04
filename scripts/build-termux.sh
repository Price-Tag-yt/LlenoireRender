#!/data/data/com.termux/files/usr/bin/bash
set -euo pipefail
cd "$(dirname "$0")/.."
command -v java >/dev/null || { echo 'Java 17+ is required'; exit 1; }
command -v gradle >/dev/null || { echo 'Gradle is required. Install it in Termux or use GitHub Actions.'; exit 1; }
gradle --no-daemon :app:assembleRelease
printf '\nAPK: %s\n' "$(pwd)/app/build/outputs/apk/release/app-release.apk"
