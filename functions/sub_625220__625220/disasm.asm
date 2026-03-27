0x625220: push    ecx
0x625221: push    esi
0x625222: push    0; int
0x625224: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x625229: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x62522E: push    0; int
0x625230: push    0; a2
0x625232: mov     esi, ecx
0x625234: call    Actor_GetActorBaseForm
0x625239: push    eax; void *
0x62523A: call    OblivionDynamicCast
0x62523F: add     esp, 14h
0x625242: test    eax, eax
0x625244: jnz     short loc_625258
0x625246: mov     ecx, esi; this
0x625248: call    Actor_GetHandReachDistance
0x62524D: fstp    [esp+8+var_4]
0x625251: fld     [esp+8+var_4]
0x625255: pop     esi
0x625256: pop     ecx
0x625257: retn
0x625258: cmp     byte ptr [eax+104h], 5
0x62525F: movzx   ecx, byte ptr [eax+10Ah]
0x625266: mov     [esp+8+var_4], ecx
0x62526A: fild    [esp+8+var_4]
0x62526E: fstp    [esp+8+var_4]
0x625272: jnz     short loc_625282
0x625274: fld     dword ptr ds:0B37268h
0x62527A: fmul    [esp+8+var_4]
0x62527E: fstp    [esp+8+var_4]
0x625282: fld     [esp+8+var_4]
0x625286: pop     esi
0x625287: pop     ecx
0x625288: retn
