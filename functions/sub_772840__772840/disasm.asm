0x772840: push    esi
0x772841: mov     esi, ecx
0x772843: mov     eax, [esi]
0x772845: push    eax
0x772846: call    FormHeapFree
0x77284B: mov     esi, [esi+8]
0x77284E: add     esp, 4
0x772851: test    esi, esi
0x772853: jz      short loc_772865
0x772855: mov     ecx, esi
0x772857: call    sub_772840
0x77285C: push    esi
0x77285D: call    FormHeapFree
0x772862: add     esp, 4
0x772865: pop     esi
0x772866: retn
