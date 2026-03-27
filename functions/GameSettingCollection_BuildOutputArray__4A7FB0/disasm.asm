0x4A7FB0: push    ecx
0x4A7FB1: push    ebx
0x4A7FB2: push    esi
0x4A7FB3: push    edi
0x4A7FB4: push    offset aGamesettings; "GameSettings"
0x4A7FB9: mov     ebx, ecx
0x4A7FBB: call    TESOutput_PrintString
0x4A7FC0: mov     esi, [esp+14h+arg_0]
0x4A7FC4: movzx   edi, word ptr [esi+0Ah]
0x4A7FC8: mov     [esp+14h+var_4], eax
0x4A7FCC: movzx   eax, word ptr [esi+8]
0x4A7FD0: add     esp, 4
0x4A7FD3: cmp     edi, eax
0x4A7FD5: jb      short loc_4A7FE5
0x4A7FD7: movzx   ecx, word ptr [esi+0Eh]
0x4A7FDB: add     ecx, edi
0x4A7FDD: push    ecx
0x4A7FDE: mov     ecx, esi
0x4A7FE0: call    NiTArray_SetSize
0x4A7FE5: lea     edx, [esp+10h+var_4]
0x4A7FE9: push    edx
0x4A7FEA: push    edi
0x4A7FEB: mov     ecx, esi
0x4A7FED: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A7FF2: push    esi
0x4A7FF3: mov     ecx, ebx
0x4A7FF5: call    SettingCollectionMap_BuildOutputArray
0x4A7FFA: mov     ebx, eax
0x4A7FFC: push    ebx; int
0x4A7FFD: push    offset aTotalGamesetti; "Total GameSettings"
0x4A8002: call    TESOutput_PrintLabeledUnsignedInt
0x4A8007: movzx   edi, word ptr [esi+0Ah]
0x4A800B: mov     [esp+18h+arg_0], eax
0x4A800F: movzx   eax, word ptr [esi+8]
0x4A8013: add     esp, 8
0x4A8016: cmp     edi, eax
0x4A8018: jb      short loc_4A8028
0x4A801A: movzx   ecx, word ptr [esi+0Eh]
0x4A801E: add     ecx, edi
0x4A8020: push    ecx
0x4A8021: mov     ecx, esi
0x4A8023: call    NiTArray_SetSize
0x4A8028: lea     edx, [esp+10h+arg_0]
0x4A802C: push    edx
0x4A802D: push    edi
0x4A802E: mov     ecx, esi
0x4A8030: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A8035: pop     edi
0x4A8036: pop     esi
0x4A8037: mov     eax, ebx
0x4A8039: pop     ebx
0x4A803A: pop     ecx
0x4A803B: retn    4
