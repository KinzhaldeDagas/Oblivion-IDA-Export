0x756A10: push    esi
0x756A11: push    edi
0x756A12: push    48h ; 'H'; Size
0x756A14: mov     edi, ecx
0x756A16: call    FormHeapAlloc
0x756A1B: mov     esi, eax
0x756A1D: add     esp, 4
0x756A20: test    esi, esi
0x756A22: jz      short loc_756A45
0x756A24: mov     ecx, esi
0x756A26: call    sub_75F510
0x756A2B: mov     eax, [esp+8+arg_0]
0x756A2F: push    eax
0x756A30: push    esi
0x756A31: mov     ecx, edi
0x756A33: mov     dword ptr [esi], offset ??_7NiPSysInitialRotSpeedCtlr@@6B@; const NiPSysInitialRotSpeedCtlr::`vftable'
0x756A39: call    sub_75F5A0
0x756A3E: pop     edi
0x756A3F: mov     eax, esi
0x756A41: pop     esi
0x756A42: retn    4
0x756A45: mov     eax, [esp+8+arg_0]
0x756A49: push    eax
0x756A4A: xor     esi, esi
0x756A4C: push    esi
0x756A4D: mov     ecx, edi
0x756A4F: call    sub_75F5A0
0x756A54: pop     edi
0x756A55: mov     eax, esi
0x756A57: pop     esi
0x756A58: retn    4
