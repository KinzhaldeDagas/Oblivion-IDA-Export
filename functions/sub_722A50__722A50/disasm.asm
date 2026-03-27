0x722A50: push    esi
0x722A51: push    edi
0x722A52: mov     edi, [esp+8+a2]
0x722A56: test    edi, edi
0x722A58: mov     esi, ecx
0x722A5A: jz      short loc_722A86
0x722A5C: mov     ecx, [esi+0A8h]
0x722A62: test    ecx, ecx
0x722A64: jz      short loc_722A7A
0x722A66: mov     eax, [ecx]
0x722A68: mov     edx, [eax+54h]
0x722A6B: call    edx
0x722A6D: mov     ecx, [esi+0A8h]
0x722A73: mov     eax, [ecx]
0x722A75: mov     edx, [eax+50h]
0x722A78: call    edx
0x722A7A: push    edi; a2
0x722A7B: lea     ecx, [esi+0B4h]; this
0x722A81: call    NiSmartPointer_Set??
0x722A86: pop     edi
0x722A87: pop     esi
0x722A88: retn    4
