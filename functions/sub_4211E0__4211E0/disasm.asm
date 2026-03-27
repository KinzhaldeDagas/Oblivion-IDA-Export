0x4211E0: push    0FFFFFFFFh
0x4211E2: push    offset SEH_8C8970
0x4211E7: mov     eax, large fs:0
0x4211ED: push    eax
0x4211EE: push    ecx
0x4211EF: push    esi
0x4211F0: push    edi
0x4211F1: mov     eax, ___security_cookie
0x4211F6: xor     eax, esp
0x4211F8: push    eax
0x4211F9: lea     eax, [esp+1Ch+var_C]
0x4211FD: mov     large fs:0, eax
0x421203: mov     edi, ecx
0x421205: push    4Bh ; 'K'; a2
0x421207: call    BaseExtraList_GetExtraData
0x42120C: mov     esi, eax
0x42120E: test    esi, esi
0x421210: jnz     short loc_421245
0x421212: push    1Ch; Size
0x421214: call    FormHeapAlloc
0x421219: add     esp, 4
0x42121C: mov     [esp+1Ch+var_10], eax
0x421220: test    eax, eax
0x421222: mov     [esp+1Ch+var_4], esi
0x421226: jz      short loc_421231
0x421228: mov     ecx, eax; this
0x42122A: call    ??0ExtraSavedMovementData@@QAE@XZ; ExtraSavedMovementData::ExtraSavedMovementData(void)
0x42122F: jmp     short loc_421233
0x421231: xor     eax, eax
0x421233: push    eax; BSExtraData *
0x421234: mov     ecx, edi; ExtraDataList *
0x421236: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42123E: mov     esi, eax
0x421240: call    BaseExtraList_AddExtra
0x421245: mov     eax, SaveLoad_CurrentSavegame
0x42124A: cmp     byte ptr [eax+7Ch], 24h ; '$'
0x42124E: jb      short loc_42129E
0x421250: cmp     dword ptr [esi+18h], 0
0x421254: jz      short loc_421283
0x421256: mov     ecx, dword_B34D90
0x42125C: mov     edx, [ecx]
0x42125E: mov     eax, [edx+18h]
0x421261: push    offset aSetsavedhavokd; "SetSavedHavokData() is being called whe"...
0x421266: call    eax
0x421268: mov     ecx, [esp+1Ch+arg_0]
0x42126C: mov     [esi+18h], ecx
0x42126F: mov     ecx, [esp+1Ch+var_C]
0x421273: mov     large fs:0, ecx
0x42127A: pop     ecx
0x42127B: pop     edi
0x42127C: pop     esi
0x42127D: add     esp, 10h
0x421280: retn    4
0x421283: mov     edx, [esp+1Ch+arg_0]
0x421287: mov     [esi+18h], edx
0x42128A: mov     ecx, [esp+1Ch+var_C]
0x42128E: mov     large fs:0, ecx
0x421295: pop     ecx
0x421296: pop     edi
0x421297: pop     esi
0x421298: add     esp, 10h
0x42129B: retn    4
0x42129E: mov     eax, [esp+1Ch+arg_0]
0x4212A2: mov     [esi+18h], eax
0x4212A5: mov     ecx, [esp+1Ch+var_C]
0x4212A9: mov     large fs:0, ecx
0x4212B0: pop     ecx
0x4212B1: pop     edi
0x4212B2: pop     esi
0x4212B3: add     esp, 10h
0x4212B6: retn    4
