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
0x7E1731: call    BSTextureManager_GetDefaultRenderTarget
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
0x7E175C: call    BSTextureManager_GetDefaultRenderTarget
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
0x7E1787: call    BSTextureManager_GetDefaultRenderTarget
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
0x7E17B1: call    BSTextureManager_GetDefaultRenderTarget
0x7E17B6: push    eax; a2
0x7E17B7: mov     ecx, edi; this
0x7E17B9: call    NiSmartPointer_Set??
0x7E17BE: pop     edi
0x7E17BF: mov     ecx, esi
0x7E17C1: pop     esi
0x7E17C2: jmp     loc_7E15C0
