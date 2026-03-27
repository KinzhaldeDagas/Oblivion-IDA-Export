0x99A803: push    ebp
0x99A804: mov     ebp, esp
0x99A806: sub     esp, 10h
0x99A809: push    ebx
0x99A80A: push    esi
0x99A80B: mov     esi, [ebp+arg_0]
0x99A80E: push    edi
0x99A80F: xor     edi, edi
0x99A811: cmp     [esi+18h], edi
0x99A814: mov     [ebp+var_4], edi
0x99A817: mov     [ebp+var_10], esi
0x99A81A: mov     [ebp+var_C], edi
0x99A81D: jnz     short loc_99A834
0x99A81F: cmp     [esi+1Ch], edi
0x99A822: jnz     short loc_99A834
0x99A824: mov     [ebp+var_4], edi
0x99A827: mov     [ebp+Memory], edi
0x99A82A: mov     ebx, offset off_B30DB4
0x99A82F: jmp     loc_99AA6A
0x99A834: push    30h ; '0'
0x99A836: push    1
0x99A838: call    unknown_libname_74
0x99A83D: mov     ebx, eax
0x99A83F: cmp     ebx, edi
0x99A841: pop     ecx
0x99A842: pop     ecx
0x99A843: jnz     short loc_99A84D
0x99A845: xor     eax, eax
0x99A847: inc     eax
0x99A848: jmp     loc_99AAC2
0x99A84D: push    4
0x99A84F: call    unknown_libname_72
0x99A854: cmp     eax, edi
0x99A856: pop     ecx
0x99A857: mov     [ebp+Memory], eax
0x99A85A: jnz     short loc_99A865
0x99A85C: push    ebx; Memory
0x99A85D: call    _free
0x99A862: pop     ecx
0x99A863: jmp     short loc_99A845
0x99A865: mov     [eax], edi
0x99A867: cmp     [esi+18h], edi
0x99A86A: jz      loc_99AA29
0x99A870: push    4
0x99A872: call    unknown_libname_72
0x99A877: cmp     eax, edi
0x99A879: pop     ecx
0x99A87A: mov     [ebp+var_4], eax
0x99A87D: jnz     short loc_99A890
0x99A87F: push    ebx; Memory
0x99A880: call    _free
0x99A885: push    [ebp+Memory]; Memory
0x99A888: call    _free
0x99A88D: pop     ecx
0x99A88E: jmp     short loc_99A862
0x99A890: mov     [eax], edi
0x99A892: movzx   esi, word ptr [esi+38h]
0x99A896: lea     eax, [ebx+0Ch]
0x99A899: push    eax
0x99A89A: push    15h
0x99A89C: push    esi
0x99A89D: lea     eax, [ebp+var_10]
0x99A8A0: push    1
0x99A8A2: push    eax
0x99A8A3: call    unknown_libname_90
0x99A8A8: mov     edi, eax
0x99A8AA: lea     eax, [ebx+10h]
0x99A8AD: push    eax
0x99A8AE: push    14h
0x99A8B0: push    esi
0x99A8B1: lea     eax, [ebp+var_10]
0x99A8B4: push    1
0x99A8B6: push    eax
0x99A8B7: call    unknown_libname_90
0x99A8BC: or      edi, eax
0x99A8BE: lea     eax, [ebx+14h]
0x99A8C1: push    eax
0x99A8C2: push    16h
0x99A8C4: push    esi
0x99A8C5: lea     eax, [ebp+var_10]
0x99A8C8: push    1
0x99A8CA: push    eax
0x99A8CB: call    unknown_libname_90
0x99A8D0: or      edi, eax
0x99A8D2: lea     eax, [ebx+18h]
0x99A8D5: push    eax
0x99A8D6: push    17h
0x99A8D8: push    esi
0x99A8D9: lea     eax, [ebp+var_10]
0x99A8DC: push    1
0x99A8DE: push    eax
0x99A8DF: call    unknown_libname_90
0x99A8E4: add     esp, 50h
0x99A8E7: or      edi, eax
0x99A8E9: lea     eax, [ebx+1Ch]
0x99A8EC: push    eax
0x99A8ED: push    18h
0x99A8EF: push    esi
0x99A8F0: lea     eax, [ebp+var_10]
0x99A8F3: push    1
0x99A8F5: push    eax
0x99A8F6: call    unknown_libname_90
0x99A8FB: or      edi, eax
0x99A8FD: lea     eax, [ebx+20h]
0x99A900: push    eax
0x99A901: push    50h ; 'P'
0x99A903: push    esi
0x99A904: lea     eax, [ebp+var_10]
0x99A907: push    1
0x99A909: push    eax
0x99A90A: call    unknown_libname_90
0x99A90F: or      edi, eax
0x99A911: lea     eax, [ebx+24h]
0x99A914: push    eax
0x99A915: push    51h ; 'Q'
0x99A917: push    esi
0x99A918: lea     eax, [ebp+var_10]
0x99A91B: push    1
0x99A91D: push    eax
0x99A91E: call    unknown_libname_90
0x99A923: or      edi, eax
0x99A925: lea     eax, [ebx+28h]
0x99A928: push    eax
0x99A929: push    1Ah
0x99A92B: push    esi
0x99A92C: lea     eax, [ebp+var_10]
0x99A92F: push    0
0x99A931: push    eax
0x99A932: call    unknown_libname_90
0x99A937: add     esp, 50h
0x99A93A: or      edi, eax
0x99A93C: lea     eax, [ebx+29h]
0x99A93F: push    eax
0x99A940: push    19h
0x99A942: push    esi
0x99A943: push    0
0x99A945: lea     eax, [ebp+var_10]
0x99A948: push    eax
0x99A949: call    unknown_libname_90
0x99A94E: or      edi, eax
0x99A950: lea     eax, [ebx+2Ah]
0x99A953: push    eax
0x99A954: push    54h ; 'T'
0x99A956: push    esi
0x99A957: lea     eax, [ebp+var_10]
0x99A95A: push    0
0x99A95C: push    eax
0x99A95D: call    unknown_libname_90
0x99A962: or      edi, eax
0x99A964: lea     eax, [ebx+2Bh]
0x99A967: push    eax
0x99A968: push    55h ; 'U'
0x99A96A: push    esi
0x99A96B: lea     eax, [ebp+var_10]
0x99A96E: push    0
0x99A970: push    eax
0x99A971: call    unknown_libname_90
0x99A976: or      edi, eax
0x99A978: lea     eax, [ebx+2Ch]
0x99A97B: push    eax
0x99A97C: push    56h ; 'V'
0x99A97E: push    esi
0x99A97F: lea     eax, [ebp+var_10]
0x99A982: push    0
0x99A984: push    eax
0x99A985: call    unknown_libname_90
0x99A98A: add     esp, 50h
0x99A98D: or      edi, eax
0x99A98F: lea     eax, [ebx+2Dh]
0x99A992: push    eax
0x99A993: push    57h ; 'W'
0x99A995: push    esi
0x99A996: lea     eax, [ebp+var_10]
0x99A999: push    0
0x99A99B: push    eax
0x99A99C: call    unknown_libname_90
0x99A9A1: or      edi, eax
0x99A9A3: lea     eax, [ebx+2Eh]
0x99A9A6: push    eax
0x99A9A7: push    52h ; 'R'
0x99A9A9: push    esi
0x99A9AA: lea     eax, [ebp+var_10]
0x99A9AD: push    0
0x99A9AF: push    eax
0x99A9B0: call    unknown_libname_90
0x99A9B5: or      edi, eax
0x99A9B7: lea     eax, [ebx+2Fh]
0x99A9BA: push    eax
0x99A9BB: push    53h ; 'S'
0x99A9BD: push    esi
0x99A9BE: lea     eax, [ebp+var_10]
0x99A9C1: push    0
0x99A9C3: push    eax
0x99A9C4: call    unknown_libname_90
0x99A9C9: add     esp, 3Ch
0x99A9CC: or      eax, edi
0x99A9CE: jz      short loc_99A9F4
0x99A9D0: push    ebx
0x99A9D1: call    ___free_lconv_mon
0x99A9D6: push    ebx; Memory
0x99A9D7: call    _free
0x99A9DC: push    [ebp+Memory]; Memory
0x99A9DF: call    _free
0x99A9E4: push    [ebp+var_4]; Memory
0x99A9E7: call    _free
0x99A9EC: add     esp, 10h
0x99A9EF: jmp     loc_99A845
0x99A9F4: mov     eax, [ebx+1Ch]
0x99A9F7: jmp     short loc_99AA0B
0x99A9F9: mov     cl, [eax]
0x99A9FB: cmp     cl, 30h ; '0'
0x99A9FE: jl      short loc_99AA12
0x99AA00: cmp     cl, 39h ; '9'
0x99AA03: jg      short loc_99AA12
0x99AA05: sub     cl, 30h ; '0'
0x99AA08: mov     [eax], cl
0x99AA0A: inc     eax
0x99AA0B: cmp     byte ptr [eax], 0
0x99AA0E: jnz     short loc_99A9F9
0x99AA10: jmp     short loc_99AA35
0x99AA12: cmp     cl, 3Bh ; ';'
0x99AA15: jnz     short loc_99AA0A
0x99AA17: mov     esi, eax
0x99AA19: lea     edi, [esi+1]
0x99AA1C: mov     cl, [edi]
0x99AA1E: mov     [esi], cl
0x99AA20: mov     esi, edi
0x99AA22: cmp     byte ptr [esi], 0
0x99AA25: jnz     short loc_99AA19
0x99AA27: jmp     short loc_99AA0B
0x99AA29: push    0Ch
0x99AA2B: pop     ecx
0x99AA2C: mov     esi, offset off_B30DB4
0x99AA31: mov     edi, ebx
0x99AA33: rep movsd
0x99AA35: mov     eax, [ebp+arg_0]
0x99AA38: mov     esi, [ebp+arg_0]
0x99AA3B: add     eax, 0BCh ; '¼'
0x99AA40: mov     ecx, [eax]
0x99AA42: mov     ecx, [ecx]
0x99AA44: mov     [ebx], ecx
0x99AA46: mov     ecx, [eax]
0x99AA48: mov     ecx, [ecx+4]
0x99AA4B: mov     [ebx+4], ecx
0x99AA4E: mov     eax, [eax]
0x99AA50: mov     eax, [eax+8]
0x99AA53: mov     ecx, [ebp+Memory]
0x99AA56: mov     [ebx+8], eax
0x99AA59: xor     eax, eax
0x99AA5B: inc     eax
0x99AA5C: xor     edi, edi
0x99AA5E: cmp     [ebp+var_4], edi
0x99AA61: mov     [ecx], eax
0x99AA63: jz      short loc_99AA6A
0x99AA65: mov     ecx, [ebp+var_4]
0x99AA68: mov     [ecx], eax
0x99AA6A: mov     eax, [esi+0B8h]
0x99AA70: cmp     eax, edi
0x99AA72: jz      short loc_99AA7B
0x99AA74: push    eax; lpAddend
0x99AA75: call    ds:InterlockedDecrement
0x99AA7B: mov     eax, [esi+0B0h]
0x99AA81: cmp     eax, edi
0x99AA83: jz      short loc_99AAA8
0x99AA85: push    eax; lpAddend
0x99AA86: call    ds:InterlockedDecrement
0x99AA8C: test    eax, eax
0x99AA8E: jnz     short loc_99AAA8
0x99AA90: push    dword ptr [esi+0BCh]; Memory
0x99AA96: call    _free
0x99AA9B: push    dword ptr [esi+0B0h]; Memory
0x99AAA1: call    _free
0x99AAA6: pop     ecx
0x99AAA7: pop     ecx
0x99AAA8: mov     eax, [ebp+var_4]
0x99AAAB: mov     [esi+0B8h], eax
0x99AAB1: mov     eax, [ebp+Memory]
0x99AAB4: mov     [esi+0B0h], eax
0x99AABA: mov     [esi+0BCh], ebx
0x99AAC0: xor     eax, eax
0x99AAC2: pop     edi
0x99AAC3: pop     esi
0x99AAC4: pop     ebx
0x99AAC5: leave
0x99AAC6: retn
