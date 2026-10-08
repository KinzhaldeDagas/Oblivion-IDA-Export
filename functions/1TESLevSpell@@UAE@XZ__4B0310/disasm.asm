0x4B0310: push    0FFFFFFFFh
0x4B0312: push    offset TESLevItem_destr_SEH
0x4B0317: mov     eax, large fs:0
0x4B031D: push    eax
0x4B031E: sub     esp, 8
0x4B0321: push    esi
0x4B0322: push    edi
0x4B0323: mov     eax, ds:0B30AACh
0x4B0328: xor     eax, esp
0x4B032A: push    eax
0x4B032B: lea     eax, [esp+20h+var_C]
0x4B032F: mov     large fs:0, eax
0x4B0335: mov     esi, ecx
0x4B0337: mov     [esp+20h+var_10], esi
0x4B033B: lea     edi, [esi+24h]
0x4B033E: mov     dword ptr [esi], offset ??_7TESLevSpell@@6BTESLevSpell@@@; const TESLevSpell::`vftable'{for `TESLevSpell'}
0x4B0344: mov     dword ptr [edi], offset ??_7TESLevSpell@@6BTESLeveledList@@@; const TESLevSpell::`vftable'{for `TESLeveledList'}
0x4B034A: mov     [esp+20h+var_4], 1
0x4B0352: call    j_TESForm_ClearComponentReferences
0x4B0357: mov     ecx, edi
0x4B0359: mov     byte ptr [esp+20h+var_4], 0
0x4B035E: call    TESLeveledList_destr
0x4B0363: mov     ecx, esi
0x4B0365: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4B036D: call    TESObject_destr
0x4B0372: mov     ecx, [esp+20h+var_C]
0x4B0376: mov     large fs:0, ecx
0x4B037D: pop     ecx
0x4B037E: pop     edi
0x4B037F: pop     esi
0x4B0380: add     esp, 14h
0x4B0383: retn
0x9B2E50: mov     ecx, [ebp-10h]
0x9B2E53: jmp     TESObject_destr
0x9B2E58: cmp     dword ptr [ebp-10h], 0
0x9B2E5C: jz      loc_9B2E70
0x9B2E62: mov     eax, [ebp-10h]
0x9B2E65: add     eax, 24h ; '$'
0x9B2E68: mov     [ebp-14h], eax
0x9B2E6B: jmp     loc_9B2E77
0x9B2E70: mov     dword ptr [ebp-14h], 0
0x9B2E77: mov     ecx, [ebp-14h]
0x9B2E7A: jmp     TESLeveledList_destr
0x9B2E7F: mov     edx, [esp+arg_4]
0x9B2E83: lea     eax, [edx-10h]
0x9B2E86: mov     ecx, [edx-14h]
0x9B2E89: xor     ecx, eax
0x9B2E8B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2E90: mov     eax, offset stru_ADECB0
0x9B2E95: jmp     ___CxxFrameHandler3
