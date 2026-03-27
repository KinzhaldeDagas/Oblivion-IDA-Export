0x798630: mov     edx, [ecx+2Ch]
0x798633: test    edx, edx
0x798635: jz      short locret_798684
0x798637: mov     ax, [esp+arg_4]
0x79863C: cmp     ax, [ecx+28h]
0x798640: jnb     short locret_798684
0x798642: cmp     dword ptr [ecx+10h], 0
0x798646: jz      short locret_798684
0x798648: cmp     dword ptr [ecx+24h], 0
0x79864C: jz      short locret_798684
0x79864E: cmp     dword ptr [ecx+20h], 0
0x798652: jz      short locret_798684
0x798654: cmp     dword ptr [ecx+4], 0
0x798658: jz      short locret_798684
0x79865A: cmp     dword ptr [ecx+0Ch], 0
0x79865E: jz      short locret_798684
0x798660: movzx   eax, ax
0x798663: mov     ecx, eax
0x798665: shl     ecx, 4
0x798668: push    esi
0x798669: add     ecx, eax
0x79866B: lea     esi, [edx+ecx*4]
0x79866E: mov     edx, [esp+4+arg_0]
0x798672: push    edi
0x798673: mov     ecx, 0Fh
0x798678: mov     edi, edx
0x79867A: rep movsd
0x79867C: pop     edi
0x79867D: mov     byte ptr [edx], 1
0x798680: mov     [edx+8], eax
0x798683: pop     esi
0x798684: retn    14h
