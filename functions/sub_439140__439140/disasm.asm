0x439140: push    0FFFFFFFFh
0x439142: push    offset SEH_439140
0x439147: mov     eax, large fs:0
0x43914D: push    eax
0x43914E: push    ecx
0x43914F: push    ebx
0x439150: push    ebp
0x439151: push    esi
0x439152: push    edi
0x439153: mov     eax, ___security_cookie
0x439158: xor     eax, esp
0x43915A: push    eax
0x43915B: lea     eax, [esp+24h+var_C]
0x43915F: mov     large fs:0, eax
0x439165: mov     esi, ecx
0x439167: mov     [esp+24h+var_10], esi
0x43916B: xor     ebx, ebx
0x43916D: mov     [esi+4], ebx
0x439170: mov     [esp+24h+var_4], ebx
0x439174: mov     [esi+8], ebx
0x439177: mov     [esi+0Ch], ebx
0x43917A: mov     edi, [esi+8]
0x43917D: cmp     edi, ebx
0x43917F: mov     byte ptr [esp+24h+var_4], 1
0x439184: jz      short loc_4391A5
0x439186: lea     eax, [edi+4]
0x439189: push    eax; lpAddend
0x43918A: call    ds:InterlockedDecrement
0x439190: test    eax, eax
0x439192: jnz     short loc_4391A2
0x439194: cmp     edi, ebx
0x439196: jz      short loc_4391A2
0x439198: mov     edx, [edi]
0x43919A: mov     eax, [edx]
0x43919C: push    1
0x43919E: mov     ecx, edi
0x4391A0: call    eax
0x4391A2: mov     [esi+8], ebx
0x4391A5: mov     edi, [esp+24h+arg_0]
0x4391A9: mov     eax, edi
0x4391AB: lea     edx, [eax+1]
0x4391AE: mov     edi, edi
0x4391B0: mov     cl, [eax]
0x4391B2: add     eax, 1
0x4391B5: cmp     cl, bl
0x4391B7: jnz     short loc_4391B0
0x4391B9: sub     eax, edx
0x4391BB: add     eax, 1
0x4391BE: push    eax; Size
0x4391BF: call    FormHeapAlloc
0x4391C4: add     esp, 4
0x4391C7: mov     [esi], eax
0x4391C9: mov     ecx, edi
0x4391CB: mov     edx, eax
0x4391CD: lea     ecx, [ecx+0]
0x4391D0: mov     al, [ecx]
0x4391D2: mov     [edx], al
0x4391D4: add     ecx, 1
0x4391D7: add     edx, 1
0x4391DA: cmp     al, bl
0x4391DC: jnz     short loc_4391D0
0x4391DE: mov     ecx, [esp+24h+arg_4]
0x4391E2: push    ebx
0x4391E3: push    ecx
0x4391E4: lea     edx, [esp+2Ch+arg_4]
0x4391E8: push    edx
0x4391E9: call    sub_6CB240
0x4391EE: add     esp, 0Ch
0x4391F1: mov     ebp, eax
0x4391F3: mov     edi, [esi+4]
0x4391F6: cmp     edi, [ebp+0]
0x4391F9: mov     byte ptr [esp+24h+var_4], 2
0x4391FE: jz      short loc_439234
0x439200: cmp     edi, ebx
0x439202: jz      short loc_439220
0x439204: lea     eax, [edi+4]
0x439207: push    eax; lpAddend
0x439208: call    ds:InterlockedDecrement
0x43920E: test    eax, eax
0x439210: jnz     short loc_439220
0x439212: cmp     edi, ebx
0x439214: jz      short loc_439220
0x439216: mov     edx, [edi]
0x439218: mov     eax, [edx]
0x43921A: push    1
0x43921C: mov     ecx, edi
0x43921E: call    eax
0x439220: mov     eax, [ebp+0]
0x439223: cmp     eax, ebx
0x439225: mov     [esi+4], eax
0x439228: jz      short loc_439234
0x43922A: add     eax, 4
0x43922D: push    eax; lpAddend
0x43922E: call    ds:InterlockedIncrement
0x439234: mov     edi, [esp+24h+arg_4]
0x439238: cmp     edi, ebx
0x43923A: mov     byte ptr [esp+24h+var_4], 1
0x43923F: jz      short loc_43925D
0x439241: lea     ecx, [edi+4]
0x439244: push    ecx; lpAddend
0x439245: call    ds:InterlockedDecrement
0x43924B: test    eax, eax
0x43924D: jnz     short loc_43925D
0x43924F: cmp     edi, ebx
0x439251: jz      short loc_43925D
0x439253: mov     edx, [edi]
0x439255: mov     eax, [edx]
0x439257: push    1
0x439259: mov     ecx, edi
0x43925B: call    eax
0x43925D: cmp     [esi+4], ebx
0x439260: jz      short loc_439270
0x439262: mov     ecx, [esp+24h+arg_0]
0x439266: push    ecx
0x439267: mov     ecx, esi
0x439269: call    sub_436DA0
0x43926E: jmp     short loc_439280
0x439270: mov     edx, [esi]
0x439272: push    edx; ArgList
0x439273: push    offset aCouldNotCrea_0; "Could not create ControllerManager Sequ"...
0x439278: call    PrintError
0x43927D: add     esp, 8
0x439280: mov     eax, esi
0x439282: mov     ecx, dword ptr [esp+24h+var_C]
0x439286: mov     large fs:0, ecx
0x43928D: pop     ecx
0x43928E: pop     edi
0x43928F: pop     esi
0x439290: pop     ebp
0x439291: pop     ebx
0x439292: add     esp, 10h
0x439295: retn    8
