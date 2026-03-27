0x53B0E0: sub     esp, 1Ch
0x53B0E3: push    esi
0x53B0E4: mov     esi, [esp+20h+arg_0]
0x53B0E8: test    esi, esi
0x53B0EA: push    edi
0x53B0EB: mov     edi, ecx
0x53B0ED: jz      loc_53B3BC
0x53B0F3: fld     [esp+24h+arg_4]
0x53B0F7: push    ecx
0x53B0F8: fstp    [esp+28h+var_28]
0x53B0FB: push    esi
0x53B0FC: call    nullsub_returnVoid_2arg
0x53B101: mov     eax, [esi+0DCh]
0x53B107: cmp     eax, 3
0x53B10A: jz      short loc_53B115
0x53B10C: cmp     eax, 2
0x53B10F: jnz     loc_53B2DF
0x53B115: cmp     dword ptr [edi+8], 0
0x53B119: jz      loc_53B3BC
0x53B11F: mov     ecx, ds:0B333C4h; this
0x53B125: test    ecx, ecx
0x53B127: jz      loc_53B20C
0x53B12D: call    TESObjectREFR_GetParentCell
0x53B132: test    eax, eax
0x53B134: jz      loc_53B20C
0x53B13A: mov     ecx, ds:0B333CCh; this
0x53B140: call    SceneGraph_GetChildNiAvNodeVtbl
0x53B145: fld     dword ptr [eax+90h]
0x53B14B: mov     ecx, ds:0B333C4h; this
0x53B151: add     eax, 88h ; 'ˆ'
0x53B156: fstp    [esp+24h+a2]
0x53B15A: call    TESObjectREFR_GetParentCell
0x53B15F: mov     ecx, eax
0x53B161: call    TESObjectCELL_GetWaterHeight
0x53B166: fcomp   [esp+24h+a2]
0x53B16A: fnstsw  ax
0x53B16C: test    ah, 41h
0x53B16F: jnz     loc_53B20C
0x53B175: fld     dword ptr [esi+48h]
0x53B178: fstp    dword ptr [esp+24h+a2]
0x53B17C: mov     eax, dword ptr [esp+24h+a2]
0x53B180: fld     dword ptr [esi+4Ch]
0x53B183: fstp    dword ptr [esp+24h+a2+4]
0x53B187: mov     ecx, dword ptr [esp+24h+a2+4]
0x53B18B: fld     dword ptr [esi+50h]
0x53B18E: mov     ds:0B431A8h, eax
0x53B193: fstp    [esp+24h+var_14]
0x53B197: mov     edx, [esp+24h+var_14]
0x53B19B: fld1
0x53B19D: mov     ds:0B431ACh, ecx
0x53B1A3: fst     [esp+24h+var_10]
0x53B1A7: mov     ds:0B431B0h, edx
0x53B1AD: mov     eax, [esp+24h+var_10]
0x53B1B1: mov     ds:0B431B4h, eax
0x53B1B6: fld     dword ptr [esi+48h]
0x53B1B9: fstp    dword ptr [esp+24h+a2]
0x53B1BD: mov     ecx, dword ptr [esp+24h+a2]
0x53B1C1: fld     dword ptr [esi+4Ch]
0x53B1C4: fstp    dword ptr [esp+24h+a2+4]
0x53B1C8: mov     edx, dword ptr [esp+24h+a2+4]
0x53B1CC: fld     dword ptr [esi+50h]
0x53B1CF: mov     ds:0B431B8h, ecx
0x53B1D5: fstp    [esp+24h+var_14]
0x53B1D9: mov     eax, [esp+24h+var_14]
0x53B1DD: mov     ds:0B431BCh, edx
0x53B1E3: fst     [esp+24h+var_10]
0x53B1E7: mov     ecx, [esp+24h+var_10]
0x53B1EB: mov     ds:0B431C0h, eax
0x53B1F0: mov     ds:0B431C4h, ecx
0x53B1F6: fld     dword ptr [esi+48h]
0x53B1F9: fstp    dword ptr [esp+24h+a2]
0x53B1FD: fld     dword ptr [esi+4Ch]
0x53B200: fstp    dword ptr [esp+24h+a2+4]
0x53B204: fld     dword ptr [esi+50h]
0x53B207: jmp     loc_53B2B0
0x53B20C: fld     dword ptr [esi+9Ch]
0x53B212: fstp    dword ptr [esp+24h+a2]
0x53B216: mov     eax, dword ptr [esp+24h+a2]
0x53B21A: fld     dword ptr [esi+0A0h]
0x53B220: fstp    dword ptr [esp+24h+a2+4]
0x53B224: mov     ecx, dword ptr [esp+24h+a2+4]
0x53B228: fld     dword ptr [esi+0A4h]
0x53B22E: mov     ds:0B431A8h, eax
0x53B233: fstp    [esp+24h+var_14]
0x53B237: mov     edx, [esp+24h+var_14]
0x53B23B: fld1
0x53B23D: mov     ds:0B431ACh, ecx
0x53B243: fst     [esp+24h+var_10]
0x53B247: mov     ds:0B431B0h, edx
0x53B24D: mov     eax, [esp+24h+var_10]
0x53B251: mov     ds:0B431B4h, eax
0x53B256: fld     dword ptr [esi+90h]
0x53B25C: fstp    dword ptr [esp+24h+a2]
0x53B260: mov     ecx, dword ptr [esp+24h+a2]
0x53B264: fld     dword ptr [esi+94h]
0x53B26A: fstp    dword ptr [esp+24h+a2+4]
0x53B26E: mov     edx, dword ptr [esp+24h+a2+4]
0x53B272: fld     dword ptr [esi+98h]
0x53B278: mov     ds:0B431B8h, ecx
0x53B27E: fstp    [esp+24h+var_14]
0x53B282: mov     eax, [esp+24h+var_14]
0x53B286: mov     ds:0B431BCh, edx
0x53B28C: fst     [esp+24h+var_10]
0x53B290: mov     ecx, [esp+24h+var_10]
0x53B294: mov     ds:0B431C0h, eax
0x53B299: mov     ds:0B431C4h, ecx
0x53B29F: fld     dword ptr [esi+3Ch]
0x53B2A2: fstp    dword ptr [esp+24h+a2]
0x53B2A6: fld     dword ptr [esi+40h]
0x53B2A9: fstp    dword ptr [esp+24h+a2+4]
0x53B2AD: fld     dword ptr [esi+44h]
0x53B2B0: mov     edx, dword ptr [esp+24h+a2]
0x53B2B4: fstp    [esp+24h+var_14]
0x53B2B8: mov     ecx, [esp+24h+var_14]
0x53B2BC: mov     eax, dword ptr [esp+24h+a2+4]
0x53B2C0: fstp    [esp+24h+var_10]
0x53B2C4: mov     ds:0B431C8h, edx
0x53B2CA: mov     edx, [esp+24h+var_10]
0x53B2CE: mov     ds:0B431D4h, edx
0x53B2D4: mov     ds:0B431D0h, ecx
0x53B2DA: mov     ds:0B431CCh, eax
0x53B2DF: mov     ecx, [edi+0Ch]
0x53B2E2: test    ecx, ecx
0x53B2E4: jz      short loc_53B34F
0x53B2E6: fld     dword ptr [esi+0CCh]
0x53B2EC: fld     dword ptr [esi+0C8h]
0x53B2F2: fcompp
0x53B2F4: fnstsw  ax
0x53B2F6: test    ah, 5
0x53B2F9: jp      short loc_53B2FF
0x53B2FB: mov     al, 1
0x53B2FD: jmp     short loc_53B301
0x53B2FF: xor     al, al
0x53B301: test    al, al
0x53B303: jz      short loc_53B30C
0x53B305: or      word ptr [ecx+18h], 1
0x53B30A: jmp     short loc_53B312
0x53B30C: and     word ptr [ecx+18h], 0FFFEh
0x53B312: cmp     byte ptr [edi+18h], 0
0x53B316: jz      short loc_53B335
0x53B318: fld     dword ptr [esi+0CCh]
0x53B31E: mov     eax, [edi+0Ch]
0x53B321: fstp    [esp+24h+arg_0]
0x53B325: fld     dword ptr [esi+0C8h]
0x53B32B: fstp    dword ptr [eax+2Ch]
0x53B32E: fld     [esp+24h+arg_0]
0x53B332: fstp    dword ptr [eax+30h]
0x53B335: mov     eax, [edi+0Ch]
0x53B338: mov     edx, [esi+48h]
0x53B33B: lea     ecx, [esi+48h]
0x53B33E: add     eax, 20h ; ' '
0x53B341: mov     [eax], edx
0x53B343: mov     edx, [ecx+4]
0x53B346: mov     [eax+4], edx
0x53B349: mov     ecx, [ecx+8]
0x53B34C: mov     [eax+8], ecx
0x53B34F: cmp     byte ptr [edi+18h], 0
0x53B353: jz      short loc_53B3BC
0x53B355: mov     ecx, ds:0B333CCh; this
0x53B35B: call    GetFarPlane
0x53B360: fstp    [esp+24h+arg_0]
0x53B364: mov     edx, ds:0B333CCh
0x53B36A: mov     edx, [edx+0DCh]
0x53B370: test    edx, edx
0x53B372: jz      short loc_53B3BC
0x53B374: fld     [esp+24h+arg_0]
0x53B378: lea     esi, [edx+0ECh]
0x53B37E: mov     ecx, 7
0x53B383: fld     st
0x53B385: lea     edi, [esp+24h+a2]
0x53B389: rep movsd
0x53B38B: fld     [esp+24h+var_8]
0x53B38F: fucompp
0x53B391: fnstsw  ax
0x53B393: test    ah, 44h
0x53B396: jnp     short loc_53B3BA
0x53B398: fst     [esp+24h+var_8]
0x53B39C: lea     eax, [esp+24h+a2]
0x53B3A0: fdiv    [esp+24h+var_C]
0x53B3A4: push    eax; a2
0x53B3A5: mov     ecx, edx; this
0x53B3A7: fstp    dword ptr [edx+10Ch]
0x53B3AD: call    Camera_SetFrustum
0x53B3B2: pop     edi
0x53B3B3: pop     esi
0x53B3B4: add     esp, 1Ch
0x53B3B7: retn    8
0x53B3BA: fstp    st
0x53B3BC: pop     edi
0x53B3BD: pop     esi
0x53B3BE: add     esp, 1Ch
0x53B3C1: retn    8
