# 🧔🏻 Skin Modal (data informations)
Get important information about GTA SA skin models.

# 🔗 How to use
1. `#include <skinModal>` in your source code

# 📜 Functions
```pawn
IsSkinMan(skinid)
IsSkinWoman(skinid)

GetSkinGender(skinid)
GetSkinName(skinid, dest[], maxlength = sizeof dest)
GetSkinNameInline(skinid)

GetMaxSkins()
```
### Enum
```pawn
E_SKINGENDER_INVALID
E_SKINGENDER_MAN
E_SKINGENDER_WOMAN
```
