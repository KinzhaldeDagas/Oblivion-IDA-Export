0x4B9AA0: push    0FFFFFFFFh
0x4B9AA2: push    offset ??0TESObjectSTAT@@QAE@XZ_SEH
0x4B9AA7: mov     eax, large fs:0
0x4B9AAD: push    eax
0x4B9AAE: push    ecx
0x4B9AAF: push    esi
0x4B9AB0: push    edi
0x4B9AB1: mov     eax, ds:0B30AACh
0x4B9AB6: xor     eax, esp
0x4B9AB8: push    eax
0x4B9AB9: lea     eax, [esp+1Ch+var_C]
0x4B9ABD: mov     large fs:0, eax
0x4B9AC3: mov     esi, ecx
0x4B9AC5: mov     [esp+1Ch+var_10], esi
0x4B9AC9: call    TESBoundObject_constr
0x4B9ACE: lea     edi, [esi+24h]
0x4B9AD1: mov     ecx, edi; this
0x4B9AD3: mov     [esp+1Ch+var_4], 0
0x4B9ADB: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B9AE0: mov     dword ptr [esi], offset ??_7TESObjectSTAT@@6BTESObjectSTAT@@@; const TESObjectSTAT::`vftable'{for `TESObjectSTAT'}
0x4B9AE6: mov     dword ptr [edi], offset ??_7TESObjectSTAT@@6BTESModel@@@; const TESObjectSTAT::`vftable'{for `TESModel'}
0x4B9AEC: mov     byte ptr [esi+4], 1Ch
0x4B9AF0: mov     eax, esi
0x4B9AF2: mov     ecx, [esp+1Ch+var_C]
0x4B9AF6: mov     large fs:0, ecx
0x4B9AFD: pop     ecx
0x4B9AFE: pop     edi
0x4B9AFF: pop     esi
0x4B9B00: add     esp, 10h
0x4B9B03: retn
