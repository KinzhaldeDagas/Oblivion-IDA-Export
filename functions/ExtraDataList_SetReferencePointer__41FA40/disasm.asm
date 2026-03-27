0x41FA40: push    0FFFFFFFFh
0x41FA42: push    offset SEH_6E3250
0x41FA47: mov     eax, large fs:0
0x41FA4D: push    eax
0x41FA4E: push    esi
0x41FA4F: push    edi
0x41FA50: mov     eax, ___security_cookie
0x41FA55: xor     eax, esp
0x41FA57: push    eax
0x41FA58: lea     eax, [esp+18h+var_C]
0x41FA5C: mov     large fs:0, eax
0x41FA62: mov     edi, ecx
0x41FA64: mov     ecx, SaveLoad_CurrentSavegame
0x41FA6A: call    sub_45A500
0x41FA6F: test    al, al
0x41FA71: mov     esi, [esp+18h+arg_0]
0x41FA75: jnz     short loc_41FA86
0x41FA77: test    esi, esi
0x41FA79: jz      short loc_41FA86
0x41FA7B: mov     ecx, esi; this
0x41FA7D: call    TESObjectREFR_IsPersistent?
0x41FA82: test    al, al
0x41FA84: jz      short ExtraDataList_SetReferencePointer___Done
0x41FA86: push    22h ; '"'; a2
0x41FA88: mov     ecx, edi; this
0x41FA8A: call    BaseExtraList_GetExtraData
0x41FA8F: test    eax, eax
0x41FA91: jnz     short ExtraDataList_SetReferencePointer___SetRefPointer
