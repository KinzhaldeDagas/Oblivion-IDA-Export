0x5FF3CA: mov     eax, [esi]
0x5FF3CC: lea     ecx, [esp+arg_38]
0x5FF3D0: push    ecx
0x5FF3D1: lea     edx, [esp+4+arg_14]
0x5FF3D5: push    edx
0x5FF3D6: mov     edx, [eax+19Ch]
0x5FF3DC: mov     ecx, esi
0x5FF3DE: call    edx
0x5FF3E0: mov     ecx, edi; this
0x5FF3E2: push    eax
0x5FF3E3: call    Actor_GetFatigueFraction
0x5FF3E8: mov     eax, [edi]
0x5FF3EA: mov     edx, [eax+284h]
0x5FF3F0: push    ecx
0x5FF3F1: fstp    [esp+4+var_4]; int
0x5FF3F4: push    0; int
0x5FF3F6: mov     ecx, edi
0x5FF3F8: call    edx
0x5FF3FA: push    eax; char
0x5FF3FB: mov     eax, [edi]
0x5FF3FD: mov     edx, [eax+284h]
0x5FF403: push    7; float
0x5FF405: mov     ecx, edi
0x5FF407: call    edx
0x5FF409: push    eax; int
0x5FF40A: mov     eax, [edi]
0x5FF40C: mov     edx, [eax+284h]
0x5FF412: push    11h; int
0x5FF414: mov     ecx, edi
0x5FF416: call    edx
0x5FF418: push    eax; int
0x5FF419: call    Calc_HandToHandDamage
0x5FF41E: add     esp, 1Ch
0x5FF421: mov     ecx, edi; this
0x5FF423: mov     [esp+arg_60], 11h
0x5FF42B: call    Actor_IsCreature
0x5FF430: test    al, al
0x5FF432: jnz     short loc_5FF45D
0x5FF434: cmp     [esp+arg_1E0], al
0x5FF43B: jz      short loc_5FF457
0x5FF43D: mov     eax, [edi]
0x5FF43F: mov     edx, [eax+284h]
0x5FF445: push    ebp
0x5FF446: push    11h
0x5FF448: mov     ecx, edi
0x5FF44A: call    edx
0x5FF44C: push    eax
0x5FF44D: call    Calc_PowerAttackBonus
0x5FF452: add     esp, 8
0x5FF455: jmp     short loc_5FF459
0x5FF457: fld1
0x5FF459: fstp    [esp+arg_30]; int
0x5FF45D: mov     ecx, edi
0x5FF45F: call    Actor_IsSneaking
0x5FF464: test    al, al
0x5FF466: jnz     Actor_AttackHandling___ApplySneakAttackBonus
0x5FF46C: fld     [esp+arg_30]
0x5FF470: fld     st
0x5FF472: fmul    [esp+arg_14]
0x5FF476: fstp    [esp+arg_14]; float
0x5FF47A: fmul    [esp+arg_38]
0x5FF47E: fstp    [esp+arg_38]; float
0x5FF482: jmp     Actor_AttackHandling___ApplySneakAttackBonus
