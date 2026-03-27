0x9491F0: push    ebx
0x9491F1: mov     ebx, [esp+4+arg_0]
0x9491F5: push    ebp
0x9491F6: push    esi
0x9491F7: mov     esi, ecx
0x9491F9: mov     eax, 1
0x9491FE: mov     [esi+6], ax
0x949202: mov     dword ptr [esi+8], offset off_A9D1C0
0x949209: mov     [esi+0Ch], al
0x94920C: mov     dword ptr [esi+20h], offset off_AA2B9C
0x949213: push    edi
0x949214: xor     edi, edi
0x949216: mov     dword ptr [esi], offset off_AA2BBC
0x94921C: mov     dword ptr [esi+8], offset off_AA2BA4
0x949223: mov     dword ptr [esi+20h], offset off_A9D250
0x94922A: mov     [esi+24h], edi
0x94922D: mov     ebp, [ebx+4]
0x949230: cmp     ebp, edi
0x949232: jle     short loc_94926C
0x949234: mov     eax, [ebx]
0x949236: mov     ecx, [eax+edi*4]
0x949239: mov     edx, [ecx]
0x94923B: call    dword ptr [edx+4]
0x94923E: push    eax
0x94923F: push    offset aPhysics; "Physics"
0x949244: call    sub_8B1770
0x949249: add     esp, 8
0x94924C: test    eax, eax
0x94924E: jz      short loc_949257
0x949250: inc     edi
0x949251: cmp     edi, ebp
0x949253: jl      short loc_949234
0x949255: jmp     short loc_94926C
0x949257: mov     eax, [ebx]
0x949259: lea     edi, [eax+edi*4]
0x94925C: mov     eax, [edi]
0x94925E: test    eax, eax
0x949260: jz      short loc_949267
0x949262: add     eax, 0FFFFFFF8h
0x949265: jmp     short loc_949269
0x949267: xor     eax, eax
0x949269: mov     [esi+24h], eax
0x94926C: mov     ecx, [esi+24h]
0x94926F: test    ecx, ecx
0x949271: jz      short loc_94928A
0x949273: lea     eax, [esi+20h]
0x949276: push    eax
0x949277: call    sub_8CB120
0x94927C: mov     eax, [esi+24h]
0x94927F: cmp     word ptr [eax+4], 0
0x949284: jz      short loc_94928A
0x949286: inc     word ptr [eax+6]
0x94928A: pop     edi
0x94928B: mov     eax, esi
0x94928D: pop     esi
0x94928E: pop     ebp
0x94928F: pop     ebx
0x949290: retn    4
