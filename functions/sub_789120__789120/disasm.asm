0x789120: push    0FFFFFFFFh; Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
0x789122: push    offset SEH_789120
0x789127: mov     eax, large fs:0
0x78912D: push    eax
0x78912E: push    esi
0x78912F: mov     eax, ds:0B30AACh
0x789134: xor     eax, esp
0x789136: push    eax
0x789137: lea     eax, [esp+14h+var_C]
0x78913B: mov     large fs:0, eax
0x789141: mov     esi, ecx
0x789143: xor     eax, eax
0x789145: push    0FFFFFFFFh; count
0x789147: mov     [esi+14h], eax
0x78914A: mov     dword ptr [esi+18h], 0Fh
0x789151: push    eax; offset
0x789152: mov     [esp+1Ch+var_4], eax
0x789156: mov     [esi+4], al
0x789159: lea     eax, [esp+1Ch+source]
0x78915D: push    eax; source
0x78915E: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x789163: cmp     [esp+14h+source.capacity], 10h
0x789168: jb      short loc_789177
0x78916A: mov     ecx, dword ptr [esp+14h+source.storage]
0x78916E: push    ecx
0x78916F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789174: add     esp, 4
0x789177: mov     eax, esi
0x789179: mov     ecx, [esp+14h+var_C]
0x78917D: mov     large fs:0, ecx
0x789184: pop     ecx
0x789185: pop     esi
0x789186: add     esp, 0Ch
0x789189: retn    1Ch
0x9CB2B0: lea     ecx, [ebp+4]; this
0x9CB2B3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB2B8: mov     edx, dword ptr [esp+source.storage]
0x9CB2BC: lea     eax, [edx-4]
0x9CB2BF: mov     ecx, [edx-8]
0x9CB2C2: xor     ecx, eax
0x9CB2C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB2C9: mov     eax, offset stru_AF3948
0x9CB2CE: jmp     ___CxxFrameHandler3
