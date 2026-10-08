0x46DD20: cmp     dword ptr [ecx+8], 0; MEF PERF 2026-09-07: Verified PERF-2: duplicate lookup visits existing model paths in list order and invokes98262D for each nonnull entry, returning on equality. Comparator is CRT case-insensitive/locale-aware dispatch, despite previous misleading strcmp label. N distinct additions from empty list produce N*(N-1)/2 string comparisons.
0x46DD24: push    esi
0x46DD25: lea     esi, [ecx+4]
0x46DD28: push    edi
0x46DD29: jnz     short loc_46DD30
0x46DD2B: cmp     dword ptr [esi], 0
0x46DD2E: jz      short loc_46DD5B
0x46DD30: mov     edi, [esp+8+Str2]
0x46DD34: test    edi, edi
0x46DD36: jz      short loc_46DD5B
0x46DD38: test    esi, esi
0x46DD3A: jz      short loc_46DD5B
0x46DD3C: lea     esp, [esp+0]
0x46DD40: mov     eax, [esi]
0x46DD42: test    eax, eax
0x46DD44: jz      short loc_46DD54
0x46DD46: push    edi; right
0x46DD47: push    eax; left
0x46DD48: call    CRT_StricmpLocaleDispatch
0x46DD4D: add     esp, 8
0x46DD50: test    eax, eax
0x46DD52: jz      short loc_46DD62
0x46DD54: mov     esi, [esi+4]
0x46DD57: test    esi, esi
0x46DD59: jnz     short loc_46DD40
0x46DD5B: pop     edi
0x46DD5C: xor     al, al
0x46DD5E: pop     esi
0x46DD5F: retn    4
0x46DD62: pop     edi
0x46DD63: mov     al, 1
0x46DD65: pop     esi
0x46DD66: retn    4
