0x4C1630: push    esi
0x4C1631: mov     esi, ecx
0x4C1633: mov     eax, [esi+0Ch]
0x4C1636: push    eax
0x4C1637: mov     dword ptr [esi], offset ??_7NiBinaryExtraData@@6B@; const NiBinaryExtraData::`vftable'
0x4C163D: call    FormHeapFree
0x4C1642: add     esp, 4
0x4C1645: mov     ecx, esi
0x4C1647: mov     dword ptr [esi+0Ch], 0
0x4C164E: call    NiExtraData_dtor
0x4C1653: test    [esp+4+arg_0], 1
0x4C1658: jz      short loc_4C1663
0x4C165A: push    esi
0x4C165B: call    FormHeapFree
0x4C1660: add     esp, 4
0x4C1663: mov     eax, esi
0x4C1665: pop     esi
0x4C1666: retn    4
