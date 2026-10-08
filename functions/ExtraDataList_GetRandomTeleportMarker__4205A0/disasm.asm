0x4205A0: push    43h ; 'C'; Verified getter: returns ExtraRandomTeleportMarker.teleportRef from this ExtraDataList, or null if the type-0x43 extra is absent.
0x4205A2: call    BaseExtraList_GetExtraData
0x4205A7: test    eax, eax
0x4205A9: jz      short loc_4205AF
0x4205AB: mov     eax, [eax+0Ch]
0x4205AE: retn
0x4205AF: xor     eax, eax
0x4205B1: retn
