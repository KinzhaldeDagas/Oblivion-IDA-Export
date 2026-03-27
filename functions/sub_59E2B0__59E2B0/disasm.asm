0x59E2B0: push    ecx
0x59E2B1: push    ebx; a3
0x59E2B2: mov     bl, byte ptr [esp+8+arg_0]
0x59E2B6: xor     eax, eax
0x59E2B8: test    bl, bl
0x59E2BA: setnz   al
0x59E2BD: push    esi; a3
0x59E2BE: push    ecx
0x59E2BF: mov     esi, ecx
0x59E2C1: mov     ecx, [esi+40h]; this
0x59E2C4: add     eax, 1
0x59E2C7: mov     [esp+10h+a3], eax
0x59E2CB: fild    [esp+10h+a3]
0x59E2CF: fstp    [esp+10h+a3]; a3
0x59E2D3: fld     [esp+10h+a3]
0x59E2D7: fstp    [esp+10h+a2]; a3
0x59E2DA: push    0FA1h; a2
0x59E2DF: call    Tile_SetFloat
0x59E2E4: fld     [esp+0Ch+a3]
0x59E2E8: push    ecx
0x59E2E9: mov     ecx, [esi+30h]; this
0x59E2EC: fstp    [esp+10h+a2]; a3
0x59E2EF: push    0FA1h; a2
0x59E2F4: call    Tile_SetFloat
0x59E2F9: mov     ecx, [esi+60h]
0x59E2FC: test    ecx, ecx
0x59E2FE: jz      loc_59E4D4
0x59E304: call    sub_5E1AB0
0x59E309: test    al, al
0x59E30B: jz      short loc_59E320
0x59E30D: fld1
0x59E30F: push    ecx
0x59E310: mov     ecx, [esi+40h]; this
0x59E313: fstp    [esp+10h+a2]; a3
0x59E316: push    0FA1h; a2
0x59E31B: call    Tile_SetFloat
0x59E320: mov     ecx, [esi+60h]
0x59E323: mov     edx, [ecx+58h]
0x59E326: push    edi; a3
0x59E327: mov     edi, [edx+8]
0x59E32A: test    edi, edi
0x59E32C: jz      loc_59E4D3
0x59E332: mov     ecx, edi
0x59E334: call    sub_567770
0x59E339: test    al, al
0x59E33B: jz      short loc_59E34A
0x59E33D: mov     ecx, [esi+60h]
0x59E340: add     ecx, 44h ; 'D'
0x59E343: call    ExtraDataList__GetExtraPackage
0x59E348: mov     edi, eax
0x59E34A: test    edi, edi
0x59E34C: jz      loc_59E4D3
0x59E352: test    byte ptr [edi+1Ch], 1
0x59E356: jz      loc_59E4D3
0x59E35C: test    bl, bl
0x59E35E: mov     edi, 2
0x59E363: jz      short loc_59E375
0x59E365: mov     ecx, [esi+60h]; int
0x59E368: call    sub_5E8900
0x59E36D: test    al, al
0x59E36F: mov     [esp+10h+a3], edi
0x59E373: jnz     short loc_59E37D
0x59E375: mov     [esp+10h+a3], 1; a3
0x59E37D: fild    [esp+10h+a3]
0x59E381: push    ecx
0x59E382: mov     ecx, [esi+4Ch]; this
0x59E385: fstp    [esp+14h+var_14]; a3
0x59E388: push    0FA1h; a2
0x59E38D: call    Tile_SetFloat
0x59E392: xor     bl, bl
0x59E394: cmp     byte ptr [esp+10h+arg_0], bl
0x59E398: jz      short loc_59E408
0x59E39A: mov     ecx, [esi+60h]
0x59E39D: call    sub_5E89B0
0x59E3A2: test    al, al
0x59E3A4: jz      short loc_59E408
0x59E3A6: mov     ecx, [esi+60h]; this
0x59E3A9: push    0; a2
0x59E3AB: call    Actor_GetActorBaseForm
0x59E3B0: mov     ecx, eax
0x59E3B2: add     ecx, 68h ; 'h'
0x59E3B5: call    TESAIForm_GetTrainingLevel
0x59E3BA: movzx   eax, al
0x59E3BD: push    eax
0x59E3BE: mov     bl, 1
0x59E3C0: call    Calc_MasteryFromSkill
0x59E3C5: add     esp, 4
0x59E3C8: cmp     eax, 4
0x59E3CB: jnz     short loc_59E408
0x59E3CD: push    0
0x59E3CF: push    5
0x59E3D1: call    TESTopic__GEtTopic
0x59E3D6: add     esp, 8
0x59E3D9: test    eax, eax
0x59E3DB: jz      short loc_59E408
0x59E3DD: mov     ecx, ds:0B333C4h
0x59E3E3: push    0
0x59E3E5: push    eax
0x59E3E6: mov     ds:0B131F8h, edi
0x59E3EC: mov     edx, [esi+60h]
0x59E3EF: push    ecx
0x59E3F0: push    edx
0x59E3F1: mov     ecx, eax
0x59E3F3: call    TESTopic__CreateDialogueInfo
0x59E3F8: test    eax, eax
0x59E3FA: mov     dword ptr ds:0B131F8h, 0FFFFFFFFh
0x59E404: jz      short loc_59E408
0x59E406: xor     bl, bl
0x59E408: xor     eax, eax
0x59E40A: test    bl, bl
0x59E40C: setnz   al
0x59E40F: push    ecx
0x59E410: mov     ecx, [esi+50h]; this
0x59E413: add     eax, 1
0x59E416: mov     [esp+14h+a3], eax; a3
0x59E41A: fild    [esp+14h+a3]
0x59E41E: fstp    [esp+14h+var_14]; a3
0x59E421: push    0FA1h; a2
0x59E426: call    Tile_SetFloat
0x59E42B: mov     bl, byte ptr [esp+10h+arg_0]
0x59E42F: test    bl, bl
0x59E431: jz      short loc_59E443
0x59E433: mov     ecx, [esi+60h]
0x59E436: call    sub_5E8A20
0x59E43B: test    al, al
0x59E43D: mov     [esp+10h+arg_0], edi
0x59E441: jnz     short loc_59E44B
0x59E443: mov     [esp+10h+arg_0], 1
0x59E44B: fild    [esp+10h+arg_0]
0x59E44F: push    ecx
0x59E450: mov     ecx, [esi+58h]; this
0x59E453: fstp    [esp+14h+var_14]; a3
0x59E456: push    0FA1h; a2
0x59E45B: call    Tile_SetFloat
0x59E460: test    bl, bl
0x59E462: jz      short loc_59E474
0x59E464: mov     ecx, [esi+60h]
0x59E467: call    sub_5E8890
0x59E46C: test    al, al
0x59E46E: mov     [esp+10h+arg_0], edi
0x59E472: jnz     short loc_59E47C
0x59E474: mov     [esp+10h+arg_0], 1
0x59E47C: fild    [esp+10h+arg_0]
0x59E480: push    ecx
0x59E481: mov     ecx, [esi+54h]; this
0x59E484: fstp    [esp+14h+var_14]; a3
0x59E487: push    0FA1h; a2
0x59E48C: call    Tile_SetFloat
0x59E491: test    bl, bl
0x59E493: jz      short loc_59E4B6
0x59E495: mov     ecx, [esi+60h]; this
0x59E498: push    800h
0x59E49D: push    0; a2
0x59E49F: call    Actor_GetActorBaseForm
0x59E4A4: mov     ecx, eax
0x59E4A6: add     ecx, 68h ; 'h'
0x59E4A9: call    TESAIForm_OffersService
0x59E4AE: test    al, al
0x59E4B0: mov     [esp+10h+arg_0], edi
0x59E4B4: jnz     short loc_59E4BE
0x59E4B6: mov     [esp+10h+arg_0], 1
0x59E4BE: fild    [esp+10h+arg_0]
0x59E4C2: push    ecx
0x59E4C3: mov     ecx, [esi+5Ch]; this
0x59E4C6: fstp    [esp+14h+var_14]; a3
0x59E4C9: push    0FA1h; a2
0x59E4CE: call    Tile_SetFloat
0x59E4D3: pop     edi
0x59E4D4: pop     esi
0x59E4D5: pop     ebx
0x59E4D6: pop     ecx
0x59E4D7: retn    4
