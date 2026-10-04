# GitHub upload from Termux

Create an empty GitHub repository first, for example `LlenoireRender`. Do not initialize it with another README if you want the commands below to be completely clean.

```bash
cd /path/to/LlenoireRender
git init
git branch -M main
git add .
git commit -m "Initial LlenoireRender 1.12.2 renderer"
git remote add origin https://github.com/USERNAME/LlenoireRender.git
git push -u origin main
```

Replace `USERNAME` with your GitHub username.

For later changes:

```bash
git add .
git commit -m "Update renderer"
git push
```

Release tag:

```bash
git tag v0.1.0
git push origin v0.1.0
```

GitHub Actions then builds the release APK and publishes it as an artifact.
