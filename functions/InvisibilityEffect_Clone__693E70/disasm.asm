0x693E70: push    0FFFFFFFFh
0x693E72: push    offset SEH_8C8970
0x693E77: mov     eax, large fs:0
0x693E7D: push    eax
0x693E7E: push    ecx
0x693E7F: push    esi
0x693E80: push    edi
0x693E81: mov     eax, ds:0B30AACh
0x693E86: xor     eax, esp
0x693E88: push    eax
0x693E89: lea     eax, [esp+1Ch+var_C]
0x693E8D: mov     large fs:0, eax
0x693E93: mov     esi, ecx
0x693E95: push    3Ch ; '<'; Size
0x693E97: call    FormHeapAlloc
0x693E9C: mov     edi, eax
0x693E9E: add     esp, 4
0x693EA1: mov     [esp+1Ch+var_10], edi
0x693EA5: test    edi, edi
0x693EA7: mov     [esp+1Ch+var_4], 0
0x693EAF: jz      short loc_693ECC
0x693EB1: mov     eax, [esi+0Ch]
0x693EB4: mov     ecx, [esi+8]
0x693EB7: mov     edx, [esi+24h]
0x693EBA: push    eax; int
0x693EBB: push    ecx; int
0x693EBC: push    edx; int
0x693EBD: mov     ecx, edi; this
0x693EBF: call    ValueModifierEffect_constr
0x693EC4: mov     dword ptr [edi], offset ??_7InvisibilityEffect@@6B@; const InvisibilityEffect::`vftable'
0x693ECA: jmp     short loc_693ECE
0x693ECC: xor     edi, edi
0x693ECE: mov     eax, [esi]
0x693ED0: mov     edx, [eax+2Ch]
0x693ED3: push    edi
0x693ED4: mov     ecx, esi
0x693ED6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x693EDE: call    edx
0x693EE0: mov     eax, edi
0x693EE2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x693EE6: mov     large fs:0, ecx
0x693EED: pop     ecx
0x693EEE: pop     edi
0x693EEF: pop     esi
0x693EF0: add     esp, 10h
0x693EF3: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
