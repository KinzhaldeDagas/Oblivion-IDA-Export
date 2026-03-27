0xA11220: xor     ecx, ecx
0xA11222: mov     eax, 25h ; '%'
0xA11227: mov     edx, 4
0xA1122C: mul     edx
0xA1122E: seto    cl
0xA11231: neg     ecx
0xA11233: or      ecx, eax
0xA11235: push    ecx; Size
0xA11236: call    FormHeapAlloc
0xA1123B: mov     ecx, dword_B2CBD8
0xA11241: lea     edx, ds:0[ecx*4]
0xA11248: push    edx
0xA11249: push    0
0xA1124B: push    eax
0xA1124C: mov     dword_B2CBDC, eax
0xA11251: call    __memset
0xA11256: push    offset sub_A27590; void (__cdecl *)()
0xA1125B: mov     byte_B2CBE4, 1
0xA11262: mov     off_B2CBD4, offset ??_7?$NiTStringPointerMap@V?$NiPointer@VCachedGeometry@TallGrassShaderProperty@@@@@@6B@; const NiTStringPointerMap<NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable' ...
0xA1126C: call    _atexit
0xA11271: add     esp, 14h
0xA11274: retn
