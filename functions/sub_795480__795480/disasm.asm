0x795480: push    ebx
0x795481: mov     ebx, [esp+4+arg_0]
0x795485: push    edi
0x795486: mov     edi, ecx
0x795488: mov     ecx, [ebx+4]
0x79548B: xor     edx, edx
0x79548D: cmp     ecx, edx
0x79548F: jnz     short loc_795495
0x795491: xor     eax, eax
0x795493: jmp     short loc_79549C
0x795495: mov     eax, [ebx+8]
0x795498: sub     eax, ecx
0x79549A: sar     eax, 1
0x79549C: cmp     eax, edx
0x79549E: mov     [edi+4], edx
0x7954A1: mov     [edi+8], edx
0x7954A4: mov     [edi+0Ch], edx
0x7954A7: jz      short loc_795506
0x7954A9: cmp     eax, 0FFFFFFFFh
0x7954AC: jbe     short loc_7954B3
0x7954AE: call    sub_790B90
0x7954B3: push    ebp
0x7954B4: push    esi; MaxCount
0x7954B5: lea     esi, [eax+eax]
0x7954B8: push    esi; Size
0x7954B9: call    FormHeapAlloc
0x7954BE: add     esi, eax
0x7954C0: mov     [edi+4], eax
0x7954C3: mov     [edi+8], eax
0x7954C6: mov     [edi+0Ch], esi
0x7954C9: mov     esi, [ebx+8]
0x7954CC: add     esp, 4
0x7954CF: cmp     [ebx+4], esi
0x7954D2: jbe     short loc_7954D9
0x7954D4: call    __invalid_parameter_noinfo
0x7954D9: mov     ebp, [ebx+4]
0x7954DC: cmp     ebp, [ebx+8]
0x7954DF: jbe     short loc_7954E6
0x7954E1: call    __invalid_parameter_noinfo
0x7954E6: mov     ecx, [edi+4]
0x7954E9: sub     esi, ebp
0x7954EB: sar     esi, 1
0x7954ED: lea     eax, [esi+esi]
0x7954F0: lea     esi, [eax+ecx]
0x7954F3: jz      short loc_795501
0x7954F5: push    eax; Src
0x7954F6: push    ebp; Src
0x7954F7: push    eax; DstSize
0x7954F8: push    ecx; Dst
0x7954F9: call    _memmove_s
0x7954FE: add     esp, 10h
0x795501: mov     [edi+8], esi
0x795504: pop     esi
0x795505: pop     ebp
0x795506: mov     eax, edi
0x795508: pop     edi
0x795509: pop     ebx
0x79550A: retn    4
