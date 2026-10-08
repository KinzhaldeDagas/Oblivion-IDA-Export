0x41B32C: mov     eax, edi
0x41B32E: neg     eax
0x41B330: sbb     eax, eax
0x41B332: and     eax, esi
0x41B334: push    ebx
0x41B335: push    eax
0x41B336: call    TESFullname_Load; FULL loader used by XMRK: empty payload frees/clears the string. Nonempty payload is copied with max=0 into the exact temporary and passed to BSStringT_Set/strlen; a missing terminal NUL can scan past the chunk allocation.
0x41B33B: add     esp, 8
0x41B33E: jmp     short MagicItemForm_LoadForm___LoadBaseData_
