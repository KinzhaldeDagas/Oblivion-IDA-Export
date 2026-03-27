0x6804B0: movzx   eax, word ptr [ecx]
0x6804B3: xor     edx, edx
0x6804B5: cmp     ax, ds:0B3BF04h
0x6804BC: jnb     short loc_6804CD
0x6804BE: movzx   eax, ax
0x6804C1: shl     eax, 4
0x6804C4: add     eax, ds:0B3BF00h
0x6804CA: fld     dword ptr [eax]
0x6804CC: retn
0x6804CD: fld     dword ptr [edx]
0x6804CF: retn
