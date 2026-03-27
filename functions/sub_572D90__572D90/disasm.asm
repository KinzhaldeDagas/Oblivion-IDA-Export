0x572D90: mov     ecx, ds:0B3A6A4h
0x572D96: test    ecx, ecx
0x572D98: jz      short locret_572DB6
0x572D9A: push    esi
0x572D9B: mov     esi, ecx
0x572D9D: call    sub_572010
0x572DA2: push    esi
0x572DA3: call    FormHeapFree
0x572DA8: add     esp, 4
0x572DAB: mov     dword ptr ds:0B3A6A4h, 0
0x572DB5: pop     esi
0x572DB6: retn
