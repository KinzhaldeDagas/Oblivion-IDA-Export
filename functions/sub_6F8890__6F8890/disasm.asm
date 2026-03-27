0x6F8890: push    ebx
0x6F8891: mov     ebx, [esp+4+Src]
0x6F8895: push    ebp
0x6F8896: mov     ebp, [esp+8+DstSize]
0x6F889A: push    esi
0x6F889B: push    edi; MaxCount
0x6F889C: mov     edi, [esp+10h+arg_4]
0x6F88A0: mov     esi, edi
0x6F88A2: sub     esi, ebx
0x6F88A4: cmp     ebp, esi
0x6F88A6: jnb     short loc_6F88AD
0x6F88A8: call    __invalid_parameter_noinfo
0x6F88AD: mov     eax, [esp+10h+Dst]
0x6F88B1: push    esi; Src
0x6F88B2: push    ebx; Src
0x6F88B3: push    ebp; DstSize
0x6F88B4: push    eax; Dst
0x6F88B5: call    _memcpy_s
0x6F88BA: add     esp, 10h
0x6F88BD: mov     eax, edi
0x6F88BF: pop     edi
0x6F88C0: pop     esi
0x6F88C1: pop     ebp
0x6F88C2: pop     ebx
0x6F88C3: retn    14h
