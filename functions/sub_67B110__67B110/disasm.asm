0x67B110: push    ebx
0x67B111: mov     ebx, [esp+4+arg_0]
0x67B115: push    ebp
0x67B116: push    esi
0x67B117: mov     esi, [esp+0Ch+arg_4]
0x67B11B: push    edi
0x67B11C: mov     edi, [esp+10h+arg_8]
0x67B120: cmp     esi, edi
0x67B122: mov     ebp, [ebx+esi*4]
0x67B125: mov     eax, esi
0x67B127: mov     [esp+10h+arg_8], eax
0x67B12B: mov     [esp+10h+arg_0], edi
0x67B12F: jge     short loc_67B1AE
0x67B131: mov     eax, [ebx+edi*4]
0x67B134: push    ebp
0x67B135: push    eax
0x67B136: call    sub_67B080
0x67B13B: add     esp, 8
0x67B13E: test    eax, eax
0x67B140: jg      short loc_67B15B
0x67B142: cmp     esi, edi
0x67B144: jge     short loc_67B15D
0x67B146: mov     ecx, [ebx+edi*4-4]
0x67B14A: sub     edi, 1
0x67B14D: push    ebp
0x67B14E: push    ecx
0x67B14F: call    sub_67B080
0x67B154: add     esp, 8
0x67B157: test    eax, eax
0x67B159: jle     short loc_67B142
0x67B15B: cmp     esi, edi
0x67B15D: jz      short loc_67B168
0x67B15F: mov     edx, [ebx+edi*4]
0x67B162: mov     [ebx+esi*4], edx
0x67B165: add     esi, 1
0x67B168: mov     eax, [ebx+esi*4]
0x67B16B: push    ebp
0x67B16C: push    eax
0x67B16D: call    sub_67B080
0x67B172: add     esp, 8
0x67B175: test    eax, eax
0x67B177: jl      short loc_67B199
0x67B179: lea     esp, [esp+0]
0x67B180: cmp     esi, edi
0x67B182: jge     short loc_67B19B
0x67B184: mov     ecx, [ebx+esi*4+4]
0x67B188: add     esi, 1
0x67B18B: push    ebp
0x67B18C: push    ecx
0x67B18D: call    sub_67B080
0x67B192: add     esp, 8
0x67B195: test    eax, eax
0x67B197: jge     short loc_67B180
0x67B199: cmp     esi, edi
0x67B19B: jz      short loc_67B1A6
0x67B19D: mov     edx, [ebx+esi*4]
0x67B1A0: mov     [ebx+edi*4], edx
0x67B1A3: sub     edi, 1
0x67B1A6: cmp     esi, edi
0x67B1A8: jl      short loc_67B131
0x67B1AA: mov     eax, [esp+10h+arg_8]
0x67B1AE: cmp     eax, esi
0x67B1B0: mov     edi, [esp+10h+arg_0]
0x67B1B4: mov     [ebx+esi*4], ebp
0x67B1B7: jge     short loc_67B1C7
0x67B1B9: lea     ecx, [esi-1]
0x67B1BC: push    ecx
0x67B1BD: push    eax
0x67B1BE: push    ebx
0x67B1BF: call    sub_67B110
0x67B1C4: add     esp, 0Ch
0x67B1C7: cmp     [esp+10h+arg_0], esi
0x67B1CB: jle     short loc_67B1D5
0x67B1CD: add     esi, 1
0x67B1D0: jmp     loc_67B120
0x67B1D5: pop     edi
0x67B1D6: pop     esi
0x67B1D7: pop     ebp
0x67B1D8: pop     ebx
0x67B1D9: retn
