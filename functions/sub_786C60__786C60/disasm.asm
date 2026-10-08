0x786C60: push    0FFFFFFFFh; Oblivion stBezierSpline cache lookup/insert helper. lower_bound searches the 28-byte source-string key; an absent key is copied into a {string,spline*} pair and inserted with a hint. Returns the node's stBezierSpline** value slot at +0x28.
0x786C62: push    offset SEH_786C60
0x786C67: mov     eax, large fs:0
0x786C6D: push    eax
0x786C6E: sub     esp, 28h
0x786C71: push    ebx
0x786C72: push    ebp
0x786C73: push    esi
0x786C74: push    edi
0x786C75: mov     eax, ds:0B30AACh
0x786C7A: xor     eax, esp
0x786C7C: push    eax
0x786C7D: lea     eax, [esp+48h+var_C]
0x786C81: mov     large fs:0, eax
0x786C87: mov     edi, ecx
0x786C89: mov     ebp, [esp+48h+stringObject]
0x786C8D: push    ebp; key
0x786C8E: call    OB_stBezierSplineCacheMap_LowerBound_010201A0; Oblivion-authoritative lower_bound for the spline cache's 28-byte small-string key. Walks the red-black tree from head->parent/root and returns the first node whose key is not less than the requested key, or head.
0x786C93: xor     ebx, ebx
0x786C95: cmp     edi, ebx
0x786C97: mov     esi, eax
0x786C99: jnz     short loc_786CA0
0x786C9B: call    __invalid_parameter_noinfo
0x786CA0: mov     eax, [edi+4]
0x786CA3: cmp     esi, eax
0x786CA5: jz      short loc_786CCA
0x786CA7: cmp     dword ptr [esi+24h], 10h
0x786CAB: mov     ecx, [esi+20h]
0x786CAE: jb      short loc_786CB5
0x786CB0: mov     eax, [esi+10h]
0x786CB3: jmp     short loc_786CB8
0x786CB5: lea     eax, [esi+10h]
0x786CB8: push    ecx
0x786CB9: push    eax
0x786CBA: mov     eax, [ebp+14h]
0x786CBD: push    eax
0x786CBE: push    ebx
0x786CBF: mov     ecx, ebp
0x786CC1: call    sub_6F5DE0
0x786CC6: test    eax, eax
0x786CC8: jge     short loc_786D2B
0x786CCA: push    0FFFFFFFFh; count
0x786CCC: push    ebx; offset
0x786CCD: push    ebp; source
0x786CCE: lea     ecx, [esp+54h+value]; this
0x786CD2: mov     [esp+54h+value.key.capacity], 0Fh
0x786CDA: mov     [esp+54h+value.key.size], ebx
0x786CDE: mov     byte ptr [esp+54h+value.key.storage], bl
0x786CE2: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x786CE7: mov     [esp+48h+value.value], ebx
0x786CEB: lea     ecx, [esp+48h+value]
0x786CEF: push    ecx; value
0x786CF0: push    esi; hintNode
0x786CF1: push    edi; hintOwner
0x786CF2: lea     edx, [esp+54h+result]
0x786CF6: push    edx; result
0x786CF7: mov     ecx, edi; this
0x786CF9: mov     [esp+58h+var_4], ebx
0x786CFD: call    OB_stBezierSplineCacheMap_InsertHint_010201A0; Hinted unique insertion for the spline-cache map. Validates the {owner,node} hint and adjacent key ordering; inserts directly when legal, otherwise falls back to the ordinary unique-insert search.
0x786D02: cmp     [esp+48h+value.key.capacity], 10h
0x786D07: mov     edi, [eax]
0x786D09: mov     esi, [eax+4]
0x786D0C: jb      short loc_786D1B
0x786D0E: mov     eax, dword ptr [esp+48h+value.key.storage]
0x786D12: push    eax
0x786D13: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x786D18: add     esp, 4
0x786D1B: mov     [esp+48h+value.key.capacity], 0Fh
0x786D23: mov     [esp+48h+value.key.size], ebx
0x786D27: mov     byte ptr [esp+48h+value.key.storage], bl
0x786D2B: cmp     edi, ebx
0x786D2D: jnz     short loc_786D34
0x786D2F: call    __invalid_parameter_noinfo
0x786D34: cmp     esi, [edi+4]
0x786D37: jnz     short loc_786D3E
0x786D39: call    __invalid_parameter_noinfo
0x786D3E: lea     eax, [esi+28h]
0x786D41: mov     ecx, [esp+48h+var_C]
0x786D45: mov     large fs:0, ecx
0x786D4C: pop     ecx
0x786D4D: pop     edi
0x786D4E: pop     esi
0x786D4F: pop     ebp
0x786D50: pop     ebx
0x786D51: add     esp, 34h
0x786D54: retn    4
0x9CB1C0: lea     ecx, [ebp-2Ch]; this
0x9CB1C3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB1C8: mov     edx, [esp+arg_4]
0x9CB1CC: lea     eax, [edx-38h]
0x9CB1CF: mov     ecx, [edx-3Ch]
0x9CB1D2: xor     ecx, eax
0x9CB1D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB1D9: mov     eax, offset stru_AF3870
0x9CB1DE: jmp     ___CxxFrameHandler3
