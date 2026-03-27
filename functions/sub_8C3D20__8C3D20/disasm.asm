0x8C3D20: push    0FFFFFFFFh
0x8C3D22: push    offset SEH_8C8900
0x8C3D27: mov     eax, large fs:0
0x8C3D2D: push    eax
0x8C3D2E: push    ecx
0x8C3D2F: mov     eax, ds:0B30AACh
0x8C3D34: xor     eax, esp
0x8C3D36: push    eax
0x8C3D37: lea     eax, [esp+14h+var_C]
0x8C3D3B: mov     large fs:0, eax
0x8C3D41: push    14h; Size
0x8C3D43: call    FormHeapAlloc
0x8C3D48: add     esp, 4
0x8C3D4B: mov     [esp+14h+var_10], eax
0x8C3D4F: test    eax, eax
0x8C3D51: mov     [esp+14h+var_4], 0
0x8C3D59: jz      short loc_8C3D72
0x8C3D5B: mov     ecx, eax; this
0x8C3D5D: call    ??0bhkTriangleShape@@QAE@XZ; bhkTriangleShape::bhkTriangleShape(void)
0x8C3D62: mov     ecx, [esp+14h+var_C]
0x8C3D66: mov     large fs:0, ecx
0x8C3D6D: pop     ecx
0x8C3D6E: add     esp, 10h
0x8C3D71: retn
0x8C3D72: xor     eax, eax
0x8C3D74: mov     ecx, [esp+14h+var_C]
0x8C3D78: mov     large fs:0, ecx
0x8C3D7F: pop     ecx
0x8C3D80: add     esp, 10h
0x8C3D83: retn
