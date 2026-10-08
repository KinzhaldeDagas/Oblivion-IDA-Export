0x4E8D00: sub     esp, 8; Verified: searches the TESRoad connected-point bucket for the cell containing the requested NiPoint3, compares candidate positions with sub_47D810 using fConstant_2 tolerance, and returns the matching TESConnectedPoint or null.
0x4E8D03: push    ebx
0x4E8D04: push    esi
0x4E8D05: push    edi
0x4E8D06: mov     edi, [esp+14h+position]
0x4E8D0A: fld     dword ptr [edi+4]
0x4E8D0D: mov     esi, ecx
0x4E8D0F: fstp    [esp+14h+var_4]
0x4E8D13: xor     ebx, ebx
0x4E8D15: fld     [esp+14h+var_4]
0x4E8D19: fistp   [esp+14h+position]
0x4E8D1D: fld     dword ptr [edi]
0x4E8D1F: mov     eax, [esp+14h+position]
0x4E8D23: fstp    [esp+14h+var_4]
0x4E8D27: fld     [esp+14h+var_4]
0x4E8D2B: fistp   [esp+14h+var_8]
0x4E8D2F: sar     eax, 0Ch
0x4E8D32: push    eax; group_y
0x4E8D33: mov     eax, [esp+18h+var_8]
0x4E8D37: sar     eax, 0Ch
0x4E8D3A: push    eax; group_x
0x4E8D3B: call    TESObjectCELL_PackExteriorGroupLabel; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4E8D40: add     esp, 8
0x4E8D43: lea     ecx, [esp+14h+var_4]
0x4E8D47: push    ecx
0x4E8D48: push    eax
0x4E8D49: lea     ecx, [esi+1Ch]
0x4E8D4C: mov     [esp+1Ch+var_4], ebx
0x4E8D50: call    NiTMap_GetAt
0x4E8D55: mov     esi, [esp+14h+var_4]
0x4E8D59: cmp     esi, ebx
0x4E8D5B: jz      short loc_4E8D8F
0x4E8D5D: lea     ecx, [ecx+0]
0x4E8D60: cmp     [esi+4], ebx
0x4E8D63: jnz     short loc_4E8D69
0x4E8D65: cmp     [esi], ebx
0x4E8D67: jz      short loc_4E8D8F
0x4E8D69: mov     ecx, [esi]; this
0x4E8D6B: fld     dword ptr ds:0A379B4h
0x4E8D71: push    ecx
0x4E8D72: fstp    [esp+18h+var_18]; float
0x4E8D75: push    edi; int
0x4E8D76: call    PathGraphNode_GetPosition; Verified shared graph-node position accessor: returns this+0x14, used by TESConnectedPoint and TESPathGridPoint distance, serialization, and route-generation code.
0x4E8D7B: push    eax; int
0x4E8D7C: call    sub_47D810
0x4E8D81: add     esp, 0Ch
0x4E8D84: test    al, al
0x4E8D86: jnz     short loc_4E8D9A
0x4E8D88: mov     esi, [esi+4]
0x4E8D8B: cmp     esi, ebx
0x4E8D8D: jnz     short loc_4E8D60
0x4E8D8F: pop     edi
0x4E8D90: pop     esi
0x4E8D91: mov     eax, ebx
0x4E8D93: pop     ebx
0x4E8D94: add     esp, 8
0x4E8D97: retn    4
0x4E8D9A: mov     eax, [esi]
0x4E8D9C: pop     edi
0x4E8D9D: pop     esi
0x4E8D9E: pop     ebx
0x4E8D9F: add     esp, 8
0x4E8DA2: retn    4
