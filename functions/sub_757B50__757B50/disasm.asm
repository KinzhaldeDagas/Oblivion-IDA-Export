0x757B50: push    esi
0x757B51: push    48h ; 'H'; Size
0x757B53: call    FormHeapAlloc
0x757B58: mov     esi, eax
0x757B5A: add     esp, 4
0x757B5D: test    esi, esi
0x757B5F: jz      short loc_757B72
0x757B61: mov     ecx, esi
0x757B63: call    sub_75F510
0x757B68: mov     dword ptr [esi], offset ??_7NiPSysFieldAttenuationCtlr@@6B@; const NiPSysFieldAttenuationCtlr::`vftable'
0x757B6E: mov     eax, esi
0x757B70: pop     esi
0x757B71: retn
0x757B72: xor     eax, eax
0x757B74: pop     esi
0x757B75: retn
