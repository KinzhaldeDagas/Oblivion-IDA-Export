0x6CA8E0: push    ebx
0x6CA8E1: mov     ebx, [esp+4+Src]
0x6CA8E5: test    ebx, ebx
0x6CA8E7: push    esi
0x6CA8E8: push    edi
0x6CA8E9: mov     edi, ecx
0x6CA8EB: jz      short loc_6CA910
0x6CA8ED: mov     esi, [esp+0Ch+arg_4]
0x6CA8F1: test    esi, esi
0x6CA8F3: jz      short loc_6CA910
0x6CA8F5: mov     eax, [esi]
0x6CA8F7: mov     edx, [eax+4]
0x6CA8FA: mov     ecx, esi
0x6CA8FC: call    edx
0x6CA8FE: test    eax, eax
0x6CA900: jz      short loc_6CA910
0x6CA902: cmp     eax, offset dword_B3CDF8
0x6CA907: jz      short loc_6CA918
0x6CA909: mov     eax, [eax+4]
0x6CA90C: test    eax, eax
0x6CA90E: jnz     short loc_6CA902
0x6CA910: pop     edi
0x6CA911: pop     esi
0x6CA912: xor     al, al
0x6CA914: pop     ebx
0x6CA915: retn    8
0x6CA918: mov     ax, [edi+24h]
0x6CA91C: mov     cx, [esi+8]
0x6CA920: and     cx, 0FFF9h
0x6CA925: add     ax, ax
0x6CA928: or      ax, cx
0x6CA92B: mov     [esi+8], ax
0x6CA92F: fld     dword ptr [edi+28h]
0x6CA932: and     word ptr [esi+8], 0FFEFh
0x6CA938: fstp    dword ptr [esi+0Ch]
0x6CA93B: push    esi; int
0x6CA93C: push    ebx; Src
0x6CA93D: mov     ecx, edi
0x6CA93F: call    sub_6CA160
0x6CA944: pop     edi
0x6CA945: pop     esi
0x6CA946: pop     ebx
0x6CA947: retn    8
