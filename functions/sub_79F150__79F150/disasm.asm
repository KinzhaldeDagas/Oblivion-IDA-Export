0x79F150: push    ecx
0x79F151: push    ebx
0x79F152: push    ebp
0x79F153: mov     ebp, [esp+0Ch+arg_4]
0x79F157: push    esi
0x79F158: mov     esi, ecx
0x79F15A: mov     ebx, [esi+4]
0x79F15D: test    ebx, ebx
0x79F15F: push    edi
0x79F160: jz      short loc_79F16E
0x79F162: mov     eax, [esi+8]
0x79F165: mov     ecx, eax
0x79F167: sub     ecx, ebx
0x79F169: sar     ecx, 4
0x79F16C: jnz     short loc_79F172
0x79F16E: xor     edi, edi
0x79F170: jmp     short loc_79F191
0x79F172: cmp     ebx, eax
0x79F174: jbe     short loc_79F17B
0x79F176: call    __invalid_parameter_noinfo
0x79F17B: test    ebp, ebp
0x79F17D: jz      short loc_79F183
0x79F17F: cmp     ebp, esi
0x79F181: jz      short loc_79F188
0x79F183: call    __invalid_parameter_noinfo
0x79F188: mov     edi, [esp+14h+arg_8]
0x79F18C: sub     edi, ebx
0x79F18E: sar     edi, 4
0x79F191: mov     edx, [esp+14h+arg_C]
0x79F195: mov     eax, [esp+14h+arg_8]
0x79F199: push    edx
0x79F19A: push    1
0x79F19C: push    eax
0x79F19D: push    ebp
0x79F19E: mov     ecx, esi
0x79F1A0: call    sub_79EBB0
