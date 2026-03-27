0x430E00: push    esi
0x430E01: push    edi; lpThreadId
0x430E02: mov     edi, ds:CreateSemaphoreA
0x430E08: mov     esi, ecx
0x430E0A: mov     dword ptr [esi], offset ??_7BSTaskThread@@6B@; const BSTaskThread::`vftable'
0x430E10: push    0; lpName
0x430E12: mov     dword ptr [esi+0Ch], 0
0x430E19: mov     eax, [esi+0Ch]
0x430E1C: push    1; lMaximumCount
0x430E1E: push    eax; lInitialCount
0x430E1F: push    0; lpSemaphoreAttributes
0x430E21: mov     dword ptr [esi+10h], 1
0x430E28: call    edi ; CreateSemaphoreA
0x430E2A: mov     [esi+14h], eax
0x430E2D: push    0; lpName
0x430E2F: mov     dword ptr [esi+18h], 1
0x430E36: mov     ecx, [esi+18h]
0x430E39: push    1; lMaximumCount
0x430E3B: push    ecx; lInitialCount
0x430E3C: push    0; lpSemaphoreAttributes
0x430E3E: mov     dword ptr [esi+1Ch], 1
0x430E45: call    edi ; CreateSemaphoreA
0x430E47: lea     edx, [esi+8]
0x430E4A: push    edx; dwCreationFlags
0x430E4B: push    4; lpParameter
0x430E4D: push    esi; lpStartAddress
0x430E4E: push    offset BSTaskThread_Runnable; lpStartAddress
0x430E53: push    0; dwStackSize
0x430E55: push    0; lpThreadAttributes
0x430E57: mov     [esi+20h], eax
0x430E5A: call    ds:CreateThread
0x430E60: mov     [esi+4], eax
0x430E63: pop     edi
0x430E64: mov     eax, esi
0x430E66: pop     esi
0x430E67: retn    8
