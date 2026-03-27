0x913370: push    ebx
0x913371: push    ebp
0x913372: push    esi
0x913373: push    edi
0x913374: mov     edi, ecx
0x913376: mov     esi, [edi+4]
0x913379: mov     eax, [esi+24h]
0x91337C: mov     ecx, [esi+20h]
0x91337F: add     esi, 1Ch
0x913382: and     eax, 3FFFFFFFh
0x913387: cmp     ecx, eax
0x913389: jnz     short loc_913396
0x91338B: push    4
0x91338D: push    esi
0x91338E: call    sub_8A6EE0
0x913393: add     esp, 8
0x913396: mov     ecx, [esi+4]
0x913399: mov     edx, [esi]
0x91339B: mov     dword ptr [edx+ecx*4], 8
0x9133A2: inc     dword ptr [esi+4]
0x9133A5: mov     eax, [edi+4]
0x9133A8: mov     ebp, [eax+14h]
0x9133AB: mov     ecx, [eax+14h]
0x9133AE: lea     esi, [eax+10h]
0x9133B1: mov     eax, [esi+8]
0x9133B4: and     eax, 3FFFFFFFh
0x9133B9: cmp     ecx, eax
0x9133BB: jnz     short loc_9133C8
0x9133BD: push    10h
0x9133BF: push    esi
0x9133C0: call    sub_8A6EE0
0x9133C5: add     esp, 8
0x9133C8: mov     ecx, [esi+4]
0x9133CB: mov     edx, [esi]
0x9133CD: mov     ebx, [esp+10h+arg_0]
0x9133D1: mov     eax, ecx
0x9133D3: shl     eax, 4
0x9133D6: add     eax, edx
0x9133D8: inc     ecx
0x9133D9: mov     [esi+4], ecx
0x9133DC: movaps  xmm0, xmmword ptr [ebx]
0x9133DF: movaps  xmmword ptr [eax], xmm0
0x9133E2: mov     esi, [edi+4]
0x9133E5: mov     ecx, [esi+18h]
0x9133E8: mov     eax, [esi+14h]
0x9133EB: add     esi, 10h
0x9133EE: and     ecx, 3FFFFFFFh
0x9133F4: cmp     eax, ecx
0x9133F6: jnz     short loc_913403
0x9133F8: push    10h
0x9133FA: push    esi
0x9133FB: call    sub_8A6EE0
0x913400: add     esp, 8
0x913403: mov     ecx, [esi+4]
0x913406: mov     edx, [esi]
0x913408: mov     eax, ecx
0x91340A: shl     eax, 4
0x91340D: add     eax, edx
0x91340F: inc     ecx
0x913410: mov     [esi+4], ecx
0x913413: movaps  xmm0, xmmword ptr [ebx+10h]
0x913417: movaps  xmmword ptr [eax], xmm0
0x91341A: mov     esi, [edi+4]
0x91341D: mov     edx, [esi+18h]
0x913420: mov     eax, [esi+14h]
0x913423: add     esi, 10h
0x913426: and     edx, 3FFFFFFFh
0x91342C: cmp     eax, edx
0x91342E: jnz     short loc_91343B
0x913430: push    10h
0x913432: push    esi
0x913433: call    sub_8A6EE0
0x913438: add     esp, 8
0x91343B: mov     ecx, [esi+4]
0x91343E: mov     edx, [esi]
0x913440: mov     eax, ecx
0x913442: shl     eax, 4
0x913445: add     eax, edx
0x913447: inc     ecx
0x913448: mov     [esi+4], ecx
0x91344B: movaps  xmm0, xmmword ptr [ebx+20h]
0x91344F: movaps  xmmword ptr [eax], xmm0
0x913452: mov     byte ptr [edi+16h], 1
0x913456: pop     edi
0x913457: pop     esi
0x913458: mov     eax, ebp
0x91345A: pop     ebp
0x91345B: pop     ebx
0x91345C: retn    4
