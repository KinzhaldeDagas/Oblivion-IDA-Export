0x68F030: mov     edi, [esp+arg_28]
0x68F034: push    edi
0x68F035: call    ActiveEffect_Base_Load
0x68F03A: push    0; int
0x68F03C: push    offset ??_R0?AVVampirismEffect@@@8; struct TypeDescriptor *
0x68F041: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x68F046: mov     esi, eax
0x68F048: push    0; int
0x68F04A: push    esi; void *
0x68F04B: call    OblivionDynamicCast
0x68F050: add     esp, 18h
0x68F053: test    eax, eax
0x68F055: jz      short ActiveEffect_Base_LoadAEList?___AddActiveEffect
0x68F057: test    edi, edi
0x68F059: jz      short ActiveEffect_Base_LoadAEList?___AddActiveEffect
0x68F05B: mov     ecx, [edi+58h]
0x68F05E: test    ecx, ecx
0x68F060: jz      short ActiveEffect_Base_LoadAEList?___AddActiveEffect
0x68F062: fld     [esp+arg_18]
0x68F066: fld     dword ptr [esi+18h]
0x68F069: fucompp
0x68F06B: fnstsw  ax
0x68F06D: test    ah, 44h
0x68F070: jnp     short ActiveEffect_Base_LoadAEList?___AddActiveEffect
0x68F072: mov     edx, [ecx]
0x68F074: mov     eax, [edx+31Ch]
0x68F07A: push    1
0x68F07C: call    eax
