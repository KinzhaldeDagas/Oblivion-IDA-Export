0x541790: push    ecx
0x541791: push    esi
0x541792: mov     esi, [esp+8+arg_0]
0x541796: test    esi, esi
0x541798: jz      loc_5418EA
0x54179E: movzx   eax, word ptr [esi+0B6h]
0x5417A5: push    ebx
0x5417A6: xor     ebx, ebx
0x5417A8: test    eax, eax
0x5417AA: mov     [esp+0Ch+var_4], ebx
0x5417AE: jbe     loc_5418E9
0x5417B4: push    ebp
0x5417B5: mov     ebp, [esp+10h+arg_4]
0x5417B9: add     ebp, 8
0x5417BC: cmp     eax, ebx
0x5417BE: push    edi
0x5417BF: jbe     loc_5418CE
0x5417C5: mov     eax, [esi+0B0h]
0x5417CB: mov     edi, [eax+ebx*4]
0x5417CE: test    edi, edi
0x5417D0: jz      loc_5418CE
0x5417D6: mov     edx, [edi]
0x5417D8: mov     eax, [edx+10h]
0x5417DB: mov     ecx, edi
0x5417DD: call    eax
0x5417DF: test    eax, eax
0x5417E1: jz      loc_5418AE
0x5417E7: mov     eax, [edi+0B4h]
0x5417ED: mov     ecx, [eax+24h]
0x5417F0: test    ecx, ecx
0x5417F2: movzx   esi, word ptr [eax+8]
0x5417F6: jnz     short loc_54184F
0x5417F8: push    ecx
0x5417F9: mov     ecx, eax
0x5417FB: call    sub_7287C0
0x541800: test    si, si
0x541803: mov     ecx, [edi+0B4h]
0x541809: mov     ecx, [ecx+24h]
0x54180C: jbe     loc_541899
0x541812: mov     eax, ecx
0x541814: movzx   edx, si
0x541817: jmp     short loc_541820
0x541819: align 10h
0x541820: mov     ebx, ds:0B25AE0h
0x541826: mov     [eax], ebx
0x541828: mov     ebx, ds:0B25AE4h
0x54182E: mov     [eax+4], ebx
0x541831: mov     ebx, ds:0B25AE8h
0x541837: mov     [eax+8], ebx
0x54183A: mov     ebx, ds:0B25AECh
0x541840: mov     [eax+0Ch], ebx
0x541843: add     eax, 10h
0x541846: sub     edx, 1
0x541849: jnz     short loc_541820
0x54184B: mov     ebx, [esp+14h+var_4]
0x54184F: test    si, si
0x541852: jbe     short loc_541899
0x541854: lea     eax, [ecx+8]
0x541857: movzx   ecx, si
0x54185A: lea     ebx, [ebx+0]
0x541860: cmp     byte ptr [esp+14h+arg_8], 0
0x541865: jz      short loc_541880
0x541867: fld     dword ptr [eax-8]
0x54186A: fadd    dword ptr [ebp-8]
0x54186D: fstp    dword ptr [eax-8]
0x541870: fld     dword ptr [ebp-4]
0x541873: fadd    dword ptr [eax-4]
0x541876: fstp    dword ptr [eax-4]
0x541879: fld     dword ptr [eax]
0x54187B: fadd    dword ptr [ebp+0]
0x54187E: jmp     short loc_54188F
0x541880: fld     dword ptr [ebp-8]
0x541883: fstp    dword ptr [eax-8]
0x541886: fld     dword ptr [ebp-4]
0x541889: fstp    dword ptr [eax-4]
0x54188C: fld     dword ptr [ebp+0]
0x54188F: fstp    dword ptr [eax]
0x541891: add     eax, 10h
0x541894: sub     ecx, 1
0x541897: jnz     short loc_541860
0x541899: mov     edi, [edi+0B4h]
0x54189F: test    edi, edi
0x5418A1: mov     esi, [esp+14h+arg_0]
0x5418A5: jz      short loc_5418CE
0x5418A7: or      word ptr [edi+2Eh], 4
0x5418AC: jmp     short loc_5418CE
0x5418AE: mov     edx, [edi]
0x5418B0: mov     eax, [edx+8]
0x5418B3: mov     ecx, edi
0x5418B5: call    eax
0x5418B7: test    eax, eax
0x5418B9: jz      short loc_5418CE
0x5418BB: mov     ecx, [esp+14h+arg_8]
0x5418BF: mov     edx, [esp+14h+arg_4]
0x5418C3: push    ecx
0x5418C4: push    edx
0x5418C5: push    eax
0x5418C6: call    sub_541790
0x5418CB: add     esp, 0Ch
0x5418CE: movzx   eax, word ptr [esi+0B6h]
0x5418D5: add     ebx, 1
0x5418D8: add     ebp, 0Ch
0x5418DB: cmp     eax, ebx
0x5418DD: mov     [esp+14h+var_4], ebx
0x5418E1: ja      loc_5417C5
0x5418E7: pop     edi
0x5418E8: pop     ebp
0x5418E9: pop     ebx
0x5418EA: pop     esi
0x5418EB: pop     ecx
0x5418EC: retn
