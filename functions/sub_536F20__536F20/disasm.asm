0x536F20: mov     ecx, [esp+arg_0]; this
0x536F24: push    edi
0x536F25: xor     edi, edi
0x536F27: test    ecx, ecx
0x536F29: jz      short loc_536F60
0x536F2B: push    esi
0x536F2C: call    TESObjectREFR_GetParentCell
0x536F31: mov     esi, eax
0x536F33: test    esi, esi
0x536F35: jz      short loc_536F5B
0x536F37: mov     ecx, esi; this
0x536F39: call    TESObjectCELL_IsInterior
0x536F3E: test    al, al
0x536F40: jz      short loc_536F4C
0x536F42: lea     ecx, [esi+28h]
0x536F45: call    sub_424180
0x536F4A: jmp     short loc_536F51
0x536F4C: mov     eax, ds:0B35C24h
0x536F51: test    eax, eax
0x536F53: jz      short loc_536F5B
0x536F55: mov     eax, [eax+24h]
0x536F58: pop     esi
0x536F59: pop     edi
0x536F5A: retn
0x536F5B: pop     esi
0x536F5C: mov     eax, edi
0x536F5E: pop     edi
0x536F5F: retn
0x536F60: mov     eax, edi
0x536F62: pop     edi
0x536F63: retn
