0x559870: push    ebx
0x559871: mov     ebx, [esp+4+arg_0]
0x559875: test    ebx, ebx
0x559877: push    esi
0x559878: mov     esi, ecx
0x55987A: jnz     short loc_559883
0x55987C: pop     esi
0x55987D: xor     al, al
0x55987F: pop     ebx
0x559880: retn    8
0x559883: push    edi
0x559884: mov     edi, [esp+0Ch+arg_4]
0x559888: push    edi
0x559889: call    sub_556A70
0x55988E: test    al, al
0x559890: jz      short loc_5598D1
0x559892: fld1
0x559894: mov     eax, [edi]
0x559896: push    0; int
0x559898: push    ecx
0x559899: fstp    [esp+14h+var_14]; float
0x55989C: push    eax; int
0x55989D: push    ebx; int
0x55989E: mov     ecx, esi
0x5598A0: call    sub_558840
0x5598A5: test    al, al
0x5598A7: jnz     short loc_5598D9
0x5598A9: mov     esi, [edi]
0x5598AB: test    esi, esi
0x5598AD: jz      short loc_5598D1
0x5598AF: lea     eax, [esi+4]
0x5598B2: push    eax; lpAddend
0x5598B3: call    dword ptr ds:0A2807Ch
0x5598B9: test    eax, eax
0x5598BB: jnz     short loc_5598CB
0x5598BD: test    esi, esi
0x5598BF: jz      short loc_5598CB
0x5598C1: mov     edx, [esi]
0x5598C3: mov     eax, [edx]
0x5598C5: push    1
0x5598C7: mov     ecx, esi
0x5598C9: call    eax
0x5598CB: mov     dword ptr [edi], 0
0x5598D1: pop     edi
0x5598D2: pop     esi
0x5598D3: xor     al, al
0x5598D5: pop     ebx
0x5598D6: retn    8
0x5598D9: pop     edi
0x5598DA: pop     esi
0x5598DB: mov     al, 1
0x5598DD: pop     ebx
0x5598DE: retn    8
