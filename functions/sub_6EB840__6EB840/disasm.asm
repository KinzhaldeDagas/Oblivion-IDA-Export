0x6EB840: push    esi
0x6EB841: push    edi
0x6EB842: mov     edi, [esp+8+arg_0]
0x6EB846: push    edi
0x6EB847: mov     esi, ecx
0x6EB849: call    sub_6CD720
0x6EB84E: mov     eax, [edi+21Ch]
0x6EB854: mov     edx, [eax+4]
0x6EB857: push    1
0x6EB859: lea     ecx, [esp+0Ch+arg_0]
0x6EB85D: push    ecx
0x6EB85E: push    1
0x6EB860: add     esi, 30h ; '0'
0x6EB863: push    esi
0x6EB864: push    eax
0x6EB865: mov     [esp+1Ch+arg_0], 1
0x6EB86D: call    edx
0x6EB86F: add     esp, 14h
0x6EB872: pop     edi
0x6EB873: pop     esi
0x6EB874: retn    4
