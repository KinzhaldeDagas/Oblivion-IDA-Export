0x51FCD0: push    0FFFFFFFFh
0x51FCD2: push    offset SEH_51FCD0
0x51FCD7: mov     eax, large fs:0
0x51FCDD: push    eax
0x51FCDE: sub     esp, 0Ch
0x51FCE1: push    esi
0x51FCE2: push    edi
0x51FCE3: mov     eax, ds:0B30AACh
0x51FCE8: xor     eax, esp
0x51FCEA: push    eax
0x51FCEB: lea     eax, [esp+24h+var_C]
0x51FCEF: mov     large fs:0, eax
0x51FCF5: mov     esi, ecx
0x51FCF7: mov     [esp+24h+var_10], esi
0x51FCFB: lea     edi, [esi+24h]
0x51FCFE: mov     dword ptr [esi], offset ??_7TESFaction@@6BTESFaction@@@; const TESFaction::`vftable'{for `TESFaction'}
0x51FD04: mov     dword ptr [esi+18h], offset ??_7TESFaction@@6BTESFullName@@@; const TESFaction::`vftable'{for `TESFullName'}
0x51FD0B: mov     dword ptr [edi], offset ??_7TESFaction@@6BTESReactionForm@@@; const TESFaction::`vftable'{for `TESReactionForm'}
0x51FD11: mov     [esp+24h+var_4], 2
0x51FD19: call    sub_51FB00
0x51FD1E: mov     ecx, esi
0x51FD20: call    j_TESForm_ClearComponentReferences
0x51FD25: mov     ecx, edi
0x51FD27: mov     byte ptr [esp+24h+var_4], 1
0x51FD2C: call    sub_46E5C0
0x51FD31: mov     eax, [esi+1Ch]
0x51FD34: push    eax
0x51FD35: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x51FD3A: xor     eax, eax
0x51FD3C: add     esp, 4
0x51FD3F: mov     ecx, esi; this
0x51FD41: mov     [esi+1Ch], eax
0x51FD44: mov     [esi+22h], ax
0x51FD48: mov     [esi+20h], ax
0x51FD4C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x51FD54: call    TESForm_destr
0x51FD59: mov     ecx, [esp+24h+var_C]
0x51FD5D: mov     large fs:0, ecx
0x51FD64: pop     ecx
0x51FD65: pop     edi
0x51FD66: pop     esi
0x51FD67: add     esp, 18h
0x51FD6A: retn
0x9B7C20: mov     ecx, [ebp-10h]; this
0x9B7C23: jmp     TESForm_destr
0x9B7C28: cmp     dword ptr [ebp-10h], 0
0x9B7C2C: jz      loc_9B7C40
0x9B7C32: mov     eax, [ebp-10h]
0x9B7C35: add     eax, 18h
0x9B7C38: mov     [ebp-14h], eax
0x9B7C3B: jmp     loc_9B7C47
0x9B7C40: mov     dword ptr [ebp-14h], 0
0x9B7C47: mov     ecx, [ebp-14h]
0x9B7C4A: jmp     TESFullName_Initialize
0x9B7C4F: cmp     dword ptr [ebp-10h], 0
0x9B7C53: jz      loc_9B7C67
0x9B7C59: mov     eax, [ebp-10h]
0x9B7C5C: add     eax, 24h ; '$'
0x9B7C5F: mov     [ebp-18h], eax
0x9B7C62: jmp     loc_9B7C6E
0x9B7C67: mov     dword ptr [ebp-18h], 0
0x9B7C6E: mov     ecx, [ebp-18h]
0x9B7C71: jmp     sub_46E5C0
0x9B7C76: mov     edx, [esp+arg_4]
0x9B7C7A: lea     eax, [edx-14h]
0x9B7C7D: mov     ecx, [edx-18h]
0x9B7C80: xor     ecx, eax
0x9B7C82: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7C87: mov     eax, offset stru_AE2538
0x9B7C8C: jmp     ___CxxFrameHandler3
