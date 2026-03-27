0x9891FA: mov     eax, [esp+Alignment]
0x9891FE: lea     ecx, [eax-1]
0x989201: test    eax, ecx
0x989203: jz      short loc_989222
0x989205: call    __errno
0x98920A: mov     dword ptr [eax], 16h
0x989210: xor     eax, eax
0x989212: push    eax
0x989213: push    eax
0x989214: push    eax
0x989215: push    eax
0x989216: push    eax
0x989217: call    __invalid_parameter
0x98921C: add     esp, 14h
0x98921F: xor     eax, eax
0x989221: retn
0x989222: mov     ecx, [esp+Size]
0x989226: push    ebx
0x989227: mov     ebx, [esp+4+Offset]
0x98922B: push    esi
0x98922C: xor     esi, esi
0x98922E: cmp     ebx, esi
0x989230: jz      short loc_989252
0x989232: cmp     ebx, ecx
0x989234: jb      short loc_989252
0x989236: call    __errno
0x98923B: push    esi
0x98923C: push    esi
0x98923D: push    esi
0x98923E: push    esi
0x98923F: push    esi
0x989240: mov     dword ptr [eax], 16h
0x989246: call    __invalid_parameter
0x98924B: add     esp, 14h
0x98924E: xor     eax, eax
0x989250: jmp     short loc_989290
0x989252: cmp     eax, 4
0x989255: ja      short loc_98925A
0x989257: push    4
0x989259: pop     eax
0x98925A: mov     esi, ebx
0x98925C: neg     esi
0x98925E: push    edi
0x98925F: lea     edi, [eax-1]
0x989262: and     esi, 3
0x989265: lea     eax, [esi+ecx]
0x989268: lea     eax, [eax+edi+4]
0x98926C: push    eax; Size
0x98926D: call    _malloc
0x989272: pop     ecx
0x989273: mov     ecx, eax
0x989275: test    ecx, ecx
0x989277: jz      short loc_98928F
0x989279: lea     eax, [ecx+esi]
0x98927C: add     eax, edi
0x98927E: lea     eax, [eax+ebx+4]
0x989282: not     edi
0x989284: and     eax, edi
0x989286: sub     eax, ebx
0x989288: mov     edx, eax
0x98928A: sub     edx, esi
0x98928C: mov     [edx-4], ecx
0x98928F: pop     edi
0x989290: pop     esi
0x989291: pop     ebx
0x989292: retn
