0x6D2B70: push    esi
0x6D2B71: push    edi
0x6D2B72: mov     edi, ecx
0x6D2B74: mov     esi, [edi+10h]
0x6D2B77: test    esi, esi
0x6D2B79: jz      short loc_6D2B9E
0x6D2B7B: lea     eax, [esi+4]
0x6D2B7E: push    eax; lpAddend
0x6D2B7F: call    dword ptr ds:0A2807Ch
0x6D2B85: test    eax, eax
0x6D2B87: jnz     short loc_6D2B97
0x6D2B89: test    esi, esi
0x6D2B8B: jz      short loc_6D2B97
0x6D2B8D: mov     edx, [esi]
0x6D2B8F: mov     eax, [edx]
0x6D2B91: push    1
0x6D2B93: mov     ecx, esi
0x6D2B95: call    eax
0x6D2B97: mov     dword ptr [edi+10h], 0
0x6D2B9E: fld     [esp+8+arg_0]
0x6D2BA2: fstp    dword ptr [edi+0Ch]
0x6D2BA5: pop     edi
0x6D2BA6: pop     esi
0x6D2BA7: retn    4
