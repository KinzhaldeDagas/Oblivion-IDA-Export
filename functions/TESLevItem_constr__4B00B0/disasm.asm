0x4B00B0: push    0FFFFFFFFh
0x4B00B2: push    offset ??0TESLevSpell@@QAE@XZ_SEH
0x4B00B7: mov     eax, large fs:0
0x4B00BD: push    eax
0x4B00BE: push    ecx
0x4B00BF: push    esi
0x4B00C0: push    edi
0x4B00C1: mov     eax, ds:0B30AACh
0x4B00C6: xor     eax, esp
0x4B00C8: push    eax
0x4B00C9: lea     eax, [esp+1Ch+var_C]
0x4B00CD: mov     large fs:0, eax
0x4B00D3: mov     esi, ecx
0x4B00D5: mov     [esp+1Ch+var_10], esi
0x4B00D9: call    TESBoundObject_constr
0x4B00DE: lea     edi, [esi+24h]
0x4B00E1: mov     ecx, edi
0x4B00E3: mov     [esp+1Ch+var_4], 0
0x4B00EB: call    TESLeveledList_constr
0x4B00F0: mov     ecx, esi; this
0x4B00F2: mov     byte ptr [esp+1Ch+var_4], 1
0x4B00F7: mov     dword ptr [esi], offset ??_7TESLevItem@@6BTESLevItem@@@; const TESLevItem::`vftable'{for `TESLevItem'}
0x4B00FD: mov     dword ptr [edi], offset ??_7TESLevItem@@6BTESLeveledList@@@; const TESLevItem::`vftable'{for `TESLeveledList'}
0x4B0103: mov     byte ptr [esi+4], 2Bh ; '+'
0x4B0107: call    j_TESForm_InitializeComponents
0x4B010C: mov     eax, esi
0x4B010E: mov     ecx, [esp+1Ch+var_C]
0x4B0112: mov     large fs:0, ecx
0x4B0119: pop     ecx
0x4B011A: pop     edi
0x4B011B: pop     esi
0x4B011C: add     esp, 10h
0x4B011F: retn
