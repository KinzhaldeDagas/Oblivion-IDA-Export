0x712070: push    0FFFFFFFFh
0x712072: push    offset SEH_7121D0
0x712077: mov     eax, large fs:0
0x71207D: push    eax
0x71207E: sub     esp, 20h
0x712081: push    ebx
0x712082: push    esi
0x712083: mov     eax, ds:0B30AACh
0x712088: xor     eax, esp
0x71208A: push    eax
0x71208B: lea     eax, [esp+38h+var_C]
0x71208F: mov     large fs:0, eax
0x712095: mov     esi, ecx
0x712097: mov     eax, [esp+38h+arg_4]
0x71209B: mov     ecx, [esp+38h+arg_0]
0x71209F: push    eax
0x7120A0: push    ecx
0x7120A1: lea     ecx, [esp+40h+var_2C]
0x7120A5: call    sub_748820
0x7120AA: mov     edx, [esi]
0x7120AC: mov     edx, [edx+4]
0x7120AF: lea     eax, [esp+38h+var_2C]
0x7120B3: push    eax
0x7120B4: mov     ecx, esi
0x7120B6: mov     [esp+3Ch+var_4], 0
0x7120BE: call    edx
0x7120C0: lea     ecx, [esp+38h+var_2C]
0x7120C4: mov     bl, al
0x7120C6: mov     [esp+38h+var_4], 0FFFFFFFFh
0x7120CE: call    sub_7488B0
0x7120D3: mov     al, bl
0x7120D5: mov     ecx, dword ptr [esp+38h+var_C]
0x7120D9: mov     large fs:0, ecx
0x7120E0: pop     ecx
0x7120E1: pop     esi
0x7120E2: pop     ebx
0x7120E3: add     esp, 2Ch
0x7120E6: retn    8
