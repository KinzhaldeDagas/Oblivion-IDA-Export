0x836810: push    0FFFFFFFFh
0x836812: push    offset SEH_836810
0x836817: mov     eax, large fs:0
0x83681D: push    eax
0x83681E: sub     esp, 0Ch
0x836821: push    ebx
0x836822: push    ebp
0x836823: push    esi
0x836824: push    edi
0x836825: mov     eax, ds:0B30AACh
0x83682A: xor     eax, esp
0x83682C: push    eax
0x83682D: lea     eax, [esp+2Ch+var_C]
0x836831: mov     large fs:0, eax
0x836837: xor     esi, esi
0x836839: mov     [esp+2Ch+var_14], esi
0x83683D: xor     edi, edi
0x83683F: mov     [esp+2Ch+var_4], esi
0x836843: mov     [esp+2Ch+a3], edi
0x836847: mov     eax, ds:0B456C0h
0x83684C: test    eax, eax
0x83684E: mov     ebx, 1
0x836853: mov     byte ptr [esp+2Ch+var_4], bl
0x836857: jz      short loc_836866
0x836859: mov     esi, eax
0x83685B: test    esi, esi
0x83685D: mov     [esp+2Ch+var_14], esi
0x836861: jz      short loc_836866
0x836863: add     [esi+60h], ebx
0x836866: mov     eax, [esi+18h]
0x836869: cmp     eax, 2
0x83686C: jnb     loc_836939
0x836872: lea     eax, [esp+2Ch+var_10]
0x836876: push    eax
0x836877: call    sub_772630
0x83687C: add     esp, 4
0x83687F: mov     eax, [eax]
0x836881: test    eax, eax
0x836883: jz      short loc_83688E
0x836885: mov     edi, eax
0x836887: add     [edi+5Ch], ebx
0x83688A: mov     [esp+2Ch+a3], edi
0x83688E: mov     eax, [esp+2Ch+var_10]
0x836892: test    eax, eax
0x836894: mov     byte ptr [esp+2Ch+var_4], 1
0x836899: jz      short loc_8368AE
0x83689B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83689F: mov     ecx, eax
0x8368A1: add     eax, 5Ch ; '\'
0x8368A4: cmp     dword ptr [eax], 0
0x8368A7: jnz     short loc_8368AE
0x8368A9: call    sub_772560
0x8368AE: push    2
0x8368B0: push    ebx
0x8368B1: push    0
0x8368B3: push    edi
0x8368B4: call    sub_801110
0x8368B9: mov     ecx, [esi+14h]
0x8368BC: add     esp, 10h
0x8368BF: push    edi; a3
0x8368C0: push    ecx; a2
0x8368C1: mov     ecx, esi; this
0x8368C3: call    sub_760010
0x8368C8: lea     edx, [esp+2Ch+var_10]
0x8368CC: push    edx
0x8368CD: call    sub_772630
0x8368D2: add     esp, 4
0x8368D5: mov     ebp, eax
0x8368D7: cmp     edi, [ebp+0]
0x8368DA: mov     byte ptr [esp+2Ch+var_4], 3
0x8368DF: jz      short loc_836900
0x8368E1: test    edi, edi
0x8368E3: jz      short loc_8368F2
0x8368E5: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8368E9: jnz     short loc_8368F2
0x8368EB: mov     ecx, edi
0x8368ED: call    sub_772560
0x8368F2: mov     edi, [ebp+0]
0x8368F5: test    edi, edi
0x8368F7: mov     [esp+2Ch+a3], edi
0x8368FB: jz      short loc_836900
0x8368FD: add     [edi+5Ch], ebx
0x836900: mov     eax, [esp+2Ch+var_10]
0x836904: test    eax, eax
0x836906: mov     byte ptr [esp+2Ch+var_4], 1
0x83690B: jz      short loc_836920
0x83690D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x836911: mov     ecx, eax
0x836913: add     eax, 5Ch ; '\'
0x836916: cmp     dword ptr [eax], 0
0x836919: jnz     short loc_836920
0x83691B: call    sub_772560
0x836920: push    2
0x836922: push    ebx
0x836923: push    ebx
0x836924: push    edi
0x836925: call    sub_801110
0x83692A: mov     eax, [esi+14h]
0x83692D: add     esp, 10h
0x836930: push    edi; a3
0x836931: push    eax; a2
0x836932: mov     ecx, esi; this
0x836934: call    sub_760010
0x836939: mov     eax, ds:0B4545Ch
0x83693E: mov     ebp, [esi+58h]
0x836941: cmp     ebp, eax
0x836943: mov     ebx, eax
0x836945: jz      short loc_836979
0x836947: test    ebp, ebp
0x836949: jz      short loc_836968
0x83694B: lea     ecx, [ebp+4]
0x83694E: push    ecx; lpAddend
0x83694F: call    dword ptr ds:0A2807Ch
0x836955: test    eax, eax
0x836957: jnz     short loc_836968
0x836959: test    ebp, ebp
0x83695B: jz      short loc_836968
0x83695D: mov     edx, [ebp+0]
0x836960: mov     eax, [edx]
0x836962: push    1
0x836964: mov     ecx, ebp
0x836966: call    eax
0x836968: test    ebx, ebx
0x83696A: mov     [esi+58h], ebx
0x83696D: jz      short loc_836979
0x83696F: add     ebx, 4
0x836972: push    ebx; lpAddend
0x836973: call    dword ptr ds:0A28078h
0x836979: mov     eax, ds:0B4524Ch
0x83697E: mov     ebp, [esi+44h]
0x836981: cmp     ebp, eax
0x836983: mov     ebx, eax
0x836985: jz      short loc_8369B9
0x836987: test    ebp, ebp
0x836989: jz      short loc_8369A8
0x83698B: lea     ecx, [ebp+4]
0x83698E: push    ecx; lpAddend
0x83698F: call    dword ptr ds:0A2807Ch
0x836995: test    eax, eax
0x836997: jnz     short loc_8369A8
0x836999: test    ebp, ebp
0x83699B: jz      short loc_8369A8
0x83699D: mov     edx, [ebp+0]
0x8369A0: mov     eax, [edx]
0x8369A2: push    1
0x8369A4: mov     ecx, ebp
0x8369A6: call    eax
0x8369A8: test    ebx, ebx
0x8369AA: mov     [esi+44h], ebx
0x8369AD: jz      short loc_8369B9
0x8369AF: add     ebx, 4
0x8369B2: push    ebx; lpAddend
0x8369B3: call    dword ptr ds:0A28078h
0x8369B9: cmp     dword ptr [esi+30h], 0
0x8369BD: jnz     short loc_8369C7
0x8369BF: call    sub_772DF0
0x8369C4: mov     [esi+30h], eax
0x8369C7: mov     ecx, [esi+30h]
0x8369CA: push    0
0x8369CC: push    0
0x8369CE: push    1Bh
0x8369D0: call    sub_772CD0
0x8369D5: cmp     dword ptr [esi+30h], 0
0x8369D9: jnz     short loc_8369E3
0x8369DB: call    sub_772DF0
0x8369E0: mov     [esi+30h], eax
0x8369E3: mov     ecx, [esi+30h]
0x8369E6: push    0
0x8369E8: push    0
0x8369EA: push    0Fh
0x8369EC: call    sub_772CD0
0x8369F1: cmp     dword ptr [esi+30h], 0
0x8369F5: jnz     short loc_8369FF
0x8369F7: call    sub_772DF0
0x8369FC: mov     [esi+30h], eax
0x8369FF: mov     ecx, [esi+30h]
0x836A02: push    0
0x836A04: push    1
0x836A06: push    7
0x836A08: call    sub_772CD0
0x836A0D: cmp     dword ptr [esi+30h], 0
0x836A11: jnz     short loc_836A1B
0x836A13: call    sub_772DF0
0x836A18: mov     [esi+30h], eax
0x836A1B: mov     ecx, [esi+30h]
0x836A1E: push    0
0x836A20: push    4
0x836A22: push    17h
0x836A24: call    sub_772CD0
0x836A29: cmp     dword ptr [esi+30h], 0
0x836A2D: jnz     short loc_836A37
0x836A2F: call    sub_772DF0
0x836A34: mov     [esi+30h], eax
0x836A37: mov     ecx, [esi+30h]
0x836A3A: push    0
0x836A3C: push    1
0x836A3E: push    0Eh
0x836A40: call    sub_772CD0
0x836A45: cmp     dword ptr [esi+30h], 0
0x836A49: jnz     short loc_836A53
0x836A4B: call    sub_772DF0
0x836A50: mov     [esi+30h], eax
0x836A53: mov     ecx, [esi+30h]
0x836A56: push    0
0x836A58: push    0
0x836A5A: push    34h ; '4'
0x836A5C: call    sub_772CD0
0x836A61: or      ebx, 0FFFFFFFFh
0x836A64: cmp     esi, ds:0B45B58h
0x836A6A: mov     dword ptr ds:0B43C40h, 82h ; '‚'
0x836A74: mov     dword ptr ds:0B442D0h, 3Ch ; '<'
0x836A7E: mov     dword ptr ds:0B435B0h, 80h ; '€'
0x836A88: mov     dword ptr ds:0B44960h, 0Ch
0x836A92: jz      short loc_836AB2
0x836A94: add     [esi+60h], ebx
0x836A97: jnz     short loc_836AA0
0x836A99: mov     ecx, esi
0x836A9B: call    sub_7604D0
0x836AA0: mov     esi, ds:0B45B58h
0x836AA6: test    esi, esi
0x836AA8: mov     [esp+2Ch+var_14], esi
0x836AAC: jz      short loc_836AB2
0x836AAE: add     dword ptr [esi+60h], 1
0x836AB2: mov     eax, [esi+18h]
0x836AB5: cmp     eax, 2
0x836AB8: jnb     loc_836BA2
0x836ABE: lea     ecx, [esp+2Ch+var_10]
0x836AC2: push    ecx
0x836AC3: call    sub_772630
0x836AC8: add     esp, 4
0x836ACB: mov     ebp, eax
0x836ACD: cmp     edi, [ebp+0]
0x836AD0: mov     byte ptr [esp+2Ch+var_4], 4
0x836AD5: jz      short loc_836AF6
0x836AD7: test    edi, edi
0x836AD9: jz      short loc_836AE7
0x836ADB: add     [edi+5Ch], ebx
0x836ADE: jnz     short loc_836AE7
0x836AE0: mov     ecx, edi
0x836AE2: call    sub_772560
0x836AE7: mov     edi, [ebp+0]
0x836AEA: test    edi, edi
0x836AEC: mov     [esp+2Ch+a3], edi
0x836AF0: jz      short loc_836AF6
0x836AF2: add     dword ptr [edi+5Ch], 1
0x836AF6: mov     eax, [esp+2Ch+var_10]
0x836AFA: test    eax, eax
0x836AFC: mov     byte ptr [esp+2Ch+var_4], 1
0x836B01: jz      short loc_836B15
0x836B03: add     [eax+5Ch], ebx
0x836B06: mov     ecx, eax
0x836B08: add     eax, 5Ch ; '\'
0x836B0B: cmp     dword ptr [eax], 0
0x836B0E: jnz     short loc_836B15
0x836B10: call    sub_772560
0x836B15: push    2
0x836B17: push    1
0x836B19: push    0
0x836B1B: push    edi
0x836B1C: call    sub_801110
0x836B21: mov     edx, [esi+14h]
0x836B24: add     esp, 10h
0x836B27: push    edi; a3
0x836B28: push    edx; a2
0x836B29: mov     ecx, esi; this
0x836B2B: call    sub_760010
0x836B30: lea     eax, [esp+2Ch+var_10]
0x836B34: push    eax
0x836B35: call    sub_772630
0x836B3A: add     esp, 4
0x836B3D: mov     ebp, eax
0x836B3F: cmp     edi, [ebp+0]
0x836B42: mov     byte ptr [esp+2Ch+var_4], 5
0x836B47: jz      short loc_836B68
0x836B49: test    edi, edi
0x836B4B: jz      short loc_836B59
0x836B4D: add     [edi+5Ch], ebx
0x836B50: jnz     short loc_836B59
0x836B52: mov     ecx, edi
0x836B54: call    sub_772560
0x836B59: mov     edi, [ebp+0]
0x836B5C: test    edi, edi
0x836B5E: mov     [esp+2Ch+a3], edi
0x836B62: jz      short loc_836B68
0x836B64: add     dword ptr [edi+5Ch], 1
0x836B68: mov     eax, [esp+2Ch+var_10]
0x836B6C: test    eax, eax
0x836B6E: mov     byte ptr [esp+2Ch+var_4], 1
0x836B73: jz      short loc_836B87
0x836B75: add     [eax+5Ch], ebx
0x836B78: mov     ecx, eax
0x836B7A: add     eax, 5Ch ; '\'
0x836B7D: cmp     dword ptr [eax], 0
0x836B80: jnz     short loc_836B87
0x836B82: call    sub_772560
0x836B87: push    2
0x836B89: push    1
0x836B8B: push    1
0x836B8D: push    edi
0x836B8E: call    sub_801110
0x836B93: mov     ecx, [esi+14h]
0x836B96: add     esp, 10h
0x836B99: push    edi; a3
0x836B9A: push    ecx; a2
0x836B9B: mov     ecx, esi; this
0x836B9D: call    sub_760010
0x836BA2: mov     eax, ds:0B45460h
0x836BA7: mov     ebp, [esi+58h]
0x836BAA: cmp     ebp, eax
0x836BAC: mov     ebx, eax
0x836BAE: jz      short loc_836BE2
0x836BB0: test    ebp, ebp
0x836BB2: jz      short loc_836BD1
0x836BB4: lea     edx, [ebp+4]
0x836BB7: push    edx; lpAddend
0x836BB8: call    dword ptr ds:0A2807Ch
0x836BBE: test    eax, eax
0x836BC0: jnz     short loc_836BD1
0x836BC2: test    ebp, ebp
0x836BC4: jz      short loc_836BD1
0x836BC6: mov     eax, [ebp+0]
0x836BC9: mov     edx, [eax]
0x836BCB: push    1
0x836BCD: mov     ecx, ebp
0x836BCF: call    edx
0x836BD1: test    ebx, ebx
0x836BD3: mov     [esi+58h], ebx
0x836BD6: jz      short loc_836BE2
0x836BD8: add     ebx, 4
0x836BDB: push    ebx; lpAddend
0x836BDC: call    dword ptr ds:0A28078h
0x836BE2: mov     eax, ds:0B45250h
0x836BE7: mov     ebp, [esi+44h]
0x836BEA: cmp     ebp, eax
0x836BEC: mov     ebx, eax
0x836BEE: jz      short loc_836C22
0x836BF0: test    ebp, ebp
0x836BF2: jz      short loc_836C11
0x836BF4: lea     eax, [ebp+4]
0x836BF7: push    eax; lpAddend
0x836BF8: call    dword ptr ds:0A2807Ch
0x836BFE: test    eax, eax
0x836C00: jnz     short loc_836C11
0x836C02: test    ebp, ebp
0x836C04: jz      short loc_836C11
0x836C06: mov     edx, [ebp+0]
0x836C09: mov     eax, [edx]
0x836C0B: push    1
0x836C0D: mov     ecx, ebp
0x836C0F: call    eax
0x836C11: test    ebx, ebx
0x836C13: mov     [esi+44h], ebx
0x836C16: jz      short loc_836C22
0x836C18: add     ebx, 4
0x836C1B: push    ebx; lpAddend
0x836C1C: call    dword ptr ds:0A28078h
0x836C22: cmp     dword ptr [esi+30h], 0
0x836C26: jnz     short loc_836C30
0x836C28: call    sub_772DF0
0x836C2D: mov     [esi+30h], eax
0x836C30: mov     ecx, [esi+30h]
0x836C33: push    0
0x836C35: push    1
0x836C37: push    1Bh
0x836C39: call    sub_772CD0
0x836C3E: cmp     dword ptr [esi+30h], 0
0x836C42: jnz     short loc_836C4C
0x836C44: call    sub_772DF0
0x836C49: mov     [esi+30h], eax
0x836C4C: mov     ecx, [esi+30h]
0x836C4F: push    0
0x836C51: push    5
0x836C53: push    13h
0x836C55: call    sub_772CD0
0x836C5A: cmp     dword ptr [esi+30h], 0
0x836C5E: jnz     short loc_836C68
0x836C60: call    sub_772DF0
0x836C65: mov     [esi+30h], eax
0x836C68: mov     ecx, [esi+30h]
0x836C6B: push    0
0x836C6D: push    6
0x836C6F: push    14h
0x836C71: call    sub_772CD0
0x836C76: cmp     dword ptr [esi+30h], 0
0x836C7A: jnz     short loc_836C84
0x836C7C: call    sub_772DF0
0x836C81: mov     [esi+30h], eax
0x836C84: mov     ecx, [esi+30h]
0x836C87: push    0
0x836C89: push    1
0x836C8B: push    0Fh
0x836C8D: call    sub_772CD0
0x836C92: cmp     dword ptr [esi+30h], 0
0x836C96: jnz     short loc_836CA0
0x836C98: call    sub_772DF0
0x836C9D: mov     [esi+30h], eax
0x836CA0: mov     ecx, [esi+30h]
0x836CA3: push    0
0x836CA5: push    5
0x836CA7: push    19h
0x836CA9: call    sub_772CD0
0x836CAE: cmp     dword ptr [esi+30h], 0
0x836CB2: jnz     short loc_836CBC
0x836CB4: call    sub_772DF0
0x836CB9: mov     [esi+30h], eax
0x836CBC: mov     ecx, [esi+30h]
0x836CBF: push    0
0x836CC1: push    0
0x836CC3: push    18h
0x836CC5: call    sub_772CD0
0x836CCA: cmp     dword ptr [esi+30h], 0
0x836CCE: jnz     short loc_836CD8
0x836CD0: call    sub_772DF0
0x836CD5: mov     [esi+30h], eax
0x836CD8: mov     ecx, [esi+30h]
0x836CDB: push    0
0x836CDD: push    1
0x836CDF: push    7
0x836CE1: call    sub_772CD0
0x836CE6: cmp     dword ptr [esi+30h], 0
0x836CEA: jnz     short loc_836CF4
0x836CEC: call    sub_772DF0
0x836CF1: mov     [esi+30h], eax
0x836CF4: mov     ecx, [esi+30h]
0x836CF7: push    0
0x836CF9: push    4
0x836CFB: push    17h
0x836CFD: call    sub_772CD0
0x836D02: cmp     dword ptr [esi+30h], 0
0x836D06: jnz     short loc_836D10
0x836D08: call    sub_772DF0
0x836D0D: mov     [esi+30h], eax
0x836D10: mov     ecx, [esi+30h]
0x836D13: push    0
0x836D15: push    0
0x836D17: push    0Eh
0x836D19: call    sub_772CD0
0x836D1E: cmp     dword ptr [esi+30h], 0
0x836D22: jnz     short loc_836D2C
0x836D24: call    sub_772DF0
0x836D29: mov     [esi+30h], eax
0x836D2C: mov     ecx, [esi+30h]
0x836D2F: push    0
0x836D31: push    0
0x836D33: push    34h ; '4'
0x836D35: call    sub_772CD0
0x836D3A: or      ebx, 0FFFFFFFFh
0x836D3D: cmp     esi, ds:0B45B78h
0x836D43: mov     dword ptr ds:0B440D8h, 82h ; '‚'
0x836D4D: mov     dword ptr ds:0B44768h, 3Ch ; '<'
0x836D57: mov     dword ptr ds:0B43A48h, 80h ; '€'
0x836D61: mov     dword ptr ds:0B44DF8h, 0Ch
0x836D6B: jz      short loc_836D8B
0x836D6D: add     [esi+60h], ebx
0x836D70: jnz     short loc_836D79
0x836D72: mov     ecx, esi
0x836D74: call    sub_7604D0
0x836D79: mov     esi, ds:0B45B78h
0x836D7F: test    esi, esi
0x836D81: mov     [esp+2Ch+var_14], esi
0x836D85: jz      short loc_836D8B
0x836D87: add     dword ptr [esi+60h], 1
0x836D8B: mov     eax, [esi+18h]
0x836D8E: cmp     eax, 2
0x836D91: jnb     loc_836EED
0x836D97: lea     ecx, [esp+2Ch+var_10]
0x836D9B: push    ecx
0x836D9C: call    sub_772630
0x836DA1: add     esp, 4
0x836DA4: mov     ebp, eax
0x836DA6: cmp     edi, [ebp+0]
0x836DA9: mov     byte ptr [esp+2Ch+var_4], 6
0x836DAE: jz      short loc_836DCF
0x836DB0: test    edi, edi
0x836DB2: jz      short loc_836DC0
0x836DB4: add     [edi+5Ch], ebx
0x836DB7: jnz     short loc_836DC0
0x836DB9: mov     ecx, edi
0x836DBB: call    sub_772560
0x836DC0: mov     edi, [ebp+0]
0x836DC3: test    edi, edi
0x836DC5: mov     [esp+2Ch+a3], edi
0x836DC9: jz      short loc_836DCF
0x836DCB: add     dword ptr [edi+5Ch], 1
0x836DCF: mov     eax, [esp+2Ch+var_10]
0x836DD3: test    eax, eax
0x836DD5: mov     byte ptr [esp+2Ch+var_4], 1
0x836DDA: jz      short loc_836DEE
0x836DDC: add     [eax+5Ch], ebx
0x836DDF: mov     ecx, eax
0x836DE1: add     eax, 5Ch ; '\'
0x836DE4: cmp     dword ptr [eax], 0
0x836DE7: jnz     short loc_836DEE
0x836DE9: call    sub_772560
0x836DEE: push    2
0x836DF0: push    1
0x836DF2: push    0
0x836DF4: push    edi
0x836DF5: call    sub_801110
0x836DFA: mov     edx, [esi+14h]
0x836DFD: add     esp, 10h
0x836E00: push    edi; a3
0x836E01: push    edx; a2
0x836E02: mov     ecx, esi; this
0x836E04: call    sub_760010
0x836E09: lea     eax, [esp+2Ch+var_10]
0x836E0D: push    eax
0x836E0E: call    sub_772630
0x836E13: add     esp, 4
0x836E16: mov     ebp, eax
0x836E18: cmp     edi, [ebp+0]
0x836E1B: mov     byte ptr [esp+2Ch+var_4], 7
0x836E20: jz      short loc_836E41
0x836E22: test    edi, edi
0x836E24: jz      short loc_836E32
0x836E26: add     [edi+5Ch], ebx
0x836E29: jnz     short loc_836E32
0x836E2B: mov     ecx, edi
0x836E2D: call    sub_772560
0x836E32: mov     edi, [ebp+0]
0x836E35: test    edi, edi
0x836E37: mov     [esp+2Ch+a3], edi
0x836E3B: jz      short loc_836E41
0x836E3D: add     dword ptr [edi+5Ch], 1
0x836E41: mov     eax, [esp+2Ch+var_10]
0x836E45: test    eax, eax
0x836E47: mov     byte ptr [esp+2Ch+var_4], 1
0x836E4C: jz      short loc_836E60
0x836E4E: add     [eax+5Ch], ebx
0x836E51: mov     ecx, eax
0x836E53: add     eax, 5Ch ; '\'
0x836E56: cmp     dword ptr [eax], 0
0x836E59: jnz     short loc_836E60
0x836E5B: call    sub_772560
0x836E60: push    2
0x836E62: push    1
0x836E64: push    1
0x836E66: push    edi
0x836E67: call    sub_801110
0x836E6C: mov     ecx, [esi+14h]
0x836E6F: add     esp, 10h
0x836E72: push    edi; a3
0x836E73: push    ecx; a2
0x836E74: mov     ecx, esi; this
0x836E76: call    sub_760010
0x836E7B: lea     edx, [esp+2Ch+var_10]
0x836E7F: push    edx
0x836E80: call    sub_772630
0x836E85: add     esp, 4
0x836E88: mov     ebp, eax
0x836E8A: cmp     edi, [ebp+0]
0x836E8D: mov     byte ptr [esp+2Ch+var_4], 8
0x836E92: jz      short loc_836EB3
0x836E94: test    edi, edi
0x836E96: jz      short loc_836EA4
0x836E98: add     [edi+5Ch], ebx
0x836E9B: jnz     short loc_836EA4
0x836E9D: mov     ecx, edi
0x836E9F: call    sub_772560
0x836EA4: mov     edi, [ebp+0]
0x836EA7: test    edi, edi
0x836EA9: mov     [esp+2Ch+a3], edi
0x836EAD: jz      short loc_836EB3
0x836EAF: add     dword ptr [edi+5Ch], 1
0x836EB3: mov     eax, [esp+2Ch+var_10]
0x836EB7: test    eax, eax
0x836EB9: mov     byte ptr [esp+2Ch+var_4], 1
0x836EBE: jz      short loc_836ED2
0x836EC0: add     [eax+5Ch], ebx
0x836EC3: mov     ecx, eax
0x836EC5: add     eax, 5Ch ; '\'
0x836EC8: cmp     dword ptr [eax], 0
0x836ECB: jnz     short loc_836ED2
0x836ECD: call    sub_772560
0x836ED2: push    2
0x836ED4: push    1
0x836ED6: push    2
0x836ED8: push    edi
0x836ED9: call    sub_801110
0x836EDE: mov     eax, [esi+14h]
0x836EE1: add     esp, 10h
0x836EE4: push    edi; a3
0x836EE5: push    eax; a2
0x836EE6: mov     ecx, esi; this
0x836EE8: call    sub_760010
0x836EED: mov     eax, ds:0B45464h
0x836EF2: mov     ebp, [esi+58h]
0x836EF5: cmp     ebp, eax
0x836EF7: mov     ebx, eax
0x836EF9: jz      short loc_836F2D
0x836EFB: test    ebp, ebp
0x836EFD: jz      short loc_836F1C
0x836EFF: lea     ecx, [ebp+4]
0x836F02: push    ecx; lpAddend
0x836F03: call    dword ptr ds:0A2807Ch
0x836F09: test    eax, eax
0x836F0B: jnz     short loc_836F1C
0x836F0D: test    ebp, ebp
0x836F0F: jz      short loc_836F1C
0x836F11: mov     edx, [ebp+0]
0x836F14: mov     eax, [edx]
0x836F16: push    1
0x836F18: mov     ecx, ebp
0x836F1A: call    eax
0x836F1C: test    ebx, ebx
0x836F1E: mov     [esi+58h], ebx
0x836F21: jz      short loc_836F2D
0x836F23: add     ebx, 4
0x836F26: push    ebx; lpAddend
0x836F27: call    dword ptr ds:0A28078h
0x836F2D: mov     eax, ds:0B45254h
0x836F32: mov     ebp, [esi+44h]
0x836F35: cmp     ebp, eax
0x836F37: mov     ebx, eax
0x836F39: jz      short loc_836F6D
0x836F3B: test    ebp, ebp
0x836F3D: jz      short loc_836F5C
0x836F3F: lea     ecx, [ebp+4]
0x836F42: push    ecx; lpAddend
0x836F43: call    dword ptr ds:0A2807Ch
0x836F49: test    eax, eax
0x836F4B: jnz     short loc_836F5C
0x836F4D: test    ebp, ebp
0x836F4F: jz      short loc_836F5C
0x836F51: mov     edx, [ebp+0]
0x836F54: mov     eax, [edx]
0x836F56: push    1
0x836F58: mov     ecx, ebp
0x836F5A: call    eax
0x836F5C: test    ebx, ebx
0x836F5E: mov     [esi+44h], ebx
0x836F61: jz      short loc_836F6D
0x836F63: add     ebx, 4
0x836F66: push    ebx; lpAddend
0x836F67: call    dword ptr ds:0A28078h
0x836F6D: cmp     dword ptr [esi+30h], 0
0x836F71: jnz     short loc_836F7B
0x836F73: call    sub_772DF0
0x836F78: mov     [esi+30h], eax
0x836F7B: mov     ecx, [esi+30h]
0x836F7E: push    0
0x836F80: push    1
0x836F82: push    1Bh
0x836F84: call    sub_772CD0
0x836F89: cmp     dword ptr [esi+30h], 0
0x836F8D: jnz     short loc_836F97
0x836F8F: call    sub_772DF0
0x836F94: mov     [esi+30h], eax
0x836F97: mov     ecx, [esi+30h]
0x836F9A: push    0
0x836F9C: push    5
0x836F9E: push    13h
0x836FA0: call    sub_772CD0
0x836FA5: cmp     dword ptr [esi+30h], 0
0x836FA9: jnz     short loc_836FB3
0x836FAB: call    sub_772DF0
0x836FB0: mov     [esi+30h], eax
0x836FB3: mov     ecx, [esi+30h]
0x836FB6: push    0
0x836FB8: push    6
0x836FBA: push    14h
0x836FBC: call    sub_772CD0
0x836FC1: cmp     dword ptr [esi+30h], 0
0x836FC5: jnz     short loc_836FCF
0x836FC7: call    sub_772DF0
0x836FCC: mov     [esi+30h], eax
0x836FCF: mov     ecx, [esi+30h]
0x836FD2: push    0
0x836FD4: push    1
0x836FD6: push    0Fh
0x836FD8: call    sub_772CD0
0x836FDD: cmp     dword ptr [esi+30h], 0
0x836FE1: jnz     short loc_836FEB
0x836FE3: call    sub_772DF0
0x836FE8: mov     [esi+30h], eax
0x836FEB: mov     ecx, [esi+30h]
0x836FEE: push    0
0x836FF0: push    5
0x836FF2: push    19h
0x836FF4: call    sub_772CD0
0x836FF9: cmp     dword ptr [esi+30h], 0
0x836FFD: jnz     short loc_837007
0x836FFF: call    sub_772DF0
0x837004: mov     [esi+30h], eax
0x837007: mov     ecx, [esi+30h]
0x83700A: push    0
0x83700C: push    0
0x83700E: push    18h
0x837010: call    sub_772CD0
0x837015: cmp     dword ptr [esi+30h], 0
0x837019: jnz     short loc_837023
0x83701B: call    sub_772DF0
0x837020: mov     [esi+30h], eax
0x837023: mov     ecx, [esi+30h]
0x837026: push    0
0x837028: push    1
0x83702A: push    7
0x83702C: call    sub_772CD0
0x837031: cmp     dword ptr [esi+30h], 0
0x837035: jnz     short loc_83703F
0x837037: call    sub_772DF0
0x83703C: mov     [esi+30h], eax
0x83703F: mov     ecx, [esi+30h]
0x837042: push    0
0x837044: push    4
0x837046: push    17h
0x837048: call    sub_772CD0
0x83704D: cmp     dword ptr [esi+30h], 0
0x837051: jnz     short loc_83705B
0x837053: call    sub_772DF0
0x837058: mov     [esi+30h], eax
0x83705B: mov     ecx, [esi+30h]
0x83705E: push    0
0x837060: push    0
0x837062: push    0Eh
0x837064: call    sub_772CD0
0x837069: cmp     dword ptr [esi+30h], 0
0x83706D: jnz     short loc_837077
0x83706F: call    sub_772DF0
0x837074: mov     [esi+30h], eax
0x837077: mov     ecx, [esi+30h]
0x83707A: push    0
0x83707C: push    0
0x83707E: push    34h ; '4'
0x837080: call    sub_772CD0
0x837085: mov     eax, 0Ch
0x83708A: or      ebx, 0FFFFFFFFh
0x83708D: cmp     esi, ds:0B45B54h
0x837093: mov     dword ptr ds:0B440F8h, 18082h
0x83709D: mov     ds:0B44788h, eax
0x8370A2: mov     dword ptr ds:0B43A68h, 80h ; '€'
0x8370AC: mov     ds:0B44E18h, eax
0x8370B1: jz      short loc_8370D1
0x8370B3: add     [esi+60h], ebx
0x8370B6: jnz     short loc_8370BF
0x8370B8: mov     ecx, esi
0x8370BA: call    sub_7604D0
0x8370BF: mov     esi, ds:0B45B54h
0x8370C5: test    esi, esi
0x8370C7: mov     [esp+2Ch+var_14], esi
0x8370CB: jz      short loc_8370D1
0x8370CD: add     dword ptr [esi+60h], 1
0x8370D1: cmp     dword ptr [esi+18h], 2
0x8370D5: jnb     loc_8371BF
0x8370DB: lea     ecx, [esp+2Ch+var_10]
0x8370DF: push    ecx
0x8370E0: call    sub_772630
0x8370E5: add     esp, 4
0x8370E8: mov     ebp, eax
0x8370EA: cmp     edi, [ebp+0]
0x8370ED: mov     byte ptr [esp+2Ch+var_4], 9
0x8370F2: jz      short loc_837113
0x8370F4: test    edi, edi
0x8370F6: jz      short loc_837104
0x8370F8: add     [edi+5Ch], ebx
0x8370FB: jnz     short loc_837104
0x8370FD: mov     ecx, edi
0x8370FF: call    sub_772560
0x837104: mov     edi, [ebp+0]
0x837107: test    edi, edi
0x837109: mov     [esp+2Ch+a3], edi
0x83710D: jz      short loc_837113
0x83710F: add     dword ptr [edi+5Ch], 1
0x837113: mov     eax, [esp+2Ch+var_10]
0x837117: test    eax, eax
0x837119: mov     byte ptr [esp+2Ch+var_4], 1
0x83711E: jz      short loc_837132
0x837120: add     [eax+5Ch], ebx
0x837123: mov     ecx, eax
0x837125: add     eax, 5Ch ; '\'
0x837128: cmp     dword ptr [eax], 0
0x83712B: jnz     short loc_837132
0x83712D: call    sub_772560
0x837132: push    2
0x837134: push    1
0x837136: push    0
0x837138: push    edi
0x837139: call    sub_801110
0x83713E: mov     edx, [esi+14h]
0x837141: add     esp, 10h
0x837144: push    edi; a3
0x837145: push    edx; a2
0x837146: mov     ecx, esi; this
0x837148: call    sub_760010
0x83714D: lea     eax, [esp+2Ch+var_10]
0x837151: push    eax
0x837152: call    sub_772630
0x837157: add     esp, 4
0x83715A: mov     ebp, eax
0x83715C: cmp     edi, [ebp+0]
0x83715F: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x837164: jz      short loc_837185
0x837166: test    edi, edi
0x837168: jz      short loc_837176
0x83716A: add     [edi+5Ch], ebx
0x83716D: jnz     short loc_837176
0x83716F: mov     ecx, edi
0x837171: call    sub_772560
0x837176: mov     edi, [ebp+0]
0x837179: test    edi, edi
0x83717B: mov     [esp+2Ch+a3], edi
0x83717F: jz      short loc_837185
0x837181: add     dword ptr [edi+5Ch], 1
0x837185: mov     eax, [esp+2Ch+var_10]
0x837189: test    eax, eax
0x83718B: mov     byte ptr [esp+2Ch+var_4], 1
0x837190: jz      short loc_8371A4
0x837192: add     [eax+5Ch], ebx
0x837195: mov     ecx, eax
0x837197: add     eax, 5Ch ; '\'
0x83719A: cmp     dword ptr [eax], 0
0x83719D: jnz     short loc_8371A4
0x83719F: call    sub_772560
0x8371A4: push    2
0x8371A6: push    1
0x8371A8: push    1
0x8371AA: push    edi
0x8371AB: call    sub_801110
0x8371B0: mov     ecx, [esi+14h]
0x8371B3: add     esp, 10h
0x8371B6: push    edi; a3
0x8371B7: push    ecx; a2
0x8371B8: mov     ecx, esi; this
0x8371BA: call    sub_760010
0x8371BF: mov     eax, ds:0B45468h
0x8371C4: mov     ebp, [esi+58h]
0x8371C7: cmp     ebp, eax
0x8371C9: mov     ebx, eax
0x8371CB: jz      short loc_8371FF
0x8371CD: test    ebp, ebp
0x8371CF: jz      short loc_8371EE
0x8371D1: lea     edx, [ebp+4]
0x8371D4: push    edx; lpAddend
0x8371D5: call    dword ptr ds:0A2807Ch
0x8371DB: test    eax, eax
0x8371DD: jnz     short loc_8371EE
0x8371DF: test    ebp, ebp
0x8371E1: jz      short loc_8371EE
0x8371E3: mov     eax, [ebp+0]
0x8371E6: mov     edx, [eax]
0x8371E8: push    1
0x8371EA: mov     ecx, ebp
0x8371EC: call    edx
0x8371EE: test    ebx, ebx
0x8371F0: mov     [esi+58h], ebx
0x8371F3: jz      short loc_8371FF
0x8371F5: add     ebx, 4
0x8371F8: push    ebx; lpAddend
0x8371F9: call    dword ptr ds:0A28078h
0x8371FF: mov     eax, ds:0B45258h
0x837204: mov     ebp, [esi+44h]
0x837207: cmp     ebp, eax
0x837209: mov     ebx, eax
0x83720B: jz      short loc_83723F
0x83720D: test    ebp, ebp
0x83720F: jz      short loc_83722E
0x837211: lea     eax, [ebp+4]
0x837214: push    eax; lpAddend
0x837215: call    dword ptr ds:0A2807Ch
0x83721B: test    eax, eax
0x83721D: jnz     short loc_83722E
0x83721F: test    ebp, ebp
0x837221: jz      short loc_83722E
0x837223: mov     edx, [ebp+0]
0x837226: mov     eax, [edx]
0x837228: push    1
0x83722A: mov     ecx, ebp
0x83722C: call    eax
0x83722E: test    ebx, ebx
0x837230: mov     [esi+44h], ebx
0x837233: jz      short loc_83723F
0x837235: add     ebx, 4
0x837238: push    ebx; lpAddend
0x837239: call    dword ptr ds:0A28078h
0x83723F: cmp     dword ptr [esi+30h], 0
0x837243: jnz     short loc_83724D
0x837245: call    sub_772DF0
0x83724A: mov     [esi+30h], eax
0x83724D: mov     ecx, [esi+30h]
0x837250: push    0
0x837252: push    1
0x837254: push    1Bh
0x837256: call    sub_772CD0
0x83725B: cmp     dword ptr [esi+30h], 0
0x83725F: jnz     short loc_837269
0x837261: call    sub_772DF0
0x837266: mov     [esi+30h], eax
0x837269: mov     ecx, [esi+30h]
0x83726C: push    0
0x83726E: push    5
0x837270: push    13h
0x837272: call    sub_772CD0
0x837277: cmp     dword ptr [esi+30h], 0
0x83727B: jnz     short loc_837285
0x83727D: call    sub_772DF0
0x837282: mov     [esi+30h], eax
0x837285: mov     ecx, [esi+30h]
0x837288: push    0
0x83728A: mov     ebp, 2
0x83728F: push    ebp
0x837290: push    14h
0x837292: call    sub_772CD0
0x837297: cmp     dword ptr [esi+30h], 0
0x83729B: jnz     short loc_8372A5
0x83729D: call    sub_772DF0
0x8372A2: mov     [esi+30h], eax
0x8372A5: mov     ecx, [esi+30h]
0x8372A8: push    0
0x8372AA: push    1
0x8372AC: push    0Fh
0x8372AE: call    sub_772CD0
0x8372B3: cmp     dword ptr [esi+30h], 0
0x8372B7: jnz     short loc_8372C1
0x8372B9: call    sub_772DF0
0x8372BE: mov     [esi+30h], eax
0x8372C1: mov     ecx, [esi+30h]
0x8372C4: push    0
0x8372C6: push    5
0x8372C8: push    19h
0x8372CA: call    sub_772CD0
0x8372CF: cmp     dword ptr [esi+30h], 0
0x8372D3: jnz     short loc_8372DD
0x8372D5: call    sub_772DF0
0x8372DA: mov     [esi+30h], eax
0x8372DD: mov     ecx, [esi+30h]
0x8372E0: push    0
0x8372E2: push    0
0x8372E4: push    18h
0x8372E6: call    sub_772CD0
0x8372EB: cmp     dword ptr [esi+30h], 0
0x8372EF: jnz     short loc_8372F9
0x8372F1: call    sub_772DF0
0x8372F6: mov     [esi+30h], eax
0x8372F9: mov     ecx, [esi+30h]
0x8372FC: push    0
0x8372FE: push    1
0x837300: push    7
0x837302: call    sub_772CD0
0x837307: cmp     dword ptr [esi+30h], 0
0x83730B: jnz     short loc_837315
0x83730D: call    sub_772DF0
0x837312: mov     [esi+30h], eax
0x837315: mov     ecx, [esi+30h]
0x837318: push    0
0x83731A: push    4
0x83731C: push    17h
0x83731E: call    sub_772CD0
0x837323: cmp     dword ptr [esi+30h], 0
0x837327: jnz     short loc_837331
0x837329: call    sub_772DF0
0x83732E: mov     [esi+30h], eax
0x837331: mov     ecx, [esi+30h]
0x837334: push    0
0x837336: push    0
0x837338: push    0Eh
0x83733A: call    sub_772CD0
0x83733F: cmp     dword ptr [esi+30h], 0
0x837343: jnz     short loc_83734D
0x837345: call    sub_772DF0
0x83734A: mov     [esi+30h], eax
0x83734D: mov     ecx, [esi+30h]
0x837350: push    0
0x837352: push    0
0x837354: push    34h ; '4'
0x837356: call    sub_772CD0
0x83735B: or      ebx, 0FFFFFFFFh
0x83735E: cmp     esi, ds:0B45B60h
0x837364: mov     ds:0B440D4h, ebp
0x83736A: mov     dword ptr ds:0B44764h, 30h ; '0'
0x837374: jz      short loc_837394
0x837376: add     [esi+60h], ebx
0x837379: jnz     short loc_837382
0x83737B: mov     ecx, esi
0x83737D: call    sub_7604D0
0x837382: mov     esi, ds:0B45B60h
0x837388: test    esi, esi
0x83738A: mov     [esp+2Ch+var_14], esi
0x83738E: jz      short loc_837394
0x837390: add     dword ptr [esi+60h], 1
0x837394: cmp     [esi+18h], ebp
0x837397: jnb     loc_837481
0x83739D: lea     ecx, [esp+2Ch+var_10]
0x8373A1: push    ecx
0x8373A2: call    sub_772630
0x8373A7: add     esp, 4
0x8373AA: mov     ebp, eax
0x8373AC: cmp     edi, [ebp+0]
0x8373AF: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x8373B4: jz      short loc_8373D5
0x8373B6: test    edi, edi
0x8373B8: jz      short loc_8373C6
0x8373BA: add     [edi+5Ch], ebx
0x8373BD: jnz     short loc_8373C6
0x8373BF: mov     ecx, edi
0x8373C1: call    sub_772560
0x8373C6: mov     edi, [ebp+0]
0x8373C9: test    edi, edi
0x8373CB: mov     [esp+2Ch+a3], edi
0x8373CF: jz      short loc_8373D5
0x8373D1: add     dword ptr [edi+5Ch], 1
0x8373D5: mov     eax, [esp+2Ch+var_10]
0x8373D9: test    eax, eax
0x8373DB: mov     byte ptr [esp+2Ch+var_4], 1
0x8373E0: jz      short loc_8373F4
0x8373E2: add     [eax+5Ch], ebx
0x8373E5: mov     ecx, eax
0x8373E7: add     eax, 5Ch ; '\'
0x8373EA: cmp     dword ptr [eax], 0
0x8373ED: jnz     short loc_8373F4
0x8373EF: call    sub_772560
0x8373F4: push    2
0x8373F6: push    1
0x8373F8: push    0
0x8373FA: push    edi
0x8373FB: call    sub_801110
0x837400: mov     edx, [esi+14h]
0x837403: add     esp, 10h
0x837406: push    edi; a3
0x837407: push    edx; a2
0x837408: mov     ecx, esi; this
0x83740A: call    sub_760010
0x83740F: lea     eax, [esp+2Ch+var_10]
0x837413: push    eax
0x837414: call    sub_772630
0x837419: add     esp, 4
0x83741C: mov     ebp, eax
0x83741E: cmp     edi, [ebp+0]
0x837421: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x837426: jz      short loc_837447
0x837428: test    edi, edi
0x83742A: jz      short loc_837438
0x83742C: add     [edi+5Ch], ebx
0x83742F: jnz     short loc_837438
0x837431: mov     ecx, edi
0x837433: call    sub_772560
0x837438: mov     edi, [ebp+0]
0x83743B: test    edi, edi
0x83743D: mov     [esp+2Ch+a3], edi
0x837441: jz      short loc_837447
0x837443: add     dword ptr [edi+5Ch], 1
0x837447: mov     eax, [esp+2Ch+var_10]
0x83744B: test    eax, eax
0x83744D: mov     byte ptr [esp+2Ch+var_4], 1
0x837452: jz      short loc_837466
0x837454: add     [eax+5Ch], ebx
0x837457: mov     ecx, eax
0x837459: add     eax, 5Ch ; '\'
0x83745C: cmp     dword ptr [eax], 0
0x83745F: jnz     short loc_837466
0x837461: call    sub_772560
0x837466: push    2
0x837468: push    1
0x83746A: push    1
0x83746C: push    edi
0x83746D: call    sub_801110
0x837472: mov     ecx, [esi+14h]
0x837475: add     esp, 10h
0x837478: push    edi; a3
0x837479: push    ecx; a2
0x83747A: mov     ecx, esi; this
0x83747C: call    sub_760010
0x837481: mov     eax, ds:0B45468h
0x837486: mov     ebp, [esi+58h]
0x837489: cmp     ebp, eax
0x83748B: mov     ebx, eax
0x83748D: jz      short loc_8374C1
0x83748F: test    ebp, ebp
0x837491: jz      short loc_8374B0
0x837493: lea     edx, [ebp+4]
0x837496: push    edx; lpAddend
0x837497: call    dword ptr ds:0A2807Ch
0x83749D: test    eax, eax
0x83749F: jnz     short loc_8374B0
0x8374A1: test    ebp, ebp
0x8374A3: jz      short loc_8374B0
0x8374A5: mov     eax, [ebp+0]
0x8374A8: mov     edx, [eax]
0x8374AA: push    1
0x8374AC: mov     ecx, ebp
0x8374AE: call    edx
0x8374B0: test    ebx, ebx
0x8374B2: mov     [esi+58h], ebx
0x8374B5: jz      short loc_8374C1
0x8374B7: add     ebx, 4
0x8374BA: push    ebx; lpAddend
0x8374BB: call    dword ptr ds:0A28078h
0x8374C1: mov     eax, ds:0B4525Ch
0x8374C6: mov     ebp, [esi+44h]
0x8374C9: cmp     ebp, eax
0x8374CB: mov     ebx, eax
0x8374CD: jz      short loc_837501
0x8374CF: test    ebp, ebp
0x8374D1: jz      short loc_8374F0
0x8374D3: lea     eax, [ebp+4]
0x8374D6: push    eax; lpAddend
0x8374D7: call    dword ptr ds:0A2807Ch
0x8374DD: test    eax, eax
0x8374DF: jnz     short loc_8374F0
0x8374E1: test    ebp, ebp
0x8374E3: jz      short loc_8374F0
0x8374E5: mov     edx, [ebp+0]
0x8374E8: mov     eax, [edx]
0x8374EA: push    1
0x8374EC: mov     ecx, ebp
0x8374EE: call    eax
0x8374F0: test    ebx, ebx
0x8374F2: mov     [esi+44h], ebx
0x8374F5: jz      short loc_837501
0x8374F7: add     ebx, 4
0x8374FA: push    ebx; lpAddend
0x8374FB: call    dword ptr ds:0A28078h
0x837501: cmp     dword ptr [esi+30h], 0
0x837505: jnz     short loc_83750F
0x837507: call    sub_772DF0
0x83750C: mov     [esi+30h], eax
0x83750F: mov     ecx, [esi+30h]
0x837512: push    0
0x837514: push    1
0x837516: push    1Bh
0x837518: call    sub_772CD0
0x83751D: cmp     dword ptr [esi+30h], 0
0x837521: jnz     short loc_83752B
0x837523: call    sub_772DF0
0x837528: mov     [esi+30h], eax
0x83752B: mov     ecx, [esi+30h]
0x83752E: push    0
0x837530: push    5
0x837532: push    13h
0x837534: call    sub_772CD0
0x837539: cmp     dword ptr [esi+30h], 0
0x83753D: jnz     short loc_837547
0x83753F: call    sub_772DF0
0x837544: mov     [esi+30h], eax
0x837547: mov     ecx, [esi+30h]
0x83754A: push    0
0x83754C: mov     ebp, 2
0x837551: push    ebp
0x837552: push    14h
0x837554: call    sub_772CD0
0x837559: cmp     dword ptr [esi+30h], 0
0x83755D: jnz     short loc_837567
0x83755F: call    sub_772DF0
0x837564: mov     [esi+30h], eax
0x837567: mov     ecx, [esi+30h]
0x83756A: push    0
0x83756C: push    1
0x83756E: push    0Fh
0x837570: call    sub_772CD0
0x837575: cmp     dword ptr [esi+30h], 0
0x837579: jnz     short loc_837583
0x83757B: call    sub_772DF0
0x837580: mov     [esi+30h], eax
0x837583: mov     ecx, [esi+30h]
0x837586: push    0
0x837588: push    5
0x83758A: push    19h
0x83758C: call    sub_772CD0
0x837591: cmp     dword ptr [esi+30h], 0
0x837595: jnz     short loc_83759F
0x837597: call    sub_772DF0
0x83759C: mov     [esi+30h], eax
0x83759F: mov     ecx, [esi+30h]
0x8375A2: push    0
0x8375A4: push    0
0x8375A6: push    18h
0x8375A8: call    sub_772CD0
0x8375AD: cmp     dword ptr [esi+30h], 0
0x8375B1: jnz     short loc_8375BB
0x8375B3: call    sub_772DF0
0x8375B8: mov     [esi+30h], eax
0x8375BB: mov     ecx, [esi+30h]
0x8375BE: push    0
0x8375C0: push    1
0x8375C2: push    7
0x8375C4: call    sub_772CD0
0x8375C9: cmp     dword ptr [esi+30h], 0
0x8375CD: jnz     short loc_8375D7
0x8375CF: call    sub_772DF0
0x8375D4: mov     [esi+30h], eax
0x8375D7: mov     ecx, [esi+30h]
0x8375DA: push    0
0x8375DC: push    4
0x8375DE: push    17h
0x8375E0: call    sub_772CD0
0x8375E5: cmp     dword ptr [esi+30h], 0
0x8375E9: jnz     short loc_8375F3
0x8375EB: call    sub_772DF0
0x8375F0: mov     [esi+30h], eax
0x8375F3: mov     ecx, [esi+30h]
0x8375F6: push    0
0x8375F8: push    0
0x8375FA: push    0Eh
0x8375FC: call    sub_772CD0
0x837601: cmp     dword ptr [esi+30h], 0
0x837605: jnz     short loc_83760F
0x837607: call    sub_772DF0
0x83760C: mov     [esi+30h], eax
0x83760F: mov     ecx, [esi+30h]
0x837612: push    0
0x837614: push    0
0x837616: push    34h ; '4'
0x837618: call    sub_772CD0
0x83761D: or      ebx, 0FFFFFFFFh
0x837620: cmp     esi, ds:0B45B40h
0x837626: mov     ds:0B440E0h, ebp
0x83762C: mov     dword ptr ds:0B44770h, 30h ; '0'
0x837636: jz      short loc_837656
0x837638: add     [esi+60h], ebx
0x83763B: jnz     short loc_837644
0x83763D: mov     ecx, esi
0x83763F: call    sub_7604D0
0x837644: mov     esi, ds:0B45B40h
0x83764A: test    esi, esi
0x83764C: mov     [esp+2Ch+var_14], esi
0x837650: jz      short loc_837656
0x837652: add     dword ptr [esi+60h], 1
0x837656: cmp     [esi+18h], ebp
0x837659: jnb     loc_837743
0x83765F: lea     ecx, [esp+2Ch+var_10]
0x837663: push    ecx
0x837664: call    sub_772630
0x837669: add     esp, 4
0x83766C: mov     ebp, eax
0x83766E: cmp     edi, [ebp+0]
0x837671: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x837676: jz      short loc_837697
0x837678: test    edi, edi
0x83767A: jz      short loc_837688
0x83767C: add     [edi+5Ch], ebx
0x83767F: jnz     short loc_837688
0x837681: mov     ecx, edi
0x837683: call    sub_772560
0x837688: mov     edi, [ebp+0]
0x83768B: test    edi, edi
0x83768D: mov     [esp+2Ch+a3], edi
0x837691: jz      short loc_837697
0x837693: add     dword ptr [edi+5Ch], 1
0x837697: mov     eax, [esp+2Ch+var_10]
0x83769B: test    eax, eax
0x83769D: mov     byte ptr [esp+2Ch+var_4], 1
0x8376A2: jz      short loc_8376B6
0x8376A4: add     [eax+5Ch], ebx
0x8376A7: mov     ecx, eax
0x8376A9: add     eax, 5Ch ; '\'
0x8376AC: cmp     dword ptr [eax], 0
0x8376AF: jnz     short loc_8376B6
0x8376B1: call    sub_772560
0x8376B6: push    2
0x8376B8: push    1
0x8376BA: push    0
0x8376BC: push    edi
0x8376BD: call    sub_801110
0x8376C2: mov     edx, [esi+14h]
0x8376C5: add     esp, 10h
0x8376C8: push    edi; a3
0x8376C9: push    edx; a2
0x8376CA: mov     ecx, esi; this
0x8376CC: call    sub_760010
0x8376D1: lea     eax, [esp+2Ch+var_10]
0x8376D5: push    eax
0x8376D6: call    sub_772630
0x8376DB: add     esp, 4
0x8376DE: mov     ebp, eax
0x8376E0: cmp     edi, [ebp+0]
0x8376E3: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x8376E8: jz      short loc_837709
0x8376EA: test    edi, edi
0x8376EC: jz      short loc_8376FA
0x8376EE: add     [edi+5Ch], ebx
0x8376F1: jnz     short loc_8376FA
0x8376F3: mov     ecx, edi
0x8376F5: call    sub_772560
0x8376FA: mov     edi, [ebp+0]
0x8376FD: test    edi, edi
0x8376FF: mov     [esp+2Ch+a3], edi
0x837703: jz      short loc_837709
0x837705: add     dword ptr [edi+5Ch], 1
0x837709: mov     eax, [esp+2Ch+var_10]
0x83770D: test    eax, eax
0x83770F: mov     byte ptr [esp+2Ch+var_4], 1
0x837714: jz      short loc_837728
0x837716: add     [eax+5Ch], ebx
0x837719: mov     ecx, eax
0x83771B: add     eax, 5Ch ; '\'
0x83771E: cmp     dword ptr [eax], 0
0x837721: jnz     short loc_837728
0x837723: call    sub_772560
0x837728: push    2
0x83772A: push    1
0x83772C: push    1
0x83772E: push    edi
0x83772F: call    sub_801110
0x837734: mov     ecx, [esi+14h]
0x837737: add     esp, 10h
0x83773A: push    edi; a3
0x83773B: push    ecx; a2
0x83773C: mov     ecx, esi; this
0x83773E: call    sub_760010
0x837743: mov     eax, ds:0B4546Ch
0x837748: mov     ebp, [esi+58h]
0x83774B: cmp     ebp, eax
0x83774D: mov     ebx, eax
0x83774F: jz      short loc_837783
0x837751: test    ebp, ebp
0x837753: jz      short loc_837772
0x837755: lea     edx, [ebp+4]
0x837758: push    edx; lpAddend
0x837759: call    dword ptr ds:0A2807Ch
0x83775F: test    eax, eax
0x837761: jnz     short loc_837772
0x837763: test    ebp, ebp
0x837765: jz      short loc_837772
0x837767: mov     eax, [ebp+0]
0x83776A: mov     edx, [eax]
0x83776C: push    1
0x83776E: mov     ecx, ebp
0x837770: call    edx
0x837772: test    ebx, ebx
0x837774: mov     [esi+58h], ebx
0x837777: jz      short loc_837783
0x837779: add     ebx, 4
0x83777C: push    ebx; lpAddend
0x83777D: call    dword ptr ds:0A28078h
0x837783: mov     eax, ds:0B45260h
0x837788: mov     ebp, [esi+44h]
0x83778B: cmp     ebp, eax
0x83778D: mov     ebx, eax
0x83778F: jz      short loc_8377C3
0x837791: test    ebp, ebp
0x837793: jz      short loc_8377B2
0x837795: lea     eax, [ebp+4]
0x837798: push    eax; lpAddend
0x837799: call    dword ptr ds:0A2807Ch
0x83779F: test    eax, eax
0x8377A1: jnz     short loc_8377B2
0x8377A3: test    ebp, ebp
0x8377A5: jz      short loc_8377B2
0x8377A7: mov     edx, [ebp+0]
0x8377AA: mov     eax, [edx]
0x8377AC: push    1
0x8377AE: mov     ecx, ebp
0x8377B0: call    eax
0x8377B2: test    ebx, ebx
0x8377B4: mov     [esi+44h], ebx
0x8377B7: jz      short loc_8377C3
0x8377B9: add     ebx, 4
0x8377BC: push    ebx; lpAddend
0x8377BD: call    dword ptr ds:0A28078h
0x8377C3: cmp     dword ptr [esi+30h], 0
0x8377C7: jnz     short loc_8377D1
0x8377C9: call    sub_772DF0
0x8377CE: mov     [esi+30h], eax
0x8377D1: mov     ecx, [esi+30h]
0x8377D4: push    0
0x8377D6: push    1
0x8377D8: push    1Bh
0x8377DA: call    sub_772CD0
0x8377DF: cmp     dword ptr [esi+30h], 0
0x8377E3: jnz     short loc_8377ED
0x8377E5: call    sub_772DF0
0x8377EA: mov     [esi+30h], eax
0x8377ED: mov     ecx, [esi+30h]
0x8377F0: push    0
0x8377F2: push    5
0x8377F4: push    13h
0x8377F6: call    sub_772CD0
0x8377FB: cmp     dword ptr [esi+30h], 0
0x8377FF: jnz     short loc_837809
0x837801: call    sub_772DF0
0x837806: mov     [esi+30h], eax
0x837809: mov     ecx, [esi+30h]
0x83780C: push    0
0x83780E: push    2
0x837810: push    14h
0x837812: call    sub_772CD0
0x837817: cmp     dword ptr [esi+30h], 0
0x83781B: jnz     short loc_837825
0x83781D: call    sub_772DF0
0x837822: mov     [esi+30h], eax
0x837825: mov     ecx, [esi+30h]
0x837828: push    0
0x83782A: push    1
0x83782C: push    0Fh
0x83782E: call    sub_772CD0
0x837833: cmp     dword ptr [esi+30h], 0
0x837837: jnz     short loc_837841
0x837839: call    sub_772DF0
0x83783E: mov     [esi+30h], eax
0x837841: mov     ecx, [esi+30h]
0x837844: push    0
0x837846: push    5
0x837848: push    19h
0x83784A: call    sub_772CD0
0x83784F: cmp     dword ptr [esi+30h], 0
0x837853: jnz     short loc_83785D
0x837855: call    sub_772DF0
0x83785A: mov     [esi+30h], eax
0x83785D: mov     ecx, [esi+30h]
0x837860: push    0
0x837862: push    0
0x837864: push    18h
0x837866: call    sub_772CD0
0x83786B: cmp     dword ptr [esi+30h], 0
0x83786F: jnz     short loc_837879
0x837871: call    sub_772DF0
0x837876: mov     [esi+30h], eax
0x837879: mov     ecx, [esi+30h]
0x83787C: push    0
0x83787E: push    1
0x837880: push    7
0x837882: call    sub_772CD0
0x837887: cmp     dword ptr [esi+30h], 0
0x83788B: jnz     short loc_837895
0x83788D: call    sub_772DF0
0x837892: mov     [esi+30h], eax
0x837895: mov     ecx, [esi+30h]
0x837898: push    0
0x83789A: push    4
0x83789C: push    17h
0x83789E: call    sub_772CD0
0x8378A3: cmp     dword ptr [esi+30h], 0
0x8378A7: jnz     short loc_8378B1
0x8378A9: call    sub_772DF0
0x8378AE: mov     [esi+30h], eax
0x8378B1: mov     ecx, [esi+30h]
0x8378B4: push    0
0x8378B6: push    0
0x8378B8: push    0Eh
0x8378BA: call    sub_772CD0
0x8378BF: cmp     dword ptr [esi+30h], 0
0x8378C3: jnz     short loc_8378CD
0x8378C5: call    sub_772DF0
0x8378CA: mov     [esi+30h], eax
0x8378CD: mov     ecx, [esi+30h]
0x8378D0: push    0
0x8378D2: push    0
0x8378D4: push    34h ; '4'
0x8378D6: call    sub_772CD0
0x8378DB: or      ebx, 0FFFFFFFFh
0x8378DE: cmp     esi, ds:0B45B64h
0x8378E4: mov     dword ptr ds:0B440C0h, 802h
0x8378EE: mov     dword ptr ds:0B44750h, 8
0x8378F8: mov     dword ptr ds:0B44DE0h, 0
0x837902: jz      short loc_837922
0x837904: add     [esi+60h], ebx
0x837907: jnz     short loc_837910
0x837909: mov     ecx, esi
0x83790B: call    sub_7604D0
0x837910: mov     esi, ds:0B45B64h
0x837916: test    esi, esi
0x837918: mov     [esp+2Ch+var_14], esi
0x83791C: jz      short loc_837922
0x83791E: add     dword ptr [esi+60h], 1
0x837922: cmp     dword ptr [esi+18h], 2
0x837926: jnb     loc_837A10
0x83792C: lea     ecx, [esp+2Ch+var_10]
0x837930: push    ecx
0x837931: call    sub_772630
0x837936: add     esp, 4
0x837939: mov     ebp, eax
0x83793B: cmp     edi, [ebp+0]
0x83793E: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x837943: jz      short loc_837964
0x837945: test    edi, edi
0x837947: jz      short loc_837955
0x837949: add     [edi+5Ch], ebx
0x83794C: jnz     short loc_837955
0x83794E: mov     ecx, edi
0x837950: call    sub_772560
0x837955: mov     edi, [ebp+0]
0x837958: test    edi, edi
0x83795A: mov     [esp+2Ch+a3], edi
0x83795E: jz      short loc_837964
0x837960: add     dword ptr [edi+5Ch], 1
0x837964: mov     eax, [esp+2Ch+var_10]
0x837968: test    eax, eax
0x83796A: mov     byte ptr [esp+2Ch+var_4], 1
0x83796F: jz      short loc_837983
0x837971: add     [eax+5Ch], ebx
0x837974: mov     ecx, eax
0x837976: add     eax, 5Ch ; '\'
0x837979: cmp     dword ptr [eax], 0
0x83797C: jnz     short loc_837983
0x83797E: call    sub_772560
0x837983: push    2
0x837985: push    1
0x837987: push    0
0x837989: push    edi
0x83798A: call    sub_801110
0x83798F: mov     edx, [esi+14h]
0x837992: add     esp, 10h
0x837995: push    edi; a3
0x837996: push    edx; a2
0x837997: mov     ecx, esi; this
0x837999: call    sub_760010
0x83799E: lea     eax, [esp+2Ch+var_10]
0x8379A2: push    eax
0x8379A3: call    sub_772630
0x8379A8: add     esp, 4
0x8379AB: mov     ebp, eax
0x8379AD: cmp     edi, [ebp+0]
0x8379B0: mov     byte ptr [esp+2Ch+var_4], 10h
0x8379B5: jz      short loc_8379D6
0x8379B7: test    edi, edi
0x8379B9: jz      short loc_8379C7
0x8379BB: add     [edi+5Ch], ebx
0x8379BE: jnz     short loc_8379C7
0x8379C0: mov     ecx, edi
0x8379C2: call    sub_772560
0x8379C7: mov     edi, [ebp+0]
0x8379CA: test    edi, edi
0x8379CC: mov     [esp+2Ch+a3], edi
0x8379D0: jz      short loc_8379D6
0x8379D2: add     dword ptr [edi+5Ch], 1
0x8379D6: mov     eax, [esp+2Ch+var_10]
0x8379DA: test    eax, eax
0x8379DC: mov     byte ptr [esp+2Ch+var_4], 1
0x8379E1: jz      short loc_8379F5
0x8379E3: add     [eax+5Ch], ebx
0x8379E6: mov     ecx, eax
0x8379E8: add     eax, 5Ch ; '\'
0x8379EB: cmp     dword ptr [eax], 0
0x8379EE: jnz     short loc_8379F5
0x8379F0: call    sub_772560
0x8379F5: push    2
0x8379F7: push    1
0x8379F9: push    1
0x8379FB: push    edi
0x8379FC: call    sub_801110
0x837A01: mov     ecx, [esi+14h]
0x837A04: add     esp, 10h
0x837A07: push    edi; a3
0x837A08: push    ecx; a2
0x837A09: mov     ecx, esi; this
0x837A0B: call    sub_760010
0x837A10: mov     eax, ds:0B45470h
0x837A15: mov     ebp, [esi+58h]
0x837A18: cmp     ebp, eax
0x837A1A: mov     ebx, eax
0x837A1C: jz      short loc_837A50
0x837A1E: test    ebp, ebp
0x837A20: jz      short loc_837A3F
0x837A22: lea     edx, [ebp+4]
0x837A25: push    edx; lpAddend
0x837A26: call    dword ptr ds:0A2807Ch
0x837A2C: test    eax, eax
0x837A2E: jnz     short loc_837A3F
0x837A30: test    ebp, ebp
0x837A32: jz      short loc_837A3F
0x837A34: mov     eax, [ebp+0]
0x837A37: mov     edx, [eax]
0x837A39: push    1
0x837A3B: mov     ecx, ebp
0x837A3D: call    edx
0x837A3F: test    ebx, ebx
0x837A41: mov     [esi+58h], ebx
0x837A44: jz      short loc_837A50
0x837A46: add     ebx, 4
0x837A49: push    ebx; lpAddend
0x837A4A: call    dword ptr ds:0A28078h
0x837A50: mov     eax, ds:0B45264h
0x837A55: mov     ebp, [esi+44h]
0x837A58: cmp     ebp, eax
0x837A5A: mov     ebx, eax
0x837A5C: jz      short loc_837A90
0x837A5E: test    ebp, ebp
0x837A60: jz      short loc_837A7F
0x837A62: lea     eax, [ebp+4]
0x837A65: push    eax; lpAddend
0x837A66: call    dword ptr ds:0A2807Ch
0x837A6C: test    eax, eax
0x837A6E: jnz     short loc_837A7F
0x837A70: test    ebp, ebp
0x837A72: jz      short loc_837A7F
0x837A74: mov     edx, [ebp+0]
0x837A77: mov     eax, [edx]
0x837A79: push    1
0x837A7B: mov     ecx, ebp
0x837A7D: call    eax
0x837A7F: test    ebx, ebx
0x837A81: mov     [esi+44h], ebx
0x837A84: jz      short loc_837A90
0x837A86: add     ebx, 4
0x837A89: push    ebx; lpAddend
0x837A8A: call    dword ptr ds:0A28078h
0x837A90: cmp     dword ptr [esi+30h], 0
0x837A94: jnz     short loc_837A9E
0x837A96: call    sub_772DF0
0x837A9B: mov     [esi+30h], eax
0x837A9E: mov     ecx, [esi+30h]
0x837AA1: push    0
0x837AA3: push    1
0x837AA5: push    1Bh
0x837AA7: call    sub_772CD0
0x837AAC: cmp     dword ptr [esi+30h], 0
0x837AB0: jnz     short loc_837ABA
0x837AB2: call    sub_772DF0
0x837AB7: mov     [esi+30h], eax
0x837ABA: mov     ecx, [esi+30h]
0x837ABD: push    0
0x837ABF: push    5
0x837AC1: push    13h
0x837AC3: call    sub_772CD0
0x837AC8: cmp     dword ptr [esi+30h], 0
0x837ACC: jnz     short loc_837AD6
0x837ACE: call    sub_772DF0
0x837AD3: mov     [esi+30h], eax
0x837AD6: mov     ecx, [esi+30h]
0x837AD9: push    0
0x837ADB: push    2
0x837ADD: push    14h
0x837ADF: call    sub_772CD0
0x837AE4: cmp     dword ptr [esi+30h], 0
0x837AE8: jnz     short loc_837AF2
0x837AEA: call    sub_772DF0
0x837AEF: mov     [esi+30h], eax
0x837AF2: mov     ecx, [esi+30h]
0x837AF5: push    0
0x837AF7: push    1
0x837AF9: push    0Fh
0x837AFB: call    sub_772CD0
0x837B00: cmp     dword ptr [esi+30h], 0
0x837B04: jnz     short loc_837B0E
0x837B06: call    sub_772DF0
0x837B0B: mov     [esi+30h], eax
0x837B0E: mov     ecx, [esi+30h]
0x837B11: push    0
0x837B13: push    5
0x837B15: push    19h
0x837B17: call    sub_772CD0
0x837B1C: cmp     dword ptr [esi+30h], 0
0x837B20: jnz     short loc_837B2A
0x837B22: call    sub_772DF0
0x837B27: mov     [esi+30h], eax
0x837B2A: mov     ecx, [esi+30h]
0x837B2D: push    0
0x837B2F: push    0
0x837B31: push    18h
0x837B33: call    sub_772CD0
0x837B38: cmp     dword ptr [esi+30h], 0
0x837B3C: jnz     short loc_837B46
0x837B3E: call    sub_772DF0
0x837B43: mov     [esi+30h], eax
0x837B46: mov     ecx, [esi+30h]
0x837B49: push    0
0x837B4B: push    1
0x837B4D: push    7
0x837B4F: call    sub_772CD0
0x837B54: cmp     dword ptr [esi+30h], 0
0x837B58: jnz     short loc_837B62
0x837B5A: call    sub_772DF0
0x837B5F: mov     [esi+30h], eax
0x837B62: mov     ecx, [esi+30h]
0x837B65: push    0
0x837B67: push    4
0x837B69: push    17h
0x837B6B: call    sub_772CD0
0x837B70: cmp     dword ptr [esi+30h], 0
0x837B74: jnz     short loc_837B7E
0x837B76: call    sub_772DF0
0x837B7B: mov     [esi+30h], eax
0x837B7E: mov     ecx, [esi+30h]
0x837B81: push    0
0x837B83: push    0
0x837B85: push    0Eh
0x837B87: call    sub_772CD0
0x837B8C: cmp     dword ptr [esi+30h], 0
0x837B90: jnz     short loc_837B9A
0x837B92: call    sub_772DF0
0x837B97: mov     [esi+30h], eax
0x837B9A: mov     ecx, [esi+30h]
0x837B9D: push    0
0x837B9F: push    0
0x837BA1: push    34h ; '4'
0x837BA3: call    sub_772CD0
0x837BA8: or      ebx, 0FFFFFFFFh
0x837BAB: cmp     esi, ds:0B456C4h
0x837BB1: mov     dword ptr ds:0B440E4h, 3802h
0x837BBB: mov     dword ptr ds:0B44774h, 0BCh ; '¼'
0x837BC5: mov     dword ptr ds:0B44E04h, 0
0x837BCF: jz      short loc_837BEF
0x837BD1: add     [esi+60h], ebx
0x837BD4: jnz     short loc_837BDD
0x837BD6: mov     ecx, esi
0x837BD8: call    sub_7604D0
0x837BDD: mov     esi, ds:0B456C4h
0x837BE3: test    esi, esi
0x837BE5: mov     [esp+2Ch+var_14], esi
0x837BE9: jz      short loc_837BEF
0x837BEB: add     dword ptr [esi+60h], 1
0x837BEF: cmp     dword ptr [esi+18h], 4
0x837BF3: jnb     loc_837DC1
0x837BF9: lea     ecx, [esp+2Ch+var_10]
0x837BFD: push    ecx
0x837BFE: call    sub_772630
0x837C03: add     esp, 4
0x837C06: mov     ebp, eax
0x837C08: cmp     edi, [ebp+0]
0x837C0B: mov     byte ptr [esp+2Ch+var_4], 11h
0x837C10: jz      short loc_837C31
0x837C12: test    edi, edi
0x837C14: jz      short loc_837C22
0x837C16: add     [edi+5Ch], ebx
0x837C19: jnz     short loc_837C22
0x837C1B: mov     ecx, edi
0x837C1D: call    sub_772560
0x837C22: mov     edi, [ebp+0]
0x837C25: test    edi, edi
0x837C27: mov     [esp+2Ch+a3], edi
0x837C2B: jz      short loc_837C31
0x837C2D: add     dword ptr [edi+5Ch], 1
0x837C31: mov     eax, [esp+2Ch+var_10]
0x837C35: test    eax, eax
0x837C37: mov     byte ptr [esp+2Ch+var_4], 1
0x837C3C: jz      short loc_837C50
0x837C3E: add     [eax+5Ch], ebx
0x837C41: mov     ecx, eax
0x837C43: add     eax, 5Ch ; '\'
0x837C46: cmp     dword ptr [eax], 0
0x837C49: jnz     short loc_837C50
0x837C4B: call    sub_772560
0x837C50: push    2
0x837C52: push    1
0x837C54: push    0
0x837C56: push    edi
0x837C57: call    sub_801110
0x837C5C: mov     edx, [esi+14h]
0x837C5F: add     esp, 10h
0x837C62: push    edi; a3
0x837C63: push    edx; a2
0x837C64: mov     ecx, esi; this
0x837C66: call    sub_760010
0x837C6B: lea     eax, [esp+2Ch+var_10]
0x837C6F: push    eax
0x837C70: call    sub_772630
0x837C75: add     esp, 4
0x837C78: mov     ebp, eax
0x837C7A: cmp     edi, [ebp+0]
0x837C7D: mov     byte ptr [esp+2Ch+var_4], 12h
0x837C82: jz      short loc_837CA3
0x837C84: test    edi, edi
0x837C86: jz      short loc_837C94
0x837C88: add     [edi+5Ch], ebx
0x837C8B: jnz     short loc_837C94
0x837C8D: mov     ecx, edi
0x837C8F: call    sub_772560
0x837C94: mov     edi, [ebp+0]
0x837C97: test    edi, edi
0x837C99: mov     [esp+2Ch+a3], edi
0x837C9D: jz      short loc_837CA3
0x837C9F: add     dword ptr [edi+5Ch], 1
0x837CA3: mov     eax, [esp+2Ch+var_10]
0x837CA7: test    eax, eax
0x837CA9: mov     byte ptr [esp+2Ch+var_4], 1
0x837CAE: jz      short loc_837CC2
0x837CB0: add     [eax+5Ch], ebx
0x837CB3: mov     ecx, eax
0x837CB5: add     eax, 5Ch ; '\'
0x837CB8: cmp     dword ptr [eax], 0
0x837CBB: jnz     short loc_837CC2
0x837CBD: call    sub_772560
0x837CC2: push    2
0x837CC4: push    1
0x837CC6: push    1
0x837CC8: push    edi
0x837CC9: call    sub_801110
0x837CCE: mov     ecx, [esi+14h]
0x837CD1: add     esp, 10h
0x837CD4: push    edi; a3
0x837CD5: push    ecx; a2
0x837CD6: mov     ecx, esi; this
0x837CD8: call    sub_760010
0x837CDD: lea     edx, [esp+2Ch+var_10]
0x837CE1: push    edx
0x837CE2: call    sub_772630
0x837CE7: add     esp, 4
0x837CEA: mov     ebp, eax
0x837CEC: cmp     edi, [ebp+0]
0x837CEF: mov     byte ptr [esp+2Ch+var_4], 13h
0x837CF4: jz      short loc_837D15
0x837CF6: test    edi, edi
0x837CF8: jz      short loc_837D06
0x837CFA: add     [edi+5Ch], ebx
0x837CFD: jnz     short loc_837D06
0x837CFF: mov     ecx, edi
0x837D01: call    sub_772560
0x837D06: mov     edi, [ebp+0]
0x837D09: test    edi, edi
0x837D0B: mov     [esp+2Ch+a3], edi
0x837D0F: jz      short loc_837D15
0x837D11: add     dword ptr [edi+5Ch], 1
0x837D15: mov     eax, [esp+2Ch+var_10]
0x837D19: test    eax, eax
0x837D1B: mov     byte ptr [esp+2Ch+var_4], 1
0x837D20: jz      short loc_837D34
0x837D22: add     [eax+5Ch], ebx
0x837D25: mov     ecx, eax
0x837D27: add     eax, 5Ch ; '\'
0x837D2A: cmp     dword ptr [eax], 0
0x837D2D: jnz     short loc_837D34
0x837D2F: call    sub_772560
0x837D34: push    2
0x837D36: push    1
0x837D38: push    2
0x837D3A: push    edi
0x837D3B: call    sub_801110
0x837D40: mov     eax, [esi+14h]
0x837D43: add     esp, 10h
0x837D46: push    edi; a3
0x837D47: push    eax; a2
0x837D48: mov     ecx, esi; this
0x837D4A: call    sub_760010
0x837D4F: lea     ecx, [esp+2Ch+var_10]
0x837D53: push    ecx
0x837D54: call    sub_772630
0x837D59: add     esp, 4
0x837D5C: mov     ebp, eax
0x837D5E: cmp     edi, [ebp+0]
0x837D61: mov     byte ptr [esp+2Ch+var_4], 14h
0x837D66: jz      short loc_837D87
0x837D68: test    edi, edi
0x837D6A: jz      short loc_837D78
0x837D6C: add     [edi+5Ch], ebx
0x837D6F: jnz     short loc_837D78
0x837D71: mov     ecx, edi
0x837D73: call    sub_772560
0x837D78: mov     edi, [ebp+0]
0x837D7B: test    edi, edi
0x837D7D: mov     [esp+2Ch+a3], edi
0x837D81: jz      short loc_837D87
0x837D83: add     dword ptr [edi+5Ch], 1
0x837D87: mov     eax, [esp+2Ch+var_10]
0x837D8B: test    eax, eax
0x837D8D: mov     byte ptr [esp+2Ch+var_4], 1
0x837D92: jz      short loc_837DA6
0x837D94: add     [eax+5Ch], ebx
0x837D97: mov     ecx, eax
0x837D99: add     eax, 5Ch ; '\'
0x837D9C: cmp     dword ptr [eax], 0
0x837D9F: jnz     short loc_837DA6
0x837DA1: call    sub_772560
0x837DA6: push    0
0x837DA8: push    3
0x837DAA: push    3
0x837DAC: push    edi
0x837DAD: call    sub_801110
0x837DB2: mov     edx, [esi+14h]
0x837DB5: add     esp, 10h
0x837DB8: push    edi; a3
0x837DB9: push    edx; a2
0x837DBA: mov     ecx, esi; this
0x837DBC: call    sub_760010
0x837DC1: mov     eax, ds:0B4540Ch
0x837DC6: mov     ebp, [esi+58h]
0x837DC9: cmp     ebp, eax
0x837DCB: mov     ebx, eax
0x837DCD: jz      short loc_837E01
0x837DCF: test    ebp, ebp
0x837DD1: jz      short loc_837DF0
0x837DD3: lea     eax, [ebp+4]
0x837DD6: push    eax; lpAddend
0x837DD7: call    dword ptr ds:0A2807Ch
0x837DDD: test    eax, eax
0x837DDF: jnz     short loc_837DF0
0x837DE1: test    ebp, ebp
0x837DE3: jz      short loc_837DF0
0x837DE5: mov     edx, [ebp+0]
0x837DE8: mov     eax, [edx]
0x837DEA: push    1
0x837DEC: mov     ecx, ebp
0x837DEE: call    eax
0x837DF0: test    ebx, ebx
0x837DF2: mov     [esi+58h], ebx
0x837DF5: jz      short loc_837E01
0x837DF7: add     ebx, 4
0x837DFA: push    ebx; lpAddend
0x837DFB: call    dword ptr ds:0A28078h
0x837E01: mov     eax, ds:0B45204h
0x837E06: mov     ebp, [esi+44h]
0x837E09: cmp     ebp, eax
0x837E0B: mov     ebx, eax
0x837E0D: jz      short loc_837E41
0x837E0F: test    ebp, ebp
0x837E11: jz      short loc_837E30
0x837E13: lea     ecx, [ebp+4]
0x837E16: push    ecx; lpAddend
0x837E17: call    dword ptr ds:0A2807Ch
0x837E1D: test    eax, eax
0x837E1F: jnz     short loc_837E30
0x837E21: test    ebp, ebp
0x837E23: jz      short loc_837E30
0x837E25: mov     edx, [ebp+0]
0x837E28: mov     eax, [edx]
0x837E2A: push    1
0x837E2C: mov     ecx, ebp
0x837E2E: call    eax
0x837E30: test    ebx, ebx
0x837E32: mov     [esi+44h], ebx
0x837E35: jz      short loc_837E41
0x837E37: add     ebx, 4
0x837E3A: push    ebx; lpAddend
0x837E3B: call    dword ptr ds:0A28078h
0x837E41: cmp     dword ptr [esi+30h], 0
0x837E45: jnz     short loc_837E4F
0x837E47: call    sub_772DF0
0x837E4C: mov     [esi+30h], eax
0x837E4F: mov     ecx, [esi+30h]
0x837E52: push    0
0x837E54: push    0
0x837E56: push    1Bh
0x837E58: call    sub_772CD0
0x837E5D: cmp     dword ptr [esi+30h], 0
0x837E61: jnz     short loc_837E6B
0x837E63: call    sub_772DF0
0x837E68: mov     [esi+30h], eax
0x837E6B: mov     ecx, [esi+30h]
0x837E6E: push    0
0x837E70: push    0
0x837E72: push    0Fh
0x837E74: call    sub_772CD0
0x837E79: cmp     dword ptr [esi+30h], 0
0x837E7D: jnz     short loc_837E87
0x837E7F: call    sub_772DF0
0x837E84: mov     [esi+30h], eax
0x837E87: mov     ecx, [esi+30h]
0x837E8A: push    0
0x837E8C: push    1
0x837E8E: push    7
0x837E90: call    sub_772CD0
0x837E95: cmp     dword ptr [esi+30h], 0
0x837E99: jnz     short loc_837EA3
0x837E9B: call    sub_772DF0
0x837EA0: mov     [esi+30h], eax
0x837EA3: mov     ecx, [esi+30h]
0x837EA6: push    0
0x837EA8: push    4
0x837EAA: push    17h
0x837EAC: call    sub_772CD0
0x837EB1: cmp     dword ptr [esi+30h], 0
0x837EB5: jnz     short loc_837EBF
0x837EB7: call    sub_772DF0
0x837EBC: mov     [esi+30h], eax
0x837EBF: mov     ecx, [esi+30h]
0x837EC2: push    0
0x837EC4: push    1
0x837EC6: push    0Eh
0x837EC8: call    sub_772CD0
0x837ECD: cmp     dword ptr [esi+30h], 0
0x837ED1: jnz     short loc_837EDB
0x837ED3: call    sub_772DF0
0x837ED8: mov     [esi+30h], eax
0x837EDB: mov     ecx, [esi+30h]
0x837EDE: push    0
0x837EE0: push    0
0x837EE2: push    34h ; '4'
0x837EE4: call    sub_772CD0
0x837EE9: or      ebx, 0FFFFFFFFh
0x837EEC: cmp     esi, ds:0B45B5Ch
0x837EF2: mov     dword ptr ds:0B43C44h, 0F2h ; 'ò'
0x837EFC: mov     dword ptr ds:0B442D4h, 3Ch ; '<'
0x837F06: mov     dword ptr ds:0B435B4h, 0E0h ; 'à'
0x837F10: mov     dword ptr ds:0B44964h, 0Ch
0x837F1A: jz      short loc_837F3A
0x837F1C: add     [esi+60h], ebx
0x837F1F: jnz     short loc_837F28
0x837F21: mov     ecx, esi
0x837F23: call    sub_7604D0
0x837F28: mov     esi, ds:0B45B5Ch
0x837F2E: test    esi, esi
0x837F30: mov     [esp+2Ch+var_14], esi
0x837F34: jz      short loc_837F3A
0x837F36: add     dword ptr [esi+60h], 1
0x837F3A: cmp     dword ptr [esi+18h], 4
0x837F3E: jnb     loc_83810C
0x837F44: lea     ecx, [esp+2Ch+var_10]
0x837F48: push    ecx
0x837F49: call    sub_772630
0x837F4E: add     esp, 4
0x837F51: mov     ebp, eax
0x837F53: cmp     edi, [ebp+0]
0x837F56: mov     byte ptr [esp+2Ch+var_4], 15h
0x837F5B: jz      short loc_837F7C
0x837F5D: test    edi, edi
0x837F5F: jz      short loc_837F6D
0x837F61: add     [edi+5Ch], ebx
0x837F64: jnz     short loc_837F6D
0x837F66: mov     ecx, edi
0x837F68: call    sub_772560
0x837F6D: mov     edi, [ebp+0]
0x837F70: test    edi, edi
0x837F72: mov     [esp+2Ch+a3], edi
0x837F76: jz      short loc_837F7C
0x837F78: add     dword ptr [edi+5Ch], 1
0x837F7C: mov     eax, [esp+2Ch+var_10]
0x837F80: test    eax, eax
0x837F82: mov     byte ptr [esp+2Ch+var_4], 1
0x837F87: jz      short loc_837F9B
0x837F89: add     [eax+5Ch], ebx
0x837F8C: mov     ecx, eax
0x837F8E: add     eax, 5Ch ; '\'
0x837F91: cmp     dword ptr [eax], 0
0x837F94: jnz     short loc_837F9B
0x837F96: call    sub_772560
0x837F9B: push    2
0x837F9D: push    1
0x837F9F: push    0
0x837FA1: push    edi
0x837FA2: call    sub_801110
0x837FA7: mov     edx, [esi+14h]
0x837FAA: add     esp, 10h
0x837FAD: push    edi; a3
0x837FAE: push    edx; a2
0x837FAF: mov     ecx, esi; this
0x837FB1: call    sub_760010
0x837FB6: lea     eax, [esp+2Ch+var_10]
0x837FBA: push    eax
0x837FBB: call    sub_772630
0x837FC0: add     esp, 4
0x837FC3: mov     ebp, eax
0x837FC5: cmp     edi, [ebp+0]
0x837FC8: mov     byte ptr [esp+2Ch+var_4], 16h
0x837FCD: jz      short loc_837FEE
0x837FCF: test    edi, edi
0x837FD1: jz      short loc_837FDF
0x837FD3: add     [edi+5Ch], ebx
0x837FD6: jnz     short loc_837FDF
0x837FD8: mov     ecx, edi
0x837FDA: call    sub_772560
0x837FDF: mov     edi, [ebp+0]
0x837FE2: test    edi, edi
0x837FE4: mov     [esp+2Ch+a3], edi
0x837FE8: jz      short loc_837FEE
0x837FEA: add     dword ptr [edi+5Ch], 1
0x837FEE: mov     eax, [esp+2Ch+var_10]
0x837FF2: test    eax, eax
0x837FF4: mov     byte ptr [esp+2Ch+var_4], 1
0x837FF9: jz      short loc_83800D
0x837FFB: add     [eax+5Ch], ebx
0x837FFE: mov     ecx, eax
0x838000: add     eax, 5Ch ; '\'
0x838003: cmp     dword ptr [eax], 0
0x838006: jnz     short loc_83800D
0x838008: call    sub_772560
0x83800D: push    2
0x83800F: push    1
0x838011: push    1
0x838013: push    edi
0x838014: call    sub_801110
0x838019: mov     ecx, [esi+14h]
0x83801C: add     esp, 10h
0x83801F: push    edi; a3
0x838020: push    ecx; a2
0x838021: mov     ecx, esi; this
0x838023: call    sub_760010
0x838028: lea     edx, [esp+2Ch+var_10]
0x83802C: push    edx
0x83802D: call    sub_772630
0x838032: add     esp, 4
0x838035: mov     ebp, eax
0x838037: cmp     edi, [ebp+0]
0x83803A: mov     byte ptr [esp+2Ch+var_4], 17h
0x83803F: jz      short loc_838060
0x838041: test    edi, edi
0x838043: jz      short loc_838051
0x838045: add     [edi+5Ch], ebx
0x838048: jnz     short loc_838051
0x83804A: mov     ecx, edi
0x83804C: call    sub_772560
0x838051: mov     edi, [ebp+0]
0x838054: test    edi, edi
0x838056: mov     [esp+2Ch+a3], edi
0x83805A: jz      short loc_838060
0x83805C: add     dword ptr [edi+5Ch], 1
0x838060: mov     eax, [esp+2Ch+var_10]
0x838064: test    eax, eax
0x838066: mov     byte ptr [esp+2Ch+var_4], 1
0x83806B: jz      short loc_83807F
0x83806D: add     [eax+5Ch], ebx
0x838070: mov     ecx, eax
0x838072: add     eax, 5Ch ; '\'
0x838075: cmp     dword ptr [eax], 0
0x838078: jnz     short loc_83807F
0x83807A: call    sub_772560
0x83807F: push    2
0x838081: push    1
0x838083: push    2
0x838085: push    edi
0x838086: call    sub_801110
0x83808B: mov     eax, [esi+14h]
0x83808E: add     esp, 10h
0x838091: push    edi; a3
0x838092: push    eax; a2
0x838093: mov     ecx, esi; this
0x838095: call    sub_760010
0x83809A: lea     ecx, [esp+2Ch+var_10]
0x83809E: push    ecx
0x83809F: call    sub_772630
0x8380A4: add     esp, 4
0x8380A7: mov     ebp, eax
0x8380A9: cmp     edi, [ebp+0]
0x8380AC: mov     byte ptr [esp+2Ch+var_4], 18h
0x8380B1: jz      short loc_8380D2
0x8380B3: test    edi, edi
0x8380B5: jz      short loc_8380C3
0x8380B7: add     [edi+5Ch], ebx
0x8380BA: jnz     short loc_8380C3
0x8380BC: mov     ecx, edi
0x8380BE: call    sub_772560
0x8380C3: mov     edi, [ebp+0]
0x8380C6: test    edi, edi
0x8380C8: mov     [esp+2Ch+a3], edi
0x8380CC: jz      short loc_8380D2
0x8380CE: add     dword ptr [edi+5Ch], 1
0x8380D2: mov     eax, [esp+2Ch+var_10]
0x8380D6: test    eax, eax
0x8380D8: mov     byte ptr [esp+2Ch+var_4], 1
0x8380DD: jz      short loc_8380F1
0x8380DF: add     [eax+5Ch], ebx
0x8380E2: mov     ecx, eax
0x8380E4: add     eax, 5Ch ; '\'
0x8380E7: cmp     dword ptr [eax], 0
0x8380EA: jnz     short loc_8380F1
0x8380EC: call    sub_772560
0x8380F1: push    0
0x8380F3: push    3
0x8380F5: push    3
0x8380F7: push    edi
0x8380F8: call    sub_801110
0x8380FD: mov     edx, [esi+14h]
0x838100: add     esp, 10h
0x838103: push    edi; a3
0x838104: push    edx; a2
0x838105: mov     ecx, esi; this
0x838107: call    sub_760010
0x83810C: mov     eax, ds:0B45410h
0x838111: mov     ebp, [esi+58h]
0x838114: cmp     ebp, eax
0x838116: mov     ebx, eax
0x838118: jz      short loc_83814C
0x83811A: test    ebp, ebp
0x83811C: jz      short loc_83813B
0x83811E: lea     eax, [ebp+4]
0x838121: push    eax; lpAddend
0x838122: call    dword ptr ds:0A2807Ch
0x838128: test    eax, eax
0x83812A: jnz     short loc_83813B
0x83812C: test    ebp, ebp
0x83812E: jz      short loc_83813B
0x838130: mov     edx, [ebp+0]
0x838133: mov     eax, [edx]
0x838135: push    1
0x838137: mov     ecx, ebp
0x838139: call    eax
0x83813B: test    ebx, ebx
0x83813D: mov     [esi+58h], ebx
0x838140: jz      short loc_83814C
0x838142: add     ebx, 4
0x838145: push    ebx; lpAddend
0x838146: call    dword ptr ds:0A28078h
0x83814C: mov     eax, ds:0B45208h
0x838151: mov     ebp, [esi+44h]
0x838154: cmp     ebp, eax
0x838156: mov     ebx, eax
0x838158: jz      short loc_83818C
0x83815A: test    ebp, ebp
0x83815C: jz      short loc_83817B
0x83815E: lea     ecx, [ebp+4]
0x838161: push    ecx; lpAddend
0x838162: call    dword ptr ds:0A2807Ch
0x838168: test    eax, eax
0x83816A: jnz     short loc_83817B
0x83816C: test    ebp, ebp
0x83816E: jz      short loc_83817B
0x838170: mov     edx, [ebp+0]
0x838173: mov     eax, [edx]
0x838175: push    1
0x838177: mov     ecx, ebp
0x838179: call    eax
0x83817B: test    ebx, ebx
0x83817D: mov     [esi+44h], ebx
0x838180: jz      short loc_83818C
0x838182: add     ebx, 4
0x838185: push    ebx; lpAddend
0x838186: call    dword ptr ds:0A28078h
0x83818C: cmp     dword ptr [esi+30h], 0
0x838190: jnz     short loc_83819A
0x838192: call    sub_772DF0
0x838197: mov     [esi+30h], eax
0x83819A: mov     ecx, [esi+30h]
0x83819D: push    0
0x83819F: push    1
0x8381A1: push    1Bh
0x8381A3: call    sub_772CD0
0x8381A8: cmp     dword ptr [esi+30h], 0
0x8381AC: jnz     short loc_8381B6
0x8381AE: call    sub_772DF0
0x8381B3: mov     [esi+30h], eax
0x8381B6: mov     ecx, [esi+30h]
0x8381B9: push    0
0x8381BB: push    5
0x8381BD: push    13h
0x8381BF: call    sub_772CD0
0x8381C4: cmp     dword ptr [esi+30h], 0
0x8381C8: jnz     short loc_8381D2
0x8381CA: call    sub_772DF0
0x8381CF: mov     [esi+30h], eax
0x8381D2: mov     ecx, [esi+30h]
0x8381D5: push    0
0x8381D7: push    6
0x8381D9: push    14h
0x8381DB: call    sub_772CD0
0x8381E0: cmp     dword ptr [esi+30h], 0
0x8381E4: jnz     short loc_8381EE
0x8381E6: call    sub_772DF0
0x8381EB: mov     [esi+30h], eax
0x8381EE: mov     ecx, [esi+30h]
0x8381F1: push    0
0x8381F3: push    1
0x8381F5: push    0Fh
0x8381F7: call    sub_772CD0
0x8381FC: cmp     dword ptr [esi+30h], 0
0x838200: jnz     short loc_83820A
0x838202: call    sub_772DF0
0x838207: mov     [esi+30h], eax
0x83820A: mov     ecx, [esi+30h]
0x83820D: push    0
0x83820F: push    5
0x838211: push    19h
0x838213: call    sub_772CD0
0x838218: cmp     dword ptr [esi+30h], 0
0x83821C: jnz     short loc_838226
0x83821E: call    sub_772DF0
0x838223: mov     [esi+30h], eax
0x838226: mov     ecx, [esi+30h]
0x838229: push    0
0x83822B: push    0
0x83822D: push    18h
0x83822F: call    sub_772CD0
0x838234: cmp     dword ptr [esi+30h], 0
0x838238: jnz     short loc_838242
0x83823A: call    sub_772DF0
0x83823F: mov     [esi+30h], eax
0x838242: mov     ecx, [esi+30h]
0x838245: push    0
0x838247: push    1
0x838249: push    7
0x83824B: call    sub_772CD0
0x838250: cmp     dword ptr [esi+30h], 0
0x838254: jnz     short loc_83825E
0x838256: call    sub_772DF0
0x83825B: mov     [esi+30h], eax
0x83825E: mov     ecx, [esi+30h]
0x838261: push    0
0x838263: push    4
0x838265: push    17h
0x838267: call    sub_772CD0
0x83826C: cmp     dword ptr [esi+30h], 0
0x838270: jnz     short loc_83827A
0x838272: call    sub_772DF0
0x838277: mov     [esi+30h], eax
0x83827A: mov     ecx, [esi+30h]
0x83827D: push    0
0x83827F: push    0
0x838281: push    0Eh
0x838283: call    sub_772CD0
0x838288: cmp     dword ptr [esi+30h], 0
0x83828C: jnz     short loc_838296
0x83828E: call    sub_772DF0
0x838293: mov     [esi+30h], eax
0x838296: mov     ecx, [esi+30h]
0x838299: push    0
0x83829B: push    0
0x83829D: push    34h ; '4'
0x83829F: call    sub_772CD0
0x8382A4: or      ebx, 0FFFFFFFFh
0x8382A7: cmp     esi, ds:0B45B44h
0x8382AD: mov     dword ptr ds:0B440DCh, 0F2h ; 'ò'
0x8382B7: mov     dword ptr ds:0B4476Ch, 3Ch ; '<'
0x8382C1: mov     dword ptr ds:0B43A4Ch, 0E0h ; 'à'
0x8382CB: mov     dword ptr ds:0B44DFCh, 0Ch
0x8382D5: jz      short loc_8382F5
0x8382D7: add     [esi+60h], ebx
0x8382DA: jnz     short loc_8382E3
0x8382DC: mov     ecx, esi
0x8382DE: call    sub_7604D0
0x8382E3: mov     esi, ds:0B45B44h
0x8382E9: test    esi, esi
0x8382EB: mov     [esp+2Ch+var_14], esi
0x8382EF: jz      short loc_8382F5
0x8382F1: add     dword ptr [esi+60h], 1
0x8382F5: cmp     dword ptr [esi+18h], 3
0x8382F9: jnb     loc_838462
0x8382FF: lea     ecx, [esp+2Ch+var_10]
0x838303: push    ecx
0x838304: call    sub_772630
0x838309: add     esp, 4
0x83830C: mov     ebp, eax
0x83830E: cmp     edi, [ebp+0]
0x838311: mov     byte ptr [esp+2Ch+var_4], 19h
0x838316: jz      short loc_838337
0x838318: test    edi, edi
0x83831A: jz      short loc_838328
0x83831C: add     [edi+5Ch], ebx
0x83831F: jnz     short loc_838328
0x838321: mov     ecx, edi
0x838323: call    sub_772560
0x838328: mov     edi, [ebp+0]
0x83832B: test    edi, edi
0x83832D: mov     [esp+2Ch+a3], edi
0x838331: jz      short loc_838337
0x838333: add     dword ptr [edi+5Ch], 1
0x838337: mov     eax, [esp+2Ch+var_10]
0x83833B: test    eax, eax
0x83833D: mov     byte ptr [esp+2Ch+var_4], 1
0x838342: jz      short loc_838356
0x838344: add     [eax+5Ch], ebx
0x838347: mov     ecx, eax
0x838349: add     eax, 5Ch ; '\'
0x83834C: cmp     dword ptr [eax], 0
0x83834F: jnz     short loc_838356
0x838351: call    sub_772560
0x838356: push    2
0x838358: push    1
0x83835A: push    0
0x83835C: push    edi
0x83835D: call    sub_801110
0x838362: mov     edx, [esi+14h]
0x838365: add     esp, 10h
0x838368: push    edi; a3
0x838369: push    edx; a2
0x83836A: mov     ecx, esi; this
0x83836C: call    sub_760010
0x838371: lea     eax, [esp+2Ch+var_10]
0x838375: push    eax
0x838376: call    sub_772630
0x83837B: add     esp, 4
0x83837E: mov     ebp, eax
0x838380: cmp     edi, [ebp+0]
0x838383: mov     byte ptr [esp+2Ch+var_4], 1Ah
0x838388: jz      short loc_8383A9
0x83838A: test    edi, edi
0x83838C: jz      short loc_83839A
0x83838E: add     [edi+5Ch], ebx
0x838391: jnz     short loc_83839A
0x838393: mov     ecx, edi
0x838395: call    sub_772560
0x83839A: mov     edi, [ebp+0]
0x83839D: test    edi, edi
0x83839F: mov     [esp+2Ch+a3], edi
0x8383A3: jz      short loc_8383A9
0x8383A5: add     dword ptr [edi+5Ch], 1
0x8383A9: mov     eax, [esp+2Ch+var_10]
0x8383AD: test    eax, eax
0x8383AF: mov     byte ptr [esp+2Ch+var_4], 1
0x8383B4: jz      short loc_8383C8
0x8383B6: add     [eax+5Ch], ebx
0x8383B9: mov     ecx, eax
0x8383BB: add     eax, 5Ch ; '\'
0x8383BE: cmp     dword ptr [eax], 0
0x8383C1: jnz     short loc_8383C8
0x8383C3: call    sub_772560
0x8383C8: push    2
0x8383CA: push    1
0x8383CC: push    1
0x8383CE: push    edi
0x8383CF: call    sub_801110
0x8383D4: mov     ecx, [esi+14h]
0x8383D7: add     esp, 10h
0x8383DA: push    edi; a3
0x8383DB: push    ecx; a2
0x8383DC: mov     ecx, esi; this
0x8383DE: call    sub_760010
0x8383E3: lea     edx, [esp+2Ch+var_10]
0x8383E7: push    edx
0x8383E8: call    sub_772630
0x8383ED: add     esp, 4
0x8383F0: mov     ebp, eax
0x8383F2: cmp     edi, [ebp+0]
0x8383F5: mov     byte ptr [esp+2Ch+var_4], 1Bh
0x8383FA: jz      short loc_83841B
0x8383FC: test    edi, edi
0x8383FE: jz      short loc_83840C
0x838400: add     [edi+5Ch], ebx
0x838403: jnz     short loc_83840C
0x838405: mov     ecx, edi
0x838407: call    sub_772560
0x83840C: mov     edi, [ebp+0]
0x83840F: test    edi, edi
0x838411: mov     [esp+2Ch+a3], edi
0x838415: jz      short loc_83841B
0x838417: add     dword ptr [edi+5Ch], 1
0x83841B: mov     eax, [esp+2Ch+var_10]
0x83841F: test    eax, eax
0x838421: mov     byte ptr [esp+2Ch+var_4], 1
0x838426: jz      short loc_83843A
0x838428: add     [eax+5Ch], ebx
0x83842B: mov     ecx, eax
0x83842D: add     eax, 5Ch ; '\'
0x838430: cmp     dword ptr [eax], 0
0x838433: jnz     short loc_83843A
0x838435: call    sub_772560
0x83843A: push    0
0x83843C: push    3
0x83843E: push    2
0x838440: push    edi
0x838441: call    sub_801110
0x838446: mov     eax, ds:0B43110h
0x83844B: add     esp, 10h
0x83844E: push    eax; a2
0x83844F: mov     ecx, edi; this
0x838451: call    sub_76C910
0x838456: mov     ecx, [esi+14h]
0x838459: push    edi; a3
0x83845A: push    ecx; a2
0x83845B: mov     ecx, esi; this
0x83845D: call    sub_760010
0x838462: mov     eax, ds:0B45414h
0x838467: mov     ebp, [esi+58h]
0x83846A: cmp     ebp, eax
0x83846C: mov     ebx, eax
0x83846E: jz      short loc_8384A2
0x838470: test    ebp, ebp
0x838472: jz      short loc_838491
0x838474: lea     edx, [ebp+4]
0x838477: push    edx; lpAddend
0x838478: call    dword ptr ds:0A2807Ch
0x83847E: test    eax, eax
0x838480: jnz     short loc_838491
0x838482: test    ebp, ebp
0x838484: jz      short loc_838491
0x838486: mov     eax, [ebp+0]
0x838489: mov     edx, [eax]
0x83848B: push    1
0x83848D: mov     ecx, ebp
0x83848F: call    edx
0x838491: test    ebx, ebx
0x838493: mov     [esi+58h], ebx
0x838496: jz      short loc_8384A2
0x838498: add     ebx, 4
0x83849B: push    ebx; lpAddend
0x83849C: call    dword ptr ds:0A28078h
0x8384A2: mov     eax, ds:0B4520Ch
0x8384A7: mov     ebp, [esi+44h]
0x8384AA: cmp     ebp, eax
0x8384AC: mov     ebx, eax
0x8384AE: jz      short loc_8384E2
0x8384B0: test    ebp, ebp
0x8384B2: jz      short loc_8384D1
0x8384B4: lea     eax, [ebp+4]
0x8384B7: push    eax; lpAddend
0x8384B8: call    dword ptr ds:0A2807Ch
0x8384BE: test    eax, eax
0x8384C0: jnz     short loc_8384D1
0x8384C2: test    ebp, ebp
0x8384C4: jz      short loc_8384D1
0x8384C6: mov     edx, [ebp+0]
0x8384C9: mov     eax, [edx]
0x8384CB: push    1
0x8384CD: mov     ecx, ebp
0x8384CF: call    eax
0x8384D1: test    ebx, ebx
0x8384D3: mov     [esi+44h], ebx
0x8384D6: jz      short loc_8384E2
0x8384D8: add     ebx, 4
0x8384DB: push    ebx; lpAddend
0x8384DC: call    dword ptr ds:0A28078h
0x8384E2: cmp     dword ptr [esi+30h], 0
0x8384E6: jnz     short loc_8384F0
0x8384E8: call    sub_772DF0
0x8384ED: mov     [esi+30h], eax
0x8384F0: mov     ecx, [esi+30h]
0x8384F3: push    0
0x8384F5: push    1
0x8384F7: push    1Bh
0x8384F9: call    sub_772CD0
0x8384FE: cmp     dword ptr [esi+30h], 0
0x838502: jnz     short loc_83850C
0x838504: call    sub_772DF0
0x838509: mov     [esi+30h], eax
0x83850C: mov     ecx, [esi+30h]
0x83850F: push    0
0x838511: push    5
0x838513: push    13h
0x838515: call    sub_772CD0
0x83851A: cmp     dword ptr [esi+30h], 0
0x83851E: jnz     short loc_838528
0x838520: call    sub_772DF0
0x838525: mov     [esi+30h], eax
0x838528: mov     ecx, [esi+30h]
0x83852B: push    0
0x83852D: push    2
0x83852F: push    14h
0x838531: call    sub_772CD0
0x838536: cmp     dword ptr [esi+30h], 0
0x83853A: jnz     short loc_838544
0x83853C: call    sub_772DF0
0x838541: mov     [esi+30h], eax
0x838544: mov     ecx, [esi+30h]
0x838547: push    0
0x838549: push    0
0x83854B: push    0Fh
0x83854D: call    sub_772CD0
0x838552: cmp     dword ptr [esi+30h], 0
0x838556: jnz     short loc_838560
0x838558: call    sub_772DF0
0x83855D: mov     [esi+30h], eax
0x838560: mov     ecx, [esi+30h]
0x838563: push    0
0x838565: push    1
0x838567: push    7
0x838569: call    sub_772CD0
0x83856E: cmp     dword ptr [esi+30h], 0
0x838572: jnz     short loc_83857C
0x838574: call    sub_772DF0
0x838579: mov     [esi+30h], eax
0x83857C: mov     ecx, [esi+30h]
0x83857F: push    0
0x838581: mov     ebp, 4
0x838586: push    ebp
0x838587: push    17h
0x838589: call    sub_772CD0
0x83858E: cmp     dword ptr [esi+30h], 0
0x838592: jnz     short loc_83859C
0x838594: call    sub_772DF0
0x838599: mov     [esi+30h], eax
0x83859C: mov     ecx, [esi+30h]
0x83859F: push    0
0x8385A1: push    0
0x8385A3: push    0Eh
0x8385A5: call    sub_772CD0
0x8385AA: cmp     dword ptr [esi+30h], 0
0x8385AE: jnz     short loc_8385B8
0x8385B0: call    sub_772DF0
0x8385B5: mov     [esi+30h], eax
0x8385B8: mov     ecx, [esi+30h]
0x8385BB: push    0
0x8385BD: push    0
0x8385BF: push    34h ; '4'
0x8385C1: call    sub_772CD0
0x8385C6: or      ebx, 0FFFFFFFFh
0x8385C9: cmp     esi, ds:0B45B48h
0x8385CF: mov     dword ptr ds:0B440C4h, 3802h
0x8385D9: mov     dword ptr ds:0B44754h, 3Ch ; '<'
0x8385E3: mov     ds:0B44DE4h, ebp
0x8385E9: jz      short loc_838609
0x8385EB: add     [esi+60h], ebx
0x8385EE: jnz     short loc_8385F7
0x8385F0: mov     ecx, esi
0x8385F2: call    sub_7604D0
0x8385F7: mov     esi, ds:0B45B48h
0x8385FD: test    esi, esi
0x8385FF: mov     [esp+2Ch+var_14], esi
0x838603: jz      short loc_838609
0x838605: add     dword ptr [esi+60h], 1
0x838609: cmp     [esi+18h], ebp
0x83860C: jnb     loc_8387C2
0x838612: lea     ecx, [esp+2Ch+var_10]
0x838616: push    ecx
0x838617: call    sub_772630
0x83861C: add     esp, 4
0x83861F: mov     ebp, eax
0x838621: cmp     edi, [ebp+0]
0x838624: mov     byte ptr [esp+2Ch+var_4], 1Ch
0x838629: jz      short loc_83864A
0x83862B: test    edi, edi
0x83862D: jz      short loc_83863B
0x83862F: add     [edi+5Ch], ebx
0x838632: jnz     short loc_83863B
0x838634: mov     ecx, edi
0x838636: call    sub_772560
0x83863B: mov     edi, [ebp+0]
0x83863E: test    edi, edi
0x838640: mov     [esp+2Ch+a3], edi
0x838644: jz      short loc_83864A
0x838646: add     dword ptr [edi+5Ch], 1
0x83864A: mov     eax, [esp+2Ch+var_10]
0x83864E: test    eax, eax
0x838650: mov     byte ptr [esp+2Ch+var_4], 1
0x838655: jz      short loc_838669
0x838657: add     [eax+5Ch], ebx
0x83865A: mov     ecx, eax
0x83865C: add     eax, 5Ch ; '\'
0x83865F: cmp     dword ptr [eax], 0
0x838662: jnz     short loc_838669
0x838664: call    sub_772560
0x838669: push    2
0x83866B: push    1
0x83866D: push    0
0x83866F: push    edi
0x838670: call    sub_801110
0x838675: mov     edx, [esi+14h]
0x838678: add     esp, 10h
0x83867B: push    edi; a3
0x83867C: push    edx; a2
0x83867D: mov     ecx, esi; this
0x83867F: call    sub_760010
0x838684: lea     eax, [esp+2Ch+var_10]
0x838688: push    eax
0x838689: call    sub_772630
0x83868E: add     esp, 4
0x838691: mov     ebp, eax
0x838693: cmp     edi, [ebp+0]
0x838696: mov     byte ptr [esp+2Ch+var_4], 1Dh
0x83869B: jz      short loc_8386BC
0x83869D: test    edi, edi
0x83869F: jz      short loc_8386AD
0x8386A1: add     [edi+5Ch], ebx
0x8386A4: jnz     short loc_8386AD
0x8386A6: mov     ecx, edi
0x8386A8: call    sub_772560
0x8386AD: mov     edi, [ebp+0]
0x8386B0: test    edi, edi
0x8386B2: mov     [esp+2Ch+a3], edi
0x8386B6: jz      short loc_8386BC
0x8386B8: add     dword ptr [edi+5Ch], 1
0x8386BC: mov     eax, [esp+2Ch+var_10]
0x8386C0: test    eax, eax
0x8386C2: mov     byte ptr [esp+2Ch+var_4], 1
0x8386C7: jz      short loc_8386DB
0x8386C9: add     [eax+5Ch], ebx
0x8386CC: mov     ecx, eax
0x8386CE: add     eax, 5Ch ; '\'
0x8386D1: cmp     dword ptr [eax], 0
0x8386D4: jnz     short loc_8386DB
0x8386D6: call    sub_772560
0x8386DB: push    2
0x8386DD: push    1
0x8386DF: push    1
0x8386E1: push    edi
0x8386E2: call    sub_801110
0x8386E7: mov     ecx, [esi+14h]
0x8386EA: add     esp, 10h
0x8386ED: push    edi; a3
0x8386EE: push    ecx; a2
0x8386EF: mov     ecx, esi; this
0x8386F1: call    sub_760010
0x8386F6: lea     edx, [esp+2Ch+var_10]
0x8386FA: push    edx
0x8386FB: call    sub_772630
0x838700: add     esp, 4
0x838703: mov     ebp, eax
0x838705: cmp     edi, [ebp+0]
0x838708: mov     byte ptr [esp+2Ch+var_4], 1Eh
0x83870D: jz      short loc_83872E
0x83870F: test    edi, edi
0x838711: jz      short loc_83871F
0x838713: add     [edi+5Ch], ebx
0x838716: jnz     short loc_83871F
0x838718: mov     ecx, edi
0x83871A: call    sub_772560
0x83871F: mov     edi, [ebp+0]
0x838722: test    edi, edi
0x838724: mov     [esp+2Ch+a3], edi
0x838728: jz      short loc_83872E
0x83872A: add     dword ptr [edi+5Ch], 1
0x83872E: mov     eax, [esp+2Ch+var_10]
0x838732: test    eax, eax
0x838734: mov     byte ptr [esp+2Ch+var_4], 1
0x838739: jz      short loc_83874D
0x83873B: add     [eax+5Ch], ebx
0x83873E: mov     ecx, eax
0x838740: add     eax, 5Ch ; '\'
0x838743: cmp     dword ptr [eax], 0
0x838746: jnz     short loc_83874D
0x838748: call    sub_772560
0x83874D: push    2
0x83874F: push    1
0x838751: push    2
0x838753: push    edi
0x838754: call    sub_801110
0x838759: mov     eax, [esi+14h]
0x83875C: add     esp, 10h
0x83875F: push    edi; a3
0x838760: push    eax; a2
0x838761: mov     ecx, esi; this
0x838763: call    sub_760010
0x838768: lea     ecx, [esp+2Ch+var_10]
0x83876C: push    ecx
0x83876D: call    sub_772630
0x838772: add     esp, 4
0x838775: push    eax
0x838776: lea     ecx, [esp+30h+a3]
0x83877A: mov     byte ptr [esp+30h+var_4], 1Fh
0x83877F: call    sub_75FAE0
0x838784: mov     eax, [esp+2Ch+var_10]
0x838788: test    eax, eax
0x83878A: mov     byte ptr [esp+2Ch+var_4], 1
0x83878F: jz      short loc_8387A3
0x838791: add     [eax+5Ch], ebx
0x838794: mov     ecx, eax
0x838796: add     eax, 5Ch ; '\'
0x838799: cmp     dword ptr [eax], 0
0x83879C: jnz     short loc_8387A3
0x83879E: call    sub_772560
0x8387A3: mov     edi, [esp+2Ch+a3]
0x8387A7: push    2
0x8387A9: push    1
0x8387AB: push    3
0x8387AD: push    edi
0x8387AE: call    sub_801110
0x8387B3: mov     edx, [esi+14h]
0x8387B6: add     esp, 10h
0x8387B9: push    edi; a3
0x8387BA: push    edx; a2
0x8387BB: mov     ecx, esi; this
0x8387BD: call    sub_760010
0x8387C2: mov     eax, ds:0B45418h
0x8387C7: push    eax; a2
0x8387C8: mov     ecx, esi; this
0x8387CA: call    sub_7AECB0
0x8387CF: mov     ecx, ds:0B45210h
0x8387D5: push    ecx; a2
0x8387D6: mov     ecx, esi; this
0x8387D8: call    sub_7AEC60
0x8387DD: cmp     dword ptr [esi+30h], 0
0x8387E1: jnz     short loc_8387EB
0x8387E3: call    sub_772DF0
0x8387E8: mov     [esi+30h], eax
0x8387EB: mov     ecx, [esi+30h]
0x8387EE: push    0
0x8387F0: push    1
0x8387F2: push    1Bh
0x8387F4: call    sub_772CD0
0x8387F9: cmp     dword ptr [esi+30h], 0
0x8387FD: jnz     short loc_838807
0x8387FF: call    sub_772DF0
0x838804: mov     [esi+30h], eax
0x838807: mov     ecx, [esi+30h]
0x83880A: push    0
0x83880C: push    5
0x83880E: push    13h
0x838810: call    sub_772CD0
0x838815: cmp     dword ptr [esi+30h], 0
0x838819: jnz     short loc_838823
0x83881B: call    sub_772DF0
0x838820: mov     [esi+30h], eax
0x838823: mov     ecx, [esi+30h]
0x838826: push    0
0x838828: push    2
0x83882A: push    14h
0x83882C: call    sub_772CD0
0x838831: cmp     dword ptr [esi+30h], 0
0x838835: jnz     short loc_83883F
0x838837: call    sub_772DF0
0x83883C: mov     [esi+30h], eax
0x83883F: mov     ecx, [esi+30h]
0x838842: push    0
0x838844: push    0
0x838846: push    0Fh
0x838848: call    sub_772CD0
0x83884D: cmp     dword ptr [esi+30h], 0
0x838851: jnz     short loc_83885B
0x838853: call    sub_772DF0
0x838858: mov     [esi+30h], eax
0x83885B: mov     ecx, [esi+30h]
0x83885E: push    0
0x838860: push    1
0x838862: push    7
0x838864: call    sub_772CD0
0x838869: cmp     dword ptr [esi+30h], 0
0x83886D: jnz     short loc_838877
0x83886F: call    sub_772DF0
0x838874: mov     [esi+30h], eax
0x838877: mov     ecx, [esi+30h]
0x83887A: push    0
0x83887C: push    4
0x83887E: push    17h
0x838880: call    sub_772CD0
0x838885: cmp     dword ptr [esi+30h], 0
0x838889: jnz     short loc_838893
0x83888B: call    sub_772DF0
0x838890: mov     [esi+30h], eax
0x838893: mov     ecx, [esi+30h]
0x838896: push    0
0x838898: push    0
0x83889A: push    0Eh
0x83889C: call    sub_772CD0
0x8388A1: cmp     dword ptr [esi+30h], 0
0x8388A5: jnz     short loc_8388AF
0x8388A7: call    sub_772DF0
0x8388AC: mov     [esi+30h], eax
0x8388AF: mov     ecx, [esi+30h]
0x8388B2: push    0
0x8388B4: push    0
0x8388B6: push    34h ; '4'
0x8388B8: call    sub_772CD0
0x8388BD: cmp     esi, ds:0B45B50h
0x8388C3: mov     ebp, 108h
0x8388C8: mov     ebx, 8
0x8388CD: mov     dword ptr ds:0B440C8h, 20082h
0x8388D7: mov     ds:0B44758h, ebp
0x8388DD: mov     dword ptr ds:0B43A38h, 80h ; '€'
0x8388E7: mov     ds:0B44DE8h, ebx
0x8388ED: jz      short loc_83890E
0x8388EF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8388F3: jnz     short loc_8388FC
0x8388F5: mov     ecx, esi
0x8388F7: call    sub_7604D0
0x8388FC: mov     esi, ds:0B45B50h
0x838902: test    esi, esi
0x838904: mov     [esp+2Ch+var_14], esi
0x838908: jz      short loc_83890E
0x83890A: add     dword ptr [esi+60h], 1
0x83890E: cmp     dword ptr [esi+18h], 4
0x838912: jnb     loc_838A92
0x838918: lea     edx, [esp+2Ch+var_10]
0x83891C: push    edx
0x83891D: call    sub_772630
0x838922: add     esp, 4
0x838925: push    eax
0x838926: lea     ecx, [esp+30h+a3]
0x83892A: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x83892F: call    sub_75FAE0
0x838934: mov     eax, [esp+2Ch+var_10]
0x838938: test    eax, eax
0x83893A: mov     byte ptr [esp+2Ch+var_4], 1
0x83893F: jz      short loc_838954
0x838941: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838945: mov     ecx, eax
0x838947: add     eax, 5Ch ; '\'
0x83894A: cmp     dword ptr [eax], 0
0x83894D: jnz     short loc_838954
0x83894F: call    sub_772560
0x838954: mov     edi, [esp+2Ch+a3]
0x838958: push    2
0x83895A: push    1
0x83895C: push    0
0x83895E: push    edi
0x83895F: call    sub_801110
0x838964: mov     eax, [esi+14h]
0x838967: add     esp, 10h
0x83896A: push    edi; a3
0x83896B: push    eax; a2
0x83896C: mov     ecx, esi; this
0x83896E: call    sub_760010
0x838973: lea     ecx, [esp+2Ch+var_10]
0x838977: push    ecx
0x838978: call    sub_772630
0x83897D: add     esp, 4
0x838980: push    eax
0x838981: lea     ecx, [esp+30h+a3]
0x838985: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x83898A: call    sub_75FAE0
0x83898F: mov     eax, [esp+2Ch+var_10]
0x838993: test    eax, eax
0x838995: mov     byte ptr [esp+2Ch+var_4], 1
0x83899A: jz      short loc_8389AF
0x83899C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8389A0: mov     ecx, eax
0x8389A2: add     eax, 5Ch ; '\'
0x8389A5: cmp     dword ptr [eax], 0
0x8389A8: jnz     short loc_8389AF
0x8389AA: call    sub_772560
0x8389AF: mov     edi, [esp+2Ch+a3]
0x8389B3: push    2
0x8389B5: push    1
0x8389B7: push    1
0x8389B9: push    edi
0x8389BA: call    sub_801110
0x8389BF: mov     edx, [esi+14h]
0x8389C2: add     esp, 10h
0x8389C5: push    edi; a3
0x8389C6: push    edx; a2
0x8389C7: mov     ecx, esi; this
0x8389C9: call    sub_760010
0x8389CE: lea     eax, [esp+2Ch+var_10]
0x8389D2: push    eax
0x8389D3: call    sub_772630
0x8389D8: add     esp, 4
0x8389DB: push    eax
0x8389DC: lea     ecx, [esp+30h+a3]
0x8389E0: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x8389E5: call    sub_75FAE0
0x8389EA: mov     eax, [esp+2Ch+var_10]
0x8389EE: test    eax, eax
0x8389F0: mov     byte ptr [esp+2Ch+var_4], 1
0x8389F5: jz      short loc_838A0A
0x8389F7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8389FB: mov     ecx, eax
0x8389FD: add     eax, 5Ch ; '\'
0x838A00: cmp     dword ptr [eax], 0
0x838A03: jnz     short loc_838A0A
0x838A05: call    sub_772560
0x838A0A: mov     edi, [esp+2Ch+a3]
0x838A0E: push    0
0x838A10: push    3
0x838A12: push    2
0x838A14: push    edi
0x838A15: call    sub_801110
0x838A1A: mov     ecx, ds:0B43110h
0x838A20: add     esp, 10h
0x838A23: push    ecx; a2
0x838A24: mov     ecx, edi; this
0x838A26: call    sub_76C910
0x838A2B: mov     edx, [esi+14h]
0x838A2E: push    edi; a3
0x838A2F: push    edx; a2
0x838A30: mov     ecx, esi; this
0x838A32: call    sub_760010
0x838A37: lea     eax, [esp+2Ch+var_10]
0x838A3B: push    eax
0x838A3C: call    sub_772630
0x838A41: add     esp, 4
0x838A44: push    eax
0x838A45: lea     ecx, [esp+30h+a3]
0x838A49: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x838A4E: call    sub_75FAE0
0x838A53: mov     eax, [esp+2Ch+var_10]
0x838A57: test    eax, eax
0x838A59: mov     byte ptr [esp+2Ch+var_4], 1
0x838A5E: jz      short loc_838A73
0x838A60: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838A64: mov     ecx, eax
0x838A66: add     eax, 5Ch ; '\'
0x838A69: cmp     dword ptr [eax], 0
0x838A6C: jnz     short loc_838A73
0x838A6E: call    sub_772560
0x838A73: mov     edi, [esp+2Ch+a3]
0x838A77: push    2
0x838A79: push    1
0x838A7B: push    3
0x838A7D: push    edi
0x838A7E: call    sub_801110
0x838A83: mov     ecx, [esi+14h]
0x838A86: add     esp, 10h
0x838A89: push    edi; a3
0x838A8A: push    ecx; a2
0x838A8B: mov     ecx, esi; this
0x838A8D: call    sub_760010
0x838A92: mov     edx, ds:0B4541Ch
0x838A98: push    edx; a2
0x838A99: mov     ecx, esi; this
0x838A9B: call    sub_7AECB0
0x838AA0: mov     eax, ds:0B45214h
0x838AA5: push    eax; a2
0x838AA6: mov     ecx, esi; this
0x838AA8: call    sub_7AEC60
0x838AAD: cmp     dword ptr [esi+30h], 0
0x838AB1: jnz     short loc_838ABB
0x838AB3: call    sub_772DF0
0x838AB8: mov     [esi+30h], eax
0x838ABB: mov     ecx, [esi+30h]
0x838ABE: push    0
0x838AC0: push    1
0x838AC2: push    1Bh
0x838AC4: call    sub_772CD0
0x838AC9: cmp     dword ptr [esi+30h], 0
0x838ACD: jnz     short loc_838AD7
0x838ACF: call    sub_772DF0
0x838AD4: mov     [esi+30h], eax
0x838AD7: mov     ecx, [esi+30h]
0x838ADA: push    0
0x838ADC: push    5
0x838ADE: push    13h
0x838AE0: call    sub_772CD0
0x838AE5: cmp     dword ptr [esi+30h], 0
0x838AE9: jnz     short loc_838AF3
0x838AEB: call    sub_772DF0
0x838AF0: mov     [esi+30h], eax
0x838AF3: mov     ecx, [esi+30h]
0x838AF6: push    0
0x838AF8: push    2
0x838AFA: push    14h
0x838AFC: call    sub_772CD0
0x838B01: cmp     dword ptr [esi+30h], 0
0x838B05: jnz     short loc_838B0F
0x838B07: call    sub_772DF0
0x838B0C: mov     [esi+30h], eax
0x838B0F: mov     ecx, [esi+30h]
0x838B12: push    0
0x838B14: push    1
0x838B16: push    0Fh
0x838B18: call    sub_772CD0
0x838B1D: cmp     dword ptr [esi+30h], 0
0x838B21: jnz     short loc_838B2B
0x838B23: call    sub_772DF0
0x838B28: mov     [esi+30h], eax
0x838B2B: mov     ecx, [esi+30h]
0x838B2E: push    0
0x838B30: push    1
0x838B32: push    7
0x838B34: call    sub_772CD0
0x838B39: cmp     dword ptr [esi+30h], 0
0x838B3D: jnz     short loc_838B47
0x838B3F: call    sub_772DF0
0x838B44: mov     [esi+30h], eax
0x838B47: mov     ecx, [esi+30h]
0x838B4A: push    0
0x838B4C: push    4
0x838B4E: push    17h
0x838B50: call    sub_772CD0
0x838B55: cmp     dword ptr [esi+30h], 0
0x838B59: jnz     short loc_838B63
0x838B5B: call    sub_772DF0
0x838B60: mov     [esi+30h], eax
0x838B63: mov     ecx, [esi+30h]
0x838B66: push    0
0x838B68: push    0
0x838B6A: push    0Eh
0x838B6C: call    sub_772CD0
0x838B71: cmp     dword ptr [esi+30h], 0
0x838B75: jnz     short loc_838B7F
0x838B77: call    sub_772DF0
0x838B7C: mov     [esi+30h], eax
0x838B7F: mov     ecx, [esi+30h]
0x838B82: push    0
0x838B84: push    0
0x838B86: push    34h ; '4'
0x838B88: call    sub_772CD0
0x838B8D: cmp     esi, ds:0B45B68h
0x838B93: mov     dword ptr ds:0B440D0h, 20802h
0x838B9D: mov     ds:0B44760h, ebp
0x838BA3: jz      short loc_838BC4
0x838BA5: add     dword ptr [esi+60h], 0FFFFFFFFh
0x838BA9: jnz     short loc_838BB2
0x838BAB: mov     ecx, esi
0x838BAD: call    sub_7604D0
0x838BB2: mov     esi, ds:0B45B68h
0x838BB8: test    esi, esi
0x838BBA: mov     [esp+2Ch+var_14], esi
0x838BBE: jz      short loc_838BC4
0x838BC0: add     dword ptr [esi+60h], 1
0x838BC4: cmp     dword ptr [esi+18h], 3
0x838BC8: jnb     loc_838CEC
0x838BCE: lea     ecx, [esp+2Ch+var_10]
0x838BD2: push    ecx
0x838BD3: call    sub_772630
0x838BD8: add     esp, 4
0x838BDB: push    eax
0x838BDC: lea     ecx, [esp+30h+a3]
0x838BE0: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x838BE5: call    sub_75FAE0
0x838BEA: mov     eax, [esp+2Ch+var_10]
0x838BEE: test    eax, eax
0x838BF0: mov     byte ptr [esp+2Ch+var_4], 1
0x838BF5: jz      short loc_838C0A
0x838BF7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838BFB: mov     ecx, eax
0x838BFD: add     eax, 5Ch ; '\'
0x838C00: cmp     dword ptr [eax], 0
0x838C03: jnz     short loc_838C0A
0x838C05: call    sub_772560
0x838C0A: mov     edi, [esp+2Ch+a3]
0x838C0E: push    2
0x838C10: push    1
0x838C12: push    0
0x838C14: push    edi
0x838C15: call    sub_801110
0x838C1A: mov     edx, [esi+14h]
0x838C1D: add     esp, 10h
0x838C20: push    edi; a3
0x838C21: push    edx; a2
0x838C22: mov     ecx, esi; this
0x838C24: call    sub_760010
0x838C29: lea     eax, [esp+2Ch+var_10]
0x838C2D: push    eax
0x838C2E: call    sub_772630
0x838C33: add     esp, 4
0x838C36: push    eax
0x838C37: lea     ecx, [esp+30h+a3]
0x838C3B: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x838C40: call    sub_75FAE0
0x838C45: mov     eax, [esp+2Ch+var_10]
0x838C49: test    eax, eax
0x838C4B: mov     byte ptr [esp+2Ch+var_4], 1
0x838C50: jz      short loc_838C65
0x838C52: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838C56: mov     ecx, eax
0x838C58: add     eax, 5Ch ; '\'
0x838C5B: cmp     dword ptr [eax], 0
0x838C5E: jnz     short loc_838C65
0x838C60: call    sub_772560
0x838C65: mov     edi, [esp+2Ch+a3]
0x838C69: push    2
0x838C6B: push    1
0x838C6D: push    1
0x838C6F: push    edi
0x838C70: call    sub_801110
0x838C75: mov     ecx, [esi+14h]
0x838C78: add     esp, 10h
0x838C7B: push    edi; a3
0x838C7C: push    ecx; a2
0x838C7D: mov     ecx, esi; this
0x838C7F: call    sub_760010
0x838C84: lea     edx, [esp+2Ch+var_10]
0x838C88: push    edx
0x838C89: call    sub_772630
0x838C8E: add     esp, 4
0x838C91: push    eax
0x838C92: lea     ecx, [esp+30h+a3]
0x838C96: mov     byte ptr [esp+30h+var_4], 26h ; '&'
0x838C9B: call    sub_75FAE0
0x838CA0: mov     eax, [esp+2Ch+var_10]
0x838CA4: test    eax, eax
0x838CA6: mov     byte ptr [esp+2Ch+var_4], 1
0x838CAB: jz      short loc_838CC0
0x838CAD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838CB1: mov     ecx, eax
0x838CB3: add     eax, 5Ch ; '\'
0x838CB6: cmp     dword ptr [eax], 0
0x838CB9: jnz     short loc_838CC0
0x838CBB: call    sub_772560
0x838CC0: mov     edi, [esp+2Ch+a3]
0x838CC4: push    0
0x838CC6: push    3
0x838CC8: push    2
0x838CCA: push    edi
0x838CCB: call    sub_801110
0x838CD0: mov     eax, ds:0B43110h
0x838CD5: add     esp, 10h
0x838CD8: push    eax; a2
0x838CD9: mov     ecx, edi; this
0x838CDB: call    sub_76C910
0x838CE0: mov     ecx, [esi+14h]
0x838CE3: push    edi; a3
0x838CE4: push    ecx; a2
0x838CE5: mov     ecx, esi; this
0x838CE7: call    sub_760010
0x838CEC: mov     edx, ds:0B45420h
0x838CF2: push    edx; a2
0x838CF3: mov     ecx, esi; this
0x838CF5: call    sub_7AECB0
0x838CFA: mov     eax, ds:0B45218h
0x838CFF: push    eax; a2
0x838D00: mov     ecx, esi; this
0x838D02: call    sub_7AEC60
0x838D07: cmp     dword ptr [esi+30h], 0
0x838D0B: jnz     short loc_838D15
0x838D0D: call    sub_772DF0
0x838D12: mov     [esi+30h], eax
0x838D15: mov     ecx, [esi+30h]
0x838D18: push    0
0x838D1A: push    1
0x838D1C: push    1Bh
0x838D1E: call    sub_772CD0
0x838D23: cmp     dword ptr [esi+30h], 0
0x838D27: jnz     short loc_838D31
0x838D29: call    sub_772DF0
0x838D2E: mov     [esi+30h], eax
0x838D31: mov     ecx, [esi+30h]
0x838D34: push    0
0x838D36: push    5
0x838D38: push    13h
0x838D3A: call    sub_772CD0
0x838D3F: cmp     dword ptr [esi+30h], 0
0x838D43: jnz     short loc_838D4D
0x838D45: call    sub_772DF0
0x838D4A: mov     [esi+30h], eax
0x838D4D: mov     ecx, [esi+30h]
0x838D50: push    0
0x838D52: push    2
0x838D54: push    14h
0x838D56: call    sub_772CD0
0x838D5B: cmp     dword ptr [esi+30h], 0
0x838D5F: jnz     short loc_838D69
0x838D61: call    sub_772DF0
0x838D66: mov     [esi+30h], eax
0x838D69: mov     ecx, [esi+30h]
0x838D6C: push    0
0x838D6E: push    1
0x838D70: push    0Fh
0x838D72: call    sub_772CD0
0x838D77: cmp     dword ptr [esi+30h], 0
0x838D7B: jnz     short loc_838D85
0x838D7D: call    sub_772DF0
0x838D82: mov     [esi+30h], eax
0x838D85: mov     ecx, [esi+30h]
0x838D88: push    0
0x838D8A: push    5
0x838D8C: push    19h
0x838D8E: call    sub_772CD0
0x838D93: cmp     dword ptr [esi+30h], 0
0x838D97: jnz     short loc_838DA1
0x838D99: call    sub_772DF0
0x838D9E: mov     [esi+30h], eax
0x838DA1: mov     ecx, [esi+30h]
0x838DA4: push    0
0x838DA6: push    0
0x838DA8: push    18h
0x838DAA: call    sub_772CD0
0x838DAF: cmp     dword ptr [esi+30h], 0
0x838DB3: jnz     short loc_838DBD
0x838DB5: call    sub_772DF0
0x838DBA: mov     [esi+30h], eax
0x838DBD: mov     ecx, [esi+30h]
0x838DC0: push    0
0x838DC2: push    1
0x838DC4: push    7
0x838DC6: call    sub_772CD0
0x838DCB: cmp     dword ptr [esi+30h], 0
0x838DCF: jnz     short loc_838DD9
0x838DD1: call    sub_772DF0
0x838DD6: mov     [esi+30h], eax
0x838DD9: mov     ecx, [esi+30h]
0x838DDC: push    0
0x838DDE: push    4
0x838DE0: push    17h
0x838DE2: call    sub_772CD0
0x838DE7: cmp     dword ptr [esi+30h], 0
0x838DEB: jnz     short loc_838DF5
0x838DED: call    sub_772DF0
0x838DF2: mov     [esi+30h], eax
0x838DF5: mov     ecx, [esi+30h]
0x838DF8: push    0
0x838DFA: push    0
0x838DFC: push    0Eh
0x838DFE: call    sub_772CD0
0x838E03: cmp     dword ptr [esi+30h], 0
0x838E07: jnz     short loc_838E11
0x838E09: call    sub_772DF0
0x838E0E: mov     [esi+30h], eax
0x838E11: mov     ecx, [esi+30h]
0x838E14: push    0
0x838E16: push    0
0x838E18: push    34h ; '4'
0x838E1A: call    sub_772CD0
0x838E1F: cmp     esi, ds:0B45B6Ch
0x838E25: mov     dword ptr ds:0B440E8h, 3802h
0x838E2F: mov     dword ptr ds:0B44778h, 0BCh ; '¼'
0x838E39: mov     dword ptr ds:0B44E08h, 0
0x838E43: jz      short loc_838E64
0x838E45: add     dword ptr [esi+60h], 0FFFFFFFFh
0x838E49: jnz     short loc_838E52
0x838E4B: mov     ecx, esi
0x838E4D: call    sub_7604D0
0x838E52: mov     esi, ds:0B45B6Ch
0x838E58: test    esi, esi
0x838E5A: mov     [esp+2Ch+var_14], esi
0x838E5E: jz      short loc_838E64
0x838E60: add     dword ptr [esi+60h], 1
0x838E64: cmp     dword ptr [esi+18h], 4
0x838E68: jnb     loc_838FDA
0x838E6E: lea     ecx, [esp+2Ch+var_10]
0x838E72: push    ecx
0x838E73: call    sub_772630
0x838E78: add     esp, 4
0x838E7B: push    eax
0x838E7C: lea     ecx, [esp+30h+a3]
0x838E80: mov     byte ptr [esp+30h+var_4], 27h ; '''
0x838E85: call    sub_75FAE0
0x838E8A: mov     eax, [esp+2Ch+var_10]
0x838E8E: test    eax, eax
0x838E90: mov     byte ptr [esp+2Ch+var_4], 1
0x838E95: jz      short loc_838EAA
0x838E97: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838E9B: mov     ecx, eax
0x838E9D: add     eax, 5Ch ; '\'
0x838EA0: cmp     dword ptr [eax], 0
0x838EA3: jnz     short loc_838EAA
0x838EA5: call    sub_772560
0x838EAA: mov     edi, [esp+2Ch+a3]
0x838EAE: push    2
0x838EB0: push    1
0x838EB2: push    0
0x838EB4: push    edi
0x838EB5: call    sub_801110
0x838EBA: mov     edx, [esi+14h]
0x838EBD: add     esp, 10h
0x838EC0: push    edi; a3
0x838EC1: push    edx; a2
0x838EC2: mov     ecx, esi; this
0x838EC4: call    sub_760010
0x838EC9: lea     eax, [esp+2Ch+var_10]
0x838ECD: push    eax
0x838ECE: call    sub_772630
0x838ED3: add     esp, 4
0x838ED6: push    eax
0x838ED7: lea     ecx, [esp+30h+a3]
0x838EDB: mov     byte ptr [esp+30h+var_4], 28h ; '('
0x838EE0: call    sub_75FAE0
0x838EE5: mov     eax, [esp+2Ch+var_10]
0x838EE9: test    eax, eax
0x838EEB: mov     byte ptr [esp+2Ch+var_4], 1
0x838EF0: jz      short loc_838F05
0x838EF2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838EF6: mov     ecx, eax
0x838EF8: add     eax, 5Ch ; '\'
0x838EFB: cmp     dword ptr [eax], 0
0x838EFE: jnz     short loc_838F05
0x838F00: call    sub_772560
0x838F05: mov     edi, [esp+2Ch+a3]
0x838F09: push    2
0x838F0B: push    1
0x838F0D: push    1
0x838F0F: push    edi
0x838F10: call    sub_801110
0x838F15: mov     ecx, [esi+14h]
0x838F18: add     esp, 10h
0x838F1B: push    edi; a3
0x838F1C: push    ecx; a2
0x838F1D: mov     ecx, esi; this
0x838F1F: call    sub_760010
0x838F24: lea     edx, [esp+2Ch+var_10]
0x838F28: push    edx
0x838F29: call    sub_772630
0x838F2E: add     esp, 4
0x838F31: push    eax
0x838F32: lea     ecx, [esp+30h+a3]
0x838F36: mov     byte ptr [esp+30h+var_4], 29h ; ')'
0x838F3B: call    sub_75FAE0
0x838F40: mov     eax, [esp+2Ch+var_10]
0x838F44: test    eax, eax
0x838F46: mov     byte ptr [esp+2Ch+var_4], 1
0x838F4B: jz      short loc_838F60
0x838F4D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838F51: mov     ecx, eax
0x838F53: add     eax, 5Ch ; '\'
0x838F56: cmp     dword ptr [eax], 0
0x838F59: jnz     short loc_838F60
0x838F5B: call    sub_772560
0x838F60: mov     edi, [esp+2Ch+a3]
0x838F64: push    2
0x838F66: push    1
0x838F68: push    2
0x838F6A: push    edi
0x838F6B: call    sub_801110
0x838F70: mov     eax, [esi+14h]
0x838F73: add     esp, 10h
0x838F76: push    edi; a3
0x838F77: push    eax; a2
0x838F78: mov     ecx, esi; this
0x838F7A: call    sub_760010
0x838F7F: lea     ecx, [esp+2Ch+var_10]
0x838F83: push    ecx
0x838F84: call    sub_772630
0x838F89: add     esp, 4
0x838F8C: push    eax
0x838F8D: lea     ecx, [esp+30h+a3]
0x838F91: mov     byte ptr [esp+30h+var_4], 2Ah ; '*'
0x838F96: call    sub_75FAE0
0x838F9B: mov     eax, [esp+2Ch+var_10]
0x838F9F: test    eax, eax
0x838FA1: mov     byte ptr [esp+2Ch+var_4], 1
0x838FA6: jz      short loc_838FBB
0x838FA8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x838FAC: mov     ecx, eax
0x838FAE: add     eax, 5Ch ; '\'
0x838FB1: cmp     dword ptr [eax], 0
0x838FB4: jnz     short loc_838FBB
0x838FB6: call    sub_772560
0x838FBB: mov     edi, [esp+2Ch+a3]
0x838FBF: push    2
0x838FC1: push    1
0x838FC3: push    3
0x838FC5: push    edi
0x838FC6: call    sub_801110
0x838FCB: mov     edx, [esi+14h]
0x838FCE: add     esp, 10h
0x838FD1: push    edi; a3
0x838FD2: push    edx; a2
0x838FD3: mov     ecx, esi; this
0x838FD5: call    sub_760010
0x838FDA: mov     eax, ds:0B45424h
0x838FDF: push    eax; a2
0x838FE0: mov     ecx, esi; this
0x838FE2: call    sub_7AECB0
0x838FE7: mov     ecx, ds:0B4521Ch
0x838FED: push    ecx; a2
0x838FEE: mov     ecx, esi; this
0x838FF0: call    sub_7AEC60
0x838FF5: cmp     dword ptr [esi+30h], 0
0x838FF9: jnz     short loc_839003
0x838FFB: call    sub_772DF0
0x839000: mov     [esi+30h], eax
0x839003: mov     ecx, [esi+30h]
0x839006: push    0
0x839008: push    1
0x83900A: push    1Bh
0x83900C: call    sub_772CD0
0x839011: cmp     dword ptr [esi+30h], 0
0x839015: jnz     short loc_83901F
0x839017: call    sub_772DF0
0x83901C: mov     [esi+30h], eax
0x83901F: mov     ecx, [esi+30h]
0x839022: push    0
0x839024: push    5
0x839026: push    13h
0x839028: call    sub_772CD0
0x83902D: cmp     dword ptr [esi+30h], 0
0x839031: jnz     short loc_83903B
0x839033: call    sub_772DF0
0x839038: mov     [esi+30h], eax
0x83903B: mov     ecx, [esi+30h]
0x83903E: push    0
0x839040: push    2
0x839042: push    14h
0x839044: call    sub_772CD0
0x839049: cmp     dword ptr [esi+30h], 0
0x83904D: jnz     short loc_839057
0x83904F: call    sub_772DF0
0x839054: mov     [esi+30h], eax
0x839057: mov     ecx, [esi+30h]
0x83905A: push    0
0x83905C: push    1
0x83905E: push    0Fh
0x839060: call    sub_772CD0
0x839065: cmp     dword ptr [esi+30h], 0
0x839069: jnz     short loc_839073
0x83906B: call    sub_772DF0
0x839070: mov     [esi+30h], eax
0x839073: mov     ecx, [esi+30h]
0x839076: push    0
0x839078: push    5
0x83907A: push    19h
0x83907C: call    sub_772CD0
0x839081: cmp     dword ptr [esi+30h], 0
0x839085: jnz     short loc_83908F
0x839087: call    sub_772DF0
0x83908C: mov     [esi+30h], eax
0x83908F: mov     ecx, [esi+30h]
0x839092: push    0
0x839094: push    0
0x839096: push    18h
0x839098: call    sub_772CD0
0x83909D: cmp     dword ptr [esi+30h], 0
0x8390A1: jnz     short loc_8390AB
0x8390A3: call    sub_772DF0
0x8390A8: mov     [esi+30h], eax
0x8390AB: mov     ecx, [esi+30h]
0x8390AE: push    0
0x8390B0: push    1
0x8390B2: push    7
0x8390B4: call    sub_772CD0
0x8390B9: cmp     dword ptr [esi+30h], 0
0x8390BD: jnz     short loc_8390C7
0x8390BF: call    sub_772DF0
0x8390C4: mov     [esi+30h], eax
0x8390C7: mov     ecx, [esi+30h]
0x8390CA: push    0
0x8390CC: push    4
0x8390CE: push    17h
0x8390D0: call    sub_772CD0
0x8390D5: cmp     dword ptr [esi+30h], 0
0x8390D9: jnz     short loc_8390E3
0x8390DB: call    sub_772DF0
0x8390E0: mov     [esi+30h], eax
0x8390E3: mov     ecx, [esi+30h]
0x8390E6: push    0
0x8390E8: push    0
0x8390EA: push    0Eh
0x8390EC: call    sub_772CD0
0x8390F1: cmp     dword ptr [esi+30h], 0
0x8390F5: jnz     short loc_8390FF
0x8390F7: call    sub_772DF0
0x8390FC: mov     [esi+30h], eax
0x8390FF: mov     ecx, [esi+30h]
0x839102: push    0
0x839104: push    0
0x839106: push    34h ; '4'
0x839108: call    sub_772CD0
0x83910D: cmp     esi, ds:0B45B70h
0x839113: mov     ebp, 138h
0x839118: mov     dword ptr ds:0B440ECh, 20082h
0x839122: mov     ds:0B4477Ch, ebp
0x839128: mov     dword ptr ds:0B43A5Ch, 80h ; '€'
0x839132: mov     ds:0B44E0Ch, ebx
0x839138: jz      short loc_839159
0x83913A: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83913E: jnz     short loc_839147
0x839140: mov     ecx, esi
0x839142: call    sub_7604D0
0x839147: mov     esi, ds:0B45B70h
0x83914D: test    esi, esi
0x83914F: mov     [esp+2Ch+var_14], esi
0x839153: jz      short loc_839159
0x839155: add     dword ptr [esi+60h], 1
0x839159: mov     ebx, 4
0x83915E: cmp     [esi+18h], ebx
0x839161: jnb     loc_8392E1
0x839167: lea     edx, [esp+2Ch+var_10]
0x83916B: push    edx
0x83916C: call    sub_772630
0x839171: add     esp, 4
0x839174: push    eax
0x839175: lea     ecx, [esp+30h+a3]
0x839179: mov     byte ptr [esp+30h+var_4], 2Bh ; '+'
0x83917E: call    sub_75FAE0
0x839183: mov     eax, [esp+2Ch+var_10]
0x839187: test    eax, eax
0x839189: mov     byte ptr [esp+2Ch+var_4], 1
0x83918E: jz      short loc_8391A3
0x839190: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839194: mov     ecx, eax
0x839196: add     eax, 5Ch ; '\'
0x839199: cmp     dword ptr [eax], 0
0x83919C: jnz     short loc_8391A3
0x83919E: call    sub_772560
0x8391A3: mov     edi, [esp+2Ch+a3]
0x8391A7: push    2
0x8391A9: push    1
0x8391AB: push    0
0x8391AD: push    edi
0x8391AE: call    sub_801110
0x8391B3: mov     eax, [esi+14h]
0x8391B6: add     esp, 10h
0x8391B9: push    edi; a3
0x8391BA: push    eax; a2
0x8391BB: mov     ecx, esi; this
0x8391BD: call    sub_760010
0x8391C2: lea     ecx, [esp+2Ch+var_10]
0x8391C6: push    ecx
0x8391C7: call    sub_772630
0x8391CC: add     esp, 4
0x8391CF: push    eax
0x8391D0: lea     ecx, [esp+30h+a3]
0x8391D4: mov     byte ptr [esp+30h+var_4], 2Ch ; ','
0x8391D9: call    sub_75FAE0
0x8391DE: mov     eax, [esp+2Ch+var_10]
0x8391E2: test    eax, eax
0x8391E4: mov     byte ptr [esp+2Ch+var_4], 1
0x8391E9: jz      short loc_8391FE
0x8391EB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8391EF: mov     ecx, eax
0x8391F1: add     eax, 5Ch ; '\'
0x8391F4: cmp     dword ptr [eax], 0
0x8391F7: jnz     short loc_8391FE
0x8391F9: call    sub_772560
0x8391FE: mov     edi, [esp+2Ch+a3]
0x839202: push    2
0x839204: push    1
0x839206: push    1
0x839208: push    edi
0x839209: call    sub_801110
0x83920E: mov     edx, [esi+14h]
0x839211: add     esp, 10h
0x839214: push    edi; a3
0x839215: push    edx; a2
0x839216: mov     ecx, esi; this
0x839218: call    sub_760010
0x83921D: lea     eax, [esp+2Ch+var_10]
0x839221: push    eax
0x839222: call    sub_772630
0x839227: add     esp, 4
0x83922A: push    eax
0x83922B: lea     ecx, [esp+30h+a3]
0x83922F: mov     byte ptr [esp+30h+var_4], 2Dh ; '-'
0x839234: call    sub_75FAE0
0x839239: mov     eax, [esp+2Ch+var_10]
0x83923D: test    eax, eax
0x83923F: mov     byte ptr [esp+2Ch+var_4], 1
0x839244: jz      short loc_839259
0x839246: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83924A: mov     ecx, eax
0x83924C: add     eax, 5Ch ; '\'
0x83924F: cmp     dword ptr [eax], 0
0x839252: jnz     short loc_839259
0x839254: call    sub_772560
0x839259: mov     edi, [esp+2Ch+a3]
0x83925D: push    0
0x83925F: push    3
0x839261: push    2
0x839263: push    edi
0x839264: call    sub_801110
0x839269: mov     ecx, ds:0B43110h
0x83926F: add     esp, 10h
0x839272: push    ecx; a2
0x839273: mov     ecx, edi; this
0x839275: call    sub_76C910
0x83927A: mov     edx, [esi+14h]
0x83927D: push    edi; a3
0x83927E: push    edx; a2
0x83927F: mov     ecx, esi; this
0x839281: call    sub_760010
0x839286: lea     eax, [esp+2Ch+var_10]
0x83928A: push    eax
0x83928B: call    sub_772630
0x839290: add     esp, 4
0x839293: push    eax
0x839294: lea     ecx, [esp+30h+a3]
0x839298: mov     byte ptr [esp+30h+var_4], 2Eh ; '.'
0x83929D: call    sub_75FAE0
0x8392A2: mov     eax, [esp+2Ch+var_10]
0x8392A6: test    eax, eax
0x8392A8: mov     byte ptr [esp+2Ch+var_4], 1
0x8392AD: jz      short loc_8392C2
0x8392AF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8392B3: mov     ecx, eax
0x8392B5: add     eax, 5Ch ; '\'
0x8392B8: cmp     dword ptr [eax], 0
0x8392BB: jnz     short loc_8392C2
0x8392BD: call    sub_772560
0x8392C2: mov     edi, [esp+2Ch+a3]
0x8392C6: push    2
0x8392C8: push    1
0x8392CA: push    3
0x8392CC: push    edi
0x8392CD: call    sub_801110
0x8392D2: mov     ecx, [esi+14h]
0x8392D5: add     esp, 10h
0x8392D8: push    edi; a3
0x8392D9: push    ecx; a2
0x8392DA: mov     ecx, esi; this
0x8392DC: call    sub_760010
0x8392E1: mov     edx, ds:0B45428h
0x8392E7: push    edx; a2
0x8392E8: mov     ecx, esi; this
0x8392EA: call    sub_7AECB0
0x8392EF: mov     eax, ds:0B45220h
0x8392F4: push    eax; a2
0x8392F5: mov     ecx, esi; this
0x8392F7: call    sub_7AEC60
0x8392FC: cmp     dword ptr [esi+30h], 0
0x839300: jnz     short loc_83930A
0x839302: call    sub_772DF0
0x839307: mov     [esi+30h], eax
0x83930A: mov     ecx, [esi+30h]
0x83930D: push    0
0x83930F: push    1
0x839311: push    1Bh
0x839313: call    sub_772CD0
0x839318: cmp     dword ptr [esi+30h], 0
0x83931C: jnz     short loc_839326
0x83931E: call    sub_772DF0
0x839323: mov     [esi+30h], eax
0x839326: mov     ecx, [esi+30h]
0x839329: push    0
0x83932B: push    5
0x83932D: push    13h
0x83932F: call    sub_772CD0
0x839334: cmp     dword ptr [esi+30h], 0
0x839338: jnz     short loc_839342
0x83933A: call    sub_772DF0
0x83933F: mov     [esi+30h], eax
0x839342: mov     ecx, [esi+30h]
0x839345: push    0
0x839347: push    2
0x839349: push    14h
0x83934B: call    sub_772CD0
0x839350: cmp     dword ptr [esi+30h], 0
0x839354: jnz     short loc_83935E
0x839356: call    sub_772DF0
0x83935B: mov     [esi+30h], eax
0x83935E: mov     ecx, [esi+30h]
0x839361: push    0
0x839363: push    1
0x839365: push    0Fh
0x839367: call    sub_772CD0
0x83936C: cmp     dword ptr [esi+30h], 0
0x839370: jnz     short loc_83937A
0x839372: call    sub_772DF0
0x839377: mov     [esi+30h], eax
0x83937A: mov     ecx, [esi+30h]
0x83937D: push    0
0x83937F: push    5
0x839381: push    19h
0x839383: call    sub_772CD0
0x839388: cmp     dword ptr [esi+30h], 0
0x83938C: jnz     short loc_839396
0x83938E: call    sub_772DF0
0x839393: mov     [esi+30h], eax
0x839396: mov     ecx, [esi+30h]
0x839399: push    0
0x83939B: push    0
0x83939D: push    18h
0x83939F: call    sub_772CD0
0x8393A4: cmp     dword ptr [esi+30h], 0
0x8393A8: jnz     short loc_8393B2
0x8393AA: call    sub_772DF0
0x8393AF: mov     [esi+30h], eax
0x8393B2: mov     ecx, [esi+30h]
0x8393B5: push    0
0x8393B7: push    1
0x8393B9: push    7
0x8393BB: call    sub_772CD0
0x8393C0: cmp     dword ptr [esi+30h], 0
0x8393C4: jnz     short loc_8393CE
0x8393C6: call    sub_772DF0
0x8393CB: mov     [esi+30h], eax
0x8393CE: mov     ecx, [esi+30h]
0x8393D1: push    0
0x8393D3: push    ebx
0x8393D4: push    17h
0x8393D6: call    sub_772CD0
0x8393DB: cmp     dword ptr [esi+30h], 0
0x8393DF: jnz     short loc_8393E9
0x8393E1: call    sub_772DF0
0x8393E6: mov     [esi+30h], eax
0x8393E9: mov     ecx, [esi+30h]
0x8393EC: push    0
0x8393EE: push    0
0x8393F0: push    0Eh
0x8393F2: call    sub_772CD0
0x8393F7: cmp     dword ptr [esi+30h], 0
0x8393FB: jnz     short loc_839405
0x8393FD: call    sub_772DF0
0x839402: mov     [esi+30h], eax
0x839405: mov     ecx, [esi+30h]
0x839408: push    0
0x83940A: push    0
0x83940C: push    34h ; '4'
0x83940E: call    sub_772CD0
0x839413: cmp     esi, ds:0B45B4Ch
0x839419: mov     dword ptr ds:0B440F0h, 20802h
0x839423: mov     ds:0B44780h, ebp
0x839429: jz      short loc_83944A
0x83942B: add     dword ptr [esi+60h], 0FFFFFFFFh
0x83942F: jnz     short loc_839438
0x839431: mov     ecx, esi
0x839433: call    sub_7604D0
0x839438: mov     esi, ds:0B45B4Ch
0x83943E: test    esi, esi
0x839440: mov     [esp+2Ch+var_14], esi
0x839444: jz      short loc_83944A
0x839446: add     dword ptr [esi+60h], 1
0x83944A: cmp     [esi+18h], ebx
0x83944D: jnb     loc_8395BF
0x839453: lea     ecx, [esp+2Ch+var_10]
0x839457: push    ecx
0x839458: call    sub_772630
0x83945D: add     esp, 4
0x839460: push    eax
0x839461: lea     ecx, [esp+30h+a3]
0x839465: mov     byte ptr [esp+30h+var_4], 2Fh ; '/'
0x83946A: call    sub_75FAE0
0x83946F: mov     eax, [esp+2Ch+var_10]
0x839473: test    eax, eax
0x839475: mov     byte ptr [esp+2Ch+var_4], 1
0x83947A: jz      short loc_83948F
0x83947C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839480: mov     ecx, eax
0x839482: add     eax, 5Ch ; '\'
0x839485: cmp     dword ptr [eax], 0
0x839488: jnz     short loc_83948F
0x83948A: call    sub_772560
0x83948F: mov     edi, [esp+2Ch+a3]
0x839493: push    2
0x839495: push    1
0x839497: push    0
0x839499: push    edi
0x83949A: call    sub_801110
0x83949F: mov     edx, [esi+14h]
0x8394A2: add     esp, 10h
0x8394A5: push    edi; a3
0x8394A6: push    edx; a2
0x8394A7: mov     ecx, esi; this
0x8394A9: call    sub_760010
0x8394AE: lea     eax, [esp+2Ch+var_10]
0x8394B2: push    eax
0x8394B3: call    sub_772630
0x8394B8: add     esp, 4
0x8394BB: push    eax
0x8394BC: lea     ecx, [esp+30h+a3]
0x8394C0: mov     byte ptr [esp+30h+var_4], 30h ; '0'
0x8394C5: call    sub_75FAE0
0x8394CA: mov     eax, [esp+2Ch+var_10]
0x8394CE: test    eax, eax
0x8394D0: mov     byte ptr [esp+2Ch+var_4], 1
0x8394D5: jz      short loc_8394EA
0x8394D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8394DB: mov     ecx, eax
0x8394DD: add     eax, 5Ch ; '\'
0x8394E0: cmp     dword ptr [eax], 0
0x8394E3: jnz     short loc_8394EA
0x8394E5: call    sub_772560
0x8394EA: mov     edi, [esp+2Ch+a3]
0x8394EE: push    2
0x8394F0: push    1
0x8394F2: push    1
0x8394F4: push    edi
0x8394F5: call    sub_801110
0x8394FA: mov     ecx, [esi+14h]
0x8394FD: add     esp, 10h
0x839500: push    edi; a3
0x839501: push    ecx; a2
0x839502: mov     ecx, esi; this
0x839504: call    sub_760010
0x839509: lea     edx, [esp+2Ch+var_10]
0x83950D: push    edx
0x83950E: call    sub_772630
0x839513: add     esp, 4
0x839516: push    eax
0x839517: lea     ecx, [esp+30h+a3]
0x83951B: mov     byte ptr [esp+30h+var_4], 31h ; '1'
0x839520: call    sub_75FAE0
0x839525: mov     eax, [esp+2Ch+var_10]
0x839529: test    eax, eax
0x83952B: mov     byte ptr [esp+2Ch+var_4], 1
0x839530: jz      short loc_839545
0x839532: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839536: mov     ecx, eax
0x839538: add     eax, 5Ch ; '\'
0x83953B: cmp     dword ptr [eax], 0
0x83953E: jnz     short loc_839545
0x839540: call    sub_772560
0x839545: mov     edi, [esp+2Ch+a3]
0x839549: push    2
0x83954B: push    1
0x83954D: push    2
0x83954F: push    edi
0x839550: call    sub_801110
0x839555: mov     eax, [esi+14h]
0x839558: add     esp, 10h
0x83955B: push    edi; a3
0x83955C: push    eax; a2
0x83955D: mov     ecx, esi; this
0x83955F: call    sub_760010
0x839564: lea     ecx, [esp+2Ch+var_10]
0x839568: push    ecx
0x839569: call    sub_772630
0x83956E: add     esp, 4
0x839571: push    eax
0x839572: lea     ecx, [esp+30h+a3]
0x839576: mov     byte ptr [esp+30h+var_4], 32h ; '2'
0x83957B: call    sub_75FAE0
0x839580: mov     eax, [esp+2Ch+var_10]
0x839584: test    eax, eax
0x839586: mov     byte ptr [esp+2Ch+var_4], 1
0x83958B: jz      short loc_8395A0
0x83958D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839591: mov     ecx, eax
0x839593: add     eax, 5Ch ; '\'
0x839596: cmp     dword ptr [eax], 0
0x839599: jnz     short loc_8395A0
0x83959B: call    sub_772560
0x8395A0: mov     edi, [esp+2Ch+a3]
0x8395A4: push    0
0x8395A6: push    3
0x8395A8: push    3
0x8395AA: push    edi
0x8395AB: call    sub_801110
0x8395B0: mov     edx, [esi+14h]
0x8395B3: add     esp, 10h
0x8395B6: push    edi; a3
0x8395B7: push    edx; a2
0x8395B8: mov     ecx, esi; this
0x8395BA: call    sub_760010
0x8395BF: mov     eax, ds:0B4542Ch
0x8395C4: push    eax; a2
0x8395C5: mov     ecx, esi; this
0x8395C7: call    sub_7AECB0
0x8395CC: mov     ecx, ds:0B45224h
0x8395D2: push    ecx; a2
0x8395D3: mov     ecx, esi; this
0x8395D5: call    sub_7AEC60
0x8395DA: cmp     dword ptr [esi+30h], 0
0x8395DE: jnz     short loc_8395E8
0x8395E0: call    sub_772DF0
0x8395E5: mov     [esi+30h], eax
0x8395E8: mov     ecx, [esi+30h]
0x8395EB: push    0
0x8395ED: push    1
0x8395EF: push    1Bh
0x8395F1: call    sub_772CD0
0x8395F6: cmp     dword ptr [esi+30h], 0
0x8395FA: jnz     short loc_839604
0x8395FC: call    sub_772DF0
0x839601: mov     [esi+30h], eax
0x839604: mov     ecx, [esi+30h]
0x839607: push    0
0x839609: push    5
0x83960B: push    13h
0x83960D: call    sub_772CD0
0x839612: cmp     dword ptr [esi+30h], 0
0x839616: jnz     short loc_839620
0x839618: call    sub_772DF0
0x83961D: mov     [esi+30h], eax
0x839620: mov     ecx, [esi+30h]
0x839623: push    0
0x839625: push    2
0x839627: push    14h
0x839629: call    sub_772CD0
0x83962E: cmp     dword ptr [esi+30h], 0
0x839632: jnz     short loc_83963C
0x839634: call    sub_772DF0
0x839639: mov     [esi+30h], eax
0x83963C: mov     ecx, [esi+30h]
0x83963F: push    0
0x839641: push    1
0x839643: push    0Fh
0x839645: call    sub_772CD0
0x83964A: cmp     dword ptr [esi+30h], 0
0x83964E: jnz     short loc_839658
0x839650: call    sub_772DF0
0x839655: mov     [esi+30h], eax
0x839658: mov     ecx, [esi+30h]
0x83965B: push    0
0x83965D: push    5
0x83965F: push    19h
0x839661: call    sub_772CD0
0x839666: cmp     dword ptr [esi+30h], 0
0x83966A: jnz     short loc_839674
0x83966C: call    sub_772DF0
0x839671: mov     [esi+30h], eax
0x839674: mov     ecx, [esi+30h]
0x839677: push    0
0x839679: push    0
0x83967B: push    18h
0x83967D: call    sub_772CD0
0x839682: cmp     dword ptr [esi+30h], 0
0x839686: jnz     short loc_839690
0x839688: call    sub_772DF0
0x83968D: mov     [esi+30h], eax
0x839690: mov     ecx, [esi+30h]
0x839693: push    0
0x839695: push    1
0x839697: push    7
0x839699: call    sub_772CD0
0x83969E: cmp     dword ptr [esi+30h], 0
0x8396A2: jnz     short loc_8396AC
0x8396A4: call    sub_772DF0
0x8396A9: mov     [esi+30h], eax
0x8396AC: mov     ecx, [esi+30h]
0x8396AF: push    0
0x8396B1: push    ebx
0x8396B2: push    17h
0x8396B4: call    sub_772CD0
0x8396B9: cmp     dword ptr [esi+30h], 0
0x8396BD: jnz     short loc_8396C7
0x8396BF: call    sub_772DF0
0x8396C4: mov     [esi+30h], eax
0x8396C7: mov     ecx, [esi+30h]
0x8396CA: push    0
0x8396CC: push    0
0x8396CE: push    0Eh
0x8396D0: call    sub_772CD0
0x8396D5: cmp     dword ptr [esi+30h], 0
0x8396D9: jnz     short loc_8396E3
0x8396DB: call    sub_772DF0
0x8396E0: mov     [esi+30h], eax
0x8396E3: mov     ecx, [esi+30h]
0x8396E6: push    0
0x8396E8: push    0
0x8396EA: push    34h ; '4'
0x8396EC: call    sub_772CD0
0x8396F1: cmp     esi, ds:0B45B74h
0x8396F7: mov     ebx, 200F2h
0x8396FC: mov     ebp, 0E0h ; 'à'
0x839701: mov     ds:0B440CCh, ebx
0x839707: mov     dword ptr ds:0B4475Ch, 138h
0x839711: mov     ds:0B43A3Ch, ebp
0x839717: mov     dword ptr ds:0B44DECh, 8
0x839721: jz      short loc_839742
0x839723: add     dword ptr [esi+60h], 0FFFFFFFFh
0x839727: jnz     short loc_839730
0x839729: mov     ecx, esi
0x83972B: call    sub_7604D0
0x839730: mov     esi, ds:0B45B74h
0x839736: test    esi, esi
0x839738: mov     [esp+2Ch+var_14], esi
0x83973C: jz      short loc_839742
0x83973E: add     dword ptr [esi+60h], 1
0x839742: cmp     dword ptr [esi+18h], 4
0x839746: jnb     loc_8398B8
0x83974C: lea     edx, [esp+2Ch+var_10]
0x839750: push    edx
0x839751: call    sub_772630
0x839756: add     esp, 4
0x839759: push    eax
0x83975A: lea     ecx, [esp+30h+a3]
0x83975E: mov     byte ptr [esp+30h+var_4], 33h ; '3'
0x839763: call    sub_75FAE0
0x839768: mov     eax, [esp+2Ch+var_10]
0x83976C: test    eax, eax
0x83976E: mov     byte ptr [esp+2Ch+var_4], 1
0x839773: jz      short loc_839788
0x839775: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x839779: mov     ecx, eax
0x83977B: add     eax, 5Ch ; '\'
0x83977E: cmp     dword ptr [eax], 0
0x839781: jnz     short loc_839788
0x839783: call    sub_772560
0x839788: mov     edi, [esp+2Ch+a3]
0x83978C: push    2
0x83978E: push    1
0x839790: push    0
0x839792: push    edi
0x839793: call    sub_801110
0x839798: mov     eax, [esi+14h]
0x83979B: add     esp, 10h
0x83979E: push    edi; a3
0x83979F: push    eax; a2
0x8397A0: mov     ecx, esi; this
0x8397A2: call    sub_760010
0x8397A7: lea     ecx, [esp+2Ch+var_10]
0x8397AB: push    ecx
0x8397AC: call    sub_772630
0x8397B1: add     esp, 4
0x8397B4: push    eax
0x8397B5: lea     ecx, [esp+30h+a3]
0x8397B9: mov     byte ptr [esp+30h+var_4], 34h ; '4'
0x8397BE: call    sub_75FAE0
0x8397C3: mov     eax, [esp+2Ch+var_10]
0x8397C7: test    eax, eax
0x8397C9: mov     byte ptr [esp+2Ch+var_4], 1
0x8397CE: jz      short loc_8397E3
0x8397D0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8397D4: mov     ecx, eax
0x8397D6: add     eax, 5Ch ; '\'
0x8397D9: cmp     dword ptr [eax], 0
0x8397DC: jnz     short loc_8397E3
0x8397DE: call    sub_772560
0x8397E3: mov     edi, [esp+2Ch+a3]
0x8397E7: push    2
0x8397E9: push    1
0x8397EB: push    1
0x8397ED: push    edi
0x8397EE: call    sub_801110
0x8397F3: mov     edx, [esi+14h]
0x8397F6: add     esp, 10h
0x8397F9: push    edi; a3
0x8397FA: push    edx; a2
0x8397FB: mov     ecx, esi; this
0x8397FD: call    sub_760010
0x839802: lea     eax, [esp+2Ch+var_10]
0x839806: push    eax
0x839807: call    sub_772630
0x83980C: add     esp, 4
0x83980F: push    eax
0x839810: lea     ecx, [esp+30h+a3]
0x839814: mov     byte ptr [esp+30h+var_4], 35h ; '5'
0x839819: call    sub_75FAE0
0x83981E: mov     eax, [esp+2Ch+var_10]
0x839822: test    eax, eax
0x839824: mov     byte ptr [esp+2Ch+var_4], 1
0x839829: jz      short loc_83983E
0x83982B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83982F: mov     ecx, eax
0x839831: add     eax, 5Ch ; '\'
0x839834: cmp     dword ptr [eax], 0
0x839837: jnz     short loc_83983E
0x839839: call    sub_772560
0x83983E: mov     edi, [esp+2Ch+a3]
0x839842: push    2
0x839844: push    1
0x839846: push    2
0x839848: push    edi
0x839849: call    sub_801110
0x83984E: mov     ecx, [esi+14h]
0x839851: add     esp, 10h
0x839854: push    edi; a3
0x839855: push    ecx; a2
0x839856: mov     ecx, esi; this
0x839858: call    sub_760010
0x83985D: lea     edx, [esp+2Ch+var_10]
0x839861: push    edx
0x839862: call    sub_772630
0x839867: add     esp, 4
0x83986A: push    eax
0x83986B: lea     ecx, [esp+30h+a3]
0x83986F: mov     byte ptr [esp+30h+var_4], 36h ; '6'
0x839874: call    sub_75FAE0
0x839879: mov     eax, [esp+2Ch+var_10]
0x83987D: test    eax, eax
0x83987F: mov     byte ptr [esp+2Ch+var_4], 1
0x839884: jz      short loc_839899
0x839886: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x83988A: mov     ecx, eax
0x83988C: add     eax, 5Ch ; '\'
0x83988F: cmp     dword ptr [eax], 0
0x839892: jnz     short loc_839899
0x839894: call    sub_772560
0x839899: mov     edi, [esp+2Ch+a3]
0x83989D: push    0
0x83989F: push    3
0x8398A1: push    3
0x8398A3: push    edi
0x8398A4: call    sub_801110
0x8398A9: mov     eax, [esi+14h]
0x8398AC: add     esp, 10h
0x8398AF: push    edi; a3
0x8398B0: push    eax; a2
0x8398B1: mov     ecx, esi; this
0x8398B3: call    sub_760010
0x8398B8: mov     ecx, ds:0B45430h
0x8398BE: push    ecx; a2
0x8398BF: mov     ecx, esi; this
0x8398C1: call    sub_7AECB0
0x8398C6: mov     edx, ds:0B45228h
0x8398CC: push    edx; a2
0x8398CD: mov     ecx, esi; this
0x8398CF: call    sub_7AEC60
0x8398D4: cmp     dword ptr [esi+30h], 0
0x8398D8: jnz     short loc_8398E2
0x8398DA: call    sub_772DF0
0x8398DF: mov     [esi+30h], eax
0x8398E2: mov     ecx, [esi+30h]
0x8398E5: push    0
0x8398E7: push    1
0x8398E9: push    1Bh
0x8398EB: call    sub_772CD0
0x8398F0: cmp     dword ptr [esi+30h], 0
0x8398F4: jnz     short loc_8398FE
0x8398F6: call    sub_772DF0
0x8398FB: mov     [esi+30h], eax
0x8398FE: mov     ecx, [esi+30h]
0x839901: push    0
0x839903: push    5
0x839905: push    13h
0x839907: call    sub_772CD0
0x83990C: cmp     dword ptr [esi+30h], 0
0x839910: jnz     short loc_83991A
0x839912: call    sub_772DF0
0x839917: mov     [esi+30h], eax
0x83991A: mov     ecx, [esi+30h]
0x83991D: push    0
0x83991F: push    2
0x839921: push    14h
0x839923: call    sub_772CD0
0x839928: cmp     dword ptr [esi+30h], 0
0x83992C: jnz     short loc_839936
0x83992E: call    sub_772DF0
0x839933: mov     [esi+30h], eax
0x839936: mov     ecx, [esi+30h]
0x839939: push    0
0x83993B: push    1
0x83993D: push    0Fh
0x83993F: call    sub_772CD0
0x839944: cmp     dword ptr [esi+30h], 0
0x839948: jnz     short loc_839952
0x83994A: call    sub_772DF0
0x83994F: mov     [esi+30h], eax
0x839952: mov     ecx, [esi+30h]
0x839955: push    0
0x839957: push    5
0x839959: push    19h
0x83995B: call    sub_772CD0
0x839960: cmp     dword ptr [esi+30h], 0
0x839964: jnz     short loc_83996E
0x839966: call    sub_772DF0
0x83996B: mov     [esi+30h], eax
0x83996E: mov     ecx, [esi+30h]
0x839971: push    0
0x839973: push    0
0x839975: push    18h
0x839977: call    sub_772CD0
0x83997C: cmp     dword ptr [esi+30h], 0
0x839980: jnz     short loc_83998A
0x839982: call    sub_772DF0
0x839987: mov     [esi+30h], eax
0x83998A: mov     ecx, [esi+30h]
0x83998D: push    0
0x83998F: push    1
0x839991: push    7
0x839993: call    sub_772CD0
0x839998: cmp     dword ptr [esi+30h], 0
0x83999C: jnz     short loc_8399A6
0x83999E: call    sub_772DF0
0x8399A3: mov     [esi+30h], eax
0x8399A6: mov     ecx, [esi+30h]
0x8399A9: push    0
0x8399AB: push    4
0x8399AD: push    17h
0x8399AF: call    sub_772CD0
0x8399B4: cmp     dword ptr [esi+30h], 0
0x8399B8: jnz     short loc_8399C2
0x8399BA: call    sub_772DF0
0x8399BF: mov     [esi+30h], eax
0x8399C2: mov     ecx, [esi+30h]
0x8399C5: push    0
0x8399C7: push    0
0x8399C9: push    0Eh
0x8399CB: call    sub_772CD0
0x8399D0: cmp     dword ptr [esi+30h], 0
0x8399D4: jnz     short loc_8399DE
0x8399D6: call    sub_772DF0
0x8399DB: mov     [esi+30h], eax
0x8399DE: mov     ecx, [esi+30h]
0x8399E1: push    0
0x8399E3: push    0
0x8399E5: push    34h ; '4'
0x8399E7: call    sub_772CD0
0x8399EC: mov     ds:0B440F4h, ebx
0x8399F2: or      ebx, 0FFFFFFFFh
0x8399F5: test    edi, edi
0x8399F7: mov     dword ptr ds:0B44784h, 138h
0x839A01: mov     ds:0B43A64h, ebp
0x839A07: mov     dword ptr ds:0B44E14h, 8
0x839A11: mov     byte ptr [esp+2Ch+var_4], 0
0x839A16: jz      short loc_839A24
0x839A18: add     [edi+5Ch], ebx
0x839A1B: jnz     short loc_839A24
0x839A1D: mov     ecx, edi
0x839A1F: call    sub_772560
0x839A24: add     [esi+60h], ebx
0x839A27: mov     [esp+2Ch+var_4], ebx
0x839A2B: jnz     short loc_839A34
0x839A2D: mov     ecx, esi
0x839A2F: call    sub_7604D0
0x839A34: mov     ecx, dword ptr [esp+2Ch+var_C]
0x839A38: mov     large fs:0, ecx
0x839A3F: pop     ecx
0x839A40: pop     edi
0x839A41: pop     esi
0x839A42: pop     ebp
0x839A43: pop     ebx
0x839A44: add     esp, 18h
0x839A47: retn
