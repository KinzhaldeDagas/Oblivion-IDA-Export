0x7E1710: push    esi
0x7E1711: mov     esi, ecx
0x7E1713: cmp     dword ptr [esi+0E4h], 0
0x7E171A: push    edi
0x7E171B: lea     edi, [esi+0E4h]
0x7E1721: jnz     short loc_7E173E
0x7E1723: mov     eax, ds:0B43104h
0x7E1728: mov     ecx, ds:0B42F50h; this
0x7E172E: push    9; a3
0x7E1730: push    eax; a2
0x7E1731: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x7E1736: push    eax; a2
0x7E1737: mov     ecx, edi; this
0x7E1739: call    NiSmartPointer_Set??
0x7E173E: cmp     dword ptr [esi+0E0h], 0
0x7E1745: lea     edi, [esi+0E0h]
0x7E174B: jnz     short loc_7E1769
0x7E174D: mov     ecx, ds:0B43104h
0x7E1753: push    0Ah; a3
0x7E1755: push    ecx; a2
0x7E1756: mov     ecx, ds:0B42F50h; this
0x7E175C: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x7E1761: push    eax; a2
0x7E1762: mov     ecx, edi; this
0x7E1764: call    NiSmartPointer_Set??
0x7E1769: cmp     dword ptr [esi+0D8h], 0
0x7E1770: lea     edi, [esi+0D8h]
0x7E1776: jnz     short loc_7E1794
0x7E1778: mov     edx, ds:0B43104h
0x7E177E: mov     ecx, ds:0B42F50h; this
0x7E1784: push    0Bh; a3
0x7E1786: push    edx; a2
0x7E1787: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x7E178C: push    eax; a2
0x7E178D: mov     ecx, edi; this
0x7E178F: call    NiSmartPointer_Set??
0x7E1794: cmp     dword ptr [esi+0DCh], 0
0x7E179B: lea     edi, [esi+0DCh]
0x7E17A1: jnz     short loc_7E17BE
0x7E17A3: mov     eax, ds:0B43104h
0x7E17A8: mov     ecx, ds:0B42F50h; this
0x7E17AE: push    0Ch; a3
0x7E17B0: push    eax; a2
0x7E17B1: call    BSTextureManager_GetDefaultRenderTarget; Oblivion default rendered-target acquisition. Resolves dimensions, D3D format, auxiliary value, and flags for the target type, then obtains a matching cached or newly created BSRenderedTexture.
0x7E17B6: push    eax; a2
0x7E17B7: mov     ecx, edi; this
0x7E17B9: call    NiSmartPointer_Set??
0x7E17BE: pop     edi
0x7E17BF: mov     ecx, esi
0x7E17C1: pop     esi
0x7E17C2: jmp     loc_7E15C0
0x7E15C0: mov     eax, ds:0B45FC8h
0x7E15C5: push    esi
0x7E15C6: mov     esi, ecx
0x7E15C8: xor     ecx, ecx
0x7E15CA: add     eax, 1
0x7E15CD: mov     edx, 4
0x7E15D2: mul     edx
0x7E15D4: seto    cl
0x7E15D7: push    edi
0x7E15D8: neg     ecx
0x7E15DA: or      ecx, eax
0x7E15DC: push    ecx; Size
0x7E15DD: call    FormHeapAlloc
0x7E15E2: mov     [esi+0F8h], eax
0x7E15E8: mov     eax, ds:0B45FC8h
0x7E15ED: xor     ecx, ecx
0x7E15EF: add     eax, 1
0x7E15F2: mov     edx, 4
0x7E15F7: mul     edx
0x7E15F9: seto    cl
0x7E15FC: neg     ecx
0x7E15FE: or      ecx, eax
0x7E1600: push    ecx; Size
0x7E1601: call    FormHeapAlloc
0x7E1606: mov     [esi+0FCh], eax
0x7E160C: mov     eax, ds:0B45FC8h
0x7E1611: add     eax, 1
0x7E1614: add     esp, 8
0x7E1617: xor     edi, edi
0x7E1619: test    eax, eax
0x7E161B: jle     short loc_7E1678
0x7E161D: lea     ecx, [ecx+0]
0x7E1620: xor     ecx, ecx
0x7E1622: mov     edx, 4
0x7E1627: mul     edx
0x7E1629: seto    cl
0x7E162C: neg     ecx
0x7E162E: or      ecx, eax
0x7E1630: push    ecx; Size
0x7E1631: call    FormHeapAlloc
0x7E1636: mov     ecx, [esi+0F8h]
0x7E163C: mov     [ecx+edi*4], eax
0x7E163F: mov     eax, ds:0B45FC8h
0x7E1644: xor     ecx, ecx
0x7E1646: add     eax, 1
0x7E1649: mov     edx, 4
0x7E164E: mul     edx
0x7E1650: seto    cl
0x7E1653: neg     ecx
0x7E1655: or      ecx, eax
0x7E1657: push    ecx; Size
0x7E1658: call    FormHeapAlloc
0x7E165D: mov     ecx, [esi+0FCh]
0x7E1663: mov     [ecx+edi*4], eax
0x7E1666: mov     eax, ds:0B45FC8h
0x7E166B: add     edi, 1
0x7E166E: add     eax, 1
0x7E1671: add     esp, 8
0x7E1674: cmp     edi, eax
0x7E1676: jl      short loc_7E1620
0x7E1678: mov     ecx, esi; this
0x7E167A: call    sub_7E0840
0x7E167F: mov     edx, ds:0B45FCCh
0x7E1685: mov     eax, ds:0B45FC8h
0x7E168A: push    edx; a3
0x7E168B: push    eax; a2
0x7E168C: mov     ecx, esi; this
0x7E168E: call    sub_7E0270
0x7E1693: mov     ecx, ds:0B45FC8h
0x7E1699: add     ecx, 1
0x7E169C: xor     edi, edi
0x7E169E: test    ecx, ecx
0x7E16A0: jle     short loc_7E16D2
0x7E16A2: mov     edx, [esi+0F8h]
0x7E16A8: mov     eax, [edx+edi*4]
0x7E16AB: push    eax
0x7E16AC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E16B1: mov     ecx, [esi+0FCh]
0x7E16B7: mov     edx, [ecx+edi*4]
0x7E16BA: push    edx
0x7E16BB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E16C0: mov     eax, ds:0B45FC8h
0x7E16C5: add     edi, 1
0x7E16C8: add     eax, 1
0x7E16CB: add     esp, 8
0x7E16CE: cmp     edi, eax
0x7E16D0: jl      short loc_7E16A2
0x7E16D2: mov     ecx, [esi+0F8h]
0x7E16D8: push    ecx
0x7E16D9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E16DE: mov     edx, [esi+0FCh]
0x7E16E4: push    edx
0x7E16E5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7E16EA: add     esp, 8
0x7E16ED: pop     edi
0x7E16EE: mov     dword ptr [esi+0F8h], 0
0x7E16F8: mov     dword ptr [esi+0FCh], 0
0x7E1702: mov     byte ptr [esi+108h], 1
0x7E1709: pop     esi
0x7E170A: retn
