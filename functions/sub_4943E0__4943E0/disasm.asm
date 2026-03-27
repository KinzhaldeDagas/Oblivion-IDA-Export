0x4943E0: mov     edx, [esp+arg_0]
0x4943E4: push    2033h
0x4943E9: mov     byte ptr ds:0B34D85h, 1
0x4943F0: mov     eax, [ecx]
0x4943F2: mov     eax, [eax+24h]
0x4943F5: push    offset aConfirm; "Confirm"
0x4943FA: push    edx
0x4943FB: call    eax
0x4943FD: mov     byte ptr ds:0B34D85h, 0
0x494404: retn    4
