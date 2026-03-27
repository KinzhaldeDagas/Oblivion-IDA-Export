0x705810: push    esi
0x705811: mov     esi, ecx
0x705813: mov     eax, [esi+0Ch]
0x705816: push    edi
0x705817: push    eax
0x705818: mov     dword ptr [esi], offset ??_7Map@NiTexturingProperty@@6B@; const NiTexturingProperty::Map::`vftable'
0x70581E: call    FormHeapFree
0x705823: mov     edi, [esi+8]
0x705826: add     esp, 4
0x705829: test    edi, edi
0x70582B: jz      short loc_705849
0x70582D: lea     ecx, [edi+4]
0x705830: push    ecx; lpAddend
0x705831: call    dword ptr ds:0A2807Ch
0x705837: test    eax, eax
0x705839: jnz     short loc_705849
0x70583B: test    edi, edi
0x70583D: jz      short loc_705849
0x70583F: mov     edx, [edi]
0x705841: mov     eax, [edx]
0x705843: push    1
0x705845: mov     ecx, edi
0x705847: call    eax
0x705849: test    [esp+8+free], 1
0x70584E: jz      short loc_705859
0x705850: push    esi
0x705851: call    FormHeapFree
0x705856: add     esp, 4
0x705859: pop     edi
0x70585A: mov     eax, esi
0x70585C: pop     esi
0x70585D: retn    4
