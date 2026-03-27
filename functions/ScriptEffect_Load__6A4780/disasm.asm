0x6A4780: mov     eax, [esp+Dst]
0x6A4784: push    esi
0x6A4785: push    eax
0x6A4786: mov     esi, ecx
0x6A4788: call    ActiveEffect_Base_LoadEffect
0x6A478D: mov     ecx, ds:0B33B00h
0x6A4793: mov     [esp+4+Dst], 0
0x6A479B: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x6A479F: jb      short loc_6A47B9
0x6A47A1: push    2; Size
0x6A47A3: lea     edx, [esp+8+Dst]
0x6A47A7: push    edx; Dst
0x6A47A8: call    SaveLoad_LoadData
0x6A47AD: mov     ecx, ds:0B33B00h
0x6A47B3: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x6A47B7: jnb     short loc_6A47C3
0x6A47B9: mov     [esp+4+Dst], 1
0x6A47C1: jmp     short loc_6A47CB
0x6A47C3: cmp     word ptr [esp+4+Dst], 0
0x6A47C9: jz      short loc_6A47FF
0x6A47CB: cmp     dword ptr [esi+3Ch], 0
0x6A47CF: jnz     short loc_6A47E2
0x6A47D1: mov     ecx, [esi+38h]
0x6A47D4: call    Script_CreateEventList
0x6A47D9: mov     [esi+3Ch], eax
0x6A47DC: mov     ecx, ds:0B33B00h
0x6A47E2: mov     esi, [esi+3Ch]
0x6A47E5: test    esi, esi
0x6A47E7: jz      short loc_6A47F4
0x6A47E9: mov     ecx, esi
0x6A47EB: call    ScriptEventList_Load?
0x6A47F0: pop     esi
0x6A47F1: retn    4
0x6A47F4: movzx   eax, word ptr [esp+4+Dst]
0x6A47F9: push    eax
0x6A47FA: call    SaveLoad_AdvanceBufferOffset
0x6A47FF: pop     esi
0x6A4800: retn    4
