0x523AF0: mov     eax, [esp+first]; std::fill specialization for float: assigns *value across [first,last) and returns last. Shipped Oblivion callers use it for initialized portions of vector<float> growth/reuse.
0x523AF4: mov     ecx, [esp+last]
0x523AF8: cmp     eax, ecx
0x523AFA: jz      short locret_523B0C
0x523AFC: mov     edx, [esp+value]
0x523B00: fld     dword ptr [edx]
0x523B02: add     eax, 4
0x523B05: cmp     eax, ecx
0x523B07: fstp    dword ptr [eax-4]
0x523B0A: jnz     short loc_523B00
0x523B0C: retn
