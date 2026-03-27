0x6D0880: push    esi
0x6D0881: mov     esi, ecx
0x6D0883: mov     eax, [esi+50h]
0x6D0886: push    edi
0x6D0887: xor     edi, edi
0x6D0889: cmp     [eax+8], edi
0x6D088C: jbe     short loc_6D08CA
0x6D088E: mov     edi, edi
0x6D0890: mov     edx, [esi]
0x6D0892: mov     eax, [edx+80h]
0x6D0898: push    edi
0x6D0899: mov     ecx, esi
0x6D089B: call    eax
0x6D089D: test    eax, eax
0x6D089F: jz      short loc_6D08BF
0x6D08A1: fld     [esp+8+arg_4]
0x6D08A5: mov     edx, [eax]
0x6D08A7: sub     esp, 8
0x6D08AA: fstp    [esp+10h+var_C]
0x6D08AE: mov     ecx, eax
0x6D08B0: fld     [esp+10h+arg_0]
0x6D08B4: mov     eax, [edx+84h]
0x6D08BA: fstp    [esp+10h+var_10]
0x6D08BD: call    eax
0x6D08BF: mov     ecx, [esi+50h]
0x6D08C2: add     edi, 1
0x6D08C5: cmp     edi, [ecx+8]
0x6D08C8: jb      short loc_6D0890
0x6D08CA: pop     edi
0x6D08CB: pop     esi
0x6D08CC: retn    8
