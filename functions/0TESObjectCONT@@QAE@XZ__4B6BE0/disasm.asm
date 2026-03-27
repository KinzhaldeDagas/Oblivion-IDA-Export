0x4B6BE0: push    0FFFFFFFFh
0x4B6BE2: push    offset ??0TESObjectCONT@@QAE@XZ_SEH
0x4B6BE7: mov     eax, large fs:0
0x4B6BED: push    eax
0x4B6BEE: push    ecx
0x4B6BEF: push    ebx
0x4B6BF0: push    ebp
0x4B6BF1: push    esi
0x4B6BF2: push    edi
0x4B6BF3: mov     eax, ds:0B30AACh
0x4B6BF8: xor     eax, esp
0x4B6BFA: push    eax
0x4B6BFB: lea     eax, [esp+24h+var_C]
0x4B6BFF: mov     large fs:0, eax
0x4B6C05: mov     esi, ecx
0x4B6C07: mov     [esp+24h+var_10], esi
0x4B6C0B: call    TESBoundAnimObject_constr
0x4B6C10: lea     edi, [esi+24h]
0x4B6C13: xor     ebx, ebx
0x4B6C15: mov     ecx, edi
0x4B6C17: mov     [esp+24h+var_4], ebx
0x4B6C1B: call    TESContainer_constr
0x4B6C20: mov     dword ptr [esi+34h], offset ??_7TESFullName@@6B@; const TESFullName::`vftable'
0x4B6C27: mov     [esi+38h], ebx
0x4B6C2A: mov     [esi+3Ch], bx
0x4B6C2E: mov     [esi+3Eh], bx
0x4B6C32: lea     ebp, [esi+40h]
0x4B6C35: mov     ecx, ebp; this
0x4B6C37: mov     byte ptr [esp+24h+var_4], 2
0x4B6C3C: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B6C41: lea     ecx, [esi+58h]
0x4B6C44: mov     byte ptr [esp+24h+var_4], 3
0x4B6C49: call    TESScriptableForm_constr
0x4B6C4E: lea     ecx, [esi+64h]
0x4B6C51: call    TESWeightForm_constr
0x4B6C56: mov     ecx, esi; this
0x4B6C58: mov     byte ptr [esp+24h+var_4], 4
0x4B6C5D: mov     dword ptr [esi], offset ??_7TESObjectCONT@@6BTESObjectCONT@@@; const TESObjectCONT::`vftable'{for `TESObjectCONT'}
0x4B6C63: mov     dword ptr [edi], offset ??_7TESObjectCONT@@6BTESContainer@@@; const TESObjectCONT::`vftable'{for `TESContainer'}
0x4B6C69: mov     dword ptr [esi+34h], offset ??_7TESObjectCONT@@6BTESFullName@@@; const TESObjectCONT::`vftable'{for `TESFullName'}
0x4B6C70: mov     dword ptr [ebp+0], offset ??_7TESObjectCONT@@6BTESModel@@@; const TESObjectCONT::`vftable'{for `TESModel'}
0x4B6C77: mov     dword ptr [esi+58h], offset ??_7TESObjectCONT@@6BTESScriptableForm@@@; const TESObjectCONT::`vftable'{for `TESScriptableForm'}
0x4B6C7E: mov     dword ptr [esi+64h], offset ??_7TESObjectCONT@@6BTESWeightForm@@@; const TESObjectCONT::`vftable'{for `TESWeightForm'}
0x4B6C85: mov     byte ptr [esi+4], 17h
0x4B6C89: mov     [esi+78h], bl
0x4B6C8C: mov     [esi+70h], ebx
0x4B6C8F: mov     [esi+74h], ebx
0x4B6C92: call    j_TESForm_InitializeComponents
0x4B6C97: mov     eax, esi
0x4B6C99: mov     ecx, [esp+24h+var_C]
0x4B6C9D: mov     large fs:0, ecx
0x4B6CA4: pop     ecx
0x4B6CA5: pop     edi
0x4B6CA6: pop     esi
0x4B6CA7: pop     ebp
0x4B6CA8: pop     ebx
0x4B6CA9: add     esp, 10h
0x4B6CAC: retn
