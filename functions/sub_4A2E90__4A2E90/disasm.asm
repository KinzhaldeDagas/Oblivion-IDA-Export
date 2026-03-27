0x4A2E90: push    esi
0x4A2E91: mov     esi, ecx
0x4A2E93: mov     ecx, [esi+18h]
0x4A2E96: test    ecx, ecx
0x4A2E98: mov     dword ptr [esi+24h], 0
0x4A2E9F: jz      short loc_4A2ECE
0x4A2EA1: push    0; int
0x4A2EA3: push    offset ??_R0?AVTESRegionDataWeather@@@8; struct TypeDescriptor *
0x4A2EA8: push    offset ??_R0?AVTESRegionData@@@8; struct _s_RTTICompleteObjectLocator *
0x4A2EAD: push    0; int
0x4A2EAF: push    3
0x4A2EB1: call    sub_4A4460
0x4A2EB6: push    eax; void *
0x4A2EB7: call    OblivionDynamicCast
0x4A2EBC: add     esp, 14h
0x4A2EBF: test    eax, eax
0x4A2EC1: jz      short loc_4A2ECE
0x4A2EC3: lea     ecx, [eax+8]
0x4A2EC6: call    sub_4EECE0
0x4A2ECB: mov     [esi+24h], eax
0x4A2ECE: pop     esi
0x4A2ECF: retn
