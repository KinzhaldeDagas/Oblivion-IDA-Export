0x4A1710: push    esi
0x4A1711: mov     esi, ds:0B3F928h
0x4A1717: mov     eax, [esi+280h]
0x4A171D: push    edi
0x4A171E: push    1
0x4A1720: mov     edi, ecx
0x4A1722: mov     ecx, [eax]
0x4A1724: mov     edx, [ecx+0E4h]
0x4A172A: push    0AEh ; '®'
0x4A172F: push    eax
0x4A1730: call    edx
0x4A1732: mov     eax, [esi+280h]
0x4A1738: mov     ecx, [eax]
0x4A173A: lea     edx, [edi+0DCh]
0x4A1740: push    edx
0x4A1741: push    eax
0x4A1742: mov     eax, [ecx+12Ch]
0x4A1748: call    eax
0x4A174A: mov     ecx, [esp+8+a2]
0x4A174E: push    ecx; a2
0x4A174F: mov     ecx, edi; this
0x4A1751: call    NiNode__OnVisible
0x4A1756: mov     esi, [esi+280h]
0x4A175C: mov     edx, [esi]
0x4A175E: mov     eax, [edx+0E4h]
0x4A1764: push    0
0x4A1766: push    0AEh ; '®'
0x4A176B: push    esi
0x4A176C: call    eax
0x4A176E: pop     edi
0x4A176F: pop     esi
0x4A1770: retn    4
