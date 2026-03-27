0x9A102F: mov     eax, hConsoleOutput
0x9A1034: cmp     eax, 0FFFFFFFFh
0x9A1037: push    esi
0x9A1038: mov     esi, ds:CloseHandle
0x9A103E: jz      short loc_9A1048
0x9A1040: cmp     eax, 0FFFFFFFEh
0x9A1043: jz      short loc_9A1048
0x9A1045: push    eax; hObject
0x9A1046: call    esi ; CloseHandle
0x9A1048: mov     eax, dword_B323E0
0x9A104D: cmp     eax, 0FFFFFFFFh
0x9A1050: jz      short loc_9A105A
0x9A1052: cmp     eax, 0FFFFFFFEh
0x9A1055: jz      short loc_9A105A
0x9A1057: push    eax; hObject
0x9A1058: call    esi ; CloseHandle
0x9A105A: pop     esi
0x9A105B: retn
