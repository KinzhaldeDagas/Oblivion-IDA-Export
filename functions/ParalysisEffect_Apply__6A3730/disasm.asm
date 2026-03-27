0x6A3730: push    edi
0x6A3731: mov     edi, ecx
0x6A3733: mov     ecx, [edi+20h]; this
0x6A3736: test    ecx, ecx
0x6A3738: jz      short loc_6A3763
0x6A373A: push    esi
0x6A373B: call    MagicTarget_GetParentActor
0x6A3740: mov     esi, eax
0x6A3742: test    esi, esi
0x6A3744: jz      short loc_6A3762
0x6A3746: mov     ecx, esi
0x6A3748: call    sub_5EF930
0x6A374D: mov     eax, [esi]
0x6A374F: mov     edx, [eax+1A0h]
0x6A3755: mov     ecx, esi
0x6A3757: call    edx
0x6A3759: pop     esi
0x6A375A: mov     ecx, edi
0x6A375C: pop     edi
0x6A375D: jmp     ValueModifierEffect_Apply
0x6A3762: pop     esi
0x6A3763: pop     edi
0x6A3764: retn
