0x437A70: push    0FFFFFFFFh
0x437A72: push    offset ??1QueuedHelmet@@UAE@XZ_SEH
0x437A77: mov     eax, large fs:0
0x437A7D: push    eax
0x437A7E: push    ecx
0x437A7F: push    ebx
0x437A80: push    esi
0x437A81: push    edi
0x437A82: mov     eax, ___security_cookie
0x437A87: xor     eax, esp
0x437A89: push    eax
0x437A8A: lea     eax, [esp+20h+var_C]
0x437A8E: mov     large fs:0, eax
0x437A94: mov     edi, ecx
0x437A96: mov     [esp+20h+var_10], edi
0x437A9A: mov     esi, [edi+2Ch]
0x437A9D: test    esi, esi
0x437A9F: mov     ebx, ds:InterlockedDecrement
0x437AA5: mov     [esp+20h+var_4], 2
0x437AAD: jz      short loc_437AC7
0x437AAF: lea     eax, [esi+4]
0x437AB2: push    eax; lpAddend
0x437AB3: call    ebx ; InterlockedDecrement
0x437AB5: test    eax, eax
0x437AB7: jnz     short loc_437AC7
0x437AB9: test    esi, esi
0x437ABB: jz      short loc_437AC7
0x437ABD: mov     edx, [esi]
0x437ABF: mov     eax, [edx]
0x437AC1: push    1
0x437AC3: mov     ecx, esi
0x437AC5: call    eax
0x437AC7: mov     esi, [edi+28h]
0x437ACA: test    esi, esi
0x437ACC: mov     byte ptr [esp+20h+var_4], 1
0x437AD1: jz      short loc_437AEB
0x437AD3: lea     ecx, [esi+4]
0x437AD6: push    ecx; lpAddend
0x437AD7: call    ebx ; InterlockedDecrement
0x437AD9: test    eax, eax
0x437ADB: jnz     short loc_437AEB
0x437ADD: test    esi, esi
0x437ADF: jz      short loc_437AEB
0x437AE1: mov     edx, [esi]
0x437AE3: mov     eax, [edx]
0x437AE5: push    1
0x437AE7: mov     ecx, esi
0x437AE9: call    eax
0x437AEB: mov     esi, [edi+24h]
0x437AEE: test    esi, esi
0x437AF0: mov     byte ptr [esp+20h+var_4], 0
0x437AF5: jz      short loc_437B0F
0x437AF7: lea     ecx, [esi+8]
0x437AFA: push    ecx; lpAddend
0x437AFB: call    ebx ; InterlockedDecrement
0x437AFD: test    eax, eax
0x437AFF: jnz     short loc_437B0F
0x437B01: test    esi, esi
0x437B03: jz      short loc_437B0F
0x437B05: mov     edx, [esi]
0x437B07: mov     eax, [edx]
0x437B09: push    1
0x437B0B: mov     ecx, esi
0x437B0D: call    eax
0x437B0F: mov     ecx, edi; this
0x437B11: mov     [esp+20h+var_4], 0FFFFFFFFh
0x437B19: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x437B1E: mov     ecx, dword ptr [esp+20h+var_C]
0x437B22: mov     large fs:0, ecx
0x437B29: pop     ecx
0x437B2A: pop     edi
0x437B2B: pop     esi
0x437B2C: pop     ebx
0x437B2D: add     esp, 10h
0x437B30: retn
