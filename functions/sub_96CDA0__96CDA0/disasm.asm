0x96CDA0: push    14h; Size
0x96CDA2: call    FormHeapAlloc
0x96CDA7: add     esp, 4
0x96CDAA: test    eax, eax
0x96CDAC: jz      short loc_96CDC1
0x96CDAE: fld1
0x96CDB0: push    offset Vector3_InitValue?; int
0x96CDB5: push    ecx
0x96CDB6: fstp    [esp+8+var_8]; float
0x96CDB9: mov     ecx, eax
0x96CDBB: call    sub_96C420
0x96CDC0: retn
0x96CDC1: xor     eax, eax
0x96CDC3: retn
