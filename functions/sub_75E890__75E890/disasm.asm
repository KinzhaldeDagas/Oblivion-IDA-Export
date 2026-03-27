0x75E890: push    esi
0x75E891: push    edi
0x75E892: mov     edi, [esp+8+arg_0]
0x75E896: push    edi
0x75E897: mov     esi, ecx
0x75E899: call    sub_752CD0
0x75E89E: test    al, al
0x75E8A0: jz      short loc_75E90F
0x75E8A2: mov     eax, [esi+18h]
0x75E8A5: test    eax, eax
0x75E8A7: jz      short loc_75E8B3
0x75E8A9: cmp     dword ptr [edi+18h], 0
0x75E8AD: jz      short loc_75E90F
0x75E8AF: test    eax, eax
0x75E8B1: jnz     short loc_75E8BD
0x75E8B3: cmp     dword ptr [edi+18h], 0
0x75E8B7: jnz     short loc_75E90F
0x75E8B9: test    eax, eax
0x75E8BB: jz      short loc_75E8D3
0x75E8BD: mov     eax, [edi+18h]
0x75E8C0: test    eax, eax
0x75E8C2: jz      short loc_75E8D3
0x75E8C4: mov     ecx, [esi+18h]
0x75E8C7: mov     edx, [ecx]
0x75E8C9: push    eax
0x75E8CA: mov     eax, [edx+2Ch]
0x75E8CD: call    eax
0x75E8CF: test    al, al
0x75E8D1: jz      short loc_75E90F
0x75E8D3: fld     dword ptr [edi+1Ch]
0x75E8D6: fld     dword ptr [esi+1Ch]
0x75E8D9: fucompp
0x75E8DB: fnstsw  ax
0x75E8DD: test    ah, 44h
0x75E8E0: jp      short loc_75E90F
0x75E8E2: fld     dword ptr [edi+20h]
0x75E8E5: fld     dword ptr [esi+20h]
0x75E8E8: fucompp
0x75E8EA: fnstsw  ax
0x75E8EC: test    ah, 44h
0x75E8EF: jp      short loc_75E90F
0x75E8F1: mov     cl, [edi+24h]
0x75E8F4: cmp     cl, [esi+24h]
0x75E8F7: jnz     short loc_75E90F
0x75E8F9: fld     dword ptr [edi+28h]
0x75E8FC: fld     dword ptr [esi+28h]
0x75E8FF: fucompp
0x75E901: fnstsw  ax
0x75E903: test    ah, 44h
0x75E906: jp      short loc_75E90F
0x75E908: pop     edi
0x75E909: mov     al, 1
0x75E90B: pop     esi
0x75E90C: retn    4
0x75E90F: pop     edi
0x75E910: xor     al, al
0x75E912: pop     esi
0x75E913: retn    4
