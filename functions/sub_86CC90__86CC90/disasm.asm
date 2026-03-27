0x86CC90: push    0FFFFFFFFh
0x86CC92: push    offset SEH_864A60
0x86CC97: mov     eax, large fs:0
0x86CC9D: push    eax
0x86CC9E: sub     esp, 10h
0x86CCA1: push    ebx
0x86CCA2: push    ebp
0x86CCA3: push    esi
0x86CCA4: push    edi
0x86CCA5: mov     eax, ds:0B30AACh
0x86CCAA: xor     eax, esp
0x86CCAC: push    eax
0x86CCAD: lea     eax, [esp+30h+var_C]
0x86CCB1: mov     large fs:0, eax
0x86CCB7: mov     [esp+30h+var_18], ecx
0x86CCBB: xor     esi, esi
0x86CCBD: xor     edi, edi
0x86CCBF: mov     [esp+30h+var_14], esi
0x86CCC3: mov     [esp+30h+var_4], edi
0x86CCC7: mov     [esp+30h+a3], edi
0x86CCCB: mov     eax, ds:0B476A0h
0x86CCD0: cmp     eax, edi
0x86CCD2: mov     ebx, 1
0x86CCD7: mov     byte ptr [esp+30h+var_4], bl
0x86CCDB: jz      short loc_86CCEA
0x86CCDD: mov     esi, eax
0x86CCDF: cmp     esi, edi
0x86CCE1: mov     [esp+30h+var_14], esi
0x86CCE5: jz      short loc_86CCEA
0x86CCE7: add     [esi+60h], ebx
0x86CCEA: mov     eax, [esi+18h]
0x86CCED: or      ebp, 0FFFFFFFFh
0x86CCF0: cmp     eax, 8
0x86CCF3: jnb     loc_86D05C
0x86CCF9: lea     eax, [esp+30h+var_10]
0x86CCFD: push    eax
0x86CCFE: call    sub_772630
0x86CD03: add     esp, 4
0x86CD06: mov     eax, [eax]
0x86CD08: test    eax, eax
0x86CD0A: jz      short loc_86CD15
0x86CD0C: mov     edi, eax
0x86CD0E: add     [edi+5Ch], ebx
0x86CD11: mov     [esp+30h+a3], edi
0x86CD15: mov     eax, [esp+30h+var_10]
0x86CD19: test    eax, eax
0x86CD1B: mov     byte ptr [esp+30h+var_4], 1
0x86CD20: jz      short loc_86CD34
0x86CD22: add     [eax+5Ch], ebp
0x86CD25: mov     ecx, eax
0x86CD27: add     eax, 5Ch ; '\'
0x86CD2A: cmp     dword ptr [eax], 0
0x86CD2D: jnz     short loc_86CD34
0x86CD2F: call    sub_772560
0x86CD34: push    2
0x86CD36: push    1
0x86CD38: push    0
0x86CD3A: push    edi
0x86CD3B: call    sub_801110
0x86CD40: add     esp, 10h
0x86CD43: push    edi; a3
0x86CD44: push    0; a2
0x86CD46: mov     ecx, esi; this
0x86CD48: call    sub_760010
0x86CD4D: lea     ecx, [esp+30h+var_10]
0x86CD51: push    ecx
0x86CD52: call    sub_772630
0x86CD57: add     esp, 4
0x86CD5A: mov     ebx, eax
0x86CD5C: cmp     edi, [ebx]
0x86CD5E: mov     byte ptr [esp+30h+var_4], 3
0x86CD63: jz      short loc_86CD83
0x86CD65: test    edi, edi
0x86CD67: jz      short loc_86CD75
0x86CD69: add     [edi+5Ch], ebp
0x86CD6C: jnz     short loc_86CD75
0x86CD6E: mov     ecx, edi
0x86CD70: call    sub_772560
0x86CD75: mov     edi, [ebx]
0x86CD77: test    edi, edi
0x86CD79: mov     [esp+30h+a3], edi
0x86CD7D: jz      short loc_86CD83
0x86CD7F: add     dword ptr [edi+5Ch], 1
0x86CD83: mov     eax, [esp+30h+var_10]
0x86CD87: test    eax, eax
0x86CD89: mov     byte ptr [esp+30h+var_4], 1
0x86CD8E: jz      short loc_86CDA2
0x86CD90: add     [eax+5Ch], ebp
0x86CD93: mov     ecx, eax
0x86CD95: add     eax, 5Ch ; '\'
0x86CD98: cmp     dword ptr [eax], 0
0x86CD9B: jnz     short loc_86CDA2
0x86CD9D: call    sub_772560
0x86CDA2: push    2
0x86CDA4: push    1
0x86CDA6: push    1
0x86CDA8: push    edi
0x86CDA9: call    sub_801110
0x86CDAE: add     esp, 10h
0x86CDB1: push    edi; a3
0x86CDB2: push    1; a2
0x86CDB4: mov     ecx, esi; this
0x86CDB6: call    sub_760010
0x86CDBB: lea     edx, [esp+30h+var_10]
0x86CDBF: push    edx
0x86CDC0: call    sub_772630
0x86CDC5: add     esp, 4
0x86CDC8: mov     ebx, eax
0x86CDCA: cmp     edi, [ebx]
0x86CDCC: mov     byte ptr [esp+30h+var_4], 4
0x86CDD1: jz      short loc_86CDF1
0x86CDD3: test    edi, edi
0x86CDD5: jz      short loc_86CDE3
0x86CDD7: add     [edi+5Ch], ebp
0x86CDDA: jnz     short loc_86CDE3
0x86CDDC: mov     ecx, edi
0x86CDDE: call    sub_772560
0x86CDE3: mov     edi, [ebx]
0x86CDE5: test    edi, edi
0x86CDE7: mov     [esp+30h+a3], edi
0x86CDEB: jz      short loc_86CDF1
0x86CDED: add     dword ptr [edi+5Ch], 1
0x86CDF1: mov     eax, [esp+30h+var_10]
0x86CDF5: test    eax, eax
0x86CDF7: mov     byte ptr [esp+30h+var_4], 1
0x86CDFC: jz      short loc_86CE10
0x86CDFE: add     [eax+5Ch], ebp
0x86CE01: mov     ecx, eax
0x86CE03: add     eax, 5Ch ; '\'
0x86CE06: cmp     dword ptr [eax], 0
0x86CE09: jnz     short loc_86CE10
0x86CE0B: call    sub_772560
0x86CE10: push    2
0x86CE12: push    1
0x86CE14: push    2
0x86CE16: push    edi
0x86CE17: call    sub_801110
0x86CE1C: add     esp, 10h
0x86CE1F: push    edi; a3
0x86CE20: push    2; a2
0x86CE22: mov     ecx, esi; this
0x86CE24: call    sub_760010
0x86CE29: lea     eax, [esp+30h+var_10]
0x86CE2D: push    eax
0x86CE2E: call    sub_772630
0x86CE33: add     esp, 4
0x86CE36: mov     ebx, eax
0x86CE38: cmp     edi, [ebx]
0x86CE3A: mov     byte ptr [esp+30h+var_4], 5
0x86CE3F: jz      short loc_86CE5F
0x86CE41: test    edi, edi
0x86CE43: jz      short loc_86CE51
0x86CE45: add     [edi+5Ch], ebp
0x86CE48: jnz     short loc_86CE51
0x86CE4A: mov     ecx, edi
0x86CE4C: call    sub_772560
0x86CE51: mov     edi, [ebx]
0x86CE53: test    edi, edi
0x86CE55: mov     [esp+30h+a3], edi
0x86CE59: jz      short loc_86CE5F
0x86CE5B: add     dword ptr [edi+5Ch], 1
0x86CE5F: mov     eax, [esp+30h+var_10]
0x86CE63: test    eax, eax
0x86CE65: mov     byte ptr [esp+30h+var_4], 1
0x86CE6A: jz      short loc_86CE7E
0x86CE6C: add     [eax+5Ch], ebp
0x86CE6F: mov     ecx, eax
0x86CE71: add     eax, 5Ch ; '\'
0x86CE74: cmp     dword ptr [eax], 0
0x86CE77: jnz     short loc_86CE7E
0x86CE79: call    sub_772560
0x86CE7E: push    2
0x86CE80: push    1
0x86CE82: push    3
0x86CE84: push    edi
0x86CE85: call    sub_801110
0x86CE8A: add     esp, 10h
0x86CE8D: push    edi; a3
0x86CE8E: push    3; a2
0x86CE90: mov     ecx, esi; this
0x86CE92: call    sub_760010
0x86CE97: lea     ecx, [esp+30h+var_10]
0x86CE9B: push    ecx
0x86CE9C: call    sub_772630
0x86CEA1: add     esp, 4
0x86CEA4: mov     ebx, eax
0x86CEA6: cmp     edi, [ebx]
0x86CEA8: mov     byte ptr [esp+30h+var_4], 6
0x86CEAD: jz      short loc_86CECD
0x86CEAF: test    edi, edi
0x86CEB1: jz      short loc_86CEBF
0x86CEB3: add     [edi+5Ch], ebp
0x86CEB6: jnz     short loc_86CEBF
0x86CEB8: mov     ecx, edi
0x86CEBA: call    sub_772560
0x86CEBF: mov     edi, [ebx]
0x86CEC1: test    edi, edi
0x86CEC3: mov     [esp+30h+a3], edi
0x86CEC7: jz      short loc_86CECD
0x86CEC9: add     dword ptr [edi+5Ch], 1
0x86CECD: mov     eax, [esp+30h+var_10]
0x86CED1: test    eax, eax
0x86CED3: mov     byte ptr [esp+30h+var_4], 1
0x86CED8: jz      short loc_86CEEC
0x86CEDA: add     [eax+5Ch], ebp
0x86CEDD: mov     ecx, eax
0x86CEDF: add     eax, 5Ch ; '\'
0x86CEE2: cmp     dword ptr [eax], 0
0x86CEE5: jnz     short loc_86CEEC
0x86CEE7: call    sub_772560
0x86CEEC: push    2
0x86CEEE: push    1
0x86CEF0: push    4
0x86CEF2: push    edi
0x86CEF3: call    sub_801110
0x86CEF8: add     esp, 10h
0x86CEFB: push    edi; a3
0x86CEFC: push    4; a2
0x86CEFE: mov     ecx, esi; this
0x86CF00: call    sub_760010
0x86CF05: lea     edx, [esp+30h+var_10]
0x86CF09: push    edx
0x86CF0A: call    sub_772630
0x86CF0F: add     esp, 4
0x86CF12: mov     ebx, eax
0x86CF14: cmp     edi, [ebx]
0x86CF16: mov     byte ptr [esp+30h+var_4], 7
0x86CF1B: jz      short loc_86CF3B
0x86CF1D: test    edi, edi
0x86CF1F: jz      short loc_86CF2D
0x86CF21: add     [edi+5Ch], ebp
0x86CF24: jnz     short loc_86CF2D
0x86CF26: mov     ecx, edi
0x86CF28: call    sub_772560
0x86CF2D: mov     edi, [ebx]
0x86CF2F: test    edi, edi
0x86CF31: mov     [esp+30h+a3], edi
0x86CF35: jz      short loc_86CF3B
0x86CF37: add     dword ptr [edi+5Ch], 1
0x86CF3B: mov     eax, [esp+30h+var_10]
0x86CF3F: test    eax, eax
0x86CF41: mov     byte ptr [esp+30h+var_4], 1
0x86CF46: jz      short loc_86CF5A
0x86CF48: add     [eax+5Ch], ebp
0x86CF4B: mov     ecx, eax
0x86CF4D: add     eax, 5Ch ; '\'
0x86CF50: cmp     dword ptr [eax], 0
0x86CF53: jnz     short loc_86CF5A
0x86CF55: call    sub_772560
0x86CF5A: push    0
0x86CF5C: push    3
0x86CF5E: push    5
0x86CF60: push    edi
0x86CF61: call    sub_801110
0x86CF66: mov     eax, ds:0B43110h
0x86CF6B: add     esp, 10h
0x86CF6E: push    eax; a2
0x86CF6F: mov     ecx, edi; this
0x86CF71: call    sub_76C910
0x86CF76: push    edi; a3
0x86CF77: push    5; a2
0x86CF79: mov     ecx, esi; this
0x86CF7B: call    sub_760010
0x86CF80: lea     ecx, [esp+30h+var_10]
0x86CF84: push    ecx
0x86CF85: call    sub_772630
0x86CF8A: add     esp, 4
0x86CF8D: mov     ebx, eax
0x86CF8F: cmp     edi, [ebx]
0x86CF91: mov     byte ptr [esp+30h+var_4], 8
0x86CF96: jz      short loc_86CFB6
0x86CF98: test    edi, edi
0x86CF9A: jz      short loc_86CFA8
0x86CF9C: add     [edi+5Ch], ebp
0x86CF9F: jnz     short loc_86CFA8
0x86CFA1: mov     ecx, edi
0x86CFA3: call    sub_772560
0x86CFA8: mov     edi, [ebx]
0x86CFAA: test    edi, edi
0x86CFAC: mov     [esp+30h+a3], edi
0x86CFB0: jz      short loc_86CFB6
0x86CFB2: add     dword ptr [edi+5Ch], 1
0x86CFB6: mov     eax, [esp+30h+var_10]
0x86CFBA: test    eax, eax
0x86CFBC: mov     byte ptr [esp+30h+var_4], 1
0x86CFC1: jz      short loc_86CFD5
0x86CFC3: add     [eax+5Ch], ebp
0x86CFC6: mov     ecx, eax
0x86CFC8: add     eax, 5Ch ; '\'
0x86CFCB: cmp     dword ptr [eax], 0
0x86CFCE: jnz     short loc_86CFD5
0x86CFD0: call    sub_772560
0x86CFD5: push    2
0x86CFD7: push    1
0x86CFD9: push    6
0x86CFDB: push    edi
0x86CFDC: call    sub_801110
0x86CFE1: add     esp, 10h
0x86CFE4: push    edi; a3
0x86CFE5: push    6; a2
0x86CFE7: mov     ecx, esi; this
0x86CFE9: call    sub_760010
0x86CFEE: lea     edx, [esp+30h+var_10]
0x86CFF2: push    edx
0x86CFF3: call    sub_772630
0x86CFF8: add     esp, 4
0x86CFFB: mov     ebx, eax
0x86CFFD: cmp     edi, [ebx]
0x86CFFF: mov     byte ptr [esp+30h+var_4], 9
0x86D004: jz      short loc_86D024
0x86D006: test    edi, edi
0x86D008: jz      short loc_86D016
0x86D00A: add     [edi+5Ch], ebp
0x86D00D: jnz     short loc_86D016
0x86D00F: mov     ecx, edi
0x86D011: call    sub_772560
0x86D016: mov     edi, [ebx]
0x86D018: test    edi, edi
0x86D01A: mov     [esp+30h+a3], edi
0x86D01E: jz      short loc_86D024
0x86D020: add     dword ptr [edi+5Ch], 1
0x86D024: mov     eax, [esp+30h+var_10]
0x86D028: test    eax, eax
0x86D02A: mov     byte ptr [esp+30h+var_4], 1
0x86D02F: jz      short loc_86D043
0x86D031: add     [eax+5Ch], ebp
0x86D034: mov     ecx, eax
0x86D036: add     eax, 5Ch ; '\'
0x86D039: cmp     dword ptr [eax], 0
0x86D03C: jnz     short loc_86D043
0x86D03E: call    sub_772560
0x86D043: push    0
0x86D045: push    3
0x86D047: push    7
0x86D049: push    edi
0x86D04A: call    sub_801110
0x86D04F: add     esp, 10h
0x86D052: push    edi; a3
0x86D053: push    7; a2
0x86D055: mov     ecx, esi; this
0x86D057: call    sub_760010
0x86D05C: mov     eax, [esp+30h+var_18]
0x86D060: mov     ebx, [eax+0BCh]
0x86D066: mov     ebp, [esi+58h]
0x86D069: cmp     ebp, ebx
0x86D06B: jz      short loc_86D09F
0x86D06D: test    ebp, ebp
0x86D06F: jz      short loc_86D08E
0x86D071: lea     ecx, [ebp+4]
0x86D074: push    ecx; lpAddend
0x86D075: call    dword ptr ds:0A2807Ch
0x86D07B: test    eax, eax
0x86D07D: jnz     short loc_86D08E
0x86D07F: test    ebp, ebp
0x86D081: jz      short loc_86D08E
0x86D083: mov     edx, [ebp+0]
0x86D086: mov     eax, [edx]
0x86D088: push    1
0x86D08A: mov     ecx, ebp
0x86D08C: call    eax
0x86D08E: test    ebx, ebx
0x86D090: mov     [esi+58h], ebx
0x86D093: jz      short loc_86D09F
0x86D095: add     ebx, 4
0x86D098: push    ebx; lpAddend
0x86D099: call    dword ptr ds:0A28078h
0x86D09F: mov     ecx, [esp+30h+var_18]
0x86D0A3: mov     ebx, [ecx+14Ch]
0x86D0A9: mov     ebp, [esi+44h]
0x86D0AC: cmp     ebp, ebx
0x86D0AE: jz      short loc_86D0E2
0x86D0B0: test    ebp, ebp
0x86D0B2: jz      short loc_86D0D1
0x86D0B4: lea     edx, [ebp+4]
0x86D0B7: push    edx; lpAddend
0x86D0B8: call    dword ptr ds:0A2807Ch
0x86D0BE: test    eax, eax
0x86D0C0: jnz     short loc_86D0D1
0x86D0C2: test    ebp, ebp
0x86D0C4: jz      short loc_86D0D1
0x86D0C6: mov     eax, [ebp+0]
0x86D0C9: mov     edx, [eax]
0x86D0CB: push    1
0x86D0CD: mov     ecx, ebp
0x86D0CF: call    edx
0x86D0D1: test    ebx, ebx
0x86D0D3: mov     [esi+44h], ebx
0x86D0D6: jz      short loc_86D0E2
0x86D0D8: add     ebx, 4
0x86D0DB: push    ebx; lpAddend
0x86D0DC: call    dword ptr ds:0A28078h
0x86D0E2: cmp     dword ptr [esi+30h], 0
0x86D0E6: jnz     short loc_86D0F0
0x86D0E8: call    sub_772DF0
0x86D0ED: mov     [esi+30h], eax
0x86D0F0: mov     ecx, [esi+30h]
0x86D0F3: push    0
0x86D0F5: push    0
0x86D0F7: push    1Bh
0x86D0F9: call    sub_772CD0
0x86D0FE: cmp     dword ptr [esi+30h], 0
0x86D102: jnz     short loc_86D10C
0x86D104: call    sub_772DF0
0x86D109: mov     [esi+30h], eax
0x86D10C: mov     ecx, [esi+30h]
0x86D10F: push    0
0x86D111: push    0
0x86D113: push    0Fh
0x86D115: call    sub_772CD0
0x86D11A: cmp     dword ptr [esi+30h], 0
0x86D11E: jnz     short loc_86D128
0x86D120: call    sub_772DF0
0x86D125: mov     [esi+30h], eax
0x86D128: mov     ecx, [esi+30h]
0x86D12B: push    0
0x86D12D: push    1
0x86D12F: push    7
0x86D131: call    sub_772CD0
0x86D136: cmp     dword ptr [esi+30h], 0
0x86D13A: jnz     short loc_86D144
0x86D13C: call    sub_772DF0
0x86D141: mov     [esi+30h], eax
0x86D144: mov     ecx, [esi+30h]
0x86D147: push    0
0x86D149: push    4
0x86D14B: push    17h
0x86D14D: call    sub_772CD0
0x86D152: cmp     dword ptr [esi+30h], 0
0x86D156: jnz     short loc_86D160
0x86D158: call    sub_772DF0
0x86D15D: mov     [esi+30h], eax
0x86D160: mov     ecx, [esi+30h]
0x86D163: push    0
0x86D165: push    1
0x86D167: push    0Eh
0x86D169: call    sub_772CD0
0x86D16E: cmp     dword ptr [esi+30h], 0
0x86D172: jnz     short loc_86D17C
0x86D174: call    sub_772DF0
0x86D179: mov     [esi+30h], eax
0x86D17C: mov     ecx, [esi+30h]
0x86D17F: push    0
0x86D181: push    0
0x86D183: push    34h ; '4'
0x86D185: call    sub_772CD0
0x86D18A: or      ebx, 0FFFFFFFFh
0x86D18D: cmp     esi, ds:0B476A4h
0x86D193: mov     dword ptr ds:0B43DE0h, 38082h
0x86D19D: mov     dword ptr ds:0B44470h, 10Ch
0x86D1A7: jz      short loc_86D1C7
0x86D1A9: add     [esi+60h], ebx
0x86D1AC: jnz     short loc_86D1B5
0x86D1AE: mov     ecx, esi
0x86D1B0: call    sub_7604D0
0x86D1B5: mov     esi, ds:0B476A4h
0x86D1BB: test    esi, esi
0x86D1BD: mov     [esp+30h+var_14], esi
0x86D1C1: jz      short loc_86D1C7
0x86D1C3: add     dword ptr [esi+60h], 1
0x86D1C7: cmp     dword ptr [esi+18h], 8
0x86D1CB: jnb     loc_86D55E
0x86D1D1: lea     eax, [esp+30h+var_10]
0x86D1D5: push    eax
0x86D1D6: call    sub_772630
0x86D1DB: add     esp, 4
0x86D1DE: mov     ebp, eax
0x86D1E0: cmp     edi, [ebp+0]
0x86D1E3: mov     byte ptr [esp+30h+var_4], 0Ah
0x86D1E8: jz      short loc_86D209
0x86D1EA: test    edi, edi
0x86D1EC: jz      short loc_86D1FA
0x86D1EE: add     [edi+5Ch], ebx
0x86D1F1: jnz     short loc_86D1FA
0x86D1F3: mov     ecx, edi
0x86D1F5: call    sub_772560
0x86D1FA: mov     edi, [ebp+0]
0x86D1FD: test    edi, edi
0x86D1FF: mov     [esp+30h+a3], edi
0x86D203: jz      short loc_86D209
0x86D205: add     dword ptr [edi+5Ch], 1
0x86D209: mov     eax, [esp+30h+var_10]
0x86D20D: test    eax, eax
0x86D20F: mov     byte ptr [esp+30h+var_4], 1
0x86D214: jz      short loc_86D228
0x86D216: add     [eax+5Ch], ebx
0x86D219: mov     ecx, eax
0x86D21B: add     eax, 5Ch ; '\'
0x86D21E: cmp     dword ptr [eax], 0
0x86D221: jnz     short loc_86D228
0x86D223: call    sub_772560
0x86D228: push    2
0x86D22A: push    1
0x86D22C: push    0
0x86D22E: push    edi
0x86D22F: call    sub_801110
0x86D234: add     esp, 10h
0x86D237: push    edi; a3
0x86D238: push    0; a2
0x86D23A: mov     ecx, esi; this
0x86D23C: call    sub_760010
0x86D241: lea     ecx, [esp+30h+var_10]
0x86D245: push    ecx
0x86D246: call    sub_772630
0x86D24B: add     esp, 4
0x86D24E: mov     ebp, eax
0x86D250: cmp     edi, [ebp+0]
0x86D253: mov     byte ptr [esp+30h+var_4], 0Bh
0x86D258: jz      short loc_86D279
0x86D25A: test    edi, edi
0x86D25C: jz      short loc_86D26A
0x86D25E: add     [edi+5Ch], ebx
0x86D261: jnz     short loc_86D26A
0x86D263: mov     ecx, edi
0x86D265: call    sub_772560
0x86D26A: mov     edi, [ebp+0]
0x86D26D: test    edi, edi
0x86D26F: mov     [esp+30h+a3], edi
0x86D273: jz      short loc_86D279
0x86D275: add     dword ptr [edi+5Ch], 1
0x86D279: mov     eax, [esp+30h+var_10]
0x86D27D: test    eax, eax
0x86D27F: mov     byte ptr [esp+30h+var_4], 1
0x86D284: jz      short loc_86D298
0x86D286: add     [eax+5Ch], ebx
0x86D289: mov     ecx, eax
0x86D28B: add     eax, 5Ch ; '\'
0x86D28E: cmp     dword ptr [eax], 0
0x86D291: jnz     short loc_86D298
0x86D293: call    sub_772560
0x86D298: push    2
0x86D29A: push    1
0x86D29C: push    1
0x86D29E: push    edi
0x86D29F: call    sub_801110
0x86D2A4: add     esp, 10h
0x86D2A7: push    edi; a3
0x86D2A8: push    1; a2
0x86D2AA: mov     ecx, esi; this
0x86D2AC: call    sub_760010
0x86D2B1: lea     edx, [esp+30h+var_10]
0x86D2B5: push    edx
0x86D2B6: call    sub_772630
0x86D2BB: add     esp, 4
0x86D2BE: mov     ebp, eax
0x86D2C0: cmp     edi, [ebp+0]
0x86D2C3: mov     byte ptr [esp+30h+var_4], 0Ch
0x86D2C8: jz      short loc_86D2E9
0x86D2CA: test    edi, edi
0x86D2CC: jz      short loc_86D2DA
0x86D2CE: add     [edi+5Ch], ebx
0x86D2D1: jnz     short loc_86D2DA
0x86D2D3: mov     ecx, edi
0x86D2D5: call    sub_772560
0x86D2DA: mov     edi, [ebp+0]
0x86D2DD: test    edi, edi
0x86D2DF: mov     [esp+30h+a3], edi
0x86D2E3: jz      short loc_86D2E9
0x86D2E5: add     dword ptr [edi+5Ch], 1
0x86D2E9: mov     eax, [esp+30h+var_10]
0x86D2ED: test    eax, eax
0x86D2EF: mov     byte ptr [esp+30h+var_4], 1
0x86D2F4: jz      short loc_86D308
0x86D2F6: add     [eax+5Ch], ebx
0x86D2F9: mov     ecx, eax
0x86D2FB: add     eax, 5Ch ; '\'
0x86D2FE: cmp     dword ptr [eax], 0
0x86D301: jnz     short loc_86D308
0x86D303: call    sub_772560
0x86D308: push    2
0x86D30A: push    1
0x86D30C: push    2
0x86D30E: push    edi
0x86D30F: call    sub_801110
0x86D314: add     esp, 10h
0x86D317: push    edi; a3
0x86D318: push    2; a2
0x86D31A: mov     ecx, esi; this
0x86D31C: call    sub_760010
0x86D321: lea     eax, [esp+30h+var_10]
0x86D325: push    eax
0x86D326: call    sub_772630
0x86D32B: add     esp, 4
0x86D32E: mov     ebp, eax
0x86D330: cmp     edi, [ebp+0]
0x86D333: mov     byte ptr [esp+30h+var_4], 0Dh
0x86D338: jz      short loc_86D359
0x86D33A: test    edi, edi
0x86D33C: jz      short loc_86D34A
0x86D33E: add     [edi+5Ch], ebx
0x86D341: jnz     short loc_86D34A
0x86D343: mov     ecx, edi
0x86D345: call    sub_772560
0x86D34A: mov     edi, [ebp+0]
0x86D34D: test    edi, edi
0x86D34F: mov     [esp+30h+a3], edi
0x86D353: jz      short loc_86D359
0x86D355: add     dword ptr [edi+5Ch], 1
0x86D359: mov     eax, [esp+30h+var_10]
0x86D35D: test    eax, eax
0x86D35F: mov     byte ptr [esp+30h+var_4], 1
0x86D364: jz      short loc_86D378
0x86D366: add     [eax+5Ch], ebx
0x86D369: mov     ecx, eax
0x86D36B: add     eax, 5Ch ; '\'
0x86D36E: cmp     dword ptr [eax], 0
0x86D371: jnz     short loc_86D378
0x86D373: call    sub_772560
0x86D378: push    2
0x86D37A: push    1
0x86D37C: push    3
0x86D37E: push    edi
0x86D37F: call    sub_801110
0x86D384: add     esp, 10h
0x86D387: push    edi; a3
0x86D388: push    3; a2
0x86D38A: mov     ecx, esi; this
0x86D38C: call    sub_760010
0x86D391: lea     ecx, [esp+30h+var_10]
0x86D395: push    ecx
0x86D396: call    sub_772630
0x86D39B: add     esp, 4
0x86D39E: mov     ebp, eax
0x86D3A0: cmp     edi, [ebp+0]
0x86D3A3: mov     byte ptr [esp+30h+var_4], 0Eh
0x86D3A8: jz      short loc_86D3C9
0x86D3AA: test    edi, edi
0x86D3AC: jz      short loc_86D3BA
0x86D3AE: add     [edi+5Ch], ebx
0x86D3B1: jnz     short loc_86D3BA
0x86D3B3: mov     ecx, edi
0x86D3B5: call    sub_772560
0x86D3BA: mov     edi, [ebp+0]
0x86D3BD: test    edi, edi
0x86D3BF: mov     [esp+30h+a3], edi
0x86D3C3: jz      short loc_86D3C9
0x86D3C5: add     dword ptr [edi+5Ch], 1
0x86D3C9: mov     eax, [esp+30h+var_10]
0x86D3CD: test    eax, eax
0x86D3CF: mov     byte ptr [esp+30h+var_4], 1
0x86D3D4: jz      short loc_86D3E8
0x86D3D6: add     [eax+5Ch], ebx
0x86D3D9: mov     ecx, eax
0x86D3DB: add     eax, 5Ch ; '\'
0x86D3DE: cmp     dword ptr [eax], 0
0x86D3E1: jnz     short loc_86D3E8
0x86D3E3: call    sub_772560
0x86D3E8: push    2
0x86D3EA: push    1
0x86D3EC: push    4
0x86D3EE: push    edi
0x86D3EF: call    sub_801110
0x86D3F4: add     esp, 10h
0x86D3F7: push    edi; a3
0x86D3F8: push    4; a2
0x86D3FA: mov     ecx, esi; this
0x86D3FC: call    sub_760010
0x86D401: lea     edx, [esp+30h+var_10]
0x86D405: push    edx
0x86D406: call    sub_772630
0x86D40B: add     esp, 4
0x86D40E: mov     ebp, eax
0x86D410: cmp     edi, [ebp+0]
0x86D413: mov     byte ptr [esp+30h+var_4], 0Fh
0x86D418: jz      short loc_86D439
0x86D41A: test    edi, edi
0x86D41C: jz      short loc_86D42A
0x86D41E: add     [edi+5Ch], ebx
0x86D421: jnz     short loc_86D42A
0x86D423: mov     ecx, edi
0x86D425: call    sub_772560
0x86D42A: mov     edi, [ebp+0]
0x86D42D: test    edi, edi
0x86D42F: mov     [esp+30h+a3], edi
0x86D433: jz      short loc_86D439
0x86D435: add     dword ptr [edi+5Ch], 1
0x86D439: mov     eax, [esp+30h+var_10]
0x86D43D: test    eax, eax
0x86D43F: mov     byte ptr [esp+30h+var_4], 1
0x86D444: jz      short loc_86D458
0x86D446: add     [eax+5Ch], ebx
0x86D449: mov     ecx, eax
0x86D44B: add     eax, 5Ch ; '\'
0x86D44E: cmp     dword ptr [eax], 0
0x86D451: jnz     short loc_86D458
0x86D453: call    sub_772560
0x86D458: push    0
0x86D45A: push    3
0x86D45C: push    5
0x86D45E: push    edi
0x86D45F: call    sub_801110
0x86D464: mov     eax, ds:0B43110h
0x86D469: add     esp, 10h
0x86D46C: push    eax; a2
0x86D46D: mov     ecx, edi; this
0x86D46F: call    sub_76C910
0x86D474: push    edi; a3
0x86D475: push    5; a2
0x86D477: mov     ecx, esi; this
0x86D479: call    sub_760010
0x86D47E: lea     ecx, [esp+30h+var_10]
0x86D482: push    ecx
0x86D483: call    sub_772630
0x86D488: add     esp, 4
0x86D48B: mov     ebp, eax
0x86D48D: cmp     edi, [ebp+0]
0x86D490: mov     byte ptr [esp+30h+var_4], 10h
0x86D495: jz      short loc_86D4B6
0x86D497: test    edi, edi
0x86D499: jz      short loc_86D4A7
0x86D49B: add     [edi+5Ch], ebx
0x86D49E: jnz     short loc_86D4A7
0x86D4A0: mov     ecx, edi
0x86D4A2: call    sub_772560
0x86D4A7: mov     edi, [ebp+0]
0x86D4AA: test    edi, edi
0x86D4AC: mov     [esp+30h+a3], edi
0x86D4B0: jz      short loc_86D4B6
0x86D4B2: add     dword ptr [edi+5Ch], 1
0x86D4B6: mov     eax, [esp+30h+var_10]
0x86D4BA: test    eax, eax
0x86D4BC: mov     byte ptr [esp+30h+var_4], 1
0x86D4C1: jz      short loc_86D4D5
0x86D4C3: add     [eax+5Ch], ebx
0x86D4C6: mov     ecx, eax
0x86D4C8: add     eax, 5Ch ; '\'
0x86D4CB: cmp     dword ptr [eax], 0
0x86D4CE: jnz     short loc_86D4D5
0x86D4D0: call    sub_772560
0x86D4D5: push    2
0x86D4D7: push    1
0x86D4D9: push    6
0x86D4DB: push    edi
0x86D4DC: call    sub_801110
0x86D4E1: add     esp, 10h
0x86D4E4: push    edi; a3
0x86D4E5: push    6; a2
0x86D4E7: mov     ecx, esi; this
0x86D4E9: call    sub_760010
0x86D4EE: lea     edx, [esp+30h+var_10]
0x86D4F2: push    edx
0x86D4F3: call    sub_772630
0x86D4F8: add     esp, 4
0x86D4FB: mov     ebp, eax
0x86D4FD: cmp     edi, [ebp+0]
0x86D500: mov     byte ptr [esp+30h+var_4], 11h
0x86D505: jz      short loc_86D526
0x86D507: test    edi, edi
0x86D509: jz      short loc_86D517
0x86D50B: add     [edi+5Ch], ebx
0x86D50E: jnz     short loc_86D517
0x86D510: mov     ecx, edi
0x86D512: call    sub_772560
0x86D517: mov     edi, [ebp+0]
0x86D51A: test    edi, edi
0x86D51C: mov     [esp+30h+a3], edi
0x86D520: jz      short loc_86D526
0x86D522: add     dword ptr [edi+5Ch], 1
0x86D526: mov     eax, [esp+30h+var_10]
0x86D52A: test    eax, eax
0x86D52C: mov     byte ptr [esp+30h+var_4], 1
0x86D531: jz      short loc_86D545
0x86D533: add     [eax+5Ch], ebx
0x86D536: mov     ecx, eax
0x86D538: add     eax, 5Ch ; '\'
0x86D53B: cmp     dword ptr [eax], 0
0x86D53E: jnz     short loc_86D545
0x86D540: call    sub_772560
0x86D545: push    0
0x86D547: push    3
0x86D549: push    7
0x86D54B: push    edi
0x86D54C: call    sub_801110
0x86D551: add     esp, 10h
0x86D554: push    edi; a3
0x86D555: push    7; a2
0x86D557: mov     ecx, esi; this
0x86D559: call    sub_760010
0x86D55E: mov     eax, [esp+30h+var_18]
0x86D562: mov     ebx, [eax+0BCh]
0x86D568: mov     ebp, [esi+58h]
0x86D56B: cmp     ebp, ebx
0x86D56D: jz      short loc_86D5A1
0x86D56F: test    ebp, ebp
0x86D571: jz      short loc_86D590
0x86D573: lea     ecx, [ebp+4]
0x86D576: push    ecx; lpAddend
0x86D577: call    dword ptr ds:0A2807Ch
0x86D57D: test    eax, eax
0x86D57F: jnz     short loc_86D590
0x86D581: test    ebp, ebp
0x86D583: jz      short loc_86D590
0x86D585: mov     edx, [ebp+0]
0x86D588: mov     eax, [edx]
0x86D58A: push    1
0x86D58C: mov     ecx, ebp
0x86D58E: call    eax
0x86D590: test    ebx, ebx
0x86D592: mov     [esi+58h], ebx
0x86D595: jz      short loc_86D5A1
0x86D597: add     ebx, 4
0x86D59A: push    ebx; lpAddend
0x86D59B: call    dword ptr ds:0A28078h
0x86D5A1: mov     ecx, [esp+30h+var_18]
0x86D5A5: mov     ebx, [ecx+150h]
0x86D5AB: mov     ebp, [esi+44h]
0x86D5AE: cmp     ebp, ebx
0x86D5B0: jz      short loc_86D5E4
0x86D5B2: test    ebp, ebp
0x86D5B4: jz      short loc_86D5D3
0x86D5B6: lea     edx, [ebp+4]
0x86D5B9: push    edx; lpAddend
0x86D5BA: call    dword ptr ds:0A2807Ch
0x86D5C0: test    eax, eax
0x86D5C2: jnz     short loc_86D5D3
0x86D5C4: test    ebp, ebp
0x86D5C6: jz      short loc_86D5D3
0x86D5C8: mov     eax, [ebp+0]
0x86D5CB: mov     edx, [eax]
0x86D5CD: push    1
0x86D5CF: mov     ecx, ebp
0x86D5D1: call    edx
0x86D5D3: test    ebx, ebx
0x86D5D5: mov     [esi+44h], ebx
0x86D5D8: jz      short loc_86D5E4
0x86D5DA: add     ebx, 4
0x86D5DD: push    ebx; lpAddend
0x86D5DE: call    dword ptr ds:0A28078h
0x86D5E4: cmp     dword ptr [esi+30h], 0
0x86D5E8: jnz     short loc_86D5F2
0x86D5EA: call    sub_772DF0
0x86D5EF: mov     [esi+30h], eax
0x86D5F2: mov     ecx, [esi+30h]
0x86D5F5: push    0
0x86D5F7: push    0
0x86D5F9: push    1Bh
0x86D5FB: call    sub_772CD0
0x86D600: cmp     dword ptr [esi+30h], 0
0x86D604: jnz     short loc_86D60E
0x86D606: call    sub_772DF0
0x86D60B: mov     [esi+30h], eax
0x86D60E: mov     ecx, [esi+30h]
0x86D611: push    0
0x86D613: push    0
0x86D615: push    0Fh
0x86D617: call    sub_772CD0
0x86D61C: cmp     dword ptr [esi+30h], 0
0x86D620: jnz     short loc_86D62A
0x86D622: call    sub_772DF0
0x86D627: mov     [esi+30h], eax
0x86D62A: mov     ecx, [esi+30h]
0x86D62D: push    0
0x86D62F: push    1
0x86D631: push    7
0x86D633: call    sub_772CD0
0x86D638: cmp     dword ptr [esi+30h], 0
0x86D63C: jnz     short loc_86D646
0x86D63E: call    sub_772DF0
0x86D643: mov     [esi+30h], eax
0x86D646: mov     ecx, [esi+30h]
0x86D649: push    0
0x86D64B: push    4
0x86D64D: push    17h
0x86D64F: call    sub_772CD0
0x86D654: cmp     dword ptr [esi+30h], 0
0x86D658: jnz     short loc_86D662
0x86D65A: call    sub_772DF0
0x86D65F: mov     [esi+30h], eax
0x86D662: mov     ecx, [esi+30h]
0x86D665: push    0
0x86D667: push    1
0x86D669: push    0Eh
0x86D66B: call    sub_772CD0
0x86D670: cmp     dword ptr [esi+30h], 0
0x86D674: jnz     short loc_86D67E
0x86D676: call    sub_772DF0
0x86D67B: mov     [esi+30h], eax
0x86D67E: mov     ecx, [esi+30h]
0x86D681: push    0
0x86D683: push    0
0x86D685: push    34h ; '4'
0x86D687: call    sub_772CD0
0x86D68C: or      ebx, 0FFFFFFFFh
0x86D68F: cmp     esi, ds:0B476A8h
0x86D695: mov     dword ptr ds:0B43DE4h, 38082h
0x86D69F: mov     dword ptr ds:0B44474h, 18Ch
0x86D6A9: jz      short loc_86D6C9
0x86D6AB: add     [esi+60h], ebx
0x86D6AE: jnz     short loc_86D6B7
0x86D6B0: mov     ecx, esi
0x86D6B2: call    sub_7604D0
0x86D6B7: mov     esi, ds:0B476A8h
0x86D6BD: test    esi, esi
0x86D6BF: mov     [esp+30h+var_14], esi
0x86D6C3: jz      short loc_86D6C9
0x86D6C5: add     dword ptr [esi+60h], 1
0x86D6C9: cmp     dword ptr [esi+18h], 8
0x86D6CD: jnb     loc_86DA60
0x86D6D3: lea     eax, [esp+30h+var_10]
0x86D6D7: push    eax
0x86D6D8: call    sub_772630
0x86D6DD: add     esp, 4
0x86D6E0: mov     ebp, eax
0x86D6E2: cmp     edi, [ebp+0]
0x86D6E5: mov     byte ptr [esp+30h+var_4], 12h
0x86D6EA: jz      short loc_86D70B
0x86D6EC: test    edi, edi
0x86D6EE: jz      short loc_86D6FC
0x86D6F0: add     [edi+5Ch], ebx
0x86D6F3: jnz     short loc_86D6FC
0x86D6F5: mov     ecx, edi
0x86D6F7: call    sub_772560
0x86D6FC: mov     edi, [ebp+0]
0x86D6FF: test    edi, edi
0x86D701: mov     [esp+30h+a3], edi
0x86D705: jz      short loc_86D70B
0x86D707: add     dword ptr [edi+5Ch], 1
0x86D70B: mov     eax, [esp+30h+var_10]
0x86D70F: test    eax, eax
0x86D711: mov     byte ptr [esp+30h+var_4], 1
0x86D716: jz      short loc_86D72A
0x86D718: add     [eax+5Ch], ebx
0x86D71B: mov     ecx, eax
0x86D71D: add     eax, 5Ch ; '\'
0x86D720: cmp     dword ptr [eax], 0
0x86D723: jnz     short loc_86D72A
0x86D725: call    sub_772560
0x86D72A: push    2
0x86D72C: push    1
0x86D72E: push    0
0x86D730: push    edi
0x86D731: call    sub_801110
0x86D736: add     esp, 10h
0x86D739: push    edi; a3
0x86D73A: push    0; a2
0x86D73C: mov     ecx, esi; this
0x86D73E: call    sub_760010
0x86D743: lea     ecx, [esp+30h+var_10]
0x86D747: push    ecx
0x86D748: call    sub_772630
0x86D74D: add     esp, 4
0x86D750: mov     ebp, eax
0x86D752: cmp     edi, [ebp+0]
0x86D755: mov     byte ptr [esp+30h+var_4], 13h
0x86D75A: jz      short loc_86D77B
0x86D75C: test    edi, edi
0x86D75E: jz      short loc_86D76C
0x86D760: add     [edi+5Ch], ebx
0x86D763: jnz     short loc_86D76C
0x86D765: mov     ecx, edi
0x86D767: call    sub_772560
0x86D76C: mov     edi, [ebp+0]
0x86D76F: test    edi, edi
0x86D771: mov     [esp+30h+a3], edi
0x86D775: jz      short loc_86D77B
0x86D777: add     dword ptr [edi+5Ch], 1
0x86D77B: mov     eax, [esp+30h+var_10]
0x86D77F: test    eax, eax
0x86D781: mov     byte ptr [esp+30h+var_4], 1
0x86D786: jz      short loc_86D79A
0x86D788: add     [eax+5Ch], ebx
0x86D78B: mov     ecx, eax
0x86D78D: add     eax, 5Ch ; '\'
0x86D790: cmp     dword ptr [eax], 0
0x86D793: jnz     short loc_86D79A
0x86D795: call    sub_772560
0x86D79A: push    2
0x86D79C: push    1
0x86D79E: push    1
0x86D7A0: push    edi
0x86D7A1: call    sub_801110
0x86D7A6: add     esp, 10h
0x86D7A9: push    edi; a3
0x86D7AA: push    1; a2
0x86D7AC: mov     ecx, esi; this
0x86D7AE: call    sub_760010
0x86D7B3: lea     edx, [esp+30h+var_10]
0x86D7B7: push    edx
0x86D7B8: call    sub_772630
0x86D7BD: add     esp, 4
0x86D7C0: mov     ebp, eax
0x86D7C2: cmp     edi, [ebp+0]
0x86D7C5: mov     byte ptr [esp+30h+var_4], 14h
0x86D7CA: jz      short loc_86D7EB
0x86D7CC: test    edi, edi
0x86D7CE: jz      short loc_86D7DC
0x86D7D0: add     [edi+5Ch], ebx
0x86D7D3: jnz     short loc_86D7DC
0x86D7D5: mov     ecx, edi
0x86D7D7: call    sub_772560
0x86D7DC: mov     edi, [ebp+0]
0x86D7DF: test    edi, edi
0x86D7E1: mov     [esp+30h+a3], edi
0x86D7E5: jz      short loc_86D7EB
0x86D7E7: add     dword ptr [edi+5Ch], 1
0x86D7EB: mov     eax, [esp+30h+var_10]
0x86D7EF: test    eax, eax
0x86D7F1: mov     byte ptr [esp+30h+var_4], 1
0x86D7F6: jz      short loc_86D80A
0x86D7F8: add     [eax+5Ch], ebx
0x86D7FB: mov     ecx, eax
0x86D7FD: add     eax, 5Ch ; '\'
0x86D800: cmp     dword ptr [eax], 0
0x86D803: jnz     short loc_86D80A
0x86D805: call    sub_772560
0x86D80A: push    2
0x86D80C: push    1
0x86D80E: push    2
0x86D810: push    edi
0x86D811: call    sub_801110
0x86D816: add     esp, 10h
0x86D819: push    edi; a3
0x86D81A: push    2; a2
0x86D81C: mov     ecx, esi; this
0x86D81E: call    sub_760010
0x86D823: lea     eax, [esp+30h+var_10]
0x86D827: push    eax
0x86D828: call    sub_772630
0x86D82D: add     esp, 4
0x86D830: mov     ebp, eax
0x86D832: cmp     edi, [ebp+0]
0x86D835: mov     byte ptr [esp+30h+var_4], 15h
0x86D83A: jz      short loc_86D85B
0x86D83C: test    edi, edi
0x86D83E: jz      short loc_86D84C
0x86D840: add     [edi+5Ch], ebx
0x86D843: jnz     short loc_86D84C
0x86D845: mov     ecx, edi
0x86D847: call    sub_772560
0x86D84C: mov     edi, [ebp+0]
0x86D84F: test    edi, edi
0x86D851: mov     [esp+30h+a3], edi
0x86D855: jz      short loc_86D85B
0x86D857: add     dword ptr [edi+5Ch], 1
0x86D85B: mov     eax, [esp+30h+var_10]
0x86D85F: test    eax, eax
0x86D861: mov     byte ptr [esp+30h+var_4], 1
0x86D866: jz      short loc_86D87A
0x86D868: add     [eax+5Ch], ebx
0x86D86B: mov     ecx, eax
0x86D86D: add     eax, 5Ch ; '\'
0x86D870: cmp     dword ptr [eax], 0
0x86D873: jnz     short loc_86D87A
0x86D875: call    sub_772560
0x86D87A: push    2
0x86D87C: push    1
0x86D87E: push    3
0x86D880: push    edi
0x86D881: call    sub_801110
0x86D886: add     esp, 10h
0x86D889: push    edi; a3
0x86D88A: push    3; a2
0x86D88C: mov     ecx, esi; this
0x86D88E: call    sub_760010
0x86D893: lea     ecx, [esp+30h+var_10]
0x86D897: push    ecx
0x86D898: call    sub_772630
0x86D89D: add     esp, 4
0x86D8A0: mov     ebp, eax
0x86D8A2: cmp     edi, [ebp+0]
0x86D8A5: mov     byte ptr [esp+30h+var_4], 16h
0x86D8AA: jz      short loc_86D8CB
0x86D8AC: test    edi, edi
0x86D8AE: jz      short loc_86D8BC
0x86D8B0: add     [edi+5Ch], ebx
0x86D8B3: jnz     short loc_86D8BC
0x86D8B5: mov     ecx, edi
0x86D8B7: call    sub_772560
0x86D8BC: mov     edi, [ebp+0]
0x86D8BF: test    edi, edi
0x86D8C1: mov     [esp+30h+a3], edi
0x86D8C5: jz      short loc_86D8CB
0x86D8C7: add     dword ptr [edi+5Ch], 1
0x86D8CB: mov     eax, [esp+30h+var_10]
0x86D8CF: test    eax, eax
0x86D8D1: mov     byte ptr [esp+30h+var_4], 1
0x86D8D6: jz      short loc_86D8EA
0x86D8D8: add     [eax+5Ch], ebx
0x86D8DB: mov     ecx, eax
0x86D8DD: add     eax, 5Ch ; '\'
0x86D8E0: cmp     dword ptr [eax], 0
0x86D8E3: jnz     short loc_86D8EA
0x86D8E5: call    sub_772560
0x86D8EA: push    2
0x86D8EC: push    1
0x86D8EE: push    4
0x86D8F0: push    edi
0x86D8F1: call    sub_801110
0x86D8F6: add     esp, 10h
0x86D8F9: push    edi; a3
0x86D8FA: push    4; a2
0x86D8FC: mov     ecx, esi; this
0x86D8FE: call    sub_760010
0x86D903: lea     edx, [esp+30h+var_10]
0x86D907: push    edx
0x86D908: call    sub_772630
0x86D90D: add     esp, 4
0x86D910: mov     ebp, eax
0x86D912: cmp     edi, [ebp+0]
0x86D915: mov     byte ptr [esp+30h+var_4], 17h
0x86D91A: jz      short loc_86D93B
0x86D91C: test    edi, edi
0x86D91E: jz      short loc_86D92C
0x86D920: add     [edi+5Ch], ebx
0x86D923: jnz     short loc_86D92C
0x86D925: mov     ecx, edi
0x86D927: call    sub_772560
0x86D92C: mov     edi, [ebp+0]
0x86D92F: test    edi, edi
0x86D931: mov     [esp+30h+a3], edi
0x86D935: jz      short loc_86D93B
0x86D937: add     dword ptr [edi+5Ch], 1
0x86D93B: mov     eax, [esp+30h+var_10]
0x86D93F: test    eax, eax
0x86D941: mov     byte ptr [esp+30h+var_4], 1
0x86D946: jz      short loc_86D95A
0x86D948: add     [eax+5Ch], ebx
0x86D94B: mov     ecx, eax
0x86D94D: add     eax, 5Ch ; '\'
0x86D950: cmp     dword ptr [eax], 0
0x86D953: jnz     short loc_86D95A
0x86D955: call    sub_772560
0x86D95A: push    0
0x86D95C: push    3
0x86D95E: push    5
0x86D960: push    edi
0x86D961: call    sub_801110
0x86D966: mov     eax, ds:0B43110h
0x86D96B: add     esp, 10h
0x86D96E: push    eax; a2
0x86D96F: mov     ecx, edi; this
0x86D971: call    sub_76C910
0x86D976: push    edi; a3
0x86D977: push    5; a2
0x86D979: mov     ecx, esi; this
0x86D97B: call    sub_760010
0x86D980: lea     ecx, [esp+30h+var_10]
0x86D984: push    ecx
0x86D985: call    sub_772630
0x86D98A: add     esp, 4
0x86D98D: mov     ebp, eax
0x86D98F: cmp     edi, [ebp+0]
0x86D992: mov     byte ptr [esp+30h+var_4], 18h
0x86D997: jz      short loc_86D9B8
0x86D999: test    edi, edi
0x86D99B: jz      short loc_86D9A9
0x86D99D: add     [edi+5Ch], ebx
0x86D9A0: jnz     short loc_86D9A9
0x86D9A2: mov     ecx, edi
0x86D9A4: call    sub_772560
0x86D9A9: mov     edi, [ebp+0]
0x86D9AC: test    edi, edi
0x86D9AE: mov     [esp+30h+a3], edi
0x86D9B2: jz      short loc_86D9B8
0x86D9B4: add     dword ptr [edi+5Ch], 1
0x86D9B8: mov     eax, [esp+30h+var_10]
0x86D9BC: test    eax, eax
0x86D9BE: mov     byte ptr [esp+30h+var_4], 1
0x86D9C3: jz      short loc_86D9D7
0x86D9C5: add     [eax+5Ch], ebx
0x86D9C8: mov     ecx, eax
0x86D9CA: add     eax, 5Ch ; '\'
0x86D9CD: cmp     dword ptr [eax], 0
0x86D9D0: jnz     short loc_86D9D7
0x86D9D2: call    sub_772560
0x86D9D7: push    2
0x86D9D9: push    1
0x86D9DB: push    6
0x86D9DD: push    edi
0x86D9DE: call    sub_801110
0x86D9E3: add     esp, 10h
0x86D9E6: push    edi; a3
0x86D9E7: push    6; a2
0x86D9E9: mov     ecx, esi; this
0x86D9EB: call    sub_760010
0x86D9F0: lea     edx, [esp+30h+var_10]
0x86D9F4: push    edx
0x86D9F5: call    sub_772630
0x86D9FA: add     esp, 4
0x86D9FD: mov     ebp, eax
0x86D9FF: cmp     edi, [ebp+0]
0x86DA02: mov     byte ptr [esp+30h+var_4], 19h
0x86DA07: jz      short loc_86DA28
0x86DA09: test    edi, edi
0x86DA0B: jz      short loc_86DA19
0x86DA0D: add     [edi+5Ch], ebx
0x86DA10: jnz     short loc_86DA19
0x86DA12: mov     ecx, edi
0x86DA14: call    sub_772560
0x86DA19: mov     edi, [ebp+0]
0x86DA1C: test    edi, edi
0x86DA1E: mov     [esp+30h+a3], edi
0x86DA22: jz      short loc_86DA28
0x86DA24: add     dword ptr [edi+5Ch], 1
0x86DA28: mov     eax, [esp+30h+var_10]
0x86DA2C: test    eax, eax
0x86DA2E: mov     byte ptr [esp+30h+var_4], 1
0x86DA33: jz      short loc_86DA47
0x86DA35: add     [eax+5Ch], ebx
0x86DA38: mov     ecx, eax
0x86DA3A: add     eax, 5Ch ; '\'
0x86DA3D: cmp     dword ptr [eax], 0
0x86DA40: jnz     short loc_86DA47
0x86DA42: call    sub_772560
0x86DA47: push    0
0x86DA49: push    3
0x86DA4B: push    7
0x86DA4D: push    edi
0x86DA4E: call    sub_801110
0x86DA53: add     esp, 10h
0x86DA56: push    edi; a3
0x86DA57: push    7; a2
0x86DA59: mov     ecx, esi; this
0x86DA5B: call    sub_760010
0x86DA60: mov     eax, [esp+30h+var_18]
0x86DA64: mov     ebx, [eax+0C0h]
0x86DA6A: mov     ebp, [esi+58h]
0x86DA6D: cmp     ebp, ebx
0x86DA6F: jz      short loc_86DAA3
0x86DA71: test    ebp, ebp
0x86DA73: jz      short loc_86DA92
0x86DA75: lea     ecx, [ebp+4]
0x86DA78: push    ecx; lpAddend
0x86DA79: call    dword ptr ds:0A2807Ch
0x86DA7F: test    eax, eax
0x86DA81: jnz     short loc_86DA92
0x86DA83: test    ebp, ebp
0x86DA85: jz      short loc_86DA92
0x86DA87: mov     edx, [ebp+0]
0x86DA8A: mov     eax, [edx]
0x86DA8C: push    1
0x86DA8E: mov     ecx, ebp
0x86DA90: call    eax
0x86DA92: test    ebx, ebx
0x86DA94: mov     [esi+58h], ebx
0x86DA97: jz      short loc_86DAA3
0x86DA99: add     ebx, 4
0x86DA9C: push    ebx; lpAddend
0x86DA9D: call    dword ptr ds:0A28078h
0x86DAA3: mov     ecx, [esp+30h+var_18]
0x86DAA7: mov     ebx, [ecx+14Ch]
0x86DAAD: mov     ebp, [esi+44h]
0x86DAB0: cmp     ebp, ebx
0x86DAB2: jz      short loc_86DAE6
0x86DAB4: test    ebp, ebp
0x86DAB6: jz      short loc_86DAD5
0x86DAB8: lea     edx, [ebp+4]
0x86DABB: push    edx; lpAddend
0x86DABC: call    dword ptr ds:0A2807Ch
0x86DAC2: test    eax, eax
0x86DAC4: jnz     short loc_86DAD5
0x86DAC6: test    ebp, ebp
0x86DAC8: jz      short loc_86DAD5
0x86DACA: mov     eax, [ebp+0]
0x86DACD: mov     edx, [eax]
0x86DACF: push    1
0x86DAD1: mov     ecx, ebp
0x86DAD3: call    edx
0x86DAD5: test    ebx, ebx
0x86DAD7: mov     [esi+44h], ebx
0x86DADA: jz      short loc_86DAE6
0x86DADC: add     ebx, 4
0x86DADF: push    ebx; lpAddend
0x86DAE0: call    dword ptr ds:0A28078h
0x86DAE6: cmp     dword ptr [esi+30h], 0
0x86DAEA: jnz     short loc_86DAF4
0x86DAEC: call    sub_772DF0
0x86DAF1: mov     [esi+30h], eax
0x86DAF4: mov     ecx, [esi+30h]
0x86DAF7: push    0
0x86DAF9: push    0
0x86DAFB: push    1Bh
0x86DAFD: call    sub_772CD0
0x86DB02: cmp     dword ptr [esi+30h], 0
0x86DB06: jnz     short loc_86DB10
0x86DB08: call    sub_772DF0
0x86DB0D: mov     [esi+30h], eax
0x86DB10: mov     ecx, [esi+30h]
0x86DB13: push    0
0x86DB15: push    0
0x86DB17: push    0Fh
0x86DB19: call    sub_772CD0
0x86DB1E: cmp     dword ptr [esi+30h], 0
0x86DB22: jnz     short loc_86DB2C
0x86DB24: call    sub_772DF0
0x86DB29: mov     [esi+30h], eax
0x86DB2C: mov     ecx, [esi+30h]
0x86DB2F: push    0
0x86DB31: push    1
0x86DB33: push    7
0x86DB35: call    sub_772CD0
0x86DB3A: cmp     dword ptr [esi+30h], 0
0x86DB3E: jnz     short loc_86DB48
0x86DB40: call    sub_772DF0
0x86DB45: mov     [esi+30h], eax
0x86DB48: mov     ecx, [esi+30h]
0x86DB4B: push    0
0x86DB4D: push    4
0x86DB4F: push    17h
0x86DB51: call    sub_772CD0
0x86DB56: cmp     dword ptr [esi+30h], 0
0x86DB5A: jnz     short loc_86DB64
0x86DB5C: call    sub_772DF0
0x86DB61: mov     [esi+30h], eax
0x86DB64: mov     ecx, [esi+30h]
0x86DB67: push    0
0x86DB69: push    1
0x86DB6B: push    0Eh
0x86DB6D: call    sub_772CD0
0x86DB72: cmp     dword ptr [esi+30h], 0
0x86DB76: jnz     short loc_86DB80
0x86DB78: call    sub_772DF0
0x86DB7D: mov     [esi+30h], eax
0x86DB80: mov     ecx, [esi+30h]
0x86DB83: push    0
0x86DB85: push    0
0x86DB87: push    34h ; '4'
0x86DB89: call    sub_772CD0
0x86DB8E: or      ebx, 0FFFFFFFFh
0x86DB91: cmp     esi, ds:0B476ACh
0x86DB97: mov     dword ptr ds:0B43DF8h, 78088h
0x86DBA1: mov     dword ptr ds:0B44488h, 10Ch
0x86DBAB: jz      short loc_86DBCB
0x86DBAD: add     [esi+60h], ebx
0x86DBB0: jnz     short loc_86DBB9
0x86DBB2: mov     ecx, esi
0x86DBB4: call    sub_7604D0
0x86DBB9: mov     esi, ds:0B476ACh
0x86DBBF: test    esi, esi
0x86DBC1: mov     [esp+30h+var_14], esi
0x86DBC5: jz      short loc_86DBCB
0x86DBC7: add     dword ptr [esi+60h], 1
0x86DBCB: cmp     dword ptr [esi+18h], 8
0x86DBCF: jnb     loc_86DF62
0x86DBD5: lea     eax, [esp+30h+var_10]
0x86DBD9: push    eax
0x86DBDA: call    sub_772630
0x86DBDF: add     esp, 4
0x86DBE2: mov     ebp, eax
0x86DBE4: cmp     edi, [ebp+0]
0x86DBE7: mov     byte ptr [esp+30h+var_4], 1Ah
0x86DBEC: jz      short loc_86DC0D
0x86DBEE: test    edi, edi
0x86DBF0: jz      short loc_86DBFE
0x86DBF2: add     [edi+5Ch], ebx
0x86DBF5: jnz     short loc_86DBFE
0x86DBF7: mov     ecx, edi
0x86DBF9: call    sub_772560
0x86DBFE: mov     edi, [ebp+0]
0x86DC01: test    edi, edi
0x86DC03: mov     [esp+30h+a3], edi
0x86DC07: jz      short loc_86DC0D
0x86DC09: add     dword ptr [edi+5Ch], 1
0x86DC0D: mov     eax, [esp+30h+var_10]
0x86DC11: test    eax, eax
0x86DC13: mov     byte ptr [esp+30h+var_4], 1
0x86DC18: jz      short loc_86DC2C
0x86DC1A: add     [eax+5Ch], ebx
0x86DC1D: mov     ecx, eax
0x86DC1F: add     eax, 5Ch ; '\'
0x86DC22: cmp     dword ptr [eax], 0
0x86DC25: jnz     short loc_86DC2C
0x86DC27: call    sub_772560
0x86DC2C: push    2
0x86DC2E: push    1
0x86DC30: push    0
0x86DC32: push    edi
0x86DC33: call    sub_801110
0x86DC38: add     esp, 10h
0x86DC3B: push    edi; a3
0x86DC3C: push    0; a2
0x86DC3E: mov     ecx, esi; this
0x86DC40: call    sub_760010
0x86DC45: lea     ecx, [esp+30h+var_10]
0x86DC49: push    ecx
0x86DC4A: call    sub_772630
0x86DC4F: add     esp, 4
0x86DC52: mov     ebp, eax
0x86DC54: cmp     edi, [ebp+0]
0x86DC57: mov     byte ptr [esp+30h+var_4], 1Bh
0x86DC5C: jz      short loc_86DC7D
0x86DC5E: test    edi, edi
0x86DC60: jz      short loc_86DC6E
0x86DC62: add     [edi+5Ch], ebx
0x86DC65: jnz     short loc_86DC6E
0x86DC67: mov     ecx, edi
0x86DC69: call    sub_772560
0x86DC6E: mov     edi, [ebp+0]
0x86DC71: test    edi, edi
0x86DC73: mov     [esp+30h+a3], edi
0x86DC77: jz      short loc_86DC7D
0x86DC79: add     dword ptr [edi+5Ch], 1
0x86DC7D: mov     eax, [esp+30h+var_10]
0x86DC81: test    eax, eax
0x86DC83: mov     byte ptr [esp+30h+var_4], 1
0x86DC88: jz      short loc_86DC9C
0x86DC8A: add     [eax+5Ch], ebx
0x86DC8D: mov     ecx, eax
0x86DC8F: add     eax, 5Ch ; '\'
0x86DC92: cmp     dword ptr [eax], 0
0x86DC95: jnz     short loc_86DC9C
0x86DC97: call    sub_772560
0x86DC9C: push    2
0x86DC9E: push    1
0x86DCA0: push    1
0x86DCA2: push    edi
0x86DCA3: call    sub_801110
0x86DCA8: add     esp, 10h
0x86DCAB: push    edi; a3
0x86DCAC: push    1; a2
0x86DCAE: mov     ecx, esi; this
0x86DCB0: call    sub_760010
0x86DCB5: lea     edx, [esp+30h+var_10]
0x86DCB9: push    edx
0x86DCBA: call    sub_772630
0x86DCBF: add     esp, 4
0x86DCC2: mov     ebp, eax
0x86DCC4: cmp     edi, [ebp+0]
0x86DCC7: mov     byte ptr [esp+30h+var_4], 1Ch
0x86DCCC: jz      short loc_86DCED
0x86DCCE: test    edi, edi
0x86DCD0: jz      short loc_86DCDE
0x86DCD2: add     [edi+5Ch], ebx
0x86DCD5: jnz     short loc_86DCDE
0x86DCD7: mov     ecx, edi
0x86DCD9: call    sub_772560
0x86DCDE: mov     edi, [ebp+0]
0x86DCE1: test    edi, edi
0x86DCE3: mov     [esp+30h+a3], edi
0x86DCE7: jz      short loc_86DCED
0x86DCE9: add     dword ptr [edi+5Ch], 1
0x86DCED: mov     eax, [esp+30h+var_10]
0x86DCF1: test    eax, eax
0x86DCF3: mov     byte ptr [esp+30h+var_4], 1
0x86DCF8: jz      short loc_86DD0C
0x86DCFA: add     [eax+5Ch], ebx
0x86DCFD: mov     ecx, eax
0x86DCFF: add     eax, 5Ch ; '\'
0x86DD02: cmp     dword ptr [eax], 0
0x86DD05: jnz     short loc_86DD0C
0x86DD07: call    sub_772560
0x86DD0C: push    2
0x86DD0E: push    1
0x86DD10: push    2
0x86DD12: push    edi
0x86DD13: call    sub_801110
0x86DD18: add     esp, 10h
0x86DD1B: push    edi; a3
0x86DD1C: push    2; a2
0x86DD1E: mov     ecx, esi; this
0x86DD20: call    sub_760010
0x86DD25: lea     eax, [esp+30h+var_10]
0x86DD29: push    eax
0x86DD2A: call    sub_772630
0x86DD2F: add     esp, 4
0x86DD32: mov     ebp, eax
0x86DD34: cmp     edi, [ebp+0]
0x86DD37: mov     byte ptr [esp+30h+var_4], 1Dh
0x86DD3C: jz      short loc_86DD5D
0x86DD3E: test    edi, edi
0x86DD40: jz      short loc_86DD4E
0x86DD42: add     [edi+5Ch], ebx
0x86DD45: jnz     short loc_86DD4E
0x86DD47: mov     ecx, edi
0x86DD49: call    sub_772560
0x86DD4E: mov     edi, [ebp+0]
0x86DD51: test    edi, edi
0x86DD53: mov     [esp+30h+a3], edi
0x86DD57: jz      short loc_86DD5D
0x86DD59: add     dword ptr [edi+5Ch], 1
0x86DD5D: mov     eax, [esp+30h+var_10]
0x86DD61: test    eax, eax
0x86DD63: mov     byte ptr [esp+30h+var_4], 1
0x86DD68: jz      short loc_86DD7C
0x86DD6A: add     [eax+5Ch], ebx
0x86DD6D: mov     ecx, eax
0x86DD6F: add     eax, 5Ch ; '\'
0x86DD72: cmp     dword ptr [eax], 0
0x86DD75: jnz     short loc_86DD7C
0x86DD77: call    sub_772560
0x86DD7C: push    2
0x86DD7E: push    1
0x86DD80: push    3
0x86DD82: push    edi
0x86DD83: call    sub_801110
0x86DD88: add     esp, 10h
0x86DD8B: push    edi; a3
0x86DD8C: push    3; a2
0x86DD8E: mov     ecx, esi; this
0x86DD90: call    sub_760010
0x86DD95: lea     ecx, [esp+30h+var_10]
0x86DD99: push    ecx
0x86DD9A: call    sub_772630
0x86DD9F: add     esp, 4
0x86DDA2: mov     ebp, eax
0x86DDA4: cmp     edi, [ebp+0]
0x86DDA7: mov     byte ptr [esp+30h+var_4], 1Eh
0x86DDAC: jz      short loc_86DDCD
0x86DDAE: test    edi, edi
0x86DDB0: jz      short loc_86DDBE
0x86DDB2: add     [edi+5Ch], ebx
0x86DDB5: jnz     short loc_86DDBE
0x86DDB7: mov     ecx, edi
0x86DDB9: call    sub_772560
0x86DDBE: mov     edi, [ebp+0]
0x86DDC1: test    edi, edi
0x86DDC3: mov     [esp+30h+a3], edi
0x86DDC7: jz      short loc_86DDCD
0x86DDC9: add     dword ptr [edi+5Ch], 1
0x86DDCD: mov     eax, [esp+30h+var_10]
0x86DDD1: test    eax, eax
0x86DDD3: mov     byte ptr [esp+30h+var_4], 1
0x86DDD8: jz      short loc_86DDEC
0x86DDDA: add     [eax+5Ch], ebx
0x86DDDD: mov     ecx, eax
0x86DDDF: add     eax, 5Ch ; '\'
0x86DDE2: cmp     dword ptr [eax], 0
0x86DDE5: jnz     short loc_86DDEC
0x86DDE7: call    sub_772560
0x86DDEC: push    2
0x86DDEE: push    1
0x86DDF0: push    4
0x86DDF2: push    edi
0x86DDF3: call    sub_801110
0x86DDF8: add     esp, 10h
0x86DDFB: push    edi; a3
0x86DDFC: push    4; a2
0x86DDFE: mov     ecx, esi; this
0x86DE00: call    sub_760010
0x86DE05: lea     edx, [esp+30h+var_10]
0x86DE09: push    edx
0x86DE0A: call    sub_772630
0x86DE0F: add     esp, 4
0x86DE12: mov     ebp, eax
0x86DE14: cmp     edi, [ebp+0]
0x86DE17: mov     byte ptr [esp+30h+var_4], 1Fh
0x86DE1C: jz      short loc_86DE3D
0x86DE1E: test    edi, edi
0x86DE20: jz      short loc_86DE2E
0x86DE22: add     [edi+5Ch], ebx
0x86DE25: jnz     short loc_86DE2E
0x86DE27: mov     ecx, edi
0x86DE29: call    sub_772560
0x86DE2E: mov     edi, [ebp+0]
0x86DE31: test    edi, edi
0x86DE33: mov     [esp+30h+a3], edi
0x86DE37: jz      short loc_86DE3D
0x86DE39: add     dword ptr [edi+5Ch], 1
0x86DE3D: mov     eax, [esp+30h+var_10]
0x86DE41: test    eax, eax
0x86DE43: mov     byte ptr [esp+30h+var_4], 1
0x86DE48: jz      short loc_86DE5C
0x86DE4A: add     [eax+5Ch], ebx
0x86DE4D: mov     ecx, eax
0x86DE4F: add     eax, 5Ch ; '\'
0x86DE52: cmp     dword ptr [eax], 0
0x86DE55: jnz     short loc_86DE5C
0x86DE57: call    sub_772560
0x86DE5C: push    0
0x86DE5E: push    3
0x86DE60: push    5
0x86DE62: push    edi
0x86DE63: call    sub_801110
0x86DE68: mov     eax, ds:0B43110h
0x86DE6D: add     esp, 10h
0x86DE70: push    eax; a2
0x86DE71: mov     ecx, edi; this
0x86DE73: call    sub_76C910
0x86DE78: push    edi; a3
0x86DE79: push    5; a2
0x86DE7B: mov     ecx, esi; this
0x86DE7D: call    sub_760010
0x86DE82: lea     ecx, [esp+30h+var_10]
0x86DE86: push    ecx
0x86DE87: call    sub_772630
0x86DE8C: add     esp, 4
0x86DE8F: mov     ebp, eax
0x86DE91: cmp     edi, [ebp+0]
0x86DE94: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x86DE99: jz      short loc_86DEBA
0x86DE9B: test    edi, edi
0x86DE9D: jz      short loc_86DEAB
0x86DE9F: add     [edi+5Ch], ebx
0x86DEA2: jnz     short loc_86DEAB
0x86DEA4: mov     ecx, edi
0x86DEA6: call    sub_772560
0x86DEAB: mov     edi, [ebp+0]
0x86DEAE: test    edi, edi
0x86DEB0: mov     [esp+30h+a3], edi
0x86DEB4: jz      short loc_86DEBA
0x86DEB6: add     dword ptr [edi+5Ch], 1
0x86DEBA: mov     eax, [esp+30h+var_10]
0x86DEBE: test    eax, eax
0x86DEC0: mov     byte ptr [esp+30h+var_4], 1
0x86DEC5: jz      short loc_86DED9
0x86DEC7: add     [eax+5Ch], ebx
0x86DECA: mov     ecx, eax
0x86DECC: add     eax, 5Ch ; '\'
0x86DECF: cmp     dword ptr [eax], 0
0x86DED2: jnz     short loc_86DED9
0x86DED4: call    sub_772560
0x86DED9: push    2
0x86DEDB: push    1
0x86DEDD: push    6
0x86DEDF: push    edi
0x86DEE0: call    sub_801110
0x86DEE5: add     esp, 10h
0x86DEE8: push    edi; a3
0x86DEE9: push    6; a2
0x86DEEB: mov     ecx, esi; this
0x86DEED: call    sub_760010
0x86DEF2: lea     edx, [esp+30h+var_10]
0x86DEF6: push    edx
0x86DEF7: call    sub_772630
0x86DEFC: add     esp, 4
0x86DEFF: mov     ebp, eax
0x86DF01: cmp     edi, [ebp+0]
0x86DF04: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x86DF09: jz      short loc_86DF2A
0x86DF0B: test    edi, edi
0x86DF0D: jz      short loc_86DF1B
0x86DF0F: add     [edi+5Ch], ebx
0x86DF12: jnz     short loc_86DF1B
0x86DF14: mov     ecx, edi
0x86DF16: call    sub_772560
0x86DF1B: mov     edi, [ebp+0]
0x86DF1E: test    edi, edi
0x86DF20: mov     [esp+30h+a3], edi
0x86DF24: jz      short loc_86DF2A
0x86DF26: add     dword ptr [edi+5Ch], 1
0x86DF2A: mov     eax, [esp+30h+var_10]
0x86DF2E: test    eax, eax
0x86DF30: mov     byte ptr [esp+30h+var_4], 1
0x86DF35: jz      short loc_86DF49
0x86DF37: add     [eax+5Ch], ebx
0x86DF3A: mov     ecx, eax
0x86DF3C: add     eax, 5Ch ; '\'
0x86DF3F: cmp     dword ptr [eax], 0
0x86DF42: jnz     short loc_86DF49
0x86DF44: call    sub_772560
0x86DF49: push    0
0x86DF4B: push    3
0x86DF4D: push    7
0x86DF4F: push    edi
0x86DF50: call    sub_801110
0x86DF55: add     esp, 10h
0x86DF58: push    edi; a3
0x86DF59: push    7; a2
0x86DF5B: mov     ecx, esi; this
0x86DF5D: call    sub_760010
0x86DF62: mov     eax, [esp+30h+var_18]
0x86DF66: mov     ebx, [eax+0C0h]
0x86DF6C: mov     ebp, [esi+58h]
0x86DF6F: cmp     ebp, ebx
0x86DF71: jz      short loc_86DFA5
0x86DF73: test    ebp, ebp
0x86DF75: jz      short loc_86DF94
0x86DF77: lea     ecx, [ebp+4]
0x86DF7A: push    ecx; lpAddend
0x86DF7B: call    dword ptr ds:0A2807Ch
0x86DF81: test    eax, eax
0x86DF83: jnz     short loc_86DF94
0x86DF85: test    ebp, ebp
0x86DF87: jz      short loc_86DF94
0x86DF89: mov     edx, [ebp+0]
0x86DF8C: mov     eax, [edx]
0x86DF8E: push    1
0x86DF90: mov     ecx, ebp
0x86DF92: call    eax
0x86DF94: test    ebx, ebx
0x86DF96: mov     [esi+58h], ebx
0x86DF99: jz      short loc_86DFA5
0x86DF9B: add     ebx, 4
0x86DF9E: push    ebx; lpAddend
0x86DF9F: call    dword ptr ds:0A28078h
0x86DFA5: mov     ecx, [esp+30h+var_18]
0x86DFA9: mov     ebx, [ecx+150h]
0x86DFAF: mov     ebp, [esi+44h]
0x86DFB2: cmp     ebp, ebx
0x86DFB4: jz      short loc_86DFE8
0x86DFB6: test    ebp, ebp
0x86DFB8: jz      short loc_86DFD7
0x86DFBA: lea     edx, [ebp+4]
0x86DFBD: push    edx; lpAddend
0x86DFBE: call    dword ptr ds:0A2807Ch
0x86DFC4: test    eax, eax
0x86DFC6: jnz     short loc_86DFD7
0x86DFC8: test    ebp, ebp
0x86DFCA: jz      short loc_86DFD7
0x86DFCC: mov     eax, [ebp+0]
0x86DFCF: mov     edx, [eax]
0x86DFD1: push    1
0x86DFD3: mov     ecx, ebp
0x86DFD5: call    edx
0x86DFD7: test    ebx, ebx
0x86DFD9: mov     [esi+44h], ebx
0x86DFDC: jz      short loc_86DFE8
0x86DFDE: add     ebx, 4
0x86DFE1: push    ebx; lpAddend
0x86DFE2: call    dword ptr ds:0A28078h
0x86DFE8: cmp     dword ptr [esi+30h], 0
0x86DFEC: jnz     short loc_86DFF6
0x86DFEE: call    sub_772DF0
0x86DFF3: mov     [esi+30h], eax
0x86DFF6: mov     ecx, [esi+30h]
0x86DFF9: push    0
0x86DFFB: push    0
0x86DFFD: push    1Bh
0x86DFFF: call    sub_772CD0
0x86E004: cmp     dword ptr [esi+30h], 0
0x86E008: jnz     short loc_86E012
0x86E00A: call    sub_772DF0
0x86E00F: mov     [esi+30h], eax
0x86E012: mov     ecx, [esi+30h]
0x86E015: push    0
0x86E017: push    0
0x86E019: push    0Fh
0x86E01B: call    sub_772CD0
0x86E020: cmp     dword ptr [esi+30h], 0
0x86E024: jnz     short loc_86E02E
0x86E026: call    sub_772DF0
0x86E02B: mov     [esi+30h], eax
0x86E02E: mov     ecx, [esi+30h]
0x86E031: push    0
0x86E033: push    1
0x86E035: push    7
0x86E037: call    sub_772CD0
0x86E03C: cmp     dword ptr [esi+30h], 0
0x86E040: jnz     short loc_86E04A
0x86E042: call    sub_772DF0
0x86E047: mov     [esi+30h], eax
0x86E04A: mov     ecx, [esi+30h]
0x86E04D: push    0
0x86E04F: push    4
0x86E051: push    17h
0x86E053: call    sub_772CD0
0x86E058: cmp     dword ptr [esi+30h], 0
0x86E05C: jnz     short loc_86E066
0x86E05E: call    sub_772DF0
0x86E063: mov     [esi+30h], eax
0x86E066: mov     ecx, [esi+30h]
0x86E069: push    0
0x86E06B: push    1
0x86E06D: push    0Eh
0x86E06F: call    sub_772CD0
0x86E074: cmp     dword ptr [esi+30h], 0
0x86E078: jnz     short loc_86E082
0x86E07A: call    sub_772DF0
0x86E07F: mov     [esi+30h], eax
0x86E082: mov     ecx, [esi+30h]
0x86E085: push    0
0x86E087: push    0
0x86E089: push    34h ; '4'
0x86E08B: call    sub_772CD0
0x86E090: or      ebx, 0FFFFFFFFh
0x86E093: cmp     esi, ds:0B476B0h
0x86E099: mov     dword ptr ds:0B43DFCh, 78088h
0x86E0A3: mov     dword ptr ds:0B4448Ch, 18Ch
0x86E0AD: jz      short loc_86E0CD
0x86E0AF: add     [esi+60h], ebx
0x86E0B2: jnz     short loc_86E0BB
0x86E0B4: mov     ecx, esi
0x86E0B6: call    sub_7604D0
0x86E0BB: mov     esi, ds:0B476B0h
0x86E0C1: test    esi, esi
0x86E0C3: mov     [esp+30h+var_14], esi
0x86E0C7: jz      short loc_86E0CD
0x86E0C9: add     dword ptr [esi+60h], 1
0x86E0CD: cmp     dword ptr [esi+18h], 8
0x86E0D1: jnb     loc_86E464
0x86E0D7: lea     eax, [esp+30h+var_10]
0x86E0DB: push    eax
0x86E0DC: call    sub_772630
0x86E0E1: add     esp, 4
0x86E0E4: mov     ebp, eax
0x86E0E6: cmp     edi, [ebp+0]
0x86E0E9: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x86E0EE: jz      short loc_86E10F
0x86E0F0: test    edi, edi
0x86E0F2: jz      short loc_86E100
0x86E0F4: add     [edi+5Ch], ebx
0x86E0F7: jnz     short loc_86E100
0x86E0F9: mov     ecx, edi
0x86E0FB: call    sub_772560
0x86E100: mov     edi, [ebp+0]
0x86E103: test    edi, edi
0x86E105: mov     [esp+30h+a3], edi
0x86E109: jz      short loc_86E10F
0x86E10B: add     dword ptr [edi+5Ch], 1
0x86E10F: mov     eax, [esp+30h+var_10]
0x86E113: test    eax, eax
0x86E115: mov     byte ptr [esp+30h+var_4], 1
0x86E11A: jz      short loc_86E12E
0x86E11C: add     [eax+5Ch], ebx
0x86E11F: mov     ecx, eax
0x86E121: add     eax, 5Ch ; '\'
0x86E124: cmp     dword ptr [eax], 0
0x86E127: jnz     short loc_86E12E
0x86E129: call    sub_772560
0x86E12E: push    2
0x86E130: push    1
0x86E132: push    0
0x86E134: push    edi
0x86E135: call    sub_801110
0x86E13A: add     esp, 10h
0x86E13D: push    edi; a3
0x86E13E: push    0; a2
0x86E140: mov     ecx, esi; this
0x86E142: call    sub_760010
0x86E147: lea     ecx, [esp+30h+var_10]
0x86E14B: push    ecx
0x86E14C: call    sub_772630
0x86E151: add     esp, 4
0x86E154: mov     ebp, eax
0x86E156: cmp     edi, [ebp+0]
0x86E159: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x86E15E: jz      short loc_86E17F
0x86E160: test    edi, edi
0x86E162: jz      short loc_86E170
0x86E164: add     [edi+5Ch], ebx
0x86E167: jnz     short loc_86E170
0x86E169: mov     ecx, edi
0x86E16B: call    sub_772560
0x86E170: mov     edi, [ebp+0]
0x86E173: test    edi, edi
0x86E175: mov     [esp+30h+a3], edi
0x86E179: jz      short loc_86E17F
0x86E17B: add     dword ptr [edi+5Ch], 1
0x86E17F: mov     eax, [esp+30h+var_10]
0x86E183: test    eax, eax
0x86E185: mov     byte ptr [esp+30h+var_4], 1
0x86E18A: jz      short loc_86E19E
0x86E18C: add     [eax+5Ch], ebx
0x86E18F: mov     ecx, eax
0x86E191: add     eax, 5Ch ; '\'
0x86E194: cmp     dword ptr [eax], 0
0x86E197: jnz     short loc_86E19E
0x86E199: call    sub_772560
0x86E19E: push    2
0x86E1A0: push    1
0x86E1A2: push    1
0x86E1A4: push    edi
0x86E1A5: call    sub_801110
0x86E1AA: add     esp, 10h
0x86E1AD: push    edi; a3
0x86E1AE: push    1; a2
0x86E1B0: mov     ecx, esi; this
0x86E1B2: call    sub_760010
0x86E1B7: lea     edx, [esp+30h+var_10]
0x86E1BB: push    edx
0x86E1BC: call    sub_772630
0x86E1C1: add     esp, 4
0x86E1C4: mov     ebp, eax
0x86E1C6: cmp     edi, [ebp+0]
0x86E1C9: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x86E1CE: jz      short loc_86E1EF
0x86E1D0: test    edi, edi
0x86E1D2: jz      short loc_86E1E0
0x86E1D4: add     [edi+5Ch], ebx
0x86E1D7: jnz     short loc_86E1E0
0x86E1D9: mov     ecx, edi
0x86E1DB: call    sub_772560
0x86E1E0: mov     edi, [ebp+0]
0x86E1E3: test    edi, edi
0x86E1E5: mov     [esp+30h+a3], edi
0x86E1E9: jz      short loc_86E1EF
0x86E1EB: add     dword ptr [edi+5Ch], 1
0x86E1EF: mov     eax, [esp+30h+var_10]
0x86E1F3: test    eax, eax
0x86E1F5: mov     byte ptr [esp+30h+var_4], 1
0x86E1FA: jz      short loc_86E20E
0x86E1FC: add     [eax+5Ch], ebx
0x86E1FF: mov     ecx, eax
0x86E201: add     eax, 5Ch ; '\'
0x86E204: cmp     dword ptr [eax], 0
0x86E207: jnz     short loc_86E20E
0x86E209: call    sub_772560
0x86E20E: push    2
0x86E210: push    1
0x86E212: push    2
0x86E214: push    edi
0x86E215: call    sub_801110
0x86E21A: add     esp, 10h
0x86E21D: push    edi; a3
0x86E21E: push    2; a2
0x86E220: mov     ecx, esi; this
0x86E222: call    sub_760010
0x86E227: lea     eax, [esp+30h+var_10]
0x86E22B: push    eax
0x86E22C: call    sub_772630
0x86E231: add     esp, 4
0x86E234: mov     ebp, eax
0x86E236: cmp     edi, [ebp+0]
0x86E239: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x86E23E: jz      short loc_86E25F
0x86E240: test    edi, edi
0x86E242: jz      short loc_86E250
0x86E244: add     [edi+5Ch], ebx
0x86E247: jnz     short loc_86E250
0x86E249: mov     ecx, edi
0x86E24B: call    sub_772560
0x86E250: mov     edi, [ebp+0]
0x86E253: test    edi, edi
0x86E255: mov     [esp+30h+a3], edi
0x86E259: jz      short loc_86E25F
0x86E25B: add     dword ptr [edi+5Ch], 1
0x86E25F: mov     eax, [esp+30h+var_10]
0x86E263: test    eax, eax
0x86E265: mov     byte ptr [esp+30h+var_4], 1
0x86E26A: jz      short loc_86E27E
0x86E26C: add     [eax+5Ch], ebx
0x86E26F: mov     ecx, eax
0x86E271: add     eax, 5Ch ; '\'
0x86E274: cmp     dword ptr [eax], 0
0x86E277: jnz     short loc_86E27E
0x86E279: call    sub_772560
0x86E27E: push    2
0x86E280: push    1
0x86E282: push    3
0x86E284: push    edi
0x86E285: call    sub_801110
0x86E28A: add     esp, 10h
0x86E28D: push    edi; a3
0x86E28E: push    3; a2
0x86E290: mov     ecx, esi; this
0x86E292: call    sub_760010
0x86E297: lea     ecx, [esp+30h+var_10]
0x86E29B: push    ecx
0x86E29C: call    sub_772630
0x86E2A1: add     esp, 4
0x86E2A4: mov     ebp, eax
0x86E2A6: cmp     edi, [ebp+0]
0x86E2A9: mov     byte ptr [esp+30h+var_4], 26h ; '&'
0x86E2AE: jz      short loc_86E2CF
0x86E2B0: test    edi, edi
0x86E2B2: jz      short loc_86E2C0
0x86E2B4: add     [edi+5Ch], ebx
0x86E2B7: jnz     short loc_86E2C0
0x86E2B9: mov     ecx, edi
0x86E2BB: call    sub_772560
0x86E2C0: mov     edi, [ebp+0]
0x86E2C3: test    edi, edi
0x86E2C5: mov     [esp+30h+a3], edi
0x86E2C9: jz      short loc_86E2CF
0x86E2CB: add     dword ptr [edi+5Ch], 1
0x86E2CF: mov     eax, [esp+30h+var_10]
0x86E2D3: test    eax, eax
0x86E2D5: mov     byte ptr [esp+30h+var_4], 1
0x86E2DA: jz      short loc_86E2EE
0x86E2DC: add     [eax+5Ch], ebx
0x86E2DF: mov     ecx, eax
0x86E2E1: add     eax, 5Ch ; '\'
0x86E2E4: cmp     dword ptr [eax], 0
0x86E2E7: jnz     short loc_86E2EE
0x86E2E9: call    sub_772560
0x86E2EE: push    2
0x86E2F0: push    1
0x86E2F2: push    4
0x86E2F4: push    edi
0x86E2F5: call    sub_801110
0x86E2FA: add     esp, 10h
0x86E2FD: push    edi; a3
0x86E2FE: push    4; a2
0x86E300: mov     ecx, esi; this
0x86E302: call    sub_760010
0x86E307: lea     edx, [esp+30h+var_10]
0x86E30B: push    edx
0x86E30C: call    sub_772630
0x86E311: add     esp, 4
0x86E314: mov     ebp, eax
0x86E316: cmp     edi, [ebp+0]
0x86E319: mov     byte ptr [esp+30h+var_4], 27h ; '''
0x86E31E: jz      short loc_86E33F
0x86E320: test    edi, edi
0x86E322: jz      short loc_86E330
0x86E324: add     [edi+5Ch], ebx
0x86E327: jnz     short loc_86E330
0x86E329: mov     ecx, edi
0x86E32B: call    sub_772560
0x86E330: mov     edi, [ebp+0]
0x86E333: test    edi, edi
0x86E335: mov     [esp+30h+a3], edi
0x86E339: jz      short loc_86E33F
0x86E33B: add     dword ptr [edi+5Ch], 1
0x86E33F: mov     eax, [esp+30h+var_10]
0x86E343: test    eax, eax
0x86E345: mov     byte ptr [esp+30h+var_4], 1
0x86E34A: jz      short loc_86E35E
0x86E34C: add     [eax+5Ch], ebx
0x86E34F: mov     ecx, eax
0x86E351: add     eax, 5Ch ; '\'
0x86E354: cmp     dword ptr [eax], 0
0x86E357: jnz     short loc_86E35E
0x86E359: call    sub_772560
0x86E35E: push    0
0x86E360: push    3
0x86E362: push    5
0x86E364: push    edi
0x86E365: call    sub_801110
0x86E36A: mov     eax, ds:0B43110h
0x86E36F: add     esp, 10h
0x86E372: push    eax; a2
0x86E373: mov     ecx, edi; this
0x86E375: call    sub_76C910
0x86E37A: push    edi; a3
0x86E37B: push    5; a2
0x86E37D: mov     ecx, esi; this
0x86E37F: call    sub_760010
0x86E384: lea     ecx, [esp+30h+var_10]
0x86E388: push    ecx
0x86E389: call    sub_772630
0x86E38E: add     esp, 4
0x86E391: mov     ebp, eax
0x86E393: cmp     edi, [ebp+0]
0x86E396: mov     byte ptr [esp+30h+var_4], 28h ; '('
0x86E39B: jz      short loc_86E3BC
0x86E39D: test    edi, edi
0x86E39F: jz      short loc_86E3AD
0x86E3A1: add     [edi+5Ch], ebx
0x86E3A4: jnz     short loc_86E3AD
0x86E3A6: mov     ecx, edi
0x86E3A8: call    sub_772560
0x86E3AD: mov     edi, [ebp+0]
0x86E3B0: test    edi, edi
0x86E3B2: mov     [esp+30h+a3], edi
0x86E3B6: jz      short loc_86E3BC
0x86E3B8: add     dword ptr [edi+5Ch], 1
0x86E3BC: mov     eax, [esp+30h+var_10]
0x86E3C0: test    eax, eax
0x86E3C2: mov     byte ptr [esp+30h+var_4], 1
0x86E3C7: jz      short loc_86E3DB
0x86E3C9: add     [eax+5Ch], ebx
0x86E3CC: mov     ecx, eax
0x86E3CE: add     eax, 5Ch ; '\'
0x86E3D1: cmp     dword ptr [eax], 0
0x86E3D4: jnz     short loc_86E3DB
0x86E3D6: call    sub_772560
0x86E3DB: push    2
0x86E3DD: push    1
0x86E3DF: push    6
0x86E3E1: push    edi
0x86E3E2: call    sub_801110
0x86E3E7: add     esp, 10h
0x86E3EA: push    edi; a3
0x86E3EB: push    6; a2
0x86E3ED: mov     ecx, esi; this
0x86E3EF: call    sub_760010
0x86E3F4: lea     edx, [esp+30h+var_10]
0x86E3F8: push    edx
0x86E3F9: call    sub_772630
0x86E3FE: add     esp, 4
0x86E401: mov     ebp, eax
0x86E403: cmp     edi, [ebp+0]
0x86E406: mov     byte ptr [esp+30h+var_4], 29h ; ')'
0x86E40B: jz      short loc_86E42C
0x86E40D: test    edi, edi
0x86E40F: jz      short loc_86E41D
0x86E411: add     [edi+5Ch], ebx
0x86E414: jnz     short loc_86E41D
0x86E416: mov     ecx, edi
0x86E418: call    sub_772560
0x86E41D: mov     edi, [ebp+0]
0x86E420: test    edi, edi
0x86E422: mov     [esp+30h+a3], edi
0x86E426: jz      short loc_86E42C
0x86E428: add     dword ptr [edi+5Ch], 1
0x86E42C: mov     eax, [esp+30h+var_10]
0x86E430: test    eax, eax
0x86E432: mov     byte ptr [esp+30h+var_4], 1
0x86E437: jz      short loc_86E44B
0x86E439: add     [eax+5Ch], ebx
0x86E43C: mov     ecx, eax
0x86E43E: add     eax, 5Ch ; '\'
0x86E441: cmp     dword ptr [eax], 0
0x86E444: jnz     short loc_86E44B
0x86E446: call    sub_772560
0x86E44B: push    0
0x86E44D: push    3
0x86E44F: push    7
0x86E451: push    edi
0x86E452: call    sub_801110
0x86E457: add     esp, 10h
0x86E45A: push    edi; a3
0x86E45B: push    7; a2
0x86E45D: mov     ecx, esi; this
0x86E45F: call    sub_760010
0x86E464: mov     eax, [esp+30h+var_18]
0x86E468: mov     ebx, [eax+0C4h]
0x86E46E: mov     ebp, [esi+58h]
0x86E471: cmp     ebp, ebx
0x86E473: jz      short loc_86E4A7
0x86E475: test    ebp, ebp
0x86E477: jz      short loc_86E496
0x86E479: lea     ecx, [ebp+4]
0x86E47C: push    ecx; lpAddend
0x86E47D: call    dword ptr ds:0A2807Ch
0x86E483: test    eax, eax
0x86E485: jnz     short loc_86E496
0x86E487: test    ebp, ebp
0x86E489: jz      short loc_86E496
0x86E48B: mov     edx, [ebp+0]
0x86E48E: mov     eax, [edx]
0x86E490: push    1
0x86E492: mov     ecx, ebp
0x86E494: call    eax
0x86E496: test    ebx, ebx
0x86E498: mov     [esi+58h], ebx
0x86E49B: jz      short loc_86E4A7
0x86E49D: add     ebx, 4
0x86E4A0: push    ebx; lpAddend
0x86E4A1: call    dword ptr ds:0A28078h
0x86E4A7: mov     ecx, [esp+30h+var_18]
0x86E4AB: mov     ebx, [ecx+154h]
0x86E4B1: mov     ebp, [esi+44h]
0x86E4B4: cmp     ebp, ebx
0x86E4B6: jz      short loc_86E4EA
0x86E4B8: test    ebp, ebp
0x86E4BA: jz      short loc_86E4D9
0x86E4BC: lea     edx, [ebp+4]
0x86E4BF: push    edx; lpAddend
0x86E4C0: call    dword ptr ds:0A2807Ch
0x86E4C6: test    eax, eax
0x86E4C8: jnz     short loc_86E4D9
0x86E4CA: test    ebp, ebp
0x86E4CC: jz      short loc_86E4D9
0x86E4CE: mov     eax, [ebp+0]
0x86E4D1: mov     edx, [eax]
0x86E4D3: push    1
0x86E4D5: mov     ecx, ebp
0x86E4D7: call    edx
0x86E4D9: test    ebx, ebx
0x86E4DB: mov     [esi+44h], ebx
0x86E4DE: jz      short loc_86E4EA
0x86E4E0: add     ebx, 4
0x86E4E3: push    ebx; lpAddend
0x86E4E4: call    dword ptr ds:0A28078h
0x86E4EA: cmp     dword ptr [esi+30h], 0
0x86E4EE: jnz     short loc_86E4F8
0x86E4F0: call    sub_772DF0
0x86E4F5: mov     [esi+30h], eax
0x86E4F8: mov     ecx, [esi+30h]
0x86E4FB: push    0
0x86E4FD: push    0
0x86E4FF: push    1Bh
0x86E501: call    sub_772CD0
0x86E506: cmp     dword ptr [esi+30h], 0
0x86E50A: jnz     short loc_86E514
0x86E50C: call    sub_772DF0
0x86E511: mov     [esi+30h], eax
0x86E514: mov     ecx, [esi+30h]
0x86E517: push    0
0x86E519: push    0
0x86E51B: push    0Fh
0x86E51D: call    sub_772CD0
0x86E522: cmp     dword ptr [esi+30h], 0
0x86E526: jnz     short loc_86E530
0x86E528: call    sub_772DF0
0x86E52D: mov     [esi+30h], eax
0x86E530: mov     ecx, [esi+30h]
0x86E533: push    0
0x86E535: push    1
0x86E537: push    7
0x86E539: call    sub_772CD0
0x86E53E: cmp     dword ptr [esi+30h], 0
0x86E542: jnz     short loc_86E54C
0x86E544: call    sub_772DF0
0x86E549: mov     [esi+30h], eax
0x86E54C: mov     ecx, [esi+30h]
0x86E54F: push    0
0x86E551: push    4
0x86E553: push    17h
0x86E555: call    sub_772CD0
0x86E55A: cmp     dword ptr [esi+30h], 0
0x86E55E: jnz     short loc_86E568
0x86E560: call    sub_772DF0
0x86E565: mov     [esi+30h], eax
0x86E568: mov     ecx, [esi+30h]
0x86E56B: push    0
0x86E56D: push    1
0x86E56F: push    0Eh
0x86E571: call    sub_772CD0
0x86E576: cmp     dword ptr [esi+30h], 0
0x86E57A: jnz     short loc_86E584
0x86E57C: call    sub_772DF0
0x86E581: mov     [esi+30h], eax
0x86E584: mov     ecx, [esi+30h]
0x86E587: push    0
0x86E589: push    0
0x86E58B: push    34h ; '4'
0x86E58D: call    sub_772CD0
0x86E592: cmp     esi, ds:0B476B4h
0x86E598: mov     ebx, 380F2h
0x86E59D: mov     ds:0B43E14h, ebx
0x86E5A3: mov     dword ptr ds:0B444A4h, 10Ch
0x86E5AD: jz      short loc_86E5CE
0x86E5AF: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86E5B3: jnz     short loc_86E5BC
0x86E5B5: mov     ecx, esi
0x86E5B7: call    sub_7604D0
0x86E5BC: mov     esi, ds:0B476B4h
0x86E5C2: test    esi, esi
0x86E5C4: mov     [esp+30h+var_14], esi
0x86E5C8: jz      short loc_86E5CE
0x86E5CA: add     dword ptr [esi+60h], 1
0x86E5CE: cmp     dword ptr [esi+18h], 8
0x86E5D2: jnb     loc_86E975
0x86E5D8: lea     eax, [esp+30h+var_10]
0x86E5DC: push    eax
0x86E5DD: call    sub_772630
0x86E5E2: add     esp, 4
0x86E5E5: mov     ebp, eax
0x86E5E7: cmp     edi, [ebp+0]
0x86E5EA: mov     byte ptr [esp+30h+var_4], 2Ah ; '*'
0x86E5EF: jz      short loc_86E611
0x86E5F1: test    edi, edi
0x86E5F3: jz      short loc_86E602
0x86E5F5: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E5F9: jnz     short loc_86E602
0x86E5FB: mov     ecx, edi
0x86E5FD: call    sub_772560
0x86E602: mov     edi, [ebp+0]
0x86E605: test    edi, edi
0x86E607: mov     [esp+30h+a3], edi
0x86E60B: jz      short loc_86E611
0x86E60D: add     dword ptr [edi+5Ch], 1
0x86E611: mov     eax, [esp+30h+var_10]
0x86E615: test    eax, eax
0x86E617: mov     byte ptr [esp+30h+var_4], 1
0x86E61C: jz      short loc_86E631
0x86E61E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E622: mov     ecx, eax
0x86E624: add     eax, 5Ch ; '\'
0x86E627: cmp     dword ptr [eax], 0
0x86E62A: jnz     short loc_86E631
0x86E62C: call    sub_772560
0x86E631: push    2
0x86E633: push    1
0x86E635: push    0
0x86E637: push    edi
0x86E638: call    sub_801110
0x86E63D: add     esp, 10h
0x86E640: push    edi; a3
0x86E641: push    0; a2
0x86E643: mov     ecx, esi; this
0x86E645: call    sub_760010
0x86E64A: lea     ecx, [esp+30h+var_10]
0x86E64E: push    ecx
0x86E64F: call    sub_772630
0x86E654: add     esp, 4
0x86E657: mov     ebp, eax
0x86E659: cmp     edi, [ebp+0]
0x86E65C: mov     byte ptr [esp+30h+var_4], 2Bh ; '+'
0x86E661: jz      short loc_86E683
0x86E663: test    edi, edi
0x86E665: jz      short loc_86E674
0x86E667: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E66B: jnz     short loc_86E674
0x86E66D: mov     ecx, edi
0x86E66F: call    sub_772560
0x86E674: mov     edi, [ebp+0]
0x86E677: test    edi, edi
0x86E679: mov     [esp+30h+a3], edi
0x86E67D: jz      short loc_86E683
0x86E67F: add     dword ptr [edi+5Ch], 1
0x86E683: mov     eax, [esp+30h+var_10]
0x86E687: test    eax, eax
0x86E689: mov     byte ptr [esp+30h+var_4], 1
0x86E68E: jz      short loc_86E6A3
0x86E690: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E694: mov     ecx, eax
0x86E696: add     eax, 5Ch ; '\'
0x86E699: cmp     dword ptr [eax], 0
0x86E69C: jnz     short loc_86E6A3
0x86E69E: call    sub_772560
0x86E6A3: push    2
0x86E6A5: push    1
0x86E6A7: push    1
0x86E6A9: push    edi
0x86E6AA: call    sub_801110
0x86E6AF: add     esp, 10h
0x86E6B2: push    edi; a3
0x86E6B3: push    1; a2
0x86E6B5: mov     ecx, esi; this
0x86E6B7: call    sub_760010
0x86E6BC: lea     edx, [esp+30h+var_10]
0x86E6C0: push    edx
0x86E6C1: call    sub_772630
0x86E6C6: add     esp, 4
0x86E6C9: mov     ebp, eax
0x86E6CB: cmp     edi, [ebp+0]
0x86E6CE: mov     byte ptr [esp+30h+var_4], 2Ch ; ','
0x86E6D3: jz      short loc_86E6F5
0x86E6D5: test    edi, edi
0x86E6D7: jz      short loc_86E6E6
0x86E6D9: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E6DD: jnz     short loc_86E6E6
0x86E6DF: mov     ecx, edi
0x86E6E1: call    sub_772560
0x86E6E6: mov     edi, [ebp+0]
0x86E6E9: test    edi, edi
0x86E6EB: mov     [esp+30h+a3], edi
0x86E6EF: jz      short loc_86E6F5
0x86E6F1: add     dword ptr [edi+5Ch], 1
0x86E6F5: mov     eax, [esp+30h+var_10]
0x86E6F9: test    eax, eax
0x86E6FB: mov     byte ptr [esp+30h+var_4], 1
0x86E700: jz      short loc_86E715
0x86E702: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E706: mov     ecx, eax
0x86E708: add     eax, 5Ch ; '\'
0x86E70B: cmp     dword ptr [eax], 0
0x86E70E: jnz     short loc_86E715
0x86E710: call    sub_772560
0x86E715: push    2
0x86E717: push    1
0x86E719: push    2
0x86E71B: push    edi
0x86E71C: call    sub_801110
0x86E721: add     esp, 10h
0x86E724: push    edi; a3
0x86E725: push    2; a2
0x86E727: mov     ecx, esi; this
0x86E729: call    sub_760010
0x86E72E: lea     eax, [esp+30h+var_10]
0x86E732: push    eax
0x86E733: call    sub_772630
0x86E738: add     esp, 4
0x86E73B: mov     ebp, eax
0x86E73D: cmp     edi, [ebp+0]
0x86E740: mov     byte ptr [esp+30h+var_4], 2Dh ; '-'
0x86E745: jz      short loc_86E767
0x86E747: test    edi, edi
0x86E749: jz      short loc_86E758
0x86E74B: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E74F: jnz     short loc_86E758
0x86E751: mov     ecx, edi
0x86E753: call    sub_772560
0x86E758: mov     edi, [ebp+0]
0x86E75B: test    edi, edi
0x86E75D: mov     [esp+30h+a3], edi
0x86E761: jz      short loc_86E767
0x86E763: add     dword ptr [edi+5Ch], 1
0x86E767: mov     eax, [esp+30h+var_10]
0x86E76B: test    eax, eax
0x86E76D: mov     byte ptr [esp+30h+var_4], 1
0x86E772: jz      short loc_86E787
0x86E774: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E778: mov     ecx, eax
0x86E77A: add     eax, 5Ch ; '\'
0x86E77D: cmp     dword ptr [eax], 0
0x86E780: jnz     short loc_86E787
0x86E782: call    sub_772560
0x86E787: push    2
0x86E789: push    1
0x86E78B: push    3
0x86E78D: push    edi
0x86E78E: call    sub_801110
0x86E793: add     esp, 10h
0x86E796: push    edi; a3
0x86E797: push    3; a2
0x86E799: mov     ecx, esi; this
0x86E79B: call    sub_760010
0x86E7A0: lea     ecx, [esp+30h+var_10]
0x86E7A4: push    ecx
0x86E7A5: call    sub_772630
0x86E7AA: add     esp, 4
0x86E7AD: mov     ebp, eax
0x86E7AF: cmp     edi, [ebp+0]
0x86E7B2: mov     byte ptr [esp+30h+var_4], 2Eh ; '.'
0x86E7B7: jz      short loc_86E7D9
0x86E7B9: test    edi, edi
0x86E7BB: jz      short loc_86E7CA
0x86E7BD: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E7C1: jnz     short loc_86E7CA
0x86E7C3: mov     ecx, edi
0x86E7C5: call    sub_772560
0x86E7CA: mov     edi, [ebp+0]
0x86E7CD: test    edi, edi
0x86E7CF: mov     [esp+30h+a3], edi
0x86E7D3: jz      short loc_86E7D9
0x86E7D5: add     dword ptr [edi+5Ch], 1
0x86E7D9: mov     eax, [esp+30h+var_10]
0x86E7DD: test    eax, eax
0x86E7DF: mov     byte ptr [esp+30h+var_4], 1
0x86E7E4: jz      short loc_86E7F9
0x86E7E6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E7EA: mov     ecx, eax
0x86E7EC: add     eax, 5Ch ; '\'
0x86E7EF: cmp     dword ptr [eax], 0
0x86E7F2: jnz     short loc_86E7F9
0x86E7F4: call    sub_772560
0x86E7F9: push    2
0x86E7FB: push    1
0x86E7FD: push    4
0x86E7FF: push    edi
0x86E800: call    sub_801110
0x86E805: add     esp, 10h
0x86E808: push    edi; a3
0x86E809: push    4; a2
0x86E80B: mov     ecx, esi; this
0x86E80D: call    sub_760010
0x86E812: lea     edx, [esp+30h+var_10]
0x86E816: push    edx
0x86E817: call    sub_772630
0x86E81C: add     esp, 4
0x86E81F: mov     ebp, eax
0x86E821: cmp     edi, [ebp+0]
0x86E824: mov     byte ptr [esp+30h+var_4], 2Fh ; '/'
0x86E829: jz      short loc_86E84B
0x86E82B: test    edi, edi
0x86E82D: jz      short loc_86E83C
0x86E82F: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E833: jnz     short loc_86E83C
0x86E835: mov     ecx, edi
0x86E837: call    sub_772560
0x86E83C: mov     edi, [ebp+0]
0x86E83F: test    edi, edi
0x86E841: mov     [esp+30h+a3], edi
0x86E845: jz      short loc_86E84B
0x86E847: add     dword ptr [edi+5Ch], 1
0x86E84B: mov     eax, [esp+30h+var_10]
0x86E84F: test    eax, eax
0x86E851: mov     byte ptr [esp+30h+var_4], 1
0x86E856: jz      short loc_86E86B
0x86E858: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E85C: mov     ecx, eax
0x86E85E: add     eax, 5Ch ; '\'
0x86E861: cmp     dword ptr [eax], 0
0x86E864: jnz     short loc_86E86B
0x86E866: call    sub_772560
0x86E86B: push    0
0x86E86D: push    3
0x86E86F: push    5
0x86E871: push    edi
0x86E872: call    sub_801110
0x86E877: mov     eax, ds:0B43110h
0x86E87C: add     esp, 10h
0x86E87F: push    eax; a2
0x86E880: mov     ecx, edi; this
0x86E882: call    sub_76C910
0x86E887: push    edi; a3
0x86E888: push    5; a2
0x86E88A: mov     ecx, esi; this
0x86E88C: call    sub_760010
0x86E891: lea     ecx, [esp+30h+var_10]
0x86E895: push    ecx
0x86E896: call    sub_772630
0x86E89B: add     esp, 4
0x86E89E: mov     ebp, eax
0x86E8A0: cmp     edi, [ebp+0]
0x86E8A3: mov     byte ptr [esp+30h+var_4], 30h ; '0'
0x86E8A8: jz      short loc_86E8CA
0x86E8AA: test    edi, edi
0x86E8AC: jz      short loc_86E8BB
0x86E8AE: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E8B2: jnz     short loc_86E8BB
0x86E8B4: mov     ecx, edi
0x86E8B6: call    sub_772560
0x86E8BB: mov     edi, [ebp+0]
0x86E8BE: test    edi, edi
0x86E8C0: mov     [esp+30h+a3], edi
0x86E8C4: jz      short loc_86E8CA
0x86E8C6: add     dword ptr [edi+5Ch], 1
0x86E8CA: mov     eax, [esp+30h+var_10]
0x86E8CE: test    eax, eax
0x86E8D0: mov     byte ptr [esp+30h+var_4], 1
0x86E8D5: jz      short loc_86E8EA
0x86E8D7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E8DB: mov     ecx, eax
0x86E8DD: add     eax, 5Ch ; '\'
0x86E8E0: cmp     dword ptr [eax], 0
0x86E8E3: jnz     short loc_86E8EA
0x86E8E5: call    sub_772560
0x86E8EA: push    2
0x86E8EC: push    1
0x86E8EE: push    6
0x86E8F0: push    edi
0x86E8F1: call    sub_801110
0x86E8F6: add     esp, 10h
0x86E8F9: push    edi; a3
0x86E8FA: push    6; a2
0x86E8FC: mov     ecx, esi; this
0x86E8FE: call    sub_760010
0x86E903: lea     edx, [esp+30h+var_10]
0x86E907: push    edx
0x86E908: call    sub_772630
0x86E90D: add     esp, 4
0x86E910: mov     ebp, eax
0x86E912: cmp     edi, [ebp+0]
0x86E915: mov     byte ptr [esp+30h+var_4], 31h ; '1'
0x86E91A: jz      short loc_86E93C
0x86E91C: test    edi, edi
0x86E91E: jz      short loc_86E92D
0x86E920: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x86E924: jnz     short loc_86E92D
0x86E926: mov     ecx, edi
0x86E928: call    sub_772560
0x86E92D: mov     edi, [ebp+0]
0x86E930: test    edi, edi
0x86E932: mov     [esp+30h+a3], edi
0x86E936: jz      short loc_86E93C
0x86E938: add     dword ptr [edi+5Ch], 1
0x86E93C: mov     eax, [esp+30h+var_10]
0x86E940: test    eax, eax
0x86E942: mov     byte ptr [esp+30h+var_4], 1
0x86E947: jz      short loc_86E95C
0x86E949: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86E94D: mov     ecx, eax
0x86E94F: add     eax, 5Ch ; '\'
0x86E952: cmp     dword ptr [eax], 0
0x86E955: jnz     short loc_86E95C
0x86E957: call    sub_772560
0x86E95C: push    0
0x86E95E: push    3
0x86E960: push    7
0x86E962: push    edi
0x86E963: call    sub_801110
0x86E968: add     esp, 10h
0x86E96B: push    edi; a3
0x86E96C: push    7; a2
0x86E96E: mov     ecx, esi; this
0x86E970: call    sub_760010
0x86E975: mov     ebp, [esp+30h+var_18]
0x86E979: mov     eax, [ebp+0C4h]
0x86E97F: push    eax; a2
0x86E980: mov     ecx, esi; this
0x86E982: call    sub_7AECB0
0x86E987: mov     eax, [ebp+158h]
0x86E98D: push    eax; a2
0x86E98E: mov     ecx, esi; this
0x86E990: call    sub_7AEC60
0x86E995: cmp     dword ptr [esi+30h], 0
0x86E999: jnz     short loc_86E9A3
0x86E99B: call    sub_772DF0
0x86E9A0: mov     [esi+30h], eax
0x86E9A3: mov     ecx, [esi+30h]
0x86E9A6: push    0
0x86E9A8: push    0
0x86E9AA: push    1Bh
0x86E9AC: call    sub_772CD0
0x86E9B1: cmp     dword ptr [esi+30h], 0
0x86E9B5: jnz     short loc_86E9BF
0x86E9B7: call    sub_772DF0
0x86E9BC: mov     [esi+30h], eax
0x86E9BF: mov     ecx, [esi+30h]
0x86E9C2: push    0
0x86E9C4: push    0
0x86E9C6: push    0Fh
0x86E9C8: call    sub_772CD0
0x86E9CD: cmp     dword ptr [esi+30h], 0
0x86E9D1: jnz     short loc_86E9DB
0x86E9D3: call    sub_772DF0
0x86E9D8: mov     [esi+30h], eax
0x86E9DB: mov     ecx, [esi+30h]
0x86E9DE: push    0
0x86E9E0: push    1
0x86E9E2: push    7
0x86E9E4: call    sub_772CD0
0x86E9E9: cmp     dword ptr [esi+30h], 0
0x86E9ED: jnz     short loc_86E9F7
0x86E9EF: call    sub_772DF0
0x86E9F4: mov     [esi+30h], eax
0x86E9F7: mov     ecx, [esi+30h]
0x86E9FA: push    0
0x86E9FC: push    4
0x86E9FE: push    17h
0x86EA00: call    sub_772CD0
0x86EA05: cmp     dword ptr [esi+30h], 0
0x86EA09: jnz     short loc_86EA13
0x86EA0B: call    sub_772DF0
0x86EA10: mov     [esi+30h], eax
0x86EA13: mov     ecx, [esi+30h]
0x86EA16: push    0
0x86EA18: push    1
0x86EA1A: push    0Eh
0x86EA1C: call    sub_772CD0
0x86EA21: cmp     dword ptr [esi+30h], 0
0x86EA25: jnz     short loc_86EA2F
0x86EA27: call    sub_772DF0
0x86EA2C: mov     [esi+30h], eax
0x86EA2F: mov     ecx, [esi+30h]
0x86EA32: push    0
0x86EA34: push    0
0x86EA36: push    34h ; '4'
0x86EA38: call    sub_772CD0
0x86EA3D: cmp     esi, ds:0B476B8h
0x86EA43: mov     ds:0B43E18h, ebx
0x86EA49: mov     ebx, 18Ch
0x86EA4E: mov     ds:0B444A8h, ebx
0x86EA54: jz      short loc_86EA75
0x86EA56: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86EA5A: jnz     short loc_86EA63
0x86EA5C: mov     ecx, esi
0x86EA5E: call    sub_7604D0
0x86EA63: mov     esi, ds:0B476B8h
0x86EA69: test    esi, esi
0x86EA6B: mov     [esp+30h+var_14], esi
0x86EA6F: jz      short loc_86EA75
0x86EA71: add     dword ptr [esi+60h], 1
0x86EA75: cmp     dword ptr [esi+18h], 8
0x86EA79: jnb     loc_86ED54
0x86EA7F: lea     eax, [esp+30h+var_10]
0x86EA83: push    eax
0x86EA84: call    sub_772630
0x86EA89: add     esp, 4
0x86EA8C: push    eax
0x86EA8D: lea     ecx, [esp+34h+a3]
0x86EA91: mov     byte ptr [esp+34h+var_4], 32h ; '2'
0x86EA96: call    sub_75FAE0
0x86EA9B: mov     eax, [esp+30h+var_10]
0x86EA9F: test    eax, eax
0x86EAA1: mov     byte ptr [esp+30h+var_4], 1
0x86EAA6: jz      short loc_86EABB
0x86EAA8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EAAC: mov     ecx, eax
0x86EAAE: add     eax, 5Ch ; '\'
0x86EAB1: cmp     dword ptr [eax], 0
0x86EAB4: jnz     short loc_86EABB
0x86EAB6: call    sub_772560
0x86EABB: mov     edi, [esp+30h+a3]
0x86EABF: push    2
0x86EAC1: push    1
0x86EAC3: push    0
0x86EAC5: push    edi
0x86EAC6: call    sub_801110
0x86EACB: add     esp, 10h
0x86EACE: push    edi; a3
0x86EACF: push    0; a2
0x86EAD1: mov     ecx, esi; this
0x86EAD3: call    sub_760010
0x86EAD8: lea     ecx, [esp+30h+var_10]
0x86EADC: push    ecx
0x86EADD: call    sub_772630
0x86EAE2: add     esp, 4
0x86EAE5: push    eax
0x86EAE6: lea     ecx, [esp+34h+a3]
0x86EAEA: mov     byte ptr [esp+34h+var_4], 33h ; '3'
0x86EAEF: call    sub_75FAE0
0x86EAF4: mov     eax, [esp+30h+var_10]
0x86EAF8: test    eax, eax
0x86EAFA: mov     byte ptr [esp+30h+var_4], 1
0x86EAFF: jz      short loc_86EB14
0x86EB01: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EB05: mov     ecx, eax
0x86EB07: add     eax, 5Ch ; '\'
0x86EB0A: cmp     dword ptr [eax], 0
0x86EB0D: jnz     short loc_86EB14
0x86EB0F: call    sub_772560
0x86EB14: mov     edi, [esp+30h+a3]
0x86EB18: push    2
0x86EB1A: push    1
0x86EB1C: push    1
0x86EB1E: push    edi
0x86EB1F: call    sub_801110
0x86EB24: add     esp, 10h
0x86EB27: push    edi; a3
0x86EB28: push    1; a2
0x86EB2A: mov     ecx, esi; this
0x86EB2C: call    sub_760010
0x86EB31: lea     edx, [esp+30h+var_10]
0x86EB35: push    edx
0x86EB36: call    sub_772630
0x86EB3B: add     esp, 4
0x86EB3E: push    eax
0x86EB3F: lea     ecx, [esp+34h+a3]
0x86EB43: mov     byte ptr [esp+34h+var_4], 34h ; '4'
0x86EB48: call    sub_75FAE0
0x86EB4D: mov     eax, [esp+30h+var_10]
0x86EB51: test    eax, eax
0x86EB53: mov     byte ptr [esp+30h+var_4], 1
0x86EB58: jz      short loc_86EB6D
0x86EB5A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EB5E: mov     ecx, eax
0x86EB60: add     eax, 5Ch ; '\'
0x86EB63: cmp     dword ptr [eax], 0
0x86EB66: jnz     short loc_86EB6D
0x86EB68: call    sub_772560
0x86EB6D: mov     edi, [esp+30h+a3]
0x86EB71: push    2
0x86EB73: push    1
0x86EB75: push    2
0x86EB77: push    edi
0x86EB78: call    sub_801110
0x86EB7D: add     esp, 10h
0x86EB80: push    edi; a3
0x86EB81: push    2; a2
0x86EB83: mov     ecx, esi; this
0x86EB85: call    sub_760010
0x86EB8A: lea     eax, [esp+30h+var_10]
0x86EB8E: push    eax
0x86EB8F: call    sub_772630
0x86EB94: add     esp, 4
0x86EB97: push    eax
0x86EB98: lea     ecx, [esp+34h+a3]
0x86EB9C: mov     byte ptr [esp+34h+var_4], 35h ; '5'
0x86EBA1: call    sub_75FAE0
0x86EBA6: mov     eax, [esp+30h+var_10]
0x86EBAA: test    eax, eax
0x86EBAC: mov     byte ptr [esp+30h+var_4], 1
0x86EBB1: jz      short loc_86EBC6
0x86EBB3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EBB7: mov     ecx, eax
0x86EBB9: add     eax, 5Ch ; '\'
0x86EBBC: cmp     dword ptr [eax], 0
0x86EBBF: jnz     short loc_86EBC6
0x86EBC1: call    sub_772560
0x86EBC6: mov     edi, [esp+30h+a3]
0x86EBCA: push    2
0x86EBCC: push    1
0x86EBCE: push    3
0x86EBD0: push    edi
0x86EBD1: call    sub_801110
0x86EBD6: add     esp, 10h
0x86EBD9: push    edi; a3
0x86EBDA: push    3; a2
0x86EBDC: mov     ecx, esi; this
0x86EBDE: call    sub_760010
0x86EBE3: lea     ecx, [esp+30h+var_10]
0x86EBE7: push    ecx
0x86EBE8: call    sub_772630
0x86EBED: add     esp, 4
0x86EBF0: push    eax
0x86EBF1: lea     ecx, [esp+34h+a3]
0x86EBF5: mov     byte ptr [esp+34h+var_4], 36h ; '6'
0x86EBFA: call    sub_75FAE0
0x86EBFF: mov     eax, [esp+30h+var_10]
0x86EC03: test    eax, eax
0x86EC05: mov     byte ptr [esp+30h+var_4], 1
0x86EC0A: jz      short loc_86EC1F
0x86EC0C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EC10: mov     ecx, eax
0x86EC12: add     eax, 5Ch ; '\'
0x86EC15: cmp     dword ptr [eax], 0
0x86EC18: jnz     short loc_86EC1F
0x86EC1A: call    sub_772560
0x86EC1F: mov     edi, [esp+30h+a3]
0x86EC23: push    2
0x86EC25: push    1
0x86EC27: push    4
0x86EC29: push    edi
0x86EC2A: call    sub_801110
0x86EC2F: add     esp, 10h
0x86EC32: push    edi; a3
0x86EC33: push    4; a2
0x86EC35: mov     ecx, esi; this
0x86EC37: call    sub_760010
0x86EC3C: lea     edx, [esp+30h+var_10]
0x86EC40: push    edx
0x86EC41: call    sub_772630
0x86EC46: add     esp, 4
0x86EC49: push    eax
0x86EC4A: lea     ecx, [esp+34h+a3]
0x86EC4E: mov     byte ptr [esp+34h+var_4], 37h ; '7'
0x86EC53: call    sub_75FAE0
0x86EC58: mov     eax, [esp+30h+var_10]
0x86EC5C: test    eax, eax
0x86EC5E: mov     byte ptr [esp+30h+var_4], 1
0x86EC63: jz      short loc_86EC78
0x86EC65: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EC69: mov     ecx, eax
0x86EC6B: add     eax, 5Ch ; '\'
0x86EC6E: cmp     dword ptr [eax], 0
0x86EC71: jnz     short loc_86EC78
0x86EC73: call    sub_772560
0x86EC78: mov     edi, [esp+30h+a3]
0x86EC7C: push    0
0x86EC7E: push    3
0x86EC80: push    5
0x86EC82: push    edi
0x86EC83: call    sub_801110
0x86EC88: mov     eax, ds:0B43110h
0x86EC8D: add     esp, 10h
0x86EC90: push    eax; a2
0x86EC91: mov     ecx, edi; this
0x86EC93: call    sub_76C910
0x86EC98: push    edi; a3
0x86EC99: push    5; a2
0x86EC9B: mov     ecx, esi; this
0x86EC9D: call    sub_760010
0x86ECA2: lea     ecx, [esp+30h+var_10]
0x86ECA6: push    ecx
0x86ECA7: call    sub_772630
0x86ECAC: add     esp, 4
0x86ECAF: push    eax
0x86ECB0: lea     ecx, [esp+34h+a3]
0x86ECB4: mov     byte ptr [esp+34h+var_4], 38h ; '8'
0x86ECB9: call    sub_75FAE0
0x86ECBE: mov     eax, [esp+30h+var_10]
0x86ECC2: test    eax, eax
0x86ECC4: mov     byte ptr [esp+30h+var_4], 1
0x86ECC9: jz      short loc_86ECDE
0x86ECCB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86ECCF: mov     ecx, eax
0x86ECD1: add     eax, 5Ch ; '\'
0x86ECD4: cmp     dword ptr [eax], 0
0x86ECD7: jnz     short loc_86ECDE
0x86ECD9: call    sub_772560
0x86ECDE: mov     edi, [esp+30h+a3]
0x86ECE2: push    2
0x86ECE4: push    1
0x86ECE6: push    6
0x86ECE8: push    edi
0x86ECE9: call    sub_801110
0x86ECEE: add     esp, 10h
0x86ECF1: push    edi; a3
0x86ECF2: push    6; a2
0x86ECF4: mov     ecx, esi; this
0x86ECF6: call    sub_760010
0x86ECFB: lea     edx, [esp+30h+var_10]
0x86ECFF: push    edx
0x86ED00: call    sub_772630
0x86ED05: add     esp, 4
0x86ED08: push    eax
0x86ED09: lea     ecx, [esp+34h+a3]
0x86ED0D: mov     byte ptr [esp+34h+var_4], 39h ; '9'
0x86ED12: call    sub_75FAE0
0x86ED17: mov     eax, [esp+30h+var_10]
0x86ED1B: test    eax, eax
0x86ED1D: mov     byte ptr [esp+30h+var_4], 1
0x86ED22: jz      short loc_86ED37
0x86ED24: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86ED28: mov     ecx, eax
0x86ED2A: add     eax, 5Ch ; '\'
0x86ED2D: cmp     dword ptr [eax], 0
0x86ED30: jnz     short loc_86ED37
0x86ED32: call    sub_772560
0x86ED37: mov     edi, [esp+30h+a3]
0x86ED3B: push    0
0x86ED3D: push    3
0x86ED3F: push    7
0x86ED41: push    edi
0x86ED42: call    sub_801110
0x86ED47: add     esp, 10h
0x86ED4A: push    edi; a3
0x86ED4B: push    7; a2
0x86ED4D: mov     ecx, esi; this
0x86ED4F: call    sub_760010
0x86ED54: mov     eax, [ebp+0C8h]
0x86ED5A: push    eax; a2
0x86ED5B: mov     ecx, esi; this
0x86ED5D: call    sub_7AECB0
0x86ED62: mov     eax, [ebp+154h]
0x86ED68: push    eax; a2
0x86ED69: mov     ecx, esi; this
0x86ED6B: call    sub_7AEC60
0x86ED70: cmp     dword ptr [esi+30h], 0
0x86ED74: jnz     short loc_86ED7E
0x86ED76: call    sub_772DF0
0x86ED7B: mov     [esi+30h], eax
0x86ED7E: mov     ecx, [esi+30h]
0x86ED81: push    0
0x86ED83: push    0
0x86ED85: push    1Bh
0x86ED87: call    sub_772CD0
0x86ED8C: cmp     dword ptr [esi+30h], 0
0x86ED90: jnz     short loc_86ED9A
0x86ED92: call    sub_772DF0
0x86ED97: mov     [esi+30h], eax
0x86ED9A: mov     ecx, [esi+30h]
0x86ED9D: push    0
0x86ED9F: push    0
0x86EDA1: push    0Fh
0x86EDA3: call    sub_772CD0
0x86EDA8: cmp     dword ptr [esi+30h], 0
0x86EDAC: jnz     short loc_86EDB6
0x86EDAE: call    sub_772DF0
0x86EDB3: mov     [esi+30h], eax
0x86EDB6: mov     ecx, [esi+30h]
0x86EDB9: push    0
0x86EDBB: push    1
0x86EDBD: push    7
0x86EDBF: call    sub_772CD0
0x86EDC4: cmp     dword ptr [esi+30h], 0
0x86EDC8: jnz     short loc_86EDD2
0x86EDCA: call    sub_772DF0
0x86EDCF: mov     [esi+30h], eax
0x86EDD2: mov     ecx, [esi+30h]
0x86EDD5: push    0
0x86EDD7: push    4
0x86EDD9: push    17h
0x86EDDB: call    sub_772CD0
0x86EDE0: cmp     dword ptr [esi+30h], 0
0x86EDE4: jnz     short loc_86EDEE
0x86EDE6: call    sub_772DF0
0x86EDEB: mov     [esi+30h], eax
0x86EDEE: mov     ecx, [esi+30h]
0x86EDF1: push    0
0x86EDF3: push    1
0x86EDF5: push    0Eh
0x86EDF7: call    sub_772CD0
0x86EDFC: cmp     dword ptr [esi+30h], 0
0x86EE00: jnz     short loc_86EE0A
0x86EE02: call    sub_772DF0
0x86EE07: mov     [esi+30h], eax
0x86EE0A: mov     ecx, [esi+30h]
0x86EE0D: push    0
0x86EE0F: push    0
0x86EE11: push    34h ; '4'
0x86EE13: call    sub_772CD0
0x86EE18: cmp     esi, ds:0B476BCh
0x86EE1E: mov     ebp, 780F8h
0x86EE23: mov     ds:0B43E2Ch, ebp
0x86EE29: mov     dword ptr ds:0B444BCh, 10Ch
0x86EE33: jz      short loc_86EE54
0x86EE35: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86EE39: jnz     short loc_86EE42
0x86EE3B: mov     ecx, esi
0x86EE3D: call    sub_7604D0
0x86EE42: mov     esi, ds:0B476BCh
0x86EE48: test    esi, esi
0x86EE4A: mov     [esp+30h+var_14], esi
0x86EE4E: jz      short loc_86EE54
0x86EE50: add     dword ptr [esi+60h], 1
0x86EE54: cmp     dword ptr [esi+18h], 8
0x86EE58: jnb     loc_86F133
0x86EE5E: lea     eax, [esp+30h+var_10]
0x86EE62: push    eax
0x86EE63: call    sub_772630
0x86EE68: add     esp, 4
0x86EE6B: push    eax
0x86EE6C: lea     ecx, [esp+34h+a3]
0x86EE70: mov     byte ptr [esp+34h+var_4], 3Ah ; ':'
0x86EE75: call    sub_75FAE0
0x86EE7A: mov     eax, [esp+30h+var_10]
0x86EE7E: test    eax, eax
0x86EE80: mov     byte ptr [esp+30h+var_4], 1
0x86EE85: jz      short loc_86EE9A
0x86EE87: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EE8B: mov     ecx, eax
0x86EE8D: add     eax, 5Ch ; '\'
0x86EE90: cmp     dword ptr [eax], 0
0x86EE93: jnz     short loc_86EE9A
0x86EE95: call    sub_772560
0x86EE9A: mov     edi, [esp+30h+a3]
0x86EE9E: push    2
0x86EEA0: push    1
0x86EEA2: push    0
0x86EEA4: push    edi
0x86EEA5: call    sub_801110
0x86EEAA: add     esp, 10h
0x86EEAD: push    edi; a3
0x86EEAE: push    0; a2
0x86EEB0: mov     ecx, esi; this
0x86EEB2: call    sub_760010
0x86EEB7: lea     ecx, [esp+30h+var_10]
0x86EEBB: push    ecx
0x86EEBC: call    sub_772630
0x86EEC1: add     esp, 4
0x86EEC4: push    eax
0x86EEC5: lea     ecx, [esp+34h+a3]
0x86EEC9: mov     byte ptr [esp+34h+var_4], 3Bh ; ';'
0x86EECE: call    sub_75FAE0
0x86EED3: mov     eax, [esp+30h+var_10]
0x86EED7: test    eax, eax
0x86EED9: mov     byte ptr [esp+30h+var_4], 1
0x86EEDE: jz      short loc_86EEF3
0x86EEE0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EEE4: mov     ecx, eax
0x86EEE6: add     eax, 5Ch ; '\'
0x86EEE9: cmp     dword ptr [eax], 0
0x86EEEC: jnz     short loc_86EEF3
0x86EEEE: call    sub_772560
0x86EEF3: mov     edi, [esp+30h+a3]
0x86EEF7: push    2
0x86EEF9: push    1
0x86EEFB: push    1
0x86EEFD: push    edi
0x86EEFE: call    sub_801110
0x86EF03: add     esp, 10h
0x86EF06: push    edi; a3
0x86EF07: push    1; a2
0x86EF09: mov     ecx, esi; this
0x86EF0B: call    sub_760010
0x86EF10: lea     edx, [esp+30h+var_10]
0x86EF14: push    edx
0x86EF15: call    sub_772630
0x86EF1A: add     esp, 4
0x86EF1D: push    eax
0x86EF1E: lea     ecx, [esp+34h+a3]
0x86EF22: mov     byte ptr [esp+34h+var_4], 3Ch ; '<'
0x86EF27: call    sub_75FAE0
0x86EF2C: mov     eax, [esp+30h+var_10]
0x86EF30: test    eax, eax
0x86EF32: mov     byte ptr [esp+30h+var_4], 1
0x86EF37: jz      short loc_86EF4C
0x86EF39: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EF3D: mov     ecx, eax
0x86EF3F: add     eax, 5Ch ; '\'
0x86EF42: cmp     dword ptr [eax], 0
0x86EF45: jnz     short loc_86EF4C
0x86EF47: call    sub_772560
0x86EF4C: mov     edi, [esp+30h+a3]
0x86EF50: push    2
0x86EF52: push    1
0x86EF54: push    2
0x86EF56: push    edi
0x86EF57: call    sub_801110
0x86EF5C: add     esp, 10h
0x86EF5F: push    edi; a3
0x86EF60: push    2; a2
0x86EF62: mov     ecx, esi; this
0x86EF64: call    sub_760010
0x86EF69: lea     eax, [esp+30h+var_10]
0x86EF6D: push    eax
0x86EF6E: call    sub_772630
0x86EF73: add     esp, 4
0x86EF76: push    eax
0x86EF77: lea     ecx, [esp+34h+a3]
0x86EF7B: mov     byte ptr [esp+34h+var_4], 3Dh ; '='
0x86EF80: call    sub_75FAE0
0x86EF85: mov     eax, [esp+30h+var_10]
0x86EF89: test    eax, eax
0x86EF8B: mov     byte ptr [esp+30h+var_4], 1
0x86EF90: jz      short loc_86EFA5
0x86EF92: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EF96: mov     ecx, eax
0x86EF98: add     eax, 5Ch ; '\'
0x86EF9B: cmp     dword ptr [eax], 0
0x86EF9E: jnz     short loc_86EFA5
0x86EFA0: call    sub_772560
0x86EFA5: mov     edi, [esp+30h+a3]
0x86EFA9: push    2
0x86EFAB: push    1
0x86EFAD: push    3
0x86EFAF: push    edi
0x86EFB0: call    sub_801110
0x86EFB5: add     esp, 10h
0x86EFB8: push    edi; a3
0x86EFB9: push    3; a2
0x86EFBB: mov     ecx, esi; this
0x86EFBD: call    sub_760010
0x86EFC2: lea     ecx, [esp+30h+var_10]
0x86EFC6: push    ecx
0x86EFC7: call    sub_772630
0x86EFCC: add     esp, 4
0x86EFCF: push    eax
0x86EFD0: lea     ecx, [esp+34h+a3]
0x86EFD4: mov     byte ptr [esp+34h+var_4], 3Eh ; '>'
0x86EFD9: call    sub_75FAE0
0x86EFDE: mov     eax, [esp+30h+var_10]
0x86EFE2: test    eax, eax
0x86EFE4: mov     byte ptr [esp+30h+var_4], 1
0x86EFE9: jz      short loc_86EFFE
0x86EFEB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86EFEF: mov     ecx, eax
0x86EFF1: add     eax, 5Ch ; '\'
0x86EFF4: cmp     dword ptr [eax], 0
0x86EFF7: jnz     short loc_86EFFE
0x86EFF9: call    sub_772560
0x86EFFE: mov     edi, [esp+30h+a3]
0x86F002: push    2
0x86F004: push    1
0x86F006: push    4
0x86F008: push    edi
0x86F009: call    sub_801110
0x86F00E: add     esp, 10h
0x86F011: push    edi; a3
0x86F012: push    4; a2
0x86F014: mov     ecx, esi; this
0x86F016: call    sub_760010
0x86F01B: lea     edx, [esp+30h+var_10]
0x86F01F: push    edx
0x86F020: call    sub_772630
0x86F025: add     esp, 4
0x86F028: push    eax
0x86F029: lea     ecx, [esp+34h+a3]
0x86F02D: mov     byte ptr [esp+34h+var_4], 3Fh ; '?'
0x86F032: call    sub_75FAE0
0x86F037: mov     eax, [esp+30h+var_10]
0x86F03B: test    eax, eax
0x86F03D: mov     byte ptr [esp+30h+var_4], 1
0x86F042: jz      short loc_86F057
0x86F044: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F048: mov     ecx, eax
0x86F04A: add     eax, 5Ch ; '\'
0x86F04D: cmp     dword ptr [eax], 0
0x86F050: jnz     short loc_86F057
0x86F052: call    sub_772560
0x86F057: mov     edi, [esp+30h+a3]
0x86F05B: push    0
0x86F05D: push    3
0x86F05F: push    5
0x86F061: push    edi
0x86F062: call    sub_801110
0x86F067: mov     eax, ds:0B43110h
0x86F06C: add     esp, 10h
0x86F06F: push    eax; a2
0x86F070: mov     ecx, edi; this
0x86F072: call    sub_76C910
0x86F077: push    edi; a3
0x86F078: push    5; a2
0x86F07A: mov     ecx, esi; this
0x86F07C: call    sub_760010
0x86F081: lea     ecx, [esp+30h+var_10]
0x86F085: push    ecx
0x86F086: call    sub_772630
0x86F08B: add     esp, 4
0x86F08E: push    eax
0x86F08F: lea     ecx, [esp+34h+a3]
0x86F093: mov     byte ptr [esp+34h+var_4], 40h ; '@'
0x86F098: call    sub_75FAE0
0x86F09D: mov     eax, [esp+30h+var_10]
0x86F0A1: test    eax, eax
0x86F0A3: mov     byte ptr [esp+30h+var_4], 1
0x86F0A8: jz      short loc_86F0BD
0x86F0AA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F0AE: mov     ecx, eax
0x86F0B0: add     eax, 5Ch ; '\'
0x86F0B3: cmp     dword ptr [eax], 0
0x86F0B6: jnz     short loc_86F0BD
0x86F0B8: call    sub_772560
0x86F0BD: mov     edi, [esp+30h+a3]
0x86F0C1: push    2
0x86F0C3: push    1
0x86F0C5: push    6
0x86F0C7: push    edi
0x86F0C8: call    sub_801110
0x86F0CD: add     esp, 10h
0x86F0D0: push    edi; a3
0x86F0D1: push    6; a2
0x86F0D3: mov     ecx, esi; this
0x86F0D5: call    sub_760010
0x86F0DA: lea     edx, [esp+30h+var_10]
0x86F0DE: push    edx
0x86F0DF: call    sub_772630
0x86F0E4: add     esp, 4
0x86F0E7: push    eax
0x86F0E8: lea     ecx, [esp+34h+a3]
0x86F0EC: mov     byte ptr [esp+34h+var_4], 41h ; 'A'
0x86F0F1: call    sub_75FAE0
0x86F0F6: mov     eax, [esp+30h+var_10]
0x86F0FA: test    eax, eax
0x86F0FC: mov     byte ptr [esp+30h+var_4], 1
0x86F101: jz      short loc_86F116
0x86F103: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F107: mov     ecx, eax
0x86F109: add     eax, 5Ch ; '\'
0x86F10C: cmp     dword ptr [eax], 0
0x86F10F: jnz     short loc_86F116
0x86F111: call    sub_772560
0x86F116: mov     edi, [esp+30h+a3]
0x86F11A: push    0
0x86F11C: push    3
0x86F11E: push    7
0x86F120: push    edi
0x86F121: call    sub_801110
0x86F126: add     esp, 10h
0x86F129: push    edi; a3
0x86F12A: push    7; a2
0x86F12C: mov     ecx, esi; this
0x86F12E: call    sub_760010
0x86F133: mov     eax, [esp+30h+var_18]
0x86F137: mov     eax, [eax+0C8h]
0x86F13D: push    eax; a2
0x86F13E: mov     ecx, esi; this
0x86F140: call    sub_7AECB0
0x86F145: mov     ecx, [esp+30h+var_18]
0x86F149: mov     eax, [ecx+158h]
0x86F14F: push    eax; a2
0x86F150: mov     ecx, esi; this
0x86F152: call    sub_7AEC60
0x86F157: cmp     dword ptr [esi+30h], 0
0x86F15B: jnz     short loc_86F165
0x86F15D: call    sub_772DF0
0x86F162: mov     [esi+30h], eax
0x86F165: mov     ecx, [esi+30h]
0x86F168: push    0
0x86F16A: push    0
0x86F16C: push    1Bh
0x86F16E: call    sub_772CD0
0x86F173: cmp     dword ptr [esi+30h], 0
0x86F177: jnz     short loc_86F181
0x86F179: call    sub_772DF0
0x86F17E: mov     [esi+30h], eax
0x86F181: mov     ecx, [esi+30h]
0x86F184: push    0
0x86F186: push    0
0x86F188: push    0Fh
0x86F18A: call    sub_772CD0
0x86F18F: cmp     dword ptr [esi+30h], 0
0x86F193: jnz     short loc_86F19D
0x86F195: call    sub_772DF0
0x86F19A: mov     [esi+30h], eax
0x86F19D: mov     ecx, [esi+30h]
0x86F1A0: push    0
0x86F1A2: push    1
0x86F1A4: push    7
0x86F1A6: call    sub_772CD0
0x86F1AB: cmp     dword ptr [esi+30h], 0
0x86F1AF: jnz     short loc_86F1B9
0x86F1B1: call    sub_772DF0
0x86F1B6: mov     [esi+30h], eax
0x86F1B9: mov     ecx, [esi+30h]
0x86F1BC: push    0
0x86F1BE: push    4
0x86F1C0: push    17h
0x86F1C2: call    sub_772CD0
0x86F1C7: cmp     dword ptr [esi+30h], 0
0x86F1CB: jnz     short loc_86F1D5
0x86F1CD: call    sub_772DF0
0x86F1D2: mov     [esi+30h], eax
0x86F1D5: mov     ecx, [esi+30h]
0x86F1D8: push    0
0x86F1DA: push    1
0x86F1DC: push    0Eh
0x86F1DE: call    sub_772CD0
0x86F1E3: cmp     dword ptr [esi+30h], 0
0x86F1E7: jnz     short loc_86F1F1
0x86F1E9: call    sub_772DF0
0x86F1EE: mov     [esi+30h], eax
0x86F1F1: mov     ecx, [esi+30h]
0x86F1F4: push    0
0x86F1F6: push    0
0x86F1F8: push    34h ; '4'
0x86F1FA: call    sub_772CD0
0x86F1FF: cmp     esi, ds:0B476C0h
0x86F205: mov     ds:0B43E30h, ebp
0x86F20B: mov     ds:0B444C0h, ebx
0x86F211: jz      short loc_86F238
0x86F213: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86F217: jnz     short loc_86F220
0x86F219: mov     ecx, esi
0x86F21B: call    sub_7604D0
0x86F220: mov     esi, ds:0B476C0h
0x86F226: test    esi, esi
0x86F228: mov     [esp+30h+var_14], esi
0x86F22C: mov     ebx, 1
0x86F231: jz      short loc_86F23D
0x86F233: add     [esi+60h], ebx
0x86F236: jmp     short loc_86F23D
0x86F238: mov     ebx, 1
0x86F23D: cmp     dword ptr [esi+18h], 8
0x86F241: jnb     loc_86F515
0x86F247: lea     edx, [esp+30h+var_10]
0x86F24B: push    edx
0x86F24C: call    sub_772630
0x86F251: add     esp, 4
0x86F254: push    eax
0x86F255: lea     ecx, [esp+34h+a3]
0x86F259: mov     byte ptr [esp+34h+var_4], 42h ; 'B'
0x86F25E: call    sub_75FAE0
0x86F263: mov     eax, [esp+30h+var_10]
0x86F267: test    eax, eax
0x86F269: mov     byte ptr [esp+30h+var_4], 1
0x86F26E: jz      short loc_86F283
0x86F270: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F274: mov     ecx, eax
0x86F276: add     eax, 5Ch ; '\'
0x86F279: cmp     dword ptr [eax], 0
0x86F27C: jnz     short loc_86F283
0x86F27E: call    sub_772560
0x86F283: mov     edi, [esp+30h+a3]
0x86F287: push    2
0x86F289: push    ebx
0x86F28A: push    0
0x86F28C: push    edi
0x86F28D: call    sub_801110
0x86F292: add     esp, 10h
0x86F295: push    edi; a3
0x86F296: push    0; a2
0x86F298: mov     ecx, esi; this
0x86F29A: call    sub_760010
0x86F29F: lea     eax, [esp+30h+var_10]
0x86F2A3: push    eax
0x86F2A4: call    sub_772630
0x86F2A9: add     esp, 4
0x86F2AC: push    eax
0x86F2AD: lea     ecx, [esp+34h+a3]
0x86F2B1: mov     byte ptr [esp+34h+var_4], 43h ; 'C'
0x86F2B6: call    sub_75FAE0
0x86F2BB: mov     eax, [esp+30h+var_10]
0x86F2BF: test    eax, eax
0x86F2C1: mov     byte ptr [esp+30h+var_4], 1
0x86F2C6: jz      short loc_86F2DB
0x86F2C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F2CC: mov     ecx, eax
0x86F2CE: add     eax, 5Ch ; '\'
0x86F2D1: cmp     dword ptr [eax], 0
0x86F2D4: jnz     short loc_86F2DB
0x86F2D6: call    sub_772560
0x86F2DB: mov     edi, [esp+30h+a3]
0x86F2DF: push    2
0x86F2E1: push    ebx
0x86F2E2: push    ebx
0x86F2E3: push    edi
0x86F2E4: call    sub_801110
0x86F2E9: add     esp, 10h
0x86F2EC: push    edi; a3
0x86F2ED: push    ebx; a2
0x86F2EE: mov     ecx, esi; this
0x86F2F0: call    sub_760010
0x86F2F5: lea     ecx, [esp+30h+var_10]
0x86F2F9: push    ecx
0x86F2FA: call    sub_772630
0x86F2FF: add     esp, 4
0x86F302: push    eax
0x86F303: lea     ecx, [esp+34h+a3]
0x86F307: mov     byte ptr [esp+34h+var_4], 44h ; 'D'
0x86F30C: call    sub_75FAE0
0x86F311: mov     eax, [esp+30h+var_10]
0x86F315: test    eax, eax
0x86F317: mov     byte ptr [esp+30h+var_4], 1
0x86F31C: jz      short loc_86F331
0x86F31E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F322: mov     ecx, eax
0x86F324: add     eax, 5Ch ; '\'
0x86F327: cmp     dword ptr [eax], 0
0x86F32A: jnz     short loc_86F331
0x86F32C: call    sub_772560
0x86F331: mov     edi, [esp+30h+a3]
0x86F335: push    2
0x86F337: push    ebx
0x86F338: push    2
0x86F33A: push    edi
0x86F33B: call    sub_801110
0x86F340: add     esp, 10h
0x86F343: push    edi; a3
0x86F344: push    2; a2
0x86F346: mov     ecx, esi; this
0x86F348: call    sub_760010
0x86F34D: lea     edx, [esp+30h+var_10]
0x86F351: push    edx
0x86F352: call    sub_772630
0x86F357: add     esp, 4
0x86F35A: push    eax
0x86F35B: lea     ecx, [esp+34h+a3]
0x86F35F: mov     byte ptr [esp+34h+var_4], 45h ; 'E'
0x86F364: call    sub_75FAE0
0x86F369: mov     eax, [esp+30h+var_10]
0x86F36D: test    eax, eax
0x86F36F: mov     byte ptr [esp+30h+var_4], 1
0x86F374: jz      short loc_86F389
0x86F376: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F37A: mov     ecx, eax
0x86F37C: add     eax, 5Ch ; '\'
0x86F37F: cmp     dword ptr [eax], 0
0x86F382: jnz     short loc_86F389
0x86F384: call    sub_772560
0x86F389: mov     edi, [esp+30h+a3]
0x86F38D: push    2
0x86F38F: push    ebx
0x86F390: push    3
0x86F392: push    edi
0x86F393: call    sub_801110
0x86F398: add     esp, 10h
0x86F39B: push    edi; a3
0x86F39C: push    3; a2
0x86F39E: mov     ecx, esi; this
0x86F3A0: call    sub_760010
0x86F3A5: lea     eax, [esp+30h+var_10]
0x86F3A9: push    eax
0x86F3AA: call    sub_772630
0x86F3AF: add     esp, 4
0x86F3B2: push    eax
0x86F3B3: lea     ecx, [esp+34h+a3]
0x86F3B7: mov     byte ptr [esp+34h+var_4], 46h ; 'F'
0x86F3BC: call    sub_75FAE0
0x86F3C1: mov     eax, [esp+30h+var_10]
0x86F3C5: test    eax, eax
0x86F3C7: mov     byte ptr [esp+30h+var_4], 1
0x86F3CC: jz      short loc_86F3E1
0x86F3CE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F3D2: mov     ecx, eax
0x86F3D4: add     eax, 5Ch ; '\'
0x86F3D7: cmp     dword ptr [eax], 0
0x86F3DA: jnz     short loc_86F3E1
0x86F3DC: call    sub_772560
0x86F3E1: mov     edi, [esp+30h+a3]
0x86F3E5: push    2
0x86F3E7: push    ebx
0x86F3E8: push    4
0x86F3EA: push    edi
0x86F3EB: call    sub_801110
0x86F3F0: add     esp, 10h
0x86F3F3: push    edi; a3
0x86F3F4: push    4; a2
0x86F3F6: mov     ecx, esi; this
0x86F3F8: call    sub_760010
0x86F3FD: lea     ecx, [esp+30h+var_10]
0x86F401: push    ecx
0x86F402: call    sub_772630
0x86F407: add     esp, 4
0x86F40A: push    eax
0x86F40B: lea     ecx, [esp+34h+a3]
0x86F40F: mov     byte ptr [esp+34h+var_4], 47h ; 'G'
0x86F414: call    sub_75FAE0
0x86F419: mov     eax, [esp+30h+var_10]
0x86F41D: test    eax, eax
0x86F41F: mov     byte ptr [esp+30h+var_4], 1
0x86F424: jz      short loc_86F439
0x86F426: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F42A: mov     ecx, eax
0x86F42C: add     eax, 5Ch ; '\'
0x86F42F: cmp     dword ptr [eax], 0
0x86F432: jnz     short loc_86F439
0x86F434: call    sub_772560
0x86F439: mov     edi, [esp+30h+a3]
0x86F43D: push    0
0x86F43F: push    3
0x86F441: push    5
0x86F443: push    edi
0x86F444: call    sub_801110
0x86F449: mov     edx, ds:0B43110h
0x86F44F: add     esp, 10h
0x86F452: push    edx; a2
0x86F453: mov     ecx, edi; this
0x86F455: call    sub_76C910
0x86F45A: push    edi; a3
0x86F45B: push    5; a2
0x86F45D: mov     ecx, esi; this
0x86F45F: call    sub_760010
0x86F464: lea     eax, [esp+30h+var_10]
0x86F468: push    eax
0x86F469: call    sub_772630
0x86F46E: add     esp, 4
0x86F471: push    eax
0x86F472: lea     ecx, [esp+34h+a3]
0x86F476: mov     byte ptr [esp+34h+var_4], 48h ; 'H'
0x86F47B: call    sub_75FAE0
0x86F480: mov     eax, [esp+30h+var_10]
0x86F484: test    eax, eax
0x86F486: mov     byte ptr [esp+30h+var_4], 1
0x86F48B: jz      short loc_86F4A0
0x86F48D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F491: mov     ecx, eax
0x86F493: add     eax, 5Ch ; '\'
0x86F496: cmp     dword ptr [eax], 0
0x86F499: jnz     short loc_86F4A0
0x86F49B: call    sub_772560
0x86F4A0: mov     edi, [esp+30h+a3]
0x86F4A4: push    2
0x86F4A6: push    ebx
0x86F4A7: push    6
0x86F4A9: push    edi
0x86F4AA: call    sub_801110
0x86F4AF: add     esp, 10h
0x86F4B2: push    edi; a3
0x86F4B3: push    6; a2
0x86F4B5: mov     ecx, esi; this
0x86F4B7: call    sub_760010
0x86F4BC: lea     ecx, [esp+30h+var_10]
0x86F4C0: push    ecx
0x86F4C1: call    sub_772630
0x86F4C6: add     esp, 4
0x86F4C9: push    eax
0x86F4CA: lea     ecx, [esp+34h+a3]
0x86F4CE: mov     byte ptr [esp+34h+var_4], 49h ; 'I'
0x86F4D3: call    sub_75FAE0
0x86F4D8: mov     eax, [esp+30h+var_10]
0x86F4DC: test    eax, eax
0x86F4DE: mov     byte ptr [esp+30h+var_4], 1
0x86F4E3: jz      short loc_86F4F8
0x86F4E5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F4E9: mov     ecx, eax
0x86F4EB: add     eax, 5Ch ; '\'
0x86F4EE: cmp     dword ptr [eax], 0
0x86F4F1: jnz     short loc_86F4F8
0x86F4F3: call    sub_772560
0x86F4F8: mov     edi, [esp+30h+a3]
0x86F4FC: push    0
0x86F4FE: push    3
0x86F500: push    7
0x86F502: push    edi
0x86F503: call    sub_801110
0x86F508: add     esp, 10h
0x86F50B: push    edi; a3
0x86F50C: push    7; a2
0x86F50E: mov     ecx, esi; this
0x86F510: call    sub_760010
0x86F515: mov     ebp, [esp+30h+var_18]
0x86F519: mov     eax, [ebp+0CCh]
0x86F51F: push    eax; a2
0x86F520: mov     ecx, esi; this
0x86F522: call    sub_7AECB0
0x86F527: mov     eax, [ebp+194h]
0x86F52D: push    eax; a2
0x86F52E: mov     ecx, esi; this
0x86F530: call    sub_7AEC60
0x86F535: cmp     dword ptr [esi+30h], 0
0x86F539: jnz     short loc_86F543
0x86F53B: call    sub_772DF0
0x86F540: mov     [esi+30h], eax
0x86F543: mov     ecx, [esi+30h]
0x86F546: push    0
0x86F548: push    0
0x86F54A: push    1Bh
0x86F54C: call    sub_772CD0
0x86F551: cmp     dword ptr [esi+30h], 0
0x86F555: jnz     short loc_86F55F
0x86F557: call    sub_772DF0
0x86F55C: mov     [esi+30h], eax
0x86F55F: mov     ecx, [esi+30h]
0x86F562: push    0
0x86F564: push    0
0x86F566: push    0Fh
0x86F568: call    sub_772CD0
0x86F56D: cmp     dword ptr [esi+30h], 0
0x86F571: jnz     short loc_86F57B
0x86F573: call    sub_772DF0
0x86F578: mov     [esi+30h], eax
0x86F57B: mov     ecx, [esi+30h]
0x86F57E: push    0
0x86F580: push    ebx
0x86F581: push    7
0x86F583: call    sub_772CD0
0x86F588: cmp     dword ptr [esi+30h], 0
0x86F58C: jnz     short loc_86F596
0x86F58E: call    sub_772DF0
0x86F593: mov     [esi+30h], eax
0x86F596: mov     ecx, [esi+30h]
0x86F599: push    0
0x86F59B: push    4
0x86F59D: push    17h
0x86F59F: call    sub_772CD0
0x86F5A4: cmp     dword ptr [esi+30h], 0
0x86F5A8: jnz     short loc_86F5B2
0x86F5AA: call    sub_772DF0
0x86F5AF: mov     [esi+30h], eax
0x86F5B2: mov     ecx, [esi+30h]
0x86F5B5: push    0
0x86F5B7: push    ebx
0x86F5B8: push    0Eh
0x86F5BA: call    sub_772CD0
0x86F5BF: cmp     dword ptr [esi+30h], 0
0x86F5C3: jnz     short loc_86F5CD
0x86F5C5: call    sub_772DF0
0x86F5CA: mov     [esi+30h], eax
0x86F5CD: mov     ecx, [esi+30h]
0x86F5D0: push    0
0x86F5D2: push    0
0x86F5D4: push    34h ; '4'
0x86F5D6: call    sub_772CD0
0x86F5DB: cmp     esi, ds:0B476C4h
0x86F5E1: mov     ebp, 39082h
0x86F5E6: mov     ds:0B43E48h, ebp
0x86F5EC: mov     dword ptr ds:0B444D8h, 11Ch
0x86F5F6: jz      short loc_86F616
0x86F5F8: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86F5FC: jnz     short loc_86F605
0x86F5FE: mov     ecx, esi
0x86F600: call    sub_7604D0
0x86F605: mov     esi, ds:0B476C4h
0x86F60B: test    esi, esi
0x86F60D: mov     [esp+30h+var_14], esi
0x86F611: jz      short loc_86F616
0x86F613: add     [esi+60h], ebx
0x86F616: cmp     dword ptr [esi+18h], 8
0x86F61A: jnb     loc_86F8EE
0x86F620: lea     edx, [esp+30h+var_10]
0x86F624: push    edx
0x86F625: call    sub_772630
0x86F62A: add     esp, 4
0x86F62D: push    eax
0x86F62E: lea     ecx, [esp+34h+a3]
0x86F632: mov     byte ptr [esp+34h+var_4], 4Ah ; 'J'
0x86F637: call    sub_75FAE0
0x86F63C: mov     eax, [esp+30h+var_10]
0x86F640: test    eax, eax
0x86F642: mov     byte ptr [esp+30h+var_4], 1
0x86F647: jz      short loc_86F65C
0x86F649: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F64D: mov     ecx, eax
0x86F64F: add     eax, 5Ch ; '\'
0x86F652: cmp     dword ptr [eax], 0
0x86F655: jnz     short loc_86F65C
0x86F657: call    sub_772560
0x86F65C: mov     edi, [esp+30h+a3]
0x86F660: push    2
0x86F662: push    ebx
0x86F663: push    0
0x86F665: push    edi
0x86F666: call    sub_801110
0x86F66B: add     esp, 10h
0x86F66E: push    edi; a3
0x86F66F: push    0; a2
0x86F671: mov     ecx, esi; this
0x86F673: call    sub_760010
0x86F678: lea     eax, [esp+30h+var_10]
0x86F67C: push    eax
0x86F67D: call    sub_772630
0x86F682: add     esp, 4
0x86F685: push    eax
0x86F686: lea     ecx, [esp+34h+a3]
0x86F68A: mov     byte ptr [esp+34h+var_4], 4Bh ; 'K'
0x86F68F: call    sub_75FAE0
0x86F694: mov     eax, [esp+30h+var_10]
0x86F698: test    eax, eax
0x86F69A: mov     byte ptr [esp+30h+var_4], 1
0x86F69F: jz      short loc_86F6B4
0x86F6A1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F6A5: mov     ecx, eax
0x86F6A7: add     eax, 5Ch ; '\'
0x86F6AA: cmp     dword ptr [eax], 0
0x86F6AD: jnz     short loc_86F6B4
0x86F6AF: call    sub_772560
0x86F6B4: mov     edi, [esp+30h+a3]
0x86F6B8: push    2
0x86F6BA: push    ebx
0x86F6BB: push    ebx
0x86F6BC: push    edi
0x86F6BD: call    sub_801110
0x86F6C2: add     esp, 10h
0x86F6C5: push    edi; a3
0x86F6C6: push    ebx; a2
0x86F6C7: mov     ecx, esi; this
0x86F6C9: call    sub_760010
0x86F6CE: lea     ecx, [esp+30h+var_10]
0x86F6D2: push    ecx
0x86F6D3: call    sub_772630
0x86F6D8: add     esp, 4
0x86F6DB: push    eax
0x86F6DC: lea     ecx, [esp+34h+a3]
0x86F6E0: mov     byte ptr [esp+34h+var_4], 4Ch ; 'L'
0x86F6E5: call    sub_75FAE0
0x86F6EA: mov     eax, [esp+30h+var_10]
0x86F6EE: test    eax, eax
0x86F6F0: mov     byte ptr [esp+30h+var_4], 1
0x86F6F5: jz      short loc_86F70A
0x86F6F7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F6FB: mov     ecx, eax
0x86F6FD: add     eax, 5Ch ; '\'
0x86F700: cmp     dword ptr [eax], 0
0x86F703: jnz     short loc_86F70A
0x86F705: call    sub_772560
0x86F70A: mov     edi, [esp+30h+a3]
0x86F70E: push    2
0x86F710: push    ebx
0x86F711: push    2
0x86F713: push    edi
0x86F714: call    sub_801110
0x86F719: add     esp, 10h
0x86F71C: push    edi; a3
0x86F71D: push    2; a2
0x86F71F: mov     ecx, esi; this
0x86F721: call    sub_760010
0x86F726: lea     edx, [esp+30h+var_10]
0x86F72A: push    edx
0x86F72B: call    sub_772630
0x86F730: add     esp, 4
0x86F733: push    eax
0x86F734: lea     ecx, [esp+34h+a3]
0x86F738: mov     byte ptr [esp+34h+var_4], 4Dh ; 'M'
0x86F73D: call    sub_75FAE0
0x86F742: mov     eax, [esp+30h+var_10]
0x86F746: test    eax, eax
0x86F748: mov     byte ptr [esp+30h+var_4], 1
0x86F74D: jz      short loc_86F762
0x86F74F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F753: mov     ecx, eax
0x86F755: add     eax, 5Ch ; '\'
0x86F758: cmp     dword ptr [eax], 0
0x86F75B: jnz     short loc_86F762
0x86F75D: call    sub_772560
0x86F762: mov     edi, [esp+30h+a3]
0x86F766: push    2
0x86F768: push    ebx
0x86F769: push    3
0x86F76B: push    edi
0x86F76C: call    sub_801110
0x86F771: add     esp, 10h
0x86F774: push    edi; a3
0x86F775: push    3; a2
0x86F777: mov     ecx, esi; this
0x86F779: call    sub_760010
0x86F77E: lea     eax, [esp+30h+var_10]
0x86F782: push    eax
0x86F783: call    sub_772630
0x86F788: add     esp, 4
0x86F78B: push    eax
0x86F78C: lea     ecx, [esp+34h+a3]
0x86F790: mov     byte ptr [esp+34h+var_4], 4Eh ; 'N'
0x86F795: call    sub_75FAE0
0x86F79A: mov     eax, [esp+30h+var_10]
0x86F79E: test    eax, eax
0x86F7A0: mov     byte ptr [esp+30h+var_4], 1
0x86F7A5: jz      short loc_86F7BA
0x86F7A7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F7AB: mov     ecx, eax
0x86F7AD: add     eax, 5Ch ; '\'
0x86F7B0: cmp     dword ptr [eax], 0
0x86F7B3: jnz     short loc_86F7BA
0x86F7B5: call    sub_772560
0x86F7BA: mov     edi, [esp+30h+a3]
0x86F7BE: push    2
0x86F7C0: push    ebx
0x86F7C1: push    4
0x86F7C3: push    edi
0x86F7C4: call    sub_801110
0x86F7C9: add     esp, 10h
0x86F7CC: push    edi; a3
0x86F7CD: push    4; a2
0x86F7CF: mov     ecx, esi; this
0x86F7D1: call    sub_760010
0x86F7D6: lea     ecx, [esp+30h+var_10]
0x86F7DA: push    ecx
0x86F7DB: call    sub_772630
0x86F7E0: add     esp, 4
0x86F7E3: push    eax
0x86F7E4: lea     ecx, [esp+34h+a3]
0x86F7E8: mov     byte ptr [esp+34h+var_4], 4Fh ; 'O'
0x86F7ED: call    sub_75FAE0
0x86F7F2: mov     eax, [esp+30h+var_10]
0x86F7F6: test    eax, eax
0x86F7F8: mov     byte ptr [esp+30h+var_4], 1
0x86F7FD: jz      short loc_86F812
0x86F7FF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F803: mov     ecx, eax
0x86F805: add     eax, 5Ch ; '\'
0x86F808: cmp     dword ptr [eax], 0
0x86F80B: jnz     short loc_86F812
0x86F80D: call    sub_772560
0x86F812: mov     edi, [esp+30h+a3]
0x86F816: push    0
0x86F818: push    3
0x86F81A: push    5
0x86F81C: push    edi
0x86F81D: call    sub_801110
0x86F822: mov     edx, ds:0B43110h
0x86F828: add     esp, 10h
0x86F82B: push    edx; a2
0x86F82C: mov     ecx, edi; this
0x86F82E: call    sub_76C910
0x86F833: push    edi; a3
0x86F834: push    5; a2
0x86F836: mov     ecx, esi; this
0x86F838: call    sub_760010
0x86F83D: lea     eax, [esp+30h+var_10]
0x86F841: push    eax
0x86F842: call    sub_772630
0x86F847: add     esp, 4
0x86F84A: push    eax
0x86F84B: lea     ecx, [esp+34h+a3]
0x86F84F: mov     byte ptr [esp+34h+var_4], 50h ; 'P'
0x86F854: call    sub_75FAE0
0x86F859: mov     eax, [esp+30h+var_10]
0x86F85D: test    eax, eax
0x86F85F: mov     byte ptr [esp+30h+var_4], 1
0x86F864: jz      short loc_86F879
0x86F866: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F86A: mov     ecx, eax
0x86F86C: add     eax, 5Ch ; '\'
0x86F86F: cmp     dword ptr [eax], 0
0x86F872: jnz     short loc_86F879
0x86F874: call    sub_772560
0x86F879: mov     edi, [esp+30h+a3]
0x86F87D: push    2
0x86F87F: push    ebx
0x86F880: push    6
0x86F882: push    edi
0x86F883: call    sub_801110
0x86F888: add     esp, 10h
0x86F88B: push    edi; a3
0x86F88C: push    6; a2
0x86F88E: mov     ecx, esi; this
0x86F890: call    sub_760010
0x86F895: lea     ecx, [esp+30h+var_10]
0x86F899: push    ecx
0x86F89A: call    sub_772630
0x86F89F: add     esp, 4
0x86F8A2: push    eax
0x86F8A3: lea     ecx, [esp+34h+a3]
0x86F8A7: mov     byte ptr [esp+34h+var_4], 51h ; 'Q'
0x86F8AC: call    sub_75FAE0
0x86F8B1: mov     eax, [esp+30h+var_10]
0x86F8B5: test    eax, eax
0x86F8B7: mov     byte ptr [esp+30h+var_4], 1
0x86F8BC: jz      short loc_86F8D1
0x86F8BE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86F8C2: mov     ecx, eax
0x86F8C4: add     eax, 5Ch ; '\'
0x86F8C7: cmp     dword ptr [eax], 0
0x86F8CA: jnz     short loc_86F8D1
0x86F8CC: call    sub_772560
0x86F8D1: mov     edi, [esp+30h+a3]
0x86F8D5: push    0
0x86F8D7: push    3
0x86F8D9: push    7
0x86F8DB: push    edi
0x86F8DC: call    sub_801110
0x86F8E1: add     esp, 10h
0x86F8E4: push    edi; a3
0x86F8E5: push    7; a2
0x86F8E7: mov     ecx, esi; this
0x86F8E9: call    sub_760010
0x86F8EE: mov     edx, [esp+30h+var_18]
0x86F8F2: mov     eax, [edx+0CCh]
0x86F8F8: push    eax; a2
0x86F8F9: mov     ecx, esi; this
0x86F8FB: call    sub_7AECB0
0x86F900: mov     eax, [esp+30h+var_18]
0x86F904: mov     eax, [eax+198h]
0x86F90A: push    eax; a2
0x86F90B: mov     ecx, esi; this
0x86F90D: call    sub_7AEC60
0x86F912: cmp     dword ptr [esi+30h], 0
0x86F916: jnz     short loc_86F920
0x86F918: call    sub_772DF0
0x86F91D: mov     [esi+30h], eax
0x86F920: mov     ecx, [esi+30h]
0x86F923: push    0
0x86F925: push    0
0x86F927: push    1Bh
0x86F929: call    sub_772CD0
0x86F92E: cmp     dword ptr [esi+30h], 0
0x86F932: jnz     short loc_86F93C
0x86F934: call    sub_772DF0
0x86F939: mov     [esi+30h], eax
0x86F93C: mov     ecx, [esi+30h]
0x86F93F: push    0
0x86F941: push    0
0x86F943: push    0Fh
0x86F945: call    sub_772CD0
0x86F94A: cmp     dword ptr [esi+30h], 0
0x86F94E: jnz     short loc_86F958
0x86F950: call    sub_772DF0
0x86F955: mov     [esi+30h], eax
0x86F958: mov     ecx, [esi+30h]
0x86F95B: push    0
0x86F95D: push    ebx
0x86F95E: push    7
0x86F960: call    sub_772CD0
0x86F965: cmp     dword ptr [esi+30h], 0
0x86F969: jnz     short loc_86F973
0x86F96B: call    sub_772DF0
0x86F970: mov     [esi+30h], eax
0x86F973: mov     ecx, [esi+30h]
0x86F976: push    0
0x86F978: push    4
0x86F97A: push    17h
0x86F97C: call    sub_772CD0
0x86F981: cmp     dword ptr [esi+30h], 0
0x86F985: jnz     short loc_86F98F
0x86F987: call    sub_772DF0
0x86F98C: mov     [esi+30h], eax
0x86F98F: mov     ecx, [esi+30h]
0x86F992: push    0
0x86F994: push    ebx
0x86F995: push    0Eh
0x86F997: call    sub_772CD0
0x86F99C: cmp     dword ptr [esi+30h], 0
0x86F9A0: jnz     short loc_86F9AA
0x86F9A2: call    sub_772DF0
0x86F9A7: mov     [esi+30h], eax
0x86F9AA: mov     ecx, [esi+30h]
0x86F9AD: push    0
0x86F9AF: push    0
0x86F9B1: push    34h ; '4'
0x86F9B3: call    sub_772CD0
0x86F9B8: cmp     esi, ds:0B476D8h
0x86F9BE: mov     ds:0B43E4Ch, ebp
0x86F9C4: mov     dword ptr ds:0B444DCh, 19Ch
0x86F9CE: jz      short loc_86F9EE
0x86F9D0: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86F9D4: jnz     short loc_86F9DD
0x86F9D6: mov     ecx, esi
0x86F9D8: call    sub_7604D0
0x86F9DD: mov     esi, ds:0B476D8h
0x86F9E3: test    esi, esi
0x86F9E5: mov     [esp+30h+var_14], esi
0x86F9E9: jz      short loc_86F9EE
0x86F9EB: add     [esi+60h], ebx
0x86F9EE: cmp     dword ptr [esi+18h], 8
0x86F9F2: jnb     loc_86FCC6
0x86F9F8: lea     ecx, [esp+30h+var_10]
0x86F9FC: push    ecx
0x86F9FD: call    sub_772630
0x86FA02: add     esp, 4
0x86FA05: push    eax
0x86FA06: lea     ecx, [esp+34h+a3]
0x86FA0A: mov     byte ptr [esp+34h+var_4], 52h ; 'R'
0x86FA0F: call    sub_75FAE0
0x86FA14: mov     eax, [esp+30h+var_10]
0x86FA18: test    eax, eax
0x86FA1A: mov     byte ptr [esp+30h+var_4], 1
0x86FA1F: jz      short loc_86FA34
0x86FA21: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FA25: mov     ecx, eax
0x86FA27: add     eax, 5Ch ; '\'
0x86FA2A: cmp     dword ptr [eax], 0
0x86FA2D: jnz     short loc_86FA34
0x86FA2F: call    sub_772560
0x86FA34: mov     edi, [esp+30h+a3]
0x86FA38: push    2
0x86FA3A: push    ebx
0x86FA3B: push    0
0x86FA3D: push    edi
0x86FA3E: call    sub_801110
0x86FA43: add     esp, 10h
0x86FA46: push    edi; a3
0x86FA47: push    0; a2
0x86FA49: mov     ecx, esi; this
0x86FA4B: call    sub_760010
0x86FA50: lea     edx, [esp+30h+var_10]
0x86FA54: push    edx
0x86FA55: call    sub_772630
0x86FA5A: add     esp, 4
0x86FA5D: push    eax
0x86FA5E: lea     ecx, [esp+34h+a3]
0x86FA62: mov     byte ptr [esp+34h+var_4], 53h ; 'S'
0x86FA67: call    sub_75FAE0
0x86FA6C: mov     eax, [esp+30h+var_10]
0x86FA70: test    eax, eax
0x86FA72: mov     byte ptr [esp+30h+var_4], 1
0x86FA77: jz      short loc_86FA8C
0x86FA79: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FA7D: mov     ecx, eax
0x86FA7F: add     eax, 5Ch ; '\'
0x86FA82: cmp     dword ptr [eax], 0
0x86FA85: jnz     short loc_86FA8C
0x86FA87: call    sub_772560
0x86FA8C: mov     edi, [esp+30h+a3]
0x86FA90: push    2
0x86FA92: push    ebx
0x86FA93: push    ebx
0x86FA94: push    edi
0x86FA95: call    sub_801110
0x86FA9A: add     esp, 10h
0x86FA9D: push    edi; a3
0x86FA9E: push    ebx; a2
0x86FA9F: mov     ecx, esi; this
0x86FAA1: call    sub_760010
0x86FAA6: lea     eax, [esp+30h+var_10]
0x86FAAA: push    eax
0x86FAAB: call    sub_772630
0x86FAB0: add     esp, 4
0x86FAB3: push    eax
0x86FAB4: lea     ecx, [esp+34h+a3]
0x86FAB8: mov     byte ptr [esp+34h+var_4], 54h ; 'T'
0x86FABD: call    sub_75FAE0
0x86FAC2: mov     eax, [esp+30h+var_10]
0x86FAC6: test    eax, eax
0x86FAC8: mov     byte ptr [esp+30h+var_4], 1
0x86FACD: jz      short loc_86FAE2
0x86FACF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FAD3: mov     ecx, eax
0x86FAD5: add     eax, 5Ch ; '\'
0x86FAD8: cmp     dword ptr [eax], 0
0x86FADB: jnz     short loc_86FAE2
0x86FADD: call    sub_772560
0x86FAE2: mov     edi, [esp+30h+a3]
0x86FAE6: push    2
0x86FAE8: push    ebx
0x86FAE9: push    2
0x86FAEB: push    edi
0x86FAEC: call    sub_801110
0x86FAF1: add     esp, 10h
0x86FAF4: push    edi; a3
0x86FAF5: push    2; a2
0x86FAF7: mov     ecx, esi; this
0x86FAF9: call    sub_760010
0x86FAFE: lea     ecx, [esp+30h+var_10]
0x86FB02: push    ecx
0x86FB03: call    sub_772630
0x86FB08: add     esp, 4
0x86FB0B: push    eax
0x86FB0C: lea     ecx, [esp+34h+a3]
0x86FB10: mov     byte ptr [esp+34h+var_4], 55h ; 'U'
0x86FB15: call    sub_75FAE0
0x86FB1A: mov     eax, [esp+30h+var_10]
0x86FB1E: test    eax, eax
0x86FB20: mov     byte ptr [esp+30h+var_4], 1
0x86FB25: jz      short loc_86FB3A
0x86FB27: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FB2B: mov     ecx, eax
0x86FB2D: add     eax, 5Ch ; '\'
0x86FB30: cmp     dword ptr [eax], 0
0x86FB33: jnz     short loc_86FB3A
0x86FB35: call    sub_772560
0x86FB3A: mov     edi, [esp+30h+a3]
0x86FB3E: push    2
0x86FB40: push    ebx
0x86FB41: push    3
0x86FB43: push    edi
0x86FB44: call    sub_801110
0x86FB49: add     esp, 10h
0x86FB4C: push    edi; a3
0x86FB4D: push    3; a2
0x86FB4F: mov     ecx, esi; this
0x86FB51: call    sub_760010
0x86FB56: lea     edx, [esp+30h+var_10]
0x86FB5A: push    edx
0x86FB5B: call    sub_772630
0x86FB60: add     esp, 4
0x86FB63: push    eax
0x86FB64: lea     ecx, [esp+34h+a3]
0x86FB68: mov     byte ptr [esp+34h+var_4], 56h ; 'V'
0x86FB6D: call    sub_75FAE0
0x86FB72: mov     eax, [esp+30h+var_10]
0x86FB76: test    eax, eax
0x86FB78: mov     byte ptr [esp+30h+var_4], 1
0x86FB7D: jz      short loc_86FB92
0x86FB7F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FB83: mov     ecx, eax
0x86FB85: add     eax, 5Ch ; '\'
0x86FB88: cmp     dword ptr [eax], 0
0x86FB8B: jnz     short loc_86FB92
0x86FB8D: call    sub_772560
0x86FB92: mov     edi, [esp+30h+a3]
0x86FB96: push    2
0x86FB98: push    ebx
0x86FB99: push    4
0x86FB9B: push    edi
0x86FB9C: call    sub_801110
0x86FBA1: add     esp, 10h
0x86FBA4: push    edi; a3
0x86FBA5: push    4; a2
0x86FBA7: mov     ecx, esi; this
0x86FBA9: call    sub_760010
0x86FBAE: lea     eax, [esp+30h+var_10]
0x86FBB2: push    eax
0x86FBB3: call    sub_772630
0x86FBB8: add     esp, 4
0x86FBBB: push    eax
0x86FBBC: lea     ecx, [esp+34h+a3]
0x86FBC0: mov     byte ptr [esp+34h+var_4], 57h ; 'W'
0x86FBC5: call    sub_75FAE0
0x86FBCA: mov     eax, [esp+30h+var_10]
0x86FBCE: test    eax, eax
0x86FBD0: mov     byte ptr [esp+30h+var_4], 1
0x86FBD5: jz      short loc_86FBEA
0x86FBD7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FBDB: mov     ecx, eax
0x86FBDD: add     eax, 5Ch ; '\'
0x86FBE0: cmp     dword ptr [eax], 0
0x86FBE3: jnz     short loc_86FBEA
0x86FBE5: call    sub_772560
0x86FBEA: mov     edi, [esp+30h+a3]
0x86FBEE: push    0
0x86FBF0: push    3
0x86FBF2: push    5
0x86FBF4: push    edi
0x86FBF5: call    sub_801110
0x86FBFA: mov     ecx, ds:0B43110h
0x86FC00: add     esp, 10h
0x86FC03: push    ecx; a2
0x86FC04: mov     ecx, edi; this
0x86FC06: call    sub_76C910
0x86FC0B: push    edi; a3
0x86FC0C: push    5; a2
0x86FC0E: mov     ecx, esi; this
0x86FC10: call    sub_760010
0x86FC15: lea     edx, [esp+30h+var_10]
0x86FC19: push    edx
0x86FC1A: call    sub_772630
0x86FC1F: add     esp, 4
0x86FC22: push    eax
0x86FC23: lea     ecx, [esp+34h+a3]
0x86FC27: mov     byte ptr [esp+34h+var_4], 58h ; 'X'
0x86FC2C: call    sub_75FAE0
0x86FC31: mov     eax, [esp+30h+var_10]
0x86FC35: test    eax, eax
0x86FC37: mov     byte ptr [esp+30h+var_4], 1
0x86FC3C: jz      short loc_86FC51
0x86FC3E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FC42: mov     ecx, eax
0x86FC44: add     eax, 5Ch ; '\'
0x86FC47: cmp     dword ptr [eax], 0
0x86FC4A: jnz     short loc_86FC51
0x86FC4C: call    sub_772560
0x86FC51: mov     edi, [esp+30h+a3]
0x86FC55: push    2
0x86FC57: push    ebx
0x86FC58: push    6
0x86FC5A: push    edi
0x86FC5B: call    sub_801110
0x86FC60: add     esp, 10h
0x86FC63: push    edi; a3
0x86FC64: push    6; a2
0x86FC66: mov     ecx, esi; this
0x86FC68: call    sub_760010
0x86FC6D: lea     eax, [esp+30h+var_10]
0x86FC71: push    eax
0x86FC72: call    sub_772630
0x86FC77: add     esp, 4
0x86FC7A: push    eax
0x86FC7B: lea     ecx, [esp+34h+a3]
0x86FC7F: mov     byte ptr [esp+34h+var_4], 59h ; 'Y'
0x86FC84: call    sub_75FAE0
0x86FC89: mov     eax, [esp+30h+var_10]
0x86FC8D: test    eax, eax
0x86FC8F: mov     byte ptr [esp+30h+var_4], 1
0x86FC94: jz      short loc_86FCA9
0x86FC96: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FC9A: mov     ecx, eax
0x86FC9C: add     eax, 5Ch ; '\'
0x86FC9F: cmp     dword ptr [eax], 0
0x86FCA2: jnz     short loc_86FCA9
0x86FCA4: call    sub_772560
0x86FCA9: mov     edi, [esp+30h+a3]
0x86FCAD: push    0
0x86FCAF: push    3
0x86FCB1: push    7
0x86FCB3: push    edi
0x86FCB4: call    sub_801110
0x86FCB9: add     esp, 10h
0x86FCBC: push    edi; a3
0x86FCBD: push    7; a2
0x86FCBF: mov     ecx, esi; this
0x86FCC1: call    sub_760010
0x86FCC6: mov     ebp, [esp+30h+var_18]
0x86FCCA: mov     eax, [ebp+0D8h]
0x86FCD0: push    eax; a2
0x86FCD1: mov     ecx, esi; this
0x86FCD3: call    sub_7AECB0
0x86FCD8: mov     eax, [ebp+19Ch]
0x86FCDE: push    eax; a2
0x86FCDF: mov     ecx, esi; this
0x86FCE1: call    sub_7AEC60
0x86FCE6: cmp     dword ptr [esi+30h], 0
0x86FCEA: jnz     short loc_86FCF4
0x86FCEC: call    sub_772DF0
0x86FCF1: mov     [esi+30h], eax
0x86FCF4: mov     ecx, [esi+30h]
0x86FCF7: push    0
0x86FCF9: push    0
0x86FCFB: push    1Bh
0x86FCFD: call    sub_772CD0
0x86FD02: cmp     dword ptr [esi+30h], 0
0x86FD06: jnz     short loc_86FD10
0x86FD08: call    sub_772DF0
0x86FD0D: mov     [esi+30h], eax
0x86FD10: mov     ecx, [esi+30h]
0x86FD13: push    0
0x86FD15: push    0
0x86FD17: push    0Fh
0x86FD19: call    sub_772CD0
0x86FD1E: cmp     dword ptr [esi+30h], 0
0x86FD22: jnz     short loc_86FD2C
0x86FD24: call    sub_772DF0
0x86FD29: mov     [esi+30h], eax
0x86FD2C: mov     ecx, [esi+30h]
0x86FD2F: push    0
0x86FD31: push    ebx
0x86FD32: push    7
0x86FD34: call    sub_772CD0
0x86FD39: cmp     dword ptr [esi+30h], 0
0x86FD3D: jnz     short loc_86FD47
0x86FD3F: call    sub_772DF0
0x86FD44: mov     [esi+30h], eax
0x86FD47: mov     ecx, [esi+30h]
0x86FD4A: push    0
0x86FD4C: push    4
0x86FD4E: push    17h
0x86FD50: call    sub_772CD0
0x86FD55: cmp     dword ptr [esi+30h], 0
0x86FD59: jnz     short loc_86FD63
0x86FD5B: call    sub_772DF0
0x86FD60: mov     [esi+30h], eax
0x86FD63: mov     ecx, [esi+30h]
0x86FD66: push    0
0x86FD68: push    ebx
0x86FD69: push    0Eh
0x86FD6B: call    sub_772CD0
0x86FD70: cmp     dword ptr [esi+30h], 0
0x86FD74: jnz     short loc_86FD7E
0x86FD76: call    sub_772DF0
0x86FD7B: mov     [esi+30h], eax
0x86FD7E: mov     ecx, [esi+30h]
0x86FD81: push    0
0x86FD83: push    0
0x86FD85: push    34h ; '4'
0x86FD87: call    sub_772CD0
0x86FD8C: cmp     esi, ds:0B476DCh
0x86FD92: mov     ebp, 790F8h
0x86FD97: mov     ds:0B43E94h, ebp
0x86FD9D: mov     dword ptr ds:0B44524h, 11Ch
0x86FDA7: jz      short loc_86FDC7
0x86FDA9: add     dword ptr [esi+60h], 0FFFFFFFFh
0x86FDAD: jnz     short loc_86FDB6
0x86FDAF: mov     ecx, esi
0x86FDB1: call    sub_7604D0
0x86FDB6: mov     esi, ds:0B476DCh
0x86FDBC: test    esi, esi
0x86FDBE: mov     [esp+30h+var_14], esi
0x86FDC2: jz      short loc_86FDC7
0x86FDC4: add     [esi+60h], ebx
0x86FDC7: cmp     dword ptr [esi+18h], 8
0x86FDCB: jnb     loc_87009F
0x86FDD1: lea     ecx, [esp+30h+var_10]
0x86FDD5: push    ecx
0x86FDD6: call    sub_772630
0x86FDDB: add     esp, 4
0x86FDDE: push    eax
0x86FDDF: lea     ecx, [esp+34h+a3]
0x86FDE3: mov     byte ptr [esp+34h+var_4], 5Ah ; 'Z'
0x86FDE8: call    sub_75FAE0
0x86FDED: mov     eax, [esp+30h+var_10]
0x86FDF1: test    eax, eax
0x86FDF3: mov     byte ptr [esp+30h+var_4], 1
0x86FDF8: jz      short loc_86FE0D
0x86FDFA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FDFE: mov     ecx, eax
0x86FE00: add     eax, 5Ch ; '\'
0x86FE03: cmp     dword ptr [eax], 0
0x86FE06: jnz     short loc_86FE0D
0x86FE08: call    sub_772560
0x86FE0D: mov     edi, [esp+30h+a3]
0x86FE11: push    2
0x86FE13: push    ebx
0x86FE14: push    0
0x86FE16: push    edi
0x86FE17: call    sub_801110
0x86FE1C: add     esp, 10h
0x86FE1F: push    edi; a3
0x86FE20: push    0; a2
0x86FE22: mov     ecx, esi; this
0x86FE24: call    sub_760010
0x86FE29: lea     edx, [esp+30h+var_10]
0x86FE2D: push    edx
0x86FE2E: call    sub_772630
0x86FE33: add     esp, 4
0x86FE36: push    eax
0x86FE37: lea     ecx, [esp+34h+a3]
0x86FE3B: mov     byte ptr [esp+34h+var_4], 5Bh ; '['
0x86FE40: call    sub_75FAE0
0x86FE45: mov     eax, [esp+30h+var_10]
0x86FE49: test    eax, eax
0x86FE4B: mov     byte ptr [esp+30h+var_4], 1
0x86FE50: jz      short loc_86FE65
0x86FE52: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FE56: mov     ecx, eax
0x86FE58: add     eax, 5Ch ; '\'
0x86FE5B: cmp     dword ptr [eax], 0
0x86FE5E: jnz     short loc_86FE65
0x86FE60: call    sub_772560
0x86FE65: mov     edi, [esp+30h+a3]
0x86FE69: push    2
0x86FE6B: push    ebx
0x86FE6C: push    ebx
0x86FE6D: push    edi
0x86FE6E: call    sub_801110
0x86FE73: add     esp, 10h
0x86FE76: push    edi; a3
0x86FE77: push    ebx; a2
0x86FE78: mov     ecx, esi; this
0x86FE7A: call    sub_760010
0x86FE7F: lea     eax, [esp+30h+var_10]
0x86FE83: push    eax
0x86FE84: call    sub_772630
0x86FE89: add     esp, 4
0x86FE8C: push    eax
0x86FE8D: lea     ecx, [esp+34h+a3]
0x86FE91: mov     byte ptr [esp+34h+var_4], 5Ch ; '\'
0x86FE96: call    sub_75FAE0
0x86FE9B: mov     eax, [esp+30h+var_10]
0x86FE9F: test    eax, eax
0x86FEA1: mov     byte ptr [esp+30h+var_4], 1
0x86FEA6: jz      short loc_86FEBB
0x86FEA8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FEAC: mov     ecx, eax
0x86FEAE: add     eax, 5Ch ; '\'
0x86FEB1: cmp     dword ptr [eax], 0
0x86FEB4: jnz     short loc_86FEBB
0x86FEB6: call    sub_772560
0x86FEBB: mov     edi, [esp+30h+a3]
0x86FEBF: push    2
0x86FEC1: push    ebx
0x86FEC2: push    2
0x86FEC4: push    edi
0x86FEC5: call    sub_801110
0x86FECA: add     esp, 10h
0x86FECD: push    edi; a3
0x86FECE: push    2; a2
0x86FED0: mov     ecx, esi; this
0x86FED2: call    sub_760010
0x86FED7: lea     ecx, [esp+30h+var_10]
0x86FEDB: push    ecx
0x86FEDC: call    sub_772630
0x86FEE1: add     esp, 4
0x86FEE4: push    eax
0x86FEE5: lea     ecx, [esp+34h+a3]
0x86FEE9: mov     byte ptr [esp+34h+var_4], 5Dh ; ']'
0x86FEEE: call    sub_75FAE0
0x86FEF3: mov     eax, [esp+30h+var_10]
0x86FEF7: test    eax, eax
0x86FEF9: mov     byte ptr [esp+30h+var_4], 1
0x86FEFE: jz      short loc_86FF13
0x86FF00: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FF04: mov     ecx, eax
0x86FF06: add     eax, 5Ch ; '\'
0x86FF09: cmp     dword ptr [eax], 0
0x86FF0C: jnz     short loc_86FF13
0x86FF0E: call    sub_772560
0x86FF13: mov     edi, [esp+30h+a3]
0x86FF17: push    2
0x86FF19: push    ebx
0x86FF1A: push    3
0x86FF1C: push    edi
0x86FF1D: call    sub_801110
0x86FF22: add     esp, 10h
0x86FF25: push    edi; a3
0x86FF26: push    3; a2
0x86FF28: mov     ecx, esi; this
0x86FF2A: call    sub_760010
0x86FF2F: lea     edx, [esp+30h+var_10]
0x86FF33: push    edx
0x86FF34: call    sub_772630
0x86FF39: add     esp, 4
0x86FF3C: push    eax
0x86FF3D: lea     ecx, [esp+34h+a3]
0x86FF41: mov     byte ptr [esp+34h+var_4], 5Eh ; '^'
0x86FF46: call    sub_75FAE0
0x86FF4B: mov     eax, [esp+30h+var_10]
0x86FF4F: test    eax, eax
0x86FF51: mov     byte ptr [esp+30h+var_4], 1
0x86FF56: jz      short loc_86FF6B
0x86FF58: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FF5C: mov     ecx, eax
0x86FF5E: add     eax, 5Ch ; '\'
0x86FF61: cmp     dword ptr [eax], 0
0x86FF64: jnz     short loc_86FF6B
0x86FF66: call    sub_772560
0x86FF6B: mov     edi, [esp+30h+a3]
0x86FF6F: push    2
0x86FF71: push    ebx
0x86FF72: push    4
0x86FF74: push    edi
0x86FF75: call    sub_801110
0x86FF7A: add     esp, 10h
0x86FF7D: push    edi; a3
0x86FF7E: push    4; a2
0x86FF80: mov     ecx, esi; this
0x86FF82: call    sub_760010
0x86FF87: lea     eax, [esp+30h+var_10]
0x86FF8B: push    eax
0x86FF8C: call    sub_772630
0x86FF91: add     esp, 4
0x86FF94: push    eax
0x86FF95: lea     ecx, [esp+34h+a3]
0x86FF99: mov     byte ptr [esp+34h+var_4], 5Fh ; '_'
0x86FF9E: call    sub_75FAE0
0x86FFA3: mov     eax, [esp+30h+var_10]
0x86FFA7: test    eax, eax
0x86FFA9: mov     byte ptr [esp+30h+var_4], 1
0x86FFAE: jz      short loc_86FFC3
0x86FFB0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x86FFB4: mov     ecx, eax
0x86FFB6: add     eax, 5Ch ; '\'
0x86FFB9: cmp     dword ptr [eax], 0
0x86FFBC: jnz     short loc_86FFC3
0x86FFBE: call    sub_772560
0x86FFC3: mov     edi, [esp+30h+a3]
0x86FFC7: push    0
0x86FFC9: push    3
0x86FFCB: push    5
0x86FFCD: push    edi
0x86FFCE: call    sub_801110
0x86FFD3: mov     ecx, ds:0B43110h
0x86FFD9: add     esp, 10h
0x86FFDC: push    ecx; a2
0x86FFDD: mov     ecx, edi; this
0x86FFDF: call    sub_76C910
0x86FFE4: push    edi; a3
0x86FFE5: push    5; a2
0x86FFE7: mov     ecx, esi; this
0x86FFE9: call    sub_760010
0x86FFEE: lea     edx, [esp+30h+var_10]
0x86FFF2: push    edx
0x86FFF3: call    sub_772630
0x86FFF8: add     esp, 4
0x86FFFB: push    eax
0x86FFFC: lea     ecx, [esp+34h+a3]
0x870000: mov     byte ptr [esp+34h+var_4], 60h ; '`'
0x870005: call    sub_75FAE0
0x87000A: mov     eax, [esp+30h+var_10]
0x87000E: test    eax, eax
0x870010: mov     byte ptr [esp+30h+var_4], 1
0x870015: jz      short loc_87002A
0x870017: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87001B: mov     ecx, eax
0x87001D: add     eax, 5Ch ; '\'
0x870020: cmp     dword ptr [eax], 0
0x870023: jnz     short loc_87002A
0x870025: call    sub_772560
0x87002A: mov     edi, [esp+30h+a3]
0x87002E: push    2
0x870030: push    ebx
0x870031: push    6
0x870033: push    edi
0x870034: call    sub_801110
0x870039: add     esp, 10h
0x87003C: push    edi; a3
0x87003D: push    6; a2
0x87003F: mov     ecx, esi; this
0x870041: call    sub_760010
0x870046: lea     eax, [esp+30h+var_10]
0x87004A: push    eax
0x87004B: call    sub_772630
0x870050: add     esp, 4
0x870053: push    eax
0x870054: lea     ecx, [esp+34h+a3]
0x870058: mov     byte ptr [esp+34h+var_4], 61h ; 'a'
0x87005D: call    sub_75FAE0
0x870062: mov     eax, [esp+30h+var_10]
0x870066: test    eax, eax
0x870068: mov     byte ptr [esp+30h+var_4], 1
0x87006D: jz      short loc_870082
0x87006F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870073: mov     ecx, eax
0x870075: add     eax, 5Ch ; '\'
0x870078: cmp     dword ptr [eax], 0
0x87007B: jnz     short loc_870082
0x87007D: call    sub_772560
0x870082: mov     edi, [esp+30h+a3]
0x870086: push    0
0x870088: push    3
0x87008A: push    7
0x87008C: push    edi
0x87008D: call    sub_801110
0x870092: add     esp, 10h
0x870095: push    edi; a3
0x870096: push    7; a2
0x870098: mov     ecx, esi; this
0x87009A: call    sub_760010
0x87009F: mov     ecx, [esp+30h+var_18]
0x8700A3: mov     eax, [ecx+0D8h]
0x8700A9: push    eax; a2
0x8700AA: mov     ecx, esi; this
0x8700AC: call    sub_7AECB0
0x8700B1: mov     edx, [esp+30h+var_18]
0x8700B5: mov     eax, [edx+1A0h]
0x8700BB: push    eax; a2
0x8700BC: mov     ecx, esi; this
0x8700BE: call    sub_7AEC60
0x8700C3: cmp     dword ptr [esi+30h], 0
0x8700C7: jnz     short loc_8700D1
0x8700C9: call    sub_772DF0
0x8700CE: mov     [esi+30h], eax
0x8700D1: mov     ecx, [esi+30h]
0x8700D4: push    0
0x8700D6: push    0
0x8700D8: push    1Bh
0x8700DA: call    sub_772CD0
0x8700DF: cmp     dword ptr [esi+30h], 0
0x8700E3: jnz     short loc_8700ED
0x8700E5: call    sub_772DF0
0x8700EA: mov     [esi+30h], eax
0x8700ED: mov     ecx, [esi+30h]
0x8700F0: push    0
0x8700F2: push    0
0x8700F4: push    0Fh
0x8700F6: call    sub_772CD0
0x8700FB: cmp     dword ptr [esi+30h], 0
0x8700FF: jnz     short loc_870109
0x870101: call    sub_772DF0
0x870106: mov     [esi+30h], eax
0x870109: mov     ecx, [esi+30h]
0x87010C: push    0
0x87010E: push    ebx
0x87010F: push    7
0x870111: call    sub_772CD0
0x870116: cmp     dword ptr [esi+30h], 0
0x87011A: jnz     short loc_870124
0x87011C: call    sub_772DF0
0x870121: mov     [esi+30h], eax
0x870124: mov     ecx, [esi+30h]
0x870127: push    0
0x870129: push    4
0x87012B: push    17h
0x87012D: call    sub_772CD0
0x870132: cmp     dword ptr [esi+30h], 0
0x870136: jnz     short loc_870140
0x870138: call    sub_772DF0
0x87013D: mov     [esi+30h], eax
0x870140: mov     ecx, [esi+30h]
0x870143: push    0
0x870145: push    ebx
0x870146: push    0Eh
0x870148: call    sub_772CD0
0x87014D: cmp     dword ptr [esi+30h], 0
0x870151: jnz     short loc_87015B
0x870153: call    sub_772DF0
0x870158: mov     [esi+30h], eax
0x87015B: mov     ecx, [esi+30h]
0x87015E: push    0
0x870160: push    0
0x870162: push    34h ; '4'
0x870164: call    sub_772CD0
0x870169: cmp     esi, ds:0B476D0h
0x87016F: mov     ds:0B43E98h, ebp
0x870175: mov     dword ptr ds:0B44528h, 19Ch
0x87017F: jz      short loc_87019F
0x870181: add     dword ptr [esi+60h], 0FFFFFFFFh
0x870185: jnz     short loc_87018E
0x870187: mov     ecx, esi
0x870189: call    sub_7604D0
0x87018E: mov     esi, ds:0B476D0h
0x870194: test    esi, esi
0x870196: mov     [esp+30h+var_14], esi
0x87019A: jz      short loc_87019F
0x87019C: add     [esi+60h], ebx
0x87019F: cmp     dword ptr [esi+18h], 8
0x8701A3: jnb     loc_870476
0x8701A9: lea     eax, [esp+30h+var_10]
0x8701AD: push    eax
0x8701AE: call    sub_772630
0x8701B3: add     esp, 4
0x8701B6: push    eax
0x8701B7: lea     ecx, [esp+34h+a3]
0x8701BB: mov     byte ptr [esp+34h+var_4], 62h ; 'b'
0x8701C0: call    sub_75FAE0
0x8701C5: mov     eax, [esp+30h+var_10]
0x8701C9: test    eax, eax
0x8701CB: mov     byte ptr [esp+30h+var_4], 1
0x8701D0: jz      short loc_8701E5
0x8701D2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8701D6: mov     ecx, eax
0x8701D8: add     eax, 5Ch ; '\'
0x8701DB: cmp     dword ptr [eax], 0
0x8701DE: jnz     short loc_8701E5
0x8701E0: call    sub_772560
0x8701E5: mov     edi, [esp+30h+a3]
0x8701E9: push    2
0x8701EB: push    ebx
0x8701EC: push    0
0x8701EE: push    edi
0x8701EF: call    sub_801110
0x8701F4: add     esp, 10h
0x8701F7: push    edi; a3
0x8701F8: push    0; a2
0x8701FA: mov     ecx, esi; this
0x8701FC: call    sub_760010
0x870201: lea     ecx, [esp+30h+var_10]
0x870205: push    ecx
0x870206: call    sub_772630
0x87020B: add     esp, 4
0x87020E: push    eax
0x87020F: lea     ecx, [esp+34h+a3]
0x870213: mov     byte ptr [esp+34h+var_4], 63h ; 'c'
0x870218: call    sub_75FAE0
0x87021D: mov     eax, [esp+30h+var_10]
0x870221: test    eax, eax
0x870223: mov     byte ptr [esp+30h+var_4], 1
0x870228: jz      short loc_87023D
0x87022A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87022E: mov     ecx, eax
0x870230: add     eax, 5Ch ; '\'
0x870233: cmp     dword ptr [eax], 0
0x870236: jnz     short loc_87023D
0x870238: call    sub_772560
0x87023D: mov     edi, [esp+30h+a3]
0x870241: push    2
0x870243: push    ebx
0x870244: push    ebx
0x870245: push    edi
0x870246: call    sub_801110
0x87024B: add     esp, 10h
0x87024E: push    edi; a3
0x87024F: push    ebx; a2
0x870250: mov     ecx, esi; this
0x870252: call    sub_760010
0x870257: lea     edx, [esp+30h+var_10]
0x87025B: push    edx
0x87025C: call    sub_772630
0x870261: add     esp, 4
0x870264: push    eax
0x870265: lea     ecx, [esp+34h+a3]
0x870269: mov     byte ptr [esp+34h+var_4], 64h ; 'd'
0x87026E: call    sub_75FAE0
0x870273: mov     eax, [esp+30h+var_10]
0x870277: test    eax, eax
0x870279: mov     byte ptr [esp+30h+var_4], 1
0x87027E: jz      short loc_870293
0x870280: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870284: mov     ecx, eax
0x870286: add     eax, 5Ch ; '\'
0x870289: cmp     dword ptr [eax], 0
0x87028C: jnz     short loc_870293
0x87028E: call    sub_772560
0x870293: mov     edi, [esp+30h+a3]
0x870297: push    2
0x870299: push    ebx
0x87029A: push    2
0x87029C: push    edi
0x87029D: call    sub_801110
0x8702A2: add     esp, 10h
0x8702A5: push    edi; a3
0x8702A6: push    2; a2
0x8702A8: mov     ecx, esi; this
0x8702AA: call    sub_760010
0x8702AF: lea     eax, [esp+30h+var_10]
0x8702B3: push    eax
0x8702B4: call    sub_772630
0x8702B9: add     esp, 4
0x8702BC: push    eax
0x8702BD: lea     ecx, [esp+34h+a3]
0x8702C1: mov     byte ptr [esp+34h+var_4], 65h ; 'e'
0x8702C6: call    sub_75FAE0
0x8702CB: mov     eax, [esp+30h+var_10]
0x8702CF: test    eax, eax
0x8702D1: mov     byte ptr [esp+30h+var_4], 1
0x8702D6: jz      short loc_8702EB
0x8702D8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8702DC: mov     ecx, eax
0x8702DE: add     eax, 5Ch ; '\'
0x8702E1: cmp     dword ptr [eax], 0
0x8702E4: jnz     short loc_8702EB
0x8702E6: call    sub_772560
0x8702EB: mov     edi, [esp+30h+a3]
0x8702EF: push    2
0x8702F1: push    ebx
0x8702F2: push    3
0x8702F4: push    edi
0x8702F5: call    sub_801110
0x8702FA: add     esp, 10h
0x8702FD: push    edi; a3
0x8702FE: push    3; a2
0x870300: mov     ecx, esi; this
0x870302: call    sub_760010
0x870307: lea     ecx, [esp+30h+var_10]
0x87030B: push    ecx
0x87030C: call    sub_772630
0x870311: add     esp, 4
0x870314: push    eax
0x870315: lea     ecx, [esp+34h+a3]
0x870319: mov     byte ptr [esp+34h+var_4], 66h ; 'f'
0x87031E: call    sub_75FAE0
0x870323: mov     eax, [esp+30h+var_10]
0x870327: test    eax, eax
0x870329: mov     byte ptr [esp+30h+var_4], 1
0x87032E: jz      short loc_870343
0x870330: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870334: mov     ecx, eax
0x870336: add     eax, 5Ch ; '\'
0x870339: cmp     dword ptr [eax], 0
0x87033C: jnz     short loc_870343
0x87033E: call    sub_772560
0x870343: mov     edi, [esp+30h+a3]
0x870347: push    2
0x870349: push    ebx
0x87034A: push    4
0x87034C: push    edi
0x87034D: call    sub_801110
0x870352: add     esp, 10h
0x870355: push    edi; a3
0x870356: push    4; a2
0x870358: mov     ecx, esi; this
0x87035A: call    sub_760010
0x87035F: lea     edx, [esp+30h+var_10]
0x870363: push    edx
0x870364: call    sub_772630
0x870369: add     esp, 4
0x87036C: push    eax
0x87036D: lea     ecx, [esp+34h+a3]
0x870371: mov     byte ptr [esp+34h+var_4], 67h ; 'g'
0x870376: call    sub_75FAE0
0x87037B: mov     eax, [esp+30h+var_10]
0x87037F: test    eax, eax
0x870381: mov     byte ptr [esp+30h+var_4], 1
0x870386: jz      short loc_87039B
0x870388: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87038C: mov     ecx, eax
0x87038E: add     eax, 5Ch ; '\'
0x870391: cmp     dword ptr [eax], 0
0x870394: jnz     short loc_87039B
0x870396: call    sub_772560
0x87039B: mov     edi, [esp+30h+a3]
0x87039F: push    0
0x8703A1: push    3
0x8703A3: push    5
0x8703A5: push    edi
0x8703A6: call    sub_801110
0x8703AB: mov     eax, ds:0B43110h
0x8703B0: add     esp, 10h
0x8703B3: push    eax; a2
0x8703B4: mov     ecx, edi; this
0x8703B6: call    sub_76C910
0x8703BB: push    edi; a3
0x8703BC: push    5; a2
0x8703BE: mov     ecx, esi; this
0x8703C0: call    sub_760010
0x8703C5: lea     ecx, [esp+30h+var_10]
0x8703C9: push    ecx
0x8703CA: call    sub_772630
0x8703CF: add     esp, 4
0x8703D2: push    eax
0x8703D3: lea     ecx, [esp+34h+a3]
0x8703D7: mov     byte ptr [esp+34h+var_4], 68h ; 'h'
0x8703DC: call    sub_75FAE0
0x8703E1: mov     eax, [esp+30h+var_10]
0x8703E5: test    eax, eax
0x8703E7: mov     byte ptr [esp+30h+var_4], 1
0x8703EC: jz      short loc_870401
0x8703EE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8703F2: mov     ecx, eax
0x8703F4: add     eax, 5Ch ; '\'
0x8703F7: cmp     dword ptr [eax], 0
0x8703FA: jnz     short loc_870401
0x8703FC: call    sub_772560
0x870401: mov     edi, [esp+30h+a3]
0x870405: push    2
0x870407: push    ebx
0x870408: push    6
0x87040A: push    edi
0x87040B: call    sub_801110
0x870410: add     esp, 10h
0x870413: push    edi; a3
0x870414: push    6; a2
0x870416: mov     ecx, esi; this
0x870418: call    sub_760010
0x87041D: lea     edx, [esp+30h+var_10]
0x870421: push    edx
0x870422: call    sub_772630
0x870427: add     esp, 4
0x87042A: push    eax
0x87042B: lea     ecx, [esp+34h+a3]
0x87042F: mov     byte ptr [esp+34h+var_4], 69h ; 'i'
0x870434: call    sub_75FAE0
0x870439: mov     eax, [esp+30h+var_10]
0x87043D: test    eax, eax
0x87043F: mov     byte ptr [esp+30h+var_4], 1
0x870444: jz      short loc_870459
0x870446: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87044A: mov     ecx, eax
0x87044C: add     eax, 5Ch ; '\'
0x87044F: cmp     dword ptr [eax], 0
0x870452: jnz     short loc_870459
0x870454: call    sub_772560
0x870459: mov     edi, [esp+30h+a3]
0x87045D: push    0
0x87045F: push    3
0x870461: push    7
0x870463: push    edi
0x870464: call    sub_801110
0x870469: add     esp, 10h
0x87046C: push    edi; a3
0x87046D: push    7; a2
0x87046F: mov     ecx, esi; this
0x870471: call    sub_760010
0x870476: mov     ebp, [esp+30h+var_18]
0x87047A: mov     eax, [ebp+0D4h]
0x870480: push    eax; a2
0x870481: mov     ecx, esi; this
0x870483: call    sub_7AECB0
0x870488: mov     eax, [ebp+19Ch]
0x87048E: push    eax; a2
0x87048F: mov     ecx, esi; this
0x870491: call    sub_7AEC60
0x870496: cmp     dword ptr [esi+30h], 0
0x87049A: jnz     short loc_8704A4
0x87049C: call    sub_772DF0
0x8704A1: mov     [esi+30h], eax
0x8704A4: mov     ecx, [esi+30h]
0x8704A7: push    0
0x8704A9: push    0
0x8704AB: push    1Bh
0x8704AD: call    sub_772CD0
0x8704B2: cmp     dword ptr [esi+30h], 0
0x8704B6: jnz     short loc_8704C0
0x8704B8: call    sub_772DF0
0x8704BD: mov     [esi+30h], eax
0x8704C0: mov     ecx, [esi+30h]
0x8704C3: push    0
0x8704C5: push    0
0x8704C7: push    0Fh
0x8704C9: call    sub_772CD0
0x8704CE: cmp     dword ptr [esi+30h], 0
0x8704D2: jnz     short loc_8704DC
0x8704D4: call    sub_772DF0
0x8704D9: mov     [esi+30h], eax
0x8704DC: mov     ecx, [esi+30h]
0x8704DF: push    0
0x8704E1: push    ebx
0x8704E2: push    7
0x8704E4: call    sub_772CD0
0x8704E9: cmp     dword ptr [esi+30h], 0
0x8704ED: jnz     short loc_8704F7
0x8704EF: call    sub_772DF0
0x8704F4: mov     [esi+30h], eax
0x8704F7: mov     ecx, [esi+30h]
0x8704FA: push    0
0x8704FC: push    4
0x8704FE: push    17h
0x870500: call    sub_772CD0
0x870505: cmp     dword ptr [esi+30h], 0
0x870509: jnz     short loc_870513
0x87050B: call    sub_772DF0
0x870510: mov     [esi+30h], eax
0x870513: mov     ecx, [esi+30h]
0x870516: push    0
0x870518: push    ebx
0x870519: push    0Eh
0x87051B: call    sub_772CD0
0x870520: cmp     dword ptr [esi+30h], 0
0x870524: jnz     short loc_87052E
0x870526: call    sub_772DF0
0x87052B: mov     [esi+30h], eax
0x87052E: mov     ecx, [esi+30h]
0x870531: push    0
0x870533: push    0
0x870535: push    34h ; '4'
0x870537: call    sub_772CD0
0x87053C: cmp     esi, ds:0B476D4h
0x870542: mov     ebp, 390F2h
0x870547: mov     ds:0B43E7Ch, ebp
0x87054D: mov     dword ptr ds:0B4450Ch, 11Ch
0x870557: jz      short loc_870577
0x870559: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87055D: jnz     short loc_870566
0x87055F: mov     ecx, esi
0x870561: call    sub_7604D0
0x870566: mov     esi, ds:0B476D4h
0x87056C: test    esi, esi
0x87056E: mov     [esp+30h+var_14], esi
0x870572: jz      short loc_870577
0x870574: add     [esi+60h], ebx
0x870577: cmp     dword ptr [esi+18h], 8
0x87057B: jnb     loc_87084E
0x870581: lea     eax, [esp+30h+var_10]
0x870585: push    eax
0x870586: call    sub_772630
0x87058B: add     esp, 4
0x87058E: push    eax
0x87058F: lea     ecx, [esp+34h+a3]
0x870593: mov     byte ptr [esp+34h+var_4], 6Ah ; 'j'
0x870598: call    sub_75FAE0
0x87059D: mov     eax, [esp+30h+var_10]
0x8705A1: test    eax, eax
0x8705A3: mov     byte ptr [esp+30h+var_4], 1
0x8705A8: jz      short loc_8705BD
0x8705AA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8705AE: mov     ecx, eax
0x8705B0: add     eax, 5Ch ; '\'
0x8705B3: cmp     dword ptr [eax], 0
0x8705B6: jnz     short loc_8705BD
0x8705B8: call    sub_772560
0x8705BD: mov     edi, [esp+30h+a3]
0x8705C1: push    2
0x8705C3: push    ebx
0x8705C4: push    0
0x8705C6: push    edi
0x8705C7: call    sub_801110
0x8705CC: add     esp, 10h
0x8705CF: push    edi; a3
0x8705D0: push    0; a2
0x8705D2: mov     ecx, esi; this
0x8705D4: call    sub_760010
0x8705D9: lea     ecx, [esp+30h+var_10]
0x8705DD: push    ecx
0x8705DE: call    sub_772630
0x8705E3: add     esp, 4
0x8705E6: push    eax
0x8705E7: lea     ecx, [esp+34h+a3]
0x8705EB: mov     byte ptr [esp+34h+var_4], 6Bh ; 'k'
0x8705F0: call    sub_75FAE0
0x8705F5: mov     eax, [esp+30h+var_10]
0x8705F9: test    eax, eax
0x8705FB: mov     byte ptr [esp+30h+var_4], 1
0x870600: jz      short loc_870615
0x870602: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870606: mov     ecx, eax
0x870608: add     eax, 5Ch ; '\'
0x87060B: cmp     dword ptr [eax], 0
0x87060E: jnz     short loc_870615
0x870610: call    sub_772560
0x870615: mov     edi, [esp+30h+a3]
0x870619: push    2
0x87061B: push    ebx
0x87061C: push    ebx
0x87061D: push    edi
0x87061E: call    sub_801110
0x870623: add     esp, 10h
0x870626: push    edi; a3
0x870627: push    ebx; a2
0x870628: mov     ecx, esi; this
0x87062A: call    sub_760010
0x87062F: lea     edx, [esp+30h+var_10]
0x870633: push    edx
0x870634: call    sub_772630
0x870639: add     esp, 4
0x87063C: push    eax
0x87063D: lea     ecx, [esp+34h+a3]
0x870641: mov     byte ptr [esp+34h+var_4], 6Ch ; 'l'
0x870646: call    sub_75FAE0
0x87064B: mov     eax, [esp+30h+var_10]
0x87064F: test    eax, eax
0x870651: mov     byte ptr [esp+30h+var_4], 1
0x870656: jz      short loc_87066B
0x870658: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87065C: mov     ecx, eax
0x87065E: add     eax, 5Ch ; '\'
0x870661: cmp     dword ptr [eax], 0
0x870664: jnz     short loc_87066B
0x870666: call    sub_772560
0x87066B: mov     edi, [esp+30h+a3]
0x87066F: push    2
0x870671: push    ebx
0x870672: push    2
0x870674: push    edi
0x870675: call    sub_801110
0x87067A: add     esp, 10h
0x87067D: push    edi; a3
0x87067E: push    2; a2
0x870680: mov     ecx, esi; this
0x870682: call    sub_760010
0x870687: lea     eax, [esp+30h+var_10]
0x87068B: push    eax
0x87068C: call    sub_772630
0x870691: add     esp, 4
0x870694: push    eax
0x870695: lea     ecx, [esp+34h+a3]
0x870699: mov     byte ptr [esp+34h+var_4], 6Dh ; 'm'
0x87069E: call    sub_75FAE0
0x8706A3: mov     eax, [esp+30h+var_10]
0x8706A7: test    eax, eax
0x8706A9: mov     byte ptr [esp+30h+var_4], 1
0x8706AE: jz      short loc_8706C3
0x8706B0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8706B4: mov     ecx, eax
0x8706B6: add     eax, 5Ch ; '\'
0x8706B9: cmp     dword ptr [eax], 0
0x8706BC: jnz     short loc_8706C3
0x8706BE: call    sub_772560
0x8706C3: mov     edi, [esp+30h+a3]
0x8706C7: push    2
0x8706C9: push    ebx
0x8706CA: push    3
0x8706CC: push    edi
0x8706CD: call    sub_801110
0x8706D2: add     esp, 10h
0x8706D5: push    edi; a3
0x8706D6: push    3; a2
0x8706D8: mov     ecx, esi; this
0x8706DA: call    sub_760010
0x8706DF: lea     ecx, [esp+30h+var_10]
0x8706E3: push    ecx
0x8706E4: call    sub_772630
0x8706E9: add     esp, 4
0x8706EC: push    eax
0x8706ED: lea     ecx, [esp+34h+a3]
0x8706F1: mov     byte ptr [esp+34h+var_4], 6Eh ; 'n'
0x8706F6: call    sub_75FAE0
0x8706FB: mov     eax, [esp+30h+var_10]
0x8706FF: test    eax, eax
0x870701: mov     byte ptr [esp+30h+var_4], 1
0x870706: jz      short loc_87071B
0x870708: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87070C: mov     ecx, eax
0x87070E: add     eax, 5Ch ; '\'
0x870711: cmp     dword ptr [eax], 0
0x870714: jnz     short loc_87071B
0x870716: call    sub_772560
0x87071B: mov     edi, [esp+30h+a3]
0x87071F: push    2
0x870721: push    ebx
0x870722: push    4
0x870724: push    edi
0x870725: call    sub_801110
0x87072A: add     esp, 10h
0x87072D: push    edi; a3
0x87072E: push    4; a2
0x870730: mov     ecx, esi; this
0x870732: call    sub_760010
0x870737: lea     edx, [esp+30h+var_10]
0x87073B: push    edx
0x87073C: call    sub_772630
0x870741: add     esp, 4
0x870744: push    eax
0x870745: lea     ecx, [esp+34h+a3]
0x870749: mov     byte ptr [esp+34h+var_4], 6Fh ; 'o'
0x87074E: call    sub_75FAE0
0x870753: mov     eax, [esp+30h+var_10]
0x870757: test    eax, eax
0x870759: mov     byte ptr [esp+30h+var_4], 1
0x87075E: jz      short loc_870773
0x870760: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870764: mov     ecx, eax
0x870766: add     eax, 5Ch ; '\'
0x870769: cmp     dword ptr [eax], 0
0x87076C: jnz     short loc_870773
0x87076E: call    sub_772560
0x870773: mov     edi, [esp+30h+a3]
0x870777: push    0
0x870779: push    3
0x87077B: push    5
0x87077D: push    edi
0x87077E: call    sub_801110
0x870783: mov     eax, ds:0B43110h
0x870788: add     esp, 10h
0x87078B: push    eax; a2
0x87078C: mov     ecx, edi; this
0x87078E: call    sub_76C910
0x870793: push    edi; a3
0x870794: push    5; a2
0x870796: mov     ecx, esi; this
0x870798: call    sub_760010
0x87079D: lea     ecx, [esp+30h+var_10]
0x8707A1: push    ecx
0x8707A2: call    sub_772630
0x8707A7: add     esp, 4
0x8707AA: push    eax
0x8707AB: lea     ecx, [esp+34h+a3]
0x8707AF: mov     byte ptr [esp+34h+var_4], 70h ; 'p'
0x8707B4: call    sub_75FAE0
0x8707B9: mov     eax, [esp+30h+var_10]
0x8707BD: test    eax, eax
0x8707BF: mov     byte ptr [esp+30h+var_4], 1
0x8707C4: jz      short loc_8707D9
0x8707C6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8707CA: mov     ecx, eax
0x8707CC: add     eax, 5Ch ; '\'
0x8707CF: cmp     dword ptr [eax], 0
0x8707D2: jnz     short loc_8707D9
0x8707D4: call    sub_772560
0x8707D9: mov     edi, [esp+30h+a3]
0x8707DD: push    2
0x8707DF: push    ebx
0x8707E0: push    6
0x8707E2: push    edi
0x8707E3: call    sub_801110
0x8707E8: add     esp, 10h
0x8707EB: push    edi; a3
0x8707EC: push    6; a2
0x8707EE: mov     ecx, esi; this
0x8707F0: call    sub_760010
0x8707F5: lea     edx, [esp+30h+var_10]
0x8707F9: push    edx
0x8707FA: call    sub_772630
0x8707FF: add     esp, 4
0x870802: push    eax
0x870803: lea     ecx, [esp+34h+a3]
0x870807: mov     byte ptr [esp+34h+var_4], 71h ; 'q'
0x87080C: call    sub_75FAE0
0x870811: mov     eax, [esp+30h+var_10]
0x870815: test    eax, eax
0x870817: mov     byte ptr [esp+30h+var_4], 1
0x87081C: jz      short loc_870831
0x87081E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x870822: mov     ecx, eax
0x870824: add     eax, 5Ch ; '\'
0x870827: cmp     dword ptr [eax], 0
0x87082A: jnz     short loc_870831
0x87082C: call    sub_772560
0x870831: mov     edi, [esp+30h+a3]
0x870835: push    0
0x870837: push    3
0x870839: push    7
0x87083B: push    edi
0x87083C: call    sub_801110
0x870841: add     esp, 10h
0x870844: push    edi; a3
0x870845: push    7; a2
0x870847: mov     ecx, esi; this
0x870849: call    sub_760010
0x87084E: mov     eax, [esp+30h+var_18]
0x870852: mov     eax, [eax+0D4h]
0x870858: push    eax; a2
0x870859: mov     ecx, esi; this
0x87085B: call    sub_7AECB0
0x870860: mov     ecx, [esp+30h+var_18]
0x870864: mov     eax, [ecx+1A0h]
0x87086A: push    eax; a2
0x87086B: mov     ecx, esi; this
0x87086D: call    sub_7AEC60
0x870872: cmp     dword ptr [esi+30h], 0
0x870876: jnz     short loc_870880
0x870878: call    sub_772DF0
0x87087D: mov     [esi+30h], eax
0x870880: mov     ecx, [esi+30h]
0x870883: push    0
0x870885: push    0
0x870887: push    1Bh
0x870889: call    sub_772CD0
0x87088E: cmp     dword ptr [esi+30h], 0
0x870892: jnz     short loc_87089C
0x870894: call    sub_772DF0
0x870899: mov     [esi+30h], eax
0x87089C: mov     ecx, [esi+30h]
0x87089F: push    0
0x8708A1: push    0
0x8708A3: push    0Fh
0x8708A5: call    sub_772CD0
0x8708AA: cmp     dword ptr [esi+30h], 0
0x8708AE: jnz     short loc_8708B8
0x8708B0: call    sub_772DF0
0x8708B5: mov     [esi+30h], eax
0x8708B8: mov     ecx, [esi+30h]
0x8708BB: push    0
0x8708BD: push    ebx
0x8708BE: push    7
0x8708C0: call    sub_772CD0
0x8708C5: cmp     dword ptr [esi+30h], 0
0x8708C9: jnz     short loc_8708D3
0x8708CB: call    sub_772DF0
0x8708D0: mov     [esi+30h], eax
0x8708D3: mov     ecx, [esi+30h]
0x8708D6: push    0
0x8708D8: push    4
0x8708DA: push    17h
0x8708DC: call    sub_772CD0
0x8708E1: cmp     dword ptr [esi+30h], 0
0x8708E5: jnz     short loc_8708EF
0x8708E7: call    sub_772DF0
0x8708EC: mov     [esi+30h], eax
0x8708EF: mov     ecx, [esi+30h]
0x8708F2: push    0
0x8708F4: push    ebx
0x8708F5: push    0Eh
0x8708F7: call    sub_772CD0
0x8708FC: cmp     dword ptr [esi+30h], 0
0x870900: jnz     short loc_87090A
0x870902: call    sub_772DF0
0x870907: mov     [esi+30h], eax
0x87090A: mov     ecx, [esi+30h]
0x87090D: push    0
0x87090F: push    0
0x870911: push    34h ; '4'
0x870913: call    sub_772CD0
0x870918: or      ebx, 0FFFFFFFFh
0x87091B: test    edi, edi
0x87091D: mov     ds:0B43E80h, ebp
0x870923: mov     dword ptr ds:0B44510h, 19Ch
0x87092D: mov     byte ptr [esp+30h+var_4], 0
0x870932: jz      short loc_870940
0x870934: add     [edi+5Ch], ebx
0x870937: jnz     short loc_870940
0x870939: mov     ecx, edi
0x87093B: call    sub_772560
0x870940: add     [esi+60h], ebx
0x870943: mov     [esp+30h+var_4], ebx
0x870947: jnz     short loc_870950
0x870949: mov     ecx, esi
0x87094B: call    sub_7604D0
0x870950: mov     ecx, dword ptr [esp+30h+var_C]
0x870954: mov     large fs:0, ecx
0x87095B: pop     ecx
0x87095C: pop     edi
0x87095D: pop     esi
0x87095E: pop     ebp
0x87095F: pop     ebx
0x870960: add     esp, 1Ch
0x870963: retn
