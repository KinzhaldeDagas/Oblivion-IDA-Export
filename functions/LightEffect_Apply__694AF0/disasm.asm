0x694AF0: mov     ecx, [ecx+20h]; this
0x694AF3: test    ecx, ecx
0x694AF5: jz      short locret_694B0A
0x694AF7: call    MagicTarget_GetParentActor
0x694AFC: test    eax, eax
0x694AFE: jz      short locret_694B0A
0x694B00: add     eax, 68h ; 'h'
0x694B03: push    eax; target
0x694B04: call    MagicTarget_ReconcileStrongestLightEffect; Apply re-evaluates the parent actor's active LGHT effects and creates/retains only the greatest-magnitude LightEffect light.
0x694B09: pop     ecx
0x694B0A: retn
