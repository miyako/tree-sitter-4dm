# 4D language support in Atom

Adds syntax highlighting to ``.4dm`` files in Atom.

#### Note to self

if syntax highlighting suddenly stops, it is likely that the parser has thrown an exception.

for example, a rule might result in an infinite loop.

normally you can find such error by ``tree-sitter generate`` and ``parse``.

the decimal numeric constant rule in ``0.0.6`` had such an error.

useful snippets:

setup

* ``export PATH=$PATH:./node_modules/.bin``
* ``npm install --save nan``
* ``npm install --save-dev tree-sitter-cli``
* ``npm install node-gyp``
* ``tree-sitter generate``
* ``node-gyp configure``
* ``node-gyp build``

publish

* check github desktop
* ``apm publish patch``
* ``npm publish``

