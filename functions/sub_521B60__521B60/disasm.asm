0x521B60: call    sub_578D70
0x521B65: mov     ecx, ds:0B362D0h
0x521B6B: sub     al, 1
0x521B6D: neg     al
0x521B6F: push    1
0x521B71: push    0
0x521B73: push    0
0x521B75: sbb     eax, eax
0x521B77: add     eax, 2
0x521B7A: mov     ds:0B362CCh, eax
0x521B7F: mov     eax, ds:0B333C4h
0x521B84: push    eax
0x521B85: call    ActivateRef
0x521B8A: mov     dword ptr ds:0B362D0h, 0
0x521B94: retn
