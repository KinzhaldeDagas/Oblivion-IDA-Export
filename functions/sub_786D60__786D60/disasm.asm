0x786D60: push    0FFFFFFFFh; Oblivion cached-string stBezierSpline constructor. Initializes five compact 16-byte vectors, performs cache lookup/copy or parse/build/cache, and allocates exactly 0x5C bytes for cached copies. Confirms the shipped vector-only layout; RT4.1 source is corroborative, not layout-authoritative.
0x786D62: push    offset SEH_786D60
0x786D67: mov     eax, large fs:0
0x786D6D: push    eax
0x786D6E: push    ecx
0x786D6F: push    ebp
0x786D70: push    esi
0x786D71: push    edi
0x786D72: mov     eax, ds:0B30AACh
0x786D77: xor     eax, esp
0x786D79: push    eax
0x786D7A: lea     eax, [esp+20h+var_C]
0x786D7E: mov     large fs:0, eax
0x786D84: mov     esi, ecx
0x786D86: mov     [esp+20h+var_10], esi
0x786D8A: xor     edi, edi
0x786D8C: mov     [esi+10h], edi
0x786D8F: mov     [esi+14h], edi
0x786D92: mov     [esi+18h], edi
0x786D95: mov     [esp+20h+var_4], edi
0x786D99: mov     [esi+20h], edi
0x786D9C: mov     [esi+24h], edi
0x786D9F: mov     [esi+28h], edi
0x786DA2: mov     [esi+30h], edi
0x786DA5: mov     [esi+34h], edi
0x786DA8: mov     [esi+38h], edi
0x786DAB: mov     [esi+40h], edi
0x786DAE: mov     [esi+44h], edi
0x786DB1: mov     [esi+48h], edi
0x786DB4: mov     [esi+50h], edi
0x786DB7: mov     [esi+54h], edi
0x786DBA: mov     [esi+58h], edi
0x786DBD: mov     ebp, [esp+20h+stringObject]
0x786DC1: push    ebp; stringObject
0x786DC2: mov     ecx, offset OB_stBezierSpline_CacheMap_010201A0; cacheMap
0x786DC7: mov     byte ptr [esp+24h+var_4], 4
0x786DCC: call    OB_StBezierSpline_FindOrInsertCacheEntry_010201A0; Oblivion stBezierSpline cache lookup/insert helper. lower_bound searches the 28-byte source-string key; an absent key is copied into a {string,spline*} pair and inserted with a hint. Returns the node's stBezierSpline** value slot at +0x28.
0x786DD1: mov     eax, [eax]
0x786DD3: cmp     eax, edi
0x786DD5: mov     ecx, esi; this
0x786DD7: jnz     short loc_786E20
0x786DD9: push    ebp; stringObject
0x786DDA: call    OB_StBezierSpline_ParseFromString_010201A0; stBezierSpline text parser. Accepts strings beginning with BezierSpline, reads min/max/variance, then a braced control-point count followed by point, tangent, and tangent-length float groups.
0x786DDF: push    1F4h; count
0x786DE4: mov     ecx, esi; this
0x786DE6: call    OB_StBezierSpline_CreateEvenlySpacedPoints_010201A0; stBezierSpline evenly-spaced point/table builder. Called after parsing a new profile string, with 0x1F4 samples in the observed constructor path.
0x786DEB: push    5Ch ; '\'; Size
0x786DED: call    FormHeapAlloc
0x786DF2: add     esp, 4
0x786DF5: mov     [esp+20h+stringObject], eax
0x786DF9: cmp     eax, edi
0x786DFB: mov     byte ptr [esp+20h+var_4], 5
0x786E00: jz      short loc_786E0C
0x786E02: push    esi; source
0x786E03: mov     ecx, eax; this
0x786E05: call    OB_StBezierSpline_CopyCtor_010201A0; stBezierSpline/profile copy constructor wrapper: zeroes vector/storage fields, then copies from an existing parsed profile.
0x786E0A: mov     edi, eax
0x786E0C: push    ebp; stringObject
0x786E0D: mov     ecx, offset OB_stBezierSpline_CacheMap_010201A0; cacheMap
0x786E12: mov     byte ptr [esp+24h+var_4], 4
0x786E17: call    OB_StBezierSpline_FindOrInsertCacheEntry_010201A0; Oblivion stBezierSpline cache lookup/insert helper. lower_bound searches the 28-byte source-string key; an absent key is copied into a {string,spline*} pair and inserted with a hint. Returns the node's stBezierSpline** value slot at +0x28.
0x786E1C: mov     [eax], edi
0x786E1E: jmp     short loc_786E26
0x786E20: push    eax; source
0x786E21: call    OB_StBezierSpline_CopyFrom_010201A0; stBezierSpline/profile copy helper used when a cached profile already exists.
0x786E26: mov     eax, esi
0x786E28: mov     ecx, [esp+20h+var_C]
0x786E2C: mov     large fs:0, ecx
0x786E33: pop     ecx
0x786E34: pop     edi
0x786E35: pop     esi
0x786E36: pop     ebp
0x786E37: add     esp, 10h
0x786E3A: retn    4
0x9CB1F0: mov     ecx, [ebp-10h]
0x9CB1F3: add     ecx, 0Ch; this
0x9CB1F6: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB1FB: mov     ecx, [ebp-10h]
0x9CB1FE: add     ecx, 1Ch; this
0x9CB201: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB206: mov     ecx, [ebp-10h]
0x9CB209: add     ecx, 2Ch ; ','; this
0x9CB20C: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CB211: mov     ecx, [ebp-10h]
0x9CB214: add     ecx, 3Ch ; '<'; this
0x9CB217: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB21C: mov     ecx, [ebp-10h]
0x9CB21F: add     ecx, 4Ch ; 'L'; this
0x9CB222: jmp     OB_stVector24_DestroyThunk_010201A0; Oblivion 1.2.0.416: compiler thunk to the shared 24-byte vector destructor.
0x9CB227: mov     eax, [ebp+4]
0x9CB22A: push    eax
0x9CB22B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CB230: pop     ecx
0x9CB231: retn
0x9CB232: mov     edx, [esp+arg_4]
0x9CB236: lea     eax, [edx-10h]
0x9CB239: mov     ecx, [edx-14h]
0x9CB23C: xor     ecx, eax
0x9CB23E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB243: mov     eax, offset stru_AF3894
0x9CB248: jmp     ___CxxFrameHandler3
