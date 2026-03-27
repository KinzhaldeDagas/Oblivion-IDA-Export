0x9682B0: push    40h ; '@'; Size
0x9682B2: call    FormHeapAlloc
0x9682B7: add     esp, 4
0x9682BA: test    eax, eax
0x9682BC: jz      short loc_9682DF
0x9682BE: push    offset dword_B258E8
0x9682C3: push    offset dword_B258DC
0x9682C8: push    offset dword_B258D0
0x9682CD: push    offset Vector3_InitValue?
0x9682D2: push    offset flt_B258F4
0x9682D7: mov     ecx, eax
0x9682D9: call    sub_961580
0x9682DE: retn
0x9682DF: xor     eax, eax
0x9682E1: retn
