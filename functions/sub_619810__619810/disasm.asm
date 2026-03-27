0x619810: sub     esp, 8
0x619813: push    esi
0x619814: mov     esi, ecx
0x619816: cmp     dword ptr [esi+70h], 9
0x61981A: jnz     loc_619915
0x619820: mov     ecx, [esi+3Ch]
0x619823: mov     eax, [ecx]
0x619825: mov     edx, [eax+164h]
0x61982B: push    1
0x61982D: call    edx
0x61982F: mov     ecx, eax
0x619831: call    ActorAnimData_GetAnimGroupFromField8Value
0x619836: push    eax
0x619837: call    sub_51AC80
0x61983C: mov     ecx, [esi+84h]
0x619842: add     esp, 4
0x619845: test    ecx, ecx
0x619847: mov     dl, al
0x619849: jz      loc_6198E7
0x61984F: fld     dword ptr [esi+44h]
0x619852: fsub    dword ptr [esi+104h]
0x619858: fld     dword ptr [esi+108h]
0x61985E: fcompp
0x619860: fnstsw  ax
0x619862: test    ah, 5
0x619865: jp      loc_619915
0x61986B: test    dl, dl
0x61986D: jnz     loc_619915
0x619873: push    0
0x619875: push    ecx
0x619876: mov     ecx, esi
0x619878: call    sub_617340
0x61987D: test    al, al
0x61987F: jz      loc_619915
0x619885: fld     dword ptr [esi+44h]
0x619888: mov     ecx, offset unk_B372E8
0x61988D: fstp    [esp+0Ch+var_8]
0x619891: call    GameSetting_GetSafeFloatPointer
0x619896: fld     dword ptr [eax]
0x619898: fstp    [esp+0Ch+var_4]
0x61989C: fld     [esp+0Ch+var_8]
0x6198A0: fstp    dword ptr [esi+104h]
0x6198A6: fld     [esp+0Ch+var_4]
0x6198AA: fstp    dword ptr [esi+108h]
0x6198B0: fld     dword ptr ds:0A30634h
0x6198B6: fstp    dword ptr [esi+10Ch]
0x6198BC: mov     eax, [esi+88h]
0x6198C2: test    eax, eax
0x6198C4: jz      short loc_6198D8
0x6198C6: cmp     eax, [esi+84h]
0x6198CC: jnz     short loc_6198D8
0x6198CE: mov     dword ptr [esi+88h], 0
0x6198D8: mov     dword ptr [esi+84h], 0
0x6198E2: pop     esi
0x6198E3: add     esp, 8
0x6198E6: retn
0x6198E7: test    dl, dl
0x6198E9: jnz     short loc_619915
0x6198EB: mov     eax, [esi+3Ch]
0x6198EE: lea     ecx, [eax+5Ch]
0x6198F1: mov     eax, [ecx]
0x6198F3: mov     edx, [eax+30h]
0x6198F6: call    edx
0x6198F8: test    eax, eax
0x6198FA: jnz     short loc_619915
0x6198FC: mov     eax, 0Dh
0x619901: cmp     [esi+70h], eax
0x619904: jz      short loc_619912
0x619906: fld     dword ptr ds:0A30634h
0x61990C: fstp    dword ptr [esi+188h]
0x619912: mov     [esi+70h], eax
0x619915: pop     esi
0x619916: add     esp, 8
0x619919: retn
