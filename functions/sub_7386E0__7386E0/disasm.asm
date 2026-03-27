0x7386E0: push    esi
0x7386E1: mov     esi, ecx
0x7386E3: push    edi
0x7386E4: mov     edi, [esp+8+arg_0]
0x7386E8: lea     eax, [esi+8]
0x7386EB: push    eax
0x7386EC: mov     ecx, edi
0x7386EE: call    sub_713620
0x7386F3: mov     eax, [edi+21Ch]
0x7386F9: mov     edx, [eax+4]
0x7386FC: push    1
0x7386FE: lea     ecx, [esp+0Ch+arg_0]
0x738702: push    ecx
0x738703: push    4
0x738705: add     esi, 0Ch
0x738708: push    esi
0x738709: push    eax
0x73870A: mov     [esp+1Ch+arg_0], 4
0x738712: call    edx
0x738714: add     esp, 14h
0x738717: pop     edi
0x738718: pop     esi
0x738719: retn    4
