0x41E880: push    2Dh ; '-'; a2
0x41E882: call    BaseExtraList_GetExtraData
0x41E887: test    eax, eax
0x41E889: jz      short loc_41E88F
0x41E88B: fld     dword ptr [eax+0Ch]
0x41E88E: retn
0x41E88F: fld     ds:flt_A30634
0x41E895: retn
