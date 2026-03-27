0x7FEC30: push    0FFFFFFFFh
0x7FEC32: push    offset SEH_87AC50
0x7FEC37: mov     eax, large fs:0
0x7FEC3D: push    eax
0x7FEC3E: sub     esp, 8
0x7FEC41: push    ebx
0x7FEC42: push    esi
0x7FEC43: push    edi
0x7FEC44: mov     eax, ds:0B30AACh
0x7FEC49: xor     eax, esp
0x7FEC4B: push    eax
0x7FEC4C: lea     eax, [esp+24h+var_C]
0x7FEC50: mov     large fs:0, eax
0x7FEC56: mov     [esp+24h+var_10], ecx
0x7FEC5A: xor     edi, edi
0x7FEC5C: or      ebx, 0FFFFFFFFh
0x7FEC5F: nop
0x7FEC60: lea     eax, [esp+24h+var_14]
0x7FEC64: push    eax
0x7FEC65: call    sub_7606A0
0x7FEC6A: add     esp, 4
0x7FEC6D: mov     esi, eax
0x7FEC6F: mov     ecx, ds:dword_B473D0[edi]
0x7FEC75: cmp     ecx, [esi]
0x7FEC77: mov     [esp+24h+var_4], 0
0x7FEC7F: jz      short loc_7FEC9F
0x7FEC81: test    ecx, ecx
0x7FEC83: jz      short loc_7FEC8F
0x7FEC85: add     [ecx+60h], ebx
0x7FEC88: jnz     short loc_7FEC8F
0x7FEC8A: call    sub_7604D0
0x7FEC8F: mov     eax, [esi]
0x7FEC91: test    eax, eax
0x7FEC93: mov     ds:dword_B473D0[edi], eax
0x7FEC99: jz      short loc_7FEC9F
0x7FEC9B: add     dword ptr [eax+60h], 1
0x7FEC9F: mov     eax, [esp+24h+var_14]
0x7FECA3: test    eax, eax
0x7FECA5: mov     [esp+24h+var_4], ebx
0x7FECA9: jz      short loc_7FECBD
0x7FECAB: add     [eax+60h], ebx
0x7FECAE: mov     ecx, eax
0x7FECB0: add     eax, 60h ; '`'
0x7FECB3: cmp     dword ptr [eax], 0
0x7FECB6: jnz     short loc_7FECBD
0x7FECB8: call    sub_7604D0
0x7FECBD: add     edi, 4
0x7FECC0: cmp     edi, 0D8h ; 'Ø'
0x7FECC6: jb      short loc_7FEC60
0x7FECC8: mov     ecx, [esp+24h+var_10]
0x7FECCC: call    sub_85E660
0x7FECD1: mov     al, 1
0x7FECD3: mov     ecx, [esp+24h+var_C]
0x7FECD7: mov     large fs:0, ecx
0x7FECDE: pop     ecx
0x7FECDF: pop     edi
0x7FECE0: pop     esi
0x7FECE1: pop     ebx
0x7FECE2: add     esp, 14h
0x7FECE5: retn
