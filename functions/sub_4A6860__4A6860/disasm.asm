0x4A6860: push    edi
0x4A6861: mov     edi, [esp+4+arg_0]
0x4A6865: test    edi, edi
0x4A6867: jnz     short loc_4A686F
0x4A6869: xor     al, al
0x4A686B: pop     edi
0x4A686C: retn    0Ch
0x4A686F: push    esi
0x4A6870: lea     esi, [ecx+4]
0x4A6873: mov     eax, esi
0x4A6875: test    eax, eax
0x4A6877: jz      short loc_4A688F
0x4A6879: lea     esp, [esp+0]
0x4A6880: cmp     [eax], edi
0x4A6882: jz      loc_4A690E
0x4A6888: mov     eax, [eax+4]
0x4A688B: test    eax, eax
0x4A688D: jnz     short loc_4A6880
0x4A688F: push    ebx
0x4A6890: mov     ebx, [esp+0Ch+arg_4]
0x4A6894: test    bl, bl
0x4A6896: jnz     short loc_4A689E
0x4A6898: cmp     byte ptr [esp+0Ch+arg_8], bl
0x4A689C: jz      short loc_4A6906
0x4A689E: test    ecx, ecx
0x4A68A0: jz      short loc_4A6906
0x4A68A2: test    esi, esi
0x4A68A4: jz      short loc_4A6906
0x4A68A6: mov     ecx, [esi]
0x4A68A8: test    ecx, ecx
0x4A68AA: jz      short loc_4A6906
0x4A68AC: test    bl, bl
0x4A68AE: jnz     short loc_4A68EA
0x4A68B0: cmp     byte ptr [esp+0Ch+arg_8], bl
0x4A68B4: jz      short loc_4A68FF
0x4A68B6: mov     eax, [ecx]
0x4A68B8: mov     edx, [eax+4]
0x4A68BB: call    edx
0x4A68BD: test    eax, eax
0x4A68BF: jz      short loc_4A68FF
0x4A68C1: mov     eax, [esi]
0x4A68C3: mov     eax, [eax+4]
0x4A68C6: test    eax, eax
0x4A68C8: jz      short loc_4A68FF
0x4A68CA: push    0; int
0x4A68CC: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4A68D1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4A68D6: push    0; int
0x4A68D8: push    eax; void *
0x4A68D9: call    OblivionDynamicCast
0x4A68DE: add     esp, 14h
0x4A68E1: test    eax, eax
0x4A68E3: setnz   al
0x4A68E6: test    al, al
0x4A68E8: jz      short loc_4A68FF
0x4A68EA: mov     edx, [esp+0Ch+arg_8]
0x4A68EE: mov     eax, [esi]
0x4A68F0: mov     ecx, [eax+34h]
0x4A68F3: push    edx
0x4A68F4: push    ebx
0x4A68F5: push    edi
0x4A68F6: call    sub_4A6860
0x4A68FB: test    al, al
0x4A68FD: jnz     short loc_4A6915
0x4A68FF: mov     esi, [esi+4]
0x4A6902: test    esi, esi
0x4A6904: jnz     short loc_4A68A6
0x4A6906: pop     ebx
0x4A6907: pop     esi
0x4A6908: xor     al, al
0x4A690A: pop     edi
0x4A690B: retn    0Ch
0x4A690E: pop     esi
0x4A690F: mov     al, 1
0x4A6911: pop     edi
0x4A6912: retn    0Ch
0x4A6915: pop     ebx
0x4A6916: pop     esi
0x4A6917: mov     al, 1
0x4A6919: pop     edi
0x4A691A: retn    0Ch
