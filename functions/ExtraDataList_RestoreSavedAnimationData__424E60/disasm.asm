0x424E60: push    ebp
0x424E61: push    esi
0x424E62: push    4Bh ; 'K'; a2
0x424E64: mov     ebp, ecx
0x424E66: call    BaseExtraList_GetExtraData
0x424E6B: mov     esi, eax
0x424E6D: test    esi, esi
0x424E6F: jz      loc_424F60
0x424E75: cmp     dword ptr [esi+10h], 0
0x424E79: push    edi
0x424E7A: mov     edi, [esp+0Ch+arg_0]
0x424E7E: jz      short loc_424EDD
0x424E80: push    offset aExtradatalis_3; lpCriticalSection
0x424E85: mov     ecx, offset stru_B33B80
0x424E8A: call    NiEnterCriticalSection
0x424E8F: movzx   eax, byte ptr [esi+0Ch]
0x424E93: mov     ecx, SaveLoad_CurrentSavegame
0x424E99: push    eax
0x424E9A: call    sub_45A140
0x424E9F: mov     ecx, [esi+10h]
0x424EA2: mov     edx, [edi+0Ch]
0x424EA5: push    ecx
0x424EA6: mov     ecx, SaveLoad_CurrentSavegame
0x424EAC: push    edx
0x424EAD: push    edi
0x424EAE: call    sub_458ED0
0x424EB3: mov     eax, [esi+10h]
0x424EB6: push    eax; void *
0x424EB7: mov     ecx, offset FormHeap
0x424EBC: call    MemoryHeap_Free_checked
0x424EC1: mov     dword ptr [esi+10h], 0
0x424EC8: mov     eax, SaveLoad_CurrentSavegame
0x424ECD: mov     cl, [eax+71h]
0x424ED0: mov     [eax+7Ch], cl
0x424ED3: mov     ecx, offset stru_B33B80; lpCriticalSection
0x424ED8: call    NiLeaveCriticalSection_0
0x424EDD: cmp     dword ptr [esi+14h], 0
0x424EE1: jz      short loc_424F3D
0x424EE3: push    offset aExtradatalis_3; lpCriticalSection
0x424EE8: mov     ecx, offset stru_B33B80
0x424EED: call    NiEnterCriticalSection
0x424EF2: movzx   edx, byte ptr [esi+0Ch]
0x424EF6: mov     ecx, SaveLoad_CurrentSavegame
0x424EFC: push    edx
0x424EFD: call    sub_45A140
0x424F02: mov     eax, [esi+14h]
0x424F05: mov     ecx, SaveLoad_CurrentSavegame
0x424F0B: push    eax
0x424F0C: push    edi
0x424F0D: call    sub_459080
0x424F12: mov     ecx, [esi+14h]
0x424F15: push    ecx; void *
0x424F16: mov     ecx, offset FormHeap
0x424F1B: call    MemoryHeap_Free_checked
0x424F20: mov     dword ptr [esi+14h], 0
0x424F27: mov     eax, SaveLoad_CurrentSavegame
0x424F2C: movzx   edx, byte ptr [eax+71h]
0x424F30: mov     ecx, offset stru_B33B80; lpCriticalSection
0x424F35: mov     [eax+7Ch], dl
0x424F38: call    NiLeaveCriticalSection_0
0x424F3D: cmp     dword ptr [esi+18h], 0
0x424F41: jnz     short loc_424F5A
0x424F43: push    4Bh ; 'K'
0x424F45: mov     ecx, ebp
0x424F47: call    BaseExtraList_RemoveExtraByType
0x424F4C: mov     eax, [edi]
0x424F4E: mov     edx, [eax+44h]
0x424F51: push    1000000h
0x424F56: mov     ecx, edi
0x424F58: call    edx
0x424F5A: pop     edi
0x424F5B: pop     esi
0x424F5C: pop     ebp
0x424F5D: retn    4
0x424F60: push    4Ah ; 'J'; a2
0x424F62: mov     ecx, ebp; this
0x424F64: call    BaseExtraList_GetExtraData
0x424F69: test    eax, eax
0x424F6B: jz      short loc_424F5B
0x424F6D: cmp     dword ptr [eax+0Ch], 0
0x424F71: jz      short loc_424F5B
0x424F73: mov     ecx, [esp+8+arg_0]
0x424F77: push    1
0x424F79: call    sub_4E2F70
0x424F7E: pop     esi
0x424F7F: pop     ebp
0x424F80: retn    4
