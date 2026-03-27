0x4AA1B0: push    ecx
0x4AA1B1: push    esi
0x4AA1B2: mov     esi, ecx
0x4AA1B4: mov     eax, [esi]
0x4AA1B6: mov     edx, [eax+16Ch]
0x4AA1BC: push    1
0x4AA1BE: call    edx
0x4AA1C0: test    al, al
0x4AA1C2: jz      short loc_4AA1DA
0x4AA1C4: mov     eax, [esi+94h]
0x4AA1CA: test    eax, eax
0x4AA1CC: jz      short loc_4AA1DA
0x4AA1CE: fld     dword ptr [eax+50h]
0x4AA1D1: pop     esi
0x4AA1D2: fstp    [esp+4+var_4]
0x4AA1D5: fld     [esp+4+var_4]
0x4AA1D8: pop     ecx
0x4AA1D9: retn
0x4AA1DA: fld     dword ptr ds:0B35738h
0x4AA1E0: pop     esi
0x4AA1E1: fstp    [esp+4+var_4]
0x4AA1E4: fld     [esp+4+var_4]
0x4AA1E7: pop     ecx
0x4AA1E8: retn
