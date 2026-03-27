0x75C0F0: push    esi
0x75C0F1: push    48h ; 'H'; Size
0x75C0F3: call    FormHeapAlloc
0x75C0F8: mov     esi, eax
0x75C0FA: add     esp, 4
0x75C0FD: test    esi, esi
0x75C0FF: jz      short loc_75C112
0x75C101: mov     ecx, esi
0x75C103: call    sub_75F510
0x75C108: mov     dword ptr [esi], offset ??_7NiPSysAirFieldSpreadCtlr@@6B@; const NiPSysAirFieldSpreadCtlr::`vftable'
0x75C10E: mov     eax, esi
0x75C110: pop     esi
0x75C111: retn
0x75C112: xor     eax, eax
0x75C114: pop     esi
0x75C115: retn
