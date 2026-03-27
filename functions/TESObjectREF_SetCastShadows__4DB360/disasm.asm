0x4DB360: push    ebx
0x4DB361: mov     ebx, dword ptr [esp+4+a2]
0x4DB365: test    bl, bl
0x4DB367: push    ebp
0x4DB368: push    esi
0x4DB369: mov     esi, ecx
0x4DB36B: push    edi
0x4DB36C: mov     edi, [esi+8]
0x4DB36F: jz      short loc_4DB379
0x4DB371: or      edi, 200h
0x4DB377: jmp     short loc_4DB37F
0x4DB379: and     edi, 0FFFFFDFFh
0x4DB37F: lea     ecx, [esi+44h]
0x4DB382: call    sub_41E650
0x4DB387: mov     ebp, eax
0x4DB389: test    ebp, ebp
0x4DB38B: jz      short loc_4DB3AC
0x4DB38D: test    bl, bl
0x4DB38F: jnz     short loc_4DB396
0x4DB391: call    sub_7B84E0
0x4DB396: mov     eax, [ebp+0]
0x4DB399: push    ebx
0x4DB39A: push    eax
0x4DB39B: push    0
0x4DB39D: call    GetShadowSceneNode
0x4DB3A2: add     esp, 4
0x4DB3A5: mov     ecx, eax
0x4DB3A7: call    sub_7C7030
0x4DB3AC: mov     [esi+8], edi
0x4DB3AF: pop     edi
0x4DB3B0: pop     esi
0x4DB3B1: pop     ebp
0x4DB3B2: pop     ebx
0x4DB3B3: retn    4
