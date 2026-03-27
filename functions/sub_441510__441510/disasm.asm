0x441510: push    esi
0x441511: push    edi
0x441512: mov     edi, ecx
0x441514: xor     esi, esi
0x441516: cmp     esi, ds:0B051D4h
0x44151C: jge     short loc_44154F
0x44151E: mov     eax, [edi+38h]
0x441521: cmp     dword ptr [eax+esi*4], 0
0x441525: lea     eax, [eax+esi*4]
0x441528: jz      short def_44153C; jumptable 0044153C default case, cases 2-4
0x44152A: mov     ecx, [eax]
0x44152C: test    ecx, ecx
0x44152E: jz      short def_44153C; jumptable 0044153C default case, cases 2-4
0x441530: movsx   eax, byte ptr [ecx+26h]
0x441534: add     eax, 0FFFFFFFEh; switch 5 cases
0x441537: cmp     eax, 4
0x44153A: ja      short def_44153C; jumptable 0044153C default case, cases 2-4
0x44153C: jmp     ds:jpt_44153C[eax*4]; switch jump
0x441543: push    1; jumptable 0044153C cases 5,6
0x441545: call    sub_4CB590
0x44154A: add     esi, 1; jumptable 0044153C default case, cases 2-4
0x44154D: jmp     short loc_441516
0x44154F: xor     esi, esi
0x441551: cmp     esi, ds:0B051DCh
0x441557: jge     short loc_44158A
0x441559: mov     ecx, [edi+3Ch]
0x44155C: cmp     dword ptr [ecx+esi*4], 0
0x441560: lea     eax, [ecx+esi*4]
0x441563: jz      short def_441577; jumptable 00441577 default case, cases 2-4
0x441565: mov     ecx, [eax]
0x441567: test    ecx, ecx
0x441569: jz      short def_441577; jumptable 00441577 default case, cases 2-4
0x44156B: movsx   eax, byte ptr [ecx+26h]
0x44156F: add     eax, 0FFFFFFFEh; switch 5 cases
0x441572: cmp     eax, 4
0x441575: ja      short def_441577; jumptable 00441577 default case, cases 2-4
0x441577: jmp     ds:jpt_441577[eax*4]; switch jump
0x44157E: push    1; jumptable 00441577 cases 5,6
0x441580: call    sub_4CB590
0x441585: add     esi, 1; jumptable 00441577 default case, cases 2-4
0x441588: jmp     short loc_441551
0x44158A: pop     edi
0x44158B: pop     esi
0x44158C: retn
