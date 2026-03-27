0x88CE30: sub     esp, 1Ch
0x88CE33: push    ebx
0x88CE34: push    esi
0x88CE35: mov     esi, [esp+24h+arg_0]
0x88CE39: xor     bl, bl
0x88CE3B: test    esi, esi
0x88CE3D: jz      short loc_88CE99
0x88CE3F: cmp     [esp+24h+arg_C], bl
0x88CE43: jnz     short loc_88CE5A
0x88CE45: push    esi
0x88CE46: call    sub_6FA970
0x88CE4B: add     esp, 4
0x88CE4E: test    eax, eax
0x88CE50: jz      short loc_88CE99
0x88CE52: mov     eax, [eax+0Ch]
0x88CE55: and     eax, 2
0x88CE58: jz      short loc_88CE99
0x88CE5A: mov     al, [esp+24h+arg_8]
0x88CE5E: xor     ecx, ecx
0x88CE60: cmp     [esp+24h+arg_4], cl
0x88CE64: mov     [esp+24h+var_18], al
0x88CE68: mov     eax, ds:0B2E334h
0x88CE6D: setnz   cl
0x88CE70: test    eax, eax
0x88CE72: mov     bl, 1
0x88CE74: mov     [esp+24h+var_1C], 0
0x88CE7C: mov     [esp+24h+var_14], 0Dh
0x88CE84: mov     [esp+24h+var_10], ecx
0x88CE88: jz      short loc_88CE99
0x88CE8A: push    eax
0x88CE8B: lea     edx, [esp+28h+var_1C]
0x88CE8F: push    edx
0x88CE90: push    esi
0x88CE91: call    sub_88A7D0
0x88CE96: add     esp, 0Ch
0x88CE99: pop     esi
0x88CE9A: mov     al, bl
0x88CE9C: pop     ebx
0x88CE9D: add     esp, 1Ch
0x88CEA0: retn
