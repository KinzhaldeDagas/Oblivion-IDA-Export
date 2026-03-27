0x708DA0: push    0FFFFFFFFh
0x708DA2: push    offset ??1NiDynamicEffect@@UAE@XZ_SEH
0x708DA7: mov     eax, large fs:0
0x708DAD: push    eax
0x708DAE: push    ecx
0x708DAF: push    esi
0x708DB0: mov     eax, ds:0B30AACh
0x708DB5: xor     eax, esp
0x708DB7: push    eax
0x708DB8: lea     eax, [esp+18h+var_C]
0x708DBC: mov     large fs:0, eax
0x708DC2: mov     esi, ecx
0x708DC4: mov     [esp+18h+var_10], esi
0x708DC8: mov     dword ptr [esi], offset ??_7NiDynamicEffect@@6B@; const NiDynamicEffect::`vftable'
0x708DCE: mov     [esp+18h+var_4], 2
0x708DD6: call    sub_708B80
0x708DDB: mov     ecx, esi
0x708DDD: call    sub_708BE0
0x708DE2: lea     ecx, [esi+0CCh]
0x708DE8: mov     byte ptr [esp+18h+var_4], 1
0x708DED: call    ??1?$NiTPointerList@PAVNiNode@@@@UAE@XZ; NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>(void)
0x708DF2: lea     ecx, [esi+0BCh]
0x708DF8: mov     byte ptr [esp+18h+var_4], 0
0x708DFD: call    ??1?$NiTPointerList@PAVNiNode@@@@UAE@XZ; NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>(void)
0x708E02: mov     ecx, esi; this
0x708E04: mov     [esp+18h+var_4], 0FFFFFFFFh
0x708E0C: call    ??1NiAVObject@@UAE@XZ; NiAVObject::~NiAVObject(void)
0x708E11: mov     ecx, [esp+18h+var_C]
0x708E15: mov     large fs:0, ecx
0x708E1C: pop     ecx
0x708E1D: pop     esi
0x708E1E: add     esp, 10h
0x708E21: retn
