0x425650: sub     esp, 8
0x425653: push    ebx
0x425654: push    esi
0x425655: mov     esi, ecx
0x425657: mov     ecx, [esp+10h+arg_4]
0x42565B: xor     bl, bl
0x42565D: test    ecx, ecx
0x42565F: jz      short loc_425671
0x425661: mov     eax, [ecx]
0x425663: mov     edx, [eax+190h]
0x425669: call    edx
0x42566B: test    al, al
0x42566D: jz      short loc_425671
0x42566F: mov     bl, 1
0x425671: test    [esp+10h+arg_0], 4000020h
0x425679: jz      short loc_425696
0x42567B: push    12h; a2
0x42567D: mov     ecx, esi; this
0x42567F: call    BaseExtraList_GetExtraData
0x425684: test    eax, eax
0x425686: jz      short loc_425696
0x425688: mov     eax, [eax+10h]
0x42568B: test    eax, eax
0x42568D: jz      short loc_425696
0x42568F: mov     ecx, eax
0x425691: call    ScriptEventList_Preload?
0x425696: mov     eax, [esp+10h+arg_0]
0x42569A: and     eax, 40000h
0x42569F: mov     [esp+10h+var_4], eax
0x4256A3: jz      short loc_4256B0
0x4256A5: test    bl, bl
0x4256A7: jz      short loc_4256B0
0x4256A9: mov     ecx, esi; this
0x4256AB: call    sub_4246F0
0x4256B0: push    ebp
0x4256B1: push    edi
0x4256B2: mov     edi, [esp+18h+arg_0]
0x4256B6: and     edi, 400000h
0x4256BC: mov     [esp+18h+var_8], edi
0x4256C0: jz      short loc_4256CF
0x4256C2: test    bl, bl
0x4256C4: jnz     short loc_4256CF
0x4256C6: push    17h
0x4256C8: mov     ecx, esi
0x4256CA: call    BaseExtraList_RemoveExtraByType
0x4256CF: mov     ebp, [esp+18h+arg_0]
0x4256D3: and     ebp, 10000000h
0x4256D9: jz      short loc_4256E4
0x4256DB: push    35h ; '5'
0x4256DD: mov     ecx, esi
0x4256DF: call    BaseExtraList_RemoveExtraByType
0x4256E4: test    [esp+18h+arg_0], 200000h
0x4256EC: jz      short loc_425704
0x4256EE: test    bl, bl
0x4256F0: jnz     short loc_425704
0x4256F2: push    39h ; '9'
0x4256F4: mov     ecx, esi
0x4256F6: call    BaseExtraList_RemoveExtraByType
0x4256FB: push    3Ah ; ':'
0x4256FD: mov     ecx, esi
0x4256FF: call    BaseExtraList_RemoveExtraByType
0x425704: test    [esp+18h+arg_0], 100000h
0x42570C: jz      short loc_425753
0x42570E: test    bl, bl
0x425710: jnz     short loc_425753
0x425712: push    32h ; '2'; a2
0x425714: mov     ecx, esi; this
0x425716: call    BaseExtraList_GetExtraData
0x42571B: test    eax, eax
0x42571D: jz      short loc_425753
0x42571F: mov     eax, [eax+0Ch]
0x425722: test    eax, eax
0x425724: jz      short loc_425753
0x425726: mov     ecx, [esp+18h+arg_4]
0x42572A: mov     edi, [ecx+0Ch]
0x42572D: mov     ecx, eax
0x42572F: call    sub_42B410
0x425734: cmp     edi, [eax+0Ch]
0x425737: jnb     short loc_425746
0x425739: mov     edx, [esp+18h+arg_4]
0x42573D: push    edx
0x42573E: call    sub_67F340
0x425743: add     esp, 4
0x425746: push    32h ; '2'
0x425748: mov     ecx, esi
0x42574A: call    BaseExtraList_RemoveExtraByType
0x42574F: mov     edi, [esp+18h+var_8]
0x425753: test    byte ptr [esp+18h+arg_0], 80h
0x425758: jz      short loc_425775
0x42575A: test    bl, bl
0x42575C: jz      short loc_425775
0x42575E: push    3Dh ; '='; a2
0x425760: mov     ecx, esi; this
0x425762: call    BaseExtraList_GetExtraData
0x425767: test    eax, eax
0x425769: jz      short loc_425775
0x42576B: push    1
0x42576D: push    eax
0x42576E: mov     ecx, esi
0x425770: call    BaseExtraList_RemoveExtraByPtr
0x425775: test    [esp+18h+arg_0], 4000h
0x42577D: jz      short loc_42578C
0x42577F: test    bl, bl
0x425781: jz      short loc_42578C
0x425783: push    3Eh ; '>'
0x425785: mov     ecx, esi
0x425787: call    BaseExtraList_RemoveExtraByType
0x42578C: test    [esp+18h+arg_0], 2000h
0x425794: jz      short loc_4257A3
0x425796: test    bl, bl
0x425798: jz      short loc_4257A3
0x42579A: push    52h ; 'R'
0x42579C: mov     ecx, esi
0x42579E: call    BaseExtraList_RemoveExtraByType
0x4257A3: test    [esp+18h+arg_0], 1000h
0x4257AB: jz      short loc_4257C8
0x4257AD: test    bl, bl
0x4257AF: jz      short loc_4257C8
0x4257B1: push    46h ; 'F'; a2
0x4257B3: mov     ecx, esi; this
0x4257B5: call    BaseExtraList_GetExtraData
0x4257BA: test    eax, eax
0x4257BC: jz      short loc_4257C8
0x4257BE: push    1
0x4257C0: push    eax
0x4257C1: mov     ecx, esi
0x4257C3: call    BaseExtraList_RemoveExtraByPtr
0x4257C8: test    [esp+18h+arg_0], 2000000h
0x4257D0: jz      short loc_4257DB
0x4257D2: push    4Ah ; 'J'
0x4257D4: mov     ecx, esi
0x4257D6: call    BaseExtraList_RemoveExtraByType
0x4257DB: test    [esp+18h+arg_0], 1000000h
0x4257E3: jz      short loc_4257EE
0x4257E5: push    4Bh ; 'K'
0x4257E7: mov     ecx, esi
0x4257E9: call    BaseExtraList_RemoveExtraByType
0x4257EE: cmp     [esp+18h+var_4], 0
0x4257F3: jz      short loc_425800
0x4257F5: test    bl, bl
0x4257F7: jz      short loc_425800
0x4257F9: mov     ecx, esi; this
0x4257FB: call    sub_4246F0
0x425800: test    edi, edi
0x425802: jz      short loc_425811
0x425804: test    bl, bl
0x425806: jnz     short loc_425811
0x425808: push    17h
0x42580A: mov     ecx, esi
0x42580C: call    BaseExtraList_RemoveExtraByType
0x425811: pop     edi
0x425812: test    ebp, ebp
0x425814: pop     ebp
0x425815: jz      short loc_425820
0x425817: push    35h ; '5'
0x425819: mov     ecx, esi
0x42581B: call    BaseExtraList_RemoveExtraByType
0x425820: mov     eax, SaveLoad_CurrentSavegame
0x425825: mov     eax, [eax+44h]
0x425828: cmp     eax, 1FFFF000h
0x42582D: jz      short loc_42583A
0x42582F: cmp     eax, 7FFFF000h
0x425834: jnz     loc_4258F4
0x42583A: test    bl, bl
0x42583C: mov     ecx, esi; this
0x42583E: jz      loc_4258CC
0x425844: push    1Fh; a2
0x425846: call    BaseExtraList_GetExtraData
0x42584B: test    eax, eax
0x42584D: jz      short loc_425859
0x42584F: push    1
0x425851: push    eax
0x425852: mov     ecx, esi
0x425854: call    BaseExtraList_RemoveExtraByPtr
0x425859: push    21h ; '!'
0x42585B: mov     ecx, esi
0x42585D: call    BaseExtraList_RemoveExtraByType
0x425862: push    1Eh
0x425864: mov     ecx, esi
0x425866: call    BaseExtraList_RemoveExtraByType
0x42586B: push    23h ; '#'; a2
0x42586D: mov     ecx, esi; this
0x42586F: call    BaseExtraList_GetExtraData
0x425874: test    eax, eax
0x425876: jz      short loc_425881
0x425878: push    23h ; '#'
0x42587A: mov     ecx, esi
0x42587C: call    BaseExtraList_RemoveExtraByType
0x425881: push    4Eh ; 'N'; a2
0x425883: mov     ecx, esi; this
0x425885: call    BaseExtraList_GetExtraData
0x42588A: test    eax, eax
0x42588C: jz      short loc_425897
0x42588E: push    4Eh ; 'N'
0x425890: mov     ecx, esi
0x425892: call    BaseExtraList_RemoveExtraByType
0x425897: push    42h ; 'B'
0x425899: mov     ecx, esi
0x42589B: call    BaseExtraList_RemoveExtraByType
0x4258A0: push    0
0x4258A2: mov     ecx, esi
0x4258A4: call    sub_423970
0x4258A9: push    25h ; '%'
0x4258AB: mov     ecx, esi
0x4258AD: call    BaseExtraList_RemoveExtraByType
0x4258B2: push    59h ; 'Y'
0x4258B4: mov     ecx, esi
0x4258B6: call    BaseExtraList_RemoveExtraByType
0x4258BB: push    5Ah ; 'Z'
0x4258BD: mov     ecx, esi
0x4258BF: call    BaseExtraList_RemoveExtraByType
0x4258C4: pop     esi
0x4258C5: pop     ebx
0x4258C6: add     esp, 8
0x4258C9: retn    8
0x4258CC: push    41h ; 'A'; a2
0x4258CE: call    BaseExtraList_GetExtraData
0x4258D3: test    eax, eax
0x4258D5: jz      short loc_4258F4
0x4258D7: mov     eax, [eax+0Ch]
0x4258DA: test    eax, eax
0x4258DC: jz      short loc_4258F4
0x4258DE: mov     ecx, [esp+10h+arg_4]
0x4258E2: push    ecx
0x4258E3: lea     ecx, [eax+44h]
0x4258E6: call    sub_424C00
0x4258EB: push    41h ; 'A'
0x4258ED: mov     ecx, esi
0x4258EF: call    BaseExtraList_RemoveExtraByType
0x4258F4: pop     esi
0x4258F5: pop     ebx
0x4258F6: add     esp, 8
0x4258F9: retn    8
