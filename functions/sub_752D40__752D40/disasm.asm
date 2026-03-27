0x752D40: push    esi
0x752D41: mov     esi, ecx
0x752D43: mov     eax, [esi+8]
0x752D46: push    eax
0x752D47: mov     dword ptr [esi], offset ??_7NiPSysModifier@@6B@; const NiPSysModifier::`vftable'
0x752D4D: call    FormHeapFree
0x752D52: add     esp, 4
0x752D55: mov     ecx, esi
0x752D57: call    NiRefObject_destr
0x752D5C: test    [esp+4+arg_0], 1
0x752D61: jz      short loc_752D6C
0x752D63: push    esi
0x752D64: call    FormHeapFree
0x752D69: add     esp, 4
0x752D6C: mov     eax, esi
0x752D6E: pop     esi
0x752D6F: retn    4
