0x4AEDC0: fld     dword ptr ds:0A427E4h
0x4AEDC6: xor     eax, eax
0x4AEDC8: fstp    dword ptr [ecx+48h]
0x4AEDCB: mov     byte ptr [ecx+3Ch], 1Eh
0x4AEDCF: fld     dword ptr ds:0A3D9A4h
0x4AEDD5: mov     [ecx+3Dh], al
0x4AEDD8: fstp    dword ptr [ecx+4Ch]
0x4AEDDB: mov     byte ptr [ecx+3Eh], 5Ah ; 'Z'
0x4AEDDF: fld     dword ptr ds:0A3D65Ch
0x4AEDE5: mov     [ecx+40h], ax
0x4AEDE9: fstp    dword ptr [ecx+50h]
0x4AEDEC: mov     [ecx+44h], eax
0x4AEDEF: fld     dword ptr ds:0A31C80h
0x4AEDF5: mov     [ecx+58h], al
0x4AEDF8: fstp    dword ptr [ecx+54h]
0x4AEDFB: jmp     j_TESForm_InitializeComponents
