0x6EB880: push    esi
0x6EB881: push    edi
0x6EB882: mov     edi, [esp+8+arg_0]
0x6EB886: push    edi
0x6EB887: mov     esi, ecx
0x6EB889: call    sub_6CDC10
0x6EB88E: mov     eax, [edi+220h]
0x6EB894: mov     edx, [eax+8]
0x6EB897: push    1
0x6EB899: lea     ecx, [esp+0Ch+arg_0]
0x6EB89D: push    ecx
0x6EB89E: push    1
0x6EB8A0: add     esi, 30h ; '0'
0x6EB8A3: push    esi
0x6EB8A4: push    eax
0x6EB8A5: mov     [esp+1Ch+arg_0], 1
0x6EB8AD: call    edx
0x6EB8AF: add     esp, 14h
0x6EB8B2: pop     edi
0x6EB8B3: pop     esi
0x6EB8B4: retn    4
