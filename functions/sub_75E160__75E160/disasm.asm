0x75E160: push    ecx
0x75E161: push    ebx
0x75E162: mov     bl, [esp+8+arg_0]
0x75E166: test    bl, 2
0x75E169: push    esi
0x75E16A: mov     esi, ecx
0x75E16C: jz      loc_75E216
0x75E172: lea     eax, [esi-4]
0x75E175: push    ebp
0x75E176: mov     ebp, [eax]
0x75E178: lea     ecx, [ebp+ebp*4+0]
0x75E17C: sub     ebp, 1
0x75E17F: mov     [esp+10h+var_4], eax
0x75E183: lea     esi, [esi+ecx*4]
0x75E186: js      short loc_75E1FD
0x75E188: xor     ebx, ebx
0x75E18A: push    edi
0x75E18B: jmp     short loc_75E190
0x75E18D: align 10h
0x75E190: sub     esi, 14h
0x75E193: mov     dword ptr [esi], offset ??_7NiPSysUpdateTask@@6B@; const NiPSysUpdateTask::`vftable'
0x75E199: mov     edi, [esi+0Ch]
0x75E19C: cmp     edi, ebx
0x75E19E: jz      short loc_75E1BF
0x75E1A0: lea     edx, [edi+4]
0x75E1A3: push    edx; lpAddend
0x75E1A4: call    dword ptr ds:0A2807Ch
0x75E1AA: test    eax, eax
0x75E1AC: jnz     short loc_75E1BC
0x75E1AE: cmp     edi, ebx
0x75E1B0: jz      short loc_75E1BC
0x75E1B2: mov     eax, [edi]
0x75E1B4: mov     edx, [eax]
0x75E1B6: push    1
0x75E1B8: mov     ecx, edi
0x75E1BA: call    edx
0x75E1BC: mov     [esi+0Ch], ebx
0x75E1BF: mov     edi, [esi+0Ch]
0x75E1C2: cmp     edi, ebx
0x75E1C4: jz      short loc_75E1E2
0x75E1C6: lea     eax, [edi+4]
0x75E1C9: push    eax; lpAddend
0x75E1CA: call    dword ptr ds:0A2807Ch
0x75E1D0: test    eax, eax
0x75E1D2: jnz     short loc_75E1E2
0x75E1D4: cmp     edi, ebx
0x75E1D6: jz      short loc_75E1E2
0x75E1D8: mov     edx, [edi]
0x75E1DA: mov     eax, [edx]
0x75E1DC: push    1
0x75E1DE: mov     ecx, edi
0x75E1E0: call    eax
0x75E1E2: mov     ecx, esi
0x75E1E4: mov     dword ptr [esi], offset ??_7NiTask@@6B@; const NiTask::`vftable'
0x75E1EA: call    NiRefObject_destr
0x75E1EF: sub     ebp, 1
0x75E1F2: jns     short loc_75E190
0x75E1F4: mov     eax, [esp+14h+var_4]
0x75E1F8: mov     bl, [esp+14h+arg_0]
0x75E1FC: pop     edi
0x75E1FD: test    bl, 1
0x75E200: pop     ebp
0x75E201: jz      short loc_75E22B
0x75E203: push    eax
0x75E204: call    FormHeapFree
0x75E209: mov     eax, [esp+10h+var_4]
0x75E20D: add     esp, 4
0x75E210: pop     esi
0x75E211: pop     ebx
0x75E212: pop     ecx
0x75E213: retn    4
0x75E216: call    sub_75DF80
0x75E21B: test    bl, 1
0x75E21E: jz      short loc_75E229
0x75E220: push    esi
0x75E221: call    FormHeapFree
0x75E226: add     esp, 4
0x75E229: mov     eax, esi
0x75E22B: pop     esi
0x75E22C: pop     ebx
0x75E22D: pop     ecx
0x75E22E: retn    4
