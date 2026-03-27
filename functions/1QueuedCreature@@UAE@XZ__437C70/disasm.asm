0x437C70: push    0FFFFFFFFh
0x437C72: push    offset ??1QueuedCreature@@UAE@XZ_SEH
0x437C77: mov     eax, large fs:0
0x437C7D: push    eax
0x437C7E: push    ecx
0x437C7F: push    ebx
0x437C80: push    esi
0x437C81: push    edi
0x437C82: mov     eax, ___security_cookie
0x437C87: xor     eax, esp
0x437C89: push    eax
0x437C8A: lea     eax, [esp+20h+var_C]
0x437C8E: mov     large fs:0, eax
0x437C94: mov     edi, ecx
0x437C96: mov     [esp+20h+var_10], edi
0x437C9A: mov     esi, [edi+30h]
0x437C9D: test    esi, esi
0x437C9F: mov     ebx, ds:InterlockedDecrement
0x437CA5: mov     [esp+20h+var_4], 3
0x437CAD: jz      short loc_437CC7
0x437CAF: lea     eax, [esi+8]
0x437CB2: push    eax; lpAddend
0x437CB3: call    ebx ; InterlockedDecrement
0x437CB5: test    eax, eax
0x437CB7: jnz     short loc_437CC7
0x437CB9: test    esi, esi
0x437CBB: jz      short loc_437CC7
0x437CBD: mov     edx, [esi]
0x437CBF: mov     eax, [edx]
0x437CC1: push    1
0x437CC3: mov     ecx, esi
0x437CC5: call    eax
0x437CC7: mov     esi, [edi+2Ch]
0x437CCA: test    esi, esi
0x437CCC: mov     byte ptr [esp+20h+var_4], 2
0x437CD1: jz      short loc_437CEB
0x437CD3: lea     ecx, [esi+4]
0x437CD6: push    ecx; lpAddend
0x437CD7: call    ebx ; InterlockedDecrement
0x437CD9: test    eax, eax
0x437CDB: jnz     short loc_437CEB
0x437CDD: test    esi, esi
0x437CDF: jz      short loc_437CEB
0x437CE1: mov     edx, [esi]
0x437CE3: mov     eax, [edx]
0x437CE5: push    1
0x437CE7: mov     ecx, esi
0x437CE9: call    eax
0x437CEB: mov     eax, [edi+28h]
0x437CEE: test    eax, eax
0x437CF0: jz      short loc_437CF8
0x437CF2: add     eax, 4
0x437CF5: push    eax; lpAddend
0x437CF6: call    ebx ; InterlockedDecrement
0x437CF8: mov     esi, [edi+24h]
0x437CFB: test    esi, esi
0x437CFD: mov     byte ptr [esp+20h+var_4], 0
0x437D02: jz      short loc_437D1C
0x437D04: lea     ecx, [esi+8]
0x437D07: push    ecx; lpAddend
0x437D08: call    ebx ; InterlockedDecrement
0x437D0A: test    eax, eax
0x437D0C: jnz     short loc_437D1C
0x437D0E: test    esi, esi
0x437D10: jz      short loc_437D1C
0x437D12: mov     edx, [esi]
0x437D14: mov     eax, [edx]
0x437D16: push    1
0x437D18: mov     ecx, esi
0x437D1A: call    eax
0x437D1C: mov     ecx, edi; this
0x437D1E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x437D26: call    ??1QueuedMagicItem@@UAE@XZ; QueuedMagicItem::~QueuedMagicItem(void)
0x437D2B: mov     ecx, dword ptr [esp+20h+var_C]
0x437D2F: mov     large fs:0, ecx
0x437D36: pop     ecx
0x437D37: pop     edi
0x437D38: pop     esi
0x437D39: pop     ebx
0x437D3A: add     esp, 10h
0x437D3D: retn
