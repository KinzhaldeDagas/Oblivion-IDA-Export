0x754960: push    esi
0x754961: push    edi
0x754962: mov     edi, [esp+8+arg_0]
0x754966: push    edi
0x754967: mov     esi, ecx
0x754969: call    sub_75EED0
0x75496E: test    al, al
0x754970: jnz     short loc_754979
0x754972: pop     edi
0x754973: xor     al, al
0x754975: pop     esi
0x754976: retn    4
0x754979: mov     eax, [esi+2Ch]
0x75497C: test    eax, eax
0x75497E: jz      short loc_75498A
0x754980: cmp     dword ptr [edi+2Ch], 0
0x754984: jz      short loc_754972
0x754986: test    eax, eax
0x754988: jnz     short loc_754994
0x75498A: cmp     dword ptr [edi+2Ch], 0
0x75498E: jnz     short loc_754972
0x754990: test    eax, eax
0x754992: jz      short loc_7549AA
0x754994: mov     eax, [edi+2Ch]
0x754997: test    eax, eax
0x754999: jz      short loc_7549AA
0x75499B: mov     ecx, [esi+2Ch]
0x75499E: mov     edx, [ecx]
0x7549A0: push    eax
0x7549A1: mov     eax, [edx+2Ch]
0x7549A4: call    eax
0x7549A6: test    al, al
0x7549A8: jz      short loc_754972
0x7549AA: fld     dword ptr [esi+30h]
0x7549AD: fld     dword ptr [edi+30h]
0x7549B0: fucompp
0x7549B2: fnstsw  ax
0x7549B4: test    ah, 44h
0x7549B7: jp      short loc_754972
0x7549B9: pop     edi
0x7549BA: mov     al, 1
0x7549BC: pop     esi
0x7549BD: retn    4
