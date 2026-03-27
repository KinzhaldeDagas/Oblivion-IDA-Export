0x4B26E0: push    esi
0x4B26E1: mov     esi, ecx
0x4B26E3: push    esi
0x4B26E4: call    GetFormModelPAth
0x4B26E9: mov     ecx, ds:0B33A1Ch
0x4B26EF: add     esp, 4
0x4B26F2: push    1
0x4B26F4: push    1
0x4B26F6: push    eax
0x4B26F7: call    QueuedModelLoader_RemoveModel
0x4B26FC: mov     eax, [esi]
0x4B26FE: mov     edx, [eax+110h]
0x4B2704: push    0
0x4B2706: mov     ecx, esi
0x4B2708: call    edx
0x4B270A: mov     esi, eax
0x4B270C: mov     ecx, esi; this
0x4B270E: call    NiAVObject_InitializePropertyState
0x4B2713: mov     ecx, esi
0x4B2715: call    NiNode_UpdateDynamicEffectState
0x4B271A: fldz
0x4B271C: push    0; a3
0x4B271E: push    ecx
0x4B271F: mov     ecx, esi; this
0x4B2721: fstp    [esp+0Ch+a2]; a2
0x4B2724: call    NiAVObject_UpdateNiAVObject
0x4B2729: mov     al, 1
0x4B272B: pop     esi
0x4B272C: retn    4
