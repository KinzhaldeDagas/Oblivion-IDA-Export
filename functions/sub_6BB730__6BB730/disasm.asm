0x6BB730: push    0FFFFFFFFh
0x6BB732: push    offset SEH_6B7E50
0x6BB737: mov     eax, large fs:0
0x6BB73D: push    eax
0x6BB73E: sub     esp, 1Ch
0x6BB741: push    ebx
0x6BB742: push    ebp
0x6BB743: push    esi
0x6BB744: push    edi
0x6BB745: mov     eax, ds:0B30AACh
0x6BB74A: xor     eax, esp
0x6BB74C: push    eax
0x6BB74D: lea     eax, [esp+3Ch+var_C]
0x6BB751: mov     large fs:0, eax
0x6BB757: mov     edi, [esp+3Ch+arg_8]
0x6BB75B: fld     [esp+3Ch+arg_0]
0x6BB75F: mov     eax, [esp+3Ch+arg_4]
0x6BB763: mov     edx, [edi]
0x6BB765: mov     ebp, [eax]
0x6BB767: push    10h; char
0x6BB769: lea     ecx, [esp+40h+var_28]
0x6BB76D: push    ecx; int
0x6BB76E: push    edx; int
0x6BB76F: push    ebp; int
0x6BB770: push    ecx
0x6BB771: fstp    [esp+50h+var_50]; float
0x6BB774: call    sub_6D31B0
0x6BB779: add     esp, 14h
0x6BB77C: test    al, al
0x6BB77E: jz      loc_6BB945
0x6BB784: mov     esi, [edi]
0x6BB786: add     esi, 1
0x6BB789: xor     ecx, ecx
0x6BB78B: mov     eax, esi
0x6BB78D: mov     edx, 10h
0x6BB792: mul     edx
0x6BB794: seto    cl
0x6BB797: neg     ecx
0x6BB799: or      ecx, eax
0x6BB79B: xor     eax, eax
0x6BB79D: add     ecx, 4
0x6BB7A0: setb    al
0x6BB7A3: neg     eax
0x6BB7A5: or      eax, ecx
0x6BB7A7: push    eax; Size
0x6BB7A8: call    FormHeapAlloc
0x6BB7AD: add     esp, 4
0x6BB7B0: mov     [esp+3Ch+var_10], eax
0x6BB7B4: xor     ebx, ebx
0x6BB7B6: cmp     eax, ebx
0x6BB7B8: mov     [esp+3Ch+var_4], ebx
0x6BB7BC: jz      short loc_6BB7D6
0x6BB7BE: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BB7C3: push    offset sub_7616D0; a4
0x6BB7C8: push    esi; size
0x6BB7C9: lea     ebx, [eax+4]
0x6BB7CC: push    10h; a2
0x6BB7CE: push    ebx; a1
0x6BB7CF: mov     [eax], esi
0x6BB7D1: call    ArrayConstructor
0x6BB7D6: mov     ecx, [esp+3Ch+var_28]
0x6BB7DA: shl     ecx, 4
0x6BB7DD: push    ecx; Size
0x6BB7DE: push    ebp; Src
0x6BB7DF: push    ebx; Dst
0x6BB7E0: mov     [esp+48h+var_4], 0FFFFFFFFh
0x6BB7E8: call    _memcpy
0x6BB7ED: mov     eax, [edi]
0x6BB7EF: mov     edx, [esp+48h+var_28]
0x6BB7F3: add     esp, 0Ch
0x6BB7F6: cmp     eax, edx
0x6BB7F8: jbe     short loc_6BB816
0x6BB7FA: sub     eax, edx
0x6BB7FC: mov     ecx, edx
0x6BB7FE: shl     ecx, 4
0x6BB801: shl     eax, 4
0x6BB804: push    eax; Size
0x6BB805: lea     edx, [ecx+ebp]
0x6BB808: push    edx; Src
0x6BB809: lea     eax, [ecx+ebx+10h]
0x6BB80D: push    eax; Dst
0x6BB80E: call    _memcpy
0x6BB813: add     esp, 0Ch
0x6BB816: mov     ecx, [edi]
0x6BB818: fld     [esp+3Ch+arg_0]
0x6BB81C: push    10h; char
0x6BB81E: push    ecx; int
0x6BB81F: push    2; int
0x6BB821: push    ebp; int
0x6BB822: push    ecx
0x6BB823: fstp    [esp+50h+var_50]; float
0x6BB826: call    sub_6BB4D0
0x6BB82B: mov     esi, [esp+50h+var_28]
0x6BB82F: fstp    [esp+50h+var_20]
0x6BB833: fld     [esp+50h+arg_0]
0x6BB837: shl     esi, 4
0x6BB83A: add     esi, ebx
0x6BB83C: fst     dword ptr [esi]
0x6BB83E: add     esp, 14h
0x6BB841: fld     [esp+3Ch+var_20]
0x6BB845: fst     dword ptr [esi+4]
0x6BB848: fldz
0x6BB84A: fst     dword ptr [esi+8]
0x6BB84D: fstp    dword ptr [esi+0Ch]
0x6BB850: mov     eax, [esp+3Ch+var_28]
0x6BB854: test    eax, eax
0x6BB856: jz      loc_6BB901
0x6BB85C: cmp     eax, [edi]
0x6BB85E: jz      loc_6BB901
0x6BB864: shl     eax, 4
0x6BB867: fld     dword ptr [eax+ebx-0Ch]
0x6BB86B: lea     edi, [eax+ebx]
0x6BB86E: fstp    [esp+3Ch+var_10]
0x6BB872: lea     edx, [esp+3Ch+var_14]
0x6BB876: fld     dword ptr [edi-10h]
0x6BB879: push    edx; int
0x6BB87A: fstp    [esp+40h+var_14]
0x6BB87E: lea     eax, [esp+40h+var_10]
0x6BB882: fld     dword ptr [edi-4]
0x6BB885: push    eax; int
0x6BB886: fstp    [esp+44h+var_24]
0x6BB88A: sub     esp, 8
0x6BB88D: fld     dword ptr [edi+14h]
0x6BB890: lea     ecx, [esp+4Ch+var_20]
0x6BB894: fstp    [esp+4Ch+var_18]
0x6BB898: lea     edx, [esp+4Ch+var_24]
0x6BB89C: fld     dword ptr [edi+10h]
0x6BB89F: fstp    [esp+4Ch+var_1C]
0x6BB8A3: fld     dword ptr [edi+18h]
0x6BB8A6: fstp    [esp+4Ch+var_20]
0x6BB8AA: fstp    [esp+4Ch+var_48]; int
0x6BB8AE: fstp    [esp+4Ch+var_4C]; float
0x6BB8B1: push    ecx; int
0x6BB8B2: fld     [esp+50h+var_1C]
0x6BB8B6: sub     esp, 8
0x6BB8B9: fstp    [esp+58h+var_54]; float
0x6BB8BD: fld     [esp+58h+var_18]
0x6BB8C1: fstp    [esp+58h+var_58]; float
0x6BB8C4: push    edx; int
0x6BB8C5: fld     [esp+5Ch+var_14]
0x6BB8C9: sub     esp, 8
0x6BB8CC: fstp    [esp+64h+var_60]; float
0x6BB8D0: fld     [esp+64h+var_10]
0x6BB8D4: fstp    [esp+64h+var_64]; float
0x6BB8D7: call    sub_6D3720
0x6BB8DC: fld     [esp+64h+var_24]
0x6BB8E0: add     esp, 28h
0x6BB8E3: fstp    dword ptr [edi-4]
0x6BB8E6: fld     [esp+3Ch+var_10]
0x6BB8EA: fstp    dword ptr [esi+8]
0x6BB8ED: fld     [esp+3Ch+var_14]
0x6BB8F1: fstp    dword ptr [esi+0Ch]
0x6BB8F4: fld     [esp+3Ch+var_20]
0x6BB8F8: fstp    dword ptr [edi+18h]
0x6BB8FB: mov     edi, [esp+3Ch+arg_8]
0x6BB8FF: jmp     short loc_6BB905
0x6BB901: fstp    st(1)
0x6BB903: fstp    st
0x6BB905: add     dword ptr [edi], 1
0x6BB908: test    ebp, ebp
0x6BB90A: jz      short loc_6BB929
0x6BB90C: mov     eax, [ebp-4]
0x6BB90F: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BB914: lea     esi, [ebp-4]
0x6BB917: push    eax; int
0x6BB918: push    10h; unsigned int
0x6BB91A: push    ebp; void *
0x6BB91B: call    $LN21
0x6BB920: push    esi
0x6BB921: call    FormHeapFree
0x6BB926: add     esp, 4
0x6BB929: mov     ecx, [esp+3Ch+arg_4]
0x6BB92D: mov     [ecx], ebx
0x6BB92F: mov     al, 1
0x6BB931: mov     ecx, [esp+3Ch+var_C]
0x6BB935: mov     large fs:0, ecx
0x6BB93C: pop     ecx
0x6BB93D: pop     edi
0x6BB93E: pop     esi
0x6BB93F: pop     ebp
0x6BB940: pop     ebx
0x6BB941: add     esp, 28h
0x6BB944: retn
0x6BB945: xor     al, al
0x6BB947: mov     ecx, [esp+3Ch+var_C]
0x6BB94B: mov     large fs:0, ecx
0x6BB952: pop     ecx
0x6BB953: pop     edi
0x6BB954: pop     esi
0x6BB955: pop     ebp
0x6BB956: pop     ebx
0x6BB957: add     esp, 28h
0x6BB95A: retn
