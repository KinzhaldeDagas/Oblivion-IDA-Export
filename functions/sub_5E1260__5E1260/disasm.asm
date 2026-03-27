0x5E1260: push    esi
0x5E1261: mov     esi, [esp+4+arg_0]
0x5E1265: mov     eax, [esi]
0x5E1267: mov     edx, [eax+170h]
0x5E126D: mov     ecx, esi
0x5E126F: call    edx
0x5E1271: cmp     eax, ds:0B35ED4h
0x5E1277: jnz     short loc_5E12A0
0x5E1279: mov     ecx, esi; this
0x5E127B: call    TESObjectREFR_GetParentCell
0x5E1280: test    eax, eax
0x5E1282: jz      short loc_5E1296
0x5E1284: mov     ecx, esi; this
0x5E1286: call    TESObjectREFR_GetParentCell
0x5E128B: mov     ecx, eax; this
0x5E128D: call    TESObjectCELL_IsInterior
0x5E1292: test    al, al
0x5E1294: jnz     short loc_5E12A0
0x5E1296: mov     ds:0B3B778h, esi
0x5E129C: mov     al, 1
0x5E129E: pop     esi
0x5E129F: retn
0x5E12A0: mov     dword ptr ds:0B3B778h, 0
0x5E12AA: xor     al, al
0x5E12AC: pop     esi
0x5E12AD: retn
