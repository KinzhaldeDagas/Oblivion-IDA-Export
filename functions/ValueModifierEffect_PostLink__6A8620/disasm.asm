0x6A8620: mov     eax, [esp+arg_0]
0x6A8624: push    esi
0x6A8625: push    eax
0x6A8626: mov     esi, ecx
0x6A8628: call    ActiveEffect_Base_PostLink
0x6A862D: mov     ecx, ds:0B33B00h
0x6A8633: mov     al, [ecx+7Ch]
0x6A8636: cmp     al, 5Fh ; '_'
0x6A8638: jb      ValueModifierEffect_PostLink___Done
0x6A863E: cmp     al, 62h ; 'b'
0x6A8640: jnb     ValueModifierEffect_PostLink___Done
0x6A8646: mov     ecx, [esi+20h]; this
0x6A8649: test    ecx, ecx
0x6A864B: jz      ValueModifierEffect_PostLink___Done
0x6A8651: push    edi
0x6A8652: call    MagicTarget_GetParentActor
0x6A8657: mov     edi, eax
0x6A8659: test    edi, edi
0x6A865B: jz      ValueModifierEffect_PostLink___Done_
0x6A8661: mov     ecx, edi
0x6A8663: call    Actor_IsPlayer
0x6A8668: test    al, al
0x6A866A: jz      short ValueModifierEffect_PostLink___Done_
0x6A866C: mov     ecx, esi
0x6A866E: call    ActiveEffect_Base_IsBoundObjWearable
0x6A8673: test    al, al
0x6A8675: jz      short ValueModifierEffect_PostLink___Done_
0x6A8677: mov     edx, [esi+0Ch]
0x6A867A: mov     eax, [edx+1Ch]
0x6A867D: mov     ecx, [eax+58h]
0x6A8680: shr     ecx, 1
0x6A8682: test    cl, 1
0x6A8685: jz      short ValueModifierEffect_PostLink___Done_
