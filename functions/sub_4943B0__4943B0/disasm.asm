0x4943B0: mov     edx, [esp+arg_0]
0x4943B4: push    2034h
0x4943B9: mov     byte ptr ds:0B34D85h, 1
0x4943C0: mov     eax, [ecx]
0x4943C2: mov     eax, [eax+24h]
0x4943C5: push    offset aConfirm; "Confirm"
0x4943CA: push    edx
0x4943CB: call    eax
0x4943CD: mov     byte ptr ds:0B34D85h, 0
0x4943D4: retn    4
