0x6C4390: push    0FFFFFFFFh
0x6C4392: push    offset SEH_88E880
0x6C4397: mov     eax, large fs:0
0x6C439D: push    eax
0x6C439E: push    ecx
0x6C439F: push    ebx
0x6C43A0: push    ebp
0x6C43A1: push    esi
0x6C43A2: push    edi
0x6C43A3: mov     eax, ds:0B30AACh
0x6C43A8: xor     eax, esp
0x6C43AA: push    eax
0x6C43AB: lea     eax, [esp+24h+var_C]
0x6C43AF: mov     large fs:0, eax
0x6C43B5: mov     ebx, ecx
0x6C43B7: xor     ebp, ebp
0x6C43B9: cmp     [ebx+46h], bp
0x6C43BD: jbe     short loc_6C4439
0x6C43BF: nop
0x6C43C0: mov     eax, [ebx+40h]
0x6C43C3: mov     esi, [eax+ebp*4]
0x6C43C6: test    esi, esi
0x6C43C8: lea     eax, [eax+ebp*4]
0x6C43CB: jz      short loc_6C43D7
0x6C43CD: lea     ecx, [esi+4]
0x6C43D0: push    ecx; lpAddend
0x6C43D1: call    dword ptr ds:0A28078h
0x6C43D7: test    esi, esi
0x6C43D9: jz      short loc_6C440A
0x6C43DB: cmp     [esp+24h+arg_4], 0
0x6C43E0: jz      short loc_6C43E8
0x6C43E2: cmp     dword ptr [esi+44h], 0
0x6C43E6: jz      short loc_6C440A
0x6C43E8: mov     edi, [esi+0Ch]
0x6C43EB: xor     eax, eax
0x6C43ED: test    edi, edi
0x6C43EF: jbe     short loc_6C440A
0x6C43F1: mov     ecx, [esi+14h]
0x6C43F4: mov     edx, [ecx]
0x6C43F6: test    edx, edx
0x6C43F8: jz      short loc_6C4400
0x6C43FA: cmp     edx, [esp+24h+arg_0]
0x6C43FE: jz      short loc_6C4451
0x6C4400: add     eax, 1
0x6C4403: add     ecx, 10h
0x6C4406: cmp     eax, edi
0x6C4408: jb      short loc_6C43F4
0x6C440A: test    esi, esi
0x6C440C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C4414: jz      short loc_6C442E
0x6C4416: lea     edx, [esi+4]
0x6C4419: push    edx; lpAddend
0x6C441A: call    dword ptr ds:0A2807Ch
0x6C4420: test    eax, eax
0x6C4422: jnz     short loc_6C442E
0x6C4424: mov     eax, [esi]
0x6C4426: mov     edx, [eax]
0x6C4428: push    1
0x6C442A: mov     ecx, esi
0x6C442C: call    edx
0x6C442E: movzx   eax, word ptr [ebx+46h]
0x6C4432: add     ebp, 1
0x6C4435: cmp     ebp, eax
0x6C4437: jb      short loc_6C43C0
0x6C4439: xor     eax, eax
0x6C443B: mov     ecx, dword ptr [esp+24h+var_C]
0x6C443F: mov     large fs:0, ecx
0x6C4446: pop     ecx
0x6C4447: pop     edi
0x6C4448: pop     esi
0x6C4449: pop     ebp
0x6C444A: pop     ebx
0x6C444B: add     esp, 10h
0x6C444E: retn    8
0x6C4451: lea     ecx, [esi+4]
0x6C4454: push    ecx; lpAddend
0x6C4455: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6C445D: call    dword ptr ds:0A2807Ch
0x6C4463: test    eax, eax
0x6C4465: jnz     short loc_6C4471
0x6C4467: mov     edx, [esi]
0x6C4469: mov     eax, [edx]
0x6C446B: push    1
0x6C446D: mov     ecx, esi
0x6C446F: call    eax
0x6C4471: mov     eax, esi
0x6C4473: jmp     short loc_6C443B
