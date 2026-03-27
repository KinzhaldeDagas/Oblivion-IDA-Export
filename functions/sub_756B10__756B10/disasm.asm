0x756B10: push    esi
0x756B11: push    edi
0x756B12: push    48h ; 'H'; Size
0x756B14: mov     edi, ecx
0x756B16: call    FormHeapAlloc
0x756B1B: mov     esi, eax
0x756B1D: add     esp, 4
0x756B20: test    esi, esi
0x756B22: jz      short loc_756B45
0x756B24: mov     ecx, esi
0x756B26: call    sub_75F510
0x756B2B: mov     eax, [esp+8+arg_0]
0x756B2F: push    eax
0x756B30: push    esi
0x756B31: mov     ecx, edi
0x756B33: mov     dword ptr [esi], offset ??_7NiPSysInitialRotAngleVarCtlr@@6B@; const NiPSysInitialRotAngleVarCtlr::`vftable'
0x756B39: call    sub_75F5A0
0x756B3E: pop     edi
0x756B3F: mov     eax, esi
0x756B41: pop     esi
0x756B42: retn    4
0x756B45: mov     eax, [esp+8+arg_0]
0x756B49: push    eax
0x756B4A: xor     esi, esi
0x756B4C: push    esi
0x756B4D: mov     ecx, edi
0x756B4F: call    sub_75F5A0
0x756B54: pop     edi
0x756B55: mov     eax, esi
0x756B57: pop     esi
0x756B58: retn    4
