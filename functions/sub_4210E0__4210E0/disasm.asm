0x4210E0: push    0FFFFFFFFh
0x4210E2: push    offset SEH_8C8970
0x4210E7: mov     eax, large fs:0
0x4210ED: push    eax
0x4210EE: push    ecx
0x4210EF: push    esi
0x4210F0: push    edi
0x4210F1: mov     eax, ___security_cookie
0x4210F6: xor     eax, esp
0x4210F8: push    eax
0x4210F9: lea     eax, [esp+1Ch+var_C]
0x4210FD: mov     large fs:0, eax
0x421103: mov     edi, ecx
0x421105: push    4Bh ; 'K'; a2
0x421107: call    BaseExtraList_GetExtraData
0x42110C: mov     esi, eax
0x42110E: test    esi, esi
0x421110: jnz     short loc_421145
0x421112: push    1Ch; Size
0x421114: call    FormHeapAlloc
0x421119: add     esp, 4
0x42111C: mov     [esp+1Ch+var_10], eax
0x421120: test    eax, eax
0x421122: mov     [esp+1Ch+var_4], esi
0x421126: jz      short loc_421131
0x421128: mov     ecx, eax; this
0x42112A: call    ??0ExtraSavedMovementData@@QAE@XZ; ExtraSavedMovementData::ExtraSavedMovementData(void)
0x42112F: jmp     short loc_421133
0x421131: xor     eax, eax
0x421133: push    eax; BSExtraData *
0x421134: mov     ecx, edi; ExtraDataList *
0x421136: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42113E: mov     esi, eax
0x421140: call    BaseExtraList_AddExtra
0x421145: mov     eax, SaveLoad_CurrentSavegame
0x42114A: cmp     byte ptr [eax+7Ch], 24h ; '$'
0x42114E: jb      short loc_42119E
0x421150: cmp     dword ptr [esi+14h], 0
0x421154: jz      short loc_421183
0x421156: mov     ecx, dword_B34D90
0x42115C: mov     edx, [ecx]
0x42115E: mov     eax, [edx+18h]
0x421161: push    offset aSetsavedattach; "SetSavedAttachedAnimation() is being ca"...
0x421166: call    eax
0x421168: mov     ecx, [esp+1Ch+arg_0]
0x42116C: mov     [esi+14h], ecx
0x42116F: mov     ecx, [esp+1Ch+var_C]
0x421173: mov     large fs:0, ecx
0x42117A: pop     ecx
0x42117B: pop     edi
0x42117C: pop     esi
0x42117D: add     esp, 10h
0x421180: retn    4
0x421183: mov     edx, [esp+1Ch+arg_0]
0x421187: mov     [esi+14h], edx
0x42118A: mov     ecx, [esp+1Ch+var_C]
0x42118E: mov     large fs:0, ecx
0x421195: pop     ecx
0x421196: pop     edi
0x421197: pop     esi
0x421198: add     esp, 10h
0x42119B: retn    4
0x42119E: mov     eax, [esp+1Ch+arg_0]
0x4211A2: mov     [esi+14h], eax
0x4211A5: mov     ecx, [esp+1Ch+var_C]
0x4211A9: mov     large fs:0, ecx
0x4211B0: pop     ecx
0x4211B1: pop     edi
0x4211B2: pop     esi
0x4211B3: add     esp, 10h
0x4211B6: retn    4
