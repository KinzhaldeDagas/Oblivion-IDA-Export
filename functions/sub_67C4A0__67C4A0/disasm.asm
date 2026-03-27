0x67C4A0: sub     esp, 24h
0x67C4A3: push    ebx
0x67C4A4: mov     ebx, ecx
0x67C4A6: mov     eax, [ebx+3Ch]
0x67C4A9: mov     edx, [eax+18h]
0x67C4AC: mov     ecx, [eax+14h]
0x67C4AF: add     eax, 14h
0x67C4B2: mov     eax, [eax+8]
0x67C4B5: push    esi
0x67C4B6: push    edi
0x67C4B7: mov     edi, [esp+30h+arg_4]
0x67C4BB: mov     [esp+30h+var_14], edx
0x67C4BF: mov     edx, [edi]
0x67C4C1: mov     [esp+30h+var_18], ecx
0x67C4C5: mov     [esp+30h+var_10], eax
0x67C4C9: mov     eax, [edx+174h]
0x67C4CF: mov     ecx, edi
0x67C4D1: call    eax
0x67C4D3: mov     ecx, [eax]
0x67C4D5: mov     edx, [eax+4]
0x67C4D8: mov     eax, [eax+8]
0x67C4DB: mov     [esp+30h+var_24], ecx
0x67C4DF: mov     ecx, edi; this
0x67C4E1: mov     [esp+30h+var_20], edx
0x67C4E5: mov     [esp+30h+var_1C], eax
0x67C4E9: call    TESObjectREFR_GetParentCell
0x67C4EE: test    eax, eax
0x67C4F0: jz      short loc_67C50C
0x67C4F2: mov     ecx, edi; this
0x67C4F4: call    TESObjectREFR_GetParentCell
0x67C4F9: mov     ecx, eax; this
0x67C4FB: call    TESObjectCELL_IsInterior
0x67C500: test    al, al
0x67C502: jz      short loc_67C50C
0x67C504: fld     dword ptr ds:0B36B20h
0x67C50A: jmp     short loc_67C512
0x67C50C: fld     dword ptr ds:0B36B10h
0x67C512: cmp     [esp+30h+arg_8], 0
0x67C517: fadd    st, st
0x67C519: mov     esi, [esp+30h+arg_0]
0x67C51D: fadd    qword ptr ds:0A2FC68h
0x67C523: fstp    [esp+30h+arg_4]
0x67C527: jz      short loc_67C54B
0x67C529: fld     [esp+30h+var_18]
0x67C52D: fsub    [esp+30h+var_24]
0x67C531: fstp    [esp+30h+var_C]
0x67C535: fld     [esp+30h+var_14]
0x67C539: fsub    [esp+30h+var_20]
0x67C53D: fstp    [esp+30h+var_8]
0x67C541: fld     [esp+30h+var_10]
0x67C545: fsub    [esp+30h+var_1C]
0x67C549: jmp     short loc_67C56B
0x67C54B: fld     [esp+30h+var_24]
0x67C54F: fsub    [esp+30h+var_18]
0x67C553: fstp    [esp+30h+var_C]
0x67C557: fld     [esp+30h+var_20]
0x67C55B: fsub    [esp+30h+var_14]
0x67C55F: fstp    [esp+30h+var_8]
0x67C563: fld     [esp+30h+var_1C]
0x67C567: fsub    [esp+30h+var_10]
0x67C56B: mov     ecx, [esp+30h+var_C]
0x67C56F: fstp    [esp+30h+var_4]
0x67C573: mov     edx, [esp+30h+var_8]
0x67C577: mov     eax, [esp+30h+var_4]
0x67C57B: mov     [esi], ecx
0x67C57D: mov     [esi+4], edx
0x67C580: mov     ecx, esi
0x67C582: mov     [esi+8], eax
0x67C585: call    sub_43F350
0x67C58A: fstp    st
0x67C58C: fld     dword ptr [esi]
0x67C58E: fld     [esp+30h+arg_4]
0x67C592: fld     st
0x67C594: fmulp   st(2), st
0x67C596: fxch    st(1)
0x67C598: fstp    [esp+30h+var_C]
0x67C59C: fld     dword ptr [esi+4]
0x67C59F: fmul    st, st(1)
0x67C5A1: fstp    [esp+30h+var_8]
0x67C5A5: fmul    dword ptr [esi+8]
0x67C5A8: fstp    [esp+30h+var_4]
0x67C5AC: fld     [esp+30h+var_C]
0x67C5B0: fadd    [esp+30h+var_24]
0x67C5B4: fstp    [esp+30h+var_18]
0x67C5B8: mov     ecx, [esp+30h+var_18]
0x67C5BC: fld     [esp+30h+var_8]
0x67C5C0: mov     [esi], ecx
0x67C5C2: fadd    [esp+30h+var_20]
0x67C5C6: mov     ecx, edi; this
0x67C5C8: fstp    [esp+30h+var_14]
0x67C5CC: mov     edx, [esp+30h+var_14]
0x67C5D0: fld     [esp+30h+var_4]
0x67C5D4: mov     [esi+4], edx
0x67C5D7: fadd    [esp+30h+var_1C]
0x67C5DB: fstp    [esp+30h+var_10]
0x67C5DF: mov     eax, [esp+30h+var_10]
0x67C5E3: mov     [esi+8], eax
0x67C5E6: call    TESObjectREFR_GetParentCell
0x67C5EB: test    eax, eax
0x67C5ED: jz      short loc_67C640
0x67C5EF: mov     ecx, edi; this
0x67C5F1: call    TESObjectREFR_GetParentCell
0x67C5F6: mov     ecx, eax; this
0x67C5F8: call    TESObjectCELL_IsInterior
0x67C5FD: test    al, al
0x67C5FF: jz      short loc_67C640
0x67C601: mov     ecx, edi; this
0x67C603: call    TESObjectREFR_GetParentCell
0x67C608: mov     ecx, [esi]
0x67C60A: mov     edx, [esi+4]
0x67C60D: push    0; int
0x67C60F: push    0; float
0x67C611: push    0; float
0x67C613: push    eax; int
0x67C614: sub     esp, 0Ch
0x67C617: mov     eax, esp
0x67C619: mov     [eax], ecx
0x67C61B: mov     ecx, [esi+8]
0x67C61E: mov     [eax+4], edx
0x67C621: lea     edx, [esp+4Ch+var_C]
0x67C625: mov     [eax+8], ecx
0x67C628: push    edx; int
0x67C629: mov     ecx, edi
0x67C62B: call    sub_5E2E20
0x67C630: mov     ecx, [eax]
0x67C632: mov     [esi], ecx
0x67C634: mov     edx, [eax+4]
0x67C637: mov     [esi+4], edx
0x67C63A: mov     eax, [eax+8]
0x67C63D: mov     [esi+8], eax
0x67C640: mov     ecx, [esi]
0x67C642: mov     [ebx+44h], ecx
0x67C645: mov     edx, [esi+4]
0x67C648: mov     [ebx+48h], edx
0x67C64B: mov     eax, [esi+8]
0x67C64E: mov     [ebx+4Ch], eax
0x67C651: pop     edi
0x67C652: mov     eax, esi
0x67C654: pop     esi
0x67C655: pop     ebx
0x67C656: add     esp, 24h
0x67C659: retn    0Ch
