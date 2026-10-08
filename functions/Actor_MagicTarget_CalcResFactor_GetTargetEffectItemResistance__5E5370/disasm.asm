0x5E5370: test    edi, edi; AVU decode: resolves effect-specific resistance AV from effect setting +0x68, excluding -1 and the same AV as the magic-item bucket.
0x5E5372: fldz
0x5E5374: fstp    [esp+arg_14]
0x5E5378: jz      short Actor_MagicTarget_CalcResFactor___GetCasterLuck
0x5E537A: mov     eax, [esp+arg_18]
0x5E537E: mov     ecx, [eax+0Ch]
0x5E5381: mov     edx, [ecx+1Ch]
0x5E5384: mov     eax, [edx+68h]; EffectSetting +0x68 supplies a second resistance actor value; it is skipped when absent or identical to the item-level bucket.
0x5E5387: cmp     eax, 0FFFFFFFFh
0x5E538A: jz      short Actor_MagicTarget_CalcResFactor___GetCasterLuck
0x5E538C: cmp     eax, ebx
0x5E538E: jz      short Actor_MagicTarget_CalcResFactor___GetCasterLuck
0x5E5390: mov     edx, [edi]
0x5E5392: push    eax
0x5E5393: mov     eax, [edx+288h]
0x5E5399: mov     ecx, edi
0x5E539B: call    eax
0x5E539D: fstp    [esp+4+arg_10]; Stores target current float effect-specific resistance into the Calc_MagicTargetResistanceFactor arg_10 slot (entry +0x14).
