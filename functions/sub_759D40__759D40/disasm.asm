0x759D40: push    esi
0x759D41: mov     esi, ecx
0x759D43: mov     eax, [esi+5Ch]
0x759D46: push    eax
0x759D47: mov     dword ptr [esi], offset ??_7NiPSysData@@6B@; const NiPSysData::`vftable'
0x759D4D: call    FormHeapFree
0x759D52: mov     ecx, [esi+60h]
0x759D55: push    ecx
0x759D56: call    FormHeapFree
0x759D5B: add     esp, 8
0x759D5E: mov     ecx, esi; this
0x759D60: call    sub_73EEC0
0x759D65: test    [esp+4+arg_0], 1
0x759D6A: jz      short loc_759D75
0x759D6C: push    esi
0x759D6D: call    FormHeapFree
0x759D72: add     esp, 4
0x759D75: mov     eax, esi
0x759D77: pop     esi
0x759D78: retn    4
