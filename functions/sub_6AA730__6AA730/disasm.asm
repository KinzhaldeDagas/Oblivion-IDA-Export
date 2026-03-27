0x6AA730: push    0FFFFFFFFh
0x6AA732: push    offset SEH_6AA730
0x6AA737: mov     eax, large fs:0
0x6AA73D: push    eax
0x6AA73E: sub     esp, 28h
0x6AA741: push    ebx
0x6AA742: push    ebp
0x6AA743: push    esi
0x6AA744: push    edi
0x6AA745: mov     eax, ds:0B30AACh
0x6AA74A: xor     eax, esp
0x6AA74C: push    eax
0x6AA74D: lea     eax, [esp+48h+var_C]
0x6AA751: mov     large fs:0, eax
0x6AA757: mov     esi, ecx
0x6AA759: mov     eax, ds:0B33EA0h
0x6AA75E: mov     ecx, eax
0x6AA760: sub     ecx, [esi+0D0h]
0x6AA766: cmp     ecx, 64h ; 'd'
0x6AA769: jb      loc_6AA95F
0x6AA76F: xor     ebx, ebx
0x6AA771: mov     [esi+0D0h], eax
0x6AA777: mov     [esp+48h+var_34], ebx
0x6AA77B: mov     eax, ds:0B333C4h
0x6AA780: mov     edx, [eax+2Ch]
0x6AA783: mov     ecx, [eax+30h]
0x6AA786: mov     [esp+48h+var_18], edx
0x6AA78A: mov     edx, [eax+34h]
0x6AA78D: mov     [esp+48h+var_10], edx
0x6AA791: mov     edx, [esi+304h]
0x6AA797: mov     [esp+48h+var_14], ecx
0x6AA79B: mov     ecx, [edx+4]
0x6AA79E: xor     eax, eax
0x6AA7A0: test    ecx, ecx
0x6AA7A2: mov     [esp+48h+var_4], ebx
0x6AA7A6: jbe     short loc_6AA7C3
0x6AA7A8: mov     edx, [edx+8]
0x6AA7AB: mov     edi, edx
0x6AA7AD: lea     ecx, [ecx+0]
0x6AA7B0: cmp     dword ptr [edi], 0
0x6AA7B3: jnz     loc_6AA8E2
0x6AA7B9: add     eax, 1
0x6AA7BC: add     edi, 4
0x6AA7BF: cmp     eax, ecx
0x6AA7C1: jb      short loc_6AA7B0
0x6AA7C3: xor     eax, eax
0x6AA7C5: test    eax, eax
0x6AA7C7: mov     [esp+48h+var_2C], eax
0x6AA7CB: jz      loc_6AA93B
0x6AA7D1: lea     eax, [esp+48h+var_34]
0x6AA7D5: push    eax
0x6AA7D6: lea     ecx, [esp+4Ch+var_28]
0x6AA7DA: push    ecx
0x6AA7DB: mov     ecx, [esi+304h]
0x6AA7E1: lea     edx, [esp+50h+var_2C]
0x6AA7E5: push    edx
0x6AA7E6: call    sub_7B2600
0x6AA7EB: cmp     [esp+48h+var_34], 0
0x6AA7F0: jz      loc_6AA92C
0x6AA7F6: mov     edi, [esp+48h+var_28]
0x6AA7FA: mov     ecx, [esi+300h]
0x6AA800: lea     eax, [esp+48h+var_30]
0x6AA804: push    eax
0x6AA805: push    edi
0x6AA806: xor     bl, bl
0x6AA808: mov     [esp+50h+var_30], 0
0x6AA810: call    NiTMap_GetAt
0x6AA815: mov     ebp, [esp+48h+var_30]
0x6AA819: test    ebp, ebp
0x6AA81B: jz      loc_6AA913
0x6AA821: mov     ecx, ebp
0x6AA823: call    sub_6B6AF0
0x6AA828: test    al, al
0x6AA82A: jz      loc_6AA92C
0x6AA830: mov     eax, [esp+48h+var_34]
0x6AA834: mov     ecx, [eax+88h]
0x6AA83A: mov     edx, [eax+8Ch]
0x6AA840: mov     eax, [eax+90h]
0x6AA846: mov     [esp+48h+var_24], ecx
0x6AA84A: fld     [esp+48h+var_24]
0x6AA84E: fld     st
0x6AA850: mov     [esp+48h+var_1C], eax
0x6AA854: fld     [esp+48h+var_18]
0x6AA858: mov     [esp+48h+var_20], edx
0x6AA85C: fucompp
0x6AA85E: fnstsw  ax
0x6AA860: fld     [esp+48h+var_1C]
0x6AA864: test    ah, 44h
0x6AA867: jp      short loc_6AA8BD
0x6AA869: fld     [esp+48h+var_20]
0x6AA86D: fld     [esp+48h+var_14]
0x6AA871: fucompp
0x6AA873: fnstsw  ax
0x6AA875: test    ah, 44h
0x6AA878: jp      short loc_6AA8BD
0x6AA87A: fld     [esp+48h+var_10]
0x6AA87E: fsub    st, st(1)
0x6AA880: fstp    [esp+48h+var_30]
0x6AA884: fld     [esp+48h+var_30]
0x6AA888: fabs
0x6AA88A: fstp    [esp+48h+var_30]
0x6AA88E: fld     [esp+48h+var_30]
0x6AA892: fcomp   dword ptr ds:0A2FFE8h
0x6AA898: fnstsw  ax
0x6AA89A: test    ah, 5
0x6AA89D: jp      short loc_6AA8BD
0x6AA89F: fstp    st(1)
0x6AA8A1: mov     bl, 1
0x6AA8A3: fld     dword ptr [esi+80h]
0x6AA8A9: fstp    [esp+48h+var_24]
0x6AA8AD: fld     dword ptr [esi+84h]
0x6AA8B3: fstp    [esp+48h+var_20]
0x6AA8B7: fld     [esp+48h+var_24]
0x6AA8BB: fxch    st(1)
0x6AA8BD: test    byte ptr [ebp+0], 8
0x6AA8C1: jnz     short loc_6AA8EA
0x6AA8C3: test    bl, bl
0x6AA8C5: jnz     short loc_6AA8EA
0x6AA8C7: sub     esp, 0Ch
0x6AA8CA: fstp    [esp+54h+var_4C]; float
0x6AA8CE: mov     ecx, ebp
0x6AA8D0: fld     [esp+54h+var_20]
0x6AA8D4: fstp    [esp+54h+var_50]; float
0x6AA8D8: fstp    [esp+54h+var_54]; float
0x6AA8DB: call    sub_6B6BE0
0x6AA8E0: jmp     short loc_6AA92C
0x6AA8E2: mov     eax, [edx+eax*4]
0x6AA8E5: jmp     loc_6AA7C5
0x6AA8EA: fsub    qword ptr ds:0A3F428h
0x6AA8F0: sub     esp, 0Ch
0x6AA8F3: mov     ecx, ebp
0x6AA8F5: fstp    [esp+54h+var_30]
0x6AA8F9: fld     [esp+54h+var_30]
0x6AA8FD: fstp    [esp+54h+var_4C]; float
0x6AA901: fld     [esp+54h+var_20]
0x6AA905: fstp    [esp+54h+var_50]; float
0x6AA909: fstp    [esp+54h+var_54]; float
0x6AA90C: call    sub_6B6BE0
0x6AA911: jmp     short loc_6AA92C
0x6AA913: mov     ecx, [esi+304h]
0x6AA919: push    edi
0x6AA91A: call    NiTMap_RemoveAt
0x6AA91F: mov     ecx, [esp+48h+var_34]
0x6AA923: push    ecx
0x6AA924: call    sub_6F9710
0x6AA929: add     esp, 4
0x6AA92C: cmp     [esp+48h+var_2C], 0
0x6AA931: jnz     loc_6AA7D1
0x6AA937: mov     ebx, [esp+48h+var_34]
0x6AA93B: test    ebx, ebx
0x6AA93D: mov     [esp+48h+var_4], 0FFFFFFFFh
0x6AA945: jz      short loc_6AA95F
0x6AA947: lea     edx, [ebx+4]
0x6AA94A: push    edx; lpAddend
0x6AA94B: call    dword ptr ds:0A2807Ch
0x6AA951: test    eax, eax
0x6AA953: jnz     short loc_6AA95F
0x6AA955: mov     eax, [ebx]
0x6AA957: mov     edx, [eax]
0x6AA959: push    1
0x6AA95B: mov     ecx, ebx
0x6AA95D: call    edx
0x6AA95F: mov     ecx, dword ptr [esp+48h+var_C]
0x6AA963: mov     large fs:0, ecx
0x6AA96A: pop     ecx
0x6AA96B: pop     edi
0x6AA96C: pop     esi
0x6AA96D: pop     ebp
0x6AA96E: pop     ebx
0x6AA96F: add     esp, 34h
0x6AA972: retn
