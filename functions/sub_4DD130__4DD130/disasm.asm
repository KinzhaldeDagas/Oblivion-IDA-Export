0x4DD130: push    ebx
0x4DD131: push    ebp
0x4DD132: push    esi
0x4DD133: push    edi
0x4DD134: push    8; Size
0x4DD136: mov     ebp, ecx
0x4DD138: call    FormHeapAlloc
0x4DD13D: add     esp, 4
0x4DD140: test    eax, eax
0x4DD142: jz      short loc_4DD14E
0x4DD144: mov     dword ptr [eax], 0
0x4DD14A: mov     edi, eax
0x4DD14C: jmp     short loc_4DD150
0x4DD14E: xor     edi, edi
0x4DD150: mov     esi, [edi]
0x4DD152: mov     ebx, [esp+10h+arg_0]
0x4DD156: cmp     esi, ebx
0x4DD158: jz      short loc_4DD18A
0x4DD15A: test    esi, esi
0x4DD15C: jz      short loc_4DD17A
0x4DD15E: lea     eax, [esi+4]
0x4DD161: push    eax; lpAddend
0x4DD162: call    dword ptr ds:0A2807Ch
0x4DD168: test    eax, eax
0x4DD16A: jnz     short loc_4DD17A
0x4DD16C: test    esi, esi
0x4DD16E: jz      short loc_4DD17A
0x4DD170: mov     edx, [esi]
0x4DD172: mov     eax, [edx]
0x4DD174: push    1
0x4DD176: mov     ecx, esi
0x4DD178: call    eax
0x4DD17A: test    ebx, ebx
0x4DD17C: mov     [edi], ebx
0x4DD17E: jz      short loc_4DD18A
0x4DD180: add     ebx, 4
0x4DD183: push    ebx; lpAddend
0x4DD184: call    dword ptr ds:0A28078h
0x4DD18A: fld1
0x4DD18C: push    edi
0x4DD18D: lea     ecx, [ebp+44h]
0x4DD190: fstp    dword ptr [edi+4]
0x4DD193: call    sub_428CC0
0x4DD198: pop     edi
0x4DD199: pop     esi
0x4DD19A: pop     ebp
0x4DD19B: pop     ebx
0x4DD19C: retn    4
