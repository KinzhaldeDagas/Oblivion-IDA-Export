0x4B9970: push    0FFFFFFFFh
0x4B9972: push    offset ??1TESObjectSTAT@@UAE@XZ_SEH
0x4B9977: mov     eax, large fs:0
0x4B997D: push    eax
0x4B997E: sub     esp, 8
0x4B9981: push    esi
0x4B9982: push    edi
0x4B9983: mov     eax, ds:0B30AACh
0x4B9988: xor     eax, esp
0x4B998A: push    eax
0x4B998B: lea     eax, [esp+20h+var_C]
0x4B998F: mov     large fs:0, eax
0x4B9995: mov     esi, ecx
0x4B9997: mov     [esp+20h+var_10], esi
0x4B999B: lea     edi, [esi+24h]
0x4B999E: mov     dword ptr [esi], offset ??_7TESObjectSTAT@@6BTESObjectSTAT@@@; const TESObjectSTAT::`vftable'{for `TESObjectSTAT'}
0x4B99A4: mov     dword ptr [edi], offset ??_7TESObjectSTAT@@6BTESModel@@@; const TESObjectSTAT::`vftable'{for `TESModel'}
0x4B99AA: mov     [esp+20h+var_4], 1
0x4B99B2: call    j_TESForm_ClearComponentReferences
0x4B99B7: mov     ecx, edi; this
0x4B99B9: mov     byte ptr [esp+20h+var_4], 0
0x4B99BE: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B99C3: mov     ecx, esi
0x4B99C5: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4B99CD: call    TESObject_destr
0x4B99D2: mov     ecx, [esp+20h+var_C]
0x4B99D6: mov     large fs:0, ecx
0x4B99DD: pop     ecx
0x4B99DE: pop     edi
0x4B99DF: pop     esi
0x4B99E0: add     esp, 14h
0x4B99E3: retn
