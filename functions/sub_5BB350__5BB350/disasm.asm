0x5BB350: sub     esp, 14h
0x5BB353: push    3FFh
0x5BB358: call    Menu_GetOpenMenuTile
0x5BB35D: add     esp, 4
0x5BB360: test    eax, eax
0x5BB362: jz      loc_5BB6B6
0x5BB368: push    esi; a3
0x5BB369: mov     ecx, eax
0x5BB36B: call    Tile_GetParentMenu
0x5BB370: mov     esi, eax
0x5BB372: call    sub_578D70
0x5BB377: movsx   eax, al
0x5BB37A: cmp     eax, 1
0x5BB37D: jnz     loc_5BB626
0x5BB383: cmp     byte ptr [esi+0DCh], 0
0x5BB38A: jnz     loc_5BB56D
0x5BB390: mov     eax, ds:0B3F9A8h
0x5BB395: fld     dword ptr [esi+0D4h]
0x5BB39B: mov     ecx, ds:0B3F9ACh
0x5BB3A1: mov     edx, [esi+98h]
0x5BB3A7: test    edx, edx
0x5BB3A9: mov     [esp+18h+var_C], eax
0x5BB3AD: fstp    [esp+18h+var_C]
0x5BB3B1: fld     dword ptr [esi+0D8h]
0x5BB3B7: mov     eax, [esi+0A0h]
0x5BB3BD: mov     [esp+18h+var_8], ecx
0x5BB3C1: fstp    [esp+18h+var_8]
0x5BB3C5: fld     [esp+18h+var_C]
0x5BB3C9: mov     ecx, ds:0B3F9B0h
0x5BB3CF: fild    dword ptr [esi+98h]
0x5BB3D5: mov     [esp+18h+var_10], eax
0x5BB3D9: jge     short loc_5BB3E1
0x5BB3DB: fadd    dword ptr ds:0A2FC78h
0x5BB3E1: fdivp   st(1), st
0x5BB3E3: mov     edx, [esi+0A4h]
0x5BB3E9: sub     edx, eax
0x5BB3EB: mov     eax, [esi+0A8h]
0x5BB3F1: mov     [esp+18h+a3], edx
0x5BB3F5: mov     edx, [esi+9Ch]
0x5BB3FB: test    edx, edx
0x5BB3FD: fimul   [esp+18h+a3]
0x5BB401: mov     [esp+18h+a3], eax; a3
0x5BB405: fiadd   [esp+18h+var_10]
0x5BB409: fstp    [esp+18h+var_C]
0x5BB40D: fld     [esp+18h+var_8]
0x5BB411: fild    dword ptr [esi+9Ch]
0x5BB417: jge     short loc_5BB41F
0x5BB419: fadd    dword ptr ds:0A2FC78h
0x5BB41F: fdivp   st(1), st
0x5BB421: sub     eax, [esi+0ACh]
0x5BB427: mov     edx, [esp+18h+var_C]
0x5BB42B: mov     [esp+18h+var_10], eax
0x5BB42F: mov     eax, ds:0B333C4h
0x5BB434: mov     [eax+62Ch], edx
0x5BB43A: add     eax, 62Ch
0x5BB43F: fsub    qword ptr ds:0A2F928h
0x5BB445: fchs
0x5BB447: fimul   [esp+18h+var_10]
0x5BB44B: fisub   [esp+18h+a3]
0x5BB44F: fchs
0x5BB451: fstp    [esp+18h+var_8]
0x5BB455: mov     edx, [esp+18h+var_8]
0x5BB459: mov     [eax+4], edx
0x5BB45C: mov     [eax+8], ecx
0x5BB45F: mov     ecx, ds:0B333C4h
0x5BB465: mov     eax, [esi+0D0h]
0x5BB46B: mov     [ecx+638h], eax
0x5BB471: mov     ecx, ds:0B333C4h
0x5BB477: call    sub_663D30
0x5BB47C: fld     [esp+18h+var_C]
0x5BB480: mov     eax, [esi+0A0h]
0x5BB486: mov     edx, [esi+0A4h]
0x5BB48C: mov     [esp+18h+var_10], eax
0x5BB490: fisub   [esp+18h+var_10]
0x5BB494: sub     edx, eax
0x5BB496: mov     eax, [esi+98h]
0x5BB49C: test    eax, eax
0x5BB49E: mov     [esp+18h+var_10], edx
0x5BB4A2: fidiv   [esp+18h+var_10]
0x5BB4A6: fild    dword ptr [esi+98h]
0x5BB4AC: jge     short loc_5BB4B4
0x5BB4AE: fadd    dword ptr ds:0A2FC78h
0x5BB4B4: mov     eax, [esi+0A8h]
0x5BB4BA: fmulp   st(1), st
0x5BB4BC: mov     ecx, [esi+9Ch]
0x5BB4C2: mov     [esp+18h+var_10], eax
0x5BB4C6: sub     eax, [esi+0ACh]
0x5BB4CC: fstp    [esp+18h+var_C]; a3
0x5BB4D0: test    ecx, ecx
0x5BB4D2: fild    [esp+18h+var_10]
0x5BB4D6: mov     [esp+18h+var_10], eax; a3
0x5BB4DA: fsub    [esp+18h+var_8]
0x5BB4DE: fidiv   [esp+18h+var_10]
0x5BB4E2: fld1
0x5BB4E4: fsubrp  st(1), st
0x5BB4E6: fild    dword ptr [esi+9Ch]
0x5BB4EC: jge     short loc_5BB4F4
0x5BB4EE: fadd    qword ptr ds:0A30E60h
0x5BB4F4: fmulp   st(1), st
0x5BB4F6: push    ecx
0x5BB4F7: mov     ecx, [esi+0E0h]; this
0x5BB4FD: fstp    [esp+1Ch+var_8]
0x5BB501: fld     [esp+1Ch+var_C]
0x5BB505: fstp    [esp+1Ch+a2]; a3
0x5BB508: push    0FAFh; a2
0x5BB50D: call    Tile_SetFloat
0x5BB512: fld     [esp+18h+var_8]
0x5BB516: push    ecx
0x5BB517: mov     ecx, [esi+0E0h]; this
0x5BB51D: fstp    [esp+1Ch+a2]; a3
0x5BB520: push    0FB0h; a2
0x5BB525: call    Tile_SetFloat
0x5BB52A: fld     dword ptr ds:0A40098h
0x5BB530: push    ecx
0x5BB531: mov     ecx, [esi+0E0h]; this
0x5BB537: fstp    [esp+1Ch+a2]; a3
0x5BB53A: push    0FA7h; a2
0x5BB53F: call    Tile_SetFloat
0x5BB544: fld     dword ptr ds:0A379B4h
0x5BB54A: push    ecx
0x5BB54B: mov     ecx, [esi+0E0h]; this
0x5BB551: fstp    [esp+1Ch+a2]; a3
0x5BB554: push    0FB6h; a2
0x5BB559: call    Tile_SetFloat
0x5BB55E: mov     ecx, [esi+4]
0x5BB561: push    0; float
0x5BB563: call    sub_58FBA0
0x5BB568: pop     esi
0x5BB569: add     esp, 14h
0x5BB56C: retn
0x5BB56D: mov     ecx, ds:0B333C4h; this
0x5BB573: push    edi
0x5BB574: call    sub_4D8B90
0x5BB579: test    al, al
0x5BB57B: mov     ecx, ds:0B333C4h; this
0x5BB581: jz      short loc_5BB58A
0x5BB583: call    TESObjectREFR_GetParentCell
0x5BB588: jmp     short loc_5BB58F
0x5BB58A: call    TESObjectREFR_GetWorldSpace
0x5BB58F: mov     edx, ds:0B3F9A8h
0x5BB595: fld     dword ptr [esi+0D4h]
0x5BB59B: mov     ecx, ds:0B3F9B0h
0x5BB5A1: mov     edi, eax
0x5BB5A3: mov     eax, ds:0B3F9ACh
0x5BB5A8: mov     [esp+1Ch+var_C], edx
0x5BB5AC: fstp    [esp+1Ch+var_C]
0x5BB5B0: fld     dword ptr [esi+0D8h]
0x5BB5B6: mov     [esp+1Ch+var_8], eax
0x5BB5BA: lea     edx, [esp+1Ch+var_8]
0x5BB5BE: fstp    [esp+1Ch+var_8]
0x5BB5C2: push    edx
0x5BB5C3: lea     eax, [esp+20h+var_C]
0x5BB5C7: mov     [esp+20h+var_4], ecx
0x5BB5CB: push    eax
0x5BB5CC: mov     ecx, esi
0x5BB5CE: call    sub_5B7180
0x5BB5D3: mov     eax, ds:0B333C4h
0x5BB5D8: mov     ecx, [esp+1Ch+var_C]
0x5BB5DC: mov     edx, [esp+1Ch+var_8]
0x5BB5E0: mov     [eax+62Ch], ecx
0x5BB5E6: mov     ecx, [esp+1Ch+var_4]
0x5BB5EA: add     eax, 62Ch
0x5BB5EF: mov     [eax+4], edx
0x5BB5F2: mov     [eax+8], ecx
0x5BB5F5: mov     edx, ds:0B333C4h
0x5BB5FB: mov     [edx+638h], edi
0x5BB601: mov     ecx, ds:0B333C4h
0x5BB607: call    sub_663D30
0x5BB60C: push    0
0x5BB60E: call    sub_5BA4D0
0x5BB613: mov     ecx, [esi+4]
0x5BB616: add     esp, 4
0x5BB619: pop     edi
0x5BB61A: push    0; float
0x5BB61C: call    sub_58FBA0
0x5BB621: pop     esi
0x5BB622: add     esp, 14h
0x5BB625: retn
0x5BB626: cmp     eax, 3
0x5BB629: jnz     loc_5BB6B5
0x5BB62F: mov     eax, ds:0B333C4h
0x5BB634: mov     ecx, ds:0B3F9A8h
0x5BB63A: mov     [eax+62Ch], ecx
0x5BB640: mov     edx, ds:0B3F9ACh
0x5BB646: add     eax, 62Ch
0x5BB64B: mov     [eax+4], edx
0x5BB64E: mov     ecx, ds:0B3F9B0h
0x5BB654: mov     [eax+8], ecx
0x5BB657: mov     edx, ds:0B333C4h
0x5BB65D: mov     dword ptr [edx+638h], 0
0x5BB667: mov     ecx, ds:0B333C4h
0x5BB66D: call    sub_663D30
0x5BB672: mov     ecx, [esi+0E0h]; this
0x5BB678: test    ecx, ecx
0x5BB67A: jz      short loc_5BB6A2
0x5BB67C: fldz
0x5BB67E: push    ecx
0x5BB67F: fstp    [esp+1Ch+a2]; a3
0x5BB682: push    0FA7h; a2
0x5BB687: call    Tile_SetFloat
0x5BB68C: fld1
0x5BB68E: push    ecx
0x5BB68F: fstp    [esp+1Ch+a2]; a3
0x5BB692: mov     ecx, [esi+0E0h]; this
0x5BB698: push    0FB6h; a2
0x5BB69D: call    Tile_SetFloat
0x5BB6A2: cmp     byte ptr [esi+0DCh], 0
0x5BB6A9: jz      short loc_5BB6B5
0x5BB6AB: push    0
0x5BB6AD: call    sub_5BA4D0
0x5BB6B2: add     esp, 4
0x5BB6B5: pop     esi
0x5BB6B6: add     esp, 14h
0x5BB6B9: retn
