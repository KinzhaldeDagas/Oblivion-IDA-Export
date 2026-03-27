0x899DE0: push    ebx
0x899DE1: push    esi
0x899DE2: mov     esi, [esp+8+arg_0]
0x899DE6: mov     eax, [esi]
0x899DE8: push    edi
0x899DE9: mov     edi, ecx
0x899DEB: push    edi
0x899DEC: push    2
0x899DEE: push    offset aHkworld; "hkWorld"
0x899DF3: mov     ecx, esi
0x899DF5: call    dword ptr [eax]
0x899DF7: mov     ebx, [edi+3Ch]
0x899DFA: dec     ebx
0x899DFB: js      short loc_899E18
0x899DFD: lea     ecx, [ecx+0]
0x899E00: mov     eax, [edi+38h]
0x899E03: mov     ecx, [eax+ebx*4]
0x899E06: mov     edx, [esi]
0x899E08: push    ecx
0x899E09: push    8
0x899E0B: push    offset aActive; "Active"
0x899E10: mov     ecx, esi
0x899E12: call    dword ptr [edx+8]
0x899E15: dec     ebx
0x899E16: jns     short loc_899E00
0x899E18: mov     ebx, [edi+48h]
0x899E1B: dec     ebx
0x899E1C: js      short loc_899E38
0x899E1E: mov     edi, edi
0x899E20: mov     eax, [edi+44h]
0x899E23: mov     ecx, [eax+ebx*4]
0x899E26: mov     edx, [esi]
0x899E28: push    ecx
0x899E29: push    8
0x899E2B: push    offset aInactive_0; "Inactive"
0x899E30: mov     ecx, esi
0x899E32: call    dword ptr [edx+8]
0x899E35: dec     ebx
0x899E36: jns     short loc_899E20
0x899E38: mov     eax, [edi+30h]
0x899E3B: mov     edx, [esi]
0x899E3D: push    eax
0x899E3E: push    8
0x899E40: push    offset aFixed_0; "Fixed"
0x899E45: mov     ecx, esi
0x899E47: call    dword ptr [edx+8]
0x899E4A: mov     eax, [edi+0C0h]
0x899E50: test    eax, eax
0x899E52: js      short loc_899E7C
0x899E54: mov     ecx, [edi+0B8h]
0x899E5A: mov     edx, [esi]
0x899E5C: and     eax, 3FFFFFFFh
0x899E61: shl     eax, 2
0x899E64: push    eax
0x899E65: mov     eax, [edi+0BCh]
0x899E6B: shl     eax, 2
0x899E6E: push    eax
0x899E6F: push    ecx
0x899E70: push    4
0x899E72: push    offset aPhantomptrs; "PhantomPtrs"
0x899E77: mov     ecx, esi
0x899E79: call    dword ptr [edx+4]
0x899E7C: mov     eax, [edi+0BCh]
0x899E82: xor     ebx, ebx
0x899E84: test    eax, eax
0x899E86: jle     short loc_899EB3
0x899E88: jmp     short loc_899E90
0x899E8A: align 10h
0x899E90: mov     eax, [edi+0B8h]
0x899E96: mov     ecx, [eax+ebx*4]
0x899E99: mov     edx, [esi]
0x899E9B: push    ecx
0x899E9C: push    2
0x899E9E: push    offset aPhantoms; "Phantoms"
0x899EA3: mov     ecx, esi
0x899EA5: call    dword ptr [edx+8]
0x899EA8: mov     eax, [edi+0BCh]
0x899EAE: inc     ebx
0x899EAF: cmp     ebx, eax
0x899EB1: jl      short loc_899E90
0x899EB3: mov     edx, [esi]
0x899EB5: push    offset aInternal; "Internal"
0x899EBA: mov     ecx, esi
0x899EBC: call    dword ptr [edx+0Ch]
0x899EBF: mov     ecx, [edi+8]
0x899EC2: mov     eax, [esi]
0x899EC4: push    ecx
0x899EC5: push    4
0x899EC7: push    offset aSimulation; "Simulation"
0x899ECC: mov     ecx, esi
0x899ECE: call    dword ptr [eax+8]
0x899ED1: mov     eax, [edi+58h]
0x899ED4: test    eax, eax
0x899ED6: js      short loc_899EFA
0x899ED8: mov     ecx, [edi+50h]
0x899EDB: mov     edx, [esi]
0x899EDD: and     eax, 3FFFFFFFh
0x899EE2: shl     eax, 2
0x899EE5: push    eax
0x899EE6: mov     eax, [edi+54h]
0x899EE9: shl     eax, 2
0x899EEC: push    eax
0x899EED: push    ecx
0x899EEE: push    8
0x899EF0: push    offset aDirtyislptr; "DirtyIslPtr"
0x899EF5: mov     ecx, esi
0x899EF7: call    dword ptr [edx+4]
0x899EFA: mov     eax, [edi+5Ch]
0x899EFD: mov     edx, [esi]
0x899EFF: push    eax
0x899F00: push    4
0x899F02: push    offset aMaintncemgr; "MaintnceMgr"
0x899F07: mov     ecx, esi
0x899F09: call    dword ptr [edx+8]
0x899F0C: mov     eax, [edi+80h]
0x899F12: mov     edx, [esi]
0x899F14: push    0
0x899F16: push    28h ; '('
0x899F18: push    eax
0x899F19: push    4
0x899F1B: push    offset aOpqueue; "OpQueue"
0x899F20: mov     ecx, esi
0x899F22: call    dword ptr [edx+4]
0x899F25: mov     edx, [esi]
0x899F27: push    offset aOpqueue; "OpQueue"
0x899F2C: mov     ecx, esi
0x899F2E: call    dword ptr [edx+0Ch]
0x899F31: mov     ecx, [edi+80h]
0x899F37: mov     eax, [ecx+8]
0x899F3A: test    eax, eax
0x899F3C: js      short loc_899F65
0x899F3E: mov     edx, [esi]
0x899F40: and     eax, 3FFFFFFFh
0x899F45: lea     eax, [eax+eax*4]
0x899F48: shl     eax, 2
0x899F4B: push    eax
0x899F4C: mov     eax, [ecx+4]
0x899F4F: mov     ecx, [ecx]
0x899F51: lea     eax, [eax+eax*4]
0x899F54: shl     eax, 2
0x899F57: push    eax
0x899F58: push    ecx
0x899F59: push    8
0x899F5B: push    offset aOperations; "Operations"
0x899F60: mov     ecx, esi
0x899F62: call    dword ptr [edx+4]
0x899F65: mov     edx, [esi]
0x899F67: mov     ecx, esi
0x899F69: call    dword ptr [edx+10h]
0x899F6C: mov     eax, [esi]
0x899F6E: push    offset aCollide; "Collide"
0x899F73: mov     ecx, esi
0x899F75: call    dword ptr [eax+0Ch]
0x899F78: mov     eax, [edi+64h]
0x899F7B: mov     edx, [esi]
0x899F7D: push    eax
0x899F7E: push    4
0x899F80: push    offset aBroadphase; "Broadphase"
0x899F85: mov     ecx, esi
0x899F87: call    dword ptr [edx+8]
0x899F8A: mov     eax, [edi+68h]
0x899F8D: mov     edx, [esi]
0x899F8F: push    0
0x899F91: push    104h
0x899F96: push    eax
0x899F97: push    4
0x899F99: push    offset aBpdispatch; "BpDispatch"
0x899F9E: mov     ecx, esi
0x899FA0: call    dword ptr [edx+4]
0x899FA3: mov     eax, [edi+70h]
0x899FA6: mov     edx, [esi]
0x899FA8: push    0
0x899FAA: push    0Ch
0x899FAC: push    eax
0x899FAD: push    4
0x899FAF: push    offset aBpdispatch; "BpDispatch"
0x899FB4: mov     ecx, esi
0x899FB6: call    dword ptr [edx+4]
0x899FB9: mov     eax, [edi+6Ch]
0x899FBC: mov     edx, [esi]
0x899FBE: push    0
0x899FC0: push    8
0x899FC2: push    eax
0x899FC3: push    4
0x899FC5: push    offset aBpdispatch; "BpDispatch"
0x899FCA: mov     ecx, esi
0x899FCC: call    dword ptr [edx+4]
0x899FCF: mov     eax, [edi+74h]
0x899FD2: mov     edx, [esi]
0x899FD4: push    0
0x899FD6: push    2Ch ; ','
0x899FD8: push    eax
0x899FD9: push    4
0x899FDB: push    offset aCollinput; "CollInput"
0x899FE0: mov     ecx, esi
0x899FE2: call    dword ptr [edx+4]
0x899FE5: mov     eax, [edi+78h]
0x899FE8: mov     edx, [esi]
0x899FEA: push    eax
0x899FEB: push    1
0x899FED: push    offset aFilter_0; "Filter"
0x899FF2: mov     ecx, esi
0x899FF4: call    dword ptr [edx+8]
0x899FF7: mov     eax, [edi+7Ch]
0x899FFA: mov     edx, [esi]
0x899FFC: push    eax
0x899FFD: push    4
0x899FFF: push    offset aDispatcher; "Dispatcher"
0x89A004: mov     ecx, esi
0x89A006: call    dword ptr [edx+8]
0x89A009: mov     edx, [esi]
0x89A00B: mov     ecx, esi
0x89A00D: call    dword ptr [edx+10h]
0x89A010: mov     eax, [esi]
0x89A012: mov     ecx, esi
0x89A014: call    dword ptr [eax+10h]
0x89A017: mov     edx, [esi]
0x89A019: push    offset aListeners; "Listeners"
0x89A01E: mov     ecx, esi
0x89A020: call    dword ptr [edx+0Ch]
0x89A023: mov     eax, [edi+0D8h]
0x89A029: test    eax, eax
0x89A02B: js      short loc_89A055
0x89A02D: mov     ecx, [edi+0D0h]
0x89A033: mov     edx, [esi]
0x89A035: and     eax, 3FFFFFFFh
0x89A03A: shl     eax, 2
0x89A03D: push    eax
0x89A03E: mov     eax, [edi+0D4h]
0x89A044: shl     eax, 2
0x89A047: push    eax
0x89A048: push    ecx
0x89A049: push    4
0x89A04B: push    offset aEntlisptr; "EntLisPtr"
0x89A050: mov     ecx, esi
0x89A052: call    dword ptr [edx+4]
0x89A055: mov     eax, [edi+0E4h]
0x89A05B: test    eax, eax
0x89A05D: js      short loc_89A087
0x89A05F: mov     ecx, [edi+0DCh]
0x89A065: mov     edx, [esi]
0x89A067: and     eax, 3FFFFFFFh
0x89A06C: shl     eax, 2
0x89A06F: push    eax
0x89A070: mov     eax, [edi+0E0h]
0x89A076: shl     eax, 2
0x89A079: push    eax
0x89A07A: push    ecx
0x89A07B: push    4
0x89A07D: push    offset aPhantlisptr; "PhantLisPtr"
0x89A082: mov     ecx, esi
0x89A084: call    dword ptr [edx+4]
0x89A087: mov     eax, [edi+0F0h]
0x89A08D: test    eax, eax
0x89A08F: js      short loc_89A0B9
0x89A091: mov     ecx, [edi+0E8h]
0x89A097: mov     edx, [esi]
0x89A099: and     eax, 3FFFFFFFh
0x89A09E: shl     eax, 2
0x89A0A1: push    eax
0x89A0A2: mov     eax, [edi+0ECh]
0x89A0A8: shl     eax, 2
0x89A0AB: push    eax
0x89A0AC: push    ecx
0x89A0AD: push    4
0x89A0AF: push    offset aConstrlisptr; "ConstrLisPtr"
0x89A0B4: mov     ecx, esi
0x89A0B6: call    dword ptr [edx+4]
0x89A0B9: mov     eax, [edi+0FCh]
0x89A0BF: test    eax, eax
0x89A0C1: js      short loc_89A0EB
0x89A0C3: mov     ecx, [edi+0F4h]
0x89A0C9: mov     edx, [esi]
0x89A0CB: and     eax, 3FFFFFFFh
0x89A0D0: shl     eax, 2
0x89A0D3: push    eax
0x89A0D4: mov     eax, [edi+0F8h]
0x89A0DA: shl     eax, 2
0x89A0DD: push    eax
0x89A0DE: push    ecx
0x89A0DF: push    4
0x89A0E1: push    offset aWlddellisptr; "WldDelLisPtr"
0x89A0E6: mov     ecx, esi
0x89A0E8: call    dword ptr [edx+4]
0x89A0EB: mov     eax, [edi+108h]
0x89A0F1: test    eax, eax
0x89A0F3: js      short loc_89A11D
0x89A0F5: mov     ecx, [edi+100h]
0x89A0FB: mov     edx, [esi]
0x89A0FD: and     eax, 3FFFFFFFh
0x89A102: shl     eax, 2
0x89A105: push    eax
0x89A106: mov     eax, [edi+104h]
0x89A10C: shl     eax, 2
0x89A10F: push    eax
0x89A110: push    ecx
0x89A111: push    4
0x89A113: push    offset aIslactlisptr; "IslActLisPtr"
0x89A118: mov     ecx, esi
0x89A11A: call    dword ptr [edx+4]
0x89A11D: mov     eax, [edi+114h]
0x89A123: test    eax, eax
0x89A125: js      short loc_89A14F
0x89A127: mov     ecx, [edi+10Ch]
0x89A12D: mov     edx, [esi]
0x89A12F: and     eax, 3FFFFFFFh
0x89A134: shl     eax, 2
0x89A137: push    eax
0x89A138: mov     eax, [edi+110h]
0x89A13E: shl     eax, 2
0x89A141: push    eax
0x89A142: push    ecx
0x89A143: push    4
0x89A145: push    offset aPstsimlisptr; "PstSimLisPtr"
0x89A14A: mov     ecx, esi
0x89A14C: call    dword ptr [edx+4]
0x89A14F: mov     eax, [edi+120h]
0x89A155: test    eax, eax
0x89A157: js      short loc_89A181
0x89A159: mov     ecx, [edi+118h]
0x89A15F: mov     edx, [esi]
0x89A161: and     eax, 3FFFFFFFh
0x89A166: shl     eax, 2
0x89A169: push    eax
0x89A16A: mov     eax, [edi+11Ch]
0x89A170: shl     eax, 2
0x89A173: push    eax
0x89A174: push    ecx
0x89A175: push    4
0x89A177: push    offset aPstintlisptr; "PstIntLisPtr"
0x89A17C: mov     ecx, esi
0x89A17E: call    dword ptr [edx+4]
0x89A181: mov     eax, [edi+12Ch]
0x89A187: test    eax, eax
0x89A189: js      short loc_89A1B3
0x89A18B: mov     ecx, [edi+124h]
0x89A191: mov     edx, [esi]
0x89A193: and     eax, 3FFFFFFFh
0x89A198: shl     eax, 2
0x89A19B: push    eax
0x89A19C: mov     eax, [edi+128h]
0x89A1A2: shl     eax, 2
0x89A1A5: push    eax
0x89A1A6: push    ecx
0x89A1A7: push    4
0x89A1A9: push    offset aPstcollisptr; "PstColLisPtr"
0x89A1AE: mov     ecx, esi
0x89A1B0: call    dword ptr [edx+4]
0x89A1B3: mov     eax, [edi+138h]
0x89A1B9: test    eax, eax
0x89A1BB: js      short loc_89A1E5
0x89A1BD: mov     ecx, [edi+130h]
0x89A1C3: mov     edx, [esi]
0x89A1C5: and     eax, 3FFFFFFFh
0x89A1CA: shl     eax, 2
0x89A1CD: push    eax
0x89A1CE: mov     eax, [edi+134h]
0x89A1D4: shl     eax, 2
0x89A1D7: push    eax
0x89A1D8: push    ecx
0x89A1D9: push    4
0x89A1DB: push    offset aPstintlisptr; "PstIntLisPtr"
0x89A1E0: mov     ecx, esi
0x89A1E2: call    dword ptr [edx+4]
0x89A1E5: mov     eax, [edi+150h]
0x89A1EB: test    eax, eax
0x89A1ED: js      short loc_89A217
0x89A1EF: mov     ecx, [edi+148h]
0x89A1F5: mov     edx, [esi]
0x89A1F7: and     eax, 3FFFFFFFh
0x89A1FC: shl     eax, 2
0x89A1FF: push    eax
0x89A200: mov     eax, [edi+14Ch]
0x89A206: shl     eax, 2
0x89A209: push    eax
0x89A20A: push    ecx
0x89A20B: push    4
0x89A20D: push    offset aColllisptr; "CollLisPtr"
0x89A212: mov     ecx, esi
0x89A214: call    dword ptr [edx+4]
0x89A217: mov     edx, [esi]
0x89A219: mov     ecx, esi
0x89A21B: call    dword ptr [edx+10h]
0x89A21E: mov     eax, [esi]
0x89A220: mov     ecx, esi
0x89A222: call    dword ptr [eax+14h]
0x89A225: pop     edi
0x89A226: pop     esi
0x89A227: pop     ebx
0x89A228: retn    4
