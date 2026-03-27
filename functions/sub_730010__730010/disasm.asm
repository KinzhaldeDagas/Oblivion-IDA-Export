0x730010: push    esi
0x730011: push    edi
0x730012: mov     edi, [esp+8+arg_0]
0x730016: push    edi
0x730017: mov     esi, ecx
0x730019: call    sub_714BF0
0x73001E: push    edi
0x73001F: lea     ecx, [esi+0Ch]
0x730022: call    sub_714BF0
0x730027: mov     eax, [edi+220h]
0x73002D: push    1
0x73002F: lea     ecx, [esp+0Ch+arg_0]
0x730033: push    ecx
0x730034: push    4
0x730036: lea     edx, [esi+8]
0x730039: push    edx
0x73003A: push    eax
0x73003B: mov     eax, [eax+8]
0x73003E: mov     [esp+1Ch+arg_0], 4
0x730046: call    eax
0x730048: mov     eax, [edi+220h]
0x73004E: push    1
0x730050: lea     ecx, [esp+20h+arg_0]
0x730054: push    ecx
0x730055: push    4
0x730057: lea     edx, [esi+44h]
0x73005A: push    edx
0x73005B: push    eax
0x73005C: mov     eax, [eax+8]
0x73005F: mov     [esp+30h+arg_0], 4
0x730067: call    eax
0x730069: add     esp, 28h
0x73006C: push    edi
0x73006D: lea     ecx, [esi+14h]
0x730070: call    sub_714BF0
0x730075: pop     edi
0x730076: pop     esi
0x730077: retn    4
