0x4A9DB0: push    ecx
0x4A9DB1: push    esi
0x4A9DB2: mov     esi, ecx
0x4A9DB4: mov     eax, [esi]
0x4A9DB6: mov     edx, [eax+16Ch]
0x4A9DBC: push    1
0x4A9DBE: call    edx
0x4A9DC0: test    al, al
0x4A9DC2: jz      short loc_4A9DDA
0x4A9DC4: mov     eax, [esi+94h]
0x4A9DCA: test    eax, eax
0x4A9DCC: jz      short loc_4A9DDA
0x4A9DCE: fld     dword ptr [eax+10h]
0x4A9DD1: pop     esi
0x4A9DD2: fstp    [esp+4+var_4]
0x4A9DD5: fld     [esp+4+var_4]
0x4A9DD8: pop     ecx
0x4A9DD9: retn
0x4A9DDA: fld     dword ptr ds:0B356B8h
0x4A9DE0: pop     esi
0x4A9DE1: fstp    [esp+4+var_4]
0x4A9DE4: fld     [esp+4+var_4]
0x4A9DE7: pop     ecx
0x4A9DE8: retn
