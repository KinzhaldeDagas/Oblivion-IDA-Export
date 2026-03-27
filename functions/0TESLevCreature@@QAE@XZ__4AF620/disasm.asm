0x4AF620: push    0FFFFFFFFh
0x4AF622: push    offset ??0TESLevCreature@@QAE@XZ_SEH
0x4AF627: mov     eax, large fs:0
0x4AF62D: push    eax
0x4AF62E: push    ecx
0x4AF62F: push    ebx
0x4AF630: push    esi
0x4AF631: push    edi
0x4AF632: mov     eax, ds:0B30AACh
0x4AF637: xor     eax, esp
0x4AF639: push    eax
0x4AF63A: lea     eax, [esp+20h+var_C]
0x4AF63E: mov     large fs:0, eax
0x4AF644: mov     esi, ecx
0x4AF646: mov     [esp+20h+var_10], esi
0x4AF64A: call    TESBoundAnimObject_constr
0x4AF64F: lea     edi, [esi+24h]
0x4AF652: mov     ecx, edi
0x4AF654: mov     [esp+20h+var_4], 0
0x4AF65C: call    TESLeveledList_constr
0x4AF661: lea     ebx, [esi+34h]
0x4AF664: mov     ecx, ebx
0x4AF666: mov     byte ptr [esp+20h+var_4], 1
0x4AF66B: call    TESScriptableForm_constr
0x4AF670: mov     ecx, esi; this
0x4AF672: mov     dword ptr [esi], offset ??_7TESLevCreature@@6BTESLevCreature@@@; const TESLevCreature::`vftable'{for `TESLevCreature'}
0x4AF678: mov     dword ptr [edi], offset ??_7TESLevCreature@@6BTESLeveledList@@@; const TESLevCreature::`vftable'{for `TESLeveledList'}
0x4AF67E: mov     dword ptr [ebx], offset ??_7TESLevCreature@@6BTESScriptableForm@@@; const TESLevCreature::`vftable'{for `TESScriptableForm'}
0x4AF684: mov     byte ptr [esi+4], 25h ; '%'
0x4AF688: mov     dword ptr [esi+40h], 0
0x4AF68F: call    j_TESForm_InitializeComponents
0x4AF694: push    1; a2
0x4AF696: mov     ecx, esi; this
0x4AF698: call    TESForm_SetIsLinked
0x4AF69D: mov     eax, esi
0x4AF69F: mov     ecx, [esp+20h+var_C]
0x4AF6A3: mov     large fs:0, ecx
0x4AF6AA: pop     ecx
0x4AF6AB: pop     edi
0x4AF6AC: pop     esi
0x4AF6AD: pop     ebx
0x4AF6AE: add     esp, 10h
0x4AF6B1: retn
