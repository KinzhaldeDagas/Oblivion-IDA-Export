0x502084: mov     ecx, esi; this
0x502086: call    TESObjectREFR_GetParentCell
0x50208B: mov     ecx, [esp+arg_10]; this
0x50208F: mov     esi, eax
0x502091: call    TESObjectREFR_GetParentCell
0x502096: test    esi, esi
0x502098: mov     edi, eax
0x50209A: jz      Cmd_Cast___Done_
0x5020A0: test    edi, edi
0x5020A2: jz      Cmd_Cast___Done_
0x5020A8: mov     ecx, ds:0B333A0h
0x5020AE: push    1; a2
0x5020B0: push    esi; a1
0x5020B1: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5020B6: test    al, al
0x5020B8: jz      short Cmd_Cast___Done_
0x5020BA: mov     ecx, ds:0B333A0h
0x5020C0: push    0; a2
0x5020C2: push    edi; a1
0x5020C3: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5020C8: test    al, al
0x5020CA: jz      short Cmd_Cast___Done_
0x5020CC: mov     edx, [esp+arg_C]
0x5020D0: push    0
0x5020D2: push    ebp
0x5020D3: push    edx
0x5020D4: mov     ecx, ebx
0x5020D6: call    MagicCaster_CastMagicItem
0x5020DB: pop     ebp
0x5020DC: pop     ebx
0x5020DD: pop     edi
0x5020DE: mov     al, 1
0x5020E0: pop     esi
0x5020E1: add     esp, 8
0x5020E4: retn
