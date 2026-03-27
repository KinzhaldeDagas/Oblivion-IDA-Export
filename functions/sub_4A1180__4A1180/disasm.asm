0x4A1180: push    ecx
0x4A1181: mov     eax, ds:0B35294h
0x4A1186: push    ebx
0x4A1187: push    esi
0x4A1188: push    edi
0x4A1189: push    eax; ArgList
0x4A118A: mov     ebx, ecx
0x4A118C: call    TESOutput_PrintString
0x4A1191: mov     esi, [esp+14h+arg_0]
0x4A1195: movzx   edi, word ptr [esi+0Ah]
0x4A1199: movzx   ecx, word ptr [esi+8]
0x4A119D: add     esp, 4
0x4A11A0: cmp     edi, ecx
0x4A11A2: mov     [esp+10h+var_4], eax
0x4A11A6: jb      short loc_4A11B6
0x4A11A8: movzx   edx, word ptr [esi+0Eh]
0x4A11AC: add     edx, edi
0x4A11AE: push    edx
0x4A11AF: mov     ecx, esi
0x4A11B1: call    NiTArray_SetSize
0x4A11B6: lea     eax, [esp+10h+var_4]
0x4A11BA: push    eax
0x4A11BB: push    edi
0x4A11BC: mov     ecx, esi
0x4A11BE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A11C3: fld     dword ptr [ebx+0Ch]
0x4A11C6: fstp    [esp+10h+arg_0]
0x4A11CA: push    ecx
0x4A11CB: fld     [esp+14h+arg_0]
0x4A11CF: fstp    [esp+14h+var_14]; float
0x4A11D2: push    offset aAlphaValue; "Alpha Value"
0x4A11D7: call    TESOutput_PrintLabeledFloat
0x4A11DC: movzx   edi, word ptr [esi+0Ah]
0x4A11E0: movzx   ecx, word ptr [esi+8]
0x4A11E4: add     esp, 8
0x4A11E7: cmp     edi, ecx
0x4A11E9: mov     [esp+10h+arg_0], eax
0x4A11ED: jb      short loc_4A11FD
0x4A11EF: movzx   edx, word ptr [esi+0Eh]
0x4A11F3: add     edx, edi
0x4A11F5: push    edx
0x4A11F6: mov     ecx, esi
0x4A11F8: call    NiTArray_SetSize
0x4A11FD: lea     eax, [esp+10h+arg_0]
0x4A1201: push    eax
0x4A1202: push    edi
0x4A1203: mov     ecx, esi
0x4A1205: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4A120A: pop     edi
0x4A120B: pop     esi
0x4A120C: pop     ebx
0x4A120D: pop     ecx
0x4A120E: retn    4
