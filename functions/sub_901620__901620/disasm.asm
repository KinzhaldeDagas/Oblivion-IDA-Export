0x901620: push    esi
0x901621: mov     esi, ecx
0x901623: mov     dword ptr [esi], offset off_A9BB10
0x901629: mov     eax, [esi+14h]
0x90162C: test    eax, eax
0x90162E: js      short loc_901663
0x901630: mov     ecx, ds:0BA9DE4h
0x901636: mov     edx, large fs:2Ch
0x90163D: mov     ecx, [edx+ecx*4]
0x901640: mov     ecx, [ecx+19Ch]
0x901646: test    ecx, ecx
0x901648: jnz     short loc_901650
0x90164A: mov     ecx, ds:0BA7D9Ch
0x901650: mov     edx, [esi+0Ch]
0x901653: and     eax, 3FFFFFFFh
0x901658: push    14h
0x90165A: shl     eax, 1
0x90165C: push    eax
0x90165D: push    edx
0x90165E: call    sub_8A75D0
0x901663: test    [esp+4+arg_0], 1
0x901668: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x90166E: jz      short loc_901683
0x901670: movzx   edx, word ptr [esi+4]
0x901674: mov     ecx, ds:0BA7D98h
0x90167A: mov     eax, [ecx]
0x90167C: push    1Ch
0x90167E: push    edx
0x90167F: push    esi
0x901680: call    dword ptr [eax+14h]
0x901683: mov     eax, esi
0x901685: pop     esi
0x901686: retn    4
