0x694B10: push    esi
0x694B11: mov     esi, ecx
0x694B13: call    LightEffect_TeardownTransientPointLight; Remove first tears down this LightEffect's transient point light.
0x694B18: mov     ecx, [esi+20h]; this
0x694B1B: test    ecx, ecx
0x694B1D: pop     esi
0x694B1E: jz      short locret_694B33
0x694B20: call    MagicTarget_GetParentActor
0x694B25: test    eax, eax
0x694B27: jz      short locret_694B33
0x694B29: add     eax, 68h ; 'h'
0x694B2C: push    eax; target
0x694B2D: call    MagicTarget_ReconcileStrongestLightEffect; After removal, re-evaluate the remaining LGHT effects so the next greatest-magnitude effect may own the actor's single transient light.
0x694B32: pop     ecx
0x694B33: retn
