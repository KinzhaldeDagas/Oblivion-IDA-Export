0x6A4680: push    esi
0x6A4681: mov     esi, ecx
0x6A4683: cmp     dword ptr [esi+38h], 0
0x6A4687: jz      short loc_6A46A8
0x6A4689: mov     ecx, [esi+20h]
0x6A468C: fld     [esp+4+arg_0]
0x6A4690: mov     eax, [esi+3Ch]
0x6A4693: mov     edx, [ecx]
0x6A4695: push    ecx
0x6A4696: fstp    [esp+8+var_8]; float
0x6A4699: push    eax; int
0x6A469A: mov     eax, [edx+4]
0x6A469D: call    eax
0x6A469F: mov     ecx, [esi+38h]
0x6A46A2: push    eax; int
0x6A46A3: call    sub_4F9F60
0x6A46A8: pop     esi
0x6A46A9: retn    4
