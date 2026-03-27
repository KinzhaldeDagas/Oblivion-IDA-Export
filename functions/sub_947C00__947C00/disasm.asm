0x947C00: mov     ecx, ds:0BA7D98h
0x947C06: mov     eax, [ecx]
0x947C08: push    32h ; '2'
0x947C0A: push    1Ch
0x947C0C: call    dword ptr [eax+10h]
0x947C0F: mov     word ptr [eax+4], 1Ch
0x947C15: mov     ecx, eax
0x947C17: jmp     loc_947B00
