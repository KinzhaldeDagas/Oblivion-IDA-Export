0x883130: push    ecx
0x883131: mov     eax, [esp+4+arg_0]
0x883135: xor     ecx, ecx
0x883137: cmp     eax, 80h ; '€'
0x88313C: push    esi
0x88313D: push    edi
0x88313E: mov     [esp+0Ch+var_4], ecx
0x883142: ja      short loc_883151
0x883144: mov     esi, [esp+0Ch+arg_0]
0x883148: lea     eax, ds:0B45088h[eax*4]
0x88314F: jmp     short loc_883160
0x883151: xor     esi, esi
0x883153: mov     [esp+0Ch+arg_0], esi
0x883157: lea     eax, [esp+0Ch+arg_0]
0x88315B: mov     ecx, 1
0x883160: test    cl, 1
0x883163: mov     edi, [eax]
0x883165: jz      short loc_883183
0x883167: test    esi, esi
0x883169: jz      short loc_883183
0x88316B: lea     eax, [esi+4]
0x88316E: push    eax; lpAddend
0x88316F: call    dword ptr ds:0A2807Ch
0x883175: test    eax, eax
0x883177: jnz     short loc_883183
0x883179: mov     edx, [esi]
0x88317B: mov     eax, [edx]
0x88317D: push    1
0x88317F: mov     ecx, esi
0x883181: call    eax
0x883183: mov     eax, edi
0x883185: pop     edi
0x883186: pop     esi
0x883187: pop     ecx
0x883188: retn
