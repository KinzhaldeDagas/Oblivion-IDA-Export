0x4154D7: mov     esi, ecx
0x4154D9: mov     ecx, [esp+arg_34]
0x4154DD: lea     eax, [esp+arg_10]
0x4154E1: or      ebp, 0FFFFFFFFh
0x4154E4: push    eax
0x4154E5: mov     [esp+4+arg_10], ebp
0x4154E9: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x4154EE: mov     ecx, [esp+arg_10]
0x4154F2: push    ecx
0x4154F3: call    EffectSettingCollection_LookupByCode
0x4154F8: mov     edi, eax
0x4154FA: xor     ebx, ebx
0x4154FC: add     esp, 4
0x4154FF: cmp     edi, ebx
0x415501: jz      EffectItemList_LoadItem___BadEffectSetting
