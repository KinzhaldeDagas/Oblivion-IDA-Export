0x713720: push    ecx
0x713721: push    esi
0x713722: push    edi
0x713723: mov     edi, [esp+0Ch+arg_0]
0x713727: test    edi, edi
0x713729: mov     esi, ecx
0x71372B: jz      short loc_713743
0x71372D: mov     eax, edi
0x71372F: lea     edx, [eax+1]
0x713732: mov     cl, [eax]
0x713734: add     eax, 1
0x713737: test    cl, cl
0x713739: jnz     short loc_713732
0x71373B: sub     eax, edx
0x71373D: mov     [esp+0Ch+arg_0], eax
0x713741: jmp     short loc_71374B
0x713743: mov     [esp+0Ch+arg_0], 0
0x71374B: mov     eax, [esi+220h]
0x713751: push    1
0x713753: lea     ecx, [esp+10h+var_4]
0x713757: push    ecx
0x713758: push    4
0x71375A: lea     edx, [esp+18h+arg_0]
0x71375E: push    edx
0x71375F: push    eax
0x713760: mov     eax, [eax+8]
0x713763: mov     [esp+20h+var_4], 4
0x71376B: call    eax
0x71376D: mov     ecx, [esp+20h+arg_0]
0x713771: add     esp, 14h
0x713774: test    ecx, ecx
0x713776: jbe     short loc_713798
0x713778: mov     eax, [esi+220h]
0x71377E: push    1
0x713780: lea     edx, [esp+10h+var_4]
0x713784: push    edx
0x713785: push    ecx
0x713786: push    edi
0x713787: push    eax
0x713788: mov     eax, [eax+8]
0x71378B: mov     [esp+20h+var_4], 1
0x713793: call    eax
0x713795: add     esp, 14h
0x713798: pop     edi
0x713799: pop     esi
0x71379A: pop     ecx
0x71379B: retn    4
