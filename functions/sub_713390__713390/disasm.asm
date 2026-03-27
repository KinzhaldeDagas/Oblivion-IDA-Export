0x713390: sub     esp, 8
0x713393: push    esi
0x713394: push    edi
0x713395: mov     esi, ecx
0x713397: mov     eax, [esi+210h]
0x71339D: push    1
0x71339F: lea     ecx, [esp+14h+var_4]
0x7133A3: push    ecx
0x7133A4: mov     [esp+18h+var_8], eax
0x7133A8: mov     eax, [esi+220h]
0x7133AE: push    4
0x7133B0: lea     edx, [esp+1Ch+var_8]
0x7133B4: push    edx
0x7133B5: push    eax
0x7133B6: mov     eax, [eax+8]
0x7133B9: mov     [esp+24h+var_4], 4
0x7133C1: call    eax
0x7133C3: xor     edi, edi
0x7133C5: add     esp, 14h
0x7133C8: cmp     [esp+10h+var_8], edi
0x7133CC: jbe     short loc_7133EC
0x7133CE: mov     edi, edi
0x7133D0: mov     eax, [esi+208h]
0x7133D6: mov     ecx, [eax+edi*4]
0x7133D9: mov     edx, [esi]
0x7133DB: mov     edx, [edx+2Ch]
0x7133DE: push    ecx
0x7133DF: mov     ecx, esi
0x7133E1: call    edx
0x7133E3: add     edi, 1
0x7133E6: cmp     edi, [esp+10h+var_8]
0x7133EA: jb      short loc_7133D0
0x7133EC: pop     edi
0x7133ED: pop     esi
0x7133EE: add     esp, 8
0x7133F1: retn
