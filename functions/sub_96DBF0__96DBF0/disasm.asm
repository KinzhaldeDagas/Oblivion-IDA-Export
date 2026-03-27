0x96DBF0: sub     esp, 18h
0x96DBF3: push    esi
0x96DBF4: mov     esi, ecx
0x96DBF6: mov     eax, [esi+2Ch]
0x96DBF9: test    eax, eax
0x96DBFB: push    edi
0x96DBFC: jz      short loc_96DC10
0x96DBFE: mov     edi, [esi+8]
0x96DC01: mov     ecx, [esi+30h]
0x96DC04: mov     edx, [ecx]
0x96DC06: add     edi, 64h ; 'd'
0x96DC09: push    edi
0x96DC0A: push    eax
0x96DC0B: mov     eax, [edx+14h]
0x96DC0E: call    eax
0x96DC10: cmp     byte ptr ds:0BA9AC4h, 0
0x96DC17: jz      loc_96DCBF
0x96DC1D: mov     eax, [esi+8]
0x96DC20: mov     edx, [eax+1Ch]
0x96DC23: test    edx, edx
0x96DC25: jz      loc_96DCAD
0x96DC2B: push    eax
0x96DC2C: mov     ecx, esi
0x96DC2E: call    sub_96DBD0
0x96DC33: test    eax, eax
0x96DC35: jz      short loc_96DC7D
0x96DC37: mov     edi, [eax+0A8h]
0x96DC3D: test    edi, edi
0x96DC3F: jz      short loc_96DC7D
0x96DC41: lea     ecx, [esi+0Ch]
0x96DC44: push    ecx
0x96DC45: lea     eax, [esp+24h+var_C]
0x96DC49: push    eax
0x96DC4A: lea     ecx, [edx+64h]
0x96DC4D: call    sub_7101F0
0x96DC52: fld     dword ptr [edi+18h]
0x96DC55: fadd    dword ptr [eax]
0x96DC57: fstp    [esp+20h+var_18]
0x96DC5B: mov     ecx, [esp+20h+var_18]
0x96DC5F: fld     dword ptr [edi+1Ch]
0x96DC62: fadd    dword ptr [eax+4]
0x96DC65: fstp    dword ptr [esp+20h+var_14]
0x96DC69: mov     edx, dword ptr [esp+20h+var_14]
0x96DC6D: fld     dword ptr [edi+20h]
0x96DC70: fadd    dword ptr [eax+8]
0x96DC73: fstp    [esp+20h+var_10]
0x96DC77: mov     eax, [esp+20h+var_10]
0x96DC7B: jmp     short loc_96DCB6
0x96DC7D: lea     ecx, [esi+0Ch]
0x96DC80: push    ecx
0x96DC81: lea     eax, [esp+24h+var_C]
0x96DC85: push    eax
0x96DC86: lea     ecx, [edx+64h]
0x96DC89: call    sub_7101F0
0x96DC8E: mov     ecx, [eax]
0x96DC90: mov     [esi+18h], ecx
0x96DC93: mov     edx, [eax+4]
0x96DC96: mov     [esi+1Ch], edx
0x96DC99: mov     eax, [eax+8]
0x96DC9C: mov     [esi+20h], eax
0x96DC9F: mov     al, 1
0x96DCA1: pop     edi
0x96DCA2: mov     [esi+49h], al
0x96DCA5: mov     [esi+48h], al
0x96DCA8: pop     esi
0x96DCA9: add     esp, 18h
0x96DCAC: retn
0x96DCAD: mov     ecx, [esi+0Ch]
0x96DCB0: mov     edx, [esi+10h]
0x96DCB3: mov     eax, [esi+14h]
0x96DCB6: mov     [esi+18h], ecx
0x96DCB9: mov     [esi+1Ch], edx
0x96DCBC: mov     [esi+20h], eax
0x96DCBF: mov     al, 1
0x96DCC1: pop     edi
0x96DCC2: mov     [esi+49h], al
0x96DCC5: mov     [esi+48h], al
0x96DCC8: pop     esi
0x96DCC9: add     esp, 18h
0x96DCCC: retn
