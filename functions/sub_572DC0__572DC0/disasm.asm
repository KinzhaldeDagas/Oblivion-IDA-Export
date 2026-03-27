0x572DC0: fldz
0x572DC2: mov     eax, ecx
0x572DC4: xor     ecx, ecx
0x572DC6: mov     [eax], ecx
0x572DC8: mov     [eax+4], ecx
0x572DCB: mov     edx, offset dword_B12DD0
0x572DD0: fst     dword ptr [edx+4]
0x572DD3: mov     [edx-8], cl
0x572DD6: mov     [edx], ecx
0x572DD8: add     edx, 18h
0x572DDB: cmp     edx, offset unk_B12E18
0x572DE1: jl      short loc_572DD0
0x572DE3: fstp    st
0x572DE5: retn
