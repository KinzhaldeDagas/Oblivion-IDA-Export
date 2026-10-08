0x7F15E0: sub     esp, 80h; Per-draw transform slot updates object-space lighting and billboard axes before leaf pass setup. A correct bound texture can therefore render RGB-black if stock lighting/dimmer/fog constants yield zero, independently of atlas RGB.
0x7F15E6: push    ebx
0x7F15E7: push    esi
0x7F15E8: mov     esi, [esp+88h+arg_18]
0x7F15EF: push    edi
0x7F15F0: mov     ebx, ecx
0x7F15F2: mov     ecx, [ebx+14h]
0x7F15F5: push    0
0x7F15F7: push    esi
0x7F15F8: call    NiDX9Renderer_SetModelTransform; MoonSugar build 39: common non-skinned transform upload has many shader-family xrefs (generic, water, grass, precipitation, SpeedTree, LOD, GeometryDecal, Lighting30). Do not globally detour for Moon Sugar; use scoped caller/hook windows.
0x7F15FD: fld     dword ptr [esi+30h]
0x7F1600: fmul    dword ptr [esi]
0x7F1602: lea     eax, [esp+8Ch+var_80]
0x7F1606: push    eax
0x7F1607: push    0
0x7F1609: fstp    [esp+94h+var_80]
0x7F160D: lea     ecx, [esp+94h+inverseWorld]
0x7F1611: fld     dword ptr [esi+0Ch]
0x7F1614: push    ecx
0x7F1615: fmul    dword ptr [esi+30h]
0x7F1618: fstp    [esp+98h+var_7C]
0x7F161C: fld     dword ptr [esi+18h]
0x7F161F: fmul    dword ptr [esi+30h]
0x7F1622: fstp    [esp+98h+var_78]
0x7F1626: fld     dword ptr [esi+4]
0x7F1629: fmul    dword ptr [esi+30h]
0x7F162C: fstp    [esp+98h+var_70]
0x7F1630: fld     dword ptr [esi+10h]
0x7F1633: fmul    dword ptr [esi+30h]
0x7F1636: fstp    [esp+98h+var_6C]
0x7F163A: fld     dword ptr [esi+1Ch]
0x7F163D: fmul    dword ptr [esi+30h]
0x7F1640: fstp    [esp+98h+var_68]
0x7F1644: fld     dword ptr [esi+8]
0x7F1647: fmul    dword ptr [esi+30h]
0x7F164A: fstp    [esp+98h+var_60]
0x7F164E: fld     dword ptr [esi+14h]
0x7F1651: fmul    dword ptr [esi+30h]
0x7F1654: fstp    [esp+98h+var_5C]
0x7F1658: fld     dword ptr [esi+20h]
0x7F165B: fmul    dword ptr [esi+30h]
0x7F165E: fstp    [esp+98h+var_58]
0x7F1662: fld     dword ptr [esi+24h]
0x7F1665: fstp    [esp+98h+var_50]
0x7F1669: fld     dword ptr [esi+28h]
0x7F166C: fstp    [esp+98h+var_4C]
0x7F1670: fld     dword ptr [esi+2Ch]
0x7F1673: fstp    [esp+98h+var_48]
0x7F1677: fldz
0x7F1679: fst     [esp+98h+var_74]
0x7F167D: fst     [esp+98h+var_64]
0x7F1681: fstp    [esp+98h+var_54]
0x7F1685: fld1
0x7F1687: fstp    [esp+98h+var_44]
0x7F168B: call    D3DXMatrixInverse_0
0x7F1690: mov     edx, [esp+8Ch+arg_10]
0x7F1697: mov     edi, [edx+18h]
0x7F169A: test    edi, edi
0x7F169C: jnz     short loc_7F16A2
0x7F169E: xor     eax, eax
0x7F16A0: jmp     short loc_7F16B5
0x7F16A2: mov     eax, [edi]
0x7F16A4: mov     edx, [eax+54h]
0x7F16A7: mov     ecx, edi
0x7F16A9: call    edx
0x7F16AB: xor     ecx, ecx
0x7F16AD: cmp     eax, 9
0x7F16B0: setz    cl
0x7F16B3: mov     eax, ecx
0x7F16B5: fld     dword ptr [esi+30h]
0x7F16B8: push    ecx
0x7F16B9: neg     eax
0x7F16BB: fstp    [esp+90h+objectScale]; objectScale
0x7F16BE: lea     edx, [esp+90h+inverseWorld]
0x7F16C2: sbb     eax, eax
0x7F16C4: push    edx; inverseWorld
0x7F16C5: and     eax, edi
0x7F16C7: push    eax; leafProperty
0x7F16C8: mov     ecx, ebx
0x7F16CA: call    OB_SpeedTreeLeafShader_UpdateObjectSpaceLightConstants_010201A0; Per-draw transform setup rebuilds leaf c11 (and optional point c12) before leaf pass setup/draw; c11 is not merely consumed stale on the normal path.
0x7F16CF: call    OB_SpeedTreeLeafShader_UpdateBillboardAxes_010201A0; Leaf shader global leafData updater: copies camera/right/up style vectors from dword_B43124 into B46758..B46774.
0x7F16D4: pop     edi
0x7F16D5: pop     esi
0x7F16D6: xor     eax, eax
0x7F16D8: pop     ebx
0x7F16D9: add     esp, 80h
0x7F16DF: retn    20h ; ' '
