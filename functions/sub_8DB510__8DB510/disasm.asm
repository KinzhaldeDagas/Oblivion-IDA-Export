0x8DB510: mov     eax, [esp+arg_0]
0x8DB514: push    ebx
0x8DB515: push    esi
0x8DB516: mov     esi, [eax+10h]
0x8DB519: push    edi
0x8DB51A: add     esi, eax
0x8DB51C: mov     eax, [esp+0Ch+arg_4]
0x8DB520: mov     edi, [eax+10h]
0x8DB523: mov     ebx, ecx
0x8DB525: mov     ecx, ds:0BA7D98h
0x8DB52B: push    1Fh
0x8DB52D: add     edi, eax
0x8DB52F: mov     eax, [ecx]
0x8DB531: push    18h
0x8DB533: call    dword ptr [eax+10h]
0x8DB536: mov     word ptr [eax+4], 18h
0x8DB53C: mov     ebx, [ebx+8]
0x8DB53F: mov     word ptr [eax+6], 1
0x8DB545: mov     dword ptr [eax], offset off_A9A3D0
0x8DB54B: mov     cx, [edi+8Eh]
0x8DB552: xor     edx, edx
0x8DB554: mov     dx, [esi+8Eh]
0x8DB55B: cmp     dx, cx
0x8DB55E: jnb     short loc_8DB562
0x8DB560: mov     ecx, edx
0x8DB562: mov     [eax+10h], edi
0x8DB565: pop     edi
0x8DB566: mov     [eax+0Ch], esi
0x8DB569: pop     esi
0x8DB56A: mov     [eax+8], ebx
0x8DB56D: mov     [eax+14h], cx
0x8DB571: pop     ebx
0x8DB572: retn    0Ch
