0x7974F0: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): Constructs vector<vector<unsigned short>> with count empty inner vectors; CombineStrips uses it for temporary per-LOD strip-length storage.
0x7974F2: push    offset SEH_7974F0
0x7974F7: mov     eax, large fs:0
0x7974FD: push    eax
0x7974FE: sub     esp, 10h
0x797501: push    esi
0x797502: push    edi
0x797503: mov     eax, ds:0B30AACh
0x797508: xor     eax, esp
0x79750A: push    eax
0x79750B: lea     eax, [esp+28h+var_C]
0x79750F: mov     large fs:0, eax
0x797515: mov     esi, ecx
0x797517: xor     edi, edi
0x797519: mov     [esp+28h+value.begin], edi
0x79751D: mov     [esp+28h+value.end], edi
0x797521: mov     [esp+28h+value.capacityEnd], edi
0x797525: mov     ecx, [esp+28h+arg_0]
0x797529: lea     eax, [esp+28h+value]
0x79752D: push    eax; value
0x79752E: push    ecx; count
0x79752F: mov     ecx, esi; this
0x797531: mov     [esp+30h+var_4], edi
0x797535: call    OB_stVector_stVectorUShort_FillCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Fill constructor for vector<vector<unsigned short>>; allocates count outer owners and exception-safely deep-copies the supplied inner vector.
0x79753A: mov     eax, [esp+28h+value.begin]
0x79753E: cmp     eax, edi
0x797540: jz      short loc_79754B
0x797542: push    eax
0x797543: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x797548: add     esp, 4
0x79754B: mov     eax, esi
0x79754D: mov     ecx, [esp+28h+var_C]
0x797551: mov     large fs:0, ecx
0x797558: pop     ecx
0x797559: pop     edi
0x79755A: pop     esi
0x79755B: add     esp, 1Ch
0x79755E: retn    4
0x9CBD60: lea     ecx, [ebp-1Ch]; this
0x9CBD63: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBD68: mov     edx, [esp+arg_4]
0x9CBD6C: lea     eax, [edx-18h]
0x9CBD6F: mov     ecx, [edx-1Ch]
0x9CBD72: xor     ecx, eax
0x9CBD74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBD79: mov     eax, offset stru_AF4CA0
0x9CBD7E: jmp     ___CxxFrameHandler3
