0x41D3C0: test    byte ptr [ecx+1Ch], 1
0x41D3C4: jz      short loc_41D3CA
0x41D3C6: mov     eax, [ecx+18h]
0x41D3C9: retn
0x41D3CA: mov     eax, [ecx]
0x41D3CC: mov     edx, [eax]
0x41D3CE: push    0
0x41D3D0: call    edx
0x41D3D2: push    ecx
0x41D3D3: fstp    [esp+4+var_4]; float
0x41D3D6: call    Calc_MagickaMasteryLevel
0x41D3DB: add     esp, 4
0x41D3DE: retn
