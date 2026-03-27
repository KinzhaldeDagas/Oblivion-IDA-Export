0x589430: push    ecx
0x589431: push    edi
0x589432: mov     edi, [ecx+34h]
0x589435: test    edi, edi
0x589437: jz      short loc_589473
0x589439: push    esi
0x58943A: lea     ebx, [ebx+0]
0x589440: mov     ecx, [edi+8]
0x589443: lea     eax, [edi+8]
0x589446: mov     eax, [ecx+18h]
0x589449: test    eax, eax
0x58944B: mov     edi, [edi]
0x58944D: jz      short loc_589469
0x58944F: nop
0x589450: mov     esi, [eax+8]
0x589453: lea     edx, [eax+8]
0x589456: movzx   edx, word ptr [esi+18h]
0x58945A: cmp     dx, 0FA4h
0x58945F: mov     eax, [eax]
0x589461: jz      short loc_589476
0x589463: ja      short loc_589469
0x589465: test    eax, eax
0x589467: jnz     short loc_589450
0x589469: call    sub_589430
0x58946E: test    edi, edi
0x589470: jnz     short loc_589440
0x589472: pop     esi
0x589473: pop     edi
0x589474: pop     ecx
0x589475: retn
0x589476: fld     dword ptr [esi+4]
0x589479: fstp    [esp+0Ch+var_4]
0x58947D: fld     dword ptr ds:0A379B4h
0x589483: fcomp   [esp+0Ch+var_4]
0x589487: fnstsw  ax
0x589489: test    ah, 44h
0x58948C: jp      short loc_589469
0x58948E: or      dword ptr [ecx+2Ch], 100h
0x589495: jmp     short loc_58946E
