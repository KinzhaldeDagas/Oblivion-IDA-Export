0x68A6E0: push    esi
0x68A6E1: mov     esi, ecx
0x68A6E3: mov     ecx, [esi+4]; this
0x68A6E6: test    ecx, ecx
0x68A6E8: mov     al, 1
0x68A6EA: jz      short loc_68A717
0x68A6EC: push    edi
0x68A6ED: mov     edi, [esp+8+arg_0]
0x68A6F1: test    edi, edi
0x68A6F3: jz      short loc_68A716
0x68A6F5: push    ebx
0x68A6F6: xor     bl, bl
0x68A6F8: call    TravelPathNode_GetPosition; Verified TravelPathNode_GetPosition returns a stored NiPoint3* for kind 1; for kind 0, returns reference GetPos unless the ref has TeleportData, in which case it returns the linked door's TeleportData xyz marker. Null payloads and unrecognized kinds return g_zeroNiPoint3.
0x68A6FD: push    eax; pointXYZ
0x68A6FE: mov     ecx, edi; this
0x68A700: call    TESObjectREFR__GetDistanceToPoint; Returns the Euclidean 3D distance from TESObjectREFR position fields at +0x2C/+0x30/+0x34 to pointXYZ. The second social scan uses this result against its effective conversation radius.
0x68A705: fld     dword ptr [esi+0Ch]
0x68A708: fcompp
0x68A70A: fnstsw  ax
0x68A70C: mov     al, 1
0x68A70E: test    ah, 1
0x68A711: jz      short loc_68A715
0x68A713: mov     al, bl
0x68A715: pop     ebx
0x68A716: pop     edi
0x68A717: pop     esi
0x68A718: retn    4
