0x757F70: push    esi
0x757F71: push    edi
0x757F72: push    48h ; 'H'; Size
0x757F74: mov     edi, ecx
0x757F76: call    FormHeapAlloc
0x757F7B: mov     esi, eax
0x757F7D: add     esp, 4
0x757F80: test    esi, esi
0x757F82: jz      short loc_757FA5
0x757F84: mov     ecx, esi
0x757F86: call    sub_75F510
0x757F8B: mov     eax, [esp+8+arg_0]
0x757F8F: push    eax
0x757F90: push    esi
0x757F91: mov     ecx, edi
0x757F93: mov     dword ptr [esi], offset ??_7NiPSysEmitterLifeSpanCtlr@@6B@; const NiPSysEmitterLifeSpanCtlr::`vftable'
0x757F99: call    sub_75F5A0
0x757F9E: pop     edi
0x757F9F: mov     eax, esi
0x757FA1: pop     esi
0x757FA2: retn    4
0x757FA5: mov     eax, [esp+8+arg_0]
0x757FA9: push    eax
0x757FAA: xor     esi, esi
0x757FAC: push    esi
0x757FAD: mov     ecx, edi
0x757FAF: call    sub_75F5A0
0x757FB4: pop     edi
0x757FB5: mov     eax, esi
0x757FB7: pop     esi
0x757FB8: retn    4
