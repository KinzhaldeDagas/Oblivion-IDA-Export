0x724860: push    esi
0x724861: push    edi
0x724862: mov     edi, [esp+8+arg_0]
0x724866: push    edi
0x724867: mov     esi, ecx
0x724869: call    sub_70B6A0
0x72486E: mov     eax, [edi+220h]
0x724874: push    1
0x724876: lea     ecx, [esp+0Ch+arg_0]
0x72487A: push    ecx
0x72487B: push    2
0x72487D: lea     edx, [esi+0DCh]
0x724883: push    edx
0x724884: push    eax
0x724885: mov     eax, [eax+8]
0x724888: mov     [esp+1Ch+arg_0], 2
0x724890: call    eax
0x724892: mov     edi, [edi+220h]
0x724898: mov     edx, [edi+8]
0x72489B: push    1
0x72489D: lea     ecx, [esp+20h+arg_0]
0x7248A1: push    ecx
0x7248A2: push    4
0x7248A4: add     esi, 0E0h ; 'à'
0x7248AA: push    esi
0x7248AB: push    edi
0x7248AC: mov     [esp+30h+arg_0], 4
0x7248B4: call    edx
0x7248B6: add     esp, 28h
0x7248B9: pop     edi
0x7248BA: pop     esi
0x7248BB: retn    4
