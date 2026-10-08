0x76E260: mov     eax, ecx; MoonSugarEffect decode: stream descriptor initializer. Clears active flag/unknown, element-array pointer, and stride/cache field.
0x76E262: xor     ecx, ecx
0x76E264: mov     [eax], cl
0x76E266: mov     [eax+4], ecx
0x76E269: mov     [eax+8], ecx
0x76E26C: mov     [eax+0Ch], ecx
0x76E26F: retn
