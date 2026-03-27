0x788720: mov     ax, [esp+arg_0]
0x788725: test    ax, ax
0x788728: push    esi
0x788729: push    edi
0x78872A: jl      short loc_788791
0x78872C: movsx   edi, ax
0x78872F: movzx   eax, word ptr [ecx+20h]
0x788733: cmp     edi, eax
0x788735: jge     short loc_788791
0x788737: lea     esi, [ecx+38h]
0x78873A: mov     ecx, [esi+4]
0x78873D: test    ecx, ecx
0x78873F: jz      short loc_78874D
0x788741: mov     eax, [esi+8]
0x788744: sub     eax, ecx
0x788746: sar     eax, 4
0x788749: cmp     edi, eax
0x78874B: jb      short loc_788752
0x78874D: call    __invalid_parameter_noinfo
0x788752: mov     eax, edi
0x788754: shl     eax, 4
0x788757: add     eax, [esi+4]
0x78875A: mov     ecx, [eax+4]
0x78875D: test    ecx, ecx
0x78875F: jz      short loc_788791
0x788761: mov     edx, [eax+8]
0x788764: sub     edx, ecx
0x788766: sar     edx, 1
0x788768: jz      short loc_788791
0x78876A: push    edi
0x78876B: mov     ecx, esi
0x78876D: call    sub_6F10E0
0x788772: mov     esi, eax
0x788774: mov     eax, [esi+4]
0x788777: test    eax, eax
0x788779: jz      short loc_788784
0x78877B: mov     ecx, [esi+8]
0x78877E: sub     ecx, eax
0x788780: sar     ecx, 1
0x788782: jnz     short loc_788789
0x788784: call    __invalid_parameter_noinfo
0x788789: mov     eax, [esi+4]
0x78878C: pop     edi
0x78878D: pop     esi
0x78878E: retn    4
0x788791: pop     edi
0x788792: xor     eax, eax
0x788794: pop     esi
0x788795: retn    4
