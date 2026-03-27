0x8BBFB0: push    esi
0x8BBFB1: mov     esi, ecx
0x8BBFB3: mov     word ptr [esi+6], 1
0x8BBFB9: mov     dword ptr [esi], offset off_A98328
0x8BBFBF: mov     ecx, ds:0BA7D98h
0x8BBFC5: mov     eax, [ecx]
0x8BBFC7: push    17h
0x8BBFC9: push    1Ch
0x8BBFCB: call    dword ptr [eax+10h]
0x8BBFCE: mov     ecx, [esp+4+arg_8]
0x8BBFD2: mov     edx, [esp+4+arg_4]
0x8BBFD6: push    ecx
0x8BBFD7: mov     ecx, [esp+8+arg_0]
0x8BBFDB: push    edx
0x8BBFDC: push    ecx
0x8BBFDD: mov     ecx, eax
0x8BBFDF: mov     word ptr [eax+4], 1Ch
0x8BBFE5: call    sub_8F5E50
0x8BBFEA: mov     [esi+8], eax
0x8BBFED: mov     eax, esi
0x8BBFEF: pop     esi
0x8BBFF0: retn    0Ch
