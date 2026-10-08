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
0x52AB7A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52AB7F: add     esp, 4
0x52AB82: mov     [esi+58h], ebx
0x52AB85: mov     ecx, esi
0x52AB87: call    j_TESForm_ClearComponentReferences
0x52AB8C: mov     eax, [esi+60h]
0x52AB8F: push    eax
0x52AB90: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52AB95: add     esp, 4
0x52AB98: lea     ecx, [esi+50h]
0x52AB9B: mov     [esi+60h], ebx
0x52AB9E: mov     [esi+66h], bx
0x52ABA2: mov     [esi+64h], bx
0x52ABA6: mov     byte ptr [esp+2Ch+var_4], 2
0x52ABAB: call    sub_56A7A0
0x52ABB0: mov     eax, [esi+34h]
0x52ABB3: push    eax
0x52ABB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
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
0x9B84E0: mov     ecx, [ebp-10h]; this
0x9B84E3: jmp     TESForm_destr
0x9B84E8: cmp     dword ptr [ebp-10h], 0
0x9B84EC: jz      loc_9B8500
0x9B84F2: mov     eax, [ebp-10h]
0x9B84F5: add     eax, 24h ; '$'
0x9B84F8: mov     [ebp-14h], eax
0x9B84FB: jmp     loc_9B8507
0x9B8500: mov     dword ptr [ebp-14h], 0
0x9B8507: mov     ecx, [ebp-14h]; void *
0x9B850A: jmp     j_TESTexture_destr
0x9B850F: cmp     dword ptr [ebp-10h], 0
0x9B8513: jz      loc_9B8527
0x9B8519: mov     eax, [ebp-10h]
0x9B851C: add     eax, 30h ; '0'
0x9B851F: mov     [ebp-18h], eax
0x9B8522: jmp     loc_9B852E
0x9B8527: mov     dword ptr [ebp-18h], 0
0x9B852E: mov     ecx, [ebp-18h]
0x9B8531: jmp     TESFullName_Initialize
0x9B8536: mov     ecx, [ebp-10h]
0x9B8539: add     ecx, 50h ; 'P'
0x9B853C: jmp     sub_56A7A0
0x9B8541: mov     ecx, [ebp-10h]
0x9B8544: add     ecx, 60h ; '`'; void *
0x9B8547: jmp     BSStringT_Clear
0x9B854C: mov     edx, [esp+arg_4]
0x9B8550: lea     eax, [edx-1Ch]
0x9B8553: mov     ecx, [edx-20h]
0x9B8556: xor     ecx, eax
0x9B8558: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B855D: mov     eax, offset stru_AE2B8C
0x9B8562: jmp     ___CxxFrameHandler3
