0x42FA50: push    esi
0x42FA51: push    edi
0x42FA52: mov     esi, ecx
0x42FA54: call    sub_47CEA0
0x42FA59: mov     eax, [esp+8+arg_0]
0x42FA5D: mov     ecx, [esp+8+arg_4]
0x42FA61: mov     edi, ds:CreateSemaphoreA
0x42FA67: mov     [esi+1Ch], eax
0x42FA6A: mov     eax, [esp+8+lMaximumCount]
0x42FA6E: mov     dword ptr [esi], offset ??_7BackgroundLoaderThread@@6B@; const BackgroundLoaderThread::`vftable'
0x42FA74: push    0; lpName
0x42FA76: mov     [esi+20h], ecx
0x42FA79: mov     edx, [esi+20h]
0x42FA7C: push    eax; lMaximumCount
0x42FA7D: push    edx; lInitialCount
0x42FA7E: push    0; lpSemaphoreAttributes
0x42FA80: mov     [esi+24h], eax
0x42FA83: call    edi ; CreateSemaphoreA
0x42FA85: mov     [esi+28h], eax
0x42FA88: mov     eax, [esp+8+arg_C]
0x42FA8C: mov     [esi+2Ch], eax
0x42FA8F: mov     eax, [esp+8+arg_10]
0x42FA93: mov     ecx, [esi+2Ch]
0x42FA96: push    0; lpName
0x42FA98: push    eax; lMaximumCount
0x42FA99: push    ecx; lInitialCount
0x42FA9A: push    0; lpSemaphoreAttributes
0x42FA9C: mov     [esi+30h], eax
0x42FA9F: call    edi ; CreateSemaphoreA
0x42FAA1: mov     [esi+34h], eax
0x42FAA4: mov     eax, 1
0x42FAA9: push    0; lpName
0x42FAAB: mov     [esi+38h], eax
0x42FAAE: mov     edx, [esi+38h]
0x42FAB1: push    eax; lMaximumCount
0x42FAB2: push    edx; lInitialCount
0x42FAB3: push    0; lpSemaphoreAttributes
0x42FAB5: mov     [esi+3Ch], eax
0x42FAB8: call    edi ; CreateSemaphoreA
0x42FABA: mov     [esi+40h], eax
0x42FABD: pop     edi
0x42FABE: mov     eax, esi
0x42FAC0: pop     esi
0x42FAC1: retn    14h
