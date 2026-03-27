0x4AF590: push    0FFFFFFFFh
0x4AF592: push    offset TESLevItem_destr_SEH
0x4AF597: mov     eax, large fs:0
0x4AF59D: push    eax
0x4AF59E: sub     esp, 8
0x4AF5A1: push    esi
0x4AF5A2: push    edi
0x4AF5A3: mov     eax, ds:0B30AACh
0x4AF5A8: xor     eax, esp
0x4AF5AA: push    eax
0x4AF5AB: lea     eax, [esp+20h+var_C]
0x4AF5AF: mov     large fs:0, eax
0x4AF5B5: mov     esi, ecx
0x4AF5B7: mov     [esp+20h+var_10], esi
0x4AF5BB: lea     edi, [esi+24h]
0x4AF5BE: mov     dword ptr [esi], offset ??_7TESLevCreature@@6BTESLevCreature@@@; const TESLevCreature::`vftable'{for `TESLevCreature'}
0x4AF5C4: mov     dword ptr [edi], offset ??_7TESLevCreature@@6BTESLeveledList@@@; const TESLevCreature::`vftable'{for `TESLeveledList'}
0x4AF5CA: mov     dword ptr [esi+34h], offset ??_7TESLevCreature@@6BTESScriptableForm@@@; const TESLevCreature::`vftable'{for `TESScriptableForm'}
0x4AF5D1: mov     [esp+20h+var_4], 1
0x4AF5D9: call    j_TESForm_ClearComponentReferences
0x4AF5DE: mov     ecx, edi
0x4AF5E0: mov     byte ptr [esp+20h+var_4], 0
0x4AF5E5: call    TESLeveledList_destr
0x4AF5EA: mov     ecx, esi
0x4AF5EC: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4AF5F4: call    TESObject_destr
0x4AF5F9: mov     ecx, [esp+20h+var_C]
0x4AF5FD: mov     large fs:0, ecx
0x4AF604: pop     ecx
0x4AF605: pop     edi
0x4AF606: pop     esi
0x4AF607: add     esp, 14h
0x4AF60A: retn
