0x4A9CB0: push    ecx
0x4A9CB1: push    esi
0x4A9CB2: mov     esi, ecx
0x4A9CB4: mov     eax, [esi]
0x4A9CB6: mov     edx, [eax+16Ch]
0x4A9CBC: push    1
0x4A9CBE: call    edx
0x4A9CC0: test    al, al
0x4A9CC2: jz      short loc_4A9CD9
0x4A9CC4: mov     eax, [esi+94h]
0x4A9CCA: test    eax, eax
0x4A9CCC: jz      short loc_4A9CD9
0x4A9CCE: fld     dword ptr [eax]
0x4A9CD0: pop     esi
0x4A9CD1: fstp    [esp+4+var_4]
0x4A9CD4: fld     [esp+4+var_4]
0x4A9CD7: pop     ecx
0x4A9CD8: retn
0x4A9CD9: fld     dword ptr ds:0B356A0h
0x4A9CDF: pop     esi
0x4A9CE0: fstp    [esp+4+var_4]
0x4A9CE3: fld     [esp+4+var_4]
0x4A9CE6: pop     ecx
0x4A9CE7: retn
