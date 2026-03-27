0x945DA0: mov     eax, [esp+arg_8]
0x945DA4: mov     edx, eax
0x945DA6: and     edx, 0Ch
0x945DA9: and     eax, 3
0x945DAC: shl     edx, 2
0x945DAF: or      edx, eax
0x945DB1: mov     eax, [esp+wMsg]
0x945DB5: push    edx; lEvent
0x945DB6: mov     edx, [esp+4+hWnd]
0x945DBA: push    eax; wMsg
0x945DBB: mov     eax, [ecx+20h]
0x945DBE: push    edx; hWnd
0x945DBF: push    eax; s
0x945DC0: call    WSAAsyncSelect_0
0x945DC5: neg     eax
0x945DC7: sbb     eax, eax
0x945DC9: neg     eax
0x945DCB: retn    0Ch
