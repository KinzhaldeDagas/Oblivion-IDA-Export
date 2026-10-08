0x4FC980: push    0FFFFFFFFh
0x4FC982: push    offset Script_Constructor_SEH
0x4FC987: mov     eax, large fs:0
0x4FC98D: push    eax
0x4FC98E: push    ecx
0x4FC98F: push    esi
0x4FC990: mov     eax, ds:0B30AACh
0x4FC995: xor     eax, esp
0x4FC997: push    eax
0x4FC998: lea     eax, [esp+18h+var_C]
0x4FC99C: mov     large fs:0, eax
0x4FC9A2: mov     esi, ecx
0x4FC9A4: mov     [esp+18h+var_10], esi
0x4FC9A8: mov     dword ptr [esi], offset ??_7Script@@6B@; const Script::`vftable'
0x4FC9AE: mov     eax, [esi+30h]
0x4FC9B1: push    eax; void *
0x4FC9B2: mov     ecx, offset FormHeap
0x4FC9B7: mov     [esp+1Ch+var_4], 0
0x4FC9BF: call    MemoryHeap_Free_checked; Script_StaticDestructor frees script->data (offset 0x30) through FormHeap.
0x4FC9C4: mov     eax, [esi+2Ch]
0x4FC9C7: push    eax; void *
0x4FC9C8: mov     ecx, offset FormHeap
0x4FC9CD: call    MemoryHeap_Free_checked; Script_StaticDestructor frees script->text (offset 0x2C) through FormHeap.
0x4FC9D2: mov     ecx, esi
0x4FC9D4: call    Script_ClearVariableList; Script_StaticDestructor calls variable-list cleanup at 0x4FC6C0.
0x4FC9D9: mov     ecx, esi
0x4FC9DB: call    Script_ClearReferenceList; Script_StaticDestructor calls ref-list cleanup at 0x4FC730.
0x4FC9E0: mov     ecx, esi
0x4FC9E2: call    j_TESForm_ClearComponentReferences
0x4FC9E7: mov     ecx, esi; this
0x4FC9E9: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4FC9F1: call    TESForm_destr
0x4FC9F6: mov     ecx, [esp+18h+var_C]
0x4FC9FA: mov     large fs:0, ecx
0x4FCA01: pop     ecx
0x4FCA02: pop     esi
0x4FCA03: add     esp, 10h
0x4FCA06: retn
0x9B2B40: mov     ecx, [ebp-10h]; this
0x9B2B43: jmp     TESForm_destr
0x9B2B48: mov     edx, [esp+arg_4]
0x9B2B4C: lea     eax, [edx-8]
0x9B2B4F: mov     ecx, [edx-0Ch]
0x9B2B52: xor     ecx, eax
0x9B2B54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2B59: mov     eax, offset stru_ADE9F0
0x9B2B5E: jmp     ___CxxFrameHandler3
