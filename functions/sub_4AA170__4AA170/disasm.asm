0x4AA170: push    ecx
0x4AA171: push    esi
0x4AA172: mov     esi, ecx
0x4AA174: mov     eax, [esi]
0x4AA176: mov     edx, [eax+16Ch]
0x4AA17C: push    1
0x4AA17E: call    edx
0x4AA180: test    al, al
0x4AA182: jz      short loc_4AA19A
0x4AA184: mov     eax, [esi+94h]
0x4AA18A: test    eax, eax
0x4AA18C: jz      short loc_4AA19A
0x4AA18E: fld     dword ptr [eax+4Ch]
0x4AA191: pop     esi
0x4AA192: fstp    [esp+4+var_4]
0x4AA195: fld     [esp+4+var_4]
0x4AA198: pop     ecx
0x4AA199: retn
0x4AA19A: fld     dword ptr ds:0B35730h
0x4AA1A0: pop     esi
0x4AA1A1: fstp    [esp+4+var_4]
0x4AA1A4: fld     [esp+4+var_4]
0x4AA1A7: pop     ecx
0x4AA1A8: retn
