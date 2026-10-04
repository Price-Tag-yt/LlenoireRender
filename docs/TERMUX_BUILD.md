# Build with Termux

The easiest path on a phone is to use GitHub Actions. A native Android NDK build inside Termux is possible only if the required JDK, Gradle, Android SDK and NDK are already installed and correctly configured.

```bash
pkg update
pkg install git openjdk-17 gradle
java -version
gradle -version
```

Clone your repository, then:

```bash
git clone https://github.com/USERNAME/LlenoireRender.git
cd LlenoireRender
chmod +x scripts/build-termux.sh
./scripts/build-termux.sh
```

The APK is produced at:

```text
app/build/outputs/apk/release/app-release.apk
```

If Termux cannot find the Android SDK/NDK, do not fight the phone for six hours. Push the repository and let GitHub Actions build it.
