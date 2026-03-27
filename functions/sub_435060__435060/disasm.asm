0x435060: sub     esp, 6Ch
0x435063: push    ebx
0x435064: push    ebp
0x435065: push    esi
0x435066: mov     ebp, ecx
0x435068: mov     ecx, [esp+78h+arg_0]
0x43506C: push    edi
0x43506D: call    sub_434B40
0x435072: mov     ecx, eax
0x435074: call    sub_700900
0x435079: mov     esi, eax
0x43507B: push    esi
0x43507C: call    sub_483590
0x435081: mov     edi, [ebp+3Ch]
0x435084: add     esp, 4
0x435087: cmp     edi, esi
0x435089: jz      short loc_4350BC
0x43508B: test    edi, edi
0x43508D: jz      short loc_4350AB
0x43508F: lea     eax, [edi+4]
0x435092: push    eax; lpAddend
0x435093: call    ds:InterlockedDecrement
0x435099: test    eax, eax
0x43509B: jnz     short loc_4350AB
0x43509D: test    edi, edi
0x43509F: jz      short loc_4350AB
0x4350A1: mov     edx, [edi]
0x4350A3: mov     eax, [edx]
0x4350A5: push    1
0x4350A7: mov     ecx, edi
0x4350A9: call    eax
0x4350AB: test    esi, esi
0x4350AD: mov     [ebp+3Ch], esi
0x4350B0: jz      short loc_4350BC
0x4350B2: add     esi, 4
0x4350B5: push    esi; lpAddend
0x4350B6: call    ds:InterlockedIncrement
0x4350BC: mov     ebx, [esp+7Ch+arg_4]
0x4350C3: fld     dword ptr [ebx+18h]
0x4350C6: mov     eax, [ebp+3Ch]
0x4350C9: fabs
0x4350CB: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4350D0: fstp    [esp+7Ch+arg_4]
0x4350D7: lea     edi, [esp+7Ch+var_6C]
0x4350DB: fld     [esp+7Ch+arg_4]
0x4350E2: fstp    dword ptr [eax+60h]
0x4350E5: mov     ecx, [ebx]
0x4350E7: mov     [eax+54h], ecx
0x4350EA: mov     edx, [ebx+4]
0x4350ED: mov     [eax+58h], edx
0x4350F0: mov     ecx, [ebx+8]
0x4350F3: mov     [eax+5Ch], ecx
0x4350F6: fld     dword ptr [ebx+0Ch]
0x4350F9: mov     ecx, 9
0x4350FE: rep movsd
0x435100: push    ecx
0x435101: lea     ecx, [esp+80h+var_48]
0x435105: fstp    [esp+80h+var_80]; float
0x435108: call    NiMatrix33_InitRotationTransposedTransform???
0x43510D: lea     edx, [esp+7Ch+var_48]
0x435111: push    edx
0x435112: lea     eax, [esp+80h+var_24]
0x435116: push    eax
0x435117: lea     ecx, [esp+84h+var_6C]
0x43511B: call    NiMAtrix33_Multiply
0x435120: fld     dword ptr [ebx+10h]
0x435123: mov     esi, eax
0x435125: mov     ecx, 9
0x43512A: lea     edi, [esp+7Ch+var_6C]
0x43512E: rep movsd
0x435130: push    ecx
0x435131: lea     ecx, [esp+80h+var_48]
0x435135: fstp    [esp+80h+var_80]; float
0x435138: call    sub_70FD80
0x43513D: lea     ecx, [esp+7Ch+var_48]
0x435141: push    ecx
0x435142: lea     edx, [esp+80h+var_24]
0x435146: push    edx
0x435147: lea     ecx, [esp+84h+var_6C]
0x43514B: call    NiMAtrix33_Multiply
0x435150: fld     dword ptr [ebx+14h]
0x435153: mov     esi, eax
0x435155: mov     ecx, 9
0x43515A: lea     edi, [esp+7Ch+var_6C]
0x43515E: rep movsd
0x435160: push    ecx
0x435161: lea     ecx, [esp+80h+var_48]
0x435165: fstp    [esp+80h+var_80]; float
0x435168: call    NiMatrix33_InitRotationTransform
0x43516D: lea     eax, [esp+7Ch+var_48]
0x435171: push    eax
0x435172: lea     ecx, [esp+80h+var_24]
0x435176: push    ecx
0x435177: lea     ecx, [esp+84h+var_6C]
0x43517B: call    NiMAtrix33_Multiply
0x435180: mov     esi, eax
0x435182: mov     ecx, 9
0x435187: lea     edi, [esp+7Ch+var_6C]
0x43518B: rep movsd
0x43518D: mov     edi, [ebp+3Ch]
0x435190: push    0
0x435192: add     edi, 30h ; '0'
0x435195: mov     ecx, 9
0x43519A: lea     esi, [esp+80h+var_6C]
0x43519E: push    1
0x4351A0: rep movsd
0x4351A2: mov     edx, [ebp+3Ch]
0x4351A5: push    1
0x4351A7: push    edx
0x4351A8: call    sub_7B8940
0x4351AD: mov     eax, [ebp+3Ch]
0x4351B0: push    1
0x4351B2: push    2000h
0x4351B7: push    eax
0x4351B8: call    sub_7D93E0
0x4351BD: mov     ecx, [esp+98h+arg_0]
0x4351C4: add     esp, 1Ch
0x4351C7: add     ecx, 4
0x4351CA: push    ecx; lpAddend
0x4351CB: call    ds:InterlockedIncrement
0x4351D1: pop     edi
0x4351D2: pop     esi
0x4351D3: pop     ebp
0x4351D4: pop     ebx
0x4351D5: add     esp, 6Ch
0x4351D8: retn    8
