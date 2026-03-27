0x6D38F0: mov     eax, [esp+a2]
0x6D38F4: test    eax, eax
0x6D38F6: push    edi
0x6D38F7: mov     edi, ecx
0x6D38F9: jz      short loc_6D3908
0x6D38FB: push    eax; a2
0x6D38FC: lea     ecx, [edi+38h]; this
0x6D38FF: call    NiSmartPointer_Set??
0x6D3904: pop     edi
0x6D3905: retn    4
0x6D3908: push    esi
0x6D3909: mov     esi, [edi+38h]
0x6D390C: test    esi, esi
0x6D390E: jz      short loc_6D3933
0x6D3910: lea     eax, [esi+4]
0x6D3913: push    eax; lpAddend
0x6D3914: call    dword ptr ds:0A2807Ch
0x6D391A: test    eax, eax
0x6D391C: jnz     short loc_6D392C
0x6D391E: test    esi, esi
0x6D3920: jz      short loc_6D392C
0x6D3922: mov     edx, [esi]
0x6D3924: mov     eax, [edx]
0x6D3926: push    1
0x6D3928: mov     ecx, esi
0x6D392A: call    eax
0x6D392C: mov     dword ptr [edi+38h], 0
0x6D3933: pop     esi
0x6D3934: pop     edi
0x6D3935: retn    4
