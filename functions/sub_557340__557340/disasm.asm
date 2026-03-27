0x557340: push    ebx
0x557341: mov     ebx, [esp+4+arg_0]
0x557345: mov     eax, [ebx+4]
0x557348: push    esi
0x557349: mov     esi, ecx
0x55734B: xor     ecx, ecx
0x55734D: cmp     eax, ecx
0x55734F: push    edi
0x557350: jnz     short loc_557356
0x557352: xor     edi, edi
0x557354: jmp     short loc_55735B
0x557356: mov     edi, [ebx+8]
0x557359: sub     edi, eax
0x55735B: cmp     edi, ecx
0x55735D: mov     [esi+4], ecx
0x557360: mov     [esi+8], ecx
0x557363: mov     [esi+0Ch], ecx
0x557366: jz      short loc_5573BB
0x557368: cmp     edi, 0FFFFFFFFh
0x55736B: jbe     short loc_557372
0x55736D: call    sub_790B90
0x557372: push    edi; Size
0x557373: call    FormHeapAlloc
0x557378: mov     [esi+4], eax
0x55737B: mov     [esi+8], eax
0x55737E: add     eax, edi
0x557380: mov     [esi+0Ch], eax
0x557383: mov     edi, [ebx+8]
0x557386: add     esp, 4
0x557389: cmp     [ebx+4], edi
0x55738C: jbe     short loc_557393
0x55738E: call    __invalid_parameter_noinfo
0x557393: push    ebp; MaxCount
0x557394: mov     ebp, [ebx+4]
0x557397: cmp     ebp, [ebx+8]
0x55739A: jbe     short loc_5573A1
0x55739C: call    __invalid_parameter_noinfo
0x5573A1: mov     eax, [esi+4]
0x5573A4: sub     edi, ebp
0x5573A6: lea     ebx, [edi+eax]
0x5573A9: jz      short loc_5573B7
0x5573AB: push    edi; Src
0x5573AC: push    ebp; Src
0x5573AD: push    edi; DstSize
0x5573AE: push    eax; Dst
0x5573AF: call    _memmove_s
0x5573B4: add     esp, 10h
0x5573B7: mov     [esi+8], ebx
0x5573BA: pop     ebp
0x5573BB: pop     edi
0x5573BC: mov     eax, esi
0x5573BE: pop     esi
0x5573BF: pop     ebx
0x5573C0: retn    4
