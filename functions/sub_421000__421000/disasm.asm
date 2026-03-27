0x421000: push    0FFFFFFFFh
0x421002: push    offset SEH_8C8970
0x421007: mov     eax, large fs:0
0x42100D: push    eax
0x42100E: push    ecx
0x42100F: push    esi
0x421010: push    edi
0x421011: mov     eax, ___security_cookie
0x421016: xor     eax, esp
0x421018: push    eax
0x421019: lea     eax, [esp+1Ch+var_C]
0x42101D: mov     large fs:0, eax
0x421023: mov     edi, ecx
0x421025: push    4Bh ; 'K'; a2
0x421027: call    BaseExtraList_GetExtraData
0x42102C: mov     esi, eax
0x42102E: test    esi, esi
0x421030: jnz     short loc_421065
0x421032: push    1Ch; Size
0x421034: call    FormHeapAlloc
0x421039: add     esp, 4
0x42103C: mov     [esp+1Ch+var_10], eax
0x421040: test    eax, eax
0x421042: mov     [esp+1Ch+var_4], esi
0x421046: jz      short loc_421051
0x421048: mov     ecx, eax; this
0x42104A: call    ??0ExtraSavedMovementData@@QAE@XZ; ExtraSavedMovementData::ExtraSavedMovementData(void)
0x42104F: jmp     short loc_421053
0x421051: xor     eax, eax
0x421053: push    eax; BSExtraData *
0x421054: mov     ecx, edi; ExtraDataList *
0x421056: mov     [esp+20h+var_4], 0FFFFFFFFh
0x42105E: mov     esi, eax
0x421060: call    BaseExtraList_AddExtra
0x421065: mov     eax, SaveLoad_CurrentSavegame
0x42106A: cmp     byte ptr [eax+7Ch], 24h ; '$'
0x42106E: jb      short loc_4210BE
0x421070: cmp     dword ptr [esi+10h], 0
0x421074: jz      short loc_4210A3
0x421076: mov     ecx, dword_B34D90
0x42107C: mov     edx, [ecx]
0x42107E: mov     eax, [edx+18h]
0x421081: push    offset aSetsavedanimat; "SetSavedAnimation() is being called whe"...
0x421086: call    eax
0x421088: mov     ecx, [esp+1Ch+arg_0]
0x42108C: mov     [esi+10h], ecx
0x42108F: mov     ecx, [esp+1Ch+var_C]
0x421093: mov     large fs:0, ecx
0x42109A: pop     ecx
0x42109B: pop     edi
0x42109C: pop     esi
0x42109D: add     esp, 10h
0x4210A0: retn    4
0x4210A3: mov     edx, [esp+1Ch+arg_0]
0x4210A7: mov     [esi+10h], edx
0x4210AA: mov     ecx, [esp+1Ch+var_C]
0x4210AE: mov     large fs:0, ecx
0x4210B5: pop     ecx
0x4210B6: pop     edi
0x4210B7: pop     esi
0x4210B8: add     esp, 10h
0x4210BB: retn    4
0x4210BE: mov     eax, [esp+1Ch+arg_0]
0x4210C2: mov     [esi+10h], eax
0x4210C5: mov     ecx, [esp+1Ch+var_C]
0x4210C9: mov     large fs:0, ecx
0x4210D0: pop     ecx
0x4210D1: pop     edi
0x4210D2: pop     esi
0x4210D3: add     esp, 10h
0x4210D6: retn    4
