0x49A200: push    0FFFFFFFFh
0x49A202: push    offset WaterSurfaceLoop_SEH
0x49A207: mov     eax, large fs:0
0x49A20D: push    eax
0x49A20E: sub     esp, 108h
0x49A214: push    ebx
0x49A215: push    ebp
0x49A216: push    esi
0x49A217: push    edi
0x49A218: mov     eax, ds:0B30AACh
0x49A21D: xor     eax, esp
0x49A21F: push    eax
0x49A220: lea     eax, [esp+128h+var_C]
0x49A227: mov     large fs:0, eax
0x49A22D: mov     [esp+128h+var_110], ecx
0x49A231: xor     esi, esi
0x49A233: cmp     byte ptr ds:0B07050h, 0
0x49A23A: mov     [esp+128h+var_FC], esi
0x49A23E: jz      loc_49A889
0x49A244: cmp     byte ptr ds:0B42F3Eh, 0
0x49A24B: jz      loc_49A889
0x49A251: cmp     byte ptr ds:0B070A0h, 0
0x49A258: jz      loc_49A889
0x49A25E: mov     eax, ds:0B333A0h
0x49A263: cmp     [eax+34h], esi
0x49A266: jnz     loc_49A889
0x49A26C: mov     eax, ds:0B06A2Ch
0x49A271: xor     edx, edx
0x49A273: div     dword ptr ds:0B070E0h
0x49A279: mov     [esp+128h+var_104], esi
0x49A27D: mov     [esp+128h+var_108], esi
0x49A281: test    eax, eax
0x49A283: mov     [esp+128h+var_F8], eax
0x49A287: fild    [esp+128h+var_F8]
0x49A28B: jge     short loc_49A293
0x49A28D: fadd    dword ptr ds:0A2FC78h
0x49A293: fstp    [esp+128h+var_114]
0x49A297: sub     esp, 8
0x49A29A: fld     [esp+130h+var_114]
0x49A29E: fstp    qword ptr [esp+130h+var_130]; double
0x49A2A1: call    _floor
0x49A2A6: fstp    [esp+130h+var_114]
0x49A2AA: add     esp, 8
0x49A2AD: fld     [esp+128h+var_114]
0x49A2B1: call    Double_To_SInt32
0x49A2B6: mov     ebp, eax
0x49A2B8: mov     [esp+128h+var_F0], ebp
0x49A2BC: xor     ebx, ebx
0x49A2BE: mov     edi, edi
0x49A2C0: cmp     ebx, ds:0B06A2Ch
0x49A2C6: jnb     short loc_49A324
0x49A2C8: cmp     esi, ds:0B06A2Ch
0x49A2CE: jnb     short loc_49A31D
0x49A2D0: mov     ecx, ds:0B333A0h
0x49A2D6: mov     ecx, [ecx+8]
0x49A2D9: push    esi
0x49A2DA: push    ebx
0x49A2DB: call    GetGridEntry
0x49A2E0: cmp     ebx, ebp
0x49A2E2: mov     edi, eax
0x49A2E4: jl      short loc_49A318
0x49A2E6: cmp     esi, ebp
0x49A2E8: jl      short loc_49A318
0x49A2EA: mov     eax, ds:0B06A2Ch
0x49A2EF: sub     eax, ebp
0x49A2F1: cmp     ebx, eax
0x49A2F3: jnb     short loc_49A318
0x49A2F5: cmp     esi, eax
0x49A2F7: jnb     short loc_49A318
0x49A2F9: test    edi, edi
0x49A2FB: jz      short loc_49A318
0x49A2FD: mov     ecx, [edi]; this
0x49A2FF: test    ecx, ecx
0x49A301: jz      short loc_49A318
0x49A303: call    sub_4CE3C0
0x49A308: test    eax, eax
0x49A30A: jz      short loc_49A318
0x49A30C: mov     edx, [edi]
0x49A30E: movzx   eax, byte ptr [edx+24h]
0x49A312: shr     eax, 1
0x49A314: test    al, 1
0x49A316: jnz     short loc_49A31D
0x49A318: add     esi, 1
0x49A31B: jmp     short loc_49A2C8
0x49A31D: add     ebx, 1
0x49A320: xor     esi, esi
0x49A322: jmp     short loc_49A2C0
0x49A324: mov     ebx, [esp+128h+var_110]
0x49A328: add     ebx, 48h ; 'H'
0x49A32B: cmp     [ebx], esi
0x49A32D: mov     [esp+128h+var_F8], ebx
0x49A331: jnz     short loc_49A34F
0x49A333: mov     ecx, ds:0B43104h
0x49A339: push    0Dh; a3
0x49A33B: push    ecx; a2
0x49A33C: mov     ecx, ds:0B42F50h; this
0x49A342: call    BSTextureManager_GetDefaultRenderTarget
0x49A347: push    eax; a2
0x49A348: mov     ecx, ebx; this
0x49A34A: call    NiSmartPointer_Set??
0x49A34F: movzx   edx, word ptr ds:0B42EACh
0x49A356: push    5
0x49A358: mov     [esp+12Ch+var_10C], edx
0x49A35C: call    sub_7B4890
0x49A361: push    124h; Size
0x49A366: call    FormHeapAlloc
0x49A36B: add     esp, 8
0x49A36E: mov     [esp+128h+var_114], eax
0x49A372: cmp     eax, esi
0x49A374: mov     [esp+128h+var_4], esi
0x49A37B: jz      short loc_49A38C
0x49A37D: mov     ecx, eax
0x49A37F: call    sub_70D590
0x49A384: mov     ebp, eax
0x49A386: mov     [esp+128h+var_100], ebp
0x49A38A: jmp     short loc_49A392
0x49A38C: mov     [esp+128h+var_100], esi
0x49A390: mov     ebp, esi
0x49A392: cmp     ebp, esi
0x49A394: mov     [esp+128h+var_C4], ebp
0x49A398: jz      short loc_49A3A4
0x49A39A: lea     eax, [ebp+4]
0x49A39D: push    eax; lpAddend
0x49A39E: call    dword ptr ds:0A28078h
0x49A3A4: fld     dword ptr ds:0A3F3E0h
0x49A3AA: sub     esp, 0Ch
0x49A3AD: fstp    [esp+134h+var_130+4]; float
0x49A3B1: lea     ecx, [esp+134h+var_C0]
0x49A3B5: fld     dword ptr ds:0A3721Ch
0x49A3BB: mov     [esp+134h+var_4], 1
0x49A3C6: fst     [esp+134h+var_130]; float
0x49A3CA: fstp    [esp+134h+var_134]; float
0x49A3CD: call    sub_711580
0x49A3D2: push    esi
0x49A3D3: lea     ecx, [esp+12Ch+a2]
0x49A3D7: call    NiFrustum__SetOrtho
0x49A3DC: fld     dword ptr ds:0A2FAACh
0x49A3E2: mov     eax, ds:0B070E0h
0x49A3E7: fstp    [esp+128h+var_D0]
0x49A3EB: mov     ecx, eax
0x49A3ED: imul    ecx, 0FFFFF800h
0x49A3F3: mov     [esp+128h+var_114], ecx
0x49A3F7: mov     ecx, ds:0B333A0h
0x49A3FD: fild    [esp+128h+var_114]
0x49A401: shl     eax, 0Bh
0x49A404: mov     [esp+128h+var_C8], 1
0x49A409: fstp    [esp+128h+var_114]
0x49A40D: fld     [esp+128h+var_114]
0x49A411: mov     [esp+128h+var_114], eax
0x49A415: fst     [esp+128h+a2]
0x49A419: fild    [esp+128h+var_114]
0x49A41D: fstp    [esp+128h+var_114]
0x49A421: fld     [esp+128h+var_114]
0x49A425: fst     [esp+128h+var_DC]
0x49A429: fstp    [esp+128h+var_D8]
0x49A42D: fstp    [esp+128h+var_D4]
0x49A431: fld     dword ptr ds:0A3F3DCh
0x49A437: fstp    [esp+128h+var_CC]
0x49A43B: call    TES_GetCurrentCell
0x49A440: test    eax, eax
0x49A442: jz      short loc_49A4B6
0x49A444: mov     ecx, ds:0B333A0h
0x49A44A: call    TES_GetCurrentCell
0x49A44F: mov     esi, eax
0x49A451: mov     ecx, esi; this
0x49A453: call    TESObjectCELL_GetXCoordinate
0x49A458: shl     eax, 0Ch
0x49A45B: add     eax, 800h
0x49A460: mov     [esp+128h+var_114], eax
0x49A464: fild    [esp+128h+var_114]
0x49A468: mov     ecx, esi; this
0x49A46A: fstp    [esp+128h+var_110]
0x49A46E: call    TESObjectCELL_GetYCoordinate
0x49A473: shl     eax, 0Ch
0x49A476: add     eax, 800h
0x49A47B: mov     [esp+128h+var_114], eax
0x49A47F: fild    [esp+128h+var_114]
0x49A483: fstp    [esp+128h+var_114]
0x49A487: fld     [esp+128h+var_110]
0x49A48B: fstp    [esp+128h+var_EC]
0x49A48F: mov     edx, [esp+128h+var_EC]
0x49A493: fld     [esp+128h+var_114]
0x49A497: mov     [ebp+54h], edx
0x49A49A: fstp    [esp+128h+var_E8]
0x49A49E: mov     eax, [esp+128h+var_E8]
0x49A4A2: fld     dword ptr ds:0A3F3D8h
0x49A4A8: mov     [ebp+58h], eax
0x49A4AB: fstp    [esp+128h+var_E4]
0x49A4AF: mov     ecx, [esp+128h+var_E4]
0x49A4B3: mov     [ebp+5Ch], ecx
0x49A4B6: lea     edi, [ebp+30h]
0x49A4B9: mov     ecx, 9
0x49A4BE: lea     esi, [esp+128h+var_C0]
0x49A4C2: lea     edx, [esp+128h+a2]
0x49A4C6: rep movsd
0x49A4C8: push    edx; a2
0x49A4C9: mov     ecx, ebp; this
0x49A4CB: call    Camera_SetFrustum
0x49A4D0: push    0
0x49A4D2: lea     ecx, [esp+12Ch+var_9C]
0x49A4D9: call    NiCullingProcess_NiCullingProcess
0x49A4DE: lea     eax, [esp+128h+a2]
0x49A4E2: push    eax; a2
0x49A4E3: mov     ecx, ebp; this
0x49A4E5: mov     byte ptr [esp+12Ch+var_4], 2
0x49A4ED: call    Camera_SetFrustum
0x49A4F2: fldz
0x49A4F4: push    1; a3
0x49A4F6: push    ecx
0x49A4F7: mov     ecx, ebp; this
0x49A4F9: fstp    [esp+130h+var_130]; a2
0x49A4FC: call    NiAVObject_UpdateNiAVObject
0x49A501: lea     ecx, [ebp+0ECh]
0x49A507: push    ecx; a2
0x49A508: lea     ecx, [esp+12Ch+var_9C]; this
0x49A50F: mov     [esp+12Ch+var_9C.Camera], ebp
0x49A516: call    NiCullingProcess__SetFrustum
0x49A51B: push    3
0x49A51D: call    nullsub_returnTrue_0arg
0x49A522: fild    dword ptr ds:0B070E8h
0x49A528: add     esp, 4
0x49A52B: fstp    dword ptr ds:0B44EE4h
0x49A531: mov     ecx, [ebx]
0x49A533: call    BSRenderedTexture__UseTextureToRender
0x49A538: push    eax; a2
0x49A539: push    7; a1
0x49A53B: call    NiRenderer_BeginScene
0x49A540: mov     ecx, ds:0B3F928h
0x49A546: add     esp, 8
0x49A549: push    ebp
0x49A54A: call    SetCameraViewProj
0x49A54F: mov     ebx, ds:0B3F928h
0x49A555: call    InitBSShaderAccumulator
0x49A55A: mov     esi, [ebx+8]
0x49A55D: mov     edi, eax
0x49A55F: cmp     esi, edi
0x49A561: jz      short loc_49A594
0x49A563: test    esi, esi
0x49A565: jz      short loc_49A583
0x49A567: lea     edx, [esi+4]
0x49A56A: push    edx; lpAddend
0x49A56B: call    dword ptr ds:0A2807Ch
0x49A571: test    eax, eax
0x49A573: jnz     short loc_49A583
0x49A575: test    esi, esi
0x49A577: jz      short loc_49A583
0x49A579: mov     eax, [esi]
0x49A57B: mov     edx, [eax]
0x49A57D: push    1
0x49A57F: mov     ecx, esi
0x49A581: call    edx
0x49A583: test    edi, edi
0x49A585: mov     [ebx+8], edi
0x49A588: jz      short loc_49A594
0x49A58A: add     edi, 4
0x49A58D: push    edi; lpAddend
0x49A58E: call    dword ptr ds:0A28078h
0x49A594: call    InitBSShaderAccumulator
0x49A599: mov     edx, [eax]
0x49A59B: mov     ecx, eax
0x49A59D: mov     eax, [edx+4Ch]
0x49A5A0: push    ebp
0x49A5A1: call    eax
0x49A5A3: call    InitBSShaderAccumulator
0x49A5A8: mov     byte ptr [eax+21E0h], 1
0x49A5AF: mov     eax, ds:0B06A2Ch
0x49A5B4: xor     ebp, ebp
0x49A5B6: cmp     ebp, eax
0x49A5B8: mov     [esp+128h+var_114], ebp
0x49A5BC: jnb     loc_49A732
0x49A5C2: xor     edi, edi
0x49A5C4: cmp     edi, eax
0x49A5C6: mov     [esp+128h+var_110], edi
0x49A5CA: jnb     loc_49A72A
0x49A5D0: mov     ecx, ds:0B333A0h
0x49A5D6: mov     ecx, [ecx+8]
0x49A5D9: push    edi
0x49A5DA: push    ebp
0x49A5DB: call    GetGridEntry
0x49A5E0: mov     ebx, eax
0x49A5E2: mov     edx, [ebx+4]
0x49A5E5: mov     eax, [edx+8]
0x49A5E8: mov     ecx, [eax]
0x49A5EA: push    4
0x49A5EC: call    NiNode_GetNiPropertyByID
0x49A5F1: mov     ecx, [esp+128h+var_F0]
0x49A5F5: cmp     ebp, ecx
0x49A5F7: mov     esi, eax
0x49A5F9: mov     [esp+128h+var_F4], esi
0x49A5FD: jl      loc_49A719
0x49A603: cmp     edi, ecx
0x49A605: jl      loc_49A719
0x49A60B: mov     eax, ds:0B06A2Ch
0x49A610: sub     eax, ecx
0x49A612: cmp     ebp, eax
0x49A614: jnb     loc_49A719
0x49A61A: cmp     edi, eax
0x49A61C: jnb     loc_49A719
0x49A622: mov     ecx, [ebx]; this
0x49A624: test    ecx, ecx
0x49A626: jz      loc_49A719
0x49A62C: call    sub_4CE3C0
0x49A631: test    eax, eax
0x49A633: jz      loc_49A719
0x49A639: mov     ecx, [ebx]
0x49A63B: movzx   edx, byte ptr [ecx+24h]
0x49A63F: shr     edx, 1
0x49A641: test    dl, 1
0x49A644: jz      loc_49A6D9
0x49A64A: mov     byte ptr [esi+72h], 1
0x49A64E: xor     ebp, ebp
0x49A650: mov     ecx, [ebx]
0x49A652: push    0
0x49A654: push    ebp
0x49A655: call    sub_441800
0x49A65A: mov     edi, eax
0x49A65C: cmp     word ptr [edi+0B6h], 0
0x49A664: jbe     short loc_49A6B8
0x49A666: mov     eax, [edi+0B0h]
0x49A66C: mov     ecx, [eax]
0x49A66E: test    ecx, ecx
0x49A670: jz      short loc_49A6B8
0x49A672: push    4
0x49A674: call    NiNode_GetNiPropertyByID
0x49A679: mov     esi, eax
0x49A67B: test    esi, esi
0x49A67D: jz      short loc_49A6B4
0x49A67F: mov     edx, [esi]
0x49A681: mov     eax, [edx+54h]
0x49A684: mov     ecx, esi
0x49A686: call    eax
0x49A688: cmp     eax, 5
0x49A68B: jl      short loc_49A6B4
0x49A68D: mov     edx, [esi]
0x49A68F: mov     eax, [edx+54h]
0x49A692: mov     ecx, esi
0x49A694: call    eax
0x49A696: cmp     eax, 0Ah
0x49A699: jg      short loc_49A6B4
0x49A69B: mov     ecx, [ebx]
0x49A69D: call    TESObjectCELL_GetWaterHeight
0x49A6A2: fadd    qword ptr ds:0A3F3D0h
0x49A6A8: fsubr   qword ptr ds:0A3F3C8h
0x49A6AE: fstp    dword ptr [esi+0A0h]
0x49A6B4: mov     esi, [esp+128h+var_F4]
0x49A6B8: lea     ecx, [esp+128h+var_9C]
0x49A6BF: push    ecx; a2
0x49A6C0: mov     ecx, edi; this
0x49A6C2: call    NiAVObject_Render
0x49A6C7: add     ebp, 1
0x49A6CA: cmp     ebp, 4
0x49A6CD: jl      short loc_49A650
0x49A6CF: mov     edi, [esp+128h+var_110]
0x49A6D3: mov     ebp, [esp+128h+var_114]
0x49A6D7: jmp     short loc_49A6DD
0x49A6D9: mov     byte ptr [esi+72h], 0
0x49A6DD: mov     eax, [esp+128h+var_104]
0x49A6E1: mov     edx, [esp+128h+var_108]
0x49A6E5: mov     [esi+74h], eax
0x49A6E8: mov     [esi+78h], edx
0x49A6EB: mov     ecx, ds:0B070E0h
0x49A6F1: add     eax, 1
0x49A6F4: add     ecx, 0FFFFFFFFh
0x49A6F7: cmp     eax, ecx
0x49A6F9: mov     [esp+128h+var_104], eax
0x49A6FD: jbe     short loc_49A71D
0x49A6FF: add     [esp+128h+var_108], 1
0x49A704: mov     eax, ds:0B06A2Ch
0x49A709: mov     [esp+128h+var_104], 0
0x49A711: add     edi, 1
0x49A714: jmp     loc_49A5C4
0x49A719: mov     byte ptr [esi+72h], 0
0x49A71D: mov     eax, ds:0B06A2Ch
0x49A722: add     edi, 1
0x49A725: jmp     loc_49A5C4
0x49A72A: add     ebp, 1
0x49A72D: jmp     loc_49A5B6
0x49A732: call    InitBSShaderAccumulator
0x49A737: mov     byte ptr [eax+21E1h], 1
0x49A73E: call    InitBSShaderAccumulator
0x49A743: mov     edx, [eax]
0x49A745: mov     ecx, eax
0x49A747: mov     eax, [edx+50h]
0x49A74A: call    eax
0x49A74C: call    NiRenderer_EndScene
0x49A751: mov     ecx, [esp+128h+var_10C]
0x49A755: push    ecx
0x49A756: call    sub_7B4890
0x49A75B: fldz
0x49A75D: push    2
0x49A75F: fstp    dword ptr ds:0B44EE4h
0x49A765: call    nullsub_returnTrue_0arg
0x49A76A: mov     edx, ds:0B333A0h
0x49A770: mov     ecx, [edx+8]
0x49A773: add     esp, 8
0x49A776: push    1
0x49A778: push    1
0x49A77A: call    GetGridEntry
0x49A77F: mov     esi, eax
0x49A781: mov     ecx, [esi]; this
0x49A783: call    TESObjectCELL_GetXCoordinate
0x49A788: shl     eax, 0Ch
0x49A78B: mov     [esp+128h+var_10C], eax
0x49A78F: fild    [esp+128h+var_10C]
0x49A793: fstp    dword ptr ds:0B45EECh
0x49A799: mov     ecx, [esi]; this
0x49A79B: call    TESObjectCELL_GetYCoordinate
0x49A7A0: shl     eax, 0Ch
0x49A7A3: cmp     dword ptr ds:0B45DCCh, 0
0x49A7AA: mov     [esp+128h+var_10C], eax
0x49A7AE: fild    [esp+128h+var_10C]
0x49A7B2: fstp    dword ptr ds:0B45EF0h
0x49A7B8: jz      loc_49A84E
0x49A7BE: mov     eax, [esp+128h+var_F8]
0x49A7C2: mov     eax, [eax]
0x49A7C4: test    eax, eax
0x49A7C6: jz      short loc_49A7D1
0x49A7C8: mov     esi, [esp+128h+var_114]
0x49A7CC: add     eax, 20h ; ' '
0x49A7CF: jmp     short loc_49A7E3
0x49A7D1: xor     esi, esi
0x49A7D3: mov     [esp+128h+var_114], esi
0x49A7D7: lea     eax, [esp+128h+var_114]
0x49A7DB: mov     [esp+128h+var_FC], 1
0x49A7E3: test    byte ptr [esp+128h+var_FC], 1
0x49A7E8: mov     edi, [eax]
0x49A7EA: jz      short loc_49A808
0x49A7EC: test    esi, esi
0x49A7EE: jz      short loc_49A808
0x49A7F0: lea     ecx, [esi+4]
0x49A7F3: push    ecx; lpAddend
0x49A7F4: call    dword ptr ds:0A2807Ch
0x49A7FA: test    eax, eax
0x49A7FC: jnz     short loc_49A808
0x49A7FE: mov     edx, [esi]
0x49A800: mov     eax, [edx]
0x49A802: push    1
0x49A804: mov     ecx, esi
0x49A806: call    eax
0x49A808: mov     ebx, ds:0B45DCCh
0x49A80E: mov     esi, [ebx+10Ch]
0x49A814: add     ebx, 10Ch
0x49A81A: cmp     esi, edi
0x49A81C: jz      short loc_49A84E
0x49A81E: test    esi, esi
0x49A820: jz      short loc_49A83E
0x49A822: lea     ecx, [esi+4]
0x49A825: push    ecx; lpAddend
0x49A826: call    dword ptr ds:0A2807Ch
0x49A82C: test    eax, eax
0x49A82E: jnz     short loc_49A83E
0x49A830: test    esi, esi
0x49A832: jz      short loc_49A83E
0x49A834: mov     edx, [esi]
0x49A836: mov     eax, [edx]
0x49A838: push    1
0x49A83A: mov     ecx, esi
0x49A83C: call    eax
0x49A83E: test    edi, edi
0x49A840: mov     [ebx], edi
0x49A842: jz      short loc_49A84E
0x49A844: add     edi, 4
0x49A847: push    edi; lpAddend
0x49A848: call    dword ptr ds:0A28078h
0x49A84E: lea     ecx, [esp+128h+var_9C]; this
0x49A855: mov     byte ptr [esp+128h+var_4], 1
0x49A85D: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x49A862: mov     esi, [esp+128h+var_100]
0x49A866: lea     ecx, [esi+4]
0x49A869: push    ecx; lpAddend
0x49A86A: mov     [esp+12Ch+var_4], 0FFFFFFFFh
0x49A875: call    dword ptr ds:0A2807Ch
0x49A87B: test    eax, eax
0x49A87D: jnz     short loc_49A889
0x49A87F: mov     edx, [esi]
0x49A881: mov     eax, [edx]
0x49A883: push    1
0x49A885: mov     ecx, esi
0x49A887: call    eax
0x49A889: mov     ecx, dword ptr [esp+128h+var_C]
0x49A890: mov     large fs:0, ecx
0x49A897: pop     ecx
0x49A898: pop     edi
0x49A899: pop     esi
0x49A89A: pop     ebp
0x49A89B: pop     ebx
0x49A89C: add     esp, 114h
0x49A8A2: retn
