0x691B90: push    esi
0x691B91: mov     esi, ecx
0x691B93: call    ValueModifierEffect_Apply
0x691B98: mov     ecx, [esi+20h]; this
0x691B9B: test    ecx, ecx
0x691B9D: jz      short loc_691BCE
0x691B9F: call    MagicTarget_GetParentActor
0x691BA4: mov     esi, eax
0x691BA6: test    esi, esi
0x691BA8: jz      short loc_691BCE
0x691BAA: mov     eax, [esi]
0x691BAC: mov     edx, [eax+330h]
0x691BB2: mov     ecx, esi
0x691BB4: call    edx
0x691BB6: test    eax, eax
0x691BB8: jz      short loc_691BCE
0x691BBA: mov     eax, [esi]
0x691BBC: mov     edx, [eax+330h]
0x691BC2: mov     ecx, esi
0x691BC4: call    edx
0x691BC6: mov     ecx, eax
0x691BC8: pop     esi
0x691BC9: jmp     loc_6193D0
0x691BCE: pop     esi
0x691BCF: retn
