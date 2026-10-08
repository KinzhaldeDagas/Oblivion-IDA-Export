0x7909D0: push    0FFFFFFFFh; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7909D2: push    offset SEH_7909D0
0x7909D7: mov     eax, large fs:0
0x7909DD: push    eax
0x7909DE: sub     esp, 24h
0x7909E1: push    ebx
0x7909E2: push    esi
0x7909E3: push    edi
0x7909E4: mov     eax, ds:0B30AACh
0x7909E9: xor     eax, esp
0x7909EB: push    eax
0x7909EC: lea     eax, [esp+40h+var_C]
0x7909F0: mov     large fs:0, eax
0x7909F6: mov     edi, ecx
0x7909F8: xor     ebx, ebx
0x7909FA: push    5Ch ; '\'; Size
0x7909FC: mov     [esp+44h+var_30], ebx
0x790A00: call    FormHeapAlloc
0x790A05: mov     esi, eax
0x790A07: add     esp, 4
0x790A0A: mov     [esp+40h+var_2C], esi
0x790A0E: cmp     esi, ebx
0x790A10: mov     [esp+40h+var_4], ebx
0x790A14: jz      short loc_790A3C
0x790A16: lea     eax, [esp+40h+outSmallString]
0x790A1A: push    eax; outSmallString
0x790A1B: mov     ecx, edi; this
0x790A1D: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x790A22: mov     ebx, 1
0x790A27: push    eax; stringObject
0x790A28: mov     ecx, esi; this
0x790A2A: mov     byte ptr [esp+44h+var_4], 1
0x790A2F: mov     [esp+44h+var_30], ebx
0x790A33: call    OB_StBezierSpline_ctor_cachedFromString_010201A0; Oblivion cached-string stBezierSpline constructor. Initializes five compact 16-byte vectors, performs cache lookup/copy or parse/build/cache, and allocates exactly 0x5C bytes for cached copies. Confirms the shipped vector-only layout; RT4.1 source is corroborative, not layout-authoritative.
0x790A38: mov     esi, eax
0x790A3A: jmp     short loc_790A3E
0x790A3C: xor     esi, esi
0x790A3E: test    bl, 1
0x790A41: jz      short loc_790A57
0x790A43: cmp     [esp+40h+var_10], 10h
0x790A48: jb      short loc_790A57
0x790A4A: mov     ecx, [esp+40h+var_24]
0x790A4E: push    ecx
0x790A4F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x790A54: add     esp, 4
0x790A57: mov     eax, esi
0x790A59: mov     ecx, [esp+40h+var_C]
0x790A5D: mov     large fs:0, ecx
0x790A64: pop     ecx
0x790A65: pop     edi
0x790A66: pop     esi
0x790A67: pop     ebx
0x790A68: add     esp, 30h
0x790A6B: retn
0x9CBB90: mov     eax, [ebp-2Ch]
0x9CBB93: push    eax
0x9CBB94: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CBB99: pop     ecx
0x9CBB9A: retn
0x9CBB9B: mov     eax, [ebp-30h]
0x9CBB9E: and     eax, 1
0x9CBBA1: jz      locret_9CBBB3
0x9CBBA7: and     dword ptr [ebp-30h], 0FFFFFFFEh
0x9CBBAB: lea     ecx, [ebp-28h]; this
0x9CBBAE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBBB3: retn
0x9CBBB4: mov     edx, [esp+arg_4]
0x9CBBB8: lea     eax, [edx-30h]
0x9CBBBB: mov     ecx, [edx-34h]
0x9CBBBE: xor     ecx, eax
0x9CBBC0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBBC5: mov     eax, offset stru_AF4A3C
0x9CBBCA: jmp     ___CxxFrameHandler3
