0x61E5A0: sub     esp, 14h
0x61E5A3: push    esi
0x61E5A4: mov     esi, ecx
0x61E5A6: cmp     dword ptr [esi+74h], 3
0x61E5AA: jnz     loc_61E898
0x61E5B0: call    sub_6135F0
0x61E5B5: test    eax, eax
0x61E5B7: jz      loc_61E898
0x61E5BD: cmp     byte ptr [esi+0C4h], 0
0x61E5C4: jz      loc_61E898
0x61E5CA: mov     eax, [esi+70h]
0x61E5CD: cmp     eax, 2
0x61E5D0: jz      loc_61E898
0x61E5D6: cmp     eax, 4
0x61E5D9: jz      loc_61E898
0x61E5DF: mov     ecx, [esi+3Ch]
0x61E5E2: mov     eax, [ecx]
0x61E5E4: mov     edx, [eax+25Ch]
0x61E5EA: call    edx
0x61E5EC: test    al, al
0x61E5EE: jnz     loc_61E898
0x61E5F4: mov     eax, [esi+3Ch]
0x61E5F7: mov     ecx, [eax+58h]
0x61E5FA: mov     edx, [ecx]
0x61E5FC: mov     eax, [edx+2DCh]
0x61E602: call    eax
0x61E604: test    al, al
0x61E606: jz      loc_61E898
0x61E60C: mov     ecx, [esi+3Ch]
0x61E60F: mov     edx, [ecx]
0x61E611: mov     eax, [edx+164h]
0x61E617: call    eax
0x61E619: test    eax, eax
0x61E61B: jz      short loc_61E644
0x61E61D: mov     ecx, [esi+3Ch]
0x61E620: mov     edx, [ecx]
0x61E622: mov     eax, [edx+164h]
0x61E628: push    3
0x61E62A: call    eax
0x61E62C: mov     ecx, eax
0x61E62E: call    ActorAnimData_GetAnimGroupFromField8Value
0x61E633: push    eax
0x61E634: call    sub_51ACC0
0x61E639: add     esp, 4
0x61E63C: test    al, al
0x61E63E: jnz     loc_61E898
0x61E644: mov     ecx, [esi+3Ch]; this
0x61E647: call    Actor_IsNPC
0x61E64C: test    al, al
0x61E64E: jz      short loc_61E660
0x61E650: mov     ecx, [esi+3Ch]
0x61E653: call    Actor_IsSwimming
0x61E658: test    al, al
0x61E65A: jnz     loc_61E898
0x61E660: cmp     byte ptr [esi+158h], 0
0x61E667: jz      loc_61E898
0x61E66D: push    edi
0x61E66E: mov     edi, [esi+3Ch]
0x61E671: push    0
0x61E673: mov     ecx, esi
0x61E675: call    sub_6135F0
0x61E67A: push    eax
0x61E67B: push    edi
0x61E67C: call    sub_6131D0
0x61E681: add     esp, 0Ch
0x61E684: test    al, al
0x61E686: jz      loc_61E897
0x61E68C: mov     ecx, esi
0x61E68E: call    sub_6135F0
0x61E693: mov     ecx, eax
0x61E695: call    sub_5E5640
0x61E69A: mov     ecx, esi
0x61E69C: mov     byte ptr [esp+1Ch+var_C], al
0x61E6A0: call    sub_6135F0
0x61E6A5: mov     ecx, eax
0x61E6A7: call    Actor_GetCurrentAction
0x61E6AC: cmp     eax, 3
0x61E6AF: setz    cl
0x61E6B2: mov     byte ptr [esp+1Ch+var_10], cl
0x61E6B6: mov     ecx, esi
0x61E6B8: call    sub_6135F0
0x61E6BD: mov     ecx, eax
0x61E6BF: call    Actor_GetCurrentAction
0x61E6C4: cmp     eax, 7
0x61E6C7: jz      short loc_61E6E1
0x61E6C9: mov     ecx, esi
0x61E6CB: call    sub_6135F0
0x61E6D0: mov     ecx, eax
0x61E6D2: call    Actor_GetCurrentAction
0x61E6D7: cmp     eax, 8
0x61E6DA: mov     byte ptr [esp+1Ch+var_14], 0
0x61E6DF: jnz     short loc_61E6E6
0x61E6E1: mov     byte ptr [esp+1Ch+var_14], 1
0x61E6E6: push    ebx
0x61E6E7: mov     ecx, esi
0x61E6E9: call    sub_6135F0
0x61E6EE: mov     ecx, eax
0x61E6F0: call    Actor_IsBlocking
0x61E6F5: fld     [esp+20h+arg_4]
0x61E6F9: mov     edx, [esp+20h+var_10]
0x61E6FD: mov     ebx, [esp+20h+var_C]
0x61E701: push    1; char
0x61E703: push    edx; int
0x61E704: push    ebx; int
0x61E705: sub     esp, 8
0x61E708: fstp    [esp+34h+var_30]; float
0x61E70C: mov     ecx, esi
0x61E70E: fld     [esp+34h+arg_0]
0x61E712: mov     byte ptr [esp+34h+var_8], al
0x61E716: fstp    [esp+34h+var_34]; float
0x61E719: call    sub_61E0F0
0x61E71E: cmp     eax, 0FFh
0x61E723: mov     [esp+20h+var_C], eax
0x61E727: jz      loc_61E896
0x61E72D: push    eax
0x61E72E: mov     ecx, esi
0x61E730: call    sub_6134C0
0x61E735: test    al, al
0x61E737: jz      loc_61E896
0x61E73D: push    0; Seed
0x61E73F: call    GetRandomLargeInteger?
0x61E744: cdq
0x61E745: mov     ecx, 64h ; 'd'
0x61E74A: idiv    ecx
0x61E74C: mov     ecx, [esi+3Ch]
0x61E74F: add     esp, 4
0x61E752: mov     edi, edx
0x61E754: call    sub_5E0F50
0x61E759: mov     edx, [eax]
0x61E75B: mov     ecx, eax
0x61E75D: mov     eax, [edx+160h]
0x61E763: call    eax
0x61E765: movsx   ecx, al
0x61E768: cmp     edi, ecx
0x61E76A: jge     loc_61E896
0x61E770: push    ebp
0x61E771: mov     ecx, esi
0x61E773: call    sub_6135F0
0x61E778: mov     edx, dword ptr [esp+24h+var_8]
0x61E77C: mov     edi, [esi+3Ch]
0x61E77F: mov     ebp, [esi+70h]
0x61E782: push    edx
0x61E783: mov     edx, [eax]
0x61E785: mov     ecx, eax
0x61E787: mov     eax, [edx+19Ch]
0x61E78D: call    eax
0x61E78F: mov     ecx, [esp+20h+var_C]
0x61E793: test    ebp, ebp
0x61E795: setz    dl
0x61E798: push    eax; char
0x61E799: mov     eax, [edi]
0x61E79B: push    ecx; float
0x61E79C: mov     ecx, edi
0x61E79E: push    edx; float
0x61E79F: mov     edx, [eax+284h]
0x61E7A5: push    ebx; float
0x61E7A6: push    7; char
0x61E7A8: call    edx
0x61E7AA: push    eax; int
0x61E7AB: mov     ecx, esi
0x61E7AD: call    sub_613780
0x61E7B2: push    eax; int
0x61E7B3: mov     ecx, edi
0x61E7B5: call    sub_5E0F50
0x61E7BA: push    eax; int
0x61E7BB: call    sub_546800
0x61E7C0: fstp    [esp+40h+arg_8]
0x61E7C4: mov     edi, [esi+3Ch]
0x61E7C7: mov     ecx, [edi+58h]
0x61E7CA: mov     eax, [ecx]
0x61E7CC: mov     edx, [eax+0F8h]
0x61E7D2: add     esp, 20h
0x61E7D5: push    ebx
0x61E7D6: push    1
0x61E7D8: call    edx
0x61E7DA: mov     edx, [edi]
0x61E7DC: test    eax, eax
0x61E7DE: setnz   al
0x61E7E1: mov     ecx, edi
0x61E7E3: push    eax
0x61E7E4: mov     eax, [edx+284h]
0x61E7EA: push    7; float
0x61E7EC: call    eax
0x61E7EE: mov     edx, [edi]
0x61E7F0: push    eax; char
0x61E7F1: mov     eax, [edx+284h]
0x61E7F7: push    0Fh; int
0x61E7F9: mov     ecx, edi
0x61E7FB: call    eax
0x61E7FD: push    eax; int
0x61E7FE: mov     ecx, edi
0x61E800: call    sub_5E0F50
0x61E805: push    eax; int
0x61E806: call    sub_546D40
0x61E80B: fstp    [esp+38h+arg_0]
0x61E80F: fld     [esp+38h+arg_0]
0x61E813: add     esp, 14h
0x61E816: fadd    [esp+24h+arg_4]
0x61E81A: mov     ecx, offset fCombatMaxHoldScore
0x61E81F: fsubr   qword ptr ds:0A309F0h
0x61E825: fstp    [esp+24h+var_8]
0x61E829: call    GameSetting_GetSafeFloatPointer
0x61E82E: fld     dword ptr [eax]
0x61E830: pop     ebp
0x61E831: fld     [esp+20h+var_8]
0x61E835: fcom    st(1)
0x61E837: fnstsw  ax
0x61E839: fstp    st(1)
0x61E83B: test    ah, 41h
0x61E83E: jz      short loc_61E84E
0x61E840: mov     ecx, offset fCombatMaxHoldScore
0x61E845: fstp    st
0x61E847: call    GameSetting_GetSafeFloatPointer
0x61E84C: fld     dword ptr [eax]
0x61E84E: fld     [esp+20h+arg_4]
0x61E852: fld     [esp+20h+arg_0]
0x61E856: fcomp   st(1)
0x61E858: fnstsw  ax
0x61E85A: test    ah, 5
0x61E85D: jp      short loc_61E892
0x61E85F: fxch    st(1)
0x61E861: fstp    [esp+20h+arg_4]
0x61E865: fld     [esp+20h+arg_4]
0x61E869: fcompp
0x61E86B: fnstsw  ax
0x61E86D: test    ah, 5
0x61E870: jp      short loc_61E896
0x61E872: mov     ecx, [esp+20h+var_C]
0x61E876: push    0
0x61E878: push    ecx
0x61E879: mov     ecx, esi
0x61E87B: call    sub_612BD0
0x61E880: push    0
0x61E882: mov     ecx, esi
0x61E884: call    sub_619920
0x61E889: pop     ebx
0x61E88A: pop     edi
0x61E88B: pop     esi
0x61E88C: add     esp, 14h
0x61E88F: retn    8
0x61E892: fstp    st(1)
0x61E894: fstp    st
0x61E896: pop     ebx
0x61E897: pop     edi
0x61E898: pop     esi
0x61E899: add     esp, 14h
0x61E89C: retn    8
