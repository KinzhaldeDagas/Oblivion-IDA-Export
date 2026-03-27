0x759FF0: push    ecx
0x759FF1: push    ebx
0x759FF2: push    esi
0x759FF3: push    edi
0x759FF4: mov     edi, [esp+10h+arg_0]
0x759FF8: push    edi
0x759FF9: mov     esi, ecx
0x759FFB: call    sub_73F950
0x75A000: xor     ebx, ebx
0x75A002: cmp     [esi+8], bx
0x75A006: jbe     short loc_75A031
0x75A008: jmp     short loc_75A010
0x75A00A: align 10h
0x75A010: mov     edx, [esi+5Ch]
0x75A013: movzx   eax, bx
0x75A016: lea     ecx, ds:0[eax*8]
0x75A01D: sub     ecx, eax
0x75A01F: push    edi
0x75A020: lea     ecx, [edx+ecx*4]
0x75A023: call    sub_75F910
0x75A028: add     ebx, 1
0x75A02B: cmp     bx, [esi+8]
0x75A02F: jb      short loc_75A010
0x75A031: cmp     dword ptr [esi+60h], 0
0x75A035: push    1
0x75A037: lea     ecx, [esp+14h+var_4]
0x75A03B: push    ecx
0x75A03C: setnz   al
0x75A03F: mov     byte ptr [esp+18h+arg_0], al
0x75A043: mov     eax, [edi+220h]
0x75A049: push    1
0x75A04B: lea     edx, [esp+1Ch+arg_0]
0x75A04F: push    edx
0x75A050: push    eax
0x75A051: mov     eax, [eax+8]
0x75A054: mov     [esp+24h+var_4], 1
0x75A05C: call    eax
0x75A05E: add     esp, 14h
0x75A061: cmp     byte ptr [esp+10h+arg_0], 0
0x75A066: jz      short loc_75A093
0x75A068: movzx   edx, word ptr [esi+8]
0x75A06C: mov     eax, [edi+220h]
0x75A072: push    1
0x75A074: add     edx, edx
0x75A076: lea     ecx, [esp+14h+var_4]
0x75A07A: push    ecx
0x75A07B: mov     ecx, [esi+60h]
0x75A07E: add     edx, edx
0x75A080: push    edx
0x75A081: mov     edx, [eax+8]
0x75A084: push    ecx
0x75A085: push    eax
0x75A086: mov     [esp+24h+var_4], 4
0x75A08E: call    edx
0x75A090: add     esp, 14h
0x75A093: mov     eax, [edi+220h]
0x75A099: push    1
0x75A09B: lea     ecx, [esp+14h+var_4]
0x75A09F: push    ecx
0x75A0A0: mov     ebx, 2
0x75A0A5: push    ebx
0x75A0A6: lea     edx, [esi+64h]
0x75A0A9: push    edx
0x75A0AA: push    eax
0x75A0AB: mov     eax, [eax+8]
0x75A0AE: mov     [esp+24h+var_4], ebx
0x75A0B2: call    eax
0x75A0B4: mov     edi, [edi+220h]
0x75A0BA: mov     edx, [edi+8]
0x75A0BD: push    1
0x75A0BF: lea     ecx, [esp+28h+var_4]
0x75A0C3: push    ecx
0x75A0C4: push    ebx
0x75A0C5: add     esi, 66h ; 'f'
0x75A0C8: push    esi
0x75A0C9: push    edi
0x75A0CA: mov     [esp+38h+var_4], ebx
0x75A0CE: call    edx
0x75A0D0: add     esp, 28h
0x75A0D3: pop     edi
0x75A0D4: pop     esi
0x75A0D5: pop     ebx
0x75A0D6: pop     ecx
0x75A0D7: retn    4
