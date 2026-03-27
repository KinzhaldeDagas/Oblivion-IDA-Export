0x7ED3B0: sub     esp, 8
0x7ED3B3: push    ebx
0x7ED3B4: push    ebp
0x7ED3B5: push    esi
0x7ED3B6: push    edi
0x7ED3B7: xor     edi, edi
0x7ED3B9: mov     ebp, ecx
0x7ED3BB: cmp     [ebp+7Ch], edi
0x7ED3BE: mov     [esp+18h+var_8], edi
0x7ED3C2: jz      loc_7ED465
0x7ED3C8: mov     eax, [ebp+7Ch]
0x7ED3CB: mov     ecx, [eax]
0x7ED3CD: mov     [ebp+7Ch], ecx
0x7ED3D0: mov     edi, [eax+8]
0x7ED3D3: test    edi, edi
0x7ED3D5: jz      short loc_7ED403
0x7ED3D7: test    ecx, ecx
0x7ED3D9: jz      short loc_7ED403
0x7ED3DB: cmp     word ptr [edi+118h], 0FFh
0x7ED3E4: jz      short loc_7ED3FF
0x7ED3E6: lea     edx, [esp+18h+var_4]
0x7ED3EA: push    edx
0x7ED3EB: mov     ecx, edi
0x7ED3ED: call    sub_405AD0
0x7ED3F2: mov     eax, [eax]
0x7ED3F4: or      [esp+18h+var_8], 1
0x7ED3F9: test    byte ptr [eax+18h], 1
0x7ED3FD: jz      short loc_7ED403
0x7ED3FF: mov     bl, 1
0x7ED401: jmp     short loc_7ED405
0x7ED403: xor     bl, bl
0x7ED405: test    byte ptr [esp+18h+var_8], 1
0x7ED40A: jz      short loc_7ED435
0x7ED40C: mov     esi, [esp+18h+var_4]
0x7ED410: and     [esp+18h+var_8], 0FFFFFFFEh
0x7ED415: test    esi, esi
0x7ED417: jz      short loc_7ED435
0x7ED419: lea     ecx, [esi+4]
0x7ED41C: push    ecx; lpAddend
0x7ED41D: call    dword ptr ds:0A2807Ch
0x7ED423: test    eax, eax
0x7ED425: jnz     short loc_7ED435
0x7ED427: test    esi, esi
0x7ED429: jz      short loc_7ED435
0x7ED42B: mov     edx, [esi]
0x7ED42D: mov     eax, [edx]
0x7ED42F: push    1
0x7ED431: mov     ecx, esi
0x7ED433: call    eax
0x7ED435: test    bl, bl
0x7ED437: jnz     short loc_7ED3C8
0x7ED439: test    edi, edi
0x7ED43B: jz      short loc_7ED465
0x7ED43D: cmp     word ptr [edi+118h], 0FFh
0x7ED446: jz      short loc_7ED461
0x7ED448: lea     edx, [esp+18h+var_4]
0x7ED44C: push    edx
0x7ED44D: mov     ecx, edi
0x7ED44F: call    sub_405AD0
0x7ED454: mov     eax, [eax]
0x7ED456: or      [esp+18h+var_8], 2
0x7ED45B: test    byte ptr [eax+18h], 1
0x7ED45F: jz      short loc_7ED465
0x7ED461: mov     bl, 1
0x7ED463: jmp     short loc_7ED467
0x7ED465: xor     bl, bl
0x7ED467: test    byte ptr [esp+18h+var_8], 2
0x7ED46C: jz      short loc_7ED492
0x7ED46E: mov     esi, [esp+18h+var_4]
0x7ED472: test    esi, esi
0x7ED474: jz      short loc_7ED492
0x7ED476: lea     ecx, [esi+4]
0x7ED479: push    ecx; lpAddend
0x7ED47A: call    dword ptr ds:0A2807Ch
0x7ED480: test    eax, eax
0x7ED482: jnz     short loc_7ED492
0x7ED484: test    esi, esi
0x7ED486: jz      short loc_7ED492
0x7ED488: mov     edx, [esi]
0x7ED48A: mov     eax, [edx]
0x7ED48C: push    1
0x7ED48E: mov     ecx, esi
0x7ED490: call    eax
0x7ED492: neg     bl
0x7ED494: sbb     ebx, ebx
0x7ED496: not     ebx
0x7ED498: and     ebx, edi
0x7ED49A: pop     edi
0x7ED49B: pop     esi
0x7ED49C: pop     ebp
0x7ED49D: mov     eax, ebx
0x7ED49F: pop     ebx
0x7ED4A0: add     esp, 8
0x7ED4A3: retn
