0x7877E0: push    esi
0x7877E1: mov     esi, ecx
0x7877E3: push    edi
0x7877E4: mov     edi, [esi]
0x7877E6: lea     eax, [edi+1]
0x7877E9: mov     [esi], eax
0x7877EB: mov     ecx, [esi+8]
0x7877EE: test    ecx, ecx
0x7877F0: jz      short loc_7877FB
0x7877F2: mov     eax, [esi+0Ch]
0x7877F5: sub     eax, ecx
0x7877F7: cmp     edi, eax
0x7877F9: jb      short loc_787800
0x7877FB: call    __invalid_parameter_noinfo
0x787800: mov     ecx, [esi+8]
0x787803: xor     eax, eax
0x787805: cmp     [edi+ecx], al
0x787808: pop     edi
0x787809: setnz   al
0x78780C: pop     esi
0x78780D: retn
