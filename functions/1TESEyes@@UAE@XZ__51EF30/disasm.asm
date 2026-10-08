0x51EF30: push    0FFFFFFFFh
0x51EF32: push    offset ??1TESEyes@@UAE@XZ_SEH
0x51EF37: mov     eax, large fs:0
0x51EF3D: push    eax
0x51EF3E: sub     esp, 0Ch
0x51EF41: push    esi
0x51EF42: push    edi
0x51EF43: mov     eax, ds:0B30AACh
0x51EF48: xor     eax, esp
0x51EF4A: push    eax
0x51EF4B: lea     eax, [esp+24h+var_C]
0x51EF4F: mov     large fs:0, eax
0x51EF55: mov     esi, ecx
0x51EF57: mov     [esp+24h+var_10], esi
0x51EF5B: lea     edi, [esi+24h]
0x51EF5E: mov     dword ptr [esi], offset ??_7TESEyes@@6BTESEyes@@@; const TESEyes::`vftable'{for `TESEyes'}
0x51EF64: mov     dword ptr [esi+18h], offset ??_7TESEyes@@6BTESFullName@@@; const TESEyes::`vftable'{for `TESFullName'}
0x51EF6B: mov     dword ptr [edi], offset ??_7TESEyes@@6BTESTexture@@@; const TESEyes::`vftable'{for `TESTexture'}
0x51EF71: mov     [esp+24h+var_4], 2
0x51EF79: call    j_TESForm_ClearComponentReferences
0x51EF7E: mov     ecx, edi; void *
0x51EF80: mov     byte ptr [esp+24h+var_4], 1
0x51EF85: call    TESTexture_destr
0x51EF8A: mov     eax, [esi+1Ch]
0x51EF8D: push    eax
0x51EF8E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x51EF93: xor     eax, eax
0x51EF95: add     esp, 4
0x51EF98: mov     ecx, esi; this
0x51EF9A: mov     [esi+1Ch], eax
0x51EF9D: mov     [esi+22h], ax
0x51EFA1: mov     [esi+20h], ax
0x51EFA5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x51EFAD: call    TESForm_destr
0x51EFB2: mov     ecx, [esp+24h+var_C]
0x51EFB6: mov     large fs:0, ecx
0x51EFBD: pop     ecx
0x51EFBE: pop     edi
0x51EFBF: pop     esi
0x51EFC0: add     esp, 18h
0x51EFC3: retn
0x9B7A90: mov     ecx, [ebp-10h]; this
0x9B7A93: jmp     TESForm_destr
0x9B7A98: cmp     dword ptr [ebp-10h], 0
0x9B7A9C: jz      loc_9B7AB0
0x9B7AA2: mov     eax, [ebp-10h]
0x9B7AA5: add     eax, 18h
0x9B7AA8: mov     [ebp-14h], eax
0x9B7AAB: jmp     loc_9B7AB7
0x9B7AB0: mov     dword ptr [ebp-14h], 0
0x9B7AB7: mov     ecx, [ebp-14h]
0x9B7ABA: jmp     TESFullName_Initialize
0x9B7ABF: cmp     dword ptr [ebp-10h], 0
0x9B7AC3: jz      loc_9B7AD7
0x9B7AC9: mov     eax, [ebp-10h]
0x9B7ACC: add     eax, 24h ; '$'
0x9B7ACF: mov     [ebp-18h], eax
0x9B7AD2: jmp     loc_9B7ADE
0x9B7AD7: mov     dword ptr [ebp-18h], 0
0x9B7ADE: mov     ecx, [ebp-18h]; void *
0x9B7AE1: jmp     TESTexture_destr
0x9B7AE6: mov     edx, [esp+arg_4]
0x9B7AEA: lea     eax, [edx-14h]
0x9B7AED: mov     ecx, [edx-18h]
0x9B7AF0: xor     ecx, eax
0x9B7AF2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B7AF7: mov     eax, offset stru_AE23F0
0x9B7AFC: jmp     ___CxxFrameHandler3
