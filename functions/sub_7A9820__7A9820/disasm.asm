0x7A9820: push    ebx
0x7A9821: mov     bx, word ptr [esp+4+arg_4]
0x7A9826: push    ebp
0x7A9827: mov     ebp, ds:0B3F928h
0x7A982D: push    esi
0x7A982E: mov     esi, [esp+0Ch+arg_0]
0x7A9832: movzx   eax, bx
0x7A9835: push    edi
0x7A9836: mov     ds:0B42E90h, eax
0x7A983B: mov     ds:0B42EB8h, esi
0x7A9841: mov     ecx, [esi]
0x7A9843: push    4
0x7A9845: call    NiNode_GetNiPropertyByID
0x7A984A: mov     edi, eax
0x7A984C: test    edi, edi
0x7A984E: jz      short loc_7A98C3
0x7A9850: mov     edx, [edi]
0x7A9852: mov     eax, [edx+54h]
0x7A9855: mov     ecx, edi
0x7A9857: call    eax
0x7A9859: cmp     eax, 1
0x7A985C: jl      short loc_7A98C3
0x7A985E: mov     edx, [edi]
0x7A9860: mov     eax, [edx+54h]
0x7A9863: mov     ecx, edi
0x7A9865: call    eax
0x7A9867: cmp     eax, 0Ah
0x7A986A: jg      short loc_7A98C3
0x7A986C: cmp     bx, 6
0x7A9870: fld     dword ptr [edi+94h]
0x7A9876: fstp    [esp+10h+arg_4]
0x7A987A: jb      short loc_7A9882
0x7A987C: cmp     bx, 9
0x7A9880: jbe     short loc_7A9895
0x7A9882: cmp     bx, 154h
0x7A9887: jz      short loc_7A9895
0x7A9889: cmp     bx, 155h
0x7A988E: jz      short loc_7A9895
0x7A9890: call    sub_7ECB20
0x7A9895: xor     bl, bl
0x7A9897: cmp     [esi+8], bl
0x7A989A: jbe     short loc_7A98C3
0x7A989C: lea     esp, [esp+0]
0x7A98A0: fld     [esp+10h+arg_4]
0x7A98A4: push    ecx
0x7A98A5: mov     ecx, [esi+0Ch]
0x7A98A8: fstp    [esp+14h+var_14]; float
0x7A98AB: movzx   eax, bl
0x7A98AE: mov     edx, [ecx+eax*4]
0x7A98B1: push    edx; int
0x7A98B2: push    eax; int
0x7A98B3: call    sub_7EE390
0x7A98B8: add     bl, 1
0x7A98BB: add     esp, 0Ch
0x7A98BE: cmp     bl, [esi+8]
0x7A98C1: jb      short loc_7A98A0
0x7A98C3: mov     ecx, [esi]
0x7A98C5: mov     eax, [ecx]
0x7A98C7: mov     edx, [eax+84h]
0x7A98CD: push    ebp
0x7A98CE: call    edx
0x7A98D0: pop     edi
0x7A98D1: pop     esi
0x7A98D2: pop     ebp
0x7A98D3: pop     ebx
0x7A98D4: retn    8
