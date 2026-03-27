0x6E72B0: push    esi
0x6E72B1: mov     esi, ecx
0x6E72B3: mov     eax, [esi+8]
0x6E72B6: push    eax
0x6E72B7: mov     dword ptr [esi], offset ??_7NiBSplineData@@6B@; const NiBSplineData::`vftable'
0x6E72BD: call    FormHeapFree
0x6E72C2: mov     ecx, [esi+0Ch]
0x6E72C5: push    ecx
0x6E72C6: call    FormHeapFree
0x6E72CB: add     esp, 8
0x6E72CE: mov     ecx, esi
0x6E72D0: call    NiRefObject_destr
0x6E72D5: test    [esp+4+arg_0], 1
0x6E72DA: jz      short loc_6E72E5
0x6E72DC: push    esi
0x6E72DD: call    FormHeapFree
0x6E72E2: add     esp, 4
0x6E72E5: mov     eax, esi
0x6E72E7: pop     esi
0x6E72E8: retn    4
