0x46A1B7: test    edi, edi
0x46A1B9: push    1
0x46A1BB: push    esi
0x46A1BC: jz      short loc_46A1D0
0x46A1BE: mov     ecx, [ebp+4]
0x46A1C1: mov     eax, [edi]
0x46A1C3: mov     edx, [eax+114h]
0x46A1C9: push    ecx
0x46A1CA: mov     ecx, edi
0x46A1CC: call    edx
0x46A1CE: jmp     short TESContainer_CopyContentsToRef___AddExtraScriptLoop_Next
0x46A1D0: mov     eax, [ebp+4]
0x46A1D3: mov     ecx, [esp+8+arg_1C]
0x46A1D7: push    eax
0x46A1D8: call    TESObjectREFR_AddItem_Abbrev
