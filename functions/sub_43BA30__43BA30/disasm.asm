0x43BA30: push    0FFFFFFFFh
0x43BA32: push    offset SEH_43BA30
0x43BA37: mov     eax, large fs:0
0x43BA3D: push    eax
0x43BA3E: push    ecx
0x43BA3F: push    ebx
0x43BA40: push    esi
0x43BA41: push    edi
0x43BA42: mov     eax, ___security_cookie
0x43BA47: xor     eax, esp
0x43BA49: push    eax
0x43BA4A: lea     eax, [esp+20h+var_C]
0x43BA4E: mov     large fs:0, eax
0x43BA54: xor     ebx, ebx
0x43BA56: push    30h ; '0'; Size
0x43BA58: mov     [esp+24h+var_4], ebx
0x43BA5C: mov     [esp+24h+var_10], ebx
0x43BA60: call    FormHeapAlloc
0x43BA65: mov     esi, eax
0x43BA67: add     esp, 4
0x43BA6A: cmp     esi, ebx
0x43BA6C: jz      short loc_43BA95
0x43BA6E: mov     eax, dword ptr [esp+20h+a2]
0x43BA72: push    eax; a2
0x43BA73: mov     ecx, esi; this
0x43BA75: call    sub_436500
0x43BA7A: mov     ecx, [esp+20h+arg_4]
0x43BA7E: mov     [esi+18h], ebx
0x43BA81: mov     [esi+1Ch], ebx
0x43BA84: mov     dword ptr [esi], offset ??_7QueuedHead@@6B@; const QueuedHead::`vftable'
0x43BA8A: mov     [esi+20h], ecx
0x43BA8D: mov     [esi+24h], ebx
0x43BA90: mov     [esi+28h], ebx
0x43BA93: jmp     short loc_43BA97
0x43BA95: xor     esi, esi
0x43BA97: cmp     esi, ebx
0x43BA99: mov     edi, [esp+20h+arg_0]
0x43BA9D: mov     [edi], esi
0x43BA9F: jz      short loc_43BAAB
0x43BAA1: add     esi, 8
0x43BAA4: push    esi; lpAddend
0x43BAA5: call    ds:InterlockedIncrement
0x43BAAB: mov     edx, [esp+20h+arg_C]
0x43BAAF: mov     ecx, [edi]
0x43BAB1: push    edx
0x43BAB2: mov     [esp+24h+var_4], ebx
0x43BAB6: mov     [esp+24h+var_10], 1
0x43BABE: call    sub_43AC40
0x43BAC3: mov     ecx, [edi]
0x43BAC5: mov     eax, [ecx]
0x43BAC7: mov     edx, [eax+20h]
0x43BACA: call    edx
0x43BACC: mov     eax, edi
0x43BACE: mov     ecx, [esp+20h+var_C]
0x43BAD2: mov     large fs:0, ecx
0x43BAD9: pop     ecx
0x43BADA: pop     edi
0x43BADB: pop     esi
0x43BADC: pop     ebx
0x43BADD: add     esp, 10h
0x43BAE0: retn    10h
