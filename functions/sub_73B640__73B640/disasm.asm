0x73B640: push    esi
0x73B641: push    edi
0x73B642: mov     edi, [esp+8+arg_0]
0x73B646: push    edi
0x73B647: mov     esi, ecx
0x73B649: call    sub_71A2A0
0x73B64E: mov     eax, [edi+220h]
0x73B654: push    1
0x73B656: lea     ecx, [esp+0Ch+arg_0]
0x73B65A: push    ecx
0x73B65B: push    2
0x73B65D: lea     edx, [esi+50h]
0x73B660: push    edx
0x73B661: push    eax
0x73B662: mov     eax, [eax+8]
0x73B665: mov     [esp+1Ch+arg_0], 2
0x73B66D: call    eax
0x73B66F: mov     edi, [edi+220h]
0x73B675: mov     edx, [edi+8]
0x73B678: push    1
0x73B67A: lea     ecx, [esp+20h+arg_0]
0x73B67E: push    ecx
0x73B67F: push    2
0x73B681: add     esi, 52h ; 'R'
0x73B684: push    esi
0x73B685: push    edi
0x73B686: mov     [esp+30h+arg_0], 2
0x73B68E: call    edx
0x73B690: add     esp, 28h
0x73B693: pop     edi
0x73B694: pop     esi
0x73B695: retn    4
