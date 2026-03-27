0x95D860: push    14h; Size
0x95D862: call    FormHeapAlloc
0x95D867: add     esp, 4
0x95D86A: test    eax, eax
0x95D86C: jz      short loc_95D882
0x95D86E: fld1
0x95D870: push    offset Vector3_InitValue?; int
0x95D875: push    ecx
0x95D876: fstp    [esp+8+var_8]; float
0x95D879: mov     ecx, eax
0x95D87B: call    sub_96C420
0x95D880: jmp     short loc_95D884
0x95D882: xor     eax, eax
0x95D884: mov     ecx, [esp+arg_4]
0x95D888: fld     [esp+arg_0]
0x95D88C: fstp    dword ptr [eax+10h]
0x95D88F: mov     edx, [ecx]
0x95D891: mov     [eax+4], edx
0x95D894: mov     edx, [ecx+4]
0x95D897: mov     [eax+8], edx
0x95D89A: mov     ecx, [ecx+8]
0x95D89D: mov     [eax+0Ch], ecx
0x95D8A0: retn
