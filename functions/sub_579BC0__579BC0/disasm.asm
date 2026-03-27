0x579BC0: push    1; arg1
0x579BC2: push    0; canCreate
0x579BC4: call    InterfaceManager_GetSingleton
0x579BC9: add     esp, 8
0x579BCC: test    eax, eax
0x579BCE: jz      short loc_579C05
0x579BD0: push    1; arg1
0x579BD2: push    0; canCreate
0x579BD4: call    InterfaceManager_GetSingleton
0x579BD9: add     esp, 8
0x579BDC: cmp     dword ptr [eax+1Ch], 0
0x579BE0: jz      short loc_579C05
0x579BE2: push    0
0x579BE4: call    GetGlobalScriptStateObj??
0x579BE9: add     esp, 4
0x579BEC: test    eax, eax
0x579BEE: jz      short loc_579C05
0x579BF0: push    1
0x579BF2: call    GetGlobalScriptStateObj??
0x579BF7: xor     ecx, ecx
0x579BF9: add     esp, 4
0x579BFC: cmp     [eax+31h], cl
0x579BFF: setnle  cl
0x579C02: mov     al, cl
0x579C04: retn
0x579C05: xor     al, al
0x579C07: retn
