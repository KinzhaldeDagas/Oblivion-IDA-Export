0x74F8C0: mov     ax, word ptr [esp+arg_0]
0x74F8C5: test    ax, ax
0x74F8C8: jnz     short loc_74F8E8
0x74F8CA: push    18h; Size
0x74F8CC: call    FormHeapAlloc
0x74F8D1: add     esp, 4
0x74F8D4: test    eax, eax
0x74F8D6: jz      short loc_74F90B
0x74F8D8: fldz
0x74F8DA: push    ecx
0x74F8DB: mov     ecx, eax
0x74F8DD: fstp    [esp+4+var_4]; float
0x74F8E0: call    sub_6D29E0
0x74F8E5: retn    4
0x74F8E8: cmp     ax, 1
0x74F8EC: jnz     short loc_74F90B
0x74F8EE: push    18h; Size
0x74F8F0: call    FormHeapAlloc
0x74F8F5: add     esp, 4
0x74F8F8: test    eax, eax
0x74F8FA: jz      short loc_74F90B
0x74F8FC: mov     [esp+arg_0], 0
0x74F904: mov     ecx, eax
0x74F906: jmp     sub_6E7FA0
0x74F90B: xor     eax, eax
0x74F90D: retn    4
