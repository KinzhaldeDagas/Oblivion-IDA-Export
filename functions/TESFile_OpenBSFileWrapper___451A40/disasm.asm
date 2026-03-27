0x451A40: mov     eax, dword ptr [esp+arg_4]
0x451A44: mov     edx, [esp+arg_0]
0x451A48: push    eax; char
0x451A49: push    edx; int
0x451A4A: lea     eax, [ecx+1Ch]
0x451A4D: push    eax; int
0x451A4E: lea     edx, [ecx+120h]
0x451A54: push    edx; lpString2
0x451A55: call    TESFile_OpenBSFile?
0x451A5A: retn    8
