0x424C50: push    0FFFFFFFFh
0x424C52: push    offset SEH_8C8970
0x424C57: mov     eax, large fs:0
0x424C5D: push    eax
0x424C5E: push    ecx
0x424C5F: push    esi
0x424C60: push    edi
0x424C61: mov     eax, ___security_cookie
0x424C66: xor     eax, esp
0x424C68: push    eax
0x424C69: lea     eax, [esp+1Ch+var_C]
0x424C6D: mov     large fs:0, eax
0x424C73: mov     edi, ecx
0x424C75: push    23h ; '#'; a2
0x424C77: call    BaseExtraList_GetExtraData
0x424C7C: mov     esi, eax
0x424C7E: test    esi, esi
0x424C80: jnz     short loc_424CB5
0x424C82: push    10h; Size
0x424C84: call    FormHeapAlloc
0x424C89: add     esp, 4
0x424C8C: mov     [esp+1Ch+var_10], eax
0x424C90: test    eax, eax
0x424C92: mov     [esp+1Ch+var_4], esi
0x424C96: jz      short loc_424CA1
0x424C98: mov     ecx, eax; this
0x424C9A: call    ??0ExtraFollower@@QAE@XZ; ExtraFollower::ExtraFollower(void)
0x424C9F: jmp     short loc_424CA3
0x424CA1: xor     eax, eax
0x424CA3: push    eax; BSExtraData *
0x424CA4: mov     ecx, edi; ExtraDataList *
0x424CA6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x424CAE: mov     esi, eax
0x424CB0: call    BaseExtraList_AddExtra
0x424CB5: mov     ecx, [esi+0Ch]
0x424CB8: mov     edx, [esp+1Ch+arg_0]
0x424CBC: mov     eax, ecx
0x424CBE: test    eax, eax
0x424CC0: jz      short loc_424CCD
0x424CC2: cmp     [eax], edx
0x424CC4: jz      short loc_424CD3
0x424CC6: mov     eax, [eax+4]
0x424CC9: test    eax, eax
0x424CCB: jnz     short loc_424CC2
0x424CCD: push    edx
0x424CCE: call    BSSimpleList_PushFront
0x424CD3: mov     ecx, SaveLoad_CurrentSavegame
0x424CD9: call    sub_45A500
0x424CDE: mov     ecx, [esp+1Ch+var_C]
0x424CE2: mov     large fs:0, ecx
0x424CE9: pop     ecx
0x424CEA: pop     edi
0x424CEB: pop     esi
0x424CEC: add     esp, 10h
0x424CEF: retn    4
