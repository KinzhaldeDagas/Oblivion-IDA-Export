0x6FF350: push    esi
0x6FF351: push    edi
0x6FF352: mov     edi, [esp+8+arg_0]
0x6FF356: push    edi
0x6FF357: mov     esi, ecx
0x6FF359: call    sub_752E40
0x6FF35E: mov     eax, [edi+220h]
0x6FF364: mov     edx, [eax+8]
0x6FF367: push    1
0x6FF369: lea     ecx, [esp+0Ch+arg_0]
0x6FF36D: push    ecx
0x6FF36E: push    4
0x6FF370: add     esi, 20h ; ' '
0x6FF373: push    esi
0x6FF374: push    eax
0x6FF375: mov     [esp+1Ch+arg_0], 4
0x6FF37D: call    edx
0x6FF37F: add     esp, 14h
0x6FF382: pop     edi
0x6FF383: pop     esi
0x6FF384: retn    4
