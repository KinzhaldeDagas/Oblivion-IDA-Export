0x612860: mov     eax, [esp+arg_0]
0x612864: test    eax, eax
0x612866: jz      short loc_61288C
0x612868: mov     ecx, [eax]; int
0x61286A: test    ecx, ecx
0x61286C: jz      short loc_61288C
0x61286E: call    MagicItem_GetFormID
0x612873: mov     ecx, ds:0B33B00h
0x612879: mov     [esp+arg_0], eax
0x61287D: push    4
0x61287F: lea     eax, [esp+4+arg_0]
0x612883: push    eax
0x612884: call    SaveLoad_SaveFormID
0x612889: retn    4
0x61288C: mov     ecx, ds:0B33B00h
0x612892: push    4
0x612894: lea     eax, [esp+4+arg_0]
0x612898: push    eax
0x612899: mov     [esp+8+arg_0], 0
0x6128A1: call    SaveLoad_SaveFormID
0x6128A6: retn    4
