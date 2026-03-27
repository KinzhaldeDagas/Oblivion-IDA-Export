0x4EDB40: mov     eax, [esp+arg_0]
0x4EDB44: push    ebx
0x4EDB45: push    ebp
0x4EDB46: push    0; int
0x4EDB48: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x4EDB4D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EDB52: push    0; int
0x4EDB54: push    eax; void *
0x4EDB55: mov     ebp, ecx
0x4EDB57: call    OblivionDynamicCast
0x4EDB5C: mov     ebx, eax
0x4EDB5E: add     esp, 14h
0x4EDB61: test    ebx, ebx
0x4EDB63: jz      short loc_4EDBDA
0x4EDB65: push    esi
0x4EDB66: push    edi
0x4EDB67: push    ebx; a2
0x4EDB68: mov     ecx, ebp; this
0x4EDB6A: call    TESForm_CopyAllComponentsFrom
0x4EDB6F: mov     cl, [ebx+2Dh]
0x4EDB72: mov     [ebp+2Dh], cl
0x4EDB75: mov     dl, [ebx+2Ch]
0x4EDB78: mov     [ebp+2Ch], dl
0x4EDB7B: lea     esi, [ebx+3Ch]
0x4EDB7E: lea     edi, [ebp+3Ch]
0x4EDB81: mov     ecx, 19h
0x4EDB86: rep movsd
0x4EDB88: mov     eax, [ebx+38h]
0x4EDB8B: mov     [ebp+38h], eax
0x4EDB8E: mov     ecx, [ebx+0A0h]
0x4EDB94: mov     [ebp+0A0h], ecx
0x4EDB9A: mov     edx, [ebx+0A4h]
0x4EDBA0: mov     [ebp+0A4h], edx
0x4EDBA6: mov     eax, [ebx+0A8h]
0x4EDBAC: mov     edx, [ebp+20h]
0x4EDBAF: mov     edx, [edx+8]
0x4EDBB2: lea     ecx, [ebp+20h]
0x4EDBB5: mov     [ebp+0A8h], eax
0x4EDBBB: lea     eax, [ebx+20h]
0x4EDBBE: push    eax
0x4EDBBF: call    edx
0x4EDBC1: mov     ebx, [ebx+30h]
0x4EDBC4: test    ebx, ebx
0x4EDBC6: pop     edi
0x4EDBC7: pop     esi
0x4EDBC8: jnz     short loc_4EDBCF
0x4EDBCA: mov     ebx, offset EmptyString
0x4EDBCF: push    0; a3
0x4EDBD1: push    ebx; a2
0x4EDBD2: lea     ecx, [ebp+30h]; this
0x4EDBD5: call    BSStringT_Set
0x4EDBDA: pop     ebp
0x4EDBDB: pop     ebx
0x4EDBDC: retn    4
