0x41B60C: mov     eax, edi
0x41B60E: neg     eax
0x41B610: sbb     eax, eax
0x41B612: and     eax, esi
0x41B614: push    ebx
0x41B615: push    eax
0x41B616: call    TESFullname_Load; FULL loader used by XMRK: empty payload frees/clears the string. Nonempty payload is copied with max=0 into the exact temporary and passed to BSStringT_Set/strlen; a missing terminal NUL can scan past the chunk allocation.
0x41B61B: add     esp, 8
0x41B61E: jmp     short MagicItemObject_LoadForm___LoadBaseData_
