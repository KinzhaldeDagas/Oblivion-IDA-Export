0x68B110: push    esi; Verified TravelPathNode_GetPosition returns a stored NiPoint3* for kind 1; for kind 0, returns reference GetPos unless the ref has TeleportData, in which case it returns the linked door's TeleportData xyz marker. Null payloads and unrecognized kinds return g_zeroNiPoint3.
0x68B111: mov     esi, ecx
0x68B113: mov     cl, [esi+4]
0x68B116: movsx   eax, cl
0x68B119: sub     eax, 0
0x68B11C: jz      short loc_68B137
0x68B11E: sub     eax, 1
0x68B121: jnz     short loc_68B130
0x68B123: cmp     cl, 1
0x68B126: jnz     short loc_68B130
0x68B128: mov     esi, [esi]
0x68B12A: test    esi, esi
0x68B12C: mov     eax, esi
0x68B12E: jnz     short loc_68B135
0x68B130: mov     eax, offset g_zeroNiPoint3
0x68B135: pop     esi
0x68B136: retn
0x68B137: test    cl, cl
0x68B139: jnz     short loc_68B130
0x68B13B: mov     ecx, [esi]; this
0x68B13D: test    ecx, ecx
0x68B13F: jz      short loc_68B130
0x68B141: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x68B146: test    eax, eax
0x68B148: jz      short loc_68B160
0x68B14A: cmp     byte ptr [esi+4], 0
0x68B14E: jnz     short loc_68B158
0x68B150: mov     ecx, [esi]; this
0x68B152: pop     esi
0x68B153: jmp     TESObjectREFR_GetLinkedTeleportMarkerPosition; Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
0x68B158: xor     ecx, ecx; this
0x68B15A: pop     esi
0x68B15B: jmp     TESObjectREFR_GetLinkedTeleportMarkerPosition; Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
0x68B160: cmp     byte ptr [esi+4], 0
0x68B164: jnz     short loc_68B16A
0x68B166: mov     ecx, [esi]
0x68B168: jmp     short loc_68B16C
0x68B16A: xor     ecx, ecx
0x68B16C: mov     eax, [ecx]
0x68B16E: mov     edx, [eax+174h]
0x68B174: pop     esi
0x68B175: jmp     edx
