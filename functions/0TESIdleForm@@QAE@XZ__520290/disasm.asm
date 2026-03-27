0x520290: push    0FFFFFFFFh
0x520292: push    offset ??0TESIdleForm@@QAE@XZ_SEH
0x520297: mov     eax, large fs:0
0x52029D: push    eax
0x52029E: push    ecx
0x52029F: push    ebx
0x5202A0: push    esi
0x5202A1: push    edi
0x5202A2: mov     eax, ds:0B30AACh
0x5202A7: xor     eax, esp
0x5202A9: push    eax
0x5202AA: lea     eax, [esp+20h+var_C]
0x5202AE: mov     large fs:0, eax
0x5202B4: mov     esi, ecx
0x5202B6: mov     [esp+20h+var_10], esi
0x5202BA: call    TESForm_constr
0x5202BF: lea     edi, [esi+18h]
0x5202C2: xor     ebx, ebx
0x5202C4: mov     ecx, edi; this
0x5202C6: mov     [esp+20h+var_4], ebx
0x5202CA: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x5202CF: mov     dword ptr [edi], offset ??_7TESModelAnim@@6B@; const TESModelAnim::`vftable'
0x5202D5: lea     ecx, [esi+30h]; this
0x5202D8: mov     byte ptr [esp+20h+var_4], 1
0x5202DD: mov     dword ptr [esi], offset ??_7TESIdleForm@@6BTESIdleForm@@@; const TESIdleForm::`vftable'{for `TESIdleForm'}
0x5202E3: mov     dword ptr [edi], offset ??_7TESIdleForm@@6BTESModelAnim@@@; const TESIdleForm::`vftable'{for `TESModelAnim'}
0x5202E9: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x5202EE: mov     ecx, esi; this
0x5202F0: mov     byte ptr [esp+20h+var_4], 2
0x5202F5: mov     byte ptr [esi+4], 3Ch ; '<'
0x5202F9: mov     [esi+3Ch], ebx
0x5202FC: call    j_TESForm_InitializeComponents
0x520301: mov     byte ptr [esi+38h], 4
0x520305: mov     [esi+40h], ebx
0x520308: mov     [esi+44h], ebx
0x52030B: mov     eax, esi
0x52030D: mov     ecx, [esp+20h+var_C]
0x520311: mov     large fs:0, ecx
0x520318: pop     ecx
0x520319: pop     edi
0x52031A: pop     esi
0x52031B: pop     ebx
0x52031C: add     esp, 10h
0x52031F: retn
