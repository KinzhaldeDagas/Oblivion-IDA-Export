0x797570: push    0FFFFFFFFh; OBLIVION AUTHORITY (2026-08-30): Constructs vector<vector<unsigned short*>> with count empty inner vectors; CombineStrips uses it for temporary per-LOD strip-pointer storage.
0x797572: push    offset SEH_7974F0
0x797577: mov     eax, large fs:0
0x79757D: push    eax
0x79757E: sub     esp, 10h
0x797581: push    esi
0x797582: push    edi
0x797583: mov     eax, ds:0B30AACh
0x797588: xor     eax, esp
0x79758A: push    eax
0x79758B: lea     eax, [esp+28h+var_C]
0x79758F: mov     large fs:0, eax
0x797595: mov     esi, ecx
0x797597: xor     edi, edi
0x797599: mov     [esp+28h+value.begin], edi
0x79759D: mov     [esp+28h+value.end], edi
0x7975A1: mov     [esp+28h+value.capacityEnd], edi
0x7975A5: mov     ecx, [esp+28h+arg_0]
0x7975A9: lea     eax, [esp+28h+value]
0x7975AD: push    eax; value
0x7975AE: push    ecx; count
0x7975AF: mov     ecx, esi; this
0x7975B1: mov     [esp+30h+var_4], edi
0x7975B5: call    OB_stVector_stVectorUShortPtr_FillCtor_010201A0; OBLIVION AUTHORITY (2026-08-30): Fill constructor for vector<vector<unsigned short*>>. Its inner owner is structurally identical to vector<float>, explaining reuse of the already-decoded shared 4-byte-element fill helper.
0x7975BA: mov     eax, [esp+28h+value.begin]
0x7975BE: cmp     eax, edi
0x7975C0: jz      short loc_7975CB
0x7975C2: push    eax
0x7975C3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7975C8: add     esp, 4
0x7975CB: mov     eax, esi
0x7975CD: mov     ecx, [esp+28h+var_C]
0x7975D1: mov     large fs:0, ecx
0x7975D8: pop     ecx
0x7975D9: pop     edi
0x7975DA: pop     esi
0x7975DB: add     esp, 1Ch
0x7975DE: retn    4
0x9CBD60: lea     ecx, [ebp-1Ch]; this
0x9CBD63: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBD68: mov     edx, [esp+arg_4]
0x9CBD6C: lea     eax, [edx-18h]
0x9CBD6F: mov     ecx, [edx-1Ch]
0x9CBD72: xor     ecx, eax
0x9CBD74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBD79: mov     eax, offset stru_AF4CA0
0x9CBD7E: jmp     ___CxxFrameHandler3
