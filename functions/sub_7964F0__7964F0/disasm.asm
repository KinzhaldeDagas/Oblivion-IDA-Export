0x7964F0: push    esi; Legacy TexCoord1 writer: appends projected-shadow S/T to the dedicated shadowTexcoords vector and applies the same global T-flip policy.
0x7964F1: push    edi
0x7964F2: mov     edi, [esp+8+shadowST]
0x7964F6: lea     esi, [ecx+0E8h]
0x7964FC: push    edi; value
0x7964FD: mov     ecx, esi; this
0x7964FF: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x796504: call    CSpeedTreeRT__GetTextureFlip; CSpeedTreeRT::GetTextureFlip: returns the single global bool at 0xB4297D. Oblivion startup sets it true at 0x55EBB7.
0x796509: test    al, al
0x79650B: mov     ecx, esi; this
0x79650D: jz      short loc_796527
0x79650F: fld     dword ptr [edi+4]
0x796512: lea     eax, [esp+8+shadowST]
0x796516: fchs
0x796518: push    eax; value
0x796519: fstp    [esp+0Ch+shadowST]
0x79651D: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x796522: pop     edi
0x796523: pop     esi
0x796524: retn    4
0x796527: add     edi, 4
0x79652A: push    edi; value
0x79652B: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x796530: pop     edi
0x796531: pop     esi
0x796532: retn    4
