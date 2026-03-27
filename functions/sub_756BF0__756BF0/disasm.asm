0x756BF0: push    esi
0x756BF1: push    edi
0x756BF2: push    48h ; 'H'; Size
0x756BF4: mov     edi, ecx
0x756BF6: call    FormHeapAlloc
0x756BFB: mov     esi, eax
0x756BFD: add     esp, 4
0x756C00: test    esi, esi
0x756C02: jz      short loc_756C25
0x756C04: mov     ecx, esi
0x756C06: call    sub_75F510
0x756C0B: mov     eax, [esp+8+arg_0]
0x756C0F: push    eax
0x756C10: push    esi
0x756C11: mov     ecx, edi
0x756C13: mov     dword ptr [esi], offset ??_7NiPSysInitialRotAngleCtlr@@6B@; const NiPSysInitialRotAngleCtlr::`vftable'
0x756C19: call    sub_75F5A0
0x756C1E: pop     edi
0x756C1F: mov     eax, esi
0x756C21: pop     esi
0x756C22: retn    4
0x756C25: mov     eax, [esp+8+arg_0]
0x756C29: push    eax
0x756C2A: xor     esi, esi
0x756C2C: push    esi
0x756C2D: mov     ecx, edi
0x756C2F: call    sub_75F5A0
0x756C34: pop     edi
0x756C35: mov     eax, esi
0x756C37: pop     esi
0x756C38: retn    4
