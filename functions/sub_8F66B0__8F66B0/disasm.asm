0x8F66B0: push    esi
0x8F66B1: mov     esi, ecx
0x8F66B3: mov     dword ptr [esi], offset off_A9B510
0x8F66B9: mov     eax, [esi+38h]
0x8F66BC: test    eax, eax
0x8F66BE: js      short loc_8F66F4
0x8F66C0: mov     ecx, ds:0BA9DE4h
0x8F66C6: mov     edx, large fs:2Ch
0x8F66CD: mov     ecx, [edx+ecx*4]
0x8F66D0: mov     ecx, [ecx+19Ch]
0x8F66D6: test    ecx, ecx
0x8F66D8: jnz     short loc_8F66E0
0x8F66DA: mov     ecx, ds:0BA7D9Ch
0x8F66E0: mov     edx, [esi+30h]
0x8F66E3: and     eax, 3FFFFFFFh
0x8F66E8: push    14h
0x8F66EA: shl     eax, 2
0x8F66ED: push    eax
0x8F66EE: push    edx
0x8F66EF: call    sub_8A75D0
0x8F66F4: test    [esp+4+arg_0], 1
0x8F66F9: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8F66FF: jz      short loc_8F6714
0x8F6701: movzx   edx, word ptr [esi+4]
0x8F6705: mov     ecx, ds:0BA7D98h
0x8F670B: mov     eax, [ecx]
0x8F670D: push    1Ch
0x8F670F: push    edx
0x8F6710: push    esi
0x8F6711: call    dword ptr [eax+14h]
0x8F6714: mov     eax, esi
0x8F6716: pop     esi
0x8F6717: retn    4
