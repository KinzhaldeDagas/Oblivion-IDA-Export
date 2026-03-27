0x4B2370: mov     eax, [ecx]
0x4B2372: mov     edx, [eax+110h]
0x4B2378: push    esi
0x4B2379: push    0
0x4B237B: call    edx
0x4B237D: mov     esi, eax
0x4B237F: mov     ecx, esi; this
0x4B2381: call    NiAVObject_InitializePropertyState
0x4B2386: mov     ecx, esi
0x4B2388: call    NiNode_UpdateDynamicEffectState
0x4B238D: fldz
0x4B238F: push    0; a3
0x4B2391: push    ecx
0x4B2392: mov     ecx, esi; this
0x4B2394: fstp    [esp+0Ch+a2]; a2
0x4B2397: call    NiAVObject_UpdateNiAVObject
0x4B239C: mov     al, 1
0x4B239E: pop     esi
0x4B239F: retn
