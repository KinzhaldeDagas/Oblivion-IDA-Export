0x43AC40: push    ebx
0x43AC41: mov     ebx, [esp+4+arg_0]
0x43AC45: push    esi
0x43AC46: push    edi
0x43AC47: mov     edi, ecx
0x43AC49: mov     esi, [edi+18h]
0x43AC4C: cmp     esi, ebx
0x43AC4E: jz      short loc_43AC81
0x43AC50: test    esi, esi
0x43AC52: jz      short loc_43AC70
0x43AC54: lea     eax, [esi+8]
0x43AC57: push    eax; lpAddend
0x43AC58: call    ds:InterlockedDecrement
0x43AC5E: test    eax, eax
0x43AC60: jnz     short loc_43AC70
0x43AC62: test    esi, esi
0x43AC64: jz      short loc_43AC70
0x43AC66: mov     edx, [esi]
0x43AC68: mov     eax, [edx]
0x43AC6A: push    1
0x43AC6C: mov     ecx, esi
0x43AC6E: call    eax
0x43AC70: test    ebx, ebx
0x43AC72: mov     [edi+18h], ebx
0x43AC75: jz      short loc_43AC81
0x43AC77: add     ebx, 8
0x43AC7A: push    ebx; lpAddend
0x43AC7B: call    ds:InterlockedIncrement
0x43AC81: mov     ecx, [edi+18h]; this
0x43AC84: test    ecx, ecx
0x43AC86: jz      short loc_43AC8E
0x43AC88: push    edi
0x43AC89: call    ??0QueuedChildren@@QAE@XZ; QueuedChildren::QueuedChildren(void)
0x43AC8E: pop     edi
0x43AC8F: pop     esi
0x43AC90: pop     ebx
0x43AC91: retn    4
