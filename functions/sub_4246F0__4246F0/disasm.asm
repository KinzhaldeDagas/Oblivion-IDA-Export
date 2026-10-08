0x4246F0: push    esi
0x4246F1: push    edi
0x4246F2: push    20h ; ' '; a2
0x4246F4: mov     edi, ecx
0x4246F6: call    BaseExtraList_GetExtraData
0x4246FB: mov     esi, eax
0x4246FD: test    esi, esi
0x4246FF: jz      short loc_42475E
0x424701: mov     ecx, [esi+0Ch]
0x424704: push    1
0x424706: call    sub_566830; 3DTheft decode: dynamic package marker only sets packageFlags bit 0x800 when TESDataHandler_IsFormIDCreated_(formID) returns true. Do not force 0x800 on arbitrary heap packages before Actor_AddPackage_.
0x42470B: mov     ecx, g_TESSaveLoadGame; Verified: g_TESSaveLoadGame singleton points to this partially recovered 136-byte serialization view. +0 ChangesMap, +4 alternate ChangesMap, +8 interior map, +C exterior references map, +10 exterior cell map, +14 cursor, +18 flags, +74 irefTable, +78 worldspaceIDArray, +7C currentVersion, +7D encoding flag, +80/+84 active form headers. Remaining embedded fields retain Unknown names.
0x424711: call    sub_45A500
0x424716: test    al, al
0x424718: jz      short loc_42473D
0x42471A: mov     eax, [esi+0Ch]
0x42471D: mov     ecx, g_TESSaveLoadGame; self
0x424723: push    eax; form
0x424724: call    TESSaveLoadGame_DeleteForm
0x424729: push    1
0x42472B: push    esi
0x42472C: mov     ecx, edi
0x42472E: mov     dword ptr [esi+0Ch], 0
0x424735: call    BaseExtraList_RemoveExtraByPtr
0x42473A: pop     edi
0x42473B: pop     esi
0x42473C: retn
0x42473D: mov     ecx, [esi+0Ch]
0x424740: test    ecx, ecx
0x424742: jz      short loc_42474D
0x424744: mov     edx, [ecx]
0x424746: mov     eax, [edx+10h]
0x424749: push    1
0x42474B: call    eax
0x42474D: push    1
0x42474F: push    esi
0x424750: mov     ecx, edi
0x424752: mov     dword ptr [esi+0Ch], 0
0x424759: call    BaseExtraList_RemoveExtraByPtr
0x42475E: pop     edi
0x42475F: pop     esi
0x424760: retn
