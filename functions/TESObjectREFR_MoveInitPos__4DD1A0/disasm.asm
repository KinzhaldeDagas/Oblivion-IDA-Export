0x4DD1A0: fld     [esp+arg_0]
0x4DD1A4: push    esi
0x4DD1A5: fld     dword ptr ds:0B3F9A8h
0x4DD1AB: push    edi
0x4DD1AC: fucompp
0x4DD1AE: mov     esi, ecx
0x4DD1B0: fnstsw  ax
0x4DD1B2: test    ah, 44h
0x4DD1B5: jp      short loc_4DD1DD
0x4DD1B7: fld     [esp+8+arg_4]
0x4DD1BB: fld     dword ptr ds:0B3F9ACh
0x4DD1C1: fucompp
0x4DD1C3: fnstsw  ax
0x4DD1C5: test    ah, 44h
0x4DD1C8: jp      short loc_4DD1DD
0x4DD1CA: fld     [esp+8+arg_8]
0x4DD1CE: fld     dword ptr ds:0B3F9B0h
0x4DD1D4: fucompp
0x4DD1D6: fnstsw  ax
0x4DD1D8: test    ah, 44h
0x4DD1DB: jnp     short loc_4DD1FE
0x4DD1DD: mov     ecx, [esp+8+arg_0]
0x4DD1E1: mov     edx, [esp+8+arg_4]
0x4DD1E5: sub     esp, 0Ch
0x4DD1E8: mov     eax, esp
0x4DD1EA: mov     [eax], ecx
0x4DD1EC: mov     ecx, [esp+14h+arg_8]
0x4DD1F0: mov     [eax+4], edx
0x4DD1F3: push    esi
0x4DD1F4: lea     edx, [esp+18h+arg_0]
0x4DD1F8: mov     [eax+8], ecx
0x4DD1FB: push    edx
0x4DD1FC: jmp     short loc_4DD223
0x4DD1FE: mov     eax, [esi]
0x4DD200: mov     edx, [eax+174h]
0x4DD206: call    edx
0x4DD208: mov     edx, [eax]
0x4DD20A: sub     esp, 0Ch
0x4DD20D: mov     ecx, esp
0x4DD20F: mov     [ecx], edx
0x4DD211: mov     edx, [eax+4]
0x4DD214: mov     eax, [eax+8]
0x4DD217: mov     [ecx+4], edx
0x4DD21A: mov     [ecx+8], eax
0x4DD21D: push    esi
0x4DD21E: lea     ecx, [esp+18h+arg_0]
0x4DD222: push    ecx
0x4DD223: lea     edi, [esi+44h]
0x4DD226: mov     ecx, edi
0x4DD228: call    ExtraDataList_SetStartingPosition
0x4DD22D: mov     edx, [esi+20h]
0x4DD230: mov     ecx, [esi+24h]
0x4DD233: sub     esp, 0Ch
0x4DD236: mov     eax, esp
0x4DD238: mov     [eax], edx
0x4DD23A: mov     edx, [esi+28h]
0x4DD23D: mov     [eax+4], ecx
0x4DD240: mov     [eax+8], edx
0x4DD243: push    esi
0x4DD244: lea     eax, [esp+18h+arg_0]
0x4DD248: push    eax
0x4DD249: mov     ecx, edi
0x4DD24B: call    ExtraDataList_SetStartingRotation
0x4DD250: pop     edi
0x4DD251: pop     esi
0x4DD252: retn    0Ch
