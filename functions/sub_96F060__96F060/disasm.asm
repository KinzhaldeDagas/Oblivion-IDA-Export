0x96F060: push    ebx
0x96F061: push    ebp
0x96F062: push    esi
0x96F063: push    edi
0x96F064: mov     edi, [esp+10h+arg_0]
0x96F068: push    edi
0x96F069: mov     ebp, ecx
0x96F06B: call    sub_7094A0
0x96F070: lea     esi, [ebp+0Ch]
0x96F073: mov     ebx, 3
0x96F078: push    edi
0x96F079: mov     ecx, esi
0x96F07B: call    sub_7094A0
0x96F080: add     esi, 0Ch
0x96F083: sub     ebx, 1
0x96F086: jnz     short loc_96F078
0x96F088: push    3
0x96F08A: add     ebp, 30h ; '0'
0x96F08D: push    ebp
0x96F08E: push    edi
0x96F08F: call    sub_6DE2B0
0x96F094: add     esp, 0Ch
0x96F097: pop     edi
0x96F098: pop     esi
0x96F099: pop     ebp
0x96F09A: pop     ebx
0x96F09B: retn    4
