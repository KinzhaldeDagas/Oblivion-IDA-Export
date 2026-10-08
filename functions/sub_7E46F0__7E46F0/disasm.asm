0x7E46F0: mov     eax, [esp+geometry]
0x7E46F4: mov     [ecx+120h], eax; Verified (Oblivion): SetupGeometry stores the supplied NiObjectNET geometry pointer at +0x120. Fallout's analogous field is NiGeometry* pMyGeometry at +0x12C; Oblivion's target array and geometry pointer are at +0x110/+0x120 and the class is smaller (0x128 vs 0x14C).
0x7E46FA: mov     al, 1
0x7E46FC: retn    4
