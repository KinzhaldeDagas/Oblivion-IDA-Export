0x69D960: push    esi
0x69D961: mov     esi, ecx
0x69D963: mov     ecx, [esp+4+arg_4]; this
0x69D967: test    ecx, ecx
0x69D969: jz      short loc_69D973
0x69D96B: call    TESObjectREFR_GetParentCell
0x69D970: mov     [esi+0Ch], eax
0x69D973: pop     esi
0x69D974: retn    8
