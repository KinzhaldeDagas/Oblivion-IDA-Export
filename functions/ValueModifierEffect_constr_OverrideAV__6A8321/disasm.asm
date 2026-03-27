0x6A8321: mov     eax, [edi+14h]
0x6A8324: mov     [esi+38h], eax
0x6A8327: mov     ecx, [edi+1Ch]
0x6A832A: mov     edx, [ecx+58h]
0x6A832D: shr     edx, 8
0x6A8330: test    dl, 1
0x6A8333: mov     eax, esi
0x6A8335: jz      short ValueModifierEffect_constr___Epilogue
0x6A8337: fld1
0x6A8339: fstp    dword ptr [esi+18h]
