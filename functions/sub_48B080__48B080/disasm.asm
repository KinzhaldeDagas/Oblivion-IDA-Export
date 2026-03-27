0x48B080: mov     eax, [esp+arg_10]
0x48B084: sub     esp, 54h
0x48B087: test    eax, eax
0x48B089: push    esi
0x48B08A: mov     esi, [esp+58h+arg_0]
0x48B08E: jz      short loc_48B0A5
0x48B090: fld     dword ptr [eax]
0x48B092: fstp    [esp+58h+var_54]
0x48B096: fld     dword ptr [eax+4]
0x48B099: fstp    [esp+58h+var_50]
0x48B09D: fld     dword ptr [eax+8]
0x48B0A0: jmp     loc_48B146
0x48B0A5: mov     eax, [esi]
0x48B0A7: mov     edx, [eax+174h]
0x48B0AD: mov     ecx, esi
0x48B0AF: call    edx
0x48B0B1: mov     ecx, [eax]
0x48B0B3: mov     [esp+58h+var_54], ecx
0x48B0B7: mov     edx, [eax+4]
0x48B0BA: mov     ecx, [esi+20h]
0x48B0BD: mov     [esp+58h+var_50], edx
0x48B0C1: mov     eax, [eax+8]
0x48B0C4: mov     edx, [esi+24h]
0x48B0C7: mov     [esp+58h+var_4C], eax
0x48B0CB: mov     eax, [esi+28h]
0x48B0CE: sub     esp, 0Ch
0x48B0D1: mov     [esp+64h+var_40], eax
0x48B0D5: fld     [esp+64h+var_40]
0x48B0D9: fstp    [esp+64h+var_5C]; float
0x48B0DD: mov     [esp+64h+var_44], edx
0x48B0E1: fld     [esp+64h+var_44]
0x48B0E5: mov     [esp+64h+var_48], ecx
0x48B0E9: fstp    [esp+64h+var_60]; float
0x48B0ED: lea     ecx, [esp+64h+var_24]
0x48B0F1: fld     [esp+64h+var_48]
0x48B0F5: fstp    [esp+64h+var_64]; float
0x48B0F8: call    sub_711580
0x48B0FD: fldz
0x48B0FF: lea     ecx, [esp+58h+var_3C]
0x48B103: fstp    [esp+58h+var_3C]
0x48B107: push    ecx
0x48B108: fld     dword ptr ds:0A3D8F0h
0x48B10E: lea     edx, [esp+5Ch+var_48]
0x48B112: fstp    [esp+5Ch+var_38]
0x48B116: push    edx
0x48B117: fld     dword ptr ds:0A37CC8h
0x48B11D: lea     ecx, [esp+60h+var_24]
0x48B121: fstp    [esp+60h+var_34]
0x48B125: call    sub_7101F0
0x48B12A: fld     dword ptr [eax]
0x48B12C: fadd    [esp+58h+var_54]
0x48B130: fstp    [esp+58h+var_54]
0x48B134: fld     dword ptr [eax+4]
0x48B137: fadd    [esp+58h+var_50]
0x48B13B: fstp    [esp+58h+var_50]
0x48B13F: fld     dword ptr [eax+8]
0x48B142: fadd    [esp+58h+var_4C]
0x48B146: mov     eax, [esp+58h+arg_14]
0x48B14A: fstp    [esp+58h+var_4C]
0x48B14E: test    eax, eax
0x48B150: jnz     short loc_48B15E
0x48B152: test    esi, esi
0x48B154: lea     eax, [esi+20h]
0x48B157: jnz     short loc_48B15E
0x48B159: mov     eax, offset Vector3_InitValue?
0x48B15E: mov     ecx, [eax]
0x48B160: mov     edx, [eax+4]
0x48B163: mov     eax, [eax+8]
0x48B166: mov     [esp+58h+var_30], ecx
0x48B16A: mov     ecx, [esp+58h+arg_C]
0x48B16E: push    ecx
0x48B16F: mov     ecx, esi; this
0x48B171: mov     [esp+5Ch+var_2C], edx
0x48B175: mov     [esp+5Ch+var_28], eax
0x48B179: call    TESObjectREFR_GetWorldSpace
0x48B17E: push    eax
0x48B17F: mov     ecx, esi; this
0x48B181: call    TESObjectREFR_GetParentCell
0x48B186: mov     ecx, [esp+60h+arg_4]
0x48B18A: push    eax
0x48B18B: lea     edx, [esp+64h+var_30]
0x48B18F: push    edx
0x48B190: lea     eax, [esp+68h+var_54]
0x48B194: push    eax
0x48B195: push    ecx
0x48B196: mov     ecx, ds:0B33A98h
0x48B19C: call    TESDataHandler_PlaceObjectRef
0x48B1A1: mov     esi, eax
0x48B1A3: mov     eax, [esp+58h+arg_8]
0x48B1A7: cmp     eax, 1
0x48B1AA: jle     short loc_48B1B5
0x48B1AC: push    eax
0x48B1AD: lea     ecx, [esi+44h]
0x48B1B0: call    ExtraDataList_SetExtraCount
0x48B1B5: mov     edx, [esi]
0x48B1B7: mov     eax, [edx+40h]
0x48B1BA: push    20h ; ' '
0x48B1BC: mov     ecx, esi
0x48B1BE: call    eax
0x48B1C0: mov     eax, esi
0x48B1C2: pop     esi
0x48B1C3: add     esp, 54h
0x48B1C6: retn    18h
