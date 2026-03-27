0x536460: mov     eax, [esp+arg_0]
0x536464: test    eax, eax
0x536466: jz      short loc_53646D
0x536468: mov     eax, [eax+0Ch]
0x53646B: jmp     short loc_53646F
0x53646D: xor     eax, eax
0x53646F: test    eax, eax
0x536471: jz      short loc_5364A0
0x536473: mov     eax, [eax+8]
0x536476: test    eax, eax
0x536478: jz      short loc_536490
0x53647A: add     eax, 14h
0x53647D: jz      short loc_536490
0x53647F: mov     eax, [eax+1Ch]
0x536482: shr     eax, 8
0x536485: and     eax, 1Fh
0x536488: fld     dword ptr ds:0B116E0h[eax*4]
0x53648F: retn
0x536490: xor     eax, eax
0x536492: shr     eax, 8
0x536495: and     eax, 1Fh
0x536498: fld     dword ptr ds:0B116E0h[eax*4]
0x53649F: retn
0x5364A0: fld1
0x5364A2: retn
