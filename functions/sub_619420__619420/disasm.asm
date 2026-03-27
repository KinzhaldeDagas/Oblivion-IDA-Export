0x619420: push    esi
0x619421: mov     esi, ecx
0x619423: cmp     dword ptr [esi+70h], 0Ah
0x619427: jnz     loc_61951B
0x61942D: mov     ecx, [esi+3Ch]
0x619430: call    Actor_GetCurrentAction
0x619435: cmp     eax, 1
0x619438: jz      loc_61951B
0x61943E: mov     ecx, [esi+3Ch]
0x619441: call    Actor_IsWeaponOut
0x619446: test    al, al
0x619448: jnz     loc_619596
0x61944E: mov     eax, [esi+0ACh]
0x619454: test    eax, eax
0x619456: push    edi
0x619457: jz      loc_61951D
0x61945D: mov     ecx, [esi+3Ch]
0x619460: push    0
0x619462: push    0
0x619464: push    0
0x619466: push    1
0x619468: push    eax
0x619469: call    Actor_EquipItem
0x61946E: mov     eax, [esi+0ACh]
0x619474: mov     al, [eax+90h]
0x61947A: cmp     al, 5
0x61947C: jz      short loc_6194C1
0x61947E: cmp     al, 4
0x619480: jz      short loc_6194C1
0x619482: cmp     dword ptr [esi+70h], 1
0x619486: jz      short loc_6194B8
0x619488: cmp     byte ptr ds:0B3B908h, 0
0x61948F: jz      short loc_6194AC
0x619491: mov     ecx, [esi+3Ch]; this
0x619494: push    offset aFightWithAMele; "fight with a Melee Weapon"
0x619499: call    TESObjectREFR_GetName
0x61949E: push    eax
0x61949F: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x6194A4: call    Interface_ConsolePrint
0x6194A9: add     esp, 0Ch
0x6194AC: fld     dword ptr ds:0A30634h
0x6194B2: fstp    dword ptr [esi+188h]
0x6194B8: mov     dword ptr [esi+70h], 1
0x6194BF: jmp     short loc_6194FE
0x6194C1: mov     edi, 2
0x6194C6: cmp     [esi+70h], edi
0x6194C9: jz      short loc_6194FB
0x6194CB: cmp     byte ptr ds:0B3B908h, 0
0x6194D2: jz      short loc_6194EF
0x6194D4: mov     ecx, [esi+3Ch]; this
0x6194D7: push    offset aFightWithARang; "fight with a Ranged Weapon"
0x6194DC: call    TESObjectREFR_GetName
0x6194E1: push    eax
0x6194E2: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x6194E7: call    Interface_ConsolePrint
0x6194EC: add     esp, 0Ch
0x6194EF: fld     dword ptr ds:0A30634h
0x6194F5: fstp    dword ptr [esi+188h]
0x6194FB: mov     [esi+70h], edi
0x6194FE: mov     ecx, esi
0x619500: call    sub_615520
0x619505: push    ecx
0x619506: mov     ecx, esi
0x619508: fstp    [esp+0Ch+var_C]; float
0x61950B: call    sub_612EA0
0x619510: mov     dword ptr [esi+0ACh], 0
0x61951A: pop     edi
0x61951B: pop     esi
0x61951C: retn
0x61951D: mov     ecx, esi
0x61951F: call    sub_612D60
0x619524: test    eax, eax
0x619526: jz      short loc_619544
0x619528: mov     edi, [esi+3Ch]
0x61952B: push    0
0x61952D: push    1
0x61952F: push    0
0x619531: push    0
0x619533: push    1
0x619535: mov     ecx, esi
0x619537: call    sub_612D60
0x61953C: push    eax
0x61953D: mov     ecx, edi
0x61953F: call    Actor_UnequipItem
0x619544: cmp     dword ptr [esi+70h], 0
0x619548: jz      short loc_61957A
0x61954A: cmp     byte ptr ds:0B3B908h, 0
0x619551: jz      short loc_61956E
0x619553: mov     ecx, [esi+3Ch]; this
0x619556: push    offset aFightHandToHan; "fight Hand-to-Hand"
0x61955B: call    TESObjectREFR_GetName
0x619560: push    eax
0x619561: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x619566: call    Interface_ConsolePrint
0x61956B: add     esp, 0Ch
0x61956E: fld     dword ptr ds:0A30634h
0x619574: fstp    dword ptr [esi+188h]
0x61957A: mov     ecx, esi
0x61957C: mov     dword ptr [esi+70h], 0
0x619583: call    sub_615520
0x619588: push    ecx
0x619589: mov     ecx, esi
0x61958B: fstp    [esp+0Ch+var_C]; float
0x61958E: call    sub_612EA0
0x619593: pop     edi
0x619594: pop     esi
0x619595: retn
0x619596: mov     ecx, [esi+3Ch]
0x619599: push    0
0x61959B: call    sub_5E6D70
0x6195A0: pop     esi
0x6195A1: retn
