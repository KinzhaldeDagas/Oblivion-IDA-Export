0x79B860: push    ebx
0x79B861: mov     ebx, [esp+4+arg_0]
0x79B865: push    esi
0x79B866: mov     esi, [esp+8+arg_4]
0x79B86A: cmp     ebx, esi
0x79B86C: jz      short loc_79B8BB
0x79B86E: push    edi
0x79B86F: mov     edi, [esp+0Ch+arg_8]
0x79B873: sub     esi, 30h ; '0'
0x79B876: sub     edi, 30h ; '0'
0x79B879: push    esi
0x79B87A: mov     ecx, edi
0x79B87C: call    sub_79B160
0x79B881: fld     dword ptr [esi+10h]
0x79B884: cmp     esi, ebx
0x79B886: fstp    dword ptr [edi+10h]
0x79B889: fld     dword ptr [esi+14h]
0x79B88C: fstp    dword ptr [edi+14h]
0x79B88F: mov     al, [esi+18h]
0x79B892: mov     [edi+18h], al
0x79B895: fld     dword ptr [esi+1Ch]
0x79B898: fstp    dword ptr [edi+1Ch]
0x79B89B: fld     dword ptr [esi+20h]
0x79B89E: fstp    dword ptr [edi+20h]
0x79B8A1: fld     dword ptr [esi+24h]
0x79B8A4: fstp    dword ptr [edi+24h]
0x79B8A7: mov     ecx, [esi+28h]
0x79B8AA: mov     [edi+28h], ecx
0x79B8AD: mov     edx, [esi+2Ch]
0x79B8B0: mov     [edi+2Ch], edx
0x79B8B3: jnz     short loc_79B873
0x79B8B5: mov     eax, edi
0x79B8B7: pop     edi
0x79B8B8: pop     esi
0x79B8B9: pop     ebx
0x79B8BA: retn
0x79B8BB: mov     eax, [esp+8+arg_8]
0x79B8BF: pop     esi
0x79B8C0: pop     ebx
0x79B8C1: retn
