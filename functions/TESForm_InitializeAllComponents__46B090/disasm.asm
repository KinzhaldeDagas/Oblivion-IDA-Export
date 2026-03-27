0x46B090: push    0FFFFFFFFh
0x46B092: push    offset TESForm_ClearAllComponentReferences_SEH
0x46B097: mov     eax, large fs:0
0x46B09D: push    eax
0x46B09E: sub     esp, 68h
0x46B0A1: push    esi
0x46B0A2: mov     eax, ds:0B30AACh
0x46B0A7: xor     eax, esp
0x46B0A9: push    eax
0x46B0AA: lea     eax, [esp+7Ch+var_C]
0x46B0AE: mov     large fs:0, eax
0x46B0B4: mov     esi, ecx
0x46B0B6: movzx   eax, byte ptr [esi+4]
0x46B0BA: add     eax, 0FFFFFFF3h; switch 49 cases
0x46B0BD: cmp     eax, 30h
0x46B0C0: ja      short TESForm_InitializeAllComponents___def_46B0C9; jumptable 0046B0C9 default case, cases 14-47,53,55-60
0x46B0C2: movzx   eax, ds:byte_46B13C[eax]
0x46B0C9: jmp     ds:jpt_46B0C9[eax*4]; switch jump
0x46B0D0: lea     ecx, [esi+18h]; jumptable 0046B0C9 case 48
0x46B0D3: call    TESFullName_Initialize
0x46B0D8: mov     ecx, [esp+7Ch+var_C]
0x46B0DC: mov     large fs:0, ecx
0x46B0E3: pop     ecx
0x46B0E4: pop     esi
0x46B0E5: add     esp, 74h
0x46B0E8: retn
0x46B0E9: lea     ecx, [esp+7Ch+var_74]; jumptable 0046B0C9 default case, cases 14-47,53,55-60
0x46B0ED: call    FormComponentList_ZeroInit
0x46B0F2: push    esi
0x46B0F3: lea     ecx, [esp+80h+var_74]
0x46B0F7: mov     [esp+80h+var_4], 0
0x46B0FF: call    FormComponentList_Build
0x46B104: lea     ecx, [esp+7Ch+var_74]
0x46B108: call    FormComponentList_Initialize
0x46B10D: lea     ecx, [esp+7Ch+var_74]; void *
0x46B111: mov     [esp+7Ch+var_4], 0FFFFFFFFh
0x46B119: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x46B11E: mov     ecx, [esp+7Ch+var_C]; jumptable 0046B0C9 cases 13,49-52,54,61
0x46B122: mov     large fs:0, ecx
0x46B129: pop     ecx
0x46B12A: pop     esi
0x46B12B: add     esp, 74h
0x46B12E: retn
