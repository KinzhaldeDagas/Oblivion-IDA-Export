0x675220: push    ebx
0x675221: push    esi
0x675222: add     ecx, 68h ; 'h'; this
0x675225: xor     ebx, ebx
0x675227: call    sub_7616D0
0x67522C: mov     esi, eax
0x67522E: test    esi, esi
0x675230: jz      short loc_675287
0x675232: push    ebp
0x675233: mov     ebp, [esp+0Ch+arg_0]
0x675237: push    edi
0x675238: cmp     dword ptr [esi+4], 0
0x67523C: jnz     short loc_675243
0x67523E: cmp     dword ptr [esi], 0
0x675241: jz      short loc_675285
0x675243: test    ebx, ebx
0x675245: jnz     short loc_675285
0x675247: mov     ecx, [esi]
0x675249: mov     eax, [ecx]
0x67524B: mov     edx, [eax+190h]
0x675251: call    edx
0x675253: test    al, al
0x675255: jz      short loc_67527E
0x675257: mov     edi, [esi]
0x675259: test    edi, edi
0x67525B: jz      short loc_67527E
0x67525D: mov     ecx, edi; this
0x67525F: call    Actor_IsNPC
0x675264: test    al, al
0x675266: jz      short loc_67527E
0x675268: mov     eax, [edi]
0x67526A: mov     edx, [eax+170h]
0x675270: mov     ecx, edi
0x675272: call    edx
0x675274: test    eax, eax
0x675276: jz      short loc_67527E
0x675278: cmp     ebp, eax
0x67527A: jnz     short loc_67527E
0x67527C: mov     ebx, edi
0x67527E: mov     esi, [esi+4]
0x675281: test    esi, esi
0x675283: jnz     short loc_675238
0x675285: pop     edi
0x675286: pop     ebp
0x675287: pop     esi
0x675288: mov     eax, ebx
0x67528A: pop     ebx
0x67528B: retn    4
