0x530830: mov     eax, ecx
0x530832: mov     ecx, [eax+8]
0x530835: shr     ecx, 5
0x530838: test    cl, 1
0x53083B: jz      short loc_530842
0x53083D: xor     al, al
0x53083F: retn    10h
0x530842: mov     ecx, [esp+arg_4]
0x530846: test    ecx, ecx
0x530848: jz      short loc_53083D
0x53084A: movzx   edx, byte ptr [eax+25h]
0x53084E: shr     edx, 2
0x530851: test    dl, 1
0x530854: jz      short loc_53085C
0x530856: cmp     byte ptr [eax+22h], 0
0x53085A: jnz     short loc_53083D
0x53085C: add     ecx, 50h ; 'P'
0x53085F: cmp     dword ptr [ecx+4], 0
0x530863: jnz     short loc_530886
0x530865: cmp     dword ptr [ecx], 0
0x530868: jnz     short loc_530886
0x53086A: mov     ecx, [esp+arg_0]
0x53086E: mov     edx, [esp+arg_C]
0x530872: push    0
0x530874: push    ecx
0x530875: mov     ecx, [esp+8+arg_8]
0x530879: push    edx
0x53087A: push    ecx
0x53087B: lea     ecx, [eax+18h]
0x53087E: call    sub_56A510
0x530883: retn    10h
0x530886: add     eax, 18h
0x530889: cmp     dword ptr [eax+4], 0
0x53088D: jnz     short loc_5308AD
0x53088F: cmp     dword ptr [eax], 0
0x530892: jnz     short loc_5308AD
0x530894: mov     edx, [esp+arg_0]
0x530898: mov     eax, [esp+arg_C]
0x53089C: push    0
0x53089E: push    edx
0x53089F: mov     edx, [esp+8+arg_8]
0x5308A3: push    eax
0x5308A4: push    edx
0x5308A5: call    sub_56A510
0x5308AA: retn    10h
0x5308AD: mov     edx, [esp+arg_C]
0x5308B1: push    eax
0x5308B2: mov     eax, [esp+4+arg_0]
0x5308B6: push    eax
0x5308B7: mov     eax, [esp+8+arg_8]
0x5308BB: push    edx
0x5308BC: push    eax
0x5308BD: call    sub_56A510
0x5308C2: retn    10h
