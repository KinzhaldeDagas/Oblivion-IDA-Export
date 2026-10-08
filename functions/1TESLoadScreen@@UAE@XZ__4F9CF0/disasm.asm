0x4F9CF0: push    0FFFFFFFFh
0x4F9CF2: push    offset ??1TESLoadScreen@@UAE@XZ_SEH
0x4F9CF7: mov     eax, large fs:0
0x4F9CFD: push    eax
0x4F9CFE: sub     esp, 8
0x4F9D01: push    esi
0x4F9D02: push    edi
0x4F9D03: mov     eax, ds:0B30AACh
0x4F9D08: xor     eax, esp
0x4F9D0A: push    eax
0x4F9D0B: lea     eax, [esp+20h+var_C]
0x4F9D0F: mov     large fs:0, eax
0x4F9D15: mov     esi, ecx
0x4F9D17: mov     [esp+20h+var_10], esi
0x4F9D1B: lea     edi, [esi+18h]
0x4F9D1E: mov     dword ptr [esi], offset ??_7TESLoadScreen@@6BTESLoadScreen@@@; const TESLoadScreen::`vftable'{for `TESLoadScreen'}
0x4F9D24: mov     dword ptr [edi], offset ??_7TESLoadScreen@@6BTESTexture@@@; const TESLoadScreen::`vftable'{for `TESTexture'}
0x4F9D2A: mov     dword ptr [esi+24h], offset ??_7TESLoadScreen@@6BTESDescription@@@; const TESLoadScreen::`vftable'{for `TESDescription'}
0x4F9D31: mov     [esp+20h+var_4], 2
0x4F9D39: call    sub_4F99C0
0x4F9D3E: mov     ecx, esi
0x4F9D40: call    j_TESForm_ClearComponentReferences
0x4F9D45: mov     eax, [esi+34h]
0x4F9D48: push    eax
0x4F9D49: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4F9D4E: xor     eax, eax
0x4F9D50: add     esp, 4
0x4F9D53: mov     ecx, edi; void *
0x4F9D55: mov     [esi+34h], eax
0x4F9D58: mov     [esi+3Ah], ax
0x4F9D5C: mov     [esi+38h], ax
0x4F9D60: mov     byte ptr [esp+20h+var_4], al
0x4F9D64: call    TESTexture_destr
0x4F9D69: mov     ecx, esi; this
0x4F9D6B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4F9D73: call    TESForm_destr
0x4F9D78: mov     ecx, [esp+20h+var_C]
0x4F9D7C: mov     large fs:0, ecx
0x4F9D83: pop     ecx
0x4F9D84: pop     edi
0x4F9D85: pop     esi
0x4F9D86: add     esp, 14h
0x4F9D89: retn
0x9B6B40: mov     ecx, [ebp-10h]; this
0x9B6B43: jmp     TESForm_destr
0x9B6B48: cmp     dword ptr [ebp-10h], 0
0x9B6B4C: jz      loc_9B6B60
0x9B6B52: mov     eax, [ebp-10h]
0x9B6B55: add     eax, 18h
0x9B6B58: mov     [ebp-14h], eax
0x9B6B5B: jmp     loc_9B6B67
0x9B6B60: mov     dword ptr [ebp-14h], 0
0x9B6B67: mov     ecx, [ebp-14h]; void *
0x9B6B6A: jmp     TESTexture_destr
0x9B6B6F: mov     ecx, [ebp-10h]
0x9B6B72: add     ecx, 34h ; '4'; void *
0x9B6B75: jmp     BSStringT_Clear
0x9B6B7A: mov     edx, [esp+arg_4]
0x9B6B7E: lea     eax, [edx-10h]
0x9B6B81: mov     ecx, [edx-14h]
0x9B6B84: xor     ecx, eax
0x9B6B86: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6B8B: mov     eax, offset stru_AE18F8
0x9B6B90: jmp     ___CxxFrameHandler3
