0x52EB80: push    0FFFFFFFFh
0x52EB82: push    offset ??0TESSkill@@QAE@XZ_SEH
0x52EB87: mov     eax, large fs:0
0x52EB8D: push    eax
0x52EB8E: push    ecx
0x52EB8F: push    ebx
0x52EB90: push    esi
0x52EB91: push    edi
0x52EB92: mov     eax, ds:0B30AACh
0x52EB97: xor     eax, esp
0x52EB99: push    eax
0x52EB9A: lea     eax, [esp+20h+var_C]
0x52EB9E: mov     large fs:0, eax
0x52EBA4: mov     esi, ecx
0x52EBA6: mov     [esp+20h+var_10], esi
0x52EBAA: call    TESForm_constr
0x52EBAF: lea     edi, [esi+18h]
0x52EBB2: mov     ecx, edi
0x52EBB4: mov     [esp+20h+var_4], 0
0x52EBBC: call    TESDescription_constr
0x52EBC1: lea     ebx, [esi+20h]
0x52EBC4: mov     ecx, ebx
0x52EBC6: call    TESTexture_constr
0x52EBCB: mov     dword ptr [edi], offset ??_7TESSkill@@6BTESDescription@@@; const TESSkill::`vftable'{for `TESDescription'}
0x52EBD1: mov     dword ptr [ebx], offset ??_7TESSkill@@6BTESTexture@@@; const TESSkill::`vftable'{for `TESTexture'}
0x52EBD7: mov     byte ptr [esp+20h+var_4], 1
0x52EBDC: mov     dword ptr [esi], offset ??_7TESSkill@@6BTESSkill@@@; const TESSkill::`vftable'{for `TESSkill'}
0x52EBE2: lea     edi, [esi+40h]
0x52EBE5: mov     ebx, 3
0x52EBEA: lea     ebx, [ebx+0]
0x52EBF0: mov     ecx, edi
0x52EBF2: call    TESDescription_constr
0x52EBF7: add     edi, 8
0x52EBFA: sub     ebx, 1
0x52EBFD: jns     short loc_52EBF0
0x52EBFF: mov     ecx, esi
0x52EC01: mov     byte ptr [esi+4], 0Bh
0x52EC05: call    TESSkill_ClearTESSkill
0x52EC0A: mov     ecx, esi; this
0x52EC0C: call    j_TESForm_InitializeComponents
0x52EC11: mov     eax, esi
0x52EC13: mov     ecx, [esp+20h+var_C]
0x52EC17: mov     large fs:0, ecx
0x52EC1E: pop     ecx
0x52EC1F: pop     edi
0x52EC20: pop     esi
0x52EC21: pop     ebx
0x52EC22: add     esp, 10h
0x52EC25: retn
