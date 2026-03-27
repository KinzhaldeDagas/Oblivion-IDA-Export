0x75DF50: push    esi
0x75DF51: mov     esi, ecx
0x75DF53: call    NiObject_constr
0x75DF58: fldz
0x75DF5A: xor     eax, eax
0x75DF5C: mov     [esi+8], eax
0x75DF5F: mov     dword ptr [esi], offset ??_7NiPSysUpdateTask@@6B@; const NiPSysUpdateTask::`vftable'
0x75DF65: mov     [esi+0Ch], eax
0x75DF68: fstp    dword ptr [esi+10h]
0x75DF6B: mov     eax, esi
0x75DF6D: pop     esi
0x75DF6E: retn
