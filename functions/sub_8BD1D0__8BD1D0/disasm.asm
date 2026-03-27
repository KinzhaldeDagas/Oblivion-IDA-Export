0x8BD1D0: push    0FFFFFFFFh
0x8BD1D2: push    offset SEH_8C8970
0x8BD1D7: mov     eax, large fs:0
0x8BD1DD: push    eax
0x8BD1DE: push    ecx
0x8BD1DF: push    esi
0x8BD1E0: push    edi
0x8BD1E1: mov     eax, ds:0B30AACh
0x8BD1E6: xor     eax, esp
0x8BD1E8: push    eax
0x8BD1E9: lea     eax, [esp+1Ch+var_C]
0x8BD1ED: mov     large fs:0, eax
0x8BD1F3: mov     edi, ecx
0x8BD1F5: push    24h ; '$'; Size
0x8BD1F7: call    FormHeapAlloc
0x8BD1FC: add     esp, 4
0x8BD1FF: mov     [esp+1Ch+var_10], eax
0x8BD203: xor     esi, esi
0x8BD205: cmp     eax, esi
0x8BD207: mov     [esp+1Ch+var_4], esi
0x8BD20B: jz      short loc_8BD216
0x8BD20D: mov     ecx, eax; this
0x8BD20F: call    ??0bhkExtraData@@QAE@XZ; bhkExtraData::bhkExtraData(void)
0x8BD214: mov     esi, eax
0x8BD216: mov     eax, [esp+1Ch+arg_0]
0x8BD21A: push    eax
0x8BD21B: push    esi
0x8BD21C: mov     ecx, edi
0x8BD21E: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8BD226: call    sub_8BD130
0x8BD22B: mov     eax, esi
0x8BD22D: mov     ecx, [esp+1Ch+var_C]
0x8BD231: mov     large fs:0, ecx
0x8BD238: pop     ecx
0x8BD239: pop     edi
0x8BD23A: pop     esi
0x8BD23B: add     esp, 10h
0x8BD23E: retn    4
