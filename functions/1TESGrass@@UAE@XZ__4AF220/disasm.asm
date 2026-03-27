0x4AF220: push    0FFFFFFFFh
0x4AF222: push    offset ??1TESObjectSTAT@@UAE@XZ_SEH
0x4AF227: mov     eax, large fs:0
0x4AF22D: push    eax
0x4AF22E: sub     esp, 8
0x4AF231: push    esi
0x4AF232: push    edi
0x4AF233: mov     eax, ds:0B30AACh
0x4AF238: xor     eax, esp
0x4AF23A: push    eax
0x4AF23B: lea     eax, [esp+20h+var_C]
0x4AF23F: mov     large fs:0, eax
0x4AF245: mov     esi, ecx
0x4AF247: mov     [esp+20h+var_10], esi
0x4AF24B: lea     edi, [esi+24h]
0x4AF24E: mov     dword ptr [esi], offset ??_7TESGrass@@6BTESGrass@@@; const TESGrass::`vftable'{for `TESGrass'}
0x4AF254: mov     dword ptr [edi], offset ??_7TESGrass@@6BTESModel@@@; const TESGrass::`vftable'{for `TESModel'}
0x4AF25A: mov     [esp+20h+var_4], 1
0x4AF262: call    j_TESForm_ClearComponentReferences
0x4AF267: mov     ecx, edi; this
0x4AF269: mov     byte ptr [esp+20h+var_4], 0
0x4AF26E: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4AF273: mov     ecx, esi
0x4AF275: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4AF27D: call    TESObject_destr
0x4AF282: mov     ecx, [esp+20h+var_C]
0x4AF286: mov     large fs:0, ecx
0x4AF28D: pop     ecx
0x4AF28E: pop     edi
0x4AF28F: pop     esi
0x4AF290: add     esp, 14h
0x4AF293: retn
