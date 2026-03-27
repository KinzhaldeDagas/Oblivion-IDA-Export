0x655FE0: push    0FFFFFFFFh
0x655FE2: push    offset HighProcess_GetLightLevel?_SEH
0x655FE7: mov     eax, large fs:0
0x655FED: push    eax
0x655FEE: sub     esp, 4Ch
0x655FF1: push    ebx
0x655FF2: push    ebp
0x655FF3: push    esi
0x655FF4: push    edi
0x655FF5: mov     eax, ds:0B30AACh
0x655FFA: xor     eax, esp
0x655FFC: push    eax
0x655FFD: lea     eax, [esp+6Ch+var_C]
0x656001: mov     large fs:0, eax
0x656007: mov     ebx, ecx
0x656009: mov     [esp+6Ch+var_44], ebx
0x65600D: fldz
0x65600F: mov     ecx, [ebx+184h]
0x656015: xor     ebp, ebp
0x656017: fst     [esp+6Ch+var_58]
0x65601B: cmp     ecx, ebp
0x65601D: jz      loc_65621A
0x656023: mov     dword ptr [esp+6Ch+var_40+4], ebp
0x656027: fst     [esp+6Ch+var_58]
0x65602B: fst     [esp+6Ch+var_50]
0x65602F: mov     [esp+6Ch+var_4], ebp
0x656033: fstp    [esp+6Ch+var_4C]
0x656037: call    sub_7ED160
0x65603C: cmp     byte ptr [esp+6Ch+arg_4], 0
0x656041: mov     edi, [esp+6Ch+arg_0]
0x656045: mov     esi, eax
0x656047: mov     [esp+6Ch+var_54], ebp
0x65604B: jz      short loc_65605E
0x65604D: mov     ecx, edi
0x65604F: call    sub_4D7FC0
0x656054: cmp     eax, ebp
0x656056: jz      short loc_65605E
0x656058: mov     eax, [eax]
0x65605A: mov     [esp+6Ch+var_54], eax
0x65605E: cmp     esi, ebp
0x656060: jnz     short loc_65608A
0x656062: mov     ecx, ds:0B333C4h
0x656068: cmp     edi, ecx
0x65606A: jnz     short loc_65608A
0x65606C: push    1
0x65606E: call    PlayerCharacter_GetPlayerNode
0x656073: push    ebp
0x656074: push    eax; float
0x656075: call    sub_7C7050
0x65607A: mov     ecx, [ebx+184h]
0x656080: add     esp, 8
0x656083: call    sub_7ED160
0x656088: mov     esi, eax
0x65608A: mov     eax, [ebx+184h]
0x656090: mov     eax, [eax+1Ch]
0x656093: shr     eax, 1Ch
0x656096: movzx   ecx, al
0x656099: push    ecx
0x65609A: call    GetShadowSceneNode
0x65609F: add     esp, 4
0x6560A2: cmp     eax, ebp
0x6560A4: mov     [esp+6Ch+var_48], eax
0x6560A8: mov     ecx, edi
0x6560AA: jnz     short loc_6560C0
0x6560AC: mov     eax, [edi+3Ch]
0x6560AF: push    eax
0x6560B0: call    sub_5EA1A0
0x6560B5: fldz
0x6560B7: fst     [esp+6Ch+var_58]
0x6560BB: jmp     loc_65621A
0x6560C0: mov     edx, [eax+118h]
0x6560C6: mov     eax, [edi]
0x6560C8: mov     dword ptr [esp+6Ch+var_40], edx
0x6560CC: mov     edx, [eax+174h]
0x6560D2: mov     [esp+6Ch+arg_4], ebp
0x6560D6: call    edx
0x6560D8: mov     ebp, [eax]
0x6560DA: mov     ebx, [eax+4]
0x6560DD: mov     eax, [eax+8]
0x6560E0: mov     edx, [edi]
0x6560E2: mov     edx, [edx+15Ch]
0x6560E8: mov     [esp+6Ch+var_28], eax
0x6560EC: lea     eax, [esp+6Ch+var_24]
0x6560F0: push    eax
0x6560F1: mov     ecx, edi
0x6560F3: call    edx
0x6560F5: fld     dword ptr [eax+8]
0x6560F8: mov     eax, [edi]
0x6560FA: fstp    [esp+6Ch+var_38]
0x6560FE: mov     edx, [eax+158h]
0x656104: lea     ecx, [esp+6Ch+var_18]
0x656108: push    ecx
0x656109: mov     ecx, edi
0x65610B: call    edx
0x65610D: fld     dword ptr [eax+8]
0x656110: cmp     edi, ds:0B333C4h
0x656116: fsubr   [esp+6Ch+var_38]
0x65611A: fsub    qword ptr ds:0A2F928h
0x656120: fstp    [esp+6Ch+arg_0]
0x656124: fld     [esp+6Ch+arg_0]
0x656128: fmul    qword ptr ds:0A2FAA0h
0x65612E: fstp    [esp+6Ch+arg_0]
0x656132: fld     [esp+6Ch+var_28]
0x656136: fadd    [esp+6Ch+arg_0]
0x65613A: fstp    [esp+6Ch+var_28]
0x65613E: jnz     short loc_656177
0x656140: mov     eax, [esp+6Ch+var_54]
0x656144: push    eax; int
0x656145: lea     ecx, [esp+70h+var_4C]
0x656149: push    ecx; float
0x65614A: mov     ecx, [esp+74h+var_28]
0x65614E: lea     edx, [esp+74h+var_50]
0x656152: push    edx; float
0x656153: lea     eax, [esp+78h+arg_4]
0x65615A: push    eax; int
0x65615B: sub     esp, 0Ch
0x65615E: mov     eax, esp
0x656160: mov     [eax], ebp
0x656162: mov     [eax+4], ebx
0x656165: mov     [eax+8], ecx
0x656168: mov     ecx, [esp+88h+var_48]
0x65616C: call    sub_7C6570
0x656171: fstp    [esp+6Ch+var_58]
0x656175: jmp     short loc_6561BF
0x656177: test    esi, esi
0x656179: jz      short loc_6561BF
0x65617B: jmp     short loc_656180
0x65617D: align 10h
0x656180: mov     edx, [esp+6Ch+var_54]
0x656184: mov     ecx, [esp+6Ch+var_28]
0x656188: push    edx; int
0x656189: sub     esp, 0Ch
0x65618C: mov     eax, esp
0x65618E: mov     [eax], ebp
0x656190: mov     [eax+4], ebx
0x656193: mov     [eax+8], ecx
0x656196: mov     ecx, esi
0x656198: call    sub_7D31B0
0x65619D: fadd    [esp+6Ch+var_58]
0x6561A1: mov     edx, [esp+6Ch+var_44]
0x6561A5: mov     ecx, [edx+184h]
0x6561AB: fstp    [esp+6Ch+var_58]
0x6561AF: call    sub_7ED180
0x6561B4: add     [esp+6Ch+arg_4], 1
0x6561B9: mov     esi, eax
0x6561BB: test    esi, esi
0x6561BD: jnz     short loc_656180
0x6561BF: mov     ecx, edi; this
0x6561C1: call    TESObjectREFR_GetParentCell
0x6561C6: test    eax, eax
0x6561C8: jz      short loc_6561E2
0x6561CA: mov     ecx, edi; this
0x6561CC: call    TESObjectREFR_GetParentCell
0x6561D1: mov     ecx, eax; this
0x6561D3: call    TESObjectCELL_IsInterior
0x6561D8: test    al, al
0x6561DA: jz      short loc_6561E2
0x6561DC: fld     [esp+6Ch+var_50]
0x6561E0: jmp     short loc_656202
0x6561E2: mov     ecx, dword ptr [esp+6Ch+var_40]
0x6561E6: test    ecx, ecx
0x6561E8: jz      short loc_65620A
0x6561EA: mov     edx, [esp+6Ch+var_28]
0x6561EE: push    0; int
0x6561F0: sub     esp, 0Ch
0x6561F3: mov     eax, esp
0x6561F5: mov     [eax], ebp
0x6561F7: mov     [eax+4], ebx
0x6561FA: mov     [eax+8], edx
0x6561FD: call    sub_7D31B0
0x656202: fadd    [esp+6Ch+var_58]
0x656206: fstp    [esp+6Ch+var_58]
0x65620A: fld     [esp+6Ch+var_58]
0x65620E: fmul    qword ptr ds:0A309F0h
0x656214: fstp    [esp+6Ch+var_58]
0x656218: fldz
0x65621A: fld     [esp+6Ch+var_58]
0x65621E: fcom    qword ptr ds:0A309F0h
0x656224: fnstsw  ax
0x656226: test    ah, 41h
0x656229: jnz     short loc_65623F
0x65622B: fstp    st(1)
0x65622D: fstp    st
0x65622F: fld     dword ptr ds:0A2FE7Ch
0x656235: fstp    [esp+6Ch+var_58]
0x656239: fld     [esp+6Ch+var_58]
0x65623D: jmp     short loc_656256
0x65623F: fcom    st(1)
0x656241: fnstsw  ax
0x656243: test    ah, 5
0x656246: jp      short loc_656254
0x656248: fstp    st
0x65624A: fstp    [esp+6Ch+var_58]
0x65624E: fld     [esp+6Ch+var_58]
0x656252: jmp     short loc_656256
0x656254: fstp    st(1)
0x656256: mov     ecx, dword ptr [esp+6Ch+var_C]
0x65625A: mov     large fs:0, ecx
0x656261: pop     ecx
0x656262: pop     edi
0x656263: pop     esi
0x656264: pop     ebp
0x656265: pop     ebx
0x656266: add     esp, 58h
0x656269: retn    8
