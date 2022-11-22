# 4D language support in Atom

Adds syntax highlighting to ``.4dm`` files in Atom.

#### Notes

* To update node module(s) following security alert:

```
export PATH="$PATH:./node_modules/.bin/"

npm install npm-check-updates
ncu –u
npm install

tree-sitter generate
node-gyp configure
node-gyp build
apm publish patch
npm publish
```

see https://github.com/atom/apm/issues/572

https://www.netwoven.com/2017/03/21/how-to-update-node-js-modules-to-latest-versions/
