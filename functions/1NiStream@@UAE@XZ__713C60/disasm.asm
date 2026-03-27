0x713C60: push    0FFFFFFFFh
0x713C62: push    offset ??1NiStream@@UAE@XZ_SEH
0x713C67: mov     eax, large fs:0
0x713C6D: push    eax
0x713C6E: push    ecx
0x713C6F: push    ebx
0x713C70: push    ebp
0x713C71: push    esi
0x713C72: push    edi
0x713C73: mov     eax, ds:0B30AACh
0x713C78: xor     eax, esp
0x713C7A: push    eax
0x713C7B: lea     eax, [esp+24h+var_C]
0x713C7F: mov     large fs:0, eax
0x713C85: mov     esi, ecx
0x713C87: mov     [esp+24h+var_10], esi
0x713C8B: mov     dword ptr [esi], offset ??_7NiStream@@6B@; const NiStream::`vftable'
0x713C91: mov     ecx, [esi+21Ch]
0x713C97: test    ecx, ecx
0x713C99: mov     [esp+24h+var_4], 6
0x713CA1: jz      short loc_713CAB
0x713CA3: mov     eax, [ecx]
0x713CA5: mov     edx, [eax]
0x713CA7: push    1
0x713CA9: call    edx
0x713CAB: mov     ecx, [esi+220h]
0x713CB1: test    ecx, ecx
0x713CB3: jz      short loc_713CBD
0x713CB5: mov     eax, [ecx]
0x713CB7: mov     edx, [eax]
0x713CB9: push    1
0x713CBB: call    edx
0x713CBD: push    offset stru_B3FC00; lpCriticalSection
0x713CC2: call    dword ptr ds:0A2806Ch
0x713CC8: call    dword ptr ds:0A2808Ch
0x713CCE: lea     ebp, [esi+204h]
0x713CD4: mov     edi, 1
0x713CD9: add     ds:0B3FC7Ch, edi
0x713CDF: mov     ecx, ebp
0x713CE1: mov     ds:0B3FC78h, eax
0x713CE6: call    sub_8BCC50
0x713CEB: sub     ds:0B3FC7Ch, edi
0x713CF1: jnz     short loc_713CFD
0x713CF3: mov     dword ptr ds:0B3FC78h, 0
0x713CFD: push    offset stru_B3FC00; lpCriticalSection
0x713D02: call    dword ptr ds:0A28074h
0x713D08: mov     edi, [esi+254h]
0x713D0E: test    edi, edi
0x713D10: mov     ebx, ds:0A2807Ch
0x713D16: jz      short loc_713D3A
0x713D18: lea     eax, [edi+4]
0x713D1B: push    eax; lpAddend
0x713D1C: call    ebx ; InterlockedDecrement
0x713D1E: test    eax, eax
0x713D20: jnz     short loc_713D30
0x713D22: test    edi, edi
0x713D24: jz      short loc_713D30
0x713D26: mov     edx, [edi]
0x713D28: mov     eax, [edx]
0x713D2A: push    1
0x713D2C: mov     ecx, edi
0x713D2E: call    eax
0x713D30: mov     dword ptr [esi+254h], 0
0x713D3A: mov     ecx, [esi+1E8h]
0x713D40: test    ecx, ecx
0x713D42: jz      short loc_713D4C
0x713D44: mov     edx, [ecx]
0x713D46: mov     eax, [edx]
0x713D48: push    1
0x713D4A: call    eax
0x713D4C: mov     ecx, [esi+278h]
0x713D52: test    ecx, ecx
0x713D54: jz      short loc_713D5E
0x713D56: mov     edx, [ecx]
0x713D58: mov     eax, [edx]
0x713D5A: push    1
0x713D5C: call    eax
0x713D5E: mov     edi, [esi+254h]
0x713D64: test    edi, edi
0x713D66: mov     byte ptr [esp+24h+var_4], 5
0x713D6B: jz      short loc_713D85
0x713D6D: lea     ecx, [edi+4]
0x713D70: push    ecx; lpAddend
0x713D71: call    ebx ; InterlockedDecrement
0x713D73: test    eax, eax
0x713D75: jnz     short loc_713D85
0x713D77: test    edi, edi
0x713D79: jz      short loc_713D85
0x713D7B: mov     edx, [edi]
0x713D7D: mov     eax, [edx]
0x713D7F: push    1
0x713D81: mov     ecx, edi
0x713D83: call    eax
0x713D85: lea     ecx, [esi+244h]
0x713D8B: mov     byte ptr [esp+24h+var_4], 4
0x713D90: call    ??1?$NiTPointerMap@PBVNiObject@@I@@UAE@XZ; NiTPointerMap<NiObject const *,uint>::~NiTPointerMap<NiObject const *,uint>(void)
0x713D95: mov     eax, [esi+234h]
0x713D9B: push    eax
0x713D9C: call    FormHeapFree
0x713DA1: mov     eax, [esi+224h]
0x713DA7: push    eax
0x713DA8: call    FormHeapFree
0x713DAD: mov     eax, [ebp+4]
0x713DB0: add     esp, 8
0x713DB3: test    eax, eax
0x713DB5: mov     byte ptr [esp+24h+var_4], 1
0x713DBA: mov     dword ptr [ebp+0], offset ??_7?$NiTLargeArray@V?$NiPointer@VNiObject@@@@@@6B@; const NiTLargeArray<NiPointer<NiObject>>::`vftable'
0x713DC1: jz      short loc_713DE0
0x713DC3: mov     ecx, [eax-4]
0x713DC6: lea     edi, [eax-4]
0x713DC9: push    offset sub_7016A0; void (__thiscall *)(void *)
0x713DCE: push    ecx; int
0x713DCF: push    4; unsigned int
0x713DD1: push    eax; void *
0x713DD2: call    $LN21
0x713DD7: push    edi
0x713DD8: call    FormHeapFree
0x713DDD: add     esp, 4
0x713DE0: mov     eax, [esi+1F0h]
0x713DE6: test    eax, eax
0x713DE8: mov     byte ptr [esp+24h+var_4], 0
0x713DED: mov     dword ptr [esi+1ECh], offset ??_7?$NiTLargeArray@V?$NiPointer@VNiObject@@@@@@6B@; const NiTLargeArray<NiPointer<NiObject>>::`vftable'
0x713DF7: jz      short loc_713E16
0x713DF9: mov     edx, [eax-4]
0x713DFC: lea     edi, [eax-4]
0x713DFF: push    offset sub_7016A0; void (__thiscall *)(void *)
0x713E04: push    edx; int
0x713E05: push    4; unsigned int
0x713E07: push    eax; void *
0x713E08: call    $LN21
0x713E0D: push    edi
0x713E0E: call    FormHeapFree
0x713E13: add     esp, 4
0x713E16: mov     eax, [esi+0CCh]
0x713E1C: push    eax
0x713E1D: mov     dword ptr [esi+0C8h], offset ??_7?$NiTArray@PAVNiObjectGroup@@@@6B@; const NiTArray<NiObjectGroup *>::`vftable'
0x713E27: call    FormHeapFree
0x713E2C: add     esp, 4
0x713E2F: mov     ecx, dword ptr [esp+24h+var_C]
0x713E33: mov     large fs:0, ecx
0x713E3A: pop     ecx
0x713E3B: pop     edi
0x713E3C: pop     esi
0x713E3D: pop     ebp
0x713E3E: pop     ebx
0x713E3F: add     esp, 10h
0x713E42: retn
