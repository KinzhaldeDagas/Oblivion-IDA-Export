0x56B220: push    esi
0x56B221: mov     esi, [esp+4+arg_4]
0x56B225: movzx   eax, word ptr [esi]
0x56B228: push    edi
0x56B229: xor     edi, edi
0x56B22B: cmp     eax, 171h
0x56B230: jnb     loc_56B2CE
0x56B236: mov     ecx, [esp+8+arg_0]
0x56B23A: lea     eax, [eax+eax*4]
0x56B23D: add     eax, eax
0x56B23F: add     eax, eax
0x56B241: movzx   edx, ds:Script_CommandList?.numParams[eax+eax]
0x56B249: add     eax, eax
0x56B24B: cmp     ecx, edx
0x56B24D: jnb     short loc_56B2CE
0x56B24F: mov     eax, ds:Script_CommandList?.params[eax]
0x56B255: lea     edx, [ecx+ecx*2]
0x56B258: mov     edx, [eax+edx*4+4]
0x56B25C: cmp     byte ptr ds:0B0A54Dh[edx*8], 0
0x56B264: jz      short loc_56B2CE
0x56B266: mov     esi, [esi+ecx*4+4]
0x56B26A: push    edi; int
0x56B26B: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x56B270: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56B275: push    edi; int
0x56B276: push    esi; void *
0x56B277: call    OblivionDynamicCast
0x56B27C: add     esp, 14h
0x56B27F: test    eax, eax
0x56B281: jz      short loc_56B289
0x56B283: mov     eax, [eax+4]
0x56B286: pop     edi
0x56B287: pop     esi
0x56B288: retn
0x56B289: push    0; int
0x56B28B: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x56B290: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56B295: push    0; int
0x56B297: push    esi; void *
0x56B298: call    OblivionDynamicCast
0x56B29D: add     esp, 14h
0x56B2A0: test    eax, eax
0x56B2A2: jz      short loc_56B2CE
0x56B2A4: mov     edx, [eax]
0x56B2A6: mov     ecx, eax
0x56B2A8: mov     eax, [edx+170h]
0x56B2AE: call    eax
0x56B2B0: push    0; int
0x56B2B2: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x56B2B7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56B2BC: push    0; int
0x56B2BE: push    eax; void *
0x56B2BF: call    OblivionDynamicCast
0x56B2C4: add     esp, 14h
0x56B2C7: test    eax, eax
0x56B2C9: jnz     short loc_56B283
0x56B2CB: pop     edi
0x56B2CC: pop     esi
0x56B2CD: retn
0x56B2CE: mov     eax, edi
0x56B2D0: pop     edi
0x56B2D1: pop     esi
0x56B2D2: retn
