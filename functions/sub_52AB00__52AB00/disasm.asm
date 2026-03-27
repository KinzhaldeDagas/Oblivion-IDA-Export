0x52AB00: push    0FFFFFFFFh
0x52AB02: push    offset SEH_52AB00
0x52AB07: mov     eax, large fs:0
0x52AB0D: push    eax
0x52AB0E: sub     esp, 0Ch
0x52AB11: push    ebx
0x52AB12: push    ebp
0x52AB13: push    esi
0x52AB14: push    edi
0x52AB15: mov     eax, ds:0B30AACh
0x52AB1A: xor     eax, esp
0x52AB1C: push    eax
0x52AB1D: lea     eax, [esp+2Ch+var_C]
0x52AB21: mov     large fs:0, eax
0x52AB27: mov     esi, ecx
0x52AB29: mov     [esp+2Ch+var_10], esi
0x52AB2D: lea     ebp, [esi+24h]
0x52AB30: mov     dword ptr [esi], offset ??_7TESQuest@@6BTESQuest@@@; const TESQuest::`vftable'{for `TESQuest'}
0x52AB36: mov     dword ptr [esi+18h], offset ??_7TESQuest@@6BTESScriptableForm@@@; const TESQuest::`vftable'{for `TESScriptableForm'}
0x52AB3D: mov     dword ptr [ebp+0], offset ??_7TESQuest@@6BTESIcon@@@; const TESQuest::`vftable'{for `TESIcon'}
0x52AB44: mov     dword ptr [esi+30h], offset ??_7TESQuest@@6BTESFullName@@@; const TESQuest::`vftable'{for `TESFullName'}
0x52AB4B: lea     ecx, [esi+50h]
0x52AB4E: mov     [esp+2Ch+var_4], 4
0x52AB56: call    sub_56A750
0x52AB5B: mov     ecx, esi
0x52AB5D: call    sub_529760
0x52AB62: mov     ecx, esi
0x52AB64: call    sub_5297C0
0x52AB69: mov     edi, [esi+58h]
0x52AB6C: xor     ebx, ebx
0x52AB6E: cmp     edi, ebx
0x52AB70: jz      short loc_52AB85
0x52AB72: mov     ecx, edi
0x52AB74: call    ScriptEventList_destr??
0x52AB79: push    edi
0x52AB7A: call    FormHeapFree
0x52AB7F: add     esp, 4
0x52AB82: mov     [esi+58h], ebx
0x52AB85: mov     ecx, esi
0x52AB87: call    j_TESForm_ClearComponentReferences
0x52AB8C: mov     eax, [esi+60h]
0x52AB8F: push    eax
0x52AB90: call    FormHeapFree
0x52AB95: add     esp, 4
0x52AB98: lea     ecx, [esi+50h]
0x52AB9B: mov     [esi+60h], ebx
0x52AB9E: mov     [esi+66h], bx
0x52ABA2: mov     [esi+64h], bx
0x52ABA6: mov     byte ptr [esp+2Ch+var_4], 2
0x52ABAB: call    sub_56A7A0
0x52ABB0: mov     eax, [esi+34h]
0x52ABB3: push    eax
0x52ABB4: call    FormHeapFree
0x52ABB9: add     esp, 4
0x52ABBC: mov     ecx, ebp; void *
0x52ABBE: mov     [esi+34h], ebx
0x52ABC1: mov     [esi+3Ah], bx
0x52ABC5: mov     [esi+38h], bx
0x52ABC9: mov     byte ptr [esp+2Ch+var_4], bl
0x52ABCD: call    TESTexture_destr
0x52ABD2: mov     ecx, esi; this
0x52ABD4: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x52ABDC: call    TESForm_destr
0x52ABE1: mov     ecx, [esp+2Ch+var_C]
0x52ABE5: mov     large fs:0, ecx
0x52ABEC: pop     ecx
0x52ABED: pop     edi
0x52ABEE: pop     esi
0x52ABEF: pop     ebp
0x52ABF0: pop     ebx
0x52ABF1: add     esp, 18h
0x52ABF4: retn
