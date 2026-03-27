0x910290: push    esi
0x910291: push    edi
0x910292: mov     edi, [esp+8+arg_0]
0x910296: cmp     dword ptr [edi+4], 2
0x91029A: mov     esi, ecx
0x91029C: jnz     short loc_9102A9
0x91029E: mov     eax, [esp+8+arg_4]
0x9102A2: mov     ecx, [eax+4]
0x9102A5: test    ecx, ecx
0x9102A7: jz      short loc_9102B0
0x9102A9: pop     edi
0x9102AA: xor     eax, eax
0x9102AC: pop     esi
0x9102AD: retn    8
0x9102B0: mov     ecx, ds:0BA7D98h
0x9102B6: mov     edx, [ecx]
0x9102B8: push    26h ; '&'
0x9102BA: push    60h ; '`'
0x9102BC: call    dword ptr [edx+10h]
0x9102BF: mov     word ptr [eax+4], 60h ; '`'
0x9102C5: mov     edx, [esi+10h]
0x9102C8: mov     ecx, [edi]
0x9102CA: push    edx
0x9102CB: mov     edx, [ecx+4]
0x9102CE: mov     ecx, [ecx]
0x9102D0: push    edx
0x9102D1: push    ecx
0x9102D2: mov     ecx, eax
0x9102D4: call    sub_910040
0x9102D9: movaps  xmm0, xmmword ptr [esi+20h]
0x9102DD: movaps  xmmword ptr [eax+20h], xmm0
0x9102E1: movaps  xmm0, xmmword ptr [esi+30h]
0x9102E5: movaps  xmmword ptr [eax+30h], xmm0
0x9102E9: mov     edx, [esi+40h]
0x9102EC: mov     [eax+40h], edx
0x9102EF: mov     ecx, [esi+44h]
0x9102F2: mov     [eax+44h], ecx
0x9102F5: movaps  xmm0, xmmword ptr [esi+50h]
0x9102F9: pop     edi
0x9102FA: movaps  xmmword ptr [eax+50h], xmm0
0x9102FE: pop     esi
0x9102FF: retn    8
