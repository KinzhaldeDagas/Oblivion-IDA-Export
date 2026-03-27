0x70A280: fld     [esp+arg_0]
0x70A284: push    esi
0x70A285: mov     esi, ecx
0x70A287: movzx   eax, byte ptr [esi+18h]
0x70A28B: shr     al, 3
0x70A28E: push    edi
0x70A28F: and     eax, 0FFFFFF01h
0x70A294: push    eax; char
0x70A295: push    ecx
0x70A296: fstp    [esp+10h+var_10]; float
0x70A299: call    sub_47C930
0x70A29E: mov     cl, [esi+18h]
0x70A2A1: shr     cl, 2
0x70A2A4: test    cl, 1
0x70A2A7: jz      short loc_70A2C5
0x70A2A9: mov     edx, [esi]
0x70A2AB: mov     eax, [edx+74h]
0x70A2AE: mov     ecx, esi
0x70A2B0: call    eax
0x70A2B2: lea     ecx, [esi+64h]
0x70A2B5: push    ecx
0x70A2B6: lea     edx, [esi+0CCh]
0x70A2BC: push    edx
0x70A2BD: lea     ecx, [esi+20h]
0x70A2C0: call    sub_72A820
0x70A2C5: xor     edi, edi
0x70A2C7: cmp     [esi+0B6h], di
0x70A2CE: jbe     short loc_70A304
0x70A2D0: mov     eax, [esi+0B0h]
0x70A2D6: mov     ecx, [eax+edi*4]
0x70A2D9: test    ecx, ecx
0x70A2DB: jz      short loc_70A2F6
0x70A2DD: mov     dl, [ecx+18h]
0x70A2E0: shr     dl, 1
0x70A2E2: test    dl, 1
0x70A2E5: jz      short loc_70A2F6
0x70A2E7: mov     eax, [ecx]
0x70A2E9: fld     [esp+8+arg_0]
0x70A2ED: mov     edx, [eax+68h]
0x70A2F0: push    ecx
0x70A2F1: fstp    [esp+0Ch+var_C]
0x70A2F4: call    edx
0x70A2F6: movzx   eax, word ptr [esi+0B6h]
0x70A2FD: add     edi, 1
0x70A300: cmp     edi, eax
0x70A302: jb      short loc_70A2D0
0x70A304: pop     edi
0x70A305: pop     esi
0x70A306: retn    4
