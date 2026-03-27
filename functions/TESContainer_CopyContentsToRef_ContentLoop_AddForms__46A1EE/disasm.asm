0x46A1EE: test    edi, edi
0x46A1F0: push    eax
0x46A1F1: mov     eax, [ebp+4]
0x46A1F4: push    0
0x46A1F6: push    eax
0x46A1F7: jz      short loc_46A207
0x46A1F9: mov     edx, [edi]
0x46A1FB: mov     edx, [edx+114h]
0x46A201: mov     ecx, edi
0x46A203: call    edx
0x46A205: jmp     short TESContainer_CopyContentsToRef___ContentLoop_Next
0x46A207: mov     ecx, [esp+0Ch+arg_1C]
0x46A20B: call    TESObjectREFR_AddItem_Abbrev
