0x68A720: push    ecx
0x68A721: fldz
0x68A723: mov     ecx, [ecx+4]; this
0x68A726: push    esi
0x68A727: fstp    [esp+8+var_4]
0x68A72B: mov     esi, [esp+8+arg_0]
0x68A72F: test    esi, esi
0x68A731: jz      short loc_68A748
0x68A733: test    ecx, ecx
0x68A735: jz      short loc_68A748
0x68A737: call    TravelPathNode_GetPosition; Verified TravelPathNode_GetPosition returns a stored NiPoint3* for kind 1; for kind 0, returns reference GetPos unless the ref has TeleportData, in which case it returns the linked door's TeleportData xyz marker. Null payloads and unrecognized kinds return g_zeroNiPoint3.
0x68A73C: push    eax; pointXYZ
0x68A73D: mov     ecx, esi; this
0x68A73F: call    TESObjectREFR__GetDistanceToPoint; Returns the Euclidean 3D distance from TESObjectREFR position fields at +0x2C/+0x30/+0x34 to pointXYZ. The second social scan uses this result against its effective conversation radius.
0x68A744: fstp    [esp+8+var_4]
0x68A748: fld     [esp+8+var_4]
0x68A74C: pop     esi
0x68A74D: pop     ecx
0x68A74E: retn    4
