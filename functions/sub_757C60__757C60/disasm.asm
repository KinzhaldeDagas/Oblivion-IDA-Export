0x757C60: push    esi
0x757C61: push    edi
0x757C62: push    48h ; 'H'; Size
0x757C64: mov     edi, ecx
0x757C66: call    FormHeapAlloc
0x757C6B: mov     esi, eax
0x757C6D: add     esp, 4
0x757C70: test    esi, esi
0x757C72: jz      short loc_757C95
0x757C74: mov     ecx, esi
0x757C76: call    sub_75F510
0x757C7B: mov     eax, [esp+8+arg_0]
0x757C7F: push    eax
0x757C80: push    esi
0x757C81: mov     ecx, edi
0x757C83: mov     dword ptr [esi], offset ??_7NiPSysEmitterSpeedCtlr@@6B@; const NiPSysEmitterSpeedCtlr::`vftable'
0x757C89: call    sub_75F5A0
0x757C8E: pop     edi
0x757C8F: mov     eax, esi
0x757C91: pop     esi
0x757C92: retn    4
0x757C95: mov     eax, [esp+8+arg_0]
0x757C99: push    eax
0x757C9A: xor     esi, esi
0x757C9C: push    esi
0x757C9D: mov     ecx, edi
0x757C9F: call    sub_75F5A0
0x757CA4: pop     edi
0x757CA5: mov     eax, esi
0x757CA7: pop     esi
0x757CA8: retn    4
