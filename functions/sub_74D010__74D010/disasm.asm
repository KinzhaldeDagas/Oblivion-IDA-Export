0x74D010: push    esi
0x74D011: push    edi
0x74D012: mov     edi, [esp+8+arg_0]
0x74D016: push    edi
0x74D017: mov     esi, ecx
0x74D019: call    sub_753010
0x74D01E: mov     eax, [edi+21Ch]
0x74D024: mov     edx, [eax+4]
0x74D027: push    1
0x74D029: lea     ecx, [esp+0Ch+arg_0]
0x74D02D: push    ecx
0x74D02E: push    4
0x74D030: add     esi, 54h ; 'T'
0x74D033: push    esi
0x74D034: push    eax
0x74D035: mov     [esp+1Ch+arg_0], 4
0x74D03D: call    edx
0x74D03F: add     esp, 14h
0x74D042: pop     edi
0x74D043: pop     esi
0x74D044: retn    4
