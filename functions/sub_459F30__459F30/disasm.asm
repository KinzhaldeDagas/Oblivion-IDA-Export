0x459F30: push    esi
0x459F31: mov     esi, [esp+4+arg_0]
0x459F35: test    esi, esi
0x459F37: push    edi
0x459F38: mov     edi, ecx
0x459F3A: jz      short loc_459F58
0x459F3C: mov     ecx, esi; this
0x459F3E: call    TESObjectCELL_IsInterior
0x459F43: test    al, al
0x459F45: jnz     short loc_459F5F
0x459F47: mov     eax, [esi+0Ch]
0x459F4A: push    eax; ArgList
0x459F4B: push    offset aPurgesaveddata; "PurgeSavedDataForCell() can only be cal"...
0x459F50: call    PrintError
0x459F55: add     esp, 8
0x459F58: pop     edi
0x459F59: xor     eax, eax
0x459F5B: pop     esi
0x459F5C: retn    4
0x459F5F: mov     esi, [esi+0Ch]
0x459F62: push    1
0x459F64: push    esi
0x459F65: mov     ecx, edi
0x459F67: call    sub_459AF0
0x459F6C: pop     edi
0x459F6D: pop     esi
0x459F6E: retn    4
