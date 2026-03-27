0x46B170: push    0FFFFFFFFh
0x46B172: push    offset TESForm_ClearAllComponentReferences_SEH
0x46B177: mov     eax, large fs:0
0x46B17D: push    eax
0x46B17E: sub     esp, 68h
0x46B181: push    esi
0x46B182: mov     eax, ds:0B30AACh
0x46B187: xor     eax, esp
0x46B189: push    eax
0x46B18A: lea     eax, [esp+7Ch+var_C]
0x46B18E: mov     large fs:0, eax
0x46B194: mov     esi, ecx
0x46B196: movzx   eax, byte ptr [esi+4]
0x46B19A: add     eax, 0FFFFFFF3h; switch 49 cases
0x46B19D: cmp     eax, 30h
0x46B1A0: ja      short TESForm_ClearAllComponentReferences___def_46B1A9; jumptable 0046B1A9 default case, cases 14-47,53,55-60
0x46B1A2: movzx   eax, ds:byte_46B21C[eax]
0x46B1A9: jmp     ds:jpt_46B1A9[eax*4]; switch jump
0x46B1B0: lea     ecx, [esi+18h]; jumptable 0046B1A9 case 48
0x46B1B3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x46B1B8: mov     ecx, [esp+7Ch+var_C]
0x46B1BC: mov     large fs:0, ecx
0x46B1C3: pop     ecx
0x46B1C4: pop     esi
0x46B1C5: add     esp, 74h
0x46B1C8: retn
0x46B1C9: lea     ecx, [esp+7Ch+var_74]; jumptable 0046B1A9 default case, cases 14-47,53,55-60
0x46B1CD: call    FormComponentList_ZeroInit
0x46B1D2: push    esi
0x46B1D3: lea     ecx, [esp+80h+var_74]
0x46B1D7: mov     [esp+80h+var_4], 0
0x46B1DF: call    FormComponentList_Build
0x46B1E4: lea     ecx, [esp+7Ch+var_74]
0x46B1E8: call    FormComponentList_ClearReferences
0x46B1ED: lea     ecx, [esp+7Ch+var_74]; void *
0x46B1F1: mov     [esp+7Ch+var_4], 0FFFFFFFFh
0x46B1F9: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x46B1FE: mov     ecx, [esp+7Ch+var_C]; jumptable 0046B1A9 cases 13,49-52,54,61
0x46B202: mov     large fs:0, ecx
0x46B209: pop     ecx
0x46B20A: pop     esi
0x46B20B: add     esp, 74h
0x46B20E: retn
