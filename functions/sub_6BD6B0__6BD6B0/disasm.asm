0x6BD6B0: sub     esp, 14h
0x6BD6B3: push    ebx
0x6BD6B4: mov     ebx, [esp+18h+arg_4]
0x6BD6B8: cmp     ebx, 2
0x6BD6BB: jb      loc_6BD785
0x6BD6C1: mov     eax, [esp+18h+arg_8]
0x6BD6C5: push    ebp
0x6BD6C6: push    esi
0x6BD6C7: push    edi
0x6BD6C8: mov     edi, [esp+24h+arg_0]
0x6BD6CC: push    eax
0x6BD6CD: push    ebx
0x6BD6CE: push    edi
0x6BD6CF: call    sub_6BD310
0x6BD6D4: lea     esi, [edi+28h]
0x6BD6D7: lea     eax, [edi+4]
0x6BD6DA: push    esi
0x6BD6DB: push    eax
0x6BD6DC: push    eax
0x6BD6DD: lea     ecx, [esp+3Ch+var_10]
0x6BD6E1: push    ecx
0x6BD6E2: call    sub_714E70
0x6BD6E7: mov     edx, [eax]
0x6BD6E9: mov     [edi+14h], edx
0x6BD6EC: mov     ecx, [eax+4]
0x6BD6EF: mov     [edi+18h], ecx
0x6BD6F2: mov     edx, [eax+8]
0x6BD6F5: mov     [edi+1Ch], edx
0x6BD6F8: mov     eax, [eax+0Ch]
0x6BD6FB: lea     ebp, [ebx-1]
0x6BD6FE: add     esp, 1Ch
0x6BD701: cmp     ebp, 1
0x6BD704: mov     [edi+20h], eax
0x6BD707: jbe     short loc_6BD74A
0x6BD709: lea     ecx, [ebp-1]
0x6BD70C: mov     [esp+24h+var_14], ecx
0x6BD710: lea     ebx, [esi+24h]
0x6BD713: push    ebx
0x6BD714: push    esi
0x6BD715: lea     edx, [esi-24h]
0x6BD718: push    edx
0x6BD719: lea     eax, [esp+30h+var_10]
0x6BD71D: push    eax
0x6BD71E: call    sub_714E70
0x6BD723: mov     ecx, [eax]
0x6BD725: mov     [esi+10h], ecx
0x6BD728: mov     edx, [eax+4]
0x6BD72B: mov     [esi+14h], edx
0x6BD72E: mov     ecx, [eax+8]
0x6BD731: mov     [esi+18h], ecx
0x6BD734: mov     edx, [eax+0Ch]
0x6BD737: add     esp, 10h
0x6BD73A: sub     [esp+24h+var_14], 1
0x6BD73F: mov     [esi+1Ch], edx
0x6BD742: mov     esi, ebx
0x6BD744: jnz     short loc_6BD710
0x6BD746: mov     ebx, [esp+24h+arg_4]
0x6BD74A: lea     eax, [ebp+ebp*8+0]
0x6BD74E: lea     esi, [edi+eax*4]
0x6BD751: lea     eax, [esi+4]
0x6BD754: push    eax
0x6BD755: push    eax
0x6BD756: lea     ecx, [ebx+ebx*8]
0x6BD759: lea     edx, [edi+ecx*4-44h]
0x6BD75D: push    edx
0x6BD75E: lea     eax, [esp+30h+var_10]
0x6BD762: push    eax
0x6BD763: call    sub_714E70
0x6BD768: mov     ecx, [eax]
0x6BD76A: mov     [esi+14h], ecx
0x6BD76D: mov     edx, [eax+4]
0x6BD770: mov     [esi+18h], edx
0x6BD773: mov     ecx, [eax+8]
0x6BD776: add     esp, 10h
0x6BD779: mov     [esi+1Ch], ecx
0x6BD77C: mov     edx, [eax+0Ch]
0x6BD77F: pop     edi
0x6BD780: mov     [esi+20h], edx
0x6BD783: pop     esi
0x6BD784: pop     ebp
0x6BD785: pop     ebx
0x6BD786: add     esp, 14h
0x6BD789: retn
