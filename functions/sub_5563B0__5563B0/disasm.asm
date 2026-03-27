0x5563B0: cmp     byte ptr [ecx+4], 0
0x5563B4: jz      short locret_5563C3
0x5563B6: mov     eax, [ecx]
0x5563B8: push    1; Comperand
0x5563BA: push    0; Exchange
0x5563BC: push    eax; Destination
0x5563BD: call    dword ptr ds:0A2813Ch
0x5563C3: retn
