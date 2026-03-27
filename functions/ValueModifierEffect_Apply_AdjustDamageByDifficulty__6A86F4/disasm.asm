0x6A86F4: mov     ecx, [esi+20h]; this
0x6A86F7: test    ecx, ecx
0x6A86F9: push    edi
0x6A86FA: jz      short loc_6A8705
0x6A86FC: call    MagicTarget_GetParentActor
0x6A8701: mov     edi, eax
0x6A8703: jmp     short loc_6A8707
0x6A8705: xor     edi, edi
0x6A8707: mov     eax, [esi+0Ch]
0x6A870A: mov     ecx, [eax+1Ch]
0x6A870D: mov     edx, [ecx+58h]
0x6A8710: shr     edx, 2
0x6A8713: test    dl, 1
0x6A8716: jz      short ValueModifierEffect_Apply___TestImmediate
0x6A8718: test    edi, edi
0x6A871A: fld     dword ptr [esi+18h]
0x6A871D: fchs
0x6A871F: fstp    dword ptr [esi+18h]
0x6A8722: jz      short ValueModifierEffect_Apply___TestImmediate
0x6A8724: mov     eax, [esi]
0x6A8726: mov     edx, [eax+44h]
0x6A8729: mov     ecx, esi
0x6A872B: call    edx
0x6A872D: cmp     eax, 8
0x6A8730: jnz     short ValueModifierEffect_Apply___TestImmediate
0x6A8732: mov     eax, [esi+0Ch]
0x6A8735: cmp     dword ptr [eax+10h], 0
0x6A8739: jz      short ValueModifierEffect_Apply___TestImmediate
0x6A873B: mov     ecx, [esi+24h]; this
0x6A873E: test    ecx, ecx
0x6A8740: jz      short loc_6A8749
0x6A8742: call    MagicCaster_GetParentActor
0x6A8747: jmp     short loc_6A874B
0x6A8749: xor     eax, eax
0x6A874B: fld     dword ptr [esi+18h]
0x6A874E: push    eax; a3
0x6A874F: push    ecx
0x6A8750: mov     ecx, edi; this
0x6A8752: fstp    [esp+0Ch+a2]; a2
0x6A8755: call    Actor_AdjustDmgByDifficulty
0x6A875A: fstp    dword ptr [esi+18h]
