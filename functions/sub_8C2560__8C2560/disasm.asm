0x8C2560: push    esi
0x8C2561: push    edi
0x8C2562: mov     edi, [esp+8+arg_0]
0x8C2566: push    edi
0x8C2567: mov     esi, ecx
0x8C2569: call    sub_8A0C30
0x8C256E: mov     esi, [esi+4]
0x8C2571: mov     eax, [edi+21Ch]
0x8C2577: mov     edx, [eax+4]
0x8C257A: push    0
0x8C257C: push    0
0x8C257E: push    30h ; '0'
0x8C2580: lea     ecx, [esi+10h]
0x8C2583: push    ecx
0x8C2584: push    eax
0x8C2585: call    edx
0x8C2587: mov     edi, [edi+21Ch]
0x8C258D: mov     eax, [edi+4]
0x8C2590: push    0
0x8C2592: push    0
0x8C2594: push    20h ; ' '
0x8C2596: add     esi, 40h ; '@'
0x8C2599: push    esi
0x8C259A: push    edi
0x8C259B: call    eax
0x8C259D: add     esp, 28h
0x8C25A0: pop     edi
0x8C25A1: pop     esi
0x8C25A2: retn    4
