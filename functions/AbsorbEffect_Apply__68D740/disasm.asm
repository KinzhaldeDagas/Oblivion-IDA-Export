0x68D740: push    esi
0x68D741: mov     esi, ecx
0x68D743: call    ValueModifierEffect_Apply
0x68D748: mov     eax, [esi+0Ch]
0x68D74B: mov     ecx, [eax+1Ch]
0x68D74E: mov     edx, [ecx+58h]
0x68D751: shr     edx, 1
0x68D753: test    dl, 1
0x68D756: jnz     short AbsorbEffect_Apply___ApplyOppositeToCaster
0x68D758: fldz
0x68D75A: fcomp   dword ptr [esi+1Ch]
0x68D75D: fnstsw  ax
0x68D75F: test    ah, 44h
0x68D762: jp      short AbsorbEffect_Apply___CasterAttributeWarning
