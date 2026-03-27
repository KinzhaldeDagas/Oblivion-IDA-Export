0x7F3870: mov     eax, ds:0B468F8h
0x7F3875: test    eax, eax
0x7F3877: jz      short loc_7F3882
0x7F3879: push    eax
0x7F387A: call    FormHeapFree
0x7F387F: add     esp, 4
0x7F3882: mov     dword ptr ds:0B468F8h, 0
0x7F388C: retn
