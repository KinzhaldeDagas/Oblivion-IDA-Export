0x4946B0: push    ebx
0x4946B1: push    esi
0x4946B2: push    0; hTemplateFile
0x4946B4: push    80h ; '€'; dwFlagsAndAttributes
0x4946B9: push    3; dwCreationDisposition
0x4946BB: push    0; lpSecurityAttributes
0x4946BD: mov     ebx, ecx
0x4946BF: push    1; dwShareMode
0x4946C1: push    80000000h; dwDesiredAccess
0x4946C6: mov     dword ptr [ebx], offset ??_7MessageHandler@@6B@; const MessageHandler::`vftable'
0x4946CC: call    sub_494480
0x4946D1: push    eax; lpFileName
0x4946D2: call    dword ptr ds:0A28090h
0x4946D8: mov     esi, eax
0x4946DA: test    esi, esi
0x4946DC: jz      short loc_494711
0x4946DE: cmp     esi, 0FFFFFFFFh
0x4946E1: jz      short loc_494711
0x4946E3: call    dword ptr ds:0A281ECh
0x4946E9: test    eax, eax
0x4946EB: jnz     short loc_494711
0x4946ED: push    edi
0x4946EE: push    eax; lpFileSizeHigh
0x4946EF: push    esi; hFile
0x4946F0: call    dword ptr ds:0A280A0h
0x4946F6: push    esi; hObject
0x4946F7: mov     edi, eax
0x4946F9: call    dword ptr ds:0A28094h
0x4946FF: cmp     edi, 46h ; 'F'
0x494702: pop     edi
0x494703: jnz     short loc_494711
0x494705: call    sub_494480
0x49470A: push    eax; lpFileName
0x49470B: call    dword ptr ds:0A280ACh
0x494711: cmp     ds:0B34D90h, ebx
0x494717: pop     esi
0x494718: pop     ebx
0x494719: jnz     short locret_494725
0x49471B: mov     dword ptr ds:0B34D90h, 0
0x494725: retn
