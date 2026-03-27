0x437F40: push    0FFFFFFFFh
0x437F42: push    offset ??1QueuedPlayer@@UAE@XZ_SEH
0x437F47: mov     eax, large fs:0
0x437F4D: push    eax
0x437F4E: push    ecx
0x437F4F: push    ebx
0x437F50: push    esi
0x437F51: push    edi
0x437F52: mov     eax, ___security_cookie
0x437F57: xor     eax, esp
0x437F59: push    eax
0x437F5A: lea     eax, [esp+20h+var_C]
0x437F5E: mov     large fs:0, eax
0x437F64: mov     edi, ecx
0x437F66: mov     [esp+20h+var_10], edi
0x437F6A: mov     esi, [edi+3Ch]
0x437F6D: test    esi, esi
0x437F6F: mov     ebx, ds:InterlockedDecrement
0x437F75: mov     [esp+20h+var_4], 1
0x437F7D: jz      short loc_437F97
0x437F7F: lea     eax, [esi+8]
0x437F82: push    eax; lpAddend
0x437F83: call    ebx ; InterlockedDecrement
0x437F85: test    eax, eax
0x437F87: jnz     short loc_437F97
0x437F89: test    esi, esi
0x437F8B: jz      short loc_437F97
0x437F8D: mov     edx, [esi]
0x437F8F: mov     eax, [edx]
0x437F91: push    1
0x437F93: mov     ecx, esi
0x437F95: call    eax
0x437F97: mov     esi, [edi+38h]
0x437F9A: test    esi, esi
0x437F9C: mov     byte ptr [esp+20h+var_4], 0
0x437FA1: jz      short loc_437FBB
0x437FA3: lea     ecx, [esi+8]
0x437FA6: push    ecx; lpAddend
0x437FA7: call    ebx ; InterlockedDecrement
0x437FA9: test    eax, eax
0x437FAB: jnz     short loc_437FBB
0x437FAD: test    esi, esi
0x437FAF: jz      short loc_437FBB
0x437FB1: mov     edx, [esi]
0x437FB3: mov     eax, [edx]
0x437FB5: push    1
0x437FB7: mov     ecx, esi
0x437FB9: call    eax
0x437FBB: mov     ecx, edi; this
0x437FBD: mov     [esp+20h+var_4], 0FFFFFFFFh
0x437FC5: call    ??1QueuedCreature@@UAE@XZ; QueuedCreature::~QueuedCreature(void)
0x437FCA: mov     ecx, [esp+20h+var_C]
0x437FCE: mov     large fs:0, ecx
0x437FD5: pop     ecx
0x437FD6: pop     edi
0x437FD7: pop     esi
0x437FD8: pop     ebx
0x437FD9: add     esp, 10h
0x437FDC: retn
