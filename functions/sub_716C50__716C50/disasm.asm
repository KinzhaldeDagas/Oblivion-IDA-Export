0x716C50: push    esi
0x716C51: mov     esi, ecx
0x716C53: mov     eax, [esi+0Ch]
0x716C56: push    eax
0x716C57: mov     dword ptr [esi], offset ??_7NiStringExtraData@@6B@; const NiStringExtraData::`vftable'
0x716C5D: call    FormHeapFree
0x716C62: add     esp, 4
0x716C65: mov     ecx, esi
0x716C67: mov     dword ptr [esi+0Ch], 0
0x716C6E: call    NiExtraData_dtor
0x716C73: test    [esp+4+arg_0], 1
0x716C78: jz      short loc_716C83
0x716C7A: push    esi
0x716C7B: call    FormHeapFree
0x716C80: add     esp, 4
0x716C83: mov     eax, esi
0x716C85: pop     esi
0x716C86: retn    4
