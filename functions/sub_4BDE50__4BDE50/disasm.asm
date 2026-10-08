0x4BDE50: mov     eax, [ecx+1Ch]
0x4BDE53: mov     edx, [eax+4]
0x4BDE56: mov     eax, [eax]
0x4BDE58: push    esi
0x4BDE59: mov     esi, [ecx+18h]
0x4BDE5C: push    edx; group_y
0x4BDE5D: push    eax; group_x
0x4BDE5E: call    TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4BDE63: mov     edx, [esi]
0x4BDE65: add     esp, 8
0x4BDE68: push    eax
0x4BDE69: mov     eax, [edx+10h]
0x4BDE6C: mov     ecx, esi
0x4BDE6E: call    eax
0x4BDE70: pop     esi
0x4BDE71: retn    4
