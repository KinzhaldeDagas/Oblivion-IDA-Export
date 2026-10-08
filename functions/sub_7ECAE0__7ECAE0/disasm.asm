0x7ECAE0: movzx   eax, [esp+slot]; Shader global table helper: store four dwords at dword_B46498 + 0x10 * index.
0x7ECAE5: mov     ecx, [esp+x]
0x7ECAE9: mov     edx, [esp+y]
0x7ECAED: shl     eax, 4
0x7ECAF0: add     eax, offset flt_B46498
0x7ECAF5: mov     [eax], ecx
0x7ECAF7: mov     ecx, [esp+z]
0x7ECAFB: mov     [eax+4], edx
0x7ECAFE: mov     edx, [esp+w]
0x7ECB02: mov     [eax+8], ecx
0x7ECB05: mov     [eax+0Ch], edx
0x7ECB08: retn
