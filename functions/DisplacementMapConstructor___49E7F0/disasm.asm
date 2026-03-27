0x49E7F0: cmp     dword ptr ds:0B35230h, 0
0x49E7F7: push    ebx
0x49E7F8: mov     ebx, ecx
0x49E7FA: jz      short loc_49E876
0x49E7FC: cmp     byte ptr ds:0B07090h, 0
0x49E803: jz      short loc_49E876
0x49E805: push    esi
0x49E806: push    edi
0x49E807: call    sub_49CB40
0x49E80C: mov     esi, [esp+0Ch+arg_0]
0x49E810: push    eax; a2
0x49E811: lea     ecx, [esi+8]; this
0x49E814: call    NiSmartPointer_Set??
0x49E819: mov     eax, ds:0B43104h
0x49E81E: mov     ecx, ds:0B42F50h
0x49E824: push    0
0x49E826: push    0
0x49E828: push    6
0x49E82A: push    100h
0x49E82F: push    eax
0x49E830: lea     edi, [esi+0Ch]
0x49E833: call    sub_7C2420
0x49E838: push    eax; a2
0x49E839: mov     ecx, edi; this
0x49E83B: call    NiSmartPointer_Set??
0x49E840: fld     dword ptr ds:0A3F514h
0x49E846: push    ecx
0x49E847: mov     ecx, ds:0B35230h
0x49E84D: fstp    [esp+10h+var_10]; float
0x49E850: push    ecx; int
0x49E851: mov     ecx, ebx
0x49E853: call    sub_49E750
0x49E858: push    4
0x49E85A: mov     ecx, eax
0x49E85C: mov     [esi+4], eax
0x49E85F: call    NiNode_GetNiPropertyByID
0x49E864: mov     esi, eax
0x49E866: mov     byte ptr [esi+70h], 1
0x49E86A: mov     ecx, [edi]; this
0x49E86C: call    BSRenderedTexture__GetInnerTexture
0x49E871: pop     edi
0x49E872: mov     [esi+6Ch], eax
0x49E875: pop     esi
0x49E876: pop     ebx
0x49E877: retn    4
