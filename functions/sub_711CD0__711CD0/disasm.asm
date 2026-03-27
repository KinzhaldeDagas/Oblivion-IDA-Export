0x711CD0: push    esi
0x711CD1: push    edi
0x711CD2: mov     edi, [esp+8+a2]
0x711CD6: push    edi; a2
0x711CD7: mov     esi, ecx
0x711CD9: call    sub_700650
0x711CDE: test    al, al
0x711CE0: jnz     short loc_711CE7
0x711CE2: pop     edi
0x711CE3: pop     esi
0x711CE4: retn    4
0x711CE7: cmp     dword ptr [esi+8], 0
0x711CEB: jz      short loc_711CF8
0x711CED: mov     ecx, [esi+8]
0x711CF0: mov     eax, [ecx]
0x711CF2: mov     edx, [eax+24h]
0x711CF5: push    edi
0x711CF6: call    edx
0x711CF8: pop     edi
0x711CF9: mov     al, 1
0x711CFB: pop     esi
0x711CFC: retn    4
