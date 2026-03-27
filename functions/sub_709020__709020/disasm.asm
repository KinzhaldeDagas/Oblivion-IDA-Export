0x709020: sub     esp, 8
0x709023: push    esi
0x709024: push    edi
0x709025: mov     edi, [esp+10h+arg_0]
0x709029: push    edi
0x70902A: mov     esi, ecx
0x70902C: call    sub_708330
0x709031: mov     al, [esi+0ACh]
0x709037: push    1
0x709039: lea     ecx, [esp+14h+var_4]
0x70903D: push    ecx
0x70903E: mov     byte ptr [esp+18h+arg_0], al
0x709042: mov     eax, [edi+220h]
0x709048: push    1
0x70904A: lea     edx, [esp+1Ch+arg_0]
0x70904E: push    edx
0x70904F: push    eax
0x709050: mov     eax, [eax+8]
0x709053: mov     [esp+24h+var_4], 1
0x70905B: call    eax
0x70905D: mov     ecx, [esi+0D8h]
0x709063: mov     eax, [edi+220h]
0x709069: push    1
0x70906B: lea     edx, [esp+28h+var_4]
0x70906F: push    edx
0x709070: mov     [esp+2Ch+var_8], ecx
0x709074: mov     edx, [eax+8]
0x709077: push    4
0x709079: lea     ecx, [esp+30h+var_8]
0x70907D: push    ecx
0x70907E: push    eax
0x70907F: mov     [esp+38h+var_4], 4
0x709087: call    edx
0x709089: add     esp, 28h
0x70908C: cmp     [esp+10h+var_8], 0
0x709091: jle     short loc_7090B6
0x709093: mov     esi, [esi+0D4h]
0x709099: test    esi, esi
0x70909B: jz      short loc_7090B6
0x70909D: lea     ecx, [ecx+0]
0x7090A0: mov     edx, [edi]
0x7090A2: mov     edx, [edx+2Ch]
0x7090A5: lea     eax, [esi+8]
0x7090A8: mov     eax, [eax]
0x7090AA: mov     esi, [esi+4]
0x7090AD: push    eax
0x7090AE: mov     ecx, edi
0x7090B0: call    edx
0x7090B2: test    esi, esi
0x7090B4: jnz     short loc_7090A0
0x7090B6: pop     edi
0x7090B7: pop     esi
0x7090B8: add     esp, 8
0x7090BB: retn    4
