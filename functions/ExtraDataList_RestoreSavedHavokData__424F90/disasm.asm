0x424F90: push    ebx
0x424F91: push    esi
0x424F92: push    4Bh ; 'K'; a2
0x424F94: mov     ebx, ecx
0x424F96: call    BaseExtraList_GetExtraData
0x424F9B: mov     esi, eax
0x424F9D: test    esi, esi
0x424F9F: jz      loc_42502D
0x424FA5: cmp     dword ptr [esi+18h], 0
0x424FA9: push    edi
0x424FAA: mov     edi, [esp+0Ch+arg_0]
0x424FAE: jz      short loc_425009
0x424FB0: push    offset aExtradatalis_4; lpCriticalSection
0x424FB5: mov     ecx, offset stru_B33B80
0x424FBA: call    NiEnterCriticalSection
0x424FBF: movzx   eax, byte ptr [esi+0Ch]
0x424FC3: mov     ecx, SaveLoad_CurrentSavegame
0x424FC9: push    eax
0x424FCA: call    sub_45A140
0x424FCF: mov     ecx, [esi+18h]
0x424FD2: push    ecx
0x424FD3: mov     ecx, SaveLoad_CurrentSavegame
0x424FD9: push    edi
0x424FDA: call    sub_459370
0x424FDF: mov     edx, [esi+18h]
0x424FE2: push    edx; void *
0x424FE3: mov     ecx, offset FormHeap
0x424FE8: call    MemoryHeap_Free_checked
0x424FED: mov     dword ptr [esi+18h], 0
0x424FF4: mov     eax, SaveLoad_CurrentSavegame
0x424FF9: mov     cl, [eax+71h]
0x424FFC: mov     [eax+7Ch], cl
0x424FFF: mov     ecx, offset stru_B33B80; lpCriticalSection
0x425004: call    NiLeaveCriticalSection_0
0x425009: cmp     dword ptr [esi+10h], 0
0x42500D: jnz     short loc_42502C
0x42500F: cmp     dword ptr [esi+14h], 0
0x425013: jnz     short loc_42502C
0x425015: push    4Bh ; 'K'
0x425017: mov     ecx, ebx
0x425019: call    BaseExtraList_RemoveExtraByType
0x42501E: mov     edx, [edi]
0x425020: mov     eax, [edx+44h]
0x425023: push    1000000h
0x425028: mov     ecx, edi
0x42502A: call    eax
0x42502C: pop     edi
0x42502D: pop     esi
0x42502E: pop     ebx
0x42502F: retn    4
