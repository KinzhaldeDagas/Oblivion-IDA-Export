0x52AA00: push    0FFFFFFFFh
0x52AA02: push    offset SEH_52AA00
0x52AA07: mov     eax, large fs:0
0x52AA0D: push    eax
0x52AA0E: push    ecx
0x52AA0F: push    ebx
0x52AA10: push    ebp
0x52AA11: push    esi
0x52AA12: push    edi
0x52AA13: mov     eax, ds:0B30AACh
0x52AA18: xor     eax, esp
0x52AA1A: push    eax
0x52AA1B: lea     eax, [esp+24h+var_C]
0x52AA1F: mov     large fs:0, eax
0x52AA25: mov     esi, ecx
0x52AA27: mov     [esp+24h+var_10], esi
0x52AA2B: call    TESForm_constr
0x52AA30: lea     ebp, [esi+18h]
0x52AA33: xor     ebx, ebx
0x52AA35: mov     ecx, ebp
0x52AA37: mov     [esp+24h+var_4], ebx
0x52AA3B: call    TESScriptableForm_constr
0x52AA40: lea     edi, [esi+24h]
0x52AA43: mov     ecx, edi
0x52AA45: call    TESTexture_constr
0x52AA4A: mov     dword ptr [edi], offset ??_7TESIcon@@6B@; const TESIcon::`vftable'
0x52AA50: mov     dword ptr [esi+30h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x52AA57: mov     [esi+34h], ebx
0x52AA5A: mov     [esi+38h], bx
0x52AA5E: mov     [esi+3Ah], bx
0x52AA62: mov     dword ptr [esi], offset ??_7TESQuest@@6BTESQuest@@@; const TESQuest::`vftable'{for `TESQuest'}
0x52AA68: mov     dword ptr [ebp+0], offset ??_7TESQuest@@6BTESScriptableForm@@@; const TESQuest::`vftable'{for `TESScriptableForm'}
0x52AA6F: mov     dword ptr [edi], offset ??_7TESQuest@@6BTESIcon@@@; const TESQuest::`vftable'{for `TESIcon'}
0x52AA75: mov     dword ptr [esi+30h], offset ??_7TESQuest@@6BTESFullName@@@; const TESQuest::`vftable'{for `TESFullName'}
0x52AA7C: mov     [esi+3Ch], bl
0x52AA7F: mov     [esi+3Dh], bl
0x52AA82: mov     [esi+40h], ebx
0x52AA85: mov     [esi+44h], ebx
0x52AA88: lea     ecx, [esi+50h]; this
0x52AA8B: mov     byte ptr [esp+24h+var_4], 2
0x52AA90: mov     [esi+48h], ebx
0x52AA93: mov     [esi+4Ch], ebx
0x52AA96: call    ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x52AA9B: mov     [esi+60h], ebx
0x52AA9E: mov     [esi+64h], bx
0x52AAA2: mov     [esi+66h], bx
0x52AAA6: mov     byte ptr [esi+4], 3Bh ; ';'
0x52AAAA: mov     [esi+58h], ebx
0x52AAAD: or      byte ptr [esi+3Ch], 1
0x52AAB1: mov     eax, [esi]
0x52AAB3: mov     edx, [eax+40h]
0x52AAB6: push    4
0x52AAB8: mov     ecx, esi
0x52AABA: mov     byte ptr [esp+28h+var_4], 4
0x52AABF: call    edx
0x52AAC1: mov     ecx, esi; this
0x52AAC3: mov     [esi+5Ch], bl
0x52AAC6: call    j_TESForm_InitializeComponents
0x52AACB: mov     eax, esi
0x52AACD: mov     ecx, dword ptr [esp+24h+var_C]
0x52AAD1: mov     large fs:0, ecx
0x52AAD8: pop     ecx
0x52AAD9: pop     edi
0x52AADA: pop     esi
0x52AADB: pop     ebp
0x52AADC: pop     ebx
0x52AADD: add     esp, 10h
0x52AAE0: retn
