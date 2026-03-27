0x9146E0: push    ebp
0x9146E1: mov     ebp, esp
0x9146E3: and     esp, 0FFFFFFF0h
0x9146E6: sub     esp, 68h
0x9146E9: mov     eax, [ecx+10h]
0x9146EC: fld     dword ptr ds:0A9CED4h
0x9146F2: lea     ecx, [eax+10h]
0x9146F5: mov     edx, [ecx]
0x9146F7: mov     dword ptr [esp+68h+var_60], edx
0x9146FB: mov     edx, [ecx+4]
0x9146FE: mov     dword ptr [esp+68h+var_60+4], edx
0x914702: mov     edx, [ecx+8]
0x914705: mov     dword ptr [esp+68h+var_60+8], edx
0x914709: mov     ecx, [ecx+0Ch]
0x91470C: mov     dword ptr [esp+68h+var_60+0Ch], ecx
0x914710: fdiv    dword ptr [eax+1Ch]
0x914713: movaps  xmm0, [esp+68h+var_60]
0x914718: mov     edx, [ebp+arg_4]
0x91471B: push    esi
0x91471C: push    edi
0x91471D: mov     dword ptr [esp+70h+var_60+0Ch], 0
0x914725: movaps  [esp+70h+var_40], xmm0
0x91472A: mov     ecx, 8
0x91472F: lea     esi, [esp+70h+var_40]
0x914733: lea     edi, [esp+70h+var_60]
0x914737: push    edx
0x914738: fst     dword ptr [esp+74h+var_60]
0x91473C: fst     dword ptr [esp+74h+var_60+4]
0x914740: fstp    dword ptr [esp+74h+var_60+8]
0x914744: movaps  xmm1, [esp+74h+var_60]
0x914749: addps   xmm0, xmm1
0x91474C: movaps  [esp+74h+var_30], xmm0
0x914751: rep movsd
0x914753: mov     ecx, [ebp+arg_0]
0x914756: movaps  xmm0, xmmword ptr [ecx]
0x914759: movaps  xmm1, [esp+74h+var_60]
0x91475E: maxps   xmm1, xmm0
0x914761: movaps  xmm0, xmmword ptr [ecx+10h]
0x914765: lea     ecx, [esp+74h+var_60]
0x914769: movaps  [esp+74h+var_60], xmm1
0x91476E: movaps  xmm1, [esp+74h+var_50]
0x914773: push    ecx
0x914774: minps   xmm1, xmm0
0x914777: push    eax
0x914778: lea     ecx, [esp+7Ch+var_40]
0x91477C: movaps  [esp+7Ch+var_50], xmm1
0x914781: call    sub_944950
0x914786: pop     edi
0x914787: pop     esi
0x914788: mov     esp, ebp
0x91478A: pop     ebp
0x91478B: retn    8
