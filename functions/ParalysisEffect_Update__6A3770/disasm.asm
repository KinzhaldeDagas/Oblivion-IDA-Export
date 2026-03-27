0x6A3770: fld     [esp+arg_0]
0x6A3774: push    esi
0x6A3775: push    ecx
0x6A3776: fstp    [esp+8+var_8]
0x6A3779: mov     esi, ecx
0x6A377B: call    ValueModifierEffect_UpdateEffect
0x6A3780: mov     ecx, [esi+20h]; this
0x6A3783: test    ecx, ecx
0x6A3785: jz      short loc_6A37AB
0x6A3787: call    MagicTarget_GetParentActor
0x6A378C: test    eax, eax
0x6A378E: jz      short loc_6A37AB
0x6A3790: mov     edx, [eax]
0x6A3792: mov     ecx, eax
0x6A3794: mov     eax, [edx+198h]
0x6A379A: push    0
0x6A379C: call    eax
0x6A379E: test    al, al
0x6A37A0: jz      short loc_6A37AB
0x6A37A2: push    1
0x6A37A4: mov     ecx, esi
0x6A37A6: call    ActiveEffect_Base_Remove
0x6A37AB: pop     esi
0x6A37AC: retn    4
