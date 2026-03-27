0x89F8E0: push    esi
0x89F8E1: push    edi
0x89F8E2: mov     edi, [esp+8+arg_0]
0x89F8E6: mov     esi, ecx
0x89F8E8: mov     ecx, edi
0x89F8EA: call    sub_712A20
0x89F8EF: push    edi
0x89F8F0: mov     ecx, esi
0x89F8F2: call    sub_89D650
0x89F8F7: mov     eax, [esi]
0x89F8F9: mov     edx, [eax+74h]
0x89F8FC: lea     ecx, [esp+8+arg_0]
0x89F900: push    ecx
0x89F901: mov     ecx, esi
0x89F903: call    edx
0x89F905: mov     esi, eax
0x89F907: test    esi, esi
0x89F909: jz      short loc_89F967
0x89F90B: mov     eax, [esi+14h]
0x89F90E: test    eax, eax
0x89F910: js      short loc_89F949
0x89F912: mov     ecx, ds:0BA9DE4h
0x89F918: mov     edx, large fs:2Ch
0x89F91F: mov     ecx, [edx+ecx*4]
0x89F922: mov     ecx, [ecx+19Ch]
0x89F928: test    ecx, ecx
0x89F92A: jnz     short loc_89F932
0x89F92C: mov     ecx, ds:0BA7D9Ch
0x89F932: mov     edx, [esi+0Ch]
0x89F935: and     eax, 3FFFFFFFh
0x89F93A: add     eax, eax
0x89F93C: add     eax, eax
0x89F93E: push    14h
0x89F940: add     eax, eax
0x89F942: push    eax
0x89F943: push    edx
0x89F944: call    sub_8A75D0
0x89F949: mov     eax, [esi+14h]
0x89F94C: and     eax, 0C0000000h
0x89F951: or      eax, 80000000h
0x89F956: mov     dword ptr [esi+0Ch], 0
0x89F95D: mov     dword ptr [esi+10h], 0
0x89F964: mov     [esi+14h], eax
0x89F967: cmp     dword ptr [edi+4], 9
0x89F96B: jnb     short loc_89F97D
0x89F96D: mov     eax, [esi]
0x89F96F: test    al, 20h
0x89F971: jz      short loc_89F97D
0x89F973: and     eax, 0FFFFFFDFh
0x89F976: or      eax, 8000h
0x89F97B: mov     [esi], eax
0x89F97D: mov     eax, [esi]
0x89F97F: mov     ecx, eax
0x89F981: and     cl, 3Fh
0x89F984: cmp     cl, 8
0x89F987: jnz     short loc_89F990
0x89F989: and     eax, 0FFFFBFFFh
0x89F98E: mov     [esi], eax
0x89F990: pop     edi
0x89F991: pop     esi
0x89F992: retn    4
