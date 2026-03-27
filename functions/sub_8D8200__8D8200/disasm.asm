0x8D8200: mov     eax, [esp+arg_4]
0x8D8204: sub     esp, 10h
0x8D8207: push    esi
0x8D8208: push    edi
0x8D8209: mov     edi, 1
0x8D820E: cmp     eax, edi
0x8D8210: mov     esi, ecx
0x8D8212: jnz     short loc_8D822E
0x8D8214: mov     ecx, [esi+8]
0x8D8217: mov     edx, [esp+18h+arg_0]
0x8D821B: mov     eax, [esi]
0x8D821D: push    ecx
0x8D821E: push    0
0x8D8220: push    edx
0x8D8221: mov     ecx, esi
0x8D8223: call    dword ptr [eax+8]
0x8D8226: pop     edi
0x8D8227: pop     esi
0x8D8228: add     esp, 10h
0x8D822B: retn    8
0x8D822E: push    ebp
0x8D822F: mov     ebp, [esp+1Ch+arg_0]
0x8D8233: fld     dword ptr [ebp+18h]
0x8D8236: fld     dword ptr [ebp+14h]
0x8D8239: fst     [esp+1Ch+var_10]
0x8D823D: fld     st(1)
0x8D823F: fstp    [esp+1Ch+var_C]
0x8D8243: fxch    st(1)
0x8D8245: fsub    st, st(1)
0x8D8247: fstp    [esp+1Ch+var_8]
0x8D824B: fstp    st
0x8D824D: fld     dword ptr ds:0A2FAA8h
0x8D8253: fld     [esp+1Ch+var_8]
0x8D8257: fucompp
0x8D8259: fnstsw  ax
0x8D825B: test    ah, 44h
0x8D825E: jp      short loc_8D826A
0x8D8260: mov     [esp+1Ch+var_4], 0
0x8D8268: jmp     short loc_8D8278
0x8D826A: fld     dword ptr ds:0A2F948h
0x8D8270: fdiv    [esp+1Ch+var_8]
0x8D8274: fstp    [esp+1Ch+var_4]
0x8D8278: push    edi
0x8D8279: push    0
0x8D827B: mov     ecx, ebp
0x8D827D: call    sub_89BF50
0x8D8282: mov     eax, ds:0BA7D98h
0x8D8287: cmp     [eax+4], edi
0x8D828A: jnz     short loc_8D829A
0x8D828C: pop     ebp
0x8D828D: pop     edi
0x8D828E: mov     eax, 2
0x8D8293: pop     esi
0x8D8294: add     esp, 10h
0x8D8297: retn    8
0x8D829A: lea     ecx, [esp+1Ch+var_10]
0x8D829E: push    ecx
0x8D829F: push    ebp
0x8D82A0: mov     ecx, esi
0x8D82A2: call    sub_8D7920
0x8D82A7: mov     edx, ds:0BA7D98h
0x8D82AD: cmp     [edx+4], edi
0x8D82B0: jz      short loc_8D828C
0x8D82B2: mov     esi, large fs:2Ch
0x8D82B9: mov     edi, ds:0BA9DE4h
0x8D82BF: mov     eax, [esi+edi*4]
0x8D82C2: mov     ecx, [eax+1A4h]
0x8D82C8: cmp     ecx, [eax+1A8h]
0x8D82CE: jnb     short loc_8D82F6
0x8D82D0: push    ebx
0x8D82D1: mov     ebx, eax
0x8D82D3: mov     ecx, [ebx+1A4h]
0x8D82D9: mov     dword ptr [ecx], offset aTtpostsimulate; "TtPostSimulateCb"
0x8D82DF: rdtsc
0x8D82E1: mov     [esp+20h+arg_0], eax
0x8D82E5: mov     edx, [esp+20h+arg_0]
0x8D82E9: mov     [ecx+4], edx
0x8D82EC: add     ecx, 0Ch
0x8D82EF: mov     [ebx+1A4h], ecx
0x8D82F5: pop     ebx
0x8D82F6: lea     eax, [esp+1Ch+var_10]
0x8D82FA: push    eax
0x8D82FB: push    ebp
0x8D82FC: call    sub_8DCD60
0x8D8301: mov     eax, [esi+edi*4]
0x8D8304: mov     ecx, [eax+1A4h]
0x8D830A: mov     edx, [eax+1A8h]
0x8D8310: add     esp, 8
0x8D8313: cmp     ecx, edx
0x8D8315: jnb     short loc_8D833B
0x8D8317: mov     esi, eax
0x8D8319: mov     ecx, [esi+1A4h]
0x8D831F: mov     dword ptr [ecx], offset aEt; "Et"
0x8D8325: rdtsc
0x8D8327: mov     [esp+1Ch+arg_0], eax
0x8D832B: mov     edx, [esp+1Ch+arg_0]
0x8D832F: mov     [ecx+4], edx
0x8D8332: add     ecx, 0Ch
0x8D8335: mov     [esi+1A4h], ecx
0x8D833B: pop     ebp
0x8D833C: pop     edi
0x8D833D: xor     eax, eax
0x8D833F: pop     esi
0x8D8340: add     esp, 10h
0x8D8343: retn    8
