0x4379A0: push    0FFFFFFFFh
0x4379A2: push    offset ??1QueuedHead@@UAE@XZ_SEH
0x4379A7: mov     eax, large fs:0
0x4379AD: push    eax
0x4379AE: push    ecx
0x4379AF: push    ebx
0x4379B0: push    esi
0x4379B1: push    edi
0x4379B2: mov     eax, ___security_cookie
0x4379B7: xor     eax, esp
0x4379B9: push    eax
0x4379BA: lea     eax, [esp+20h+var_C]
0x4379BE: mov     large fs:0, eax
0x4379C4: mov     edi, ecx
0x4379C6: mov     [esp+20h+var_10], edi
0x4379CA: mov     esi, [edi+28h]
0x4379CD: test    esi, esi
0x4379CF: mov     ebx, ds:InterlockedDecrement
0x4379D5: mov     [esp+20h+var_4], 1
0x4379DD: jz      short loc_4379F7
0x4379DF: lea     eax, [esi+4]
0x4379E2: push    eax; lpAddend
0x4379E3: call    ebx ; InterlockedDecrement
0x4379E5: test    eax, eax
0x4379E7: jnz     short loc_4379F7
0x4379E9: test    esi, esi
0x4379EB: jz      short loc_4379F7
0x4379ED: mov     edx, [esi]
0x4379EF: mov     eax, [edx]
0x4379F1: push    1
0x4379F3: mov     ecx, esi
0x4379F5: call    eax
0x4379F7: mov     esi, [edi+24h]
0x4379FA: test    esi, esi
0x4379FC: mov     byte ptr [esp+20h+var_4], 0
0x437A01: jz      short loc_437A1B
0x437A03: lea     ecx, [esi+4]
0x437A06: push    ecx; lpAddend
0x437A07: call    ebx ; InterlockedDecrement
0x437A09: test    eax, eax
0x437A0B: jnz     short loc_437A1B
0x437A0D: test    esi, esi
0x437A0F: jz      short loc_437A1B
0x437A11: mov     edx, [esi]
0x437A13: mov     eax, [edx]
0x437A15: push    1
0x437A17: mov     ecx, esi
0x437A19: call    eax
0x437A1B: mov     ecx, edi; this
0x437A1D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x437A25: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x437A2A: mov     ecx, [esp+20h+var_C]
0x437A2E: mov     large fs:0, ecx
0x437A35: pop     ecx
0x437A36: pop     edi
0x437A37: pop     esi
0x437A38: pop     ebx
0x437A39: add     esp, 10h
0x437A3C: retn
