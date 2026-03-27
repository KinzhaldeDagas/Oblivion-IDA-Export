0x6A3F40: mov     eax, ds:0B33A98h
0x6A3F45: cmp     byte ptr [eax+0CD4h], 0
0x6A3F4C: push    edi
0x6A3F4D: mov     edi, ecx
0x6A3F4F: jnz     short loc_6A3FC4
0x6A3F51: mov     ecx, [edi+20h]; this
0x6A3F54: test    ecx, ecx
0x6A3F56: jz      short loc_6A3FC4
0x6A3F58: push    esi
0x6A3F59: call    MagicTarget_GetParentActor
0x6A3F5E: mov     esi, eax
0x6A3F60: test    esi, esi
0x6A3F62: jz      short loc_6A3FC3
0x6A3F64: cmp     dword ptr [edi+3Ch], 32h ; '2'
0x6A3F68: push    0
0x6A3F6A: mov     ecx, esi
0x6A3F6C: jge     short loc_6A3F8A
0x6A3F6E: call    sub_5E8EC0
0x6A3F73: cmp     dword ptr [edi+38h], 0
0x6A3F77: jz      short loc_6A3F98
0x6A3F79: mov     ecx, [edi+38h]
0x6A3F7C: mov     edx, [ecx]
0x6A3F7E: mov     eax, [edx+9Ch]
0x6A3F84: push    1
0x6A3F86: call    eax
0x6A3F88: jmp     short loc_6A3F98
0x6A3F8A: mov     edx, [esi]
0x6A3F8C: mov     eax, [edx+198h]
0x6A3F92: call    eax
0x6A3F94: test    al, al
0x6A3F96: jnz     short loc_6A3FA7
0x6A3F98: fldz
0x6A3F9A: push    ecx
0x6A3F9B: fstp    [esp+0Ch+var_C]; int
0x6A3F9E: mov     ecx, esi; int
0x6A3FA0: push    0; int
0x6A3FA2: call    Actor_Kill
0x6A3FA7: mov     ecx, [edi+24h]; this
0x6A3FAA: test    ecx, ecx
0x6A3FAC: jz      short loc_6A3FC3
0x6A3FAE: call    MagicCaster_GetParentActor
0x6A3FB3: test    eax, eax
0x6A3FB5: jz      short loc_6A3FC3
0x6A3FB7: push    0
0x6A3FB9: push    eax
0x6A3FBA: push    esi
0x6A3FBB: call    sub_692660
0x6A3FC0: add     esp, 0Ch
0x6A3FC3: pop     esi
0x6A3FC4: pop     edi
0x6A3FC5: retn
