0x4F86A0: fldz
0x4F86A2: push    esi
0x4F86A3: mov     esi, [esp+4+arg_0]
0x4F86A7: test    esi, esi
0x4F86A9: push    edi
0x4F86AA: mov     edi, [esp+8+arg_C]
0x4F86AE: fstp    qword ptr [edi]
0x4F86B0: jz      short loc_4F870F
0x4F86B2: mov     eax, [esi]
0x4F86B4: mov     edx, [eax+190h]
0x4F86BA: mov     ecx, esi
0x4F86BC: call    edx
0x4F86BE: test    al, al
0x4F86C0: jz      short loc_4F870F
0x4F86C2: cmp     byte ptr [esi+0D8h], 0
0x4F86C9: jz      short loc_4F870F
0x4F86CB: mov     ecx, esi; this
0x4F86CD: call    TESObjectREFR_GetParentCell
0x4F86D2: test    eax, eax
0x4F86D4: jz      short loc_4F870F
0x4F86D6: mov     ecx, esi; this
0x4F86D8: call    TESObjectREFR_GetParentCell
0x4F86DD: mov     ecx, eax; this
0x4F86DF: call    TESObjectCELL__GetWaterForm
0x4F86E4: test    eax, eax
0x4F86E6: jz      short loc_4F870F
0x4F86E8: mov     ecx, esi; this
0x4F86EA: call    TESObjectREFR_GetParentCell
0x4F86EF: mov     ecx, eax; this
0x4F86F1: call    TESObjectCELL__GetWaterForm
0x4F86F6: mov     edx, [eax]
0x4F86F8: mov     ecx, eax
0x4F86FA: mov     eax, [edx+88h]
0x4F8700: call    eax
0x4F8702: test    al, al
0x4F8704: mov     al, 1
0x4F8706: jz      short loc_4F8711
0x4F8708: fld1
0x4F870A: fstp    qword ptr [edi]
0x4F870C: pop     edi
0x4F870D: pop     esi
0x4F870E: retn
0x4F870F: mov     al, 1
0x4F8711: pop     edi
0x4F8712: pop     esi
0x4F8713: retn
