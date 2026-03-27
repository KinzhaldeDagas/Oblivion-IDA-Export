0x65D620: push    ebx
0x65D621: mov     bl, [esp+4+arg_0]
0x65D625: test    bl, bl
0x65D627: push    esi
0x65D628: mov     esi, ecx
0x65D62A: jnz     short loc_65D645
0x65D62C: mov     eax, [esi+5B0h]
0x65D632: push    eax
0x65D633: call    FormHeapFree
0x65D638: add     esp, 4
0x65D63B: mov     dword ptr [esi+5B0h], 0
0x65D645: mov     [esi+6E5h], bl
0x65D64B: pop     esi
0x65D64C: pop     ebx
0x65D64D: retn    4
