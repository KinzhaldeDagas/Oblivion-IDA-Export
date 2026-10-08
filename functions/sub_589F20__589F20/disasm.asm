0x589F20: push    0FFFFFFFFh; Verified: initializes0x10 trait entry ID and copied BSStringT name; caller AddUserTrait initializes lookupHits=0. Passed name is BSStringT by value (buffer freed after copy). Counter is incremented by successful forward lookups; ownership/refcount semantics are Unknown and are not assumed.
0x589F22: push    offset SEH_589F20
0x589F27: mov     eax, large fs:0
0x589F2D: push    eax
0x589F2E: push    ecx
0x589F2F: push    esi
0x589F30: push    edi
0x589F31: mov     eax, ds:0B30AACh
0x589F36: xor     eax, esp
0x589F38: push    eax
0x589F39: lea     eax, [esp+1Ch+var_C]
0x589F3D: mov     large fs:0, eax
0x589F43: mov     esi, ecx
0x589F45: mov     [esp+1Ch+var_10], esi
0x589F49: xor     eax, eax
0x589F4B: lea     ecx, [esi+8]; this
0x589F4E: mov     [esp+1Ch+var_4], eax
0x589F52: mov     [ecx], eax
0x589F54: mov     [ecx+4], ax
0x589F58: mov     [ecx+6], ax
0x589F5C: mov     edx, [esp+1Ch+id]
0x589F60: mov     edi, [esp+1Ch+a2]
0x589F64: push    eax; a3
0x589F65: push    edi; a2
0x589F66: mov     byte ptr [esp+24h+var_4], 1
0x589F6B: mov     [esi], edx
0x589F6D: call    BSStringT_Set
0x589F72: push    edi
0x589F73: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x589F78: add     esp, 4
0x589F7B: mov     eax, esi
0x589F7D: mov     ecx, [esp+1Ch+var_C]
0x589F81: mov     large fs:0, ecx
0x589F88: pop     ecx
0x589F89: pop     edi
0x589F8A: pop     esi
0x589F8B: add     esp, 10h
0x589F8E: retn    0Ch
0x9BF7D0: lea     ecx, [ebp+8]; void *
0x9BF7D3: jmp     BSStringT_Clear
0x9BF7D8: mov     ecx, [ebp-10h]
0x9BF7DB: add     ecx, 8; void *
0x9BF7DE: jmp     BSStringT_Clear
0x9BF7E3: mov     edx, [esp+a2]
0x9BF7E7: lea     eax, [edx-0Ch]
0x9BF7EA: mov     ecx, [edx-10h]
0x9BF7ED: xor     ecx, eax
0x9BF7EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF7F4: mov     eax, offset stru_AE8CD8
0x9BF7F9: jmp     ___CxxFrameHandler3
