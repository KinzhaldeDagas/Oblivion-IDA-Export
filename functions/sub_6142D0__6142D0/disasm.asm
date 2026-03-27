0x6142D0: sub     esp, 10h
0x6142D3: fld     dword ptr ds:0A342A4h
0x6142D9: push    ebx
0x6142DA: mov     ebx, [esp+14h+arg_4]
0x6142DE: push    esi
0x6142DF: push    edi
0x6142E0: mov     edi, [esp+1Ch+arg_0]
0x6142E4: fstp    dword ptr [edi]
0x6142E6: mov     esi, ecx
0x6142E8: fld     dword ptr ds:0A342A0h
0x6142EE: fst     dword ptr [ebx]
0x6142F0: cmp     dword ptr [esi+70h], 2
0x6142F4: fld     dword ptr [edi]
0x6142F6: fstp    [esp+1Ch+var_10]
0x6142FA: fst     [esp+1Ch+var_C]
0x6142FE: fld     dword ptr [edi]
0x614300: fstp    [esp+1Ch+arg_0]
0x614304: fstp    [esp+1Ch+arg_4]
0x614308: jnz     loc_6143AF
0x61430E: mov     eax, [esi+3Ch]
0x614311: test    eax, eax
0x614313: jz      loc_6143AF
0x614319: mov     ecx, [eax+58h]
0x61431C: test    ecx, ecx
0x61431E: jz      loc_6143AF
0x614324: mov     eax, [ecx]
0x614326: mov     edx, [eax+0ECh]
0x61432C: push    1
0x61432E: call    edx
0x614330: test    eax, eax
0x614332: jz      short loc_6143AF
0x614334: mov     eax, [esi+3Ch]
0x614337: mov     ecx, [eax+58h]
0x61433A: mov     edx, [ecx]
0x61433C: mov     eax, [edx+0ECh]
0x614342: push    1
0x614344: call    eax
0x614346: cmp     dword ptr [eax+8], 0
0x61434A: jz      short loc_6143AF
0x61434C: mov     ecx, esi
0x61434E: call    sub_612D60
0x614353: cmp     byte ptr [eax+90h], 4
0x61435A: jnz     short loc_61436B
0x61435C: mov     ecx, esi
0x61435E: call    sub_612D60
0x614363: add     eax, 60h ; '`'
0x614366: mov     eax, [eax+4]
0x614369: jmp     short loc_61436D
0x61436B: xor     eax, eax
0x61436D: test    eax, eax
0x61436F: jz      short loc_61439B
0x614371: push    2
0x614373: lea     ecx, [eax+18h]
0x614376: call    MagicItem_GetFXEffect
0x61437B: test    eax, eax
0x61437D: jz      short loc_6143AF
0x61437F: lea     ecx, [esp+1Ch+arg_4]
0x614383: push    ecx
0x614384: lea     edx, [esp+20h+arg_0]
0x614388: push    edx
0x614389: mov     ecx, eax
0x61438B: call    EffectSetting_GetProjectileType
0x614390: push    eax
0x614391: call    Magic_GetProjectileDistances
0x614396: add     esp, 0Ch
0x614399: jmp     short loc_6143AF
0x61439B: fld     dword ptr ds:0B37110h
0x6143A1: fstp    [esp+1Ch+arg_0]
0x6143A5: fld     dword ptr ds:0B37118h
0x6143AB: fstp    [esp+1Ch+arg_4]
0x6143AF: mov     eax, [esi+80h]
0x6143B5: test    eax, eax
0x6143B7: jz      short loc_6143E7
0x6143B9: cmp     dword ptr [eax], 0
0x6143BC: jz      short loc_6143E7
0x6143BE: mov     ecx, [eax]
0x6143C0: push    2
0x6143C2: call    MagicItem_GetFXEffect
0x6143C7: test    eax, eax
0x6143C9: jz      short loc_6143F7
0x6143CB: lea     ecx, [esp+1Ch+var_C]
0x6143CF: push    ecx
0x6143D0: lea     edx, [esp+20h+var_10]
0x6143D4: push    edx
0x6143D5: mov     ecx, eax
0x6143D7: call    EffectSetting_GetProjectileType
0x6143DC: push    eax
0x6143DD: call    Magic_GetProjectileDistances
0x6143E2: add     esp, 0Ch
0x6143E5: jmp     short loc_6143F7
0x6143E7: fld     [esp+1Ch+arg_0]
0x6143EB: fstp    [esp+1Ch+var_10]
0x6143EF: fld     [esp+1Ch+arg_4]
0x6143F3: fstp    [esp+1Ch+var_C]
0x6143F7: mov     ecx, [esi+3Ch]
0x6143FA: call    sub_5E0F50
0x6143FF: mov     edx, [eax]
0x614401: mov     ecx, eax
0x614403: mov     eax, [edx+144h]
0x614409: call    eax
0x61440B: fstp    [esp+1Ch+var_8]
0x61440F: mov     ecx, [esi+3Ch]
0x614412: call    sub_5E0F50
0x614417: mov     edx, [eax]
0x614419: mov     ecx, eax
0x61441B: mov     eax, [edx+148h]
0x614421: call    eax
0x614423: fstp    [esp+1Ch+var_4]
0x614427: fld     [esp+1Ch+arg_0]
0x61442B: fld     [esp+1Ch+var_10]
0x61442F: fcom    st(1)
0x614431: fnstsw  ax
0x614433: test    ah, 41h
0x614436: jnz     short loc_61443C
0x614438: fstp    st
0x61443A: jmp     short loc_61443E
0x61443C: fstp    st(1)
0x61443E: fstp    [esp+1Ch+var_10]
0x614442: fldz
0x614444: fld     st
0x614446: fld     [esp+1Ch+var_8]
0x61444A: fucom   st(1)
0x61444C: fnstsw  ax
0x61444E: fstp    st(1)
0x614450: test    ah, 44h
0x614453: fld1
0x614455: jp      short loc_61445F
0x614457: fstp    st(1)
0x614459: fst     [esp+1Ch+arg_0]
0x61445D: jmp     short loc_614465
0x61445F: fxch    st(1)
0x614461: fstp    [esp+1Ch+arg_0]
0x614465: fld     [esp+1Ch+arg_0]
0x614469: fmul    [esp+1Ch+var_10]
0x61446D: fstp    dword ptr [edi]
0x61446F: fld     [esp+1Ch+arg_4]
0x614473: fld     [esp+1Ch+var_C]
0x614477: fcom    st(1)
0x614479: fnstsw  ax
0x61447B: test    ah, 41h
0x61447E: jnz     short loc_614484
0x614480: fstp    st
0x614482: jmp     short loc_614486
0x614484: fstp    st(1)
0x614486: fstp    [esp+1Ch+arg_4]
0x61448A: fld     [esp+1Ch+var_4]
0x61448E: fucom   st(2)
0x614490: fnstsw  ax
0x614492: fstp    st(2)
0x614494: test    ah, 44h
0x614497: jp      short loc_6144B2
0x614499: fstp    st(1)
0x61449B: pop     edi
0x61449C: fstp    [esp+18h+arg_0]
0x6144A0: pop     esi
0x6144A1: fld     [esp+14h+arg_0]
0x6144A5: fmul    [esp+14h+arg_4]
0x6144A9: fstp    dword ptr [ebx]
0x6144AB: pop     ebx
0x6144AC: add     esp, 10h
0x6144AF: retn    8
0x6144B2: fstp    st
0x6144B4: pop     edi
0x6144B5: fstp    [esp+18h+arg_0]
0x6144B9: pop     esi
0x6144BA: fld     [esp+14h+arg_0]
0x6144BE: fmul    [esp+14h+arg_4]
0x6144C2: fstp    dword ptr [ebx]
0x6144C4: pop     ebx
0x6144C5: add     esp, 10h
0x6144C8: retn    8
