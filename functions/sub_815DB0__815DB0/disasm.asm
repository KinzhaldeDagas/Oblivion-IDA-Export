0x815DB0: push    0FFFFFFFFh
0x815DB2: push    offset SEH_815DB0
0x815DB7: mov     eax, large fs:0
0x815DBD: push    eax
0x815DBE: sub     esp, 0Ch
0x815DC1: push    ebx
0x815DC2: push    ebp
0x815DC3: push    esi
0x815DC4: push    edi
0x815DC5: mov     eax, ds:0B30AACh
0x815DCA: xor     eax, esp
0x815DCC: push    eax
0x815DCD: lea     eax, [esp+2Ch+var_C]
0x815DD1: mov     large fs:0, eax
0x815DD7: xor     esi, esi
0x815DD9: mov     [esp+2Ch+var_14], esi
0x815DDD: xor     ebx, ebx
0x815DDF: mov     [esp+2Ch+var_4], esi
0x815DE3: mov     [esp+2Ch+a3], ebx
0x815DE7: mov     eax, ds:0B45604h
0x815DEC: test    eax, eax
0x815DEE: mov     ebp, 1
0x815DF3: mov     byte ptr [esp+2Ch+var_4], 1
0x815DF8: jz      short loc_815E07
0x815DFA: mov     esi, eax
0x815DFC: test    esi, esi
0x815DFE: mov     [esp+2Ch+var_14], esi
0x815E02: jz      short loc_815E07
0x815E04: add     [esi+60h], ebp
0x815E07: mov     eax, [esi+18h]
0x815E0A: cmp     eax, 2
0x815E0D: jnb     loc_815ED8
0x815E13: lea     eax, [esp+2Ch+var_10]
0x815E17: push    eax
0x815E18: call    sub_772630
0x815E1D: add     esp, 4
0x815E20: mov     eax, [eax]
0x815E22: test    eax, eax
0x815E24: jz      short loc_815E2F
0x815E26: mov     ebx, eax
0x815E28: add     [ebx+5Ch], ebp
0x815E2B: mov     [esp+2Ch+a3], ebx
0x815E2F: mov     eax, [esp+2Ch+var_10]
0x815E33: test    eax, eax
0x815E35: mov     byte ptr [esp+2Ch+var_4], 1
0x815E3A: jz      short loc_815E4F
0x815E3C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x815E40: mov     ecx, eax
0x815E42: add     eax, 5Ch ; '\'
0x815E45: cmp     dword ptr [eax], 0
0x815E48: jnz     short loc_815E4F
0x815E4A: call    sub_772560
0x815E4F: push    2
0x815E51: push    ebp
0x815E52: push    0
0x815E54: push    ebx
0x815E55: call    sub_801110
0x815E5A: mov     ecx, [esi+14h]
0x815E5D: add     esp, 10h
0x815E60: push    ebx; a3
0x815E61: push    ecx; a2
0x815E62: mov     ecx, esi; this
0x815E64: call    sub_760010
0x815E69: lea     edx, [esp+2Ch+var_10]
0x815E6D: push    edx
0x815E6E: call    sub_772630
0x815E73: add     esp, 4
0x815E76: mov     edi, eax
0x815E78: cmp     ebx, [edi]
0x815E7A: mov     byte ptr [esp+2Ch+var_4], 3
0x815E7F: jz      short loc_815E9F
0x815E81: test    ebx, ebx
0x815E83: jz      short loc_815E92
0x815E85: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x815E89: jnz     short loc_815E92
0x815E8B: mov     ecx, ebx
0x815E8D: call    sub_772560
0x815E92: mov     ebx, [edi]
0x815E94: test    ebx, ebx
0x815E96: mov     [esp+2Ch+a3], ebx
0x815E9A: jz      short loc_815E9F
0x815E9C: add     [ebx+5Ch], ebp
0x815E9F: mov     eax, [esp+2Ch+var_10]
0x815EA3: test    eax, eax
0x815EA5: mov     byte ptr [esp+2Ch+var_4], 1
0x815EAA: jz      short loc_815EBF
0x815EAC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x815EB0: mov     ecx, eax
0x815EB2: add     eax, 5Ch ; '\'
0x815EB5: cmp     dword ptr [eax], 0
0x815EB8: jnz     short loc_815EBF
0x815EBA: call    sub_772560
0x815EBF: push    2
0x815EC1: push    ebp
0x815EC2: push    ebp
0x815EC3: push    ebx
0x815EC4: call    sub_801110
0x815EC9: mov     eax, [esi+14h]
0x815ECC: add     esp, 10h
0x815ECF: push    ebx; a3
0x815ED0: push    eax; a2
0x815ED1: mov     ecx, esi; this
0x815ED3: call    sub_760010
0x815ED8: mov     eax, ds:0B452B8h
0x815EDD: mov     edi, [esi+58h]
0x815EE0: cmp     edi, eax
0x815EE2: mov     ebp, eax
0x815EE4: jz      short loc_815F17
0x815EE6: test    edi, edi
0x815EE8: jz      short loc_815F06
0x815EEA: lea     ecx, [edi+4]
0x815EED: push    ecx; lpAddend
0x815EEE: call    dword ptr ds:0A2807Ch
0x815EF4: test    eax, eax
0x815EF6: jnz     short loc_815F06
0x815EF8: test    edi, edi
0x815EFA: jz      short loc_815F06
0x815EFC: mov     edx, [edi]
0x815EFE: mov     eax, [edx]
0x815F00: push    1
0x815F02: mov     ecx, edi
0x815F04: call    eax
0x815F06: test    ebp, ebp
0x815F08: mov     [esi+58h], ebp
0x815F0B: jz      short loc_815F17
0x815F0D: add     ebp, 4
0x815F10: push    ebp; lpAddend
0x815F11: call    dword ptr ds:0A28078h
0x815F17: mov     eax, ds:0B450ACh
0x815F1C: mov     edi, [esi+44h]
0x815F1F: cmp     edi, eax
0x815F21: mov     ebp, eax
0x815F23: jz      short loc_815F56
0x815F25: test    edi, edi
0x815F27: jz      short loc_815F45
0x815F29: lea     ecx, [edi+4]
0x815F2C: push    ecx; lpAddend
0x815F2D: call    dword ptr ds:0A2807Ch
0x815F33: test    eax, eax
0x815F35: jnz     short loc_815F45
0x815F37: test    edi, edi
0x815F39: jz      short loc_815F45
0x815F3B: mov     edx, [edi]
0x815F3D: mov     eax, [edx]
0x815F3F: push    1
0x815F41: mov     ecx, edi
0x815F43: call    eax
0x815F45: test    ebp, ebp
0x815F47: mov     [esi+44h], ebp
0x815F4A: jz      short loc_815F56
0x815F4C: add     ebp, 4
0x815F4F: push    ebp; lpAddend
0x815F50: call    dword ptr ds:0A28078h
0x815F56: cmp     dword ptr [esi+30h], 0
0x815F5A: jnz     short loc_815F64
0x815F5C: call    sub_772DF0
0x815F61: mov     [esi+30h], eax
0x815F64: mov     ecx, [esi+30h]
0x815F67: push    0
0x815F69: push    0
0x815F6B: push    1Bh
0x815F6D: call    sub_772CD0
0x815F72: cmp     dword ptr [esi+30h], 0
0x815F76: jnz     short loc_815F80
0x815F78: call    sub_772DF0
0x815F7D: mov     [esi+30h], eax
0x815F80: mov     ecx, [esi+30h]
0x815F83: push    0
0x815F85: push    0
0x815F87: push    0Fh
0x815F89: call    sub_772CD0
0x815F8E: cmp     dword ptr [esi+30h], 0
0x815F92: jnz     short loc_815F9C
0x815F94: call    sub_772DF0
0x815F99: mov     [esi+30h], eax
0x815F9C: mov     ecx, [esi+30h]
0x815F9F: push    0
0x815FA1: push    1
0x815FA3: push    7
0x815FA5: call    sub_772CD0
0x815FAA: cmp     dword ptr [esi+30h], 0
0x815FAE: jnz     short loc_815FB8
0x815FB0: call    sub_772DF0
0x815FB5: mov     [esi+30h], eax
0x815FB8: mov     ecx, [esi+30h]
0x815FBB: push    0
0x815FBD: push    4
0x815FBF: push    17h
0x815FC1: call    sub_772CD0
0x815FC6: cmp     dword ptr [esi+30h], 0
0x815FCA: jnz     short loc_815FD4
0x815FCC: call    sub_772DF0
0x815FD1: mov     [esi+30h], eax
0x815FD4: mov     ecx, [esi+30h]
0x815FD7: push    0
0x815FD9: push    1
0x815FDB: push    0Eh
0x815FDD: call    sub_772CD0
0x815FE2: cmp     dword ptr [esi+30h], 0
0x815FE6: jnz     short loc_815FF0
0x815FE8: call    sub_772DF0
0x815FED: mov     [esi+30h], eax
0x815FF0: mov     ecx, [esi+30h]
0x815FF3: push    0
0x815FF5: push    0
0x815FF7: push    34h ; '4'
0x815FF9: call    sub_772CD0
0x815FFE: or      ebp, 0FFFFFFFFh
0x816001: cmp     esi, ds:0B45608h
0x816007: mov     dword ptr ds:0B43B84h, 82h ; '‚'
0x816011: mov     dword ptr ds:0B44214h, 0Ch
0x81601B: jz      short loc_81603B
0x81601D: add     [esi+60h], ebp
0x816020: jnz     short loc_816029
0x816022: mov     ecx, esi
0x816024: call    sub_7604D0
0x816029: mov     esi, ds:0B45608h
0x81602F: test    esi, esi
0x816031: mov     [esp+2Ch+var_14], esi
0x816035: jz      short loc_81603B
0x816037: add     dword ptr [esi+60h], 1
0x81603B: mov     eax, [esi+18h]
0x81603E: cmp     eax, 2
0x816041: jnb     loc_816127
0x816047: lea     ecx, [esp+2Ch+var_10]
0x81604B: push    ecx
0x81604C: call    sub_772630
0x816051: add     esp, 4
0x816054: mov     edi, eax
0x816056: cmp     ebx, [edi]
0x816058: mov     byte ptr [esp+2Ch+var_4], 4
0x81605D: jz      short loc_81607D
0x81605F: test    ebx, ebx
0x816061: jz      short loc_81606F
0x816063: add     [ebx+5Ch], ebp
0x816066: jnz     short loc_81606F
0x816068: mov     ecx, ebx
0x81606A: call    sub_772560
0x81606F: mov     ebx, [edi]
0x816071: test    ebx, ebx
0x816073: mov     [esp+2Ch+a3], ebx
0x816077: jz      short loc_81607D
0x816079: add     dword ptr [ebx+5Ch], 1
0x81607D: mov     eax, [esp+2Ch+var_10]
0x816081: test    eax, eax
0x816083: mov     byte ptr [esp+2Ch+var_4], 1
0x816088: jz      short loc_81609C
0x81608A: add     [eax+5Ch], ebp
0x81608D: mov     ecx, eax
0x81608F: add     eax, 5Ch ; '\'
0x816092: cmp     dword ptr [eax], 0
0x816095: jnz     short loc_81609C
0x816097: call    sub_772560
0x81609C: push    2
0x81609E: push    1
0x8160A0: push    0
0x8160A2: push    ebx
0x8160A3: call    sub_801110
0x8160A8: mov     edx, [esi+14h]
0x8160AB: add     esp, 10h
0x8160AE: push    ebx; a3
0x8160AF: push    edx; a2
0x8160B0: mov     ecx, esi; this
0x8160B2: call    sub_760010
0x8160B7: lea     eax, [esp+2Ch+var_10]
0x8160BB: push    eax
0x8160BC: call    sub_772630
0x8160C1: add     esp, 4
0x8160C4: mov     edi, eax
0x8160C6: cmp     ebx, [edi]
0x8160C8: mov     byte ptr [esp+2Ch+var_4], 5
0x8160CD: jz      short loc_8160ED
0x8160CF: test    ebx, ebx
0x8160D1: jz      short loc_8160DF
0x8160D3: add     [ebx+5Ch], ebp
0x8160D6: jnz     short loc_8160DF
0x8160D8: mov     ecx, ebx
0x8160DA: call    sub_772560
0x8160DF: mov     ebx, [edi]
0x8160E1: test    ebx, ebx
0x8160E3: mov     [esp+2Ch+a3], ebx
0x8160E7: jz      short loc_8160ED
0x8160E9: add     dword ptr [ebx+5Ch], 1
0x8160ED: mov     eax, [esp+2Ch+var_10]
0x8160F1: test    eax, eax
0x8160F3: mov     byte ptr [esp+2Ch+var_4], 1
0x8160F8: jz      short loc_81610C
0x8160FA: add     [eax+5Ch], ebp
0x8160FD: mov     ecx, eax
0x8160FF: add     eax, 5Ch ; '\'
0x816102: cmp     dword ptr [eax], 0
0x816105: jnz     short loc_81610C
0x816107: call    sub_772560
0x81610C: push    2
0x81610E: push    1
0x816110: push    1
0x816112: push    ebx
0x816113: call    sub_801110
0x816118: mov     ecx, [esi+14h]
0x81611B: add     esp, 10h
0x81611E: push    ebx; a3
0x81611F: push    ecx; a2
0x816120: mov     ecx, esi; this
0x816122: call    sub_760010
0x816127: mov     eax, ds:0B452C0h
0x81612C: mov     edi, [esi+58h]
0x81612F: cmp     edi, eax
0x816131: mov     ebp, eax
0x816133: jz      short loc_816166
0x816135: test    edi, edi
0x816137: jz      short loc_816155
0x816139: lea     edx, [edi+4]
0x81613C: push    edx; lpAddend
0x81613D: call    dword ptr ds:0A2807Ch
0x816143: test    eax, eax
0x816145: jnz     short loc_816155
0x816147: test    edi, edi
0x816149: jz      short loc_816155
0x81614B: mov     eax, [edi]
0x81614D: mov     edx, [eax]
0x81614F: push    1
0x816151: mov     ecx, edi
0x816153: call    edx
0x816155: test    ebp, ebp
0x816157: mov     [esi+58h], ebp
0x81615A: jz      short loc_816166
0x81615C: add     ebp, 4
0x81615F: push    ebp; lpAddend
0x816160: call    dword ptr ds:0A28078h
0x816166: mov     eax, ds:0B450BCh
0x81616B: mov     edi, [esi+44h]
0x81616E: cmp     edi, eax
0x816170: mov     ebp, eax
0x816172: jz      short loc_8161A5
0x816174: test    edi, edi
0x816176: jz      short loc_816194
0x816178: lea     eax, [edi+4]
0x81617B: push    eax; lpAddend
0x81617C: call    dword ptr ds:0A2807Ch
0x816182: test    eax, eax
0x816184: jnz     short loc_816194
0x816186: test    edi, edi
0x816188: jz      short loc_816194
0x81618A: mov     edx, [edi]
0x81618C: mov     eax, [edx]
0x81618E: push    1
0x816190: mov     ecx, edi
0x816192: call    eax
0x816194: test    ebp, ebp
0x816196: mov     [esi+44h], ebp
0x816199: jz      short loc_8161A5
0x81619B: add     ebp, 4
0x81619E: push    ebp; lpAddend
0x81619F: call    dword ptr ds:0A28078h
0x8161A5: cmp     dword ptr [esi+30h], 0
0x8161A9: jnz     short loc_8161B3
0x8161AB: call    sub_772DF0
0x8161B0: mov     [esi+30h], eax
0x8161B3: mov     ecx, [esi+30h]
0x8161B6: push    0
0x8161B8: push    0
0x8161BA: push    1Bh
0x8161BC: call    sub_772CD0
0x8161C1: cmp     dword ptr [esi+30h], 0
0x8161C5: jnz     short loc_8161CF
0x8161C7: call    sub_772DF0
0x8161CC: mov     [esi+30h], eax
0x8161CF: mov     ecx, [esi+30h]
0x8161D2: push    0
0x8161D4: push    0
0x8161D6: push    0Fh
0x8161D8: call    sub_772CD0
0x8161DD: cmp     dword ptr [esi+30h], 0
0x8161E1: jnz     short loc_8161EB
0x8161E3: call    sub_772DF0
0x8161E8: mov     [esi+30h], eax
0x8161EB: mov     ecx, [esi+30h]
0x8161EE: push    0
0x8161F0: push    1
0x8161F2: push    7
0x8161F4: call    sub_772CD0
0x8161F9: cmp     dword ptr [esi+30h], 0
0x8161FD: jnz     short loc_816207
0x8161FF: call    sub_772DF0
0x816204: mov     [esi+30h], eax
0x816207: mov     ecx, [esi+30h]
0x81620A: push    0
0x81620C: push    4
0x81620E: push    17h
0x816210: call    sub_772CD0
0x816215: cmp     dword ptr [esi+30h], 0
0x816219: jnz     short loc_816223
0x81621B: call    sub_772DF0
0x816220: mov     [esi+30h], eax
0x816223: mov     ecx, [esi+30h]
0x816226: push    0
0x816228: push    1
0x81622A: push    0Eh
0x81622C: call    sub_772CD0
0x816231: cmp     dword ptr [esi+30h], 0
0x816235: jnz     short loc_81623F
0x816237: call    sub_772DF0
0x81623C: mov     [esi+30h], eax
0x81623F: mov     ecx, [esi+30h]
0x816242: push    0
0x816244: push    0
0x816246: push    34h ; '4'
0x816248: call    sub_772CD0
0x81624D: or      ebp, 0FFFFFFFFh
0x816250: cmp     esi, ds:0B45670h
0x816256: mov     dword ptr ds:0B43B88h, 82h ; '‚'
0x816260: mov     dword ptr ds:0B44218h, 0Ch
0x81626A: jz      short loc_81628A
0x81626C: add     [esi+60h], ebp
0x81626F: jnz     short loc_816278
0x816271: mov     ecx, esi
0x816273: call    sub_7604D0
0x816278: mov     esi, ds:0B45670h
0x81627E: test    esi, esi
0x816280: mov     [esp+2Ch+var_14], esi
0x816284: jz      short loc_81628A
0x816286: add     dword ptr [esi+60h], 1
0x81628A: mov     eax, [esi+18h]
0x81628D: cmp     eax, 2
0x816290: jnb     loc_816376
0x816296: lea     ecx, [esp+2Ch+var_10]
0x81629A: push    ecx
0x81629B: call    sub_772630
0x8162A0: add     esp, 4
0x8162A3: mov     edi, eax
0x8162A5: cmp     ebx, [edi]
0x8162A7: mov     byte ptr [esp+2Ch+var_4], 6
0x8162AC: jz      short loc_8162CC
0x8162AE: test    ebx, ebx
0x8162B0: jz      short loc_8162BE
0x8162B2: add     [ebx+5Ch], ebp
0x8162B5: jnz     short loc_8162BE
0x8162B7: mov     ecx, ebx
0x8162B9: call    sub_772560
0x8162BE: mov     ebx, [edi]
0x8162C0: test    ebx, ebx
0x8162C2: mov     [esp+2Ch+a3], ebx
0x8162C6: jz      short loc_8162CC
0x8162C8: add     dword ptr [ebx+5Ch], 1
0x8162CC: mov     eax, [esp+2Ch+var_10]
0x8162D0: test    eax, eax
0x8162D2: mov     byte ptr [esp+2Ch+var_4], 1
0x8162D7: jz      short loc_8162EB
0x8162D9: add     [eax+5Ch], ebp
0x8162DC: mov     ecx, eax
0x8162DE: add     eax, 5Ch ; '\'
0x8162E1: cmp     dword ptr [eax], 0
0x8162E4: jnz     short loc_8162EB
0x8162E6: call    sub_772560
0x8162EB: push    2
0x8162ED: push    1
0x8162EF: push    0
0x8162F1: push    ebx
0x8162F2: call    sub_801110
0x8162F7: mov     edx, [esi+14h]
0x8162FA: add     esp, 10h
0x8162FD: push    ebx; a3
0x8162FE: push    edx; a2
0x8162FF: mov     ecx, esi; this
0x816301: call    sub_760010
0x816306: lea     eax, [esp+2Ch+var_10]
0x81630A: push    eax
0x81630B: call    sub_772630
0x816310: add     esp, 4
0x816313: mov     edi, eax
0x816315: cmp     ebx, [edi]
0x816317: mov     byte ptr [esp+2Ch+var_4], 7
0x81631C: jz      short loc_81633C
0x81631E: test    ebx, ebx
0x816320: jz      short loc_81632E
0x816322: add     [ebx+5Ch], ebp
0x816325: jnz     short loc_81632E
0x816327: mov     ecx, ebx
0x816329: call    sub_772560
0x81632E: mov     ebx, [edi]
0x816330: test    ebx, ebx
0x816332: mov     [esp+2Ch+a3], ebx
0x816336: jz      short loc_81633C
0x816338: add     dword ptr [ebx+5Ch], 1
0x81633C: mov     eax, [esp+2Ch+var_10]
0x816340: test    eax, eax
0x816342: mov     byte ptr [esp+2Ch+var_4], 1
0x816347: jz      short loc_81635B
0x816349: add     [eax+5Ch], ebp
0x81634C: mov     ecx, eax
0x81634E: add     eax, 5Ch ; '\'
0x816351: cmp     dword ptr [eax], 0
0x816354: jnz     short loc_81635B
0x816356: call    sub_772560
0x81635B: push    2
0x81635D: push    1
0x81635F: push    1
0x816361: push    ebx
0x816362: call    sub_801110
0x816367: mov     ecx, [esi+14h]
0x81636A: add     esp, 10h
0x81636D: push    ebx; a3
0x81636E: push    ecx; a2
0x81636F: mov     ecx, esi; this
0x816371: call    sub_760010
0x816376: mov     eax, ds:0B452BCh
0x81637B: mov     edi, [esi+58h]
0x81637E: cmp     edi, eax
0x816380: mov     ebp, eax
0x816382: jz      short loc_8163B5
0x816384: test    edi, edi
0x816386: jz      short loc_8163A4
0x816388: lea     edx, [edi+4]
0x81638B: push    edx; lpAddend
0x81638C: call    dword ptr ds:0A2807Ch
0x816392: test    eax, eax
0x816394: jnz     short loc_8163A4
0x816396: test    edi, edi
0x816398: jz      short loc_8163A4
0x81639A: mov     eax, [edi]
0x81639C: mov     edx, [eax]
0x81639E: push    1
0x8163A0: mov     ecx, edi
0x8163A2: call    edx
0x8163A4: test    ebp, ebp
0x8163A6: mov     [esi+58h], ebp
0x8163A9: jz      short loc_8163B5
0x8163AB: add     ebp, 4
0x8163AE: push    ebp; lpAddend
0x8163AF: call    dword ptr ds:0A28078h
0x8163B5: mov     eax, ds:0B450B0h
0x8163BA: mov     edi, [esi+44h]
0x8163BD: cmp     edi, eax
0x8163BF: mov     ebp, eax
0x8163C1: jz      short loc_8163F4
0x8163C3: test    edi, edi
0x8163C5: jz      short loc_8163E3
0x8163C7: lea     eax, [edi+4]
0x8163CA: push    eax; lpAddend
0x8163CB: call    dword ptr ds:0A2807Ch
0x8163D1: test    eax, eax
0x8163D3: jnz     short loc_8163E3
0x8163D5: test    edi, edi
0x8163D7: jz      short loc_8163E3
0x8163D9: mov     edx, [edi]
0x8163DB: mov     eax, [edx]
0x8163DD: push    1
0x8163DF: mov     ecx, edi
0x8163E1: call    eax
0x8163E3: test    ebp, ebp
0x8163E5: mov     [esi+44h], ebp
0x8163E8: jz      short loc_8163F4
0x8163EA: add     ebp, 4
0x8163ED: push    ebp; lpAddend
0x8163EE: call    dword ptr ds:0A28078h
0x8163F4: cmp     dword ptr [esi+30h], 0
0x8163F8: jnz     short loc_816402
0x8163FA: call    sub_772DF0
0x8163FF: mov     [esi+30h], eax
0x816402: mov     ecx, [esi+30h]
0x816405: push    0
0x816407: push    0
0x816409: push    1Bh
0x81640B: call    sub_772CD0
0x816410: cmp     dword ptr [esi+30h], 0
0x816414: jnz     short loc_81641E
0x816416: call    sub_772DF0
0x81641B: mov     [esi+30h], eax
0x81641E: mov     ecx, [esi+30h]
0x816421: push    0
0x816423: push    0
0x816425: push    0Fh
0x816427: call    sub_772CD0
0x81642C: cmp     dword ptr [esi+30h], 0
0x816430: jnz     short loc_81643A
0x816432: call    sub_772DF0
0x816437: mov     [esi+30h], eax
0x81643A: mov     ecx, [esi+30h]
0x81643D: push    0
0x81643F: push    1
0x816441: push    7
0x816443: call    sub_772CD0
0x816448: cmp     dword ptr [esi+30h], 0
0x81644C: jnz     short loc_816456
0x81644E: call    sub_772DF0
0x816453: mov     [esi+30h], eax
0x816456: mov     ecx, [esi+30h]
0x816459: push    0
0x81645B: push    4
0x81645D: push    17h
0x81645F: call    sub_772CD0
0x816464: cmp     dword ptr [esi+30h], 0
0x816468: jnz     short loc_816472
0x81646A: call    sub_772DF0
0x81646F: mov     [esi+30h], eax
0x816472: mov     ecx, [esi+30h]
0x816475: push    0
0x816477: push    1
0x816479: push    0Eh
0x81647B: call    sub_772CD0
0x816480: cmp     dword ptr [esi+30h], 0
0x816484: jnz     short loc_81648E
0x816486: call    sub_772DF0
0x81648B: mov     [esi+30h], eax
0x81648E: mov     ecx, [esi+30h]
0x816491: push    0
0x816493: push    0
0x816495: push    34h ; '4'
0x816497: call    sub_772CD0
0x81649C: or      ebp, 0FFFFFFFFh
0x81649F: cmp     esi, ds:0B45674h
0x8164A5: mov     dword ptr ds:0B43BF0h, 18082h
0x8164AF: mov     dword ptr ds:0B44280h, 0Ch
0x8164B9: mov     dword ptr ds:0B43560h, 18000h
0x8164C3: jz      short loc_8164E3
0x8164C5: add     [esi+60h], ebp
0x8164C8: jnz     short loc_8164D1
0x8164CA: mov     ecx, esi
0x8164CC: call    sub_7604D0
0x8164D1: mov     esi, ds:0B45674h
0x8164D7: test    esi, esi
0x8164D9: mov     [esp+2Ch+var_14], esi
0x8164DD: jz      short loc_8164E3
0x8164DF: add     dword ptr [esi+60h], 1
0x8164E3: cmp     dword ptr [esi+18h], 2
0x8164E7: jnb     loc_8165CD
0x8164ED: lea     ecx, [esp+2Ch+var_10]
0x8164F1: push    ecx
0x8164F2: call    sub_772630
0x8164F7: add     esp, 4
0x8164FA: mov     edi, eax
0x8164FC: cmp     ebx, [edi]
0x8164FE: mov     byte ptr [esp+2Ch+var_4], 8
0x816503: jz      short loc_816523
0x816505: test    ebx, ebx
0x816507: jz      short loc_816515
0x816509: add     [ebx+5Ch], ebp
0x81650C: jnz     short loc_816515
0x81650E: mov     ecx, ebx
0x816510: call    sub_772560
0x816515: mov     ebx, [edi]
0x816517: test    ebx, ebx
0x816519: mov     [esp+2Ch+a3], ebx
0x81651D: jz      short loc_816523
0x81651F: add     dword ptr [ebx+5Ch], 1
0x816523: mov     eax, [esp+2Ch+var_10]
0x816527: test    eax, eax
0x816529: mov     byte ptr [esp+2Ch+var_4], 1
0x81652E: jz      short loc_816542
0x816530: add     [eax+5Ch], ebp
0x816533: mov     ecx, eax
0x816535: add     eax, 5Ch ; '\'
0x816538: cmp     dword ptr [eax], 0
0x81653B: jnz     short loc_816542
0x81653D: call    sub_772560
0x816542: push    2
0x816544: push    1
0x816546: push    0
0x816548: push    ebx
0x816549: call    sub_801110
0x81654E: mov     edx, [esi+14h]
0x816551: add     esp, 10h
0x816554: push    ebx; a3
0x816555: push    edx; a2
0x816556: mov     ecx, esi; this
0x816558: call    sub_760010
0x81655D: lea     eax, [esp+2Ch+var_10]
0x816561: push    eax
0x816562: call    sub_772630
0x816567: add     esp, 4
0x81656A: mov     edi, eax
0x81656C: cmp     ebx, [edi]
0x81656E: mov     byte ptr [esp+2Ch+var_4], 9
0x816573: jz      short loc_816593
0x816575: test    ebx, ebx
0x816577: jz      short loc_816585
0x816579: add     [ebx+5Ch], ebp
0x81657C: jnz     short loc_816585
0x81657E: mov     ecx, ebx
0x816580: call    sub_772560
0x816585: mov     ebx, [edi]
0x816587: test    ebx, ebx
0x816589: mov     [esp+2Ch+a3], ebx
0x81658D: jz      short loc_816593
0x81658F: add     dword ptr [ebx+5Ch], 1
0x816593: mov     eax, [esp+2Ch+var_10]
0x816597: test    eax, eax
0x816599: mov     byte ptr [esp+2Ch+var_4], 1
0x81659E: jz      short loc_8165B2
0x8165A0: add     [eax+5Ch], ebp
0x8165A3: mov     ecx, eax
0x8165A5: add     eax, 5Ch ; '\'
0x8165A8: cmp     dword ptr [eax], 0
0x8165AB: jnz     short loc_8165B2
0x8165AD: call    sub_772560
0x8165B2: push    2
0x8165B4: push    1
0x8165B6: push    1
0x8165B8: push    ebx
0x8165B9: call    sub_801110
0x8165BE: mov     ecx, [esi+14h]
0x8165C1: add     esp, 10h
0x8165C4: push    ebx; a3
0x8165C5: push    ecx; a2
0x8165C6: mov     ecx, esi; this
0x8165C8: call    sub_760010
0x8165CD: mov     eax, ds:0B452C4h
0x8165D2: mov     edi, [esi+58h]
0x8165D5: cmp     edi, eax
0x8165D7: mov     ebp, eax
0x8165D9: jz      short loc_81660C
0x8165DB: test    edi, edi
0x8165DD: jz      short loc_8165FB
0x8165DF: lea     edx, [edi+4]
0x8165E2: push    edx; lpAddend
0x8165E3: call    dword ptr ds:0A2807Ch
0x8165E9: test    eax, eax
0x8165EB: jnz     short loc_8165FB
0x8165ED: test    edi, edi
0x8165EF: jz      short loc_8165FB
0x8165F1: mov     eax, [edi]
0x8165F3: mov     edx, [eax]
0x8165F5: push    1
0x8165F7: mov     ecx, edi
0x8165F9: call    edx
0x8165FB: test    ebp, ebp
0x8165FD: mov     [esi+58h], ebp
0x816600: jz      short loc_81660C
0x816602: add     ebp, 4
0x816605: push    ebp; lpAddend
0x816606: call    dword ptr ds:0A28078h
0x81660C: mov     eax, ds:0B450C0h
0x816611: mov     edi, [esi+44h]
0x816614: cmp     edi, eax
0x816616: mov     ebp, eax
0x816618: jz      short loc_81664B
0x81661A: test    edi, edi
0x81661C: jz      short loc_81663A
0x81661E: lea     eax, [edi+4]
0x816621: push    eax; lpAddend
0x816622: call    dword ptr ds:0A2807Ch
0x816628: test    eax, eax
0x81662A: jnz     short loc_81663A
0x81662C: test    edi, edi
0x81662E: jz      short loc_81663A
0x816630: mov     edx, [edi]
0x816632: mov     eax, [edx]
0x816634: push    1
0x816636: mov     ecx, edi
0x816638: call    eax
0x81663A: test    ebp, ebp
0x81663C: mov     [esi+44h], ebp
0x81663F: jz      short loc_81664B
0x816641: add     ebp, 4
0x816644: push    ebp; lpAddend
0x816645: call    dword ptr ds:0A28078h
0x81664B: cmp     dword ptr [esi+30h], 0
0x81664F: jnz     short loc_816659
0x816651: call    sub_772DF0
0x816656: mov     [esi+30h], eax
0x816659: mov     ecx, [esi+30h]
0x81665C: push    0
0x81665E: push    0
0x816660: push    1Bh
0x816662: call    sub_772CD0
0x816667: cmp     dword ptr [esi+30h], 0
0x81666B: jnz     short loc_816675
0x81666D: call    sub_772DF0
0x816672: mov     [esi+30h], eax
0x816675: mov     ecx, [esi+30h]
0x816678: push    0
0x81667A: push    0
0x81667C: push    0Fh
0x81667E: call    sub_772CD0
0x816683: cmp     dword ptr [esi+30h], 0
0x816687: jnz     short loc_816691
0x816689: call    sub_772DF0
0x81668E: mov     [esi+30h], eax
0x816691: mov     ecx, [esi+30h]
0x816694: push    0
0x816696: push    1
0x816698: push    7
0x81669A: call    sub_772CD0
0x81669F: cmp     dword ptr [esi+30h], 0
0x8166A3: jnz     short loc_8166AD
0x8166A5: call    sub_772DF0
0x8166AA: mov     [esi+30h], eax
0x8166AD: mov     ecx, [esi+30h]
0x8166B0: push    0
0x8166B2: push    4
0x8166B4: push    17h
0x8166B6: call    sub_772CD0
0x8166BB: cmp     dword ptr [esi+30h], 0
0x8166BF: jnz     short loc_8166C9
0x8166C1: call    sub_772DF0
0x8166C6: mov     [esi+30h], eax
0x8166C9: mov     ecx, [esi+30h]
0x8166CC: push    0
0x8166CE: push    1
0x8166D0: push    0Eh
0x8166D2: call    sub_772CD0
0x8166D7: cmp     dword ptr [esi+30h], 0
0x8166DB: jnz     short loc_8166E5
0x8166DD: call    sub_772DF0
0x8166E2: mov     [esi+30h], eax
0x8166E5: mov     ecx, [esi+30h]
0x8166E8: push    0
0x8166EA: push    0
0x8166EC: push    34h ; '4'
0x8166EE: call    sub_772CD0
0x8166F3: or      ebp, 0FFFFFFFFh
0x8166F6: cmp     esi, ds:0B4560Ch
0x8166FC: mov     dword ptr ds:0B43BF4h, 18082h
0x816706: mov     dword ptr ds:0B44284h, 0Ch
0x816710: mov     dword ptr ds:0B43564h, 18000h
0x81671A: jz      short loc_81673A
0x81671C: add     [esi+60h], ebp
0x81671F: jnz     short loc_816728
0x816721: mov     ecx, esi
0x816723: call    sub_7604D0
0x816728: mov     esi, ds:0B4560Ch
0x81672E: test    esi, esi
0x816730: mov     [esp+2Ch+var_14], esi
0x816734: jz      short loc_81673A
0x816736: add     dword ptr [esi+60h], 1
0x81673A: cmp     dword ptr [esi+18h], 3
0x81673E: jnb     loc_816894
0x816744: lea     ecx, [esp+2Ch+var_10]
0x816748: push    ecx
0x816749: call    sub_772630
0x81674E: add     esp, 4
0x816751: mov     edi, eax
0x816753: cmp     ebx, [edi]
0x816755: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81675A: jz      short loc_81677A
0x81675C: test    ebx, ebx
0x81675E: jz      short loc_81676C
0x816760: add     [ebx+5Ch], ebp
0x816763: jnz     short loc_81676C
0x816765: mov     ecx, ebx
0x816767: call    sub_772560
0x81676C: mov     ebx, [edi]
0x81676E: test    ebx, ebx
0x816770: mov     [esp+2Ch+a3], ebx
0x816774: jz      short loc_81677A
0x816776: add     dword ptr [ebx+5Ch], 1
0x81677A: mov     eax, [esp+2Ch+var_10]
0x81677E: test    eax, eax
0x816780: mov     byte ptr [esp+2Ch+var_4], 1
0x816785: jz      short loc_816799
0x816787: add     [eax+5Ch], ebp
0x81678A: mov     ecx, eax
0x81678C: add     eax, 5Ch ; '\'
0x81678F: cmp     dword ptr [eax], 0
0x816792: jnz     short loc_816799
0x816794: call    sub_772560
0x816799: push    2
0x81679B: push    1
0x81679D: push    0
0x81679F: push    ebx
0x8167A0: call    sub_801110
0x8167A5: mov     edx, [esi+14h]
0x8167A8: add     esp, 10h
0x8167AB: push    ebx; a3
0x8167AC: push    edx; a2
0x8167AD: mov     ecx, esi; this
0x8167AF: call    sub_760010
0x8167B4: lea     eax, [esp+2Ch+var_10]
0x8167B8: push    eax
0x8167B9: call    sub_772630
0x8167BE: add     esp, 4
0x8167C1: mov     edi, eax
0x8167C3: cmp     ebx, [edi]
0x8167C5: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x8167CA: jz      short loc_8167EA
0x8167CC: test    ebx, ebx
0x8167CE: jz      short loc_8167DC
0x8167D0: add     [ebx+5Ch], ebp
0x8167D3: jnz     short loc_8167DC
0x8167D5: mov     ecx, ebx
0x8167D7: call    sub_772560
0x8167DC: mov     ebx, [edi]
0x8167DE: test    ebx, ebx
0x8167E0: mov     [esp+2Ch+a3], ebx
0x8167E4: jz      short loc_8167EA
0x8167E6: add     dword ptr [ebx+5Ch], 1
0x8167EA: mov     eax, [esp+2Ch+var_10]
0x8167EE: test    eax, eax
0x8167F0: mov     byte ptr [esp+2Ch+var_4], 1
0x8167F5: jz      short loc_816809
0x8167F7: add     [eax+5Ch], ebp
0x8167FA: mov     ecx, eax
0x8167FC: add     eax, 5Ch ; '\'
0x8167FF: cmp     dword ptr [eax], 0
0x816802: jnz     short loc_816809
0x816804: call    sub_772560
0x816809: push    2
0x81680B: push    1
0x81680D: push    1
0x81680F: push    ebx
0x816810: call    sub_801110
0x816815: mov     ecx, [esi+14h]
0x816818: add     esp, 10h
0x81681B: push    ebx; a3
0x81681C: push    ecx; a2
0x81681D: mov     ecx, esi; this
0x81681F: call    sub_760010
0x816824: lea     edx, [esp+2Ch+var_10]
0x816828: push    edx
0x816829: call    sub_772630
0x81682E: add     esp, 4
0x816831: mov     edi, eax
0x816833: cmp     ebx, [edi]
0x816835: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x81683A: jz      short loc_81685A
0x81683C: test    ebx, ebx
0x81683E: jz      short loc_81684C
0x816840: add     [ebx+5Ch], ebp
0x816843: jnz     short loc_81684C
0x816845: mov     ecx, ebx
0x816847: call    sub_772560
0x81684C: mov     ebx, [edi]
0x81684E: test    ebx, ebx
0x816850: mov     [esp+2Ch+a3], ebx
0x816854: jz      short loc_81685A
0x816856: add     dword ptr [ebx+5Ch], 1
0x81685A: mov     eax, [esp+2Ch+var_10]
0x81685E: test    eax, eax
0x816860: mov     byte ptr [esp+2Ch+var_4], 1
0x816865: jz      short loc_816879
0x816867: add     [eax+5Ch], ebp
0x81686A: mov     ecx, eax
0x81686C: add     eax, 5Ch ; '\'
0x81686F: cmp     dword ptr [eax], 0
0x816872: jnz     short loc_816879
0x816874: call    sub_772560
0x816879: push    2
0x81687B: push    1
0x81687D: push    2
0x81687F: push    ebx
0x816880: call    sub_801110
0x816885: mov     eax, [esi+14h]
0x816888: add     esp, 10h
0x81688B: push    ebx; a3
0x81688C: push    eax; a2
0x81688D: mov     ecx, esi; this
0x81688F: call    sub_760010
0x816894: mov     eax, ds:0B452B8h
0x816899: mov     edi, [esi+58h]
0x81689C: cmp     edi, eax
0x81689E: mov     ebp, eax
0x8168A0: jz      short loc_8168D3
0x8168A2: test    edi, edi
0x8168A4: jz      short loc_8168C2
0x8168A6: lea     ecx, [edi+4]
0x8168A9: push    ecx; lpAddend
0x8168AA: call    dword ptr ds:0A2807Ch
0x8168B0: test    eax, eax
0x8168B2: jnz     short loc_8168C2
0x8168B4: test    edi, edi
0x8168B6: jz      short loc_8168C2
0x8168B8: mov     edx, [edi]
0x8168BA: mov     eax, [edx]
0x8168BC: push    1
0x8168BE: mov     ecx, edi
0x8168C0: call    eax
0x8168C2: test    ebp, ebp
0x8168C4: mov     [esi+58h], ebp
0x8168C7: jz      short loc_8168D3
0x8168C9: add     ebp, 4
0x8168CC: push    ebp; lpAddend
0x8168CD: call    dword ptr ds:0A28078h
0x8168D3: mov     eax, ds:0B450DCh
0x8168D8: mov     edi, [esi+44h]
0x8168DB: cmp     edi, eax
0x8168DD: mov     ebp, eax
0x8168DF: jz      short loc_816912
0x8168E1: test    edi, edi
0x8168E3: jz      short loc_816901
0x8168E5: lea     ecx, [edi+4]
0x8168E8: push    ecx; lpAddend
0x8168E9: call    dword ptr ds:0A2807Ch
0x8168EF: test    eax, eax
0x8168F1: jnz     short loc_816901
0x8168F3: test    edi, edi
0x8168F5: jz      short loc_816901
0x8168F7: mov     edx, [edi]
0x8168F9: mov     eax, [edx]
0x8168FB: push    1
0x8168FD: mov     ecx, edi
0x8168FF: call    eax
0x816901: test    ebp, ebp
0x816903: mov     [esi+44h], ebp
0x816906: jz      short loc_816912
0x816908: add     ebp, 4
0x81690B: push    ebp; lpAddend
0x81690C: call    dword ptr ds:0A28078h
0x816912: cmp     dword ptr [esi+30h], 0
0x816916: jnz     short loc_816920
0x816918: call    sub_772DF0
0x81691D: mov     [esi+30h], eax
0x816920: mov     ecx, [esi+30h]
0x816923: push    0
0x816925: push    0
0x816927: push    1Bh
0x816929: call    sub_772CD0
0x81692E: cmp     dword ptr [esi+30h], 0
0x816932: jnz     short loc_81693C
0x816934: call    sub_772DF0
0x816939: mov     [esi+30h], eax
0x81693C: mov     ecx, [esi+30h]
0x81693F: push    0
0x816941: push    0
0x816943: push    0Fh
0x816945: call    sub_772CD0
0x81694A: cmp     dword ptr [esi+30h], 0
0x81694E: jnz     short loc_816958
0x816950: call    sub_772DF0
0x816955: mov     [esi+30h], eax
0x816958: mov     ecx, [esi+30h]
0x81695B: push    0
0x81695D: push    1
0x81695F: push    7
0x816961: call    sub_772CD0
0x816966: cmp     dword ptr [esi+30h], 0
0x81696A: jnz     short loc_816974
0x81696C: call    sub_772DF0
0x816971: mov     [esi+30h], eax
0x816974: mov     ecx, [esi+30h]
0x816977: push    0
0x816979: push    4
0x81697B: push    17h
0x81697D: call    sub_772CD0
0x816982: cmp     dword ptr [esi+30h], 0
0x816986: jnz     short loc_816990
0x816988: call    sub_772DF0
0x81698D: mov     [esi+30h], eax
0x816990: mov     ecx, [esi+30h]
0x816993: push    0
0x816995: push    1
0x816997: push    0Eh
0x816999: call    sub_772CD0
0x81699E: cmp     dword ptr [esi+30h], 0
0x8169A2: jnz     short loc_8169AC
0x8169A4: call    sub_772DF0
0x8169A9: mov     [esi+30h], eax
0x8169AC: mov     ecx, [esi+30h]
0x8169AF: push    0
0x8169B1: push    0
0x8169B3: push    34h ; '4'
0x8169B5: call    sub_772CD0
0x8169BA: or      ebp, 0FFFFFFFFh
0x8169BD: cmp     esi, ds:0B45610h
0x8169C3: mov     dword ptr ds:0B43B8Ch, 82h ; '‚'
0x8169CD: mov     dword ptr ds:0B4421Ch, 8Ch ; 'Œ'
0x8169D7: mov     dword ptr ds:0B448ACh, 4
0x8169E1: jz      short loc_816A01
0x8169E3: add     [esi+60h], ebp
0x8169E6: jnz     short loc_8169EF
0x8169E8: mov     ecx, esi
0x8169EA: call    sub_7604D0
0x8169EF: mov     esi, ds:0B45610h
0x8169F5: test    esi, esi
0x8169F7: mov     [esp+2Ch+var_14], esi
0x8169FB: jz      short loc_816A01
0x8169FD: add     dword ptr [esi+60h], 1
0x816A01: cmp     dword ptr [esi+18h], 3
0x816A05: jnb     loc_816B5B
0x816A0B: lea     ecx, [esp+2Ch+var_10]
0x816A0F: push    ecx
0x816A10: call    sub_772630
0x816A15: add     esp, 4
0x816A18: mov     edi, eax
0x816A1A: cmp     ebx, [edi]
0x816A1C: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x816A21: jz      short loc_816A41
0x816A23: test    ebx, ebx
0x816A25: jz      short loc_816A33
0x816A27: add     [ebx+5Ch], ebp
0x816A2A: jnz     short loc_816A33
0x816A2C: mov     ecx, ebx
0x816A2E: call    sub_772560
0x816A33: mov     ebx, [edi]
0x816A35: test    ebx, ebx
0x816A37: mov     [esp+2Ch+a3], ebx
0x816A3B: jz      short loc_816A41
0x816A3D: add     dword ptr [ebx+5Ch], 1
0x816A41: mov     eax, [esp+2Ch+var_10]
0x816A45: test    eax, eax
0x816A47: mov     byte ptr [esp+2Ch+var_4], 1
0x816A4C: jz      short loc_816A60
0x816A4E: add     [eax+5Ch], ebp
0x816A51: mov     ecx, eax
0x816A53: add     eax, 5Ch ; '\'
0x816A56: cmp     dword ptr [eax], 0
0x816A59: jnz     short loc_816A60
0x816A5B: call    sub_772560
0x816A60: push    2
0x816A62: push    1
0x816A64: push    0
0x816A66: push    ebx
0x816A67: call    sub_801110
0x816A6C: mov     edx, [esi+14h]
0x816A6F: add     esp, 10h
0x816A72: push    ebx; a3
0x816A73: push    edx; a2
0x816A74: mov     ecx, esi; this
0x816A76: call    sub_760010
0x816A7B: lea     eax, [esp+2Ch+var_10]
0x816A7F: push    eax
0x816A80: call    sub_772630
0x816A85: add     esp, 4
0x816A88: mov     edi, eax
0x816A8A: cmp     ebx, [edi]
0x816A8C: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x816A91: jz      short loc_816AB1
0x816A93: test    ebx, ebx
0x816A95: jz      short loc_816AA3
0x816A97: add     [ebx+5Ch], ebp
0x816A9A: jnz     short loc_816AA3
0x816A9C: mov     ecx, ebx
0x816A9E: call    sub_772560
0x816AA3: mov     ebx, [edi]
0x816AA5: test    ebx, ebx
0x816AA7: mov     [esp+2Ch+a3], ebx
0x816AAB: jz      short loc_816AB1
0x816AAD: add     dword ptr [ebx+5Ch], 1
0x816AB1: mov     eax, [esp+2Ch+var_10]
0x816AB5: test    eax, eax
0x816AB7: mov     byte ptr [esp+2Ch+var_4], 1
0x816ABC: jz      short loc_816AD0
0x816ABE: add     [eax+5Ch], ebp
0x816AC1: mov     ecx, eax
0x816AC3: add     eax, 5Ch ; '\'
0x816AC6: cmp     dword ptr [eax], 0
0x816AC9: jnz     short loc_816AD0
0x816ACB: call    sub_772560
0x816AD0: push    2
0x816AD2: push    1
0x816AD4: push    1
0x816AD6: push    ebx
0x816AD7: call    sub_801110
0x816ADC: mov     ecx, [esi+14h]
0x816ADF: add     esp, 10h
0x816AE2: push    ebx; a3
0x816AE3: push    ecx; a2
0x816AE4: mov     ecx, esi; this
0x816AE6: call    sub_760010
0x816AEB: lea     edx, [esp+2Ch+var_10]
0x816AEF: push    edx
0x816AF0: call    sub_772630
0x816AF5: add     esp, 4
0x816AF8: mov     edi, eax
0x816AFA: cmp     ebx, [edi]
0x816AFC: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x816B01: jz      short loc_816B21
0x816B03: test    ebx, ebx
0x816B05: jz      short loc_816B13
0x816B07: add     [ebx+5Ch], ebp
0x816B0A: jnz     short loc_816B13
0x816B0C: mov     ecx, ebx
0x816B0E: call    sub_772560
0x816B13: mov     ebx, [edi]
0x816B15: test    ebx, ebx
0x816B17: mov     [esp+2Ch+a3], ebx
0x816B1B: jz      short loc_816B21
0x816B1D: add     dword ptr [ebx+5Ch], 1
0x816B21: mov     eax, [esp+2Ch+var_10]
0x816B25: test    eax, eax
0x816B27: mov     byte ptr [esp+2Ch+var_4], 1
0x816B2C: jz      short loc_816B40
0x816B2E: add     [eax+5Ch], ebp
0x816B31: mov     ecx, eax
0x816B33: add     eax, 5Ch ; '\'
0x816B36: cmp     dword ptr [eax], 0
0x816B39: jnz     short loc_816B40
0x816B3B: call    sub_772560
0x816B40: push    2
0x816B42: push    1
0x816B44: push    2
0x816B46: push    ebx
0x816B47: call    sub_801110
0x816B4C: mov     eax, [esi+14h]
0x816B4F: add     esp, 10h
0x816B52: push    ebx; a3
0x816B53: push    eax; a2
0x816B54: mov     ecx, esi; this
0x816B56: call    sub_760010
0x816B5B: mov     eax, ds:0B452C0h
0x816B60: mov     edi, [esi+58h]
0x816B63: cmp     edi, eax
0x816B65: mov     ebp, eax
0x816B67: jz      short loc_816B9A
0x816B69: test    edi, edi
0x816B6B: jz      short loc_816B89
0x816B6D: lea     ecx, [edi+4]
0x816B70: push    ecx; lpAddend
0x816B71: call    dword ptr ds:0A2807Ch
0x816B77: test    eax, eax
0x816B79: jnz     short loc_816B89
0x816B7B: test    edi, edi
0x816B7D: jz      short loc_816B89
0x816B7F: mov     edx, [edi]
0x816B81: mov     eax, [edx]
0x816B83: push    1
0x816B85: mov     ecx, edi
0x816B87: call    eax
0x816B89: test    ebp, ebp
0x816B8B: mov     [esi+58h], ebp
0x816B8E: jz      short loc_816B9A
0x816B90: add     ebp, 4
0x816B93: push    ebp; lpAddend
0x816B94: call    dword ptr ds:0A28078h
0x816B9A: mov     eax, ds:0B450ECh
0x816B9F: mov     edi, [esi+44h]
0x816BA2: cmp     edi, eax
0x816BA4: mov     ebp, eax
0x816BA6: jz      short loc_816BD9
0x816BA8: test    edi, edi
0x816BAA: jz      short loc_816BC8
0x816BAC: lea     ecx, [edi+4]
0x816BAF: push    ecx; lpAddend
0x816BB0: call    dword ptr ds:0A2807Ch
0x816BB6: test    eax, eax
0x816BB8: jnz     short loc_816BC8
0x816BBA: test    edi, edi
0x816BBC: jz      short loc_816BC8
0x816BBE: mov     edx, [edi]
0x816BC0: mov     eax, [edx]
0x816BC2: push    1
0x816BC4: mov     ecx, edi
0x816BC6: call    eax
0x816BC8: test    ebp, ebp
0x816BCA: mov     [esi+44h], ebp
0x816BCD: jz      short loc_816BD9
0x816BCF: add     ebp, 4
0x816BD2: push    ebp; lpAddend
0x816BD3: call    dword ptr ds:0A28078h
0x816BD9: cmp     dword ptr [esi+30h], 0
0x816BDD: jnz     short loc_816BE7
0x816BDF: call    sub_772DF0
0x816BE4: mov     [esi+30h], eax
0x816BE7: mov     ecx, [esi+30h]
0x816BEA: push    0
0x816BEC: push    0
0x816BEE: push    1Bh
0x816BF0: call    sub_772CD0
0x816BF5: cmp     dword ptr [esi+30h], 0
0x816BF9: jnz     short loc_816C03
0x816BFB: call    sub_772DF0
0x816C00: mov     [esi+30h], eax
0x816C03: mov     ecx, [esi+30h]
0x816C06: push    0
0x816C08: push    0
0x816C0A: push    0Fh
0x816C0C: call    sub_772CD0
0x816C11: cmp     dword ptr [esi+30h], 0
0x816C15: jnz     short loc_816C1F
0x816C17: call    sub_772DF0
0x816C1C: mov     [esi+30h], eax
0x816C1F: mov     ecx, [esi+30h]
0x816C22: push    0
0x816C24: push    1
0x816C26: push    7
0x816C28: call    sub_772CD0
0x816C2D: cmp     dword ptr [esi+30h], 0
0x816C31: jnz     short loc_816C3B
0x816C33: call    sub_772DF0
0x816C38: mov     [esi+30h], eax
0x816C3B: mov     ecx, [esi+30h]
0x816C3E: push    0
0x816C40: push    4
0x816C42: push    17h
0x816C44: call    sub_772CD0
0x816C49: cmp     dword ptr [esi+30h], 0
0x816C4D: jnz     short loc_816C57
0x816C4F: call    sub_772DF0
0x816C54: mov     [esi+30h], eax
0x816C57: mov     ecx, [esi+30h]
0x816C5A: push    0
0x816C5C: push    1
0x816C5E: push    0Eh
0x816C60: call    sub_772CD0
0x816C65: cmp     dword ptr [esi+30h], 0
0x816C69: jnz     short loc_816C73
0x816C6B: call    sub_772DF0
0x816C70: mov     [esi+30h], eax
0x816C73: mov     ecx, [esi+30h]
0x816C76: push    0
0x816C78: push    0
0x816C7A: push    34h ; '4'
0x816C7C: call    sub_772CD0
0x816C81: or      ebp, 0FFFFFFFFh
0x816C84: cmp     esi, ds:0B45678h
0x816C8A: mov     dword ptr ds:0B43B90h, 82h ; '‚'
0x816C94: mov     dword ptr ds:0B44220h, 8Ch ; 'Œ'
0x816C9E: mov     dword ptr ds:0B448B0h, 4
0x816CA8: jz      short loc_816CC8
0x816CAA: add     [esi+60h], ebp
0x816CAD: jnz     short loc_816CB6
0x816CAF: mov     ecx, esi
0x816CB1: call    sub_7604D0
0x816CB6: mov     esi, ds:0B45678h
0x816CBC: test    esi, esi
0x816CBE: mov     [esp+2Ch+var_14], esi
0x816CC2: jz      short loc_816CC8
0x816CC4: add     dword ptr [esi+60h], 1
0x816CC8: cmp     dword ptr [esi+18h], 3
0x816CCC: jnb     loc_816E22
0x816CD2: lea     ecx, [esp+2Ch+var_10]
0x816CD6: push    ecx
0x816CD7: call    sub_772630
0x816CDC: add     esp, 4
0x816CDF: mov     edi, eax
0x816CE1: cmp     ebx, [edi]
0x816CE3: mov     byte ptr [esp+2Ch+var_4], 10h
0x816CE8: jz      short loc_816D08
0x816CEA: test    ebx, ebx
0x816CEC: jz      short loc_816CFA
0x816CEE: add     [ebx+5Ch], ebp
0x816CF1: jnz     short loc_816CFA
0x816CF3: mov     ecx, ebx
0x816CF5: call    sub_772560
0x816CFA: mov     ebx, [edi]
0x816CFC: test    ebx, ebx
0x816CFE: mov     [esp+2Ch+a3], ebx
0x816D02: jz      short loc_816D08
0x816D04: add     dword ptr [ebx+5Ch], 1
0x816D08: mov     eax, [esp+2Ch+var_10]
0x816D0C: test    eax, eax
0x816D0E: mov     byte ptr [esp+2Ch+var_4], 1
0x816D13: jz      short loc_816D27
0x816D15: add     [eax+5Ch], ebp
0x816D18: mov     ecx, eax
0x816D1A: add     eax, 5Ch ; '\'
0x816D1D: cmp     dword ptr [eax], 0
0x816D20: jnz     short loc_816D27
0x816D22: call    sub_772560
0x816D27: push    2
0x816D29: push    1
0x816D2B: push    0
0x816D2D: push    ebx
0x816D2E: call    sub_801110
0x816D33: mov     edx, [esi+14h]
0x816D36: add     esp, 10h
0x816D39: push    ebx; a3
0x816D3A: push    edx; a2
0x816D3B: mov     ecx, esi; this
0x816D3D: call    sub_760010
0x816D42: lea     eax, [esp+2Ch+var_10]
0x816D46: push    eax
0x816D47: call    sub_772630
0x816D4C: add     esp, 4
0x816D4F: mov     edi, eax
0x816D51: cmp     ebx, [edi]
0x816D53: mov     byte ptr [esp+2Ch+var_4], 11h
0x816D58: jz      short loc_816D78
0x816D5A: test    ebx, ebx
0x816D5C: jz      short loc_816D6A
0x816D5E: add     [ebx+5Ch], ebp
0x816D61: jnz     short loc_816D6A
0x816D63: mov     ecx, ebx
0x816D65: call    sub_772560
0x816D6A: mov     ebx, [edi]
0x816D6C: test    ebx, ebx
0x816D6E: mov     [esp+2Ch+a3], ebx
0x816D72: jz      short loc_816D78
0x816D74: add     dword ptr [ebx+5Ch], 1
0x816D78: mov     eax, [esp+2Ch+var_10]
0x816D7C: test    eax, eax
0x816D7E: mov     byte ptr [esp+2Ch+var_4], 1
0x816D83: jz      short loc_816D97
0x816D85: add     [eax+5Ch], ebp
0x816D88: mov     ecx, eax
0x816D8A: add     eax, 5Ch ; '\'
0x816D8D: cmp     dword ptr [eax], 0
0x816D90: jnz     short loc_816D97
0x816D92: call    sub_772560
0x816D97: push    2
0x816D99: push    1
0x816D9B: push    1
0x816D9D: push    ebx
0x816D9E: call    sub_801110
0x816DA3: mov     ecx, [esi+14h]
0x816DA6: add     esp, 10h
0x816DA9: push    ebx; a3
0x816DAA: push    ecx; a2
0x816DAB: mov     ecx, esi; this
0x816DAD: call    sub_760010
0x816DB2: lea     edx, [esp+2Ch+var_10]
0x816DB6: push    edx
0x816DB7: call    sub_772630
0x816DBC: add     esp, 4
0x816DBF: mov     edi, eax
0x816DC1: cmp     ebx, [edi]
0x816DC3: mov     byte ptr [esp+2Ch+var_4], 12h
0x816DC8: jz      short loc_816DE8
0x816DCA: test    ebx, ebx
0x816DCC: jz      short loc_816DDA
0x816DCE: add     [ebx+5Ch], ebp
0x816DD1: jnz     short loc_816DDA
0x816DD3: mov     ecx, ebx
0x816DD5: call    sub_772560
0x816DDA: mov     ebx, [edi]
0x816DDC: test    ebx, ebx
0x816DDE: mov     [esp+2Ch+a3], ebx
0x816DE2: jz      short loc_816DE8
0x816DE4: add     dword ptr [ebx+5Ch], 1
0x816DE8: mov     eax, [esp+2Ch+var_10]
0x816DEC: test    eax, eax
0x816DEE: mov     byte ptr [esp+2Ch+var_4], 1
0x816DF3: jz      short loc_816E07
0x816DF5: add     [eax+5Ch], ebp
0x816DF8: mov     ecx, eax
0x816DFA: add     eax, 5Ch ; '\'
0x816DFD: cmp     dword ptr [eax], 0
0x816E00: jnz     short loc_816E07
0x816E02: call    sub_772560
0x816E07: push    2
0x816E09: push    1
0x816E0B: push    2
0x816E0D: push    ebx
0x816E0E: call    sub_801110
0x816E13: mov     eax, [esi+14h]
0x816E16: add     esp, 10h
0x816E19: push    ebx; a3
0x816E1A: push    eax; a2
0x816E1B: mov     ecx, esi; this
0x816E1D: call    sub_760010
0x816E22: mov     eax, ds:0B452BCh
0x816E27: mov     edi, [esi+58h]
0x816E2A: cmp     edi, eax
0x816E2C: mov     ebp, eax
0x816E2E: jz      short loc_816E61
0x816E30: test    edi, edi
0x816E32: jz      short loc_816E50
0x816E34: lea     ecx, [edi+4]
0x816E37: push    ecx; lpAddend
0x816E38: call    dword ptr ds:0A2807Ch
0x816E3E: test    eax, eax
0x816E40: jnz     short loc_816E50
0x816E42: test    edi, edi
0x816E44: jz      short loc_816E50
0x816E46: mov     edx, [edi]
0x816E48: mov     eax, [edx]
0x816E4A: push    1
0x816E4C: mov     ecx, edi
0x816E4E: call    eax
0x816E50: test    ebp, ebp
0x816E52: mov     [esi+58h], ebp
0x816E55: jz      short loc_816E61
0x816E57: add     ebp, 4
0x816E5A: push    ebp; lpAddend
0x816E5B: call    dword ptr ds:0A28078h
0x816E61: mov     eax, ds:0B450E0h
0x816E66: mov     edi, [esi+44h]
0x816E69: cmp     edi, eax
0x816E6B: mov     ebp, eax
0x816E6D: jz      short loc_816EA0
0x816E6F: test    edi, edi
0x816E71: jz      short loc_816E8F
0x816E73: lea     ecx, [edi+4]
0x816E76: push    ecx; lpAddend
0x816E77: call    dword ptr ds:0A2807Ch
0x816E7D: test    eax, eax
0x816E7F: jnz     short loc_816E8F
0x816E81: test    edi, edi
0x816E83: jz      short loc_816E8F
0x816E85: mov     edx, [edi]
0x816E87: mov     eax, [edx]
0x816E89: push    1
0x816E8B: mov     ecx, edi
0x816E8D: call    eax
0x816E8F: test    ebp, ebp
0x816E91: mov     [esi+44h], ebp
0x816E94: jz      short loc_816EA0
0x816E96: add     ebp, 4
0x816E99: push    ebp; lpAddend
0x816E9A: call    dword ptr ds:0A28078h
0x816EA0: cmp     dword ptr [esi+30h], 0
0x816EA4: jnz     short loc_816EAE
0x816EA6: call    sub_772DF0
0x816EAB: mov     [esi+30h], eax
0x816EAE: mov     ecx, [esi+30h]
0x816EB1: xor     ebp, ebp
0x816EB3: push    ebp
0x816EB4: push    ebp
0x816EB5: push    1Bh
0x816EB7: call    sub_772CD0
0x816EBC: cmp     [esi+30h], ebp
0x816EBF: jnz     short loc_816EC9
0x816EC1: call    sub_772DF0
0x816EC6: mov     [esi+30h], eax
0x816EC9: mov     ecx, [esi+30h]
0x816ECC: push    ebp
0x816ECD: push    ebp
0x816ECE: push    0Fh
0x816ED0: call    sub_772CD0
0x816ED5: cmp     [esi+30h], ebp
0x816ED8: jnz     short loc_816EE2
0x816EDA: call    sub_772DF0
0x816EDF: mov     [esi+30h], eax
0x816EE2: mov     ecx, [esi+30h]
0x816EE5: push    ebp
0x816EE6: push    1
0x816EE8: push    7
0x816EEA: call    sub_772CD0
0x816EEF: cmp     [esi+30h], ebp
0x816EF2: jnz     short loc_816EFC
0x816EF4: call    sub_772DF0
0x816EF9: mov     [esi+30h], eax
0x816EFC: mov     ecx, [esi+30h]
0x816EFF: push    ebp
0x816F00: push    4
0x816F02: push    17h
0x816F04: call    sub_772CD0
0x816F09: cmp     [esi+30h], ebp
0x816F0C: jnz     short loc_816F16
0x816F0E: call    sub_772DF0
0x816F13: mov     [esi+30h], eax
0x816F16: mov     ecx, [esi+30h]
0x816F19: push    ebp
0x816F1A: push    1
0x816F1C: push    0Eh
0x816F1E: call    sub_772CD0
0x816F23: cmp     [esi+30h], ebp
0x816F26: jnz     short loc_816F30
0x816F28: call    sub_772DF0
0x816F2D: mov     [esi+30h], eax
0x816F30: mov     ecx, [esi+30h]
0x816F33: push    ebp
0x816F34: push    ebp
0x816F35: push    34h ; '4'
0x816F37: call    sub_772CD0
0x816F3C: cmp     esi, ds:0B4567Ch
0x816F42: mov     dword ptr ds:0B43BF8h, 18082h
0x816F4C: mov     dword ptr ds:0B44288h, 0Ch
0x816F56: mov     dword ptr ds:0B43568h, 18000h
0x816F60: jz      short loc_816F81
0x816F62: add     dword ptr [esi+60h], 0FFFFFFFFh
0x816F66: jnz     short loc_816F6F
0x816F68: mov     ecx, esi
0x816F6A: call    sub_7604D0
0x816F6F: mov     esi, ds:0B4567Ch
0x816F75: cmp     esi, ebp
0x816F77: mov     [esp+2Ch+var_14], esi
0x816F7B: jz      short loc_816F81
0x816F7D: add     dword ptr [esi+60h], 1
0x816F81: mov     eax, [esi+18h]
0x816F84: cmp     eax, 3
0x816F87: jnb     loc_8170DF
0x816F8D: lea     ecx, [esp+2Ch+var_10]
0x816F91: push    ecx
0x816F92: call    sub_772630
0x816F97: add     esp, 4
0x816F9A: mov     edi, eax
0x816F9C: cmp     ebx, [edi]
0x816F9E: mov     byte ptr [esp+2Ch+var_4], 13h
0x816FA3: jz      short loc_816FC4
0x816FA5: cmp     ebx, ebp
0x816FA7: jz      short loc_816FB6
0x816FA9: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x816FAD: jnz     short loc_816FB6
0x816FAF: mov     ecx, ebx
0x816FB1: call    sub_772560
0x816FB6: mov     ebx, [edi]
0x816FB8: cmp     ebx, ebp
0x816FBA: mov     [esp+2Ch+a3], ebx
0x816FBE: jz      short loc_816FC4
0x816FC0: add     dword ptr [ebx+5Ch], 1
0x816FC4: mov     eax, [esp+2Ch+var_10]
0x816FC8: cmp     eax, ebp
0x816FCA: mov     byte ptr [esp+2Ch+var_4], 1
0x816FCF: jz      short loc_816FE3
0x816FD1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x816FD5: mov     ecx, eax
0x816FD7: add     eax, 5Ch ; '\'
0x816FDA: cmp     [eax], ebp
0x816FDC: jnz     short loc_816FE3
0x816FDE: call    sub_772560
0x816FE3: push    2
0x816FE5: push    1
0x816FE7: push    ebp
0x816FE8: push    ebx
0x816FE9: call    sub_801110
0x816FEE: mov     edx, [esi+14h]
0x816FF1: add     esp, 10h
0x816FF4: push    ebx; a3
0x816FF5: push    edx; a2
0x816FF6: mov     ecx, esi; this
0x816FF8: call    sub_760010
0x816FFD: lea     eax, [esp+2Ch+var_10]
0x817001: push    eax
0x817002: call    sub_772630
0x817007: add     esp, 4
0x81700A: mov     edi, eax
0x81700C: cmp     ebx, [edi]
0x81700E: mov     byte ptr [esp+2Ch+var_4], 14h
0x817013: jz      short loc_817034
0x817015: cmp     ebx, ebp
0x817017: jz      short loc_817026
0x817019: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x81701D: jnz     short loc_817026
0x81701F: mov     ecx, ebx
0x817021: call    sub_772560
0x817026: mov     ebx, [edi]
0x817028: cmp     ebx, ebp
0x81702A: mov     [esp+2Ch+a3], ebx
0x81702E: jz      short loc_817034
0x817030: add     dword ptr [ebx+5Ch], 1
0x817034: mov     eax, [esp+2Ch+var_10]
0x817038: cmp     eax, ebp
0x81703A: mov     byte ptr [esp+2Ch+var_4], 1
0x81703F: jz      short loc_817053
0x817041: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817045: mov     ecx, eax
0x817047: add     eax, 5Ch ; '\'
0x81704A: cmp     [eax], ebp
0x81704C: jnz     short loc_817053
0x81704E: call    sub_772560
0x817053: push    2
0x817055: push    1
0x817057: push    1
0x817059: push    ebx
0x81705A: call    sub_801110
0x81705F: mov     ecx, [esi+14h]
0x817062: add     esp, 10h
0x817065: push    ebx; a3
0x817066: push    ecx; a2
0x817067: mov     ecx, esi; this
0x817069: call    sub_760010
0x81706E: lea     edx, [esp+2Ch+var_10]
0x817072: push    edx
0x817073: call    sub_772630
0x817078: add     esp, 4
0x81707B: mov     edi, eax
0x81707D: cmp     ebx, [edi]
0x81707F: mov     byte ptr [esp+2Ch+var_4], 15h
0x817084: jz      short loc_8170A5
0x817086: cmp     ebx, ebp
0x817088: jz      short loc_817097
0x81708A: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x81708E: jnz     short loc_817097
0x817090: mov     ecx, ebx
0x817092: call    sub_772560
0x817097: mov     ebx, [edi]
0x817099: cmp     ebx, ebp
0x81709B: mov     [esp+2Ch+a3], ebx
0x81709F: jz      short loc_8170A5
0x8170A1: add     dword ptr [ebx+5Ch], 1
0x8170A5: mov     eax, [esp+2Ch+var_10]
0x8170A9: cmp     eax, ebp
0x8170AB: mov     byte ptr [esp+2Ch+var_4], 1
0x8170B0: jz      short loc_8170C4
0x8170B2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8170B6: mov     ecx, eax
0x8170B8: add     eax, 5Ch ; '\'
0x8170BB: cmp     [eax], ebp
0x8170BD: jnz     short loc_8170C4
0x8170BF: call    sub_772560
0x8170C4: push    2
0x8170C6: push    1
0x8170C8: push    2
0x8170CA: push    ebx
0x8170CB: call    sub_801110
0x8170D0: mov     eax, [esi+14h]
0x8170D3: add     esp, 10h
0x8170D6: push    ebx; a3
0x8170D7: push    eax; a2
0x8170D8: mov     ecx, esi; this
0x8170DA: call    sub_760010
0x8170DF: mov     ecx, ds:0B452C4h
0x8170E5: push    ecx; a2
0x8170E6: mov     ecx, esi; this
0x8170E8: call    sub_7AECB0
0x8170ED: mov     edx, ds:0B450F0h
0x8170F3: push    edx; a2
0x8170F4: mov     ecx, esi; this
0x8170F6: call    sub_7AEC60
0x8170FB: cmp     [esi+30h], ebp
0x8170FE: jnz     short loc_817108
0x817100: call    sub_772DF0
0x817105: mov     [esi+30h], eax
0x817108: mov     ecx, [esi+30h]
0x81710B: push    ebp
0x81710C: push    ebp
0x81710D: push    1Bh
0x81710F: call    sub_772CD0
0x817114: cmp     [esi+30h], ebp
0x817117: jnz     short loc_817121
0x817119: call    sub_772DF0
0x81711E: mov     [esi+30h], eax
0x817121: mov     ecx, [esi+30h]
0x817124: push    ebp
0x817125: push    ebp
0x817126: push    0Fh
0x817128: call    sub_772CD0
0x81712D: cmp     [esi+30h], ebp
0x817130: jnz     short loc_81713A
0x817132: call    sub_772DF0
0x817137: mov     [esi+30h], eax
0x81713A: mov     ecx, [esi+30h]
0x81713D: push    ebp
0x81713E: push    1
0x817140: push    7
0x817142: call    sub_772CD0
0x817147: cmp     [esi+30h], ebp
0x81714A: jnz     short loc_817154
0x81714C: call    sub_772DF0
0x817151: mov     [esi+30h], eax
0x817154: mov     ecx, [esi+30h]
0x817157: push    ebp
0x817158: push    4
0x81715A: push    17h
0x81715C: call    sub_772CD0
0x817161: cmp     [esi+30h], ebp
0x817164: jnz     short loc_81716E
0x817166: call    sub_772DF0
0x81716B: mov     [esi+30h], eax
0x81716E: mov     ecx, [esi+30h]
0x817171: push    ebp
0x817172: push    1
0x817174: push    0Eh
0x817176: call    sub_772CD0
0x81717B: cmp     [esi+30h], ebp
0x81717E: jnz     short loc_817188
0x817180: call    sub_772DF0
0x817185: mov     [esi+30h], eax
0x817188: mov     ecx, [esi+30h]
0x81718B: push    ebp
0x81718C: push    ebp
0x81718D: push    34h ; '4'
0x81718F: call    sub_772CD0
0x817194: cmp     esi, ds:0B45614h
0x81719A: mov     dword ptr ds:0B43BFCh, 18082h
0x8171A4: mov     dword ptr ds:0B4428Ch, 0Ch
0x8171AE: mov     dword ptr ds:0B4356Ch, 18000h
0x8171B8: jz      short loc_8171D9
0x8171BA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8171BE: jnz     short loc_8171C7
0x8171C0: mov     ecx, esi
0x8171C2: call    sub_7604D0
0x8171C7: mov     esi, ds:0B45614h
0x8171CD: cmp     esi, ebp
0x8171CF: mov     [esp+2Ch+var_14], esi
0x8171D3: jz      short loc_8171D9
0x8171D5: add     dword ptr [esi+60h], 1
0x8171D9: cmp     dword ptr [esi+18h], 4
0x8171DD: jnb     loc_81734A
0x8171E3: lea     eax, [esp+2Ch+var_10]
0x8171E7: push    eax
0x8171E8: call    sub_772630
0x8171ED: add     esp, 4
0x8171F0: push    eax
0x8171F1: lea     ecx, [esp+30h+a3]
0x8171F5: mov     byte ptr [esp+30h+var_4], 16h
0x8171FA: call    sub_75FAE0
0x8171FF: mov     eax, [esp+2Ch+var_10]
0x817203: cmp     eax, ebp
0x817205: mov     byte ptr [esp+2Ch+var_4], 1
0x81720A: jz      short loc_81721E
0x81720C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817210: mov     ecx, eax
0x817212: add     eax, 5Ch ; '\'
0x817215: cmp     [eax], ebp
0x817217: jnz     short loc_81721E
0x817219: call    sub_772560
0x81721E: mov     edi, [esp+2Ch+a3]
0x817222: push    2
0x817224: push    1
0x817226: push    ebp
0x817227: push    edi
0x817228: call    sub_801110
0x81722D: mov     ecx, [esi+14h]
0x817230: add     esp, 10h
0x817233: push    edi; a3
0x817234: push    ecx; a2
0x817235: mov     ecx, esi; this
0x817237: call    sub_760010
0x81723C: lea     edx, [esp+2Ch+var_10]
0x817240: push    edx
0x817241: call    sub_772630
0x817246: add     esp, 4
0x817249: push    eax
0x81724A: lea     ecx, [esp+30h+a3]
0x81724E: mov     byte ptr [esp+30h+var_4], 17h
0x817253: call    sub_75FAE0
0x817258: mov     eax, [esp+2Ch+var_10]
0x81725C: cmp     eax, ebp
0x81725E: mov     byte ptr [esp+2Ch+var_4], 1
0x817263: jz      short loc_817277
0x817265: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817269: mov     ecx, eax
0x81726B: add     eax, 5Ch ; '\'
0x81726E: cmp     [eax], ebp
0x817270: jnz     short loc_817277
0x817272: call    sub_772560
0x817277: mov     edi, [esp+2Ch+a3]
0x81727B: push    2
0x81727D: push    1
0x81727F: push    1
0x817281: push    edi
0x817282: call    sub_801110
0x817287: mov     eax, [esi+14h]
0x81728A: add     esp, 10h
0x81728D: push    edi; a3
0x81728E: push    eax; a2
0x81728F: mov     ecx, esi; this
0x817291: call    sub_760010
0x817296: lea     ecx, [esp+2Ch+var_10]
0x81729A: push    ecx
0x81729B: call    sub_772630
0x8172A0: add     esp, 4
0x8172A3: push    eax
0x8172A4: lea     ecx, [esp+30h+a3]
0x8172A8: mov     byte ptr [esp+30h+var_4], 18h
0x8172AD: call    sub_75FAE0
0x8172B2: mov     eax, [esp+2Ch+var_10]
0x8172B6: cmp     eax, ebp
0x8172B8: mov     byte ptr [esp+2Ch+var_4], 1
0x8172BD: jz      short loc_8172D1
0x8172BF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8172C3: mov     ecx, eax
0x8172C5: add     eax, 5Ch ; '\'
0x8172C8: cmp     [eax], ebp
0x8172CA: jnz     short loc_8172D1
0x8172CC: call    sub_772560
0x8172D1: mov     edi, [esp+2Ch+a3]
0x8172D5: push    2
0x8172D7: push    1
0x8172D9: push    2
0x8172DB: push    edi
0x8172DC: call    sub_801110
0x8172E1: mov     edx, [esi+14h]
0x8172E4: add     esp, 10h
0x8172E7: push    edi; a3
0x8172E8: push    edx; a2
0x8172E9: mov     ecx, esi; this
0x8172EB: call    sub_760010
0x8172F0: lea     eax, [esp+2Ch+var_10]
0x8172F4: push    eax
0x8172F5: call    sub_772630
0x8172FA: add     esp, 4
0x8172FD: push    eax
0x8172FE: lea     ecx, [esp+30h+a3]
0x817302: mov     byte ptr [esp+30h+var_4], 19h
0x817307: call    sub_75FAE0
0x81730C: mov     eax, [esp+2Ch+var_10]
0x817310: cmp     eax, ebp
0x817312: mov     byte ptr [esp+2Ch+var_4], 1
0x817317: jz      short loc_81732B
0x817319: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81731D: mov     ecx, eax
0x81731F: add     eax, 5Ch ; '\'
0x817322: cmp     [eax], ebp
0x817324: jnz     short loc_81732B
0x817326: call    sub_772560
0x81732B: mov     ebx, [esp+2Ch+a3]
0x81732F: push    2
0x817331: push    1
0x817333: push    3
0x817335: push    ebx
0x817336: call    sub_801110
0x81733B: mov     ecx, [esi+14h]
0x81733E: add     esp, 10h
0x817341: push    ebx; a3
0x817342: push    ecx; a2
0x817343: mov     ecx, esi; this
0x817345: call    sub_760010
0x81734A: mov     edx, ds:0B452C8h
0x817350: push    edx; a2
0x817351: mov     ecx, esi; this
0x817353: call    sub_7AECB0
0x817358: mov     eax, ds:0B450CCh
0x81735D: push    eax; a2
0x81735E: mov     ecx, esi; this
0x817360: call    sub_7AEC60
0x817365: cmp     [esi+30h], ebp
0x817368: jnz     short loc_817372
0x81736A: call    sub_772DF0
0x81736F: mov     [esi+30h], eax
0x817372: mov     ecx, [esi+30h]
0x817375: push    ebp
0x817376: push    ebp
0x817377: push    1Bh
0x817379: call    sub_772CD0
0x81737E: cmp     [esi+30h], ebp
0x817381: jnz     short loc_81738B
0x817383: call    sub_772DF0
0x817388: mov     [esi+30h], eax
0x81738B: mov     ecx, [esi+30h]
0x81738E: push    ebp
0x81738F: push    ebp
0x817390: push    0Fh
0x817392: call    sub_772CD0
0x817397: cmp     [esi+30h], ebp
0x81739A: jnz     short loc_8173A4
0x81739C: call    sub_772DF0
0x8173A1: mov     [esi+30h], eax
0x8173A4: mov     ecx, [esi+30h]
0x8173A7: push    ebp
0x8173A8: push    1
0x8173AA: push    7
0x8173AC: call    sub_772CD0
0x8173B1: cmp     [esi+30h], ebp
0x8173B4: jnz     short loc_8173BE
0x8173B6: call    sub_772DF0
0x8173BB: mov     [esi+30h], eax
0x8173BE: mov     ecx, [esi+30h]
0x8173C1: push    ebp
0x8173C2: push    4
0x8173C4: push    17h
0x8173C6: call    sub_772CD0
0x8173CB: cmp     [esi+30h], ebp
0x8173CE: jnz     short loc_8173D8
0x8173D0: call    sub_772DF0
0x8173D5: mov     [esi+30h], eax
0x8173D8: mov     ecx, [esi+30h]
0x8173DB: push    ebp
0x8173DC: push    1
0x8173DE: push    0Eh
0x8173E0: call    sub_772CD0
0x8173E5: cmp     [esi+30h], ebp
0x8173E8: jnz     short loc_8173F2
0x8173EA: call    sub_772DF0
0x8173EF: mov     [esi+30h], eax
0x8173F2: mov     ecx, [esi+30h]
0x8173F5: push    ebp
0x8173F6: push    ebp
0x8173F7: push    34h ; '4'
0x8173F9: call    sub_772CD0
0x8173FE: cmp     esi, ds:0B45618h
0x817404: mov     dword ptr ds:0B43B94h, 82h ; '‚'
0x81740E: mov     dword ptr ds:0B44224h, 0Ch
0x817418: jz      short loc_817439
0x81741A: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81741E: jnz     short loc_817427
0x817420: mov     ecx, esi
0x817422: call    sub_7604D0
0x817427: mov     esi, ds:0B45618h
0x81742D: cmp     esi, ebp
0x81742F: mov     [esp+2Ch+var_14], esi
0x817433: jz      short loc_817439
0x817435: add     dword ptr [esi+60h], 1
0x817439: cmp     dword ptr [esi+18h], 2
0x81743D: jnb     loc_8174F6
0x817443: lea     ecx, [esp+2Ch+var_10]
0x817447: push    ecx
0x817448: call    sub_772630
0x81744D: add     esp, 4
0x817450: push    eax
0x817451: lea     ecx, [esp+30h+a3]
0x817455: mov     byte ptr [esp+30h+var_4], 1Ah
0x81745A: call    sub_75FAE0
0x81745F: mov     eax, [esp+2Ch+var_10]
0x817463: cmp     eax, ebp
0x817465: mov     byte ptr [esp+2Ch+var_4], 1
0x81746A: jz      short loc_81747E
0x81746C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817470: mov     ecx, eax
0x817472: add     eax, 5Ch ; '\'
0x817475: cmp     [eax], ebp
0x817477: jnz     short loc_81747E
0x817479: call    sub_772560
0x81747E: mov     edi, [esp+2Ch+a3]
0x817482: push    2
0x817484: push    1
0x817486: push    ebp
0x817487: push    edi
0x817488: call    sub_801110
0x81748D: mov     edx, [esi+14h]
0x817490: add     esp, 10h
0x817493: push    edi; a3
0x817494: push    edx; a2
0x817495: mov     ecx, esi; this
0x817497: call    sub_760010
0x81749C: lea     eax, [esp+2Ch+var_10]
0x8174A0: push    eax
0x8174A1: call    sub_772630
0x8174A6: add     esp, 4
0x8174A9: push    eax
0x8174AA: lea     ecx, [esp+30h+a3]
0x8174AE: mov     byte ptr [esp+30h+var_4], 1Bh
0x8174B3: call    sub_75FAE0
0x8174B8: mov     eax, [esp+2Ch+var_10]
0x8174BC: cmp     eax, ebp
0x8174BE: mov     byte ptr [esp+2Ch+var_4], 1
0x8174C3: jz      short loc_8174D7
0x8174C5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8174C9: mov     ecx, eax
0x8174CB: add     eax, 5Ch ; '\'
0x8174CE: cmp     [eax], ebp
0x8174D0: jnz     short loc_8174D7
0x8174D2: call    sub_772560
0x8174D7: mov     ebx, [esp+2Ch+a3]
0x8174DB: push    2
0x8174DD: push    1
0x8174DF: push    1
0x8174E1: push    ebx
0x8174E2: call    sub_801110
0x8174E7: mov     ecx, [esi+14h]
0x8174EA: add     esp, 10h
0x8174ED: push    ebx; a3
0x8174EE: push    ecx; a2
0x8174EF: mov     ecx, esi; this
0x8174F1: call    sub_760010
0x8174F6: mov     edx, ds:0B452B8h
0x8174FC: push    edx; a2
0x8174FD: mov     ecx, esi; this
0x8174FF: call    sub_7AECB0
0x817504: mov     eax, ds:0B450B4h
0x817509: push    eax; a2
0x81750A: mov     ecx, esi; this
0x81750C: call    sub_7AEC60
0x817511: cmp     [esi+30h], ebp
0x817514: jnz     short loc_81751E
0x817516: call    sub_772DF0
0x81751B: mov     [esi+30h], eax
0x81751E: mov     ecx, [esi+30h]
0x817521: push    ebp
0x817522: push    1
0x817524: push    1Bh
0x817526: call    sub_772CD0
0x81752B: cmp     [esi+30h], ebp
0x81752E: jnz     short loc_817538
0x817530: call    sub_772DF0
0x817535: mov     [esi+30h], eax
0x817538: mov     ecx, [esi+30h]
0x81753B: push    ebp
0x81753C: push    5
0x81753E: push    13h
0x817540: call    sub_772CD0
0x817545: cmp     [esi+30h], ebp
0x817548: jnz     short loc_817552
0x81754A: call    sub_772DF0
0x81754F: mov     [esi+30h], eax
0x817552: mov     ecx, [esi+30h]
0x817555: push    ebp
0x817556: push    6
0x817558: push    14h
0x81755A: call    sub_772CD0
0x81755F: cmp     [esi+30h], ebp
0x817562: jnz     short loc_81756C
0x817564: call    sub_772DF0
0x817569: mov     [esi+30h], eax
0x81756C: mov     ecx, [esi+30h]
0x81756F: push    ebp
0x817570: push    1
0x817572: push    0Fh
0x817574: call    sub_772CD0
0x817579: cmp     [esi+30h], ebp
0x81757C: jnz     short loc_817586
0x81757E: call    sub_772DF0
0x817583: mov     [esi+30h], eax
0x817586: mov     ecx, [esi+30h]
0x817589: push    ebp
0x81758A: push    1
0x81758C: push    7
0x81758E: call    sub_772CD0
0x817593: cmp     [esi+30h], ebp
0x817596: jnz     short loc_8175A0
0x817598: call    sub_772DF0
0x81759D: mov     [esi+30h], eax
0x8175A0: mov     ecx, [esi+30h]
0x8175A3: push    ebp
0x8175A4: push    4
0x8175A6: push    17h
0x8175A8: call    sub_772CD0
0x8175AD: cmp     [esi+30h], ebp
0x8175B0: jnz     short loc_8175BA
0x8175B2: call    sub_772DF0
0x8175B7: mov     [esi+30h], eax
0x8175BA: mov     ecx, [esi+30h]
0x8175BD: push    ebp
0x8175BE: push    1
0x8175C0: push    0Eh
0x8175C2: call    sub_772CD0
0x8175C7: cmp     [esi+30h], ebp
0x8175CA: jnz     short loc_8175D4
0x8175CC: call    sub_772DF0
0x8175D1: mov     [esi+30h], eax
0x8175D4: mov     ecx, [esi+30h]
0x8175D7: push    ebp
0x8175D8: push    ebp
0x8175D9: push    34h ; '4'
0x8175DB: call    sub_772CD0
0x8175E0: cmp     esi, ds:0B4561Ch
0x8175E6: mov     dword ptr ds:0B43B98h, 82h ; '‚'
0x8175F0: mov     dword ptr ds:0B44228h, 0Ch
0x8175FA: jz      short loc_81761B
0x8175FC: add     dword ptr [esi+60h], 0FFFFFFFFh
0x817600: jnz     short loc_817609
0x817602: mov     ecx, esi
0x817604: call    sub_7604D0
0x817609: mov     esi, ds:0B4561Ch
0x81760F: cmp     esi, ebp
0x817611: mov     [esp+2Ch+var_14], esi
0x817615: jz      short loc_81761B
0x817617: add     dword ptr [esi+60h], 1
0x81761B: cmp     dword ptr [esi+18h], 2
0x81761F: jnb     loc_8176D8
0x817625: lea     ecx, [esp+2Ch+var_10]
0x817629: push    ecx
0x81762A: call    sub_772630
0x81762F: add     esp, 4
0x817632: push    eax
0x817633: lea     ecx, [esp+30h+a3]
0x817637: mov     byte ptr [esp+30h+var_4], 1Ch
0x81763C: call    sub_75FAE0
0x817641: mov     eax, [esp+2Ch+var_10]
0x817645: cmp     eax, ebp
0x817647: mov     byte ptr [esp+2Ch+var_4], 1
0x81764C: jz      short loc_817660
0x81764E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817652: mov     ecx, eax
0x817654: add     eax, 5Ch ; '\'
0x817657: cmp     [eax], ebp
0x817659: jnz     short loc_817660
0x81765B: call    sub_772560
0x817660: mov     edi, [esp+2Ch+a3]
0x817664: push    2
0x817666: push    1
0x817668: push    ebp
0x817669: push    edi
0x81766A: call    sub_801110
0x81766F: mov     edx, [esi+14h]
0x817672: add     esp, 10h
0x817675: push    edi; a3
0x817676: push    edx; a2
0x817677: mov     ecx, esi; this
0x817679: call    sub_760010
0x81767E: lea     eax, [esp+2Ch+var_10]
0x817682: push    eax
0x817683: call    sub_772630
0x817688: add     esp, 4
0x81768B: push    eax
0x81768C: lea     ecx, [esp+30h+a3]
0x817690: mov     byte ptr [esp+30h+var_4], 1Dh
0x817695: call    sub_75FAE0
0x81769A: mov     eax, [esp+2Ch+var_10]
0x81769E: cmp     eax, ebp
0x8176A0: mov     byte ptr [esp+2Ch+var_4], 1
0x8176A5: jz      short loc_8176B9
0x8176A7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8176AB: mov     ecx, eax
0x8176AD: add     eax, 5Ch ; '\'
0x8176B0: cmp     [eax], ebp
0x8176B2: jnz     short loc_8176B9
0x8176B4: call    sub_772560
0x8176B9: mov     ebx, [esp+2Ch+a3]
0x8176BD: push    2
0x8176BF: push    1
0x8176C1: push    1
0x8176C3: push    ebx
0x8176C4: call    sub_801110
0x8176C9: mov     ecx, [esi+14h]
0x8176CC: add     esp, 10h
0x8176CF: push    ebx; a3
0x8176D0: push    ecx; a2
0x8176D1: mov     ecx, esi; this
0x8176D3: call    sub_760010
0x8176D8: mov     edx, ds:0B452C0h
0x8176DE: push    edx; a2
0x8176DF: mov     ecx, esi; this
0x8176E1: call    sub_7AECB0
0x8176E6: mov     eax, ds:0B450C4h
0x8176EB: push    eax; a2
0x8176EC: mov     ecx, esi; this
0x8176EE: call    sub_7AEC60
0x8176F3: cmp     [esi+30h], ebp
0x8176F6: jnz     short loc_817700
0x8176F8: call    sub_772DF0
0x8176FD: mov     [esi+30h], eax
0x817700: mov     ecx, [esi+30h]
0x817703: push    ebp
0x817704: push    1
0x817706: push    1Bh
0x817708: call    sub_772CD0
0x81770D: cmp     [esi+30h], ebp
0x817710: jnz     short loc_81771A
0x817712: call    sub_772DF0
0x817717: mov     [esi+30h], eax
0x81771A: mov     ecx, [esi+30h]
0x81771D: push    ebp
0x81771E: push    5
0x817720: push    13h
0x817722: call    sub_772CD0
0x817727: cmp     [esi+30h], ebp
0x81772A: jnz     short loc_817734
0x81772C: call    sub_772DF0
0x817731: mov     [esi+30h], eax
0x817734: mov     ecx, [esi+30h]
0x817737: push    ebp
0x817738: push    6
0x81773A: push    14h
0x81773C: call    sub_772CD0
0x817741: cmp     [esi+30h], ebp
0x817744: jnz     short loc_81774E
0x817746: call    sub_772DF0
0x81774B: mov     [esi+30h], eax
0x81774E: mov     ecx, [esi+30h]
0x817751: push    ebp
0x817752: push    1
0x817754: push    0Fh
0x817756: call    sub_772CD0
0x81775B: cmp     [esi+30h], ebp
0x81775E: jnz     short loc_817768
0x817760: call    sub_772DF0
0x817765: mov     [esi+30h], eax
0x817768: mov     ecx, [esi+30h]
0x81776B: push    ebp
0x81776C: push    1
0x81776E: push    7
0x817770: call    sub_772CD0
0x817775: cmp     [esi+30h], ebp
0x817778: jnz     short loc_817782
0x81777A: call    sub_772DF0
0x81777F: mov     [esi+30h], eax
0x817782: mov     ecx, [esi+30h]
0x817785: push    ebp
0x817786: push    4
0x817788: push    17h
0x81778A: call    sub_772CD0
0x81778F: cmp     [esi+30h], ebp
0x817792: jnz     short loc_81779C
0x817794: call    sub_772DF0
0x817799: mov     [esi+30h], eax
0x81779C: mov     ecx, [esi+30h]
0x81779F: push    ebp
0x8177A0: push    1
0x8177A2: push    0Eh
0x8177A4: call    sub_772CD0
0x8177A9: cmp     [esi+30h], ebp
0x8177AC: jnz     short loc_8177B6
0x8177AE: call    sub_772DF0
0x8177B3: mov     [esi+30h], eax
0x8177B6: mov     ecx, [esi+30h]
0x8177B9: push    ebp
0x8177BA: push    ebp
0x8177BB: push    34h ; '4'
0x8177BD: call    sub_772CD0
0x8177C2: cmp     esi, ds:0B45680h
0x8177C8: mov     dword ptr ds:0B43B9Ch, 82h ; '‚'
0x8177D2: mov     dword ptr ds:0B4422Ch, 0Ch
0x8177DC: jz      short loc_8177FD
0x8177DE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8177E2: jnz     short loc_8177EB
0x8177E4: mov     ecx, esi
0x8177E6: call    sub_7604D0
0x8177EB: mov     esi, ds:0B45680h
0x8177F1: cmp     esi, ebp
0x8177F3: mov     [esp+2Ch+var_14], esi
0x8177F7: jz      short loc_8177FD
0x8177F9: add     dword ptr [esi+60h], 1
0x8177FD: cmp     dword ptr [esi+18h], 2
0x817801: jnb     loc_8178BA
0x817807: lea     ecx, [esp+2Ch+var_10]
0x81780B: push    ecx
0x81780C: call    sub_772630
0x817811: add     esp, 4
0x817814: push    eax
0x817815: lea     ecx, [esp+30h+a3]
0x817819: mov     byte ptr [esp+30h+var_4], 1Eh
0x81781E: call    sub_75FAE0
0x817823: mov     eax, [esp+2Ch+var_10]
0x817827: cmp     eax, ebp
0x817829: mov     byte ptr [esp+2Ch+var_4], 1
0x81782E: jz      short loc_817842
0x817830: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817834: mov     ecx, eax
0x817836: add     eax, 5Ch ; '\'
0x817839: cmp     [eax], ebp
0x81783B: jnz     short loc_817842
0x81783D: call    sub_772560
0x817842: mov     edi, [esp+2Ch+a3]
0x817846: push    2
0x817848: push    1
0x81784A: push    ebp
0x81784B: push    edi
0x81784C: call    sub_801110
0x817851: mov     edx, [esi+14h]
0x817854: add     esp, 10h
0x817857: push    edi; a3
0x817858: push    edx; a2
0x817859: mov     ecx, esi; this
0x81785B: call    sub_760010
0x817860: lea     eax, [esp+2Ch+var_10]
0x817864: push    eax
0x817865: call    sub_772630
0x81786A: add     esp, 4
0x81786D: push    eax
0x81786E: lea     ecx, [esp+30h+a3]
0x817872: mov     byte ptr [esp+30h+var_4], 1Fh
0x817877: call    sub_75FAE0
0x81787C: mov     eax, [esp+2Ch+var_10]
0x817880: cmp     eax, ebp
0x817882: mov     byte ptr [esp+2Ch+var_4], 1
0x817887: jz      short loc_81789B
0x817889: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81788D: mov     ecx, eax
0x81788F: add     eax, 5Ch ; '\'
0x817892: cmp     [eax], ebp
0x817894: jnz     short loc_81789B
0x817896: call    sub_772560
0x81789B: mov     ebx, [esp+2Ch+a3]
0x81789F: push    2
0x8178A1: push    1
0x8178A3: push    1
0x8178A5: push    ebx
0x8178A6: call    sub_801110
0x8178AB: mov     ecx, [esi+14h]
0x8178AE: add     esp, 10h
0x8178B1: push    ebx; a3
0x8178B2: push    ecx; a2
0x8178B3: mov     ecx, esi; this
0x8178B5: call    sub_760010
0x8178BA: mov     edx, ds:0B452BCh
0x8178C0: push    edx; a2
0x8178C1: mov     ecx, esi; this
0x8178C3: call    sub_7AECB0
0x8178C8: mov     eax, ds:0B450B8h
0x8178CD: push    eax; a2
0x8178CE: mov     ecx, esi; this
0x8178D0: call    sub_7AEC60
0x8178D5: cmp     [esi+30h], ebp
0x8178D8: jnz     short loc_8178E2
0x8178DA: call    sub_772DF0
0x8178DF: mov     [esi+30h], eax
0x8178E2: mov     ecx, [esi+30h]
0x8178E5: push    ebp
0x8178E6: push    ebp
0x8178E7: push    1Bh
0x8178E9: call    sub_772CD0
0x8178EE: cmp     [esi+30h], ebp
0x8178F1: jnz     short loc_8178FB
0x8178F3: call    sub_772DF0
0x8178F8: mov     [esi+30h], eax
0x8178FB: mov     ecx, [esi+30h]
0x8178FE: push    ebp
0x8178FF: push    5
0x817901: push    13h
0x817903: call    sub_772CD0
0x817908: cmp     [esi+30h], ebp
0x81790B: jnz     short loc_817915
0x81790D: call    sub_772DF0
0x817912: mov     [esi+30h], eax
0x817915: mov     ecx, [esi+30h]
0x817918: push    ebp
0x817919: push    6
0x81791B: push    14h
0x81791D: call    sub_772CD0
0x817922: cmp     [esi+30h], ebp
0x817925: jnz     short loc_81792F
0x817927: call    sub_772DF0
0x81792C: mov     [esi+30h], eax
0x81792F: mov     ecx, [esi+30h]
0x817932: push    ebp
0x817933: push    1
0x817935: push    0Fh
0x817937: call    sub_772CD0
0x81793C: cmp     [esi+30h], ebp
0x81793F: jnz     short loc_817949
0x817941: call    sub_772DF0
0x817946: mov     [esi+30h], eax
0x817949: mov     ecx, [esi+30h]
0x81794C: push    ebp
0x81794D: push    1
0x81794F: push    7
0x817951: call    sub_772CD0
0x817956: cmp     [esi+30h], ebp
0x817959: jnz     short loc_817963
0x81795B: call    sub_772DF0
0x817960: mov     [esi+30h], eax
0x817963: mov     ecx, [esi+30h]
0x817966: push    ebp
0x817967: push    4
0x817969: push    17h
0x81796B: call    sub_772CD0
0x817970: cmp     [esi+30h], ebp
0x817973: jnz     short loc_81797D
0x817975: call    sub_772DF0
0x81797A: mov     [esi+30h], eax
0x81797D: mov     ecx, [esi+30h]
0x817980: push    ebp
0x817981: push    1
0x817983: push    0Eh
0x817985: call    sub_772CD0
0x81798A: cmp     [esi+30h], ebp
0x81798D: jnz     short loc_817997
0x81798F: call    sub_772DF0
0x817994: mov     [esi+30h], eax
0x817997: mov     ecx, [esi+30h]
0x81799A: push    ebp
0x81799B: push    ebp
0x81799C: push    34h ; '4'
0x81799E: call    sub_772CD0
0x8179A3: cmp     esi, ds:0B45684h
0x8179A9: mov     dword ptr ds:0B43C00h, 18082h
0x8179B3: mov     dword ptr ds:0B44290h, 0Ch
0x8179BD: mov     dword ptr ds:0B43570h, 18000h
0x8179C7: jz      short loc_8179E8
0x8179C9: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8179CD: jnz     short loc_8179D6
0x8179CF: mov     ecx, esi
0x8179D1: call    sub_7604D0
0x8179D6: mov     esi, ds:0B45684h
0x8179DC: cmp     esi, ebp
0x8179DE: mov     [esp+2Ch+var_14], esi
0x8179E2: jz      short loc_8179E8
0x8179E4: add     dword ptr [esi+60h], 1
0x8179E8: cmp     dword ptr [esi+18h], 2
0x8179EC: jnb     loc_817AA5
0x8179F2: lea     ecx, [esp+2Ch+var_10]
0x8179F6: push    ecx
0x8179F7: call    sub_772630
0x8179FC: add     esp, 4
0x8179FF: push    eax
0x817A00: lea     ecx, [esp+30h+a3]
0x817A04: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x817A09: call    sub_75FAE0
0x817A0E: mov     eax, [esp+2Ch+var_10]
0x817A12: cmp     eax, ebp
0x817A14: mov     byte ptr [esp+2Ch+var_4], 1
0x817A19: jz      short loc_817A2D
0x817A1B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817A1F: mov     ecx, eax
0x817A21: add     eax, 5Ch ; '\'
0x817A24: cmp     [eax], ebp
0x817A26: jnz     short loc_817A2D
0x817A28: call    sub_772560
0x817A2D: mov     edi, [esp+2Ch+a3]
0x817A31: push    2
0x817A33: push    1
0x817A35: push    ebp
0x817A36: push    edi
0x817A37: call    sub_801110
0x817A3C: mov     edx, [esi+14h]
0x817A3F: add     esp, 10h
0x817A42: push    edi; a3
0x817A43: push    edx; a2
0x817A44: mov     ecx, esi; this
0x817A46: call    sub_760010
0x817A4B: lea     eax, [esp+2Ch+var_10]
0x817A4F: push    eax
0x817A50: call    sub_772630
0x817A55: add     esp, 4
0x817A58: push    eax
0x817A59: lea     ecx, [esp+30h+a3]
0x817A5D: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x817A62: call    sub_75FAE0
0x817A67: mov     eax, [esp+2Ch+var_10]
0x817A6B: cmp     eax, ebp
0x817A6D: mov     byte ptr [esp+2Ch+var_4], 1
0x817A72: jz      short loc_817A86
0x817A74: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817A78: mov     ecx, eax
0x817A7A: add     eax, 5Ch ; '\'
0x817A7D: cmp     [eax], ebp
0x817A7F: jnz     short loc_817A86
0x817A81: call    sub_772560
0x817A86: mov     ebx, [esp+2Ch+a3]
0x817A8A: push    2
0x817A8C: push    1
0x817A8E: push    1
0x817A90: push    ebx
0x817A91: call    sub_801110
0x817A96: mov     ecx, [esi+14h]
0x817A99: add     esp, 10h
0x817A9C: push    ebx; a3
0x817A9D: push    ecx; a2
0x817A9E: mov     ecx, esi; this
0x817AA0: call    sub_760010
0x817AA5: mov     edx, ds:0B452C4h
0x817AAB: push    edx; a2
0x817AAC: mov     ecx, esi; this
0x817AAE: call    sub_7AECB0
0x817AB3: mov     eax, ds:0B450C8h
0x817AB8: push    eax; a2
0x817AB9: mov     ecx, esi; this
0x817ABB: call    sub_7AEC60
0x817AC0: cmp     [esi+30h], ebp
0x817AC3: jnz     short loc_817ACD
0x817AC5: call    sub_772DF0
0x817ACA: mov     [esi+30h], eax
0x817ACD: mov     ecx, [esi+30h]
0x817AD0: push    ebp
0x817AD1: push    ebp
0x817AD2: push    1Bh
0x817AD4: call    sub_772CD0
0x817AD9: cmp     [esi+30h], ebp
0x817ADC: jnz     short loc_817AE6
0x817ADE: call    sub_772DF0
0x817AE3: mov     [esi+30h], eax
0x817AE6: mov     ecx, [esi+30h]
0x817AE9: push    ebp
0x817AEA: push    5
0x817AEC: push    13h
0x817AEE: call    sub_772CD0
0x817AF3: cmp     [esi+30h], ebp
0x817AF6: jnz     short loc_817B00
0x817AF8: call    sub_772DF0
0x817AFD: mov     [esi+30h], eax
0x817B00: mov     ecx, [esi+30h]
0x817B03: push    ebp
0x817B04: push    6
0x817B06: push    14h
0x817B08: call    sub_772CD0
0x817B0D: cmp     [esi+30h], ebp
0x817B10: jnz     short loc_817B1A
0x817B12: call    sub_772DF0
0x817B17: mov     [esi+30h], eax
0x817B1A: mov     ecx, [esi+30h]
0x817B1D: push    ebp
0x817B1E: push    1
0x817B20: push    0Fh
0x817B22: call    sub_772CD0
0x817B27: cmp     [esi+30h], ebp
0x817B2A: jnz     short loc_817B34
0x817B2C: call    sub_772DF0
0x817B31: mov     [esi+30h], eax
0x817B34: mov     ecx, [esi+30h]
0x817B37: push    ebp
0x817B38: push    1
0x817B3A: push    7
0x817B3C: call    sub_772CD0
0x817B41: cmp     [esi+30h], ebp
0x817B44: jnz     short loc_817B4E
0x817B46: call    sub_772DF0
0x817B4B: mov     [esi+30h], eax
0x817B4E: mov     ecx, [esi+30h]
0x817B51: push    ebp
0x817B52: push    4
0x817B54: push    17h
0x817B56: call    sub_772CD0
0x817B5B: cmp     [esi+30h], ebp
0x817B5E: jnz     short loc_817B68
0x817B60: call    sub_772DF0
0x817B65: mov     [esi+30h], eax
0x817B68: mov     ecx, [esi+30h]
0x817B6B: push    ebp
0x817B6C: push    1
0x817B6E: push    0Eh
0x817B70: call    sub_772CD0
0x817B75: cmp     [esi+30h], ebp
0x817B78: jnz     short loc_817B82
0x817B7A: call    sub_772DF0
0x817B7F: mov     [esi+30h], eax
0x817B82: mov     ecx, [esi+30h]
0x817B85: push    ebp
0x817B86: push    ebp
0x817B87: push    34h ; '4'
0x817B89: call    sub_772CD0
0x817B8E: cmp     esi, ds:0B45620h
0x817B94: mov     dword ptr ds:0B43C04h, 18082h
0x817B9E: mov     dword ptr ds:0B44294h, 0Ch
0x817BA8: mov     dword ptr ds:0B43574h, 18000h
0x817BB2: jz      short loc_817BD3
0x817BB4: add     dword ptr [esi+60h], 0FFFFFFFFh
0x817BB8: jnz     short loc_817BC1
0x817BBA: mov     ecx, esi
0x817BBC: call    sub_7604D0
0x817BC1: mov     esi, ds:0B45620h
0x817BC7: cmp     esi, ebp
0x817BC9: mov     [esp+2Ch+var_14], esi
0x817BCD: jz      short loc_817BD3
0x817BCF: add     dword ptr [esi+60h], 1
0x817BD3: cmp     dword ptr [esi+18h], 3
0x817BD7: jnb     loc_817CEA
0x817BDD: lea     ecx, [esp+2Ch+var_10]
0x817BE1: push    ecx
0x817BE2: call    sub_772630
0x817BE7: add     esp, 4
0x817BEA: push    eax
0x817BEB: lea     ecx, [esp+30h+a3]
0x817BEF: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x817BF4: call    sub_75FAE0
0x817BF9: mov     eax, [esp+2Ch+var_10]
0x817BFD: cmp     eax, ebp
0x817BFF: mov     byte ptr [esp+2Ch+var_4], 1
0x817C04: jz      short loc_817C18
0x817C06: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817C0A: mov     ecx, eax
0x817C0C: add     eax, 5Ch ; '\'
0x817C0F: cmp     [eax], ebp
0x817C11: jnz     short loc_817C18
0x817C13: call    sub_772560
0x817C18: mov     edi, [esp+2Ch+a3]
0x817C1C: push    2
0x817C1E: push    1
0x817C20: push    ebp
0x817C21: push    edi
0x817C22: call    sub_801110
0x817C27: mov     edx, [esi+14h]
0x817C2A: add     esp, 10h
0x817C2D: push    edi; a3
0x817C2E: push    edx; a2
0x817C2F: mov     ecx, esi; this
0x817C31: call    sub_760010
0x817C36: lea     eax, [esp+2Ch+var_10]
0x817C3A: push    eax
0x817C3B: call    sub_772630
0x817C40: add     esp, 4
0x817C43: push    eax
0x817C44: lea     ecx, [esp+30h+a3]
0x817C48: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x817C4D: call    sub_75FAE0
0x817C52: mov     eax, [esp+2Ch+var_10]
0x817C56: cmp     eax, ebp
0x817C58: mov     byte ptr [esp+2Ch+var_4], 1
0x817C5D: jz      short loc_817C71
0x817C5F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817C63: mov     ecx, eax
0x817C65: add     eax, 5Ch ; '\'
0x817C68: cmp     [eax], ebp
0x817C6A: jnz     short loc_817C71
0x817C6C: call    sub_772560
0x817C71: mov     edi, [esp+2Ch+a3]
0x817C75: push    2
0x817C77: push    1
0x817C79: push    1
0x817C7B: push    edi
0x817C7C: call    sub_801110
0x817C81: mov     ecx, [esi+14h]
0x817C84: add     esp, 10h
0x817C87: push    edi; a3
0x817C88: push    ecx; a2
0x817C89: mov     ecx, esi; this
0x817C8B: call    sub_760010
0x817C90: lea     edx, [esp+2Ch+var_10]
0x817C94: push    edx
0x817C95: call    sub_772630
0x817C9A: add     esp, 4
0x817C9D: push    eax
0x817C9E: lea     ecx, [esp+30h+a3]
0x817CA2: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x817CA7: call    sub_75FAE0
0x817CAC: mov     eax, [esp+2Ch+var_10]
0x817CB0: cmp     eax, ebp
0x817CB2: mov     byte ptr [esp+2Ch+var_4], 1
0x817CB7: jz      short loc_817CCB
0x817CB9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817CBD: mov     ecx, eax
0x817CBF: add     eax, 5Ch ; '\'
0x817CC2: cmp     [eax], ebp
0x817CC4: jnz     short loc_817CCB
0x817CC6: call    sub_772560
0x817CCB: mov     ebx, [esp+2Ch+a3]
0x817CCF: push    2
0x817CD1: push    1
0x817CD3: push    2
0x817CD5: push    ebx
0x817CD6: call    sub_801110
0x817CDB: mov     eax, [esi+14h]
0x817CDE: add     esp, 10h
0x817CE1: push    ebx; a3
0x817CE2: push    eax; a2
0x817CE3: mov     ecx, esi; this
0x817CE5: call    sub_760010
0x817CEA: mov     ecx, ds:0B452B8h
0x817CF0: push    ecx; a2
0x817CF1: mov     ecx, esi; this
0x817CF3: call    sub_7AECB0
0x817CF8: mov     edx, ds:0B450E4h
0x817CFE: push    edx; a2
0x817CFF: mov     ecx, esi; this
0x817D01: call    sub_7AEC60
0x817D06: cmp     [esi+30h], ebp
0x817D09: jnz     short loc_817D13
0x817D0B: call    sub_772DF0
0x817D10: mov     [esi+30h], eax
0x817D13: mov     ecx, [esi+30h]
0x817D16: push    ebp
0x817D17: push    1
0x817D19: push    1Bh
0x817D1B: call    sub_772CD0
0x817D20: cmp     [esi+30h], ebp
0x817D23: jnz     short loc_817D2D
0x817D25: call    sub_772DF0
0x817D2A: mov     [esi+30h], eax
0x817D2D: mov     ecx, [esi+30h]
0x817D30: push    ebp
0x817D31: push    5
0x817D33: push    13h
0x817D35: call    sub_772CD0
0x817D3A: cmp     [esi+30h], ebp
0x817D3D: jnz     short loc_817D47
0x817D3F: call    sub_772DF0
0x817D44: mov     [esi+30h], eax
0x817D47: mov     ecx, [esi+30h]
0x817D4A: push    ebp
0x817D4B: push    6
0x817D4D: push    14h
0x817D4F: call    sub_772CD0
0x817D54: cmp     [esi+30h], ebp
0x817D57: jnz     short loc_817D61
0x817D59: call    sub_772DF0
0x817D5E: mov     [esi+30h], eax
0x817D61: mov     ecx, [esi+30h]
0x817D64: push    ebp
0x817D65: push    1
0x817D67: push    0Fh
0x817D69: call    sub_772CD0
0x817D6E: cmp     [esi+30h], ebp
0x817D71: jnz     short loc_817D7B
0x817D73: call    sub_772DF0
0x817D78: mov     [esi+30h], eax
0x817D7B: mov     ecx, [esi+30h]
0x817D7E: push    ebp
0x817D7F: push    1
0x817D81: push    7
0x817D83: call    sub_772CD0
0x817D88: cmp     [esi+30h], ebp
0x817D8B: jnz     short loc_817D95
0x817D8D: call    sub_772DF0
0x817D92: mov     [esi+30h], eax
0x817D95: mov     ecx, [esi+30h]
0x817D98: push    ebp
0x817D99: push    4
0x817D9B: push    17h
0x817D9D: call    sub_772CD0
0x817DA2: cmp     [esi+30h], ebp
0x817DA5: jnz     short loc_817DAF
0x817DA7: call    sub_772DF0
0x817DAC: mov     [esi+30h], eax
0x817DAF: mov     ecx, [esi+30h]
0x817DB2: push    ebp
0x817DB3: push    1
0x817DB5: push    0Eh
0x817DB7: call    sub_772CD0
0x817DBC: cmp     [esi+30h], ebp
0x817DBF: jnz     short loc_817DC9
0x817DC1: call    sub_772DF0
0x817DC6: mov     [esi+30h], eax
0x817DC9: mov     ecx, [esi+30h]
0x817DCC: push    ebp
0x817DCD: push    ebp
0x817DCE: push    34h ; '4'
0x817DD0: call    sub_772CD0
0x817DD5: cmp     esi, ds:0B45624h
0x817DDB: mov     dword ptr ds:0B43BA0h, 82h ; '‚'
0x817DE5: mov     dword ptr ds:0B44230h, 8Ch ; 'Œ'
0x817DEF: mov     dword ptr ds:0B448C0h, 4
0x817DF9: jz      short loc_817E1A
0x817DFB: add     dword ptr [esi+60h], 0FFFFFFFFh
0x817DFF: jnz     short loc_817E08
0x817E01: mov     ecx, esi
0x817E03: call    sub_7604D0
0x817E08: mov     esi, ds:0B45624h
0x817E0E: cmp     esi, ebp
0x817E10: mov     [esp+2Ch+var_14], esi
0x817E14: jz      short loc_817E1A
0x817E16: add     dword ptr [esi+60h], 1
0x817E1A: cmp     dword ptr [esi+18h], 3
0x817E1E: jnb     loc_817F31
0x817E24: lea     eax, [esp+2Ch+var_10]
0x817E28: push    eax
0x817E29: call    sub_772630
0x817E2E: add     esp, 4
0x817E31: push    eax
0x817E32: lea     ecx, [esp+30h+a3]
0x817E36: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x817E3B: call    sub_75FAE0
0x817E40: mov     eax, [esp+2Ch+var_10]
0x817E44: cmp     eax, ebp
0x817E46: mov     byte ptr [esp+2Ch+var_4], 1
0x817E4B: jz      short loc_817E5F
0x817E4D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817E51: mov     ecx, eax
0x817E53: add     eax, 5Ch ; '\'
0x817E56: cmp     [eax], ebp
0x817E58: jnz     short loc_817E5F
0x817E5A: call    sub_772560
0x817E5F: mov     edi, [esp+2Ch+a3]
0x817E63: push    2
0x817E65: push    1
0x817E67: push    ebp
0x817E68: push    edi
0x817E69: call    sub_801110
0x817E6E: mov     ecx, [esi+14h]
0x817E71: add     esp, 10h
0x817E74: push    edi; a3
0x817E75: push    ecx; a2
0x817E76: mov     ecx, esi; this
0x817E78: call    sub_760010
0x817E7D: lea     edx, [esp+2Ch+var_10]
0x817E81: push    edx
0x817E82: call    sub_772630
0x817E87: add     esp, 4
0x817E8A: push    eax
0x817E8B: lea     ecx, [esp+30h+a3]
0x817E8F: mov     byte ptr [esp+30h+var_4], 26h ; '&'
0x817E94: call    sub_75FAE0
0x817E99: mov     eax, [esp+2Ch+var_10]
0x817E9D: cmp     eax, ebp
0x817E9F: mov     byte ptr [esp+2Ch+var_4], 1
0x817EA4: jz      short loc_817EB8
0x817EA6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817EAA: mov     ecx, eax
0x817EAC: add     eax, 5Ch ; '\'
0x817EAF: cmp     [eax], ebp
0x817EB1: jnz     short loc_817EB8
0x817EB3: call    sub_772560
0x817EB8: mov     edi, [esp+2Ch+a3]
0x817EBC: push    2
0x817EBE: push    1
0x817EC0: push    1
0x817EC2: push    edi
0x817EC3: call    sub_801110
0x817EC8: mov     eax, [esi+14h]
0x817ECB: add     esp, 10h
0x817ECE: push    edi; a3
0x817ECF: push    eax; a2
0x817ED0: mov     ecx, esi; this
0x817ED2: call    sub_760010
0x817ED7: lea     ecx, [esp+2Ch+var_10]
0x817EDB: push    ecx
0x817EDC: call    sub_772630
0x817EE1: add     esp, 4
0x817EE4: push    eax
0x817EE5: lea     ecx, [esp+30h+a3]
0x817EE9: mov     byte ptr [esp+30h+var_4], 27h ; '''
0x817EEE: call    sub_75FAE0
0x817EF3: mov     eax, [esp+2Ch+var_10]
0x817EF7: cmp     eax, ebp
0x817EF9: mov     byte ptr [esp+2Ch+var_4], 1
0x817EFE: jz      short loc_817F12
0x817F00: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x817F04: mov     ecx, eax
0x817F06: add     eax, 5Ch ; '\'
0x817F09: cmp     [eax], ebp
0x817F0B: jnz     short loc_817F12
0x817F0D: call    sub_772560
0x817F12: mov     ebx, [esp+2Ch+a3]
0x817F16: push    2
0x817F18: push    1
0x817F1A: push    2
0x817F1C: push    ebx
0x817F1D: call    sub_801110
0x817F22: mov     edx, [esi+14h]
0x817F25: add     esp, 10h
0x817F28: push    ebx; a3
0x817F29: push    edx; a2
0x817F2A: mov     ecx, esi; this
0x817F2C: call    sub_760010
0x817F31: mov     eax, ds:0B452C0h
0x817F36: push    eax; a2
0x817F37: mov     ecx, esi; this
0x817F39: call    sub_7AECB0
0x817F3E: mov     ecx, ds:0B450F4h
0x817F44: push    ecx; a2
0x817F45: mov     ecx, esi; this
0x817F47: call    sub_7AEC60
0x817F4C: cmp     [esi+30h], ebp
0x817F4F: jnz     short loc_817F59
0x817F51: call    sub_772DF0
0x817F56: mov     [esi+30h], eax
0x817F59: mov     ecx, [esi+30h]
0x817F5C: push    ebp
0x817F5D: push    1
0x817F5F: push    1Bh
0x817F61: call    sub_772CD0
0x817F66: cmp     [esi+30h], ebp
0x817F69: jnz     short loc_817F73
0x817F6B: call    sub_772DF0
0x817F70: mov     [esi+30h], eax
0x817F73: mov     ecx, [esi+30h]
0x817F76: push    ebp
0x817F77: push    5
0x817F79: push    13h
0x817F7B: call    sub_772CD0
0x817F80: cmp     [esi+30h], ebp
0x817F83: jnz     short loc_817F8D
0x817F85: call    sub_772DF0
0x817F8A: mov     [esi+30h], eax
0x817F8D: mov     ecx, [esi+30h]
0x817F90: push    ebp
0x817F91: push    6
0x817F93: push    14h
0x817F95: call    sub_772CD0
0x817F9A: cmp     [esi+30h], ebp
0x817F9D: jnz     short loc_817FA7
0x817F9F: call    sub_772DF0
0x817FA4: mov     [esi+30h], eax
0x817FA7: mov     ecx, [esi+30h]
0x817FAA: push    ebp
0x817FAB: push    1
0x817FAD: push    0Fh
0x817FAF: call    sub_772CD0
0x817FB4: cmp     [esi+30h], ebp
0x817FB7: jnz     short loc_817FC1
0x817FB9: call    sub_772DF0
0x817FBE: mov     [esi+30h], eax
0x817FC1: mov     ecx, [esi+30h]
0x817FC4: push    ebp
0x817FC5: push    1
0x817FC7: push    7
0x817FC9: call    sub_772CD0
0x817FCE: cmp     [esi+30h], ebp
0x817FD1: jnz     short loc_817FDB
0x817FD3: call    sub_772DF0
0x817FD8: mov     [esi+30h], eax
0x817FDB: mov     ecx, [esi+30h]
0x817FDE: push    ebp
0x817FDF: mov     edi, 4
0x817FE4: push    edi
0x817FE5: push    17h
0x817FE7: call    sub_772CD0
0x817FEC: cmp     [esi+30h], ebp
0x817FEF: jnz     short loc_817FF9
0x817FF1: call    sub_772DF0
0x817FF6: mov     [esi+30h], eax
0x817FF9: mov     ecx, [esi+30h]
0x817FFC: push    ebp
0x817FFD: push    1
0x817FFF: push    0Eh
0x818001: call    sub_772CD0
0x818006: cmp     [esi+30h], ebp
0x818009: jnz     short loc_818013
0x81800B: call    sub_772DF0
0x818010: mov     [esi+30h], eax
0x818013: mov     ecx, [esi+30h]
0x818016: push    ebp
0x818017: push    ebp
0x818018: push    34h ; '4'
0x81801A: call    sub_772CD0
0x81801F: cmp     esi, ds:0B45688h
0x818025: mov     dword ptr ds:0B43BA4h, 82h ; '‚'
0x81802F: mov     dword ptr ds:0B44234h, 8Ch ; 'Œ'
0x818039: mov     ds:0B448C4h, edi
0x81803F: jz      short loc_818060
0x818041: add     dword ptr [esi+60h], 0FFFFFFFFh
0x818045: jnz     short loc_81804E
0x818047: mov     ecx, esi
0x818049: call    sub_7604D0
0x81804E: mov     esi, ds:0B45688h
0x818054: cmp     esi, ebp
0x818056: mov     [esp+2Ch+var_14], esi
0x81805A: jz      short loc_818060
0x81805C: add     dword ptr [esi+60h], 1
0x818060: cmp     [esi+18h], edi
0x818063: jnb     loc_8181D0
0x818069: lea     edx, [esp+2Ch+var_10]
0x81806D: push    edx
0x81806E: call    sub_772630
0x818073: add     esp, 4
0x818076: push    eax
0x818077: lea     ecx, [esp+30h+a3]
0x81807B: mov     byte ptr [esp+30h+var_4], 28h ; '('
0x818080: call    sub_75FAE0
0x818085: mov     eax, [esp+2Ch+var_10]
0x818089: cmp     eax, ebp
0x81808B: mov     byte ptr [esp+2Ch+var_4], 1
0x818090: jz      short loc_8180A4
0x818092: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818096: mov     ecx, eax
0x818098: add     eax, 5Ch ; '\'
0x81809B: cmp     [eax], ebp
0x81809D: jnz     short loc_8180A4
0x81809F: call    sub_772560
0x8180A4: mov     edi, [esp+2Ch+a3]
0x8180A8: push    2
0x8180AA: push    1
0x8180AC: push    ebp
0x8180AD: push    edi
0x8180AE: call    sub_801110
0x8180B3: mov     eax, [esi+14h]
0x8180B6: add     esp, 10h
0x8180B9: push    edi; a3
0x8180BA: push    eax; a2
0x8180BB: mov     ecx, esi; this
0x8180BD: call    sub_760010
0x8180C2: lea     ecx, [esp+2Ch+var_10]
0x8180C6: push    ecx
0x8180C7: call    sub_772630
0x8180CC: add     esp, 4
0x8180CF: push    eax
0x8180D0: lea     ecx, [esp+30h+a3]
0x8180D4: mov     byte ptr [esp+30h+var_4], 29h ; ')'
0x8180D9: call    sub_75FAE0
0x8180DE: mov     eax, [esp+2Ch+var_10]
0x8180E2: cmp     eax, ebp
0x8180E4: mov     byte ptr [esp+2Ch+var_4], 1
0x8180E9: jz      short loc_8180FD
0x8180EB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8180EF: mov     ecx, eax
0x8180F1: add     eax, 5Ch ; '\'
0x8180F4: cmp     [eax], ebp
0x8180F6: jnz     short loc_8180FD
0x8180F8: call    sub_772560
0x8180FD: mov     edi, [esp+2Ch+a3]
0x818101: push    2
0x818103: push    1
0x818105: push    1
0x818107: push    edi
0x818108: call    sub_801110
0x81810D: mov     edx, [esi+14h]
0x818110: add     esp, 10h
0x818113: push    edi; a3
0x818114: push    edx; a2
0x818115: mov     ecx, esi; this
0x818117: call    sub_760010
0x81811C: lea     eax, [esp+2Ch+var_10]
0x818120: push    eax
0x818121: call    sub_772630
0x818126: add     esp, 4
0x818129: push    eax
0x81812A: lea     ecx, [esp+30h+a3]
0x81812E: mov     byte ptr [esp+30h+var_4], 2Ah ; '*'
0x818133: call    sub_75FAE0
0x818138: mov     eax, [esp+2Ch+var_10]
0x81813C: cmp     eax, ebp
0x81813E: mov     byte ptr [esp+2Ch+var_4], 1
0x818143: jz      short loc_818157
0x818145: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818149: mov     ecx, eax
0x81814B: add     eax, 5Ch ; '\'
0x81814E: cmp     [eax], ebp
0x818150: jnz     short loc_818157
0x818152: call    sub_772560
0x818157: mov     edi, [esp+2Ch+a3]
0x81815B: push    2
0x81815D: push    1
0x81815F: push    2
0x818161: push    edi
0x818162: call    sub_801110
0x818167: mov     ecx, [esi+14h]
0x81816A: add     esp, 10h
0x81816D: push    edi; a3
0x81816E: push    ecx; a2
0x81816F: mov     ecx, esi; this
0x818171: call    sub_760010
0x818176: lea     edx, [esp+2Ch+var_10]
0x81817A: push    edx
0x81817B: call    sub_772630
0x818180: add     esp, 4
0x818183: push    eax
0x818184: lea     ecx, [esp+30h+a3]
0x818188: mov     byte ptr [esp+30h+var_4], 2Bh ; '+'
0x81818D: call    sub_75FAE0
0x818192: mov     eax, [esp+2Ch+var_10]
0x818196: cmp     eax, ebp
0x818198: mov     byte ptr [esp+2Ch+var_4], 1
0x81819D: jz      short loc_8181B1
0x81819F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8181A3: mov     ecx, eax
0x8181A5: add     eax, 5Ch ; '\'
0x8181A8: cmp     [eax], ebp
0x8181AA: jnz     short loc_8181B1
0x8181AC: call    sub_772560
0x8181B1: mov     ebx, [esp+2Ch+a3]
0x8181B5: push    2
0x8181B7: push    1
0x8181B9: push    3
0x8181BB: push    ebx
0x8181BC: call    sub_801110
0x8181C1: mov     eax, [esi+14h]
0x8181C4: add     esp, 10h
0x8181C7: push    ebx; a3
0x8181C8: push    eax; a2
0x8181C9: mov     ecx, esi; this
0x8181CB: call    sub_760010
0x8181D0: mov     ecx, ds:0B452CCh
0x8181D6: push    ecx; a2
0x8181D7: mov     ecx, esi; this
0x8181D9: call    sub_7AECB0
0x8181DE: mov     edx, ds:0B450D0h
0x8181E4: push    edx; a2
0x8181E5: mov     ecx, esi; this
0x8181E7: call    sub_7AEC60
0x8181EC: cmp     [esi+30h], ebp
0x8181EF: jnz     short loc_8181F9
0x8181F1: call    sub_772DF0
0x8181F6: mov     [esi+30h], eax
0x8181F9: mov     ecx, [esi+30h]
0x8181FC: push    ebp
0x8181FD: push    ebp
0x8181FE: push    1Bh
0x818200: call    sub_772CD0
0x818205: cmp     [esi+30h], ebp
0x818208: jnz     short loc_818212
0x81820A: call    sub_772DF0
0x81820F: mov     [esi+30h], eax
0x818212: mov     ecx, [esi+30h]
0x818215: push    ebp
0x818216: push    ebp
0x818217: push    0Fh
0x818219: call    sub_772CD0
0x81821E: cmp     [esi+30h], ebp
0x818221: jnz     short loc_81822B
0x818223: call    sub_772DF0
0x818228: mov     [esi+30h], eax
0x81822B: mov     ecx, [esi+30h]
0x81822E: push    ebp
0x81822F: push    1
0x818231: push    7
0x818233: call    sub_772CD0
0x818238: cmp     [esi+30h], ebp
0x81823B: jnz     short loc_818245
0x81823D: call    sub_772DF0
0x818242: mov     [esi+30h], eax
0x818245: mov     ecx, [esi+30h]
0x818248: push    ebp
0x818249: push    4
0x81824B: push    17h
0x81824D: call    sub_772CD0
0x818252: cmp     [esi+30h], ebp
0x818255: jnz     short loc_81825F
0x818257: call    sub_772DF0
0x81825C: mov     [esi+30h], eax
0x81825F: mov     ecx, [esi+30h]
0x818262: push    ebp
0x818263: push    1
0x818265: push    0Eh
0x818267: call    sub_772CD0
0x81826C: cmp     [esi+30h], ebp
0x81826F: jnz     short loc_818279
0x818271: call    sub_772DF0
0x818276: mov     [esi+30h], eax
0x818279: mov     ecx, [esi+30h]
0x81827C: push    ebp
0x81827D: push    ebp
0x81827E: push    34h ; '4'
0x818280: call    sub_772CD0
0x818285: cmp     esi, ds:0B45628h
0x81828B: mov     dword ptr ds:0B43C08h, 18082h
0x818295: mov     dword ptr ds:0B44298h, 0Ch
0x81829F: mov     dword ptr ds:0B43578h, 18000h
0x8182A9: jz      short loc_8182CA
0x8182AB: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8182AF: jnz     short loc_8182B8
0x8182B1: mov     ecx, esi
0x8182B3: call    sub_7604D0
0x8182B8: mov     esi, ds:0B45628h
0x8182BE: cmp     esi, ebp
0x8182C0: mov     [esp+2Ch+var_14], esi
0x8182C4: jz      short loc_8182CA
0x8182C6: add     dword ptr [esi+60h], 1
0x8182CA: cmp     dword ptr [esi+18h], 4
0x8182CE: jnb     loc_81843B
0x8182D4: lea     eax, [esp+2Ch+var_10]
0x8182D8: push    eax
0x8182D9: call    sub_772630
0x8182DE: add     esp, 4
0x8182E1: push    eax
0x8182E2: lea     ecx, [esp+30h+a3]
0x8182E6: mov     byte ptr [esp+30h+var_4], 2Ch ; ','
0x8182EB: call    sub_75FAE0
0x8182F0: mov     eax, [esp+2Ch+var_10]
0x8182F4: cmp     eax, ebp
0x8182F6: mov     byte ptr [esp+2Ch+var_4], 1
0x8182FB: jz      short loc_81830F
0x8182FD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818301: mov     ecx, eax
0x818303: add     eax, 5Ch ; '\'
0x818306: cmp     [eax], ebp
0x818308: jnz     short loc_81830F
0x81830A: call    sub_772560
0x81830F: mov     edi, [esp+2Ch+a3]
0x818313: push    2
0x818315: push    1
0x818317: push    ebp
0x818318: push    edi
0x818319: call    sub_801110
0x81831E: mov     ecx, [esi+14h]
0x818321: add     esp, 10h
0x818324: push    edi; a3
0x818325: push    ecx; a2
0x818326: mov     ecx, esi; this
0x818328: call    sub_760010
0x81832D: lea     edx, [esp+2Ch+var_10]
0x818331: push    edx
0x818332: call    sub_772630
0x818337: add     esp, 4
0x81833A: push    eax
0x81833B: lea     ecx, [esp+30h+a3]
0x81833F: mov     byte ptr [esp+30h+var_4], 2Dh ; '-'
0x818344: call    sub_75FAE0
0x818349: mov     eax, [esp+2Ch+var_10]
0x81834D: cmp     eax, ebp
0x81834F: mov     byte ptr [esp+2Ch+var_4], 1
0x818354: jz      short loc_818368
0x818356: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81835A: mov     ecx, eax
0x81835C: add     eax, 5Ch ; '\'
0x81835F: cmp     [eax], ebp
0x818361: jnz     short loc_818368
0x818363: call    sub_772560
0x818368: mov     edi, [esp+2Ch+a3]
0x81836C: push    2
0x81836E: push    1
0x818370: push    1
0x818372: push    edi
0x818373: call    sub_801110
0x818378: mov     eax, [esi+14h]
0x81837B: add     esp, 10h
0x81837E: push    edi; a3
0x81837F: push    eax; a2
0x818380: mov     ecx, esi; this
0x818382: call    sub_760010
0x818387: lea     ecx, [esp+2Ch+var_10]
0x81838B: push    ecx
0x81838C: call    sub_772630
0x818391: add     esp, 4
0x818394: push    eax
0x818395: lea     ecx, [esp+30h+a3]
0x818399: mov     byte ptr [esp+30h+var_4], 2Eh ; '.'
0x81839E: call    sub_75FAE0
0x8183A3: mov     eax, [esp+2Ch+var_10]
0x8183A7: cmp     eax, ebp
0x8183A9: mov     byte ptr [esp+2Ch+var_4], 1
0x8183AE: jz      short loc_8183C2
0x8183B0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8183B4: mov     ecx, eax
0x8183B6: add     eax, 5Ch ; '\'
0x8183B9: cmp     [eax], ebp
0x8183BB: jnz     short loc_8183C2
0x8183BD: call    sub_772560
0x8183C2: mov     edi, [esp+2Ch+a3]
0x8183C6: push    2
0x8183C8: push    1
0x8183CA: push    2
0x8183CC: push    edi
0x8183CD: call    sub_801110
0x8183D2: mov     edx, [esi+14h]
0x8183D5: add     esp, 10h
0x8183D8: push    edi; a3
0x8183D9: push    edx; a2
0x8183DA: mov     ecx, esi; this
0x8183DC: call    sub_760010
0x8183E1: lea     eax, [esp+2Ch+var_10]
0x8183E5: push    eax
0x8183E6: call    sub_772630
0x8183EB: add     esp, 4
0x8183EE: push    eax
0x8183EF: lea     ecx, [esp+30h+a3]
0x8183F3: mov     byte ptr [esp+30h+var_4], 2Fh ; '/'
0x8183F8: call    sub_75FAE0
0x8183FD: mov     eax, [esp+2Ch+var_10]
0x818401: cmp     eax, ebp
0x818403: mov     byte ptr [esp+2Ch+var_4], 1
0x818408: jz      short loc_81841C
0x81840A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81840E: mov     ecx, eax
0x818410: add     eax, 5Ch ; '\'
0x818413: cmp     [eax], ebp
0x818415: jnz     short loc_81841C
0x818417: call    sub_772560
0x81841C: mov     ebx, [esp+2Ch+a3]
0x818420: push    2
0x818422: push    1
0x818424: push    3
0x818426: push    ebx
0x818427: call    sub_801110
0x81842C: mov     ecx, [esi+14h]
0x81842F: add     esp, 10h
0x818432: push    ebx; a3
0x818433: push    ecx; a2
0x818434: mov     ecx, esi; this
0x818436: call    sub_760010
0x81843B: mov     edx, ds:0B452C8h
0x818441: push    edx; a2
0x818442: mov     ecx, esi; this
0x818444: call    sub_7AECB0
0x818449: mov     eax, ds:0B450D4h
0x81844E: push    eax; a2
0x81844F: mov     ecx, esi; this
0x818451: call    sub_7AEC60
0x818456: cmp     [esi+30h], ebp
0x818459: jnz     short loc_818463
0x81845B: call    sub_772DF0
0x818460: mov     [esi+30h], eax
0x818463: mov     ecx, [esi+30h]
0x818466: push    ebp
0x818467: push    1
0x818469: push    1Bh
0x81846B: call    sub_772CD0
0x818470: cmp     [esi+30h], ebp
0x818473: jnz     short loc_81847D
0x818475: call    sub_772DF0
0x81847A: mov     [esi+30h], eax
0x81847D: mov     ecx, [esi+30h]
0x818480: push    ebp
0x818481: push    5
0x818483: push    13h
0x818485: call    sub_772CD0
0x81848A: cmp     [esi+30h], ebp
0x81848D: jnz     short loc_818497
0x81848F: call    sub_772DF0
0x818494: mov     [esi+30h], eax
0x818497: mov     ecx, [esi+30h]
0x81849A: push    ebp
0x81849B: push    6
0x81849D: push    14h
0x81849F: call    sub_772CD0
0x8184A4: cmp     [esi+30h], ebp
0x8184A7: jnz     short loc_8184B1
0x8184A9: call    sub_772DF0
0x8184AE: mov     [esi+30h], eax
0x8184B1: mov     ecx, [esi+30h]
0x8184B4: push    ebp
0x8184B5: push    ebp
0x8184B6: push    0Fh
0x8184B8: call    sub_772CD0
0x8184BD: cmp     [esi+30h], ebp
0x8184C0: jnz     short loc_8184CA
0x8184C2: call    sub_772DF0
0x8184C7: mov     [esi+30h], eax
0x8184CA: mov     ecx, [esi+30h]
0x8184CD: push    ebp
0x8184CE: push    1
0x8184D0: push    7
0x8184D2: call    sub_772CD0
0x8184D7: cmp     [esi+30h], ebp
0x8184DA: jnz     short loc_8184E4
0x8184DC: call    sub_772DF0
0x8184E1: mov     [esi+30h], eax
0x8184E4: mov     ecx, [esi+30h]
0x8184E7: push    ebp
0x8184E8: push    4
0x8184EA: push    17h
0x8184EC: call    sub_772CD0
0x8184F1: cmp     [esi+30h], ebp
0x8184F4: jnz     short loc_8184FE
0x8184F6: call    sub_772DF0
0x8184FB: mov     [esi+30h], eax
0x8184FE: mov     ecx, [esi+30h]
0x818501: push    ebp
0x818502: push    1
0x818504: push    0Eh
0x818506: call    sub_772CD0
0x81850B: cmp     [esi+30h], ebp
0x81850E: jnz     short loc_818518
0x818510: call    sub_772DF0
0x818515: mov     [esi+30h], eax
0x818518: mov     ecx, [esi+30h]
0x81851B: push    ebp
0x81851C: push    ebp
0x81851D: push    34h ; '4'
0x81851F: call    sub_772CD0
0x818524: mov     eax, ds:0B4562Ch
0x818529: or      edi, 0FFFFFFFFh
0x81852C: cmp     eax, ebp
0x81852E: mov     dword ptr ds:0B43BA8h, 82h ; '‚'
0x818538: mov     dword ptr ds:0B44238h, 0Ch
0x818542: jz      short loc_818556
0x818544: add     [eax+60h], edi
0x818547: mov     ecx, eax
0x818549: jnz     short loc_818550
0x81854B: call    sub_7604D0
0x818550: mov     ds:0B4562Ch, ebp
0x818556: mov     eax, ds:0B45694h
0x81855B: cmp     eax, ebp
0x81855D: jz      short loc_818571
0x81855F: add     [eax+60h], edi
0x818562: mov     ecx, eax
0x818564: jnz     short loc_81856B
0x818566: call    sub_7604D0
0x81856B: mov     ds:0B45694h, ebp
0x818571: cmp     esi, ds:0B45630h
0x818577: jz      short loc_818597
0x818579: add     [esi+60h], edi
0x81857C: jnz     short loc_818585
0x81857E: mov     ecx, esi
0x818580: call    sub_7604D0
0x818585: mov     esi, ds:0B45630h
0x81858B: cmp     esi, ebp
0x81858D: mov     [esp+2Ch+var_14], esi
0x818591: jz      short loc_818597
0x818593: add     dword ptr [esi+60h], 1
0x818597: cmp     dword ptr [esi+18h], 2
0x81859B: jnb     loc_818653
0x8185A1: lea     ecx, [esp+2Ch+var_10]
0x8185A5: push    ecx
0x8185A6: call    sub_772630
0x8185AB: add     esp, 4
0x8185AE: push    eax
0x8185AF: lea     ecx, [esp+30h+a3]
0x8185B3: mov     byte ptr [esp+30h+var_4], 30h ; '0'
0x8185B8: call    sub_75FAE0
0x8185BD: mov     eax, [esp+2Ch+var_10]
0x8185C1: cmp     eax, ebp
0x8185C3: mov     byte ptr [esp+2Ch+var_4], 1
0x8185C8: jz      short loc_8185DB
0x8185CA: add     [eax+5Ch], edi
0x8185CD: mov     ecx, eax
0x8185CF: add     eax, 5Ch ; '\'
0x8185D2: cmp     [eax], ebp
0x8185D4: jnz     short loc_8185DB
0x8185D6: call    sub_772560
0x8185DB: mov     edi, [esp+2Ch+a3]
0x8185DF: push    2
0x8185E1: push    1
0x8185E3: push    ebp
0x8185E4: push    edi
0x8185E5: call    sub_801110
0x8185EA: mov     edx, [esi+14h]
0x8185ED: add     esp, 10h
0x8185F0: push    edi; a3
0x8185F1: push    edx; a2
0x8185F2: mov     ecx, esi; this
0x8185F4: call    sub_760010
0x8185F9: lea     eax, [esp+2Ch+var_10]
0x8185FD: push    eax
0x8185FE: call    sub_772630
0x818603: add     esp, 4
0x818606: push    eax
0x818607: lea     ecx, [esp+30h+a3]
0x81860B: mov     byte ptr [esp+30h+var_4], 31h ; '1'
0x818610: call    sub_75FAE0
0x818615: mov     eax, [esp+2Ch+var_10]
0x818619: cmp     eax, ebp
0x81861B: mov     byte ptr [esp+2Ch+var_4], 1
0x818620: jz      short loc_818634
0x818622: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818626: mov     ecx, eax
0x818628: add     eax, 5Ch ; '\'
0x81862B: cmp     [eax], ebp
0x81862D: jnz     short loc_818634
0x81862F: call    sub_772560
0x818634: mov     ebx, [esp+2Ch+a3]
0x818638: push    2
0x81863A: push    1
0x81863C: push    1
0x81863E: push    ebx
0x81863F: call    sub_801110
0x818644: mov     ecx, [esi+14h]
0x818647: add     esp, 10h
0x81864A: push    ebx; a3
0x81864B: push    ecx; a2
0x81864C: mov     ecx, esi; this
0x81864E: call    sub_760010
0x818653: mov     edx, ds:0B45334h
0x818659: push    edx; a2
0x81865A: mov     ecx, esi; this
0x81865C: call    sub_7AECB0
0x818661: mov     eax, ds:0B450ACh
0x818666: push    eax; a2
0x818667: mov     ecx, esi; this
0x818669: call    sub_7AEC60
0x81866E: cmp     [esi+30h], ebp
0x818671: jnz     short loc_81867B
0x818673: call    sub_772DF0
0x818678: mov     [esi+30h], eax
0x81867B: mov     ecx, [esi+30h]
0x81867E: push    ebp
0x81867F: push    ebp
0x818680: push    1Bh
0x818682: call    sub_772CD0
0x818687: cmp     [esi+30h], ebp
0x81868A: jnz     short loc_818694
0x81868C: call    sub_772DF0
0x818691: mov     [esi+30h], eax
0x818694: mov     ecx, [esi+30h]
0x818697: push    ebp
0x818698: push    ebp
0x818699: push    0Fh
0x81869B: call    sub_772CD0
0x8186A0: cmp     [esi+30h], ebp
0x8186A3: jnz     short loc_8186AD
0x8186A5: call    sub_772DF0
0x8186AA: mov     [esi+30h], eax
0x8186AD: mov     ecx, [esi+30h]
0x8186B0: push    ebp
0x8186B1: push    1
0x8186B3: push    7
0x8186B5: call    sub_772CD0
0x8186BA: cmp     [esi+30h], ebp
0x8186BD: jnz     short loc_8186C7
0x8186BF: call    sub_772DF0
0x8186C4: mov     [esi+30h], eax
0x8186C7: mov     ecx, [esi+30h]
0x8186CA: push    ebp
0x8186CB: push    4
0x8186CD: push    17h
0x8186CF: call    sub_772CD0
0x8186D4: cmp     [esi+30h], ebp
0x8186D7: jnz     short loc_8186E1
0x8186D9: call    sub_772DF0
0x8186DE: mov     [esi+30h], eax
0x8186E1: mov     ecx, [esi+30h]
0x8186E4: push    ebp
0x8186E5: push    1
0x8186E7: push    0Eh
0x8186E9: call    sub_772CD0
0x8186EE: cmp     [esi+30h], ebp
0x8186F1: jnz     short loc_8186FB
0x8186F3: call    sub_772DF0
0x8186F8: mov     [esi+30h], eax
0x8186FB: mov     ecx, [esi+30h]
0x8186FE: push    ebp
0x8186FF: push    ebp
0x818700: push    34h ; '4'
0x818702: call    sub_772CD0
0x818707: cmp     esi, ds:0B45634h
0x81870D: mov     dword ptr ds:0B43BB0h, 40088h
0x818717: mov     dword ptr ds:0B44240h, 0Ch
0x818721: jz      short loc_818742
0x818723: add     dword ptr [esi+60h], 0FFFFFFFFh
0x818727: jnz     short loc_818730
0x818729: mov     ecx, esi
0x81872B: call    sub_7604D0
0x818730: mov     esi, ds:0B45634h
0x818736: cmp     esi, ebp
0x818738: mov     [esp+2Ch+var_14], esi
0x81873C: jz      short loc_818742
0x81873E: add     dword ptr [esi+60h], 1
0x818742: cmp     dword ptr [esi+18h], 2
0x818746: jnb     loc_8187FF
0x81874C: lea     ecx, [esp+2Ch+var_10]
0x818750: push    ecx
0x818751: call    sub_772630
0x818756: add     esp, 4
0x818759: push    eax
0x81875A: lea     ecx, [esp+30h+a3]
0x81875E: mov     byte ptr [esp+30h+var_4], 32h ; '2'
0x818763: call    sub_75FAE0
0x818768: mov     eax, [esp+2Ch+var_10]
0x81876C: cmp     eax, ebp
0x81876E: mov     byte ptr [esp+2Ch+var_4], 1
0x818773: jz      short loc_818787
0x818775: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818779: mov     ecx, eax
0x81877B: add     eax, 5Ch ; '\'
0x81877E: cmp     [eax], ebp
0x818780: jnz     short loc_818787
0x818782: call    sub_772560
0x818787: mov     edi, [esp+2Ch+a3]
0x81878B: push    2
0x81878D: push    1
0x81878F: push    ebp
0x818790: push    edi
0x818791: call    sub_801110
0x818796: mov     edx, [esi+14h]
0x818799: add     esp, 10h
0x81879C: push    edi; a3
0x81879D: push    edx; a2
0x81879E: mov     ecx, esi; this
0x8187A0: call    sub_760010
0x8187A5: lea     eax, [esp+2Ch+var_10]
0x8187A9: push    eax
0x8187AA: call    sub_772630
0x8187AF: add     esp, 4
0x8187B2: push    eax
0x8187B3: lea     ecx, [esp+30h+a3]
0x8187B7: mov     byte ptr [esp+30h+var_4], 33h ; '3'
0x8187BC: call    sub_75FAE0
0x8187C1: mov     eax, [esp+2Ch+var_10]
0x8187C5: cmp     eax, ebp
0x8187C7: mov     byte ptr [esp+2Ch+var_4], 1
0x8187CC: jz      short loc_8187E0
0x8187CE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8187D2: mov     ecx, eax
0x8187D4: add     eax, 5Ch ; '\'
0x8187D7: cmp     [eax], ebp
0x8187D9: jnz     short loc_8187E0
0x8187DB: call    sub_772560
0x8187E0: mov     ebx, [esp+2Ch+a3]
0x8187E4: push    2
0x8187E6: push    1
0x8187E8: push    1
0x8187EA: push    ebx
0x8187EB: call    sub_801110
0x8187F0: mov     ecx, [esi+14h]
0x8187F3: add     esp, 10h
0x8187F6: push    ebx; a3
0x8187F7: push    ecx; a2
0x8187F8: mov     ecx, esi; this
0x8187FA: call    sub_760010
0x8187FF: mov     edx, ds:0B45338h
0x818805: push    edx; a2
0x818806: mov     ecx, esi; this
0x818808: call    sub_7AECB0
0x81880D: mov     eax, ds:0B450BCh
0x818812: push    eax; a2
0x818813: mov     ecx, esi; this
0x818815: call    sub_7AEC60
0x81881A: cmp     [esi+30h], ebp
0x81881D: jnz     short loc_818827
0x81881F: call    sub_772DF0
0x818824: mov     [esi+30h], eax
0x818827: mov     ecx, [esi+30h]
0x81882A: push    ebp
0x81882B: push    ebp
0x81882C: push    1Bh
0x81882E: call    sub_772CD0
0x818833: cmp     [esi+30h], ebp
0x818836: jnz     short loc_818840
0x818838: call    sub_772DF0
0x81883D: mov     [esi+30h], eax
0x818840: mov     ecx, [esi+30h]
0x818843: push    ebp
0x818844: push    ebp
0x818845: push    0Fh
0x818847: call    sub_772CD0
0x81884C: cmp     [esi+30h], ebp
0x81884F: jnz     short loc_818859
0x818851: call    sub_772DF0
0x818856: mov     [esi+30h], eax
0x818859: mov     ecx, [esi+30h]
0x81885C: push    ebp
0x81885D: push    1
0x81885F: push    7
0x818861: call    sub_772CD0
0x818866: cmp     [esi+30h], ebp
0x818869: jnz     short loc_818873
0x81886B: call    sub_772DF0
0x818870: mov     [esi+30h], eax
0x818873: mov     ecx, [esi+30h]
0x818876: push    ebp
0x818877: push    4
0x818879: push    17h
0x81887B: call    sub_772CD0
0x818880: cmp     [esi+30h], ebp
0x818883: jnz     short loc_81888D
0x818885: call    sub_772DF0
0x81888A: mov     [esi+30h], eax
0x81888D: mov     ecx, [esi+30h]
0x818890: push    ebp
0x818891: push    1
0x818893: push    0Eh
0x818895: call    sub_772CD0
0x81889A: cmp     [esi+30h], ebp
0x81889D: jnz     short loc_8188A7
0x81889F: call    sub_772DF0
0x8188A4: mov     [esi+30h], eax
0x8188A7: mov     ecx, [esi+30h]
0x8188AA: push    ebp
0x8188AB: push    ebp
0x8188AC: push    34h ; '4'
0x8188AE: call    sub_772CD0
0x8188B3: cmp     esi, ds:0B45698h
0x8188B9: mov     dword ptr ds:0B43BB4h, 40088h
0x8188C3: mov     dword ptr ds:0B44244h, 0Ch
0x8188CD: jz      short loc_8188EE
0x8188CF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8188D3: jnz     short loc_8188DC
0x8188D5: mov     ecx, esi
0x8188D7: call    sub_7604D0
0x8188DC: mov     esi, ds:0B45698h
0x8188E2: cmp     esi, ebp
0x8188E4: mov     [esp+2Ch+var_14], esi
0x8188E8: jz      short loc_8188EE
0x8188EA: add     dword ptr [esi+60h], 1
0x8188EE: cmp     dword ptr [esi+18h], 2
0x8188F2: jnb     loc_8189AB
0x8188F8: lea     ecx, [esp+2Ch+var_10]
0x8188FC: push    ecx
0x8188FD: call    sub_772630
0x818902: add     esp, 4
0x818905: push    eax
0x818906: lea     ecx, [esp+30h+a3]
0x81890A: mov     byte ptr [esp+30h+var_4], 34h ; '4'
0x81890F: call    sub_75FAE0
0x818914: mov     eax, [esp+2Ch+var_10]
0x818918: cmp     eax, ebp
0x81891A: mov     byte ptr [esp+2Ch+var_4], 1
0x81891F: jz      short loc_818933
0x818921: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818925: mov     ecx, eax
0x818927: add     eax, 5Ch ; '\'
0x81892A: cmp     [eax], ebp
0x81892C: jnz     short loc_818933
0x81892E: call    sub_772560
0x818933: mov     edi, [esp+2Ch+a3]
0x818937: push    2
0x818939: push    1
0x81893B: push    ebp
0x81893C: push    edi
0x81893D: call    sub_801110
0x818942: mov     edx, [esi+14h]
0x818945: add     esp, 10h
0x818948: push    edi; a3
0x818949: push    edx; a2
0x81894A: mov     ecx, esi; this
0x81894C: call    sub_760010
0x818951: lea     eax, [esp+2Ch+var_10]
0x818955: push    eax
0x818956: call    sub_772630
0x81895B: add     esp, 4
0x81895E: push    eax
0x81895F: lea     ecx, [esp+30h+a3]
0x818963: mov     byte ptr [esp+30h+var_4], 35h ; '5'
0x818968: call    sub_75FAE0
0x81896D: mov     eax, [esp+2Ch+var_10]
0x818971: cmp     eax, ebp
0x818973: mov     byte ptr [esp+2Ch+var_4], 1
0x818978: jz      short loc_81898C
0x81897A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81897E: mov     ecx, eax
0x818980: add     eax, 5Ch ; '\'
0x818983: cmp     [eax], ebp
0x818985: jnz     short loc_81898C
0x818987: call    sub_772560
0x81898C: mov     ebx, [esp+2Ch+a3]
0x818990: push    2
0x818992: push    1
0x818994: push    1
0x818996: push    ebx
0x818997: call    sub_801110
0x81899C: mov     ecx, [esi+14h]
0x81899F: add     esp, 10h
0x8189A2: push    ebx; a3
0x8189A3: push    ecx; a2
0x8189A4: mov     ecx, esi; this
0x8189A6: call    sub_760010
0x8189AB: mov     edx, ds:0B4533Ch
0x8189B1: push    edx; a2
0x8189B2: mov     ecx, esi; this
0x8189B4: call    sub_7AECB0
0x8189B9: mov     eax, ds:0B450B0h
0x8189BE: push    eax; a2
0x8189BF: mov     ecx, esi; this
0x8189C1: call    sub_7AEC60
0x8189C6: cmp     [esi+30h], ebp
0x8189C9: jnz     short loc_8189D3
0x8189CB: call    sub_772DF0
0x8189D0: mov     [esi+30h], eax
0x8189D3: mov     ecx, [esi+30h]
0x8189D6: push    ebp
0x8189D7: push    ebp
0x8189D8: push    1Bh
0x8189DA: call    sub_772CD0
0x8189DF: cmp     [esi+30h], ebp
0x8189E2: jnz     short loc_8189EC
0x8189E4: call    sub_772DF0
0x8189E9: mov     [esi+30h], eax
0x8189EC: mov     ecx, [esi+30h]
0x8189EF: push    ebp
0x8189F0: push    ebp
0x8189F1: push    0Fh
0x8189F3: call    sub_772CD0
0x8189F8: cmp     [esi+30h], ebp
0x8189FB: jnz     short loc_818A05
0x8189FD: call    sub_772DF0
0x818A02: mov     [esi+30h], eax
0x818A05: mov     ecx, [esi+30h]
0x818A08: push    ebp
0x818A09: push    1
0x818A0B: push    7
0x818A0D: call    sub_772CD0
0x818A12: cmp     [esi+30h], ebp
0x818A15: jnz     short loc_818A1F
0x818A17: call    sub_772DF0
0x818A1C: mov     [esi+30h], eax
0x818A1F: mov     ecx, [esi+30h]
0x818A22: push    ebp
0x818A23: push    4
0x818A25: push    17h
0x818A27: call    sub_772CD0
0x818A2C: cmp     [esi+30h], ebp
0x818A2F: jnz     short loc_818A39
0x818A31: call    sub_772DF0
0x818A36: mov     [esi+30h], eax
0x818A39: mov     ecx, [esi+30h]
0x818A3C: push    ebp
0x818A3D: push    1
0x818A3F: push    0Eh
0x818A41: call    sub_772CD0
0x818A46: cmp     [esi+30h], ebp
0x818A49: jnz     short loc_818A53
0x818A4B: call    sub_772DF0
0x818A50: mov     [esi+30h], eax
0x818A53: mov     ecx, [esi+30h]
0x818A56: push    ebp
0x818A57: push    ebp
0x818A58: push    34h ; '4'
0x818A5A: call    sub_772CD0
0x818A5F: cmp     esi, ds:0B4569Ch
0x818A65: mov     dword ptr ds:0B43C18h, 58088h
0x818A6F: mov     dword ptr ds:0B442A8h, 0Ch
0x818A79: mov     dword ptr ds:0B43588h, 18000h
0x818A83: jz      short loc_818AA4
0x818A85: add     dword ptr [esi+60h], 0FFFFFFFFh
0x818A89: jnz     short loc_818A92
0x818A8B: mov     ecx, esi
0x818A8D: call    sub_7604D0
0x818A92: mov     esi, ds:0B4569Ch
0x818A98: cmp     esi, ebp
0x818A9A: mov     [esp+2Ch+var_14], esi
0x818A9E: jz      short loc_818AA4
0x818AA0: add     dword ptr [esi+60h], 1
0x818AA4: cmp     dword ptr [esi+18h], 2
0x818AA8: jnb     loc_818B61
0x818AAE: lea     ecx, [esp+2Ch+var_10]
0x818AB2: push    ecx
0x818AB3: call    sub_772630
0x818AB8: add     esp, 4
0x818ABB: push    eax
0x818ABC: lea     ecx, [esp+30h+a3]
0x818AC0: mov     byte ptr [esp+30h+var_4], 36h ; '6'
0x818AC5: call    sub_75FAE0
0x818ACA: mov     eax, [esp+2Ch+var_10]
0x818ACE: cmp     eax, ebp
0x818AD0: mov     byte ptr [esp+2Ch+var_4], 1
0x818AD5: jz      short loc_818AE9
0x818AD7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818ADB: mov     ecx, eax
0x818ADD: add     eax, 5Ch ; '\'
0x818AE0: cmp     [eax], ebp
0x818AE2: jnz     short loc_818AE9
0x818AE4: call    sub_772560
0x818AE9: mov     edi, [esp+2Ch+a3]
0x818AED: push    2
0x818AEF: push    1
0x818AF1: push    ebp
0x818AF2: push    edi
0x818AF3: call    sub_801110
0x818AF8: mov     edx, [esi+14h]
0x818AFB: add     esp, 10h
0x818AFE: push    edi; a3
0x818AFF: push    edx; a2
0x818B00: mov     ecx, esi; this
0x818B02: call    sub_760010
0x818B07: lea     eax, [esp+2Ch+var_10]
0x818B0B: push    eax
0x818B0C: call    sub_772630
0x818B11: add     esp, 4
0x818B14: push    eax
0x818B15: lea     ecx, [esp+30h+a3]
0x818B19: mov     byte ptr [esp+30h+var_4], 37h ; '7'
0x818B1E: call    sub_75FAE0
0x818B23: mov     eax, [esp+2Ch+var_10]
0x818B27: cmp     eax, ebp
0x818B29: mov     byte ptr [esp+2Ch+var_4], 1
0x818B2E: jz      short loc_818B42
0x818B30: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818B34: mov     ecx, eax
0x818B36: add     eax, 5Ch ; '\'
0x818B39: cmp     [eax], ebp
0x818B3B: jnz     short loc_818B42
0x818B3D: call    sub_772560
0x818B42: mov     ebx, [esp+2Ch+a3]
0x818B46: push    2
0x818B48: push    1
0x818B4A: push    1
0x818B4C: push    ebx
0x818B4D: call    sub_801110
0x818B52: mov     ecx, [esi+14h]
0x818B55: add     esp, 10h
0x818B58: push    ebx; a3
0x818B59: push    ecx; a2
0x818B5A: mov     ecx, esi; this
0x818B5C: call    sub_760010
0x818B61: mov     edx, ds:0B45340h
0x818B67: push    edx; a2
0x818B68: mov     ecx, esi; this
0x818B6A: call    sub_7AECB0
0x818B6F: mov     eax, ds:0B450C0h
0x818B74: push    eax; a2
0x818B75: mov     ecx, esi; this
0x818B77: call    sub_7AEC60
0x818B7C: cmp     [esi+30h], ebp
0x818B7F: jnz     short loc_818B89
0x818B81: call    sub_772DF0
0x818B86: mov     [esi+30h], eax
0x818B89: mov     ecx, [esi+30h]
0x818B8C: push    ebp
0x818B8D: push    ebp
0x818B8E: push    1Bh
0x818B90: call    sub_772CD0
0x818B95: cmp     [esi+30h], ebp
0x818B98: jnz     short loc_818BA2
0x818B9A: call    sub_772DF0
0x818B9F: mov     [esi+30h], eax
0x818BA2: mov     ecx, [esi+30h]
0x818BA5: push    ebp
0x818BA6: push    ebp
0x818BA7: push    0Fh
0x818BA9: call    sub_772CD0
0x818BAE: cmp     [esi+30h], ebp
0x818BB1: jnz     short loc_818BBB
0x818BB3: call    sub_772DF0
0x818BB8: mov     [esi+30h], eax
0x818BBB: mov     ecx, [esi+30h]
0x818BBE: push    ebp
0x818BBF: push    1
0x818BC1: push    7
0x818BC3: call    sub_772CD0
0x818BC8: cmp     [esi+30h], ebp
0x818BCB: jnz     short loc_818BD5
0x818BCD: call    sub_772DF0
0x818BD2: mov     [esi+30h], eax
0x818BD5: mov     ecx, [esi+30h]
0x818BD8: push    ebp
0x818BD9: push    4
0x818BDB: push    17h
0x818BDD: call    sub_772CD0
0x818BE2: cmp     [esi+30h], ebp
0x818BE5: jnz     short loc_818BEF
0x818BE7: call    sub_772DF0
0x818BEC: mov     [esi+30h], eax
0x818BEF: mov     ecx, [esi+30h]
0x818BF2: push    ebp
0x818BF3: push    1
0x818BF5: push    0Eh
0x818BF7: call    sub_772CD0
0x818BFC: cmp     [esi+30h], ebp
0x818BFF: jnz     short loc_818C09
0x818C01: call    sub_772DF0
0x818C06: mov     [esi+30h], eax
0x818C09: mov     ecx, [esi+30h]
0x818C0C: push    ebp
0x818C0D: push    ebp
0x818C0E: push    34h ; '4'
0x818C10: call    sub_772CD0
0x818C15: push    offset dword_B45638
0x818C1A: lea     ecx, [esp+30h+var_14]
0x818C1E: mov     dword ptr ds:0B43C1Ch, 58088h
0x818C28: mov     dword ptr ds:0B442ACh, 0Ch
0x818C32: mov     dword ptr ds:0B4358Ch, 18000h
0x818C3C: call    sub_76C890
0x818C41: mov     esi, [esp+2Ch+var_14]
0x818C45: cmp     dword ptr [esi+18h], 3
0x818C49: jnb     loc_818D5C
0x818C4F: lea     ecx, [esp+2Ch+var_10]
0x818C53: push    ecx
0x818C54: call    sub_772630
0x818C59: add     esp, 4
0x818C5C: push    eax
0x818C5D: lea     ecx, [esp+30h+a3]
0x818C61: mov     byte ptr [esp+30h+var_4], 38h ; '8'
0x818C66: call    sub_75FAE0
0x818C6B: mov     eax, [esp+2Ch+var_10]
0x818C6F: cmp     eax, ebp
0x818C71: mov     byte ptr [esp+2Ch+var_4], 1
0x818C76: jz      short loc_818C8A
0x818C78: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818C7C: mov     ecx, eax
0x818C7E: add     eax, 5Ch ; '\'
0x818C81: cmp     [eax], ebp
0x818C83: jnz     short loc_818C8A
0x818C85: call    sub_772560
0x818C8A: mov     edi, [esp+2Ch+a3]
0x818C8E: push    2
0x818C90: push    1
0x818C92: push    ebp
0x818C93: push    edi
0x818C94: call    sub_801110
0x818C99: mov     edx, [esi+14h]
0x818C9C: add     esp, 10h
0x818C9F: push    edi; a3
0x818CA0: push    edx; a2
0x818CA1: mov     ecx, esi; this
0x818CA3: call    sub_760010
0x818CA8: lea     eax, [esp+2Ch+var_10]
0x818CAC: push    eax
0x818CAD: call    sub_772630
0x818CB2: add     esp, 4
0x818CB5: push    eax
0x818CB6: lea     ecx, [esp+30h+a3]
0x818CBA: mov     byte ptr [esp+30h+var_4], 39h ; '9'
0x818CBF: call    sub_75FAE0
0x818CC4: mov     eax, [esp+2Ch+var_10]
0x818CC8: cmp     eax, ebp
0x818CCA: mov     byte ptr [esp+2Ch+var_4], 1
0x818CCF: jz      short loc_818CE3
0x818CD1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818CD5: mov     ecx, eax
0x818CD7: add     eax, 5Ch ; '\'
0x818CDA: cmp     [eax], ebp
0x818CDC: jnz     short loc_818CE3
0x818CDE: call    sub_772560
0x818CE3: mov     edi, [esp+2Ch+a3]
0x818CE7: push    2
0x818CE9: push    1
0x818CEB: push    1
0x818CED: push    edi
0x818CEE: call    sub_801110
0x818CF3: mov     ecx, [esi+14h]
0x818CF6: add     esp, 10h
0x818CF9: push    edi; a3
0x818CFA: push    ecx; a2
0x818CFB: mov     ecx, esi; this
0x818CFD: call    sub_760010
0x818D02: lea     edx, [esp+2Ch+var_10]
0x818D06: push    edx
0x818D07: call    sub_772630
0x818D0C: add     esp, 4
0x818D0F: push    eax
0x818D10: lea     ecx, [esp+30h+a3]
0x818D14: mov     byte ptr [esp+30h+var_4], 3Ah ; ':'
0x818D19: call    sub_75FAE0
0x818D1E: mov     eax, [esp+2Ch+var_10]
0x818D22: cmp     eax, ebp
0x818D24: mov     byte ptr [esp+2Ch+var_4], 1
0x818D29: jz      short loc_818D3D
0x818D2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818D2F: mov     ecx, eax
0x818D31: add     eax, 5Ch ; '\'
0x818D34: cmp     [eax], ebp
0x818D36: jnz     short loc_818D3D
0x818D38: call    sub_772560
0x818D3D: mov     ebx, [esp+2Ch+a3]
0x818D41: push    2
0x818D43: push    1
0x818D45: push    2
0x818D47: push    ebx
0x818D48: call    sub_801110
0x818D4D: mov     eax, [esi+14h]
0x818D50: add     esp, 10h
0x818D53: push    ebx; a3
0x818D54: push    eax; a2
0x818D55: mov     ecx, esi; this
0x818D57: call    sub_760010
0x818D5C: mov     ecx, ds:0B45334h
0x818D62: push    ecx; a2
0x818D63: mov     ecx, esi; this
0x818D65: call    sub_7AECB0
0x818D6A: mov     edx, ds:0B450DCh
0x818D70: push    edx; a2
0x818D71: mov     ecx, esi; this
0x818D73: call    sub_7AEC60
0x818D78: cmp     [esi+30h], ebp
0x818D7B: jnz     short loc_818D85
0x818D7D: call    sub_772DF0
0x818D82: mov     [esi+30h], eax
0x818D85: mov     ecx, [esi+30h]
0x818D88: push    ebp
0x818D89: push    ebp
0x818D8A: push    1Bh
0x818D8C: call    sub_772CD0
0x818D91: cmp     [esi+30h], ebp
0x818D94: jnz     short loc_818D9E
0x818D96: call    sub_772DF0
0x818D9B: mov     [esi+30h], eax
0x818D9E: mov     ecx, [esi+30h]
0x818DA1: push    ebp
0x818DA2: push    ebp
0x818DA3: push    0Fh
0x818DA5: call    sub_772CD0
0x818DAA: cmp     [esi+30h], ebp
0x818DAD: jnz     short loc_818DB7
0x818DAF: call    sub_772DF0
0x818DB4: mov     [esi+30h], eax
0x818DB7: mov     ecx, [esi+30h]
0x818DBA: push    ebp
0x818DBB: push    1
0x818DBD: push    7
0x818DBF: call    sub_772CD0
0x818DC4: cmp     [esi+30h], ebp
0x818DC7: jnz     short loc_818DD1
0x818DC9: call    sub_772DF0
0x818DCE: mov     [esi+30h], eax
0x818DD1: mov     ecx, [esi+30h]
0x818DD4: push    ebp
0x818DD5: push    4
0x818DD7: push    17h
0x818DD9: call    sub_772CD0
0x818DDE: cmp     [esi+30h], ebp
0x818DE1: jnz     short loc_818DEB
0x818DE3: call    sub_772DF0
0x818DE8: mov     [esi+30h], eax
0x818DEB: mov     ecx, [esi+30h]
0x818DEE: push    ebp
0x818DEF: push    1
0x818DF1: push    0Eh
0x818DF3: call    sub_772CD0
0x818DF8: cmp     [esi+30h], ebp
0x818DFB: jnz     short loc_818E05
0x818DFD: call    sub_772DF0
0x818E02: mov     [esi+30h], eax
0x818E05: mov     ecx, [esi+30h]
0x818E08: push    ebp
0x818E09: push    ebp
0x818E0A: push    34h ; '4'
0x818E0C: call    sub_772CD0
0x818E11: push    offset dword_B456A0
0x818E16: lea     ecx, [esp+30h+var_14]
0x818E1A: mov     dword ptr ds:0B43BB8h, 40088h
0x818E24: mov     dword ptr ds:0B44248h, 8Ch ; 'Œ'
0x818E2E: mov     dword ptr ds:0B448D8h, 4
0x818E38: call    sub_76C890
0x818E3D: mov     esi, [esp+2Ch+var_14]
0x818E41: cmp     dword ptr [esi+18h], 3
0x818E45: jnb     loc_818F58
0x818E4B: lea     eax, [esp+2Ch+var_10]
0x818E4F: push    eax
0x818E50: call    sub_772630
0x818E55: add     esp, 4
0x818E58: push    eax
0x818E59: lea     ecx, [esp+30h+a3]
0x818E5D: mov     byte ptr [esp+30h+var_4], 3Bh ; ';'
0x818E62: call    sub_75FAE0
0x818E67: mov     eax, [esp+2Ch+var_10]
0x818E6B: cmp     eax, ebp
0x818E6D: mov     byte ptr [esp+2Ch+var_4], 1
0x818E72: jz      short loc_818E86
0x818E74: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818E78: mov     ecx, eax
0x818E7A: add     eax, 5Ch ; '\'
0x818E7D: cmp     [eax], ebp
0x818E7F: jnz     short loc_818E86
0x818E81: call    sub_772560
0x818E86: mov     edi, [esp+2Ch+a3]
0x818E8A: push    2
0x818E8C: push    1
0x818E8E: push    ebp
0x818E8F: push    edi
0x818E90: call    sub_801110
0x818E95: mov     ecx, [esi+14h]
0x818E98: add     esp, 10h
0x818E9B: push    edi; a3
0x818E9C: push    ecx; a2
0x818E9D: mov     ecx, esi; this
0x818E9F: call    sub_760010
0x818EA4: lea     edx, [esp+2Ch+var_10]
0x818EA8: push    edx
0x818EA9: call    sub_772630
0x818EAE: add     esp, 4
0x818EB1: push    eax
0x818EB2: lea     ecx, [esp+30h+a3]
0x818EB6: mov     byte ptr [esp+30h+var_4], 3Ch ; '<'
0x818EBB: call    sub_75FAE0
0x818EC0: mov     eax, [esp+2Ch+var_10]
0x818EC4: cmp     eax, ebp
0x818EC6: mov     byte ptr [esp+2Ch+var_4], 1
0x818ECB: jz      short loc_818EDF
0x818ECD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818ED1: mov     ecx, eax
0x818ED3: add     eax, 5Ch ; '\'
0x818ED6: cmp     [eax], ebp
0x818ED8: jnz     short loc_818EDF
0x818EDA: call    sub_772560
0x818EDF: mov     edi, [esp+2Ch+a3]
0x818EE3: push    2
0x818EE5: push    1
0x818EE7: push    1
0x818EE9: push    edi
0x818EEA: call    sub_801110
0x818EEF: mov     eax, [esi+14h]
0x818EF2: add     esp, 10h
0x818EF5: push    edi; a3
0x818EF6: push    eax; a2
0x818EF7: mov     ecx, esi; this
0x818EF9: call    sub_760010
0x818EFE: lea     ecx, [esp+2Ch+var_10]
0x818F02: push    ecx
0x818F03: call    sub_772630
0x818F08: add     esp, 4
0x818F0B: push    eax
0x818F0C: lea     ecx, [esp+30h+a3]
0x818F10: mov     byte ptr [esp+30h+var_4], 3Dh ; '='
0x818F15: call    sub_75FAE0
0x818F1A: mov     eax, [esp+2Ch+var_10]
0x818F1E: cmp     eax, ebp
0x818F20: mov     byte ptr [esp+2Ch+var_4], 1
0x818F25: jz      short loc_818F39
0x818F27: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x818F2B: mov     ecx, eax
0x818F2D: add     eax, 5Ch ; '\'
0x818F30: cmp     [eax], ebp
0x818F32: jnz     short loc_818F39
0x818F34: call    sub_772560
0x818F39: mov     ebx, [esp+2Ch+a3]
0x818F3D: push    2
0x818F3F: push    1
0x818F41: push    2
0x818F43: push    ebx
0x818F44: call    sub_801110
0x818F49: mov     edx, [esi+14h]
0x818F4C: add     esp, 10h
0x818F4F: push    ebx; a3
0x818F50: push    edx; a2
0x818F51: mov     ecx, esi; this
0x818F53: call    sub_760010
0x818F58: mov     eax, ds:0B4533Ch
0x818F5D: push    eax; a2
0x818F5E: mov     ecx, esi; this
0x818F60: call    sub_7AECB0
0x818F65: mov     ecx, ds:0B450E0h
0x818F6B: push    ecx; a2
0x818F6C: mov     ecx, esi; this
0x818F6E: call    sub_7AEC60
0x818F73: cmp     [esi+30h], ebp
0x818F76: jnz     short loc_818F80
0x818F78: call    sub_772DF0
0x818F7D: mov     [esi+30h], eax
0x818F80: mov     ecx, [esi+30h]
0x818F83: push    ebp
0x818F84: push    ebp
0x818F85: push    1Bh
0x818F87: call    sub_772CD0
0x818F8C: cmp     [esi+30h], ebp
0x818F8F: jnz     short loc_818F99
0x818F91: call    sub_772DF0
0x818F96: mov     [esi+30h], eax
0x818F99: mov     ecx, [esi+30h]
0x818F9C: push    ebp
0x818F9D: push    ebp
0x818F9E: push    0Fh
0x818FA0: call    sub_772CD0
0x818FA5: cmp     [esi+30h], ebp
0x818FA8: jnz     short loc_818FB2
0x818FAA: call    sub_772DF0
0x818FAF: mov     [esi+30h], eax
0x818FB2: mov     ecx, [esi+30h]
0x818FB5: push    ebp
0x818FB6: push    1
0x818FB8: push    7
0x818FBA: call    sub_772CD0
0x818FBF: cmp     [esi+30h], ebp
0x818FC2: jnz     short loc_818FCC
0x818FC4: call    sub_772DF0
0x818FC9: mov     [esi+30h], eax
0x818FCC: mov     ecx, [esi+30h]
0x818FCF: push    ebp
0x818FD0: push    4
0x818FD2: push    17h
0x818FD4: call    sub_772CD0
0x818FD9: cmp     [esi+30h], ebp
0x818FDC: jnz     short loc_818FE6
0x818FDE: call    sub_772DF0
0x818FE3: mov     [esi+30h], eax
0x818FE6: mov     ecx, [esi+30h]
0x818FE9: push    ebp
0x818FEA: push    1
0x818FEC: push    0Eh
0x818FEE: call    sub_772CD0
0x818FF3: cmp     [esi+30h], ebp
0x818FF6: jnz     short loc_819000
0x818FF8: call    sub_772DF0
0x818FFD: mov     [esi+30h], eax
0x819000: mov     ecx, [esi+30h]
0x819003: push    ebp
0x819004: push    ebp
0x819005: push    34h ; '4'
0x819007: call    sub_772CD0
0x81900C: push    offset dword_B456A4
0x819011: lea     ecx, [esp+30h+var_14]
0x819015: mov     dword ptr ds:0B43C20h, 58088h
0x81901F: mov     dword ptr ds:0B442B0h, 8Ch ; 'Œ'
0x819029: mov     dword ptr ds:0B43590h, 18000h
0x819033: mov     dword ptr ds:0B44940h, 4
0x81903D: call    sub_76C890
0x819042: mov     esi, [esp+2Ch+var_14]
0x819046: cmp     dword ptr [esi+18h], 3
0x81904A: jnb     loc_81915D
0x819050: lea     edx, [esp+2Ch+var_10]
0x819054: push    edx
0x819055: call    sub_772630
0x81905A: add     esp, 4
0x81905D: push    eax
0x81905E: lea     ecx, [esp+30h+a3]
0x819062: mov     byte ptr [esp+30h+var_4], 3Eh ; '>'
0x819067: call    sub_75FAE0
0x81906C: mov     eax, [esp+2Ch+var_10]
0x819070: cmp     eax, ebp
0x819072: mov     byte ptr [esp+2Ch+var_4], 1
0x819077: jz      short loc_81908B
0x819079: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81907D: mov     ecx, eax
0x81907F: add     eax, 5Ch ; '\'
0x819082: cmp     [eax], ebp
0x819084: jnz     short loc_81908B
0x819086: call    sub_772560
0x81908B: mov     edi, [esp+2Ch+a3]
0x81908F: push    2
0x819091: push    1
0x819093: push    ebp
0x819094: push    edi
0x819095: call    sub_801110
0x81909A: mov     eax, [esi+14h]
0x81909D: add     esp, 10h
0x8190A0: push    edi; a3
0x8190A1: push    eax; a2
0x8190A2: mov     ecx, esi; this
0x8190A4: call    sub_760010
0x8190A9: lea     ecx, [esp+2Ch+var_10]
0x8190AD: push    ecx
0x8190AE: call    sub_772630
0x8190B3: add     esp, 4
0x8190B6: push    eax
0x8190B7: lea     ecx, [esp+30h+a3]
0x8190BB: mov     byte ptr [esp+30h+var_4], 3Fh ; '?'
0x8190C0: call    sub_75FAE0
0x8190C5: mov     eax, [esp+2Ch+var_10]
0x8190C9: cmp     eax, ebp
0x8190CB: mov     byte ptr [esp+2Ch+var_4], 1
0x8190D0: jz      short loc_8190E4
0x8190D2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8190D6: mov     ecx, eax
0x8190D8: add     eax, 5Ch ; '\'
0x8190DB: cmp     [eax], ebp
0x8190DD: jnz     short loc_8190E4
0x8190DF: call    sub_772560
0x8190E4: mov     edi, [esp+2Ch+a3]
0x8190E8: push    2
0x8190EA: push    1
0x8190EC: push    1
0x8190EE: push    edi
0x8190EF: call    sub_801110
0x8190F4: mov     edx, [esi+14h]
0x8190F7: add     esp, 10h
0x8190FA: push    edi; a3
0x8190FB: push    edx; a2
0x8190FC: mov     ecx, esi; this
0x8190FE: call    sub_760010
0x819103: lea     eax, [esp+2Ch+var_10]
0x819107: push    eax
0x819108: call    sub_772630
0x81910D: add     esp, 4
0x819110: push    eax
0x819111: lea     ecx, [esp+30h+a3]
0x819115: mov     byte ptr [esp+30h+var_4], 40h ; '@'
0x81911A: call    sub_75FAE0
0x81911F: mov     eax, [esp+2Ch+var_10]
0x819123: cmp     eax, ebp
0x819125: mov     byte ptr [esp+2Ch+var_4], 1
0x81912A: jz      short loc_81913E
0x81912C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819130: mov     ecx, eax
0x819132: add     eax, 5Ch ; '\'
0x819135: cmp     [eax], ebp
0x819137: jnz     short loc_81913E
0x819139: call    sub_772560
0x81913E: mov     ebx, [esp+2Ch+a3]
0x819142: push    2
0x819144: push    1
0x819146: push    2
0x819148: push    ebx
0x819149: call    sub_801110
0x81914E: mov     ecx, [esi+14h]
0x819151: add     esp, 10h
0x819154: push    ebx; a3
0x819155: push    ecx; a2
0x819156: mov     ecx, esi; this
0x819158: call    sub_760010
0x81915D: mov     edx, ds:0B45340h
0x819163: push    edx; a2
0x819164: mov     ecx, esi; this
0x819166: call    sub_7AECB0
0x81916B: mov     eax, ds:0B450F0h
0x819170: push    eax; a2
0x819171: mov     ecx, esi; this
0x819173: call    sub_7AEC60
0x819178: cmp     [esi+30h], ebp
0x81917B: jnz     short loc_819185
0x81917D: call    sub_772DF0
0x819182: mov     [esi+30h], eax
0x819185: mov     ecx, [esi+30h]
0x819188: push    ebp
0x819189: push    ebp
0x81918A: push    1Bh
0x81918C: call    sub_772CD0
0x819191: cmp     [esi+30h], ebp
0x819194: jnz     short loc_81919E
0x819196: call    sub_772DF0
0x81919B: mov     [esi+30h], eax
0x81919E: mov     ecx, [esi+30h]
0x8191A1: push    ebp
0x8191A2: push    ebp
0x8191A3: push    0Fh
0x8191A5: call    sub_772CD0
0x8191AA: cmp     [esi+30h], ebp
0x8191AD: jnz     short loc_8191B7
0x8191AF: call    sub_772DF0
0x8191B4: mov     [esi+30h], eax
0x8191B7: mov     ecx, [esi+30h]
0x8191BA: push    ebp
0x8191BB: push    1
0x8191BD: push    7
0x8191BF: call    sub_772CD0
0x8191C4: cmp     [esi+30h], ebp
0x8191C7: jnz     short loc_8191D1
0x8191C9: call    sub_772DF0
0x8191CE: mov     [esi+30h], eax
0x8191D1: mov     ecx, [esi+30h]
0x8191D4: push    ebp
0x8191D5: mov     edi, 4
0x8191DA: push    edi
0x8191DB: push    17h
0x8191DD: call    sub_772CD0
0x8191E2: cmp     [esi+30h], ebp
0x8191E5: jnz     short loc_8191EF
0x8191E7: call    sub_772DF0
0x8191EC: mov     [esi+30h], eax
0x8191EF: mov     ecx, [esi+30h]
0x8191F2: push    ebp
0x8191F3: push    1
0x8191F5: push    0Eh
0x8191F7: call    sub_772CD0
0x8191FC: cmp     [esi+30h], ebp
0x8191FF: jnz     short loc_819209
0x819201: call    sub_772DF0
0x819206: mov     [esi+30h], eax
0x819209: mov     ecx, [esi+30h]
0x81920C: push    ebp
0x81920D: push    ebp
0x81920E: push    34h ; '4'
0x819210: call    sub_772CD0
0x819215: push    offset dword_B45640
0x81921A: lea     ecx, [esp+30h+var_14]
0x81921E: mov     dword ptr ds:0B43C20h, 58088h
0x819228: mov     dword ptr ds:0B442B0h, 8Ch ; 'Œ'
0x819232: mov     dword ptr ds:0B43590h, 18000h
0x81923C: mov     ds:0B44940h, edi
0x819242: call    sub_76C890
0x819247: mov     esi, [esp+2Ch+var_14]
0x81924B: cmp     [esi+18h], edi
0x81924E: jnb     loc_8193BB
0x819254: lea     ecx, [esp+2Ch+var_10]
0x819258: push    ecx
0x819259: call    sub_772630
0x81925E: add     esp, 4
0x819261: push    eax
0x819262: lea     ecx, [esp+30h+a3]
0x819266: mov     byte ptr [esp+30h+var_4], 41h ; 'A'
0x81926B: call    sub_75FAE0
0x819270: mov     eax, [esp+2Ch+var_10]
0x819274: cmp     eax, ebp
0x819276: mov     byte ptr [esp+2Ch+var_4], 1
0x81927B: jz      short loc_81928F
0x81927D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819281: mov     ecx, eax
0x819283: add     eax, 5Ch ; '\'
0x819286: cmp     [eax], ebp
0x819288: jnz     short loc_81928F
0x81928A: call    sub_772560
0x81928F: mov     edi, [esp+2Ch+a3]
0x819293: push    2
0x819295: push    1
0x819297: push    ebp
0x819298: push    edi
0x819299: call    sub_801110
0x81929E: mov     edx, [esi+14h]
0x8192A1: add     esp, 10h
0x8192A4: push    edi; a3
0x8192A5: push    edx; a2
0x8192A6: mov     ecx, esi; this
0x8192A8: call    sub_760010
0x8192AD: lea     eax, [esp+2Ch+var_10]
0x8192B1: push    eax
0x8192B2: call    sub_772630
0x8192B7: add     esp, 4
0x8192BA: push    eax
0x8192BB: lea     ecx, [esp+30h+a3]
0x8192BF: mov     byte ptr [esp+30h+var_4], 42h ; 'B'
0x8192C4: call    sub_75FAE0
0x8192C9: mov     eax, [esp+2Ch+var_10]
0x8192CD: cmp     eax, ebp
0x8192CF: mov     byte ptr [esp+2Ch+var_4], 1
0x8192D4: jz      short loc_8192E8
0x8192D6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8192DA: mov     ecx, eax
0x8192DC: add     eax, 5Ch ; '\'
0x8192DF: cmp     [eax], ebp
0x8192E1: jnz     short loc_8192E8
0x8192E3: call    sub_772560
0x8192E8: mov     edi, [esp+2Ch+a3]
0x8192EC: push    2
0x8192EE: push    1
0x8192F0: push    1
0x8192F2: push    edi
0x8192F3: call    sub_801110
0x8192F8: mov     ecx, [esi+14h]
0x8192FB: add     esp, 10h
0x8192FE: push    edi; a3
0x8192FF: push    ecx; a2
0x819300: mov     ecx, esi; this
0x819302: call    sub_760010
0x819307: lea     edx, [esp+2Ch+var_10]
0x81930B: push    edx
0x81930C: call    sub_772630
0x819311: add     esp, 4
0x819314: push    eax
0x819315: lea     ecx, [esp+30h+a3]
0x819319: mov     byte ptr [esp+30h+var_4], 43h ; 'C'
0x81931E: call    sub_75FAE0
0x819323: mov     eax, [esp+2Ch+var_10]
0x819327: cmp     eax, ebp
0x819329: mov     byte ptr [esp+2Ch+var_4], 1
0x81932E: jz      short loc_819342
0x819330: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819334: mov     ecx, eax
0x819336: add     eax, 5Ch ; '\'
0x819339: cmp     [eax], ebp
0x81933B: jnz     short loc_819342
0x81933D: call    sub_772560
0x819342: mov     edi, [esp+2Ch+a3]
0x819346: push    2
0x819348: push    1
0x81934A: push    2
0x81934C: push    edi
0x81934D: call    sub_801110
0x819352: mov     eax, [esi+14h]
0x819355: add     esp, 10h
0x819358: push    edi; a3
0x819359: push    eax; a2
0x81935A: mov     ecx, esi; this
0x81935C: call    sub_760010
0x819361: lea     ecx, [esp+2Ch+var_10]
0x819365: push    ecx
0x819366: call    sub_772630
0x81936B: add     esp, 4
0x81936E: push    eax
0x81936F: lea     ecx, [esp+30h+a3]
0x819373: mov     byte ptr [esp+30h+var_4], 44h ; 'D'
0x819378: call    sub_75FAE0
0x81937D: mov     eax, [esp+2Ch+var_10]
0x819381: cmp     eax, ebp
0x819383: mov     byte ptr [esp+2Ch+var_4], 1
0x819388: jz      short loc_81939C
0x81938A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81938E: mov     ecx, eax
0x819390: add     eax, 5Ch ; '\'
0x819393: cmp     [eax], ebp
0x819395: jnz     short loc_81939C
0x819397: call    sub_772560
0x81939C: mov     ebx, [esp+2Ch+a3]
0x8193A0: push    2
0x8193A2: push    1
0x8193A4: push    3
0x8193A6: push    ebx
0x8193A7: call    sub_801110
0x8193AC: mov     edx, [esi+14h]
0x8193AF: add     esp, 10h
0x8193B2: push    ebx; a3
0x8193B3: push    edx; a2
0x8193B4: mov     ecx, esi; this
0x8193B6: call    sub_760010
0x8193BB: mov     eax, ds:0B45344h
0x8193C0: push    eax; a2
0x8193C1: mov     ecx, esi; this
0x8193C3: call    sub_7AECB0
0x8193C8: mov     ecx, ds:0B450CCh
0x8193CE: push    ecx; a2
0x8193CF: mov     ecx, esi; this
0x8193D1: call    sub_7AEC60
0x8193D6: cmp     [esi+30h], ebp
0x8193D9: jnz     short loc_8193E3
0x8193DB: call    sub_772DF0
0x8193E0: mov     [esi+30h], eax
0x8193E3: mov     ecx, [esi+30h]
0x8193E6: push    ebp
0x8193E7: push    ebp
0x8193E8: push    1Bh
0x8193EA: call    sub_772CD0
0x8193EF: cmp     [esi+30h], ebp
0x8193F2: jnz     short loc_8193FC
0x8193F4: call    sub_772DF0
0x8193F9: mov     [esi+30h], eax
0x8193FC: mov     ecx, [esi+30h]
0x8193FF: push    ebp
0x819400: push    ebp
0x819401: push    0Fh
0x819403: call    sub_772CD0
0x819408: cmp     [esi+30h], ebp
0x81940B: jnz     short loc_819415
0x81940D: call    sub_772DF0
0x819412: mov     [esi+30h], eax
0x819415: mov     ecx, [esi+30h]
0x819418: push    ebp
0x819419: push    1
0x81941B: push    7
0x81941D: call    sub_772CD0
0x819422: cmp     [esi+30h], ebp
0x819425: jnz     short loc_81942F
0x819427: call    sub_772DF0
0x81942C: mov     [esi+30h], eax
0x81942F: mov     ecx, [esi+30h]
0x819432: push    ebp
0x819433: push    4
0x819435: push    17h
0x819437: call    sub_772CD0
0x81943C: cmp     [esi+30h], ebp
0x81943F: jnz     short loc_819449
0x819441: call    sub_772DF0
0x819446: mov     [esi+30h], eax
0x819449: mov     ecx, [esi+30h]
0x81944C: push    ebp
0x81944D: push    1
0x81944F: push    0Eh
0x819451: call    sub_772CD0
0x819456: cmp     [esi+30h], ebp
0x819459: jnz     short loc_819463
0x81945B: call    sub_772DF0
0x819460: mov     [esi+30h], eax
0x819463: mov     ecx, [esi+30h]
0x819466: push    ebp
0x819467: push    ebp
0x819468: push    34h ; '4'
0x81946A: call    sub_772CD0
0x81946F: push    offset dword_B456B0
0x819474: lea     ecx, [esp+30h+var_14]
0x819478: mov     dword ptr ds:0B43BC0h, 40088h
0x819482: mov     dword ptr ds:0B44250h, 0Ch
0x81948C: call    sub_76C890
0x819491: mov     esi, [esp+2Ch+var_14]
0x819495: cmp     dword ptr [esi+18h], 4
0x819499: jnb     loc_819606
0x81949F: lea     edx, [esp+2Ch+var_10]
0x8194A3: push    edx
0x8194A4: call    sub_772630
0x8194A9: add     esp, 4
0x8194AC: push    eax
0x8194AD: lea     ecx, [esp+30h+a3]
0x8194B1: mov     byte ptr [esp+30h+var_4], 45h ; 'E'
0x8194B6: call    sub_75FAE0
0x8194BB: mov     eax, [esp+2Ch+var_10]
0x8194BF: cmp     eax, ebp
0x8194C1: mov     byte ptr [esp+2Ch+var_4], 1
0x8194C6: jz      short loc_8194DA
0x8194C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8194CC: mov     ecx, eax
0x8194CE: add     eax, 5Ch ; '\'
0x8194D1: cmp     [eax], ebp
0x8194D3: jnz     short loc_8194DA
0x8194D5: call    sub_772560
0x8194DA: mov     edi, [esp+2Ch+a3]
0x8194DE: push    2
0x8194E0: push    1
0x8194E2: push    ebp
0x8194E3: push    edi
0x8194E4: call    sub_801110
0x8194E9: mov     eax, [esi+14h]
0x8194EC: add     esp, 10h
0x8194EF: push    edi; a3
0x8194F0: push    eax; a2
0x8194F1: mov     ecx, esi; this
0x8194F3: call    sub_760010
0x8194F8: lea     ecx, [esp+2Ch+var_10]
0x8194FC: push    ecx
0x8194FD: call    sub_772630
0x819502: add     esp, 4
0x819505: push    eax
0x819506: lea     ecx, [esp+30h+a3]
0x81950A: mov     byte ptr [esp+30h+var_4], 46h ; 'F'
0x81950F: call    sub_75FAE0
0x819514: mov     eax, [esp+2Ch+var_10]
0x819518: cmp     eax, ebp
0x81951A: mov     byte ptr [esp+2Ch+var_4], 1
0x81951F: jz      short loc_819533
0x819521: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819525: mov     ecx, eax
0x819527: add     eax, 5Ch ; '\'
0x81952A: cmp     [eax], ebp
0x81952C: jnz     short loc_819533
0x81952E: call    sub_772560
0x819533: mov     edi, [esp+2Ch+a3]
0x819537: push    2
0x819539: push    1
0x81953B: push    1
0x81953D: push    edi
0x81953E: call    sub_801110
0x819543: mov     edx, [esi+14h]
0x819546: add     esp, 10h
0x819549: push    edi; a3
0x81954A: push    edx; a2
0x81954B: mov     ecx, esi; this
0x81954D: call    sub_760010
0x819552: lea     eax, [esp+2Ch+var_10]
0x819556: push    eax
0x819557: call    sub_772630
0x81955C: add     esp, 4
0x81955F: push    eax
0x819560: lea     ecx, [esp+30h+a3]
0x819564: mov     byte ptr [esp+30h+var_4], 47h ; 'G'
0x819569: call    sub_75FAE0
0x81956E: mov     eax, [esp+2Ch+var_10]
0x819572: cmp     eax, ebp
0x819574: mov     byte ptr [esp+2Ch+var_4], 1
0x819579: jz      short loc_81958D
0x81957B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81957F: mov     ecx, eax
0x819581: add     eax, 5Ch ; '\'
0x819584: cmp     [eax], ebp
0x819586: jnz     short loc_81958D
0x819588: call    sub_772560
0x81958D: mov     edi, [esp+2Ch+a3]
0x819591: push    2
0x819593: push    1
0x819595: push    2
0x819597: push    edi
0x819598: call    sub_801110
0x81959D: mov     ecx, [esi+14h]
0x8195A0: add     esp, 10h
0x8195A3: push    edi; a3
0x8195A4: push    ecx; a2
0x8195A5: mov     ecx, esi; this
0x8195A7: call    sub_760010
0x8195AC: lea     edx, [esp+2Ch+var_10]
0x8195B0: push    edx
0x8195B1: call    sub_772630
0x8195B6: add     esp, 4
0x8195B9: push    eax
0x8195BA: lea     ecx, [esp+30h+a3]
0x8195BE: mov     byte ptr [esp+30h+var_4], 48h ; 'H'
0x8195C3: call    sub_75FAE0
0x8195C8: mov     eax, [esp+2Ch+var_10]
0x8195CC: cmp     eax, ebp
0x8195CE: mov     byte ptr [esp+2Ch+var_4], 1
0x8195D3: jz      short loc_8195E7
0x8195D5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8195D9: mov     ecx, eax
0x8195DB: add     eax, 5Ch ; '\'
0x8195DE: cmp     [eax], ebp
0x8195E0: jnz     short loc_8195E7
0x8195E2: call    sub_772560
0x8195E7: mov     ebx, [esp+2Ch+a3]
0x8195EB: push    2
0x8195ED: push    1
0x8195EF: push    3
0x8195F1: push    ebx
0x8195F2: call    sub_801110
0x8195F7: mov     eax, [esi+14h]
0x8195FA: add     esp, 10h
0x8195FD: push    ebx; a3
0x8195FE: push    eax; a2
0x8195FF: mov     ecx, esi; this
0x819601: call    sub_760010
0x819606: mov     ecx, ds:0B45348h
0x81960C: push    ecx; a2
0x81960D: mov     ecx, esi; this
0x81960F: call    sub_7AECB0
0x819614: mov     edx, ds:0B450D0h
0x81961A: push    edx; a2
0x81961B: mov     ecx, esi; this
0x81961D: call    sub_7AEC60
0x819622: cmp     [esi+30h], ebp
0x819625: jnz     short loc_81962F
0x819627: call    sub_772DF0
0x81962C: mov     [esi+30h], eax
0x81962F: mov     ecx, [esi+30h]
0x819632: push    ebp
0x819633: push    ebp
0x819634: push    1Bh
0x819636: call    sub_772CD0
0x81963B: cmp     [esi+30h], ebp
0x81963E: jnz     short loc_819648
0x819640: call    sub_772DF0
0x819645: mov     [esi+30h], eax
0x819648: mov     ecx, [esi+30h]
0x81964B: push    ebp
0x81964C: push    ebp
0x81964D: push    0Fh
0x81964F: call    sub_772CD0
0x819654: cmp     [esi+30h], ebp
0x819657: jnz     short loc_819661
0x819659: call    sub_772DF0
0x81965E: mov     [esi+30h], eax
0x819661: mov     ecx, [esi+30h]
0x819664: push    ebp
0x819665: push    1
0x819667: push    7
0x819669: call    sub_772CD0
0x81966E: cmp     [esi+30h], ebp
0x819671: jnz     short loc_81967B
0x819673: call    sub_772DF0
0x819678: mov     [esi+30h], eax
0x81967B: mov     ecx, [esi+30h]
0x81967E: push    ebp
0x81967F: push    4
0x819681: push    17h
0x819683: call    sub_772CD0
0x819688: cmp     [esi+30h], ebp
0x81968B: jnz     short loc_819695
0x81968D: call    sub_772DF0
0x819692: mov     [esi+30h], eax
0x819695: mov     ecx, [esi+30h]
0x819698: push    ebp
0x819699: push    1
0x81969B: push    0Eh
0x81969D: call    sub_772CD0
0x8196A2: cmp     [esi+30h], ebp
0x8196A5: jnz     short loc_8196AF
0x8196A7: call    sub_772DF0
0x8196AC: mov     [esi+30h], eax
0x8196AF: mov     ecx, [esi+30h]
0x8196B2: push    ebp
0x8196B3: push    ebp
0x8196B4: push    34h ; '4'
0x8196B6: call    sub_772CD0
0x8196BB: push    offset dword_B45644
0x8196C0: lea     ecx, [esp+30h+var_14]
0x8196C4: mov     dword ptr ds:0B43C30h, 58088h
0x8196CE: mov     dword ptr ds:0B442C0h, 0Ch
0x8196D8: mov     dword ptr ds:0B435A0h, 18000h
0x8196E2: call    sub_76C890
0x8196E7: mov     esi, [esp+2Ch+var_14]
0x8196EB: cmp     dword ptr [esi+18h], 2
0x8196EF: jnb     loc_8197A8
0x8196F5: lea     eax, [esp+2Ch+var_10]
0x8196F9: push    eax
0x8196FA: call    sub_772630
0x8196FF: add     esp, 4
0x819702: push    eax
0x819703: lea     ecx, [esp+30h+a3]
0x819707: mov     byte ptr [esp+30h+var_4], 49h ; 'I'
0x81970C: call    sub_75FAE0
0x819711: mov     eax, [esp+2Ch+var_10]
0x819715: cmp     eax, ebp
0x819717: mov     byte ptr [esp+2Ch+var_4], 1
0x81971C: jz      short loc_819730
0x81971E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819722: mov     ecx, eax
0x819724: add     eax, 5Ch ; '\'
0x819727: cmp     [eax], ebp
0x819729: jnz     short loc_819730
0x81972B: call    sub_772560
0x819730: mov     edi, [esp+2Ch+a3]
0x819734: push    2
0x819736: push    1
0x819738: push    ebp
0x819739: push    edi
0x81973A: call    sub_801110
0x81973F: mov     ecx, [esi+14h]
0x819742: add     esp, 10h
0x819745: push    edi; a3
0x819746: push    ecx; a2
0x819747: mov     ecx, esi; this
0x819749: call    sub_760010
0x81974E: lea     edx, [esp+2Ch+var_10]
0x819752: push    edx
0x819753: call    sub_772630
0x819758: add     esp, 4
0x81975B: push    eax
0x81975C: lea     ecx, [esp+30h+a3]
0x819760: mov     byte ptr [esp+30h+var_4], 4Ah ; 'J'
0x819765: call    sub_75FAE0
0x81976A: mov     eax, [esp+2Ch+var_10]
0x81976E: cmp     eax, ebp
0x819770: mov     byte ptr [esp+2Ch+var_4], 1
0x819775: jz      short loc_819789
0x819777: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81977B: mov     ecx, eax
0x81977D: add     eax, 5Ch ; '\'
0x819780: cmp     [eax], ebp
0x819782: jnz     short loc_819789
0x819784: call    sub_772560
0x819789: mov     ebx, [esp+2Ch+a3]
0x81978D: push    2
0x81978F: push    1
0x819791: push    1
0x819793: push    ebx
0x819794: call    sub_801110
0x819799: mov     eax, [esi+14h]
0x81979C: add     esp, 10h
0x81979F: push    ebx; a3
0x8197A0: push    eax; a2
0x8197A1: mov     ecx, esi; this
0x8197A3: call    sub_760010
0x8197A8: mov     ecx, ds:0B45334h
0x8197AE: push    ecx; a2
0x8197AF: mov     ecx, esi; this
0x8197B1: call    sub_7AECB0
0x8197B6: mov     edx, ds:0B450B4h
0x8197BC: push    edx; a2
0x8197BD: mov     ecx, esi; this
0x8197BF: call    sub_7AEC60
0x8197C4: cmp     [esi+30h], ebp
0x8197C7: jnz     short loc_8197D1
0x8197C9: call    sub_772DF0
0x8197CE: mov     [esi+30h], eax
0x8197D1: mov     ecx, [esi+30h]
0x8197D4: push    ebp
0x8197D5: push    1
0x8197D7: push    1Bh
0x8197D9: call    sub_772CD0
0x8197DE: cmp     [esi+30h], ebp
0x8197E1: jnz     short loc_8197EB
0x8197E3: call    sub_772DF0
0x8197E8: mov     [esi+30h], eax
0x8197EB: mov     ecx, [esi+30h]
0x8197EE: push    ebp
0x8197EF: push    5
0x8197F1: push    13h
0x8197F3: call    sub_772CD0
0x8197F8: cmp     [esi+30h], ebp
0x8197FB: jnz     short loc_819805
0x8197FD: call    sub_772DF0
0x819802: mov     [esi+30h], eax
0x819805: mov     ecx, [esi+30h]
0x819808: push    ebp
0x819809: push    6
0x81980B: push    14h
0x81980D: call    sub_772CD0
0x819812: cmp     [esi+30h], ebp
0x819815: jnz     short loc_81981F
0x819817: call    sub_772DF0
0x81981C: mov     [esi+30h], eax
0x81981F: mov     ecx, [esi+30h]
0x819822: push    ebp
0x819823: push    1
0x819825: push    0Fh
0x819827: call    sub_772CD0
0x81982C: cmp     [esi+30h], ebp
0x81982F: jnz     short loc_819839
0x819831: call    sub_772DF0
0x819836: mov     [esi+30h], eax
0x819839: mov     ecx, [esi+30h]
0x81983C: push    ebp
0x81983D: push    1
0x81983F: push    7
0x819841: call    sub_772CD0
0x819846: cmp     [esi+30h], ebp
0x819849: jnz     short loc_819853
0x81984B: call    sub_772DF0
0x819850: mov     [esi+30h], eax
0x819853: mov     ecx, [esi+30h]
0x819856: push    ebp
0x819857: push    4
0x819859: push    17h
0x81985B: call    sub_772CD0
0x819860: cmp     [esi+30h], ebp
0x819863: jnz     short loc_81986D
0x819865: call    sub_772DF0
0x81986A: mov     [esi+30h], eax
0x81986D: mov     ecx, [esi+30h]
0x819870: push    ebp
0x819871: push    1
0x819873: push    0Eh
0x819875: call    sub_772CD0
0x81987A: cmp     [esi+30h], ebp
0x81987D: jnz     short loc_819887
0x81987F: call    sub_772DF0
0x819884: mov     [esi+30h], eax
0x819887: mov     ecx, [esi+30h]
0x81988A: push    ebp
0x81988B: push    ebp
0x81988C: push    34h ; '4'
0x81988E: call    sub_772CD0
0x819893: push    offset dword_B45648
0x819898: lea     ecx, [esp+30h+var_14]
0x81989C: mov     dword ptr ds:0B43BC4h, 40088h
0x8198A6: mov     dword ptr ds:0B44254h, 0Ch
0x8198B0: call    sub_76C890
0x8198B5: mov     esi, [esp+2Ch+var_14]
0x8198B9: cmp     dword ptr [esi+18h], 2
0x8198BD: jnb     loc_819976
0x8198C3: lea     eax, [esp+2Ch+var_10]
0x8198C7: push    eax
0x8198C8: call    sub_772630
0x8198CD: add     esp, 4
0x8198D0: push    eax
0x8198D1: lea     ecx, [esp+30h+a3]
0x8198D5: mov     byte ptr [esp+30h+var_4], 4Bh ; 'K'
0x8198DA: call    sub_75FAE0
0x8198DF: mov     eax, [esp+2Ch+var_10]
0x8198E3: cmp     eax, ebp
0x8198E5: mov     byte ptr [esp+2Ch+var_4], 1
0x8198EA: jz      short loc_8198FE
0x8198EC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8198F0: mov     ecx, eax
0x8198F2: add     eax, 5Ch ; '\'
0x8198F5: cmp     [eax], ebp
0x8198F7: jnz     short loc_8198FE
0x8198F9: call    sub_772560
0x8198FE: mov     edi, [esp+2Ch+a3]
0x819902: push    2
0x819904: push    1
0x819906: push    ebp
0x819907: push    edi
0x819908: call    sub_801110
0x81990D: mov     ecx, [esi+14h]
0x819910: add     esp, 10h
0x819913: push    edi; a3
0x819914: push    ecx; a2
0x819915: mov     ecx, esi; this
0x819917: call    sub_760010
0x81991C: lea     edx, [esp+2Ch+var_10]
0x819920: push    edx
0x819921: call    sub_772630
0x819926: add     esp, 4
0x819929: push    eax
0x81992A: lea     ecx, [esp+30h+a3]
0x81992E: mov     byte ptr [esp+30h+var_4], 4Ch ; 'L'
0x819933: call    sub_75FAE0
0x819938: mov     eax, [esp+2Ch+var_10]
0x81993C: cmp     eax, ebp
0x81993E: mov     byte ptr [esp+2Ch+var_4], 1
0x819943: jz      short loc_819957
0x819945: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819949: mov     ecx, eax
0x81994B: add     eax, 5Ch ; '\'
0x81994E: cmp     [eax], ebp
0x819950: jnz     short loc_819957
0x819952: call    sub_772560
0x819957: mov     ebx, [esp+2Ch+a3]
0x81995B: push    2
0x81995D: push    1
0x81995F: push    1
0x819961: push    ebx
0x819962: call    sub_801110
0x819967: mov     eax, [esi+14h]
0x81996A: add     esp, 10h
0x81996D: push    ebx; a3
0x81996E: push    eax; a2
0x81996F: mov     ecx, esi; this
0x819971: call    sub_760010
0x819976: mov     ecx, ds:0B45338h
0x81997C: push    ecx; a2
0x81997D: mov     ecx, esi; this
0x81997F: call    sub_7AECB0
0x819984: mov     edx, ds:0B450C4h
0x81998A: push    edx; a2
0x81998B: mov     ecx, esi; this
0x81998D: call    sub_7AEC60
0x819992: cmp     [esi+30h], ebp
0x819995: jnz     short loc_81999F
0x819997: call    sub_772DF0
0x81999C: mov     [esi+30h], eax
0x81999F: mov     ecx, [esi+30h]
0x8199A2: push    ebp
0x8199A3: push    1
0x8199A5: push    1Bh
0x8199A7: call    sub_772CD0
0x8199AC: cmp     [esi+30h], ebp
0x8199AF: jnz     short loc_8199B9
0x8199B1: call    sub_772DF0
0x8199B6: mov     [esi+30h], eax
0x8199B9: mov     ecx, [esi+30h]
0x8199BC: push    ebp
0x8199BD: push    5
0x8199BF: push    13h
0x8199C1: call    sub_772CD0
0x8199C6: cmp     [esi+30h], ebp
0x8199C9: jnz     short loc_8199D3
0x8199CB: call    sub_772DF0
0x8199D0: mov     [esi+30h], eax
0x8199D3: mov     ecx, [esi+30h]
0x8199D6: push    ebp
0x8199D7: push    6
0x8199D9: push    14h
0x8199DB: call    sub_772CD0
0x8199E0: cmp     [esi+30h], ebp
0x8199E3: jnz     short loc_8199ED
0x8199E5: call    sub_772DF0
0x8199EA: mov     [esi+30h], eax
0x8199ED: mov     ecx, [esi+30h]
0x8199F0: push    ebp
0x8199F1: push    1
0x8199F3: push    0Fh
0x8199F5: call    sub_772CD0
0x8199FA: cmp     [esi+30h], ebp
0x8199FD: jnz     short loc_819A07
0x8199FF: call    sub_772DF0
0x819A04: mov     [esi+30h], eax
0x819A07: mov     ecx, [esi+30h]
0x819A0A: push    ebp
0x819A0B: push    1
0x819A0D: push    7
0x819A0F: call    sub_772CD0
0x819A14: cmp     [esi+30h], ebp
0x819A17: jnz     short loc_819A21
0x819A19: call    sub_772DF0
0x819A1E: mov     [esi+30h], eax
0x819A21: mov     ecx, [esi+30h]
0x819A24: push    ebp
0x819A25: push    4
0x819A27: push    17h
0x819A29: call    sub_772CD0
0x819A2E: cmp     [esi+30h], ebp
0x819A31: jnz     short loc_819A3B
0x819A33: call    sub_772DF0
0x819A38: mov     [esi+30h], eax
0x819A3B: mov     ecx, [esi+30h]
0x819A3E: push    ebp
0x819A3F: push    1
0x819A41: push    0Eh
0x819A43: call    sub_772CD0
0x819A48: cmp     [esi+30h], ebp
0x819A4B: jnz     short loc_819A55
0x819A4D: call    sub_772DF0
0x819A52: mov     [esi+30h], eax
0x819A55: mov     ecx, [esi+30h]
0x819A58: push    ebp
0x819A59: push    ebp
0x819A5A: push    34h ; '4'
0x819A5C: call    sub_772CD0
0x819A61: push    offset dword_B456A8
0x819A66: lea     ecx, [esp+30h+var_14]
0x819A6A: mov     dword ptr ds:0B43BC8h, 40088h
0x819A74: mov     dword ptr ds:0B44258h, 0Ch
0x819A7E: call    sub_76C890
0x819A83: mov     esi, [esp+2Ch+var_14]
0x819A87: cmp     dword ptr [esi+18h], 2
0x819A8B: jnb     loc_819B44
0x819A91: lea     eax, [esp+2Ch+var_10]
0x819A95: push    eax
0x819A96: call    sub_772630
0x819A9B: add     esp, 4
0x819A9E: push    eax
0x819A9F: lea     ecx, [esp+30h+a3]
0x819AA3: mov     byte ptr [esp+30h+var_4], 4Dh ; 'M'
0x819AA8: call    sub_75FAE0
0x819AAD: mov     eax, [esp+2Ch+var_10]
0x819AB1: cmp     eax, ebp
0x819AB3: mov     byte ptr [esp+2Ch+var_4], 1
0x819AB8: jz      short loc_819ACC
0x819ABA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819ABE: mov     ecx, eax
0x819AC0: add     eax, 5Ch ; '\'
0x819AC3: cmp     [eax], ebp
0x819AC5: jnz     short loc_819ACC
0x819AC7: call    sub_772560
0x819ACC: mov     edi, [esp+2Ch+a3]
0x819AD0: push    2
0x819AD2: push    1
0x819AD4: push    ebp
0x819AD5: push    edi
0x819AD6: call    sub_801110
0x819ADB: mov     ecx, [esi+14h]
0x819ADE: add     esp, 10h
0x819AE1: push    edi; a3
0x819AE2: push    ecx; a2
0x819AE3: mov     ecx, esi; this
0x819AE5: call    sub_760010
0x819AEA: lea     edx, [esp+2Ch+var_10]
0x819AEE: push    edx
0x819AEF: call    sub_772630
0x819AF4: add     esp, 4
0x819AF7: push    eax
0x819AF8: lea     ecx, [esp+30h+a3]
0x819AFC: mov     byte ptr [esp+30h+var_4], 4Eh ; 'N'
0x819B01: call    sub_75FAE0
0x819B06: mov     eax, [esp+2Ch+var_10]
0x819B0A: cmp     eax, ebp
0x819B0C: mov     byte ptr [esp+2Ch+var_4], 1
0x819B11: jz      short loc_819B25
0x819B13: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819B17: mov     ecx, eax
0x819B19: add     eax, 5Ch ; '\'
0x819B1C: cmp     [eax], ebp
0x819B1E: jnz     short loc_819B25
0x819B20: call    sub_772560
0x819B25: mov     ebx, [esp+2Ch+a3]
0x819B29: push    2
0x819B2B: push    1
0x819B2D: push    1
0x819B2F: push    ebx
0x819B30: call    sub_801110
0x819B35: mov     eax, [esi+14h]
0x819B38: add     esp, 10h
0x819B3B: push    ebx; a3
0x819B3C: push    eax; a2
0x819B3D: mov     ecx, esi; this
0x819B3F: call    sub_760010
0x819B44: mov     ecx, ds:0B4533Ch
0x819B4A: push    ecx; a2
0x819B4B: mov     ecx, esi; this
0x819B4D: call    sub_7AECB0
0x819B52: mov     edx, ds:0B450B8h
0x819B58: push    edx; a2
0x819B59: mov     ecx, esi; this
0x819B5B: call    sub_7AEC60
0x819B60: cmp     [esi+30h], ebp
0x819B63: jnz     short loc_819B6D
0x819B65: call    sub_772DF0
0x819B6A: mov     [esi+30h], eax
0x819B6D: mov     ecx, [esi+30h]
0x819B70: push    ebp
0x819B71: push    ebp
0x819B72: push    1Bh
0x819B74: call    sub_772CD0
0x819B79: cmp     [esi+30h], ebp
0x819B7C: jnz     short loc_819B86
0x819B7E: call    sub_772DF0
0x819B83: mov     [esi+30h], eax
0x819B86: mov     ecx, [esi+30h]
0x819B89: push    ebp
0x819B8A: push    5
0x819B8C: push    13h
0x819B8E: call    sub_772CD0
0x819B93: cmp     [esi+30h], ebp
0x819B96: jnz     short loc_819BA0
0x819B98: call    sub_772DF0
0x819B9D: mov     [esi+30h], eax
0x819BA0: mov     ecx, [esi+30h]
0x819BA3: push    ebp
0x819BA4: push    6
0x819BA6: push    14h
0x819BA8: call    sub_772CD0
0x819BAD: cmp     [esi+30h], ebp
0x819BB0: jnz     short loc_819BBA
0x819BB2: call    sub_772DF0
0x819BB7: mov     [esi+30h], eax
0x819BBA: mov     ecx, [esi+30h]
0x819BBD: push    ebp
0x819BBE: push    1
0x819BC0: push    0Fh
0x819BC2: call    sub_772CD0
0x819BC7: cmp     [esi+30h], ebp
0x819BCA: jnz     short loc_819BD4
0x819BCC: call    sub_772DF0
0x819BD1: mov     [esi+30h], eax
0x819BD4: mov     ecx, [esi+30h]
0x819BD7: push    ebp
0x819BD8: push    1
0x819BDA: push    7
0x819BDC: call    sub_772CD0
0x819BE1: cmp     [esi+30h], ebp
0x819BE4: jnz     short loc_819BEE
0x819BE6: call    sub_772DF0
0x819BEB: mov     [esi+30h], eax
0x819BEE: mov     ecx, [esi+30h]
0x819BF1: push    ebp
0x819BF2: push    4
0x819BF4: push    17h
0x819BF6: call    sub_772CD0
0x819BFB: cmp     [esi+30h], ebp
0x819BFE: jnz     short loc_819C08
0x819C00: call    sub_772DF0
0x819C05: mov     [esi+30h], eax
0x819C08: mov     ecx, [esi+30h]
0x819C0B: push    ebp
0x819C0C: push    1
0x819C0E: push    0Eh
0x819C10: call    sub_772CD0
0x819C15: cmp     [esi+30h], ebp
0x819C18: jnz     short loc_819C22
0x819C1A: call    sub_772DF0
0x819C1F: mov     [esi+30h], eax
0x819C22: mov     ecx, [esi+30h]
0x819C25: push    ebp
0x819C26: push    ebp
0x819C27: push    34h ; '4'
0x819C29: call    sub_772CD0
0x819C2E: push    offset dword_B456AC
0x819C33: lea     ecx, [esp+30h+var_14]
0x819C37: mov     dword ptr ds:0B43C28h, 58088h
0x819C41: mov     dword ptr ds:0B442B8h, 0Ch
0x819C4B: mov     dword ptr ds:0B43598h, 18000h
0x819C55: call    sub_76C890
0x819C5A: mov     esi, [esp+2Ch+var_14]
0x819C5E: cmp     dword ptr [esi+18h], 2
0x819C62: jnb     loc_819D1B
0x819C68: lea     eax, [esp+2Ch+var_10]
0x819C6C: push    eax
0x819C6D: call    sub_772630
0x819C72: add     esp, 4
0x819C75: push    eax
0x819C76: lea     ecx, [esp+30h+a3]
0x819C7A: mov     byte ptr [esp+30h+var_4], 4Fh ; 'O'
0x819C7F: call    sub_75FAE0
0x819C84: mov     eax, [esp+2Ch+var_10]
0x819C88: cmp     eax, ebp
0x819C8A: mov     byte ptr [esp+2Ch+var_4], 1
0x819C8F: jz      short loc_819CA3
0x819C91: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819C95: mov     ecx, eax
0x819C97: add     eax, 5Ch ; '\'
0x819C9A: cmp     [eax], ebp
0x819C9C: jnz     short loc_819CA3
0x819C9E: call    sub_772560
0x819CA3: mov     edi, [esp+2Ch+a3]
0x819CA7: push    2
0x819CA9: push    1
0x819CAB: push    ebp
0x819CAC: push    edi
0x819CAD: call    sub_801110
0x819CB2: mov     ecx, [esi+14h]
0x819CB5: add     esp, 10h
0x819CB8: push    edi; a3
0x819CB9: push    ecx; a2
0x819CBA: mov     ecx, esi; this
0x819CBC: call    sub_760010
0x819CC1: lea     edx, [esp+2Ch+var_10]
0x819CC5: push    edx
0x819CC6: call    sub_772630
0x819CCB: add     esp, 4
0x819CCE: push    eax
0x819CCF: lea     ecx, [esp+30h+a3]
0x819CD3: mov     byte ptr [esp+30h+var_4], 50h ; 'P'
0x819CD8: call    sub_75FAE0
0x819CDD: mov     eax, [esp+2Ch+var_10]
0x819CE1: cmp     eax, ebp
0x819CE3: mov     byte ptr [esp+2Ch+var_4], 1
0x819CE8: jz      short loc_819CFC
0x819CEA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819CEE: mov     ecx, eax
0x819CF0: add     eax, 5Ch ; '\'
0x819CF3: cmp     [eax], ebp
0x819CF5: jnz     short loc_819CFC
0x819CF7: call    sub_772560
0x819CFC: mov     ebx, [esp+2Ch+a3]
0x819D00: push    2
0x819D02: push    1
0x819D04: push    1
0x819D06: push    ebx
0x819D07: call    sub_801110
0x819D0C: mov     eax, [esi+14h]
0x819D0F: add     esp, 10h
0x819D12: push    ebx; a3
0x819D13: push    eax; a2
0x819D14: mov     ecx, esi; this
0x819D16: call    sub_760010
0x819D1B: mov     ecx, ds:0B45340h
0x819D21: push    ecx; a2
0x819D22: mov     ecx, esi; this
0x819D24: call    sub_7AECB0
0x819D29: mov     edx, ds:0B450C8h
0x819D2F: push    edx; a2
0x819D30: mov     ecx, esi; this
0x819D32: call    sub_7AEC60
0x819D37: cmp     [esi+30h], ebp
0x819D3A: jnz     short loc_819D44
0x819D3C: call    sub_772DF0
0x819D41: mov     [esi+30h], eax
0x819D44: mov     ecx, [esi+30h]
0x819D47: push    ebp
0x819D48: push    ebp
0x819D49: push    1Bh
0x819D4B: call    sub_772CD0
0x819D50: cmp     [esi+30h], ebp
0x819D53: jnz     short loc_819D5D
0x819D55: call    sub_772DF0
0x819D5A: mov     [esi+30h], eax
0x819D5D: mov     ecx, [esi+30h]
0x819D60: push    ebp
0x819D61: push    5
0x819D63: push    13h
0x819D65: call    sub_772CD0
0x819D6A: cmp     [esi+30h], ebp
0x819D6D: jnz     short loc_819D77
0x819D6F: call    sub_772DF0
0x819D74: mov     [esi+30h], eax
0x819D77: mov     ecx, [esi+30h]
0x819D7A: push    ebp
0x819D7B: push    6
0x819D7D: push    14h
0x819D7F: call    sub_772CD0
0x819D84: cmp     [esi+30h], ebp
0x819D87: jnz     short loc_819D91
0x819D89: call    sub_772DF0
0x819D8E: mov     [esi+30h], eax
0x819D91: mov     ecx, [esi+30h]
0x819D94: push    ebp
0x819D95: push    1
0x819D97: push    0Fh
0x819D99: call    sub_772CD0
0x819D9E: cmp     [esi+30h], ebp
0x819DA1: jnz     short loc_819DAB
0x819DA3: call    sub_772DF0
0x819DA8: mov     [esi+30h], eax
0x819DAB: mov     ecx, [esi+30h]
0x819DAE: push    ebp
0x819DAF: push    1
0x819DB1: push    7
0x819DB3: call    sub_772CD0
0x819DB8: cmp     [esi+30h], ebp
0x819DBB: jnz     short loc_819DC5
0x819DBD: call    sub_772DF0
0x819DC2: mov     [esi+30h], eax
0x819DC5: mov     ecx, [esi+30h]
0x819DC8: push    ebp
0x819DC9: push    4
0x819DCB: push    17h
0x819DCD: call    sub_772CD0
0x819DD2: cmp     [esi+30h], ebp
0x819DD5: jnz     short loc_819DDF
0x819DD7: call    sub_772DF0
0x819DDC: mov     [esi+30h], eax
0x819DDF: mov     ecx, [esi+30h]
0x819DE2: push    ebp
0x819DE3: push    1
0x819DE5: push    0Eh
0x819DE7: call    sub_772CD0
0x819DEC: cmp     [esi+30h], ebp
0x819DEF: jnz     short loc_819DF9
0x819DF1: call    sub_772DF0
0x819DF6: mov     [esi+30h], eax
0x819DF9: mov     ecx, [esi+30h]
0x819DFC: push    ebp
0x819DFD: push    ebp
0x819DFE: push    34h ; '4'
0x819E00: call    sub_772CD0
0x819E05: push    offset dword_B4564C
0x819E0A: lea     ecx, [esp+30h+var_14]
0x819E0E: mov     dword ptr ds:0B43C2Ch, 58088h
0x819E18: mov     dword ptr ds:0B442BCh, 0Ch
0x819E22: mov     dword ptr ds:0B4359Ch, 18000h
0x819E2C: call    sub_76C890
0x819E31: mov     esi, [esp+2Ch+var_14]
0x819E35: cmp     dword ptr [esi+18h], 3
0x819E39: jnb     loc_819F4C
0x819E3F: lea     eax, [esp+2Ch+var_10]
0x819E43: push    eax
0x819E44: call    sub_772630
0x819E49: add     esp, 4
0x819E4C: push    eax
0x819E4D: lea     ecx, [esp+30h+a3]
0x819E51: mov     byte ptr [esp+30h+var_4], 51h ; 'Q'
0x819E56: call    sub_75FAE0
0x819E5B: mov     eax, [esp+2Ch+var_10]
0x819E5F: cmp     eax, ebp
0x819E61: mov     byte ptr [esp+2Ch+var_4], 1
0x819E66: jz      short loc_819E7A
0x819E68: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819E6C: mov     ecx, eax
0x819E6E: add     eax, 5Ch ; '\'
0x819E71: cmp     [eax], ebp
0x819E73: jnz     short loc_819E7A
0x819E75: call    sub_772560
0x819E7A: mov     edi, [esp+2Ch+a3]
0x819E7E: push    2
0x819E80: push    1
0x819E82: push    ebp
0x819E83: push    edi
0x819E84: call    sub_801110
0x819E89: mov     ecx, [esi+14h]
0x819E8C: add     esp, 10h
0x819E8F: push    edi; a3
0x819E90: push    ecx; a2
0x819E91: mov     ecx, esi; this
0x819E93: call    sub_760010
0x819E98: lea     edx, [esp+2Ch+var_10]
0x819E9C: push    edx
0x819E9D: call    sub_772630
0x819EA2: add     esp, 4
0x819EA5: push    eax
0x819EA6: lea     ecx, [esp+30h+a3]
0x819EAA: mov     byte ptr [esp+30h+var_4], 52h ; 'R'
0x819EAF: call    sub_75FAE0
0x819EB4: mov     eax, [esp+2Ch+var_10]
0x819EB8: cmp     eax, ebp
0x819EBA: mov     byte ptr [esp+2Ch+var_4], 1
0x819EBF: jz      short loc_819ED3
0x819EC1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819EC5: mov     ecx, eax
0x819EC7: add     eax, 5Ch ; '\'
0x819ECA: cmp     [eax], ebp
0x819ECC: jnz     short loc_819ED3
0x819ECE: call    sub_772560
0x819ED3: mov     edi, [esp+2Ch+a3]
0x819ED7: push    2
0x819ED9: push    1
0x819EDB: push    1
0x819EDD: push    edi
0x819EDE: call    sub_801110
0x819EE3: mov     eax, [esi+14h]
0x819EE6: add     esp, 10h
0x819EE9: push    edi; a3
0x819EEA: push    eax; a2
0x819EEB: mov     ecx, esi; this
0x819EED: call    sub_760010
0x819EF2: lea     ecx, [esp+2Ch+var_10]
0x819EF6: push    ecx
0x819EF7: call    sub_772630
0x819EFC: add     esp, 4
0x819EFF: push    eax
0x819F00: lea     ecx, [esp+30h+a3]
0x819F04: mov     byte ptr [esp+30h+var_4], 53h ; 'S'
0x819F09: call    sub_75FAE0
0x819F0E: mov     eax, [esp+2Ch+var_10]
0x819F12: cmp     eax, ebp
0x819F14: mov     byte ptr [esp+2Ch+var_4], 1
0x819F19: jz      short loc_819F2D
0x819F1B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x819F1F: mov     ecx, eax
0x819F21: add     eax, 5Ch ; '\'
0x819F24: cmp     [eax], ebp
0x819F26: jnz     short loc_819F2D
0x819F28: call    sub_772560
0x819F2D: mov     ebx, [esp+2Ch+a3]
0x819F31: push    2
0x819F33: push    1
0x819F35: push    2
0x819F37: push    ebx
0x819F38: call    sub_801110
0x819F3D: mov     edx, [esi+14h]
0x819F40: add     esp, 10h
0x819F43: push    ebx; a3
0x819F44: push    edx; a2
0x819F45: mov     ecx, esi; this
0x819F47: call    sub_760010
0x819F4C: mov     eax, ds:0B45334h
0x819F51: push    eax; a2
0x819F52: mov     ecx, esi; this
0x819F54: call    sub_7AECB0
0x819F59: mov     ecx, ds:0B450E4h
0x819F5F: push    ecx; a2
0x819F60: mov     ecx, esi; this
0x819F62: call    sub_7AEC60
0x819F67: cmp     [esi+30h], ebp
0x819F6A: jnz     short loc_819F74
0x819F6C: call    sub_772DF0
0x819F71: mov     [esi+30h], eax
0x819F74: mov     ecx, [esi+30h]
0x819F77: push    ebp
0x819F78: push    1
0x819F7A: push    1Bh
0x819F7C: call    sub_772CD0
0x819F81: cmp     [esi+30h], ebp
0x819F84: jnz     short loc_819F8E
0x819F86: call    sub_772DF0
0x819F8B: mov     [esi+30h], eax
0x819F8E: mov     ecx, [esi+30h]
0x819F91: push    ebp
0x819F92: push    5
0x819F94: push    13h
0x819F96: call    sub_772CD0
0x819F9B: cmp     [esi+30h], ebp
0x819F9E: jnz     short loc_819FA8
0x819FA0: call    sub_772DF0
0x819FA5: mov     [esi+30h], eax
0x819FA8: mov     ecx, [esi+30h]
0x819FAB: push    ebp
0x819FAC: push    6
0x819FAE: push    14h
0x819FB0: call    sub_772CD0
0x819FB5: cmp     [esi+30h], ebp
0x819FB8: jnz     short loc_819FC2
0x819FBA: call    sub_772DF0
0x819FBF: mov     [esi+30h], eax
0x819FC2: mov     ecx, [esi+30h]
0x819FC5: push    ebp
0x819FC6: push    1
0x819FC8: push    0Fh
0x819FCA: call    sub_772CD0
0x819FCF: cmp     [esi+30h], ebp
0x819FD2: jnz     short loc_819FDC
0x819FD4: call    sub_772DF0
0x819FD9: mov     [esi+30h], eax
0x819FDC: mov     ecx, [esi+30h]
0x819FDF: push    ebp
0x819FE0: push    1
0x819FE2: push    7
0x819FE4: call    sub_772CD0
0x819FE9: cmp     [esi+30h], ebp
0x819FEC: jnz     short loc_819FF6
0x819FEE: call    sub_772DF0
0x819FF3: mov     [esi+30h], eax
0x819FF6: mov     ecx, [esi+30h]
0x819FF9: push    ebp
0x819FFA: push    4
0x819FFC: push    17h
0x819FFE: call    sub_772CD0
0x81A003: cmp     [esi+30h], ebp
0x81A006: jnz     short loc_81A010
0x81A008: call    sub_772DF0
0x81A00D: mov     [esi+30h], eax
0x81A010: mov     ecx, [esi+30h]
0x81A013: push    ebp
0x81A014: push    1
0x81A016: push    0Eh
0x81A018: call    sub_772CD0
0x81A01D: cmp     [esi+30h], ebp
0x81A020: jnz     short loc_81A02A
0x81A022: call    sub_772DF0
0x81A027: mov     [esi+30h], eax
0x81A02A: mov     ecx, [esi+30h]
0x81A02D: push    ebp
0x81A02E: push    ebp
0x81A02F: push    34h ; '4'
0x81A031: call    sub_772CD0
0x81A036: push    offset dword_B45650
0x81A03B: lea     ecx, [esp+30h+var_14]
0x81A03F: mov     dword ptr ds:0B43BCCh, 40088h
0x81A049: mov     dword ptr ds:0B4425Ch, 8Ch ; 'Œ'
0x81A053: mov     dword ptr ds:0B448ECh, 4
0x81A05D: call    sub_76C890
0x81A062: mov     esi, [esp+2Ch+var_14]
0x81A066: cmp     dword ptr [esi+18h], 3
0x81A06A: jnb     loc_81A17D
0x81A070: lea     edx, [esp+2Ch+var_10]
0x81A074: push    edx
0x81A075: call    sub_772630
0x81A07A: add     esp, 4
0x81A07D: push    eax
0x81A07E: lea     ecx, [esp+30h+a3]
0x81A082: mov     byte ptr [esp+30h+var_4], 54h ; 'T'
0x81A087: call    sub_75FAE0
0x81A08C: mov     eax, [esp+2Ch+var_10]
0x81A090: cmp     eax, ebp
0x81A092: mov     byte ptr [esp+2Ch+var_4], 1
0x81A097: jz      short loc_81A0AB
0x81A099: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A09D: mov     ecx, eax
0x81A09F: add     eax, 5Ch ; '\'
0x81A0A2: cmp     [eax], ebp
0x81A0A4: jnz     short loc_81A0AB
0x81A0A6: call    sub_772560
0x81A0AB: mov     edi, [esp+2Ch+a3]
0x81A0AF: push    2
0x81A0B1: push    1
0x81A0B3: push    ebp
0x81A0B4: push    edi
0x81A0B5: call    sub_801110
0x81A0BA: mov     eax, [esi+14h]
0x81A0BD: add     esp, 10h
0x81A0C0: push    edi; a3
0x81A0C1: push    eax; a2
0x81A0C2: mov     ecx, esi; this
0x81A0C4: call    sub_760010
0x81A0C9: lea     ecx, [esp+2Ch+var_10]
0x81A0CD: push    ecx
0x81A0CE: call    sub_772630
0x81A0D3: add     esp, 4
0x81A0D6: push    eax
0x81A0D7: lea     ecx, [esp+30h+a3]
0x81A0DB: mov     byte ptr [esp+30h+var_4], 55h ; 'U'
0x81A0E0: call    sub_75FAE0
0x81A0E5: mov     eax, [esp+2Ch+var_10]
0x81A0E9: cmp     eax, ebp
0x81A0EB: mov     byte ptr [esp+2Ch+var_4], 1
0x81A0F0: jz      short loc_81A104
0x81A0F2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A0F6: mov     ecx, eax
0x81A0F8: add     eax, 5Ch ; '\'
0x81A0FB: cmp     [eax], ebp
0x81A0FD: jnz     short loc_81A104
0x81A0FF: call    sub_772560
0x81A104: mov     edi, [esp+2Ch+a3]
0x81A108: push    2
0x81A10A: push    1
0x81A10C: push    1
0x81A10E: push    edi
0x81A10F: call    sub_801110
0x81A114: mov     edx, [esi+14h]
0x81A117: add     esp, 10h
0x81A11A: push    edi; a3
0x81A11B: push    edx; a2
0x81A11C: mov     ecx, esi; this
0x81A11E: call    sub_760010
0x81A123: lea     eax, [esp+2Ch+var_10]
0x81A127: push    eax
0x81A128: call    sub_772630
0x81A12D: add     esp, 4
0x81A130: push    eax
0x81A131: lea     ecx, [esp+30h+a3]
0x81A135: mov     byte ptr [esp+30h+var_4], 56h ; 'V'
0x81A13A: call    sub_75FAE0
0x81A13F: mov     eax, [esp+2Ch+var_10]
0x81A143: cmp     eax, ebp
0x81A145: mov     byte ptr [esp+2Ch+var_4], 1
0x81A14A: jz      short loc_81A15E
0x81A14C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A150: mov     ecx, eax
0x81A152: add     eax, 5Ch ; '\'
0x81A155: cmp     [eax], ebp
0x81A157: jnz     short loc_81A15E
0x81A159: call    sub_772560
0x81A15E: mov     ebx, [esp+2Ch+a3]
0x81A162: push    2
0x81A164: push    1
0x81A166: push    2
0x81A168: push    ebx
0x81A169: call    sub_801110
0x81A16E: mov     ecx, [esi+14h]
0x81A171: add     esp, 10h
0x81A174: push    ebx; a3
0x81A175: push    ecx; a2
0x81A176: mov     ecx, esi; this
0x81A178: call    sub_760010
0x81A17D: mov     edx, ds:0B45338h
0x81A183: push    edx; a2
0x81A184: mov     ecx, esi; this
0x81A186: call    sub_7AECB0
0x81A18B: mov     eax, ds:0B450F4h
0x81A190: push    eax; a2
0x81A191: mov     ecx, esi; this
0x81A193: call    sub_7AEC60
0x81A198: cmp     [esi+30h], ebp
0x81A19B: jnz     short loc_81A1A5
0x81A19D: call    sub_772DF0
0x81A1A2: mov     [esi+30h], eax
0x81A1A5: mov     ecx, [esi+30h]
0x81A1A8: push    ebp
0x81A1A9: push    1
0x81A1AB: push    1Bh
0x81A1AD: call    sub_772CD0
0x81A1B2: cmp     [esi+30h], ebp
0x81A1B5: jnz     short loc_81A1BF
0x81A1B7: call    sub_772DF0
0x81A1BC: mov     [esi+30h], eax
0x81A1BF: mov     ecx, [esi+30h]
0x81A1C2: push    ebp
0x81A1C3: push    5
0x81A1C5: push    13h
0x81A1C7: call    sub_772CD0
0x81A1CC: cmp     [esi+30h], ebp
0x81A1CF: jnz     short loc_81A1D9
0x81A1D1: call    sub_772DF0
0x81A1D6: mov     [esi+30h], eax
0x81A1D9: mov     ecx, [esi+30h]
0x81A1DC: push    ebp
0x81A1DD: push    6
0x81A1DF: push    14h
0x81A1E1: call    sub_772CD0
0x81A1E6: cmp     [esi+30h], ebp
0x81A1E9: jnz     short loc_81A1F3
0x81A1EB: call    sub_772DF0
0x81A1F0: mov     [esi+30h], eax
0x81A1F3: mov     ecx, [esi+30h]
0x81A1F6: push    ebp
0x81A1F7: push    1
0x81A1F9: push    0Fh
0x81A1FB: call    sub_772CD0
0x81A200: cmp     [esi+30h], ebp
0x81A203: jnz     short loc_81A20D
0x81A205: call    sub_772DF0
0x81A20A: mov     [esi+30h], eax
0x81A20D: mov     ecx, [esi+30h]
0x81A210: push    ebp
0x81A211: push    1
0x81A213: push    7
0x81A215: call    sub_772CD0
0x81A21A: cmp     [esi+30h], ebp
0x81A21D: jnz     short loc_81A227
0x81A21F: call    sub_772DF0
0x81A224: mov     [esi+30h], eax
0x81A227: mov     ecx, [esi+30h]
0x81A22A: push    ebp
0x81A22B: push    4
0x81A22D: push    17h
0x81A22F: call    sub_772CD0
0x81A234: cmp     [esi+30h], ebp
0x81A237: jnz     short loc_81A241
0x81A239: call    sub_772DF0
0x81A23E: mov     [esi+30h], eax
0x81A241: mov     ecx, [esi+30h]
0x81A244: push    ebp
0x81A245: push    1
0x81A247: push    0Eh
0x81A249: call    sub_772CD0
0x81A24E: cmp     [esi+30h], ebp
0x81A251: jnz     short loc_81A25B
0x81A253: call    sub_772DF0
0x81A258: mov     [esi+30h], eax
0x81A25B: mov     ecx, [esi+30h]
0x81A25E: push    ebp
0x81A25F: push    ebp
0x81A260: push    34h ; '4'
0x81A262: call    sub_772CD0
0x81A267: push    offset dword_B45654
0x81A26C: lea     ecx, [esp+30h+var_14]
0x81A270: mov     dword ptr ds:0B43BD0h, 40088h
0x81A27A: mov     dword ptr ds:0B44260h, 8Ch ; 'Œ'
0x81A284: mov     dword ptr ds:0B448F0h, 4
0x81A28E: call    sub_76C890
0x81A293: mov     esi, [esp+2Ch+var_14]
0x81A297: cmp     dword ptr [esi+18h], 3
0x81A29B: jnb     loc_81A408
0x81A2A1: lea     ecx, [esp+2Ch+var_10]
0x81A2A5: push    ecx
0x81A2A6: call    sub_772630
0x81A2AB: add     esp, 4
0x81A2AE: push    eax
0x81A2AF: lea     ecx, [esp+30h+a3]
0x81A2B3: mov     byte ptr [esp+30h+var_4], 57h ; 'W'
0x81A2B8: call    sub_75FAE0
0x81A2BD: mov     eax, [esp+2Ch+var_10]
0x81A2C1: cmp     eax, ebp
0x81A2C3: mov     byte ptr [esp+2Ch+var_4], 1
0x81A2C8: jz      short loc_81A2DC
0x81A2CA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A2CE: mov     ecx, eax
0x81A2D0: add     eax, 5Ch ; '\'
0x81A2D3: cmp     [eax], ebp
0x81A2D5: jnz     short loc_81A2DC
0x81A2D7: call    sub_772560
0x81A2DC: mov     edi, [esp+2Ch+a3]
0x81A2E0: push    2
0x81A2E2: push    1
0x81A2E4: push    ebp
0x81A2E5: push    edi
0x81A2E6: call    sub_801110
0x81A2EB: mov     edx, [esi+14h]
0x81A2EE: add     esp, 10h
0x81A2F1: push    edi; a3
0x81A2F2: push    edx; a2
0x81A2F3: mov     ecx, esi; this
0x81A2F5: call    sub_760010
0x81A2FA: lea     eax, [esp+2Ch+var_10]
0x81A2FE: push    eax
0x81A2FF: call    sub_772630
0x81A304: add     esp, 4
0x81A307: push    eax
0x81A308: lea     ecx, [esp+30h+a3]
0x81A30C: mov     byte ptr [esp+30h+var_4], 58h ; 'X'
0x81A311: call    sub_75FAE0
0x81A316: mov     eax, [esp+2Ch+var_10]
0x81A31A: cmp     eax, ebp
0x81A31C: mov     byte ptr [esp+2Ch+var_4], 1
0x81A321: jz      short loc_81A335
0x81A323: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A327: mov     ecx, eax
0x81A329: add     eax, 5Ch ; '\'
0x81A32C: cmp     [eax], ebp
0x81A32E: jnz     short loc_81A335
0x81A330: call    sub_772560
0x81A335: mov     edi, [esp+2Ch+a3]
0x81A339: push    2
0x81A33B: push    1
0x81A33D: push    1
0x81A33F: push    edi
0x81A340: call    sub_801110
0x81A345: mov     ecx, [esi+14h]
0x81A348: add     esp, 10h
0x81A34B: push    edi; a3
0x81A34C: push    ecx; a2
0x81A34D: mov     ecx, esi; this
0x81A34F: call    sub_760010
0x81A354: lea     edx, [esp+2Ch+var_10]
0x81A358: push    edx
0x81A359: call    sub_772630
0x81A35E: add     esp, 4
0x81A361: push    eax
0x81A362: lea     ecx, [esp+30h+a3]
0x81A366: mov     byte ptr [esp+30h+var_4], 59h ; 'Y'
0x81A36B: call    sub_75FAE0
0x81A370: mov     eax, [esp+2Ch+var_10]
0x81A374: cmp     eax, ebp
0x81A376: mov     byte ptr [esp+2Ch+var_4], 1
0x81A37B: jz      short loc_81A38F
0x81A37D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A381: mov     ecx, eax
0x81A383: add     eax, 5Ch ; '\'
0x81A386: cmp     [eax], ebp
0x81A388: jnz     short loc_81A38F
0x81A38A: call    sub_772560
0x81A38F: mov     edi, [esp+2Ch+a3]
0x81A393: push    2
0x81A395: push    1
0x81A397: push    2
0x81A399: push    edi
0x81A39A: call    sub_801110
0x81A39F: mov     eax, [esi+14h]
0x81A3A2: add     esp, 10h
0x81A3A5: push    edi; a3
0x81A3A6: push    eax; a2
0x81A3A7: mov     ecx, esi; this
0x81A3A9: call    sub_760010
0x81A3AE: lea     ecx, [esp+2Ch+var_10]
0x81A3B2: push    ecx
0x81A3B3: call    sub_772630
0x81A3B8: add     esp, 4
0x81A3BB: push    eax
0x81A3BC: lea     ecx, [esp+30h+a3]
0x81A3C0: mov     byte ptr [esp+30h+var_4], 5Ah ; 'Z'
0x81A3C5: call    sub_75FAE0
0x81A3CA: mov     eax, [esp+2Ch+var_10]
0x81A3CE: cmp     eax, ebp
0x81A3D0: mov     byte ptr [esp+2Ch+var_4], 1
0x81A3D5: jz      short loc_81A3E9
0x81A3D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A3DB: mov     ecx, eax
0x81A3DD: add     eax, 5Ch ; '\'
0x81A3E0: cmp     [eax], ebp
0x81A3E2: jnz     short loc_81A3E9
0x81A3E4: call    sub_772560
0x81A3E9: mov     ebx, [esp+2Ch+a3]
0x81A3ED: push    2
0x81A3EF: push    1
0x81A3F1: push    3
0x81A3F3: push    ebx
0x81A3F4: call    sub_801110
0x81A3F9: mov     edx, [esi+14h]
0x81A3FC: add     esp, 10h
0x81A3FF: push    ebx; a3
0x81A400: push    edx; a2
0x81A401: mov     ecx, esi; this
0x81A403: call    sub_760010
0x81A408: mov     eax, ds:0B45344h
0x81A40D: push    eax; a2
0x81A40E: mov     ecx, esi; this
0x81A410: call    sub_7AECB0
0x81A415: mov     ecx, ds:0B450D4h
0x81A41B: push    ecx; a2
0x81A41C: mov     ecx, esi; this
0x81A41E: call    sub_7AEC60
0x81A423: cmp     [esi+30h], ebp
0x81A426: jnz     short loc_81A430
0x81A428: call    sub_772DF0
0x81A42D: mov     [esi+30h], eax
0x81A430: mov     ecx, [esi+30h]
0x81A433: push    ebp
0x81A434: push    1
0x81A436: push    1Bh
0x81A438: call    sub_772CD0
0x81A43D: cmp     [esi+30h], ebp
0x81A440: jnz     short loc_81A44A
0x81A442: call    sub_772DF0
0x81A447: mov     [esi+30h], eax
0x81A44A: mov     ecx, [esi+30h]
0x81A44D: push    ebp
0x81A44E: push    5
0x81A450: push    13h
0x81A452: call    sub_772CD0
0x81A457: cmp     [esi+30h], ebp
0x81A45A: jnz     short loc_81A464
0x81A45C: call    sub_772DF0
0x81A461: mov     [esi+30h], eax
0x81A464: mov     ecx, [esi+30h]
0x81A467: push    ebp
0x81A468: push    6
0x81A46A: push    14h
0x81A46C: call    sub_772CD0
0x81A471: cmp     [esi+30h], ebp
0x81A474: jnz     short loc_81A47E
0x81A476: call    sub_772DF0
0x81A47B: mov     [esi+30h], eax
0x81A47E: mov     ecx, [esi+30h]
0x81A481: push    ebp
0x81A482: push    1
0x81A484: push    0Fh
0x81A486: call    sub_772CD0
0x81A48B: cmp     [esi+30h], ebp
0x81A48E: jnz     short loc_81A498
0x81A490: call    sub_772DF0
0x81A495: mov     [esi+30h], eax
0x81A498: mov     ecx, [esi+30h]
0x81A49B: push    ebp
0x81A49C: push    1
0x81A49E: push    7
0x81A4A0: call    sub_772CD0
0x81A4A5: cmp     [esi+30h], ebp
0x81A4A8: jnz     short loc_81A4B2
0x81A4AA: call    sub_772DF0
0x81A4AF: mov     [esi+30h], eax
0x81A4B2: mov     ecx, [esi+30h]
0x81A4B5: push    ebp
0x81A4B6: push    4
0x81A4B8: push    17h
0x81A4BA: call    sub_772CD0
0x81A4BF: cmp     [esi+30h], ebp
0x81A4C2: jnz     short loc_81A4CC
0x81A4C4: call    sub_772DF0
0x81A4C9: mov     [esi+30h], eax
0x81A4CC: mov     ecx, [esi+30h]
0x81A4CF: push    ebp
0x81A4D0: push    1
0x81A4D2: push    0Eh
0x81A4D4: call    sub_772CD0
0x81A4D9: cmp     [esi+30h], ebp
0x81A4DC: jnz     short loc_81A4E6
0x81A4DE: call    sub_772DF0
0x81A4E3: mov     [esi+30h], eax
0x81A4E6: mov     ecx, [esi+30h]
0x81A4E9: push    ebp
0x81A4EA: push    ebp
0x81A4EB: push    34h ; '4'
0x81A4ED: call    sub_772CD0
0x81A4F2: push    offset dword_B456B4
0x81A4F7: lea     ecx, [esp+30h+var_14]
0x81A4FB: mov     dword ptr ds:0B43BD4h, 40088h
0x81A505: mov     dword ptr ds:0B44264h, 0Ch
0x81A50F: mov     dword ptr ds:0B448F4h, 4
0x81A519: call    sub_76C890
0x81A51E: mov     esi, [esp+2Ch+var_14]
0x81A522: cmp     dword ptr [esi+18h], 3
0x81A526: jnb     loc_81A639
0x81A52C: lea     edx, [esp+2Ch+var_10]
0x81A530: push    edx
0x81A531: call    sub_772630
0x81A536: add     esp, 4
0x81A539: push    eax
0x81A53A: lea     ecx, [esp+30h+a3]
0x81A53E: mov     byte ptr [esp+30h+var_4], 5Bh ; '['
0x81A543: call    sub_75FAE0
0x81A548: mov     eax, [esp+2Ch+var_10]
0x81A54C: cmp     eax, ebp
0x81A54E: mov     byte ptr [esp+2Ch+var_4], 1
0x81A553: jz      short loc_81A567
0x81A555: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A559: mov     ecx, eax
0x81A55B: add     eax, 5Ch ; '\'
0x81A55E: cmp     [eax], ebp
0x81A560: jnz     short loc_81A567
0x81A562: call    sub_772560
0x81A567: mov     edi, [esp+2Ch+a3]
0x81A56B: push    2
0x81A56D: push    1
0x81A56F: push    ebp
0x81A570: push    edi
0x81A571: call    sub_801110
0x81A576: mov     eax, [esi+14h]
0x81A579: add     esp, 10h
0x81A57C: push    edi; a3
0x81A57D: push    eax; a2
0x81A57E: mov     ecx, esi; this
0x81A580: call    sub_760010
0x81A585: lea     ecx, [esp+2Ch+var_10]
0x81A589: push    ecx
0x81A58A: call    sub_772630
0x81A58F: add     esp, 4
0x81A592: push    eax
0x81A593: lea     ecx, [esp+30h+a3]
0x81A597: mov     byte ptr [esp+30h+var_4], 5Ch ; '\'
0x81A59C: call    sub_75FAE0
0x81A5A1: mov     eax, [esp+2Ch+var_10]
0x81A5A5: cmp     eax, ebp
0x81A5A7: mov     byte ptr [esp+2Ch+var_4], 1
0x81A5AC: jz      short loc_81A5C0
0x81A5AE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A5B2: mov     ecx, eax
0x81A5B4: add     eax, 5Ch ; '\'
0x81A5B7: cmp     [eax], ebp
0x81A5B9: jnz     short loc_81A5C0
0x81A5BB: call    sub_772560
0x81A5C0: mov     edi, [esp+2Ch+a3]
0x81A5C4: push    2
0x81A5C6: push    1
0x81A5C8: push    1
0x81A5CA: push    edi
0x81A5CB: call    sub_801110
0x81A5D0: mov     edx, [esi+14h]
0x81A5D3: add     esp, 10h
0x81A5D6: push    edi; a3
0x81A5D7: push    edx; a2
0x81A5D8: mov     ecx, esi; this
0x81A5DA: call    sub_760010
0x81A5DF: lea     eax, [esp+2Ch+var_10]
0x81A5E3: push    eax
0x81A5E4: call    sub_772630
0x81A5E9: add     esp, 4
0x81A5EC: push    eax
0x81A5ED: lea     ecx, [esp+30h+a3]
0x81A5F1: mov     byte ptr [esp+30h+var_4], 5Dh ; ']'
0x81A5F6: call    sub_75FAE0
0x81A5FB: mov     eax, [esp+2Ch+var_10]
0x81A5FF: cmp     eax, ebp
0x81A601: mov     byte ptr [esp+2Ch+var_4], 1
0x81A606: jz      short loc_81A61A
0x81A608: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A60C: mov     ecx, eax
0x81A60E: add     eax, 5Ch ; '\'
0x81A611: cmp     [eax], ebp
0x81A613: jnz     short loc_81A61A
0x81A615: call    sub_772560
0x81A61A: mov     ebx, [esp+2Ch+a3]
0x81A61E: push    2
0x81A620: push    1
0x81A622: push    2
0x81A624: push    ebx
0x81A625: call    sub_801110
0x81A62A: mov     ecx, [esi+14h]
0x81A62D: add     esp, 10h
0x81A630: push    ebx; a3
0x81A631: push    ecx; a2
0x81A632: mov     ecx, esi; this
0x81A634: call    sub_760010
0x81A639: mov     edx, ds:0B4533Ch
0x81A63F: push    edx; a2
0x81A640: mov     ecx, esi; this
0x81A642: call    sub_7AECB0
0x81A647: mov     eax, ds:0B450E8h
0x81A64C: push    eax; a2
0x81A64D: mov     ecx, esi; this
0x81A64F: call    sub_7AEC60
0x81A654: cmp     [esi+30h], ebp
0x81A657: jnz     short loc_81A661
0x81A659: call    sub_772DF0
0x81A65E: mov     [esi+30h], eax
0x81A661: mov     ecx, [esi+30h]
0x81A664: push    ebp
0x81A665: push    1
0x81A667: push    1Bh
0x81A669: call    sub_772CD0
0x81A66E: cmp     [esi+30h], ebp
0x81A671: jnz     short loc_81A67B
0x81A673: call    sub_772DF0
0x81A678: mov     [esi+30h], eax
0x81A67B: mov     ecx, [esi+30h]
0x81A67E: push    ebp
0x81A67F: push    5
0x81A681: push    13h
0x81A683: call    sub_772CD0
0x81A688: cmp     [esi+30h], ebp
0x81A68B: jnz     short loc_81A695
0x81A68D: call    sub_772DF0
0x81A692: mov     [esi+30h], eax
0x81A695: mov     ecx, [esi+30h]
0x81A698: push    ebp
0x81A699: push    6
0x81A69B: push    14h
0x81A69D: call    sub_772CD0
0x81A6A2: cmp     [esi+30h], ebp
0x81A6A5: jnz     short loc_81A6AF
0x81A6A7: call    sub_772DF0
0x81A6AC: mov     [esi+30h], eax
0x81A6AF: mov     ecx, [esi+30h]
0x81A6B2: push    ebp
0x81A6B3: push    1
0x81A6B5: push    0Fh
0x81A6B7: call    sub_772CD0
0x81A6BC: cmp     [esi+30h], ebp
0x81A6BF: jnz     short loc_81A6C9
0x81A6C1: call    sub_772DF0
0x81A6C6: mov     [esi+30h], eax
0x81A6C9: mov     ecx, [esi+30h]
0x81A6CC: push    ebp
0x81A6CD: push    1
0x81A6CF: push    7
0x81A6D1: call    sub_772CD0
0x81A6D6: cmp     [esi+30h], ebp
0x81A6D9: jnz     short loc_81A6E3
0x81A6DB: call    sub_772DF0
0x81A6E0: mov     [esi+30h], eax
0x81A6E3: mov     ecx, [esi+30h]
0x81A6E6: push    ebp
0x81A6E7: push    4
0x81A6E9: push    17h
0x81A6EB: call    sub_772CD0
0x81A6F0: cmp     [esi+30h], ebp
0x81A6F3: jnz     short loc_81A6FD
0x81A6F5: call    sub_772DF0
0x81A6FA: mov     [esi+30h], eax
0x81A6FD: mov     ecx, [esi+30h]
0x81A700: push    ebp
0x81A701: push    1
0x81A703: push    0Eh
0x81A705: call    sub_772CD0
0x81A70A: cmp     [esi+30h], ebp
0x81A70D: jnz     short loc_81A717
0x81A70F: call    sub_772DF0
0x81A714: mov     [esi+30h], eax
0x81A717: mov     ecx, [esi+30h]
0x81A71A: push    ebp
0x81A71B: push    ebp
0x81A71C: push    34h ; '4'
0x81A71E: call    sub_772CD0
0x81A723: push    offset dword_B456B8
0x81A728: lea     ecx, [esp+30h+var_14]
0x81A72C: mov     dword ptr ds:0B43C34h, 58088h
0x81A736: mov     dword ptr ds:0B442C4h, 8Ch ; 'Œ'
0x81A740: mov     dword ptr ds:0B435A4h, 18000h
0x81A74A: mov     dword ptr ds:0B44954h, 4
0x81A754: call    sub_76C890
0x81A759: mov     esi, [esp+2Ch+var_14]
0x81A75D: cmp     dword ptr [esi+18h], 3
0x81A761: jnb     loc_81A874
0x81A767: lea     ecx, [esp+2Ch+var_10]
0x81A76B: push    ecx
0x81A76C: call    sub_772630
0x81A771: add     esp, 4
0x81A774: push    eax
0x81A775: lea     ecx, [esp+30h+a3]
0x81A779: mov     byte ptr [esp+30h+var_4], 5Eh ; '^'
0x81A77E: call    sub_75FAE0
0x81A783: mov     eax, [esp+2Ch+var_10]
0x81A787: cmp     eax, ebp
0x81A789: mov     byte ptr [esp+2Ch+var_4], 1
0x81A78E: jz      short loc_81A7A2
0x81A790: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A794: mov     ecx, eax
0x81A796: add     eax, 5Ch ; '\'
0x81A799: cmp     [eax], ebp
0x81A79B: jnz     short loc_81A7A2
0x81A79D: call    sub_772560
0x81A7A2: mov     edi, [esp+2Ch+a3]
0x81A7A6: push    2
0x81A7A8: push    1
0x81A7AA: push    ebp
0x81A7AB: push    edi
0x81A7AC: call    sub_801110
0x81A7B1: mov     edx, [esi+14h]
0x81A7B4: add     esp, 10h
0x81A7B7: push    edi; a3
0x81A7B8: push    edx; a2
0x81A7B9: mov     ecx, esi; this
0x81A7BB: call    sub_760010
0x81A7C0: lea     eax, [esp+2Ch+var_10]
0x81A7C4: push    eax
0x81A7C5: call    sub_772630
0x81A7CA: add     esp, 4
0x81A7CD: push    eax
0x81A7CE: lea     ecx, [esp+30h+a3]
0x81A7D2: mov     byte ptr [esp+30h+var_4], 5Fh ; '_'
0x81A7D7: call    sub_75FAE0
0x81A7DC: mov     eax, [esp+2Ch+var_10]
0x81A7E0: cmp     eax, ebp
0x81A7E2: mov     byte ptr [esp+2Ch+var_4], 1
0x81A7E7: jz      short loc_81A7FB
0x81A7E9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A7ED: mov     ecx, eax
0x81A7EF: add     eax, 5Ch ; '\'
0x81A7F2: cmp     [eax], ebp
0x81A7F4: jnz     short loc_81A7FB
0x81A7F6: call    sub_772560
0x81A7FB: mov     edi, [esp+2Ch+a3]
0x81A7FF: push    2
0x81A801: push    1
0x81A803: push    1
0x81A805: push    edi
0x81A806: call    sub_801110
0x81A80B: mov     ecx, [esi+14h]
0x81A80E: add     esp, 10h
0x81A811: push    edi; a3
0x81A812: push    ecx; a2
0x81A813: mov     ecx, esi; this
0x81A815: call    sub_760010
0x81A81A: lea     edx, [esp+2Ch+var_10]
0x81A81E: push    edx
0x81A81F: call    sub_772630
0x81A824: add     esp, 4
0x81A827: push    eax
0x81A828: lea     ecx, [esp+30h+a3]
0x81A82C: mov     byte ptr [esp+30h+var_4], 60h ; '`'
0x81A831: call    sub_75FAE0
0x81A836: mov     eax, [esp+2Ch+var_10]
0x81A83A: cmp     eax, ebp
0x81A83C: mov     byte ptr [esp+2Ch+var_4], 1
0x81A841: jz      short loc_81A855
0x81A843: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81A847: mov     ecx, eax
0x81A849: add     eax, 5Ch ; '\'
0x81A84C: cmp     [eax], ebp
0x81A84E: jnz     short loc_81A855
0x81A850: call    sub_772560
0x81A855: mov     ebx, [esp+2Ch+a3]
0x81A859: push    2
0x81A85B: push    1
0x81A85D: push    2
0x81A85F: push    ebx
0x81A860: call    sub_801110
0x81A865: mov     eax, [esi+14h]
0x81A868: add     esp, 10h
0x81A86B: push    ebx; a3
0x81A86C: push    eax; a2
0x81A86D: mov     ecx, esi; this
0x81A86F: call    sub_760010
0x81A874: mov     ecx, ds:0B45340h
0x81A87A: push    ecx; a2
0x81A87B: mov     ecx, esi; this
0x81A87D: call    sub_7AECB0
0x81A882: mov     edx, ds:0B450F8h
0x81A888: push    edx; a2
0x81A889: mov     ecx, esi; this
0x81A88B: call    sub_7AEC60
0x81A890: cmp     [esi+30h], ebp
0x81A893: jnz     short loc_81A89D
0x81A895: call    sub_772DF0
0x81A89A: mov     [esi+30h], eax
0x81A89D: mov     ecx, [esi+30h]
0x81A8A0: push    ebp
0x81A8A1: push    1
0x81A8A3: push    1Bh
0x81A8A5: call    sub_772CD0
0x81A8AA: cmp     [esi+30h], ebp
0x81A8AD: jnz     short loc_81A8B7
0x81A8AF: call    sub_772DF0
0x81A8B4: mov     [esi+30h], eax
0x81A8B7: mov     ecx, [esi+30h]
0x81A8BA: push    ebp
0x81A8BB: push    5
0x81A8BD: push    13h
0x81A8BF: call    sub_772CD0
0x81A8C4: cmp     [esi+30h], ebp
0x81A8C7: jnz     short loc_81A8D1
0x81A8C9: call    sub_772DF0
0x81A8CE: mov     [esi+30h], eax
0x81A8D1: mov     ecx, [esi+30h]
0x81A8D4: push    ebp
0x81A8D5: push    6
0x81A8D7: push    14h
0x81A8D9: call    sub_772CD0
0x81A8DE: cmp     [esi+30h], ebp
0x81A8E1: jnz     short loc_81A8EB
0x81A8E3: call    sub_772DF0
0x81A8E8: mov     [esi+30h], eax
0x81A8EB: mov     ecx, [esi+30h]
0x81A8EE: push    ebp
0x81A8EF: push    1
0x81A8F1: push    0Fh
0x81A8F3: call    sub_772CD0
0x81A8F8: cmp     [esi+30h], ebp
0x81A8FB: jnz     short loc_81A905
0x81A8FD: call    sub_772DF0
0x81A902: mov     [esi+30h], eax
0x81A905: mov     ecx, [esi+30h]
0x81A908: push    ebp
0x81A909: push    1
0x81A90B: push    7
0x81A90D: call    sub_772CD0
0x81A912: cmp     [esi+30h], ebp
0x81A915: jnz     short loc_81A91F
0x81A917: call    sub_772DF0
0x81A91C: mov     [esi+30h], eax
0x81A91F: mov     ecx, [esi+30h]
0x81A922: push    ebp
0x81A923: push    4
0x81A925: push    17h
0x81A927: call    sub_772CD0
0x81A92C: cmp     [esi+30h], ebp
0x81A92F: jnz     short loc_81A939
0x81A931: call    sub_772DF0
0x81A936: mov     [esi+30h], eax
0x81A939: mov     ecx, [esi+30h]
0x81A93C: push    ebp
0x81A93D: push    1
0x81A93F: push    0Eh
0x81A941: call    sub_772CD0
0x81A946: cmp     [esi+30h], ebp
0x81A949: jnz     short loc_81A953
0x81A94B: call    sub_772DF0
0x81A950: mov     [esi+30h], eax
0x81A953: mov     ecx, [esi+30h]
0x81A956: push    ebp
0x81A957: push    ebp
0x81A958: push    34h ; '4'
0x81A95A: call    sub_772CD0
0x81A95F: mov     eax, ds:0B45658h
0x81A964: or      edi, 0FFFFFFFFh
0x81A967: cmp     eax, ebp
0x81A969: mov     dword ptr ds:0B43C38h, 58088h
0x81A973: mov     dword ptr ds:0B442C8h, 8Ch ; 'Œ'
0x81A97D: mov     dword ptr ds:0B435A8h, 18000h
0x81A987: mov     dword ptr ds:0B44958h, 4
0x81A991: jz      short loc_81A9A5
0x81A993: add     [eax+60h], edi
0x81A996: mov     ecx, eax
0x81A998: jnz     short loc_81A99F
0x81A99A: call    sub_7604D0
0x81A99F: mov     ds:0B45658h, ebp
0x81A9A5: mov     eax, ds:0B456BCh
0x81A9AA: cmp     eax, ebp
0x81A9AC: jz      short loc_81A9C0
0x81A9AE: add     [eax+60h], edi
0x81A9B1: mov     ecx, eax
0x81A9B3: jnz     short loc_81A9BA
0x81A9B5: call    sub_7604D0
0x81A9BA: mov     ds:0B456BCh, ebp
0x81A9C0: cmp     ebx, ebp
0x81A9C2: mov     byte ptr [esp+2Ch+var_4], 0
0x81A9C7: jz      short loc_81A9D5
0x81A9C9: add     [ebx+5Ch], edi
0x81A9CC: jnz     short loc_81A9D5
0x81A9CE: mov     ecx, ebx
0x81A9D0: call    sub_772560
0x81A9D5: add     [esi+60h], edi
0x81A9D8: mov     [esp+2Ch+var_4], edi
0x81A9DC: jnz     short loc_81A9E5
0x81A9DE: mov     ecx, esi
0x81A9E0: call    sub_7604D0
0x81A9E5: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81A9E9: mov     large fs:0, ecx
0x81A9F0: pop     ecx
0x81A9F1: pop     edi
0x81A9F2: pop     esi
0x81A9F3: pop     ebp
0x81A9F4: pop     ebx
0x81A9F5: add     esp, 18h
0x81A9F8: retn
