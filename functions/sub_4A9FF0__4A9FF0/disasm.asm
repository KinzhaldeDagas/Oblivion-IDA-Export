0x4A9FF0: push    ecx
0x4A9FF1: push    esi
0x4A9FF2: mov     esi, ecx
0x4A9FF4: mov     eax, [esi]
0x4A9FF6: mov     edx, [eax+16Ch]
0x4A9FFC: push    1
0x4A9FFE: call    edx
0x4AA000: test    al, al
0x4AA002: jz      short loc_4AA01A
0x4AA004: mov     eax, [esi+94h]
0x4AA00A: test    eax, eax
0x4AA00C: jz      short loc_4AA01A
0x4AA00E: fld     dword ptr [eax+34h]
0x4AA011: pop     esi
0x4AA012: fstp    [esp+4+var_4]
0x4AA015: fld     [esp+4+var_4]
0x4AA018: pop     ecx
0x4AA019: retn
0x4AA01A: fld     dword ptr ds:0B35700h
0x4AA020: pop     esi
0x4AA021: fstp    [esp+4+var_4]
0x4AA024: fld     [esp+4+var_4]
0x4AA027: pop     ecx
0x4AA028: retn
