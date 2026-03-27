0x7319E0: push    0FFFFFFFFh
0x7319E2: push    offset SEH_7319E0
0x7319E7: mov     eax, large fs:0
0x7319ED: push    eax
0x7319EE: push    ecx
0x7319EF: push    esi
0x7319F0: mov     eax, ds:0B30AACh
0x7319F5: xor     eax, esp
0x7319F7: push    eax
0x7319F8: lea     eax, [esp+18h+var_C]
0x7319FC: mov     large fs:0, eax
0x731A02: mov     esi, ecx
0x731A04: mov     [esp+18h+var_10], esi
0x731A08: push    offset NiRefObject_objcount; lpAddend
0x731A0D: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x731A13: mov     dword ptr [esi+4], 0
0x731A1A: call    dword ptr ds:0A28078h
0x731A20: push    offset sub_7016A0; a5
0x731A25: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x731A2A: push    0Ah; size
0x731A2C: push    4; a2
0x731A2E: lea     eax, [esi+8]
0x731A31: push    eax; a1
0x731A32: mov     [esp+2Ch+var_4], 0
0x731A3A: mov     dword ptr [esi], offset ??_7NiPropertyState@@6B@; const NiPropertyState::`vftable'
0x731A40: call    ArrayConstructor
0x731A45: mov     ecx, esi
0x731A47: mov     byte ptr [esp+18h+var_4], 1
0x731A4C: call    sub_7317B0
0x731A51: mov     eax, esi
0x731A53: mov     ecx, [esp+18h+var_C]
0x731A57: mov     large fs:0, ecx
0x731A5E: pop     ecx
0x731A5F: pop     esi
0x731A60: add     esp, 10h
0x731A63: retn
