0x4B0400: push    0FFFFFFFFh
0x4B0402: push    offset ??0TESLevSpell@@QAE@XZ_SEH
0x4B0407: mov     eax, large fs:0
0x4B040D: push    eax
0x4B040E: push    ecx
0x4B040F: push    esi
0x4B0410: push    edi
0x4B0411: mov     eax, ds:0B30AACh
0x4B0416: xor     eax, esp
0x4B0418: push    eax
0x4B0419: lea     eax, [esp+1Ch+var_C]
0x4B041D: mov     large fs:0, eax
0x4B0423: mov     esi, ecx
0x4B0425: mov     [esp+1Ch+var_10], esi
0x4B0429: call    TESBoundObject_constr
0x4B042E: lea     edi, [esi+24h]
0x4B0431: mov     ecx, edi
0x4B0433: mov     [esp+1Ch+var_4], 0
0x4B043B: call    TESLeveledList_constr
0x4B0440: push    1; a2
0x4B0442: mov     ecx, esi; this
0x4B0444: mov     byte ptr [esp+20h+var_4], 1
0x4B0449: mov     dword ptr [esi], offset ??_7TESLevSpell@@6BTESLevSpell@@@; const TESLevSpell::`vftable'{for `TESLevSpell'}
0x4B044F: mov     dword ptr [edi], offset ??_7TESLevSpell@@6BTESLeveledList@@@; const TESLevSpell::`vftable'{for `TESLeveledList'}
0x4B0455: mov     byte ptr [esi+4], 40h ; '@'
0x4B0459: call    TESForm_SetIsLinked
0x4B045E: mov     eax, esi
0x4B0460: mov     ecx, [esp+1Ch+var_C]
0x4B0464: mov     large fs:0, ecx
0x4B046B: pop     ecx
0x4B046C: pop     edi
0x4B046D: pop     esi
0x4B046E: add     esp, 10h
0x4B0471: retn
