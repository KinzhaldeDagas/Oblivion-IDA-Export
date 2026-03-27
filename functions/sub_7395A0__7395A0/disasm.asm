0x7395A0: push    ebx
0x7395A1: push    ebp
0x7395A2: push    esi
0x7395A3: mov     ebx, 1
0x7395A8: test    ds:0B4015Ch, bl
0x7395AE: push    edi
0x7395AF: mov     esi, ecx
0x7395B1: jnz     short loc_7395D0
0x7395B3: or      ds:0B4015Ch, ebx
0x7395B9: push    offset sub_A26B90; void (__cdecl *)()
0x7395BE: mov     dword ptr ds:0B40158h, 0
0x7395C8: call    _atexit
0x7395CD: add     esp, 4
0x7395D0: movzx   ecx, word ptr [esi+0Ah]
0x7395D4: mov     eax, [esp+10h+arg_0]
0x7395D8: cmp     eax, ecx
0x7395DA: mov     ebp, [esp+10h+arg_4]
0x7395DE: jb      short loc_7395F8
0x7395E0: lea     edx, [eax+1]
0x7395E3: mov     [esi+0Ah], dx
0x7395E7: mov     ecx, [ebp+0]
0x7395EA: cmp     ecx, ds:0B40158h
0x7395F0: jz      short loc_73961C
0x7395F2: add     [esi+0Ch], bx
0x7395F6: jmp     short loc_73961C
0x7395F8: mov     ecx, ds:0B40158h
0x7395FE: cmp     [ebp+0], ecx
0x739601: mov     edx, [esi+4]
0x739604: jz      short loc_739611
0x739606: cmp     [edx+eax*4], ecx
0x739609: jnz     short loc_73961C
0x73960B: add     [esi+0Ch], bx
0x73960F: jmp     short loc_73961C
0x739611: cmp     [edx+eax*4], ecx
0x739614: jz      short loc_73961C
0x739616: add     word ptr [esi+0Ch], 0FFFFh
0x73961C: mov     ecx, [esi+4]
0x73961F: mov     esi, [ecx+eax*4]
0x739622: cmp     esi, [ebp+0]
0x739625: lea     edi, [ecx+eax*4]
0x739628: jz      short loc_73965C
0x73962A: test    esi, esi
0x73962C: jz      short loc_739649
0x73962E: lea     edx, [esi+4]
0x739631: push    edx; lpAddend
0x739632: call    dword ptr ds:0A2807Ch
0x739638: test    eax, eax
0x73963A: jnz     short loc_739649
0x73963C: test    esi, esi
0x73963E: jz      short loc_739649
0x739640: mov     eax, [esi]
0x739642: mov     edx, [eax]
0x739644: push    ebx
0x739645: mov     ecx, esi
0x739647: call    edx
0x739649: mov     eax, [ebp+0]
0x73964C: test    eax, eax
0x73964E: mov     [edi], eax
0x739650: jz      short loc_73965C
0x739652: add     eax, 4
0x739655: push    eax; lpAddend
0x739656: call    dword ptr ds:0A28078h
0x73965C: pop     edi
0x73965D: pop     esi
0x73965E: pop     ebp
0x73965F: pop     ebx
0x739660: retn    8
