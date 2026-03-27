0x65DA20: cmp     byte ptr [ecx+600h], 0
0x65DA27: jz      short locret_65DA4B
0x65DA29: fld     dword ptr ds:0A31E2Ch
0x65DA2F: fcomp   dword ptr [ecx+604h]
0x65DA35: fnstsw  ax
0x65DA37: test    ah, 5
0x65DA3A: jp      short locret_65DA4B
0x65DA3C: fldz
0x65DA3E: mov     byte ptr [ecx+600h], 0
0x65DA45: fstp    dword ptr [ecx+604h]
0x65DA4B: retn
