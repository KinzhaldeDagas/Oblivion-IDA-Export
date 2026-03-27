0x4AFFC0: push    0FFFFFFFFh
0x4AFFC2: push    offset TESLevItem_destr_SEH
0x4AFFC7: mov     eax, large fs:0
0x4AFFCD: push    eax
0x4AFFCE: sub     esp, 8
0x4AFFD1: push    esi
0x4AFFD2: push    edi
0x4AFFD3: mov     eax, ds:0B30AACh
0x4AFFD8: xor     eax, esp
0x4AFFDA: push    eax
0x4AFFDB: lea     eax, [esp+20h+var_C]
0x4AFFDF: mov     large fs:0, eax
0x4AFFE5: mov     esi, ecx
0x4AFFE7: mov     [esp+20h+var_10], esi
0x4AFFEB: lea     edi, [esi+24h]
0x4AFFEE: mov     dword ptr [esi], offset ??_7TESLevItem@@6BTESLevItem@@@; const TESLevItem::`vftable'{for `TESLevItem'}
0x4AFFF4: mov     dword ptr [edi], offset ??_7TESLevItem@@6BTESLeveledList@@@; const TESLevItem::`vftable'{for `TESLeveledList'}
0x4AFFFA: mov     [esp+20h+var_4], 1
0x4B0002: call    j_TESForm_ClearComponentReferences
0x4B0007: mov     ecx, edi
0x4B0009: mov     byte ptr [esp+20h+var_4], 0
0x4B000E: call    TESLeveledList_destr
0x4B0013: mov     ecx, esi
0x4B0015: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4B001D: call    TESObject_destr
0x4B0022: mov     ecx, [esp+20h+var_C]
0x4B0026: mov     large fs:0, ecx
0x4B002D: pop     ecx
0x4B002E: pop     edi
0x4B002F: pop     esi
0x4B0030: add     esp, 14h
0x4B0033: retn
