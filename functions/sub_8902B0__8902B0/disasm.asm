0x8902B0: push    ebp; TES4 authoritative: high-level controller manifold update wrapper. Builds bhkCharacterPointCollector, calls low-level hkpCharacterProxy_MoveAndUpdateManifold, then cleans stale collector contacts.
0x8902B1: mov     ebp, esp
0x8902B3: and     esp, 0FFFFFFF0h
0x8902B6: push    0FFFFFFFFh
0x8902B8: push    offset SEH_8902B0
0x8902BD: mov     eax, large fs:0
0x8902C3: push    eax
0x8902C4: sub     esp, 1E8h
0x8902CA: mov     eax, ds:0B30AACh
0x8902CF: xor     eax, esp
0x8902D1: mov     [esp+1F4h+var_14], eax
0x8902D8: push    ebx
0x8902D9: push    esi
0x8902DA: push    edi
0x8902DB: mov     eax, ds:0B30AACh
0x8902E0: xor     eax, esp
0x8902E2: push    eax
0x8902E3: lea     eax, [esp+204h+var_C]
0x8902EA: mov     large fs:0, eax
0x8902F0: mov     eax, [ebp+moveInfo]
0x8902F3: mov     esi, ecx
0x8902F5: mov     [esp+204h+moveInput], eax
0x8902F9: call    bhkRefObject_UpdateHavokObject
0x8902FE: test    esi, esi
0x890300: jz      short loc_89035B
0x890302: mov     ebx, [esi+8]
0x890305: test    ebx, ebx
0x890307: jz      short loc_89035B
0x890309: lea     edi, [esi+10h]
0x89030C: push    edi
0x89030D: lea     ecx, [esp+208h+collector]; this
0x890311: call    ??0bhkCharacterPointCollector@@QAE@XZ; Stack bhkCharacterPointCollector uses controller collector state at this+0x10 / proxy+0x10 as its persistent state block.
0x890316: mov     edx, [esi]
0x890318: mov     eax, [edx+58h]
0x89031B: mov     ecx, esi
0x89031D: mov     [esp+204h+var_4], 0
0x890328: call    eax
0x89032A: mov     edx, [esp+204h+moveInput]
0x89032E: push    edi; collectorState
0x89032F: lea     ecx, [esp+208h+collector]
0x890333: push    ecx; collector
0x890334: add     eax, 20h ; ' '
0x890337: push    eax; contextVec
0x890338: push    edx; moveInput
0x890339: mov     ecx, ebx; this
0x89033B: call    hkpCharacterProxy_MoveAndUpdateManifold; Runs low-level character proxy move/manifold update using the stack collector and persistent collector state.
0x890340: mov     ecx, edi; this
0x890342: call    bhkCharacterPointCollector_CleanupStaleContacts; Cleans/compacts stale contacts in the persistent collector state after low-level manifold update.
0x890347: lea     ecx, [esp+204h+collector]; this
0x89034B: mov     [esp+204h+var_4], 0FFFFFFFFh
0x890356: call    ??1bhkCharacterPointCollector@@UAE@XZ; TES4 authoritative: bhkCharacterPointCollector destructor releases object refs and dynamic arrays, including 0x30-byte contact storage.
0x89035B: mov     ecx, esi
0x89035D: call    bhkRefObject_UpdateHavokObject
0x890362: mov     ecx, [esp+204h+var_C]
0x890369: mov     large fs:0, ecx
0x890370: pop     ecx
0x890371: pop     edi
0x890372: pop     esi
0x890373: pop     ebx
0x890374: mov     ecx, [esp+1F4h+var_14]
0x89037B: xor     ecx, esp
0x89037D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x890382: mov     esp, ebp
0x890384: pop     ebp
0x890385: retn    4
0x9D61A0: lea     ecx, [ebp+collector]; this
0x9D61A6: jmp     ??1bhkCharacterPointCollector@@UAE@XZ; TES4 authoritative: bhkCharacterPointCollector destructor releases object refs and dynamic arrays, including 0x30-byte contact storage.
0x9D61AB: mov     edx, [esp-4+arg_4]
0x9D61AF: lea     eax, [edx-1F4h]
0x9D61B5: mov     ecx, [edx-1F8h]
0x9D61BB: xor     ecx, eax
0x9D61BD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D61C2: add     eax, 0Ch
0x9D61C5: mov     ecx, [edx-8]
0x9D61C8: xor     ecx, eax
0x9D61CA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D61CF: mov     eax, offset stru_AFE110
0x9D61D4: jmp     ___CxxFrameHandler3
