0x884D50: push    0FFFFFFFFh
0x884D52: push    offset SEH_884D50
0x884D57: mov     eax, large fs:0
0x884D5D: push    eax
0x884D5E: sub     esp, 10h
0x884D61: push    ebx
0x884D62: push    ebp
0x884D63: push    esi
0x884D64: push    edi
0x884D65: mov     eax, ds:0B30AACh
0x884D6A: xor     eax, esp
0x884D6C: push    eax
0x884D6D: lea     eax, [esp+30h+var_C]
0x884D71: mov     large fs:0, eax
0x884D77: mov     [esp+30h+var_14], ecx
0x884D7B: xor     ebp, ebp
0x884D7D: xor     esi, esi
0x884D7F: mov     [esp+30h+var_10], ebp
0x884D83: mov     [esp+30h+var_18], esi
0x884D87: xor     edi, edi
0x884D89: mov     [esp+30h+var_4], ebp
0x884D8D: mov     [esp+30h+a3], edi
0x884D91: mov     eax, ds:0B477B8h
0x884D96: cmp     eax, ebp
0x884D98: mov     ebx, 1
0x884D9D: mov     byte ptr [esp+30h+var_4], bl
0x884DA1: jz      short loc_884DB0
0x884DA3: mov     esi, eax
0x884DA5: cmp     esi, ebp
0x884DA7: mov     [esp+30h+var_18], esi
0x884DAB: jz      short loc_884DB0
0x884DAD: add     [esi+60h], ebx
0x884DB0: mov     eax, [esi+18h]
0x884DB3: cmp     eax, 7
0x884DB6: jnb     loc_8850B6
0x884DBC: lea     eax, [esp+30h+var_10]
0x884DC0: push    eax
0x884DC1: call    sub_772630
0x884DC6: add     esp, 4
0x884DC9: mov     eax, [eax]
0x884DCB: cmp     eax, ebp
0x884DCD: jz      short loc_884DD8
0x884DCF: mov     edi, eax
0x884DD1: add     [edi+5Ch], ebx
0x884DD4: mov     [esp+30h+a3], edi
0x884DD8: mov     eax, [esp+30h+var_10]
0x884DDC: cmp     eax, ebp
0x884DDE: mov     byte ptr [esp+30h+var_4], 1
0x884DE3: jz      short loc_884DF7
0x884DE5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884DE9: mov     ecx, eax
0x884DEB: add     eax, 5Ch ; '\'
0x884DEE: cmp     [eax], ebp
0x884DF0: jnz     short loc_884DF7
0x884DF2: call    sub_772560
0x884DF7: push    2
0x884DF9: push    1
0x884DFB: push    ebp
0x884DFC: push    edi
0x884DFD: call    sub_801110
0x884E02: add     esp, 10h
0x884E05: push    edi; a3
0x884E06: push    ebp; a2
0x884E07: mov     ecx, esi; this
0x884E09: call    sub_760010
0x884E0E: lea     ecx, [esp+30h+var_10]
0x884E12: push    ecx
0x884E13: call    sub_772630
0x884E18: add     esp, 4
0x884E1B: mov     ebx, eax
0x884E1D: cmp     edi, [ebx]
0x884E1F: mov     byte ptr [esp+30h+var_4], 3
0x884E24: jz      short loc_884E45
0x884E26: cmp     edi, ebp
0x884E28: jz      short loc_884E37
0x884E2A: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x884E2E: jnz     short loc_884E37
0x884E30: mov     ecx, edi
0x884E32: call    sub_772560
0x884E37: mov     edi, [ebx]
0x884E39: cmp     edi, ebp
0x884E3B: mov     [esp+30h+a3], edi
0x884E3F: jz      short loc_884E45
0x884E41: add     dword ptr [edi+5Ch], 1
0x884E45: mov     eax, [esp+30h+var_10]
0x884E49: cmp     eax, ebp
0x884E4B: mov     byte ptr [esp+30h+var_4], 1
0x884E50: jz      short loc_884E64
0x884E52: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884E56: mov     ecx, eax
0x884E58: add     eax, 5Ch ; '\'
0x884E5B: cmp     [eax], ebp
0x884E5D: jnz     short loc_884E64
0x884E5F: call    sub_772560
0x884E64: push    2
0x884E66: push    1
0x884E68: push    1
0x884E6A: push    edi
0x884E6B: call    sub_801110
0x884E70: add     esp, 10h
0x884E73: push    edi; a3
0x884E74: push    1; a2
0x884E76: mov     ecx, esi; this
0x884E78: call    sub_760010
0x884E7D: lea     edx, [esp+30h+var_10]
0x884E81: push    edx
0x884E82: call    sub_772630
0x884E87: add     esp, 4
0x884E8A: mov     ebx, eax
0x884E8C: cmp     edi, [ebx]
0x884E8E: mov     byte ptr [esp+30h+var_4], 4
0x884E93: jz      short loc_884EB4
0x884E95: cmp     edi, ebp
0x884E97: jz      short loc_884EA6
0x884E99: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x884E9D: jnz     short loc_884EA6
0x884E9F: mov     ecx, edi
0x884EA1: call    sub_772560
0x884EA6: mov     edi, [ebx]
0x884EA8: cmp     edi, ebp
0x884EAA: mov     [esp+30h+a3], edi
0x884EAE: jz      short loc_884EB4
0x884EB0: add     dword ptr [edi+5Ch], 1
0x884EB4: mov     eax, [esp+30h+var_10]
0x884EB8: cmp     eax, ebp
0x884EBA: mov     byte ptr [esp+30h+var_4], 1
0x884EBF: jz      short loc_884ED3
0x884EC1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884EC5: mov     ecx, eax
0x884EC7: add     eax, 5Ch ; '\'
0x884ECA: cmp     [eax], ebp
0x884ECC: jnz     short loc_884ED3
0x884ECE: call    sub_772560
0x884ED3: push    2
0x884ED5: push    1
0x884ED7: push    2
0x884ED9: push    edi
0x884EDA: call    sub_801110
0x884EDF: add     esp, 10h
0x884EE2: push    edi; a3
0x884EE3: push    2; a2
0x884EE5: mov     ecx, esi; this
0x884EE7: call    sub_760010
0x884EEC: lea     eax, [esp+30h+var_10]
0x884EF0: push    eax
0x884EF1: call    sub_772630
0x884EF6: add     esp, 4
0x884EF9: mov     ebx, eax
0x884EFB: cmp     edi, [ebx]
0x884EFD: mov     byte ptr [esp+30h+var_4], 5
0x884F02: jz      short loc_884F23
0x884F04: cmp     edi, ebp
0x884F06: jz      short loc_884F15
0x884F08: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x884F0C: jnz     short loc_884F15
0x884F0E: mov     ecx, edi
0x884F10: call    sub_772560
0x884F15: mov     edi, [ebx]
0x884F17: cmp     edi, ebp
0x884F19: mov     [esp+30h+a3], edi
0x884F1D: jz      short loc_884F23
0x884F1F: add     dword ptr [edi+5Ch], 1
0x884F23: mov     eax, [esp+30h+var_10]
0x884F27: cmp     eax, ebp
0x884F29: mov     byte ptr [esp+30h+var_4], 1
0x884F2E: jz      short loc_884F42
0x884F30: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884F34: mov     ecx, eax
0x884F36: add     eax, 5Ch ; '\'
0x884F39: cmp     [eax], ebp
0x884F3B: jnz     short loc_884F42
0x884F3D: call    sub_772560
0x884F42: push    2
0x884F44: push    1
0x884F46: push    3
0x884F48: push    edi
0x884F49: call    sub_801110
0x884F4E: add     esp, 10h
0x884F51: push    edi; a3
0x884F52: push    3; a2
0x884F54: mov     ecx, esi; this
0x884F56: call    sub_760010
0x884F5B: lea     ecx, [esp+30h+var_10]
0x884F5F: push    ecx
0x884F60: call    sub_772630
0x884F65: add     esp, 4
0x884F68: mov     ebx, eax
0x884F6A: cmp     edi, [ebx]
0x884F6C: mov     byte ptr [esp+30h+var_4], 6
0x884F71: jz      short loc_884F92
0x884F73: cmp     edi, ebp
0x884F75: jz      short loc_884F84
0x884F77: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x884F7B: jnz     short loc_884F84
0x884F7D: mov     ecx, edi
0x884F7F: call    sub_772560
0x884F84: mov     edi, [ebx]
0x884F86: cmp     edi, ebp
0x884F88: mov     [esp+30h+a3], edi
0x884F8C: jz      short loc_884F92
0x884F8E: add     dword ptr [edi+5Ch], 1
0x884F92: mov     eax, [esp+30h+var_10]
0x884F96: cmp     eax, ebp
0x884F98: mov     byte ptr [esp+30h+var_4], 1
0x884F9D: jz      short loc_884FB1
0x884F9F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884FA3: mov     ecx, eax
0x884FA5: add     eax, 5Ch ; '\'
0x884FA8: cmp     [eax], ebp
0x884FAA: jnz     short loc_884FB1
0x884FAC: call    sub_772560
0x884FB1: push    2
0x884FB3: push    3
0x884FB5: push    4
0x884FB7: push    edi
0x884FB8: call    sub_801110
0x884FBD: mov     edx, ds:0B43110h
0x884FC3: add     esp, 10h
0x884FC6: push    edx; a2
0x884FC7: mov     ecx, edi; this
0x884FC9: call    sub_76C910
0x884FCE: push    edi; a3
0x884FCF: push    4; a2
0x884FD1: mov     ecx, esi; this
0x884FD3: call    sub_760010
0x884FD8: lea     eax, [esp+30h+var_10]
0x884FDC: push    eax
0x884FDD: call    sub_772630
0x884FE2: add     esp, 4
0x884FE5: mov     ebx, eax
0x884FE7: cmp     edi, [ebx]
0x884FE9: mov     byte ptr [esp+30h+var_4], 7
0x884FEE: jz      short loc_88500F
0x884FF0: cmp     edi, ebp
0x884FF2: jz      short loc_885001
0x884FF4: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x884FF8: jnz     short loc_885001
0x884FFA: mov     ecx, edi
0x884FFC: call    sub_772560
0x885001: mov     edi, [ebx]
0x885003: cmp     edi, ebp
0x885005: mov     [esp+30h+a3], edi
0x885009: jz      short loc_88500F
0x88500B: add     dword ptr [edi+5Ch], 1
0x88500F: mov     eax, [esp+30h+var_10]
0x885013: cmp     eax, ebp
0x885015: mov     byte ptr [esp+30h+var_4], 1
0x88501A: jz      short loc_88502E
0x88501C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x885020: mov     ecx, eax
0x885022: add     eax, 5Ch ; '\'
0x885025: cmp     [eax], ebp
0x885027: jnz     short loc_88502E
0x885029: call    sub_772560
0x88502E: push    2
0x885030: push    1
0x885032: push    5
0x885034: push    edi
0x885035: call    sub_801110
0x88503A: add     esp, 10h
0x88503D: push    edi; a3
0x88503E: push    5; a2
0x885040: mov     ecx, esi; this
0x885042: call    sub_760010
0x885047: lea     ecx, [esp+30h+var_10]
0x88504B: push    ecx
0x88504C: call    sub_772630
0x885051: add     esp, 4
0x885054: mov     ebx, eax
0x885056: cmp     edi, [ebx]
0x885058: mov     byte ptr [esp+30h+var_4], 8
0x88505D: jz      short loc_88507E
0x88505F: cmp     edi, ebp
0x885061: jz      short loc_885070
0x885063: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x885067: jnz     short loc_885070
0x885069: mov     ecx, edi
0x88506B: call    sub_772560
0x885070: mov     edi, [ebx]
0x885072: cmp     edi, ebp
0x885074: mov     [esp+30h+a3], edi
0x885078: jz      short loc_88507E
0x88507A: add     dword ptr [edi+5Ch], 1
0x88507E: mov     eax, [esp+30h+var_10]
0x885082: cmp     eax, ebp
0x885084: mov     byte ptr [esp+30h+var_4], 1
0x885089: jz      short loc_88509D
0x88508B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x88508F: mov     ecx, eax
0x885091: add     eax, 5Ch ; '\'
0x885094: cmp     [eax], ebp
0x885096: jnz     short loc_88509D
0x885098: call    sub_772560
0x88509D: push    2
0x88509F: push    3
0x8850A1: push    6
0x8850A3: push    edi
0x8850A4: call    sub_801110
0x8850A9: add     esp, 10h
0x8850AC: push    edi; a3
0x8850AD: push    6; a2
0x8850AF: mov     ecx, esi; this
0x8850B1: call    sub_760010
0x8850B6: mov     edx, [esp+30h+var_14]
0x8850BA: mov     ebx, [edx+0C4h]
0x8850C0: mov     ebp, [esi+58h]
0x8850C3: cmp     ebp, ebx
0x8850C5: jz      short loc_8850F9
0x8850C7: test    ebp, ebp
0x8850C9: jz      short loc_8850E8
0x8850CB: lea     eax, [ebp+4]
0x8850CE: push    eax; lpAddend
0x8850CF: call    dword ptr ds:0A2807Ch
0x8850D5: test    eax, eax
0x8850D7: jnz     short loc_8850E8
0x8850D9: test    ebp, ebp
0x8850DB: jz      short loc_8850E8
0x8850DD: mov     edx, [ebp+0]
0x8850E0: mov     eax, [edx]
0x8850E2: push    1
0x8850E4: mov     ecx, ebp
0x8850E6: call    eax
0x8850E8: test    ebx, ebx
0x8850EA: mov     [esi+58h], ebx
0x8850ED: jz      short loc_8850F9
0x8850EF: add     ebx, 4
0x8850F2: push    ebx; lpAddend
0x8850F3: call    dword ptr ds:0A28078h
0x8850F9: mov     eax, ds:0B451B0h
0x8850FE: mov     ebp, [esi+44h]
0x885101: cmp     ebp, eax
0x885103: mov     ebx, eax
0x885105: jz      short loc_885139
0x885107: test    ebp, ebp
0x885109: jz      short loc_885128
0x88510B: lea     ecx, [ebp+4]
0x88510E: push    ecx; lpAddend
0x88510F: call    dword ptr ds:0A2807Ch
0x885115: test    eax, eax
0x885117: jnz     short loc_885128
0x885119: test    ebp, ebp
0x88511B: jz      short loc_885128
0x88511D: mov     edx, [ebp+0]
0x885120: mov     eax, [edx]
0x885122: push    1
0x885124: mov     ecx, ebp
0x885126: call    eax
0x885128: test    ebx, ebx
0x88512A: mov     [esi+44h], ebx
0x88512D: jz      short loc_885139
0x88512F: add     ebx, 4
0x885132: push    ebx; lpAddend
0x885133: call    dword ptr ds:0A28078h
0x885139: cmp     dword ptr [esi+30h], 0
0x88513D: jnz     short loc_885147
0x88513F: call    sub_772DF0
0x885144: mov     [esi+30h], eax
0x885147: mov     ecx, [esi+30h]
0x88514A: push    0
0x88514C: push    0
0x88514E: push    1Bh
0x885150: call    sub_772CD0
0x885155: cmp     dword ptr [esi+30h], 0
0x885159: jnz     short loc_885163
0x88515B: call    sub_772DF0
0x885160: mov     [esi+30h], eax
0x885163: mov     ecx, [esi+30h]
0x885166: push    0
0x885168: push    0
0x88516A: push    0Fh
0x88516C: call    sub_772CD0
0x885171: cmp     dword ptr [esi+30h], 0
0x885175: jnz     short loc_88517F
0x885177: call    sub_772DF0
0x88517C: mov     [esi+30h], eax
0x88517F: mov     ecx, [esi+30h]
0x885182: push    0
0x885184: push    1
0x885186: push    7
0x885188: call    sub_772CD0
0x88518D: cmp     dword ptr [esi+30h], 0
0x885191: jnz     short loc_88519B
0x885193: call    sub_772DF0
0x885198: mov     [esi+30h], eax
0x88519B: mov     ecx, [esi+30h]
0x88519E: push    0
0x8851A0: push    4
0x8851A2: push    17h
0x8851A4: call    sub_772CD0
0x8851A9: cmp     dword ptr [esi+30h], 0
0x8851AD: jnz     short loc_8851B7
0x8851AF: call    sub_772DF0
0x8851B4: mov     [esi+30h], eax
0x8851B7: mov     ecx, [esi+30h]
0x8851BA: push    0
0x8851BC: push    1
0x8851BE: push    0Eh
0x8851C0: call    sub_772CD0
0x8851C5: cmp     dword ptr [esi+30h], 0
0x8851C9: jnz     short loc_8851D3
0x8851CB: call    sub_772DF0
0x8851D0: mov     [esi+30h], eax
0x8851D3: mov     ecx, [esi+30h]
0x8851D6: push    0
0x8851D8: push    0
0x8851DA: push    34h ; '4'
0x8851DC: call    sub_772CD0
0x8851E1: mov     ecx, ds:0B43C48h
0x8851E7: mov     edx, ds:0B442D8h
0x8851ED: mov     eax, ds:0B435B8h
0x8851F2: mov     ds:0B43C70h, ecx
0x8851F8: mov     ecx, ds:0B44968h
0x8851FE: or      ebx, 0FFFFFFFFh
0x885201: cmp     esi, ds:0B477BCh
0x885207: mov     ds:0B44300h, edx
0x88520D: mov     ds:0B435E0h, eax
0x885212: mov     ds:0B44990h, ecx
0x885218: jz      short loc_885238
0x88521A: add     [esi+60h], ebx
0x88521D: jnz     short loc_885226
0x88521F: mov     ecx, esi
0x885221: call    sub_7604D0
0x885226: mov     esi, ds:0B477BCh
0x88522C: test    esi, esi
0x88522E: mov     [esp+30h+var_18], esi
0x885232: jz      short loc_885238
0x885234: add     dword ptr [esi+60h], 1
0x885238: mov     eax, [esi+18h]
0x88523B: cmp     eax, 7
0x88523E: jnb     loc_885562
0x885244: lea     edx, [esp+30h+var_10]
0x885248: push    edx
0x885249: call    sub_772630
0x88524E: add     esp, 4
0x885251: mov     ebp, eax
0x885253: cmp     edi, [ebp+0]
0x885256: mov     byte ptr [esp+30h+var_4], 9
0x88525B: jz      short loc_88527C
0x88525D: test    edi, edi
0x88525F: jz      short loc_88526D
0x885261: add     [edi+5Ch], ebx
0x885264: jnz     short loc_88526D
0x885266: mov     ecx, edi
0x885268: call    sub_772560
0x88526D: mov     edi, [ebp+0]
0x885270: test    edi, edi
0x885272: mov     [esp+30h+a3], edi
0x885276: jz      short loc_88527C
0x885278: add     dword ptr [edi+5Ch], 1
0x88527C: mov     eax, [esp+30h+var_10]
0x885280: test    eax, eax
0x885282: mov     byte ptr [esp+30h+var_4], 1
0x885287: jz      short loc_88529B
0x885289: add     [eax+5Ch], ebx
0x88528C: mov     ecx, eax
0x88528E: add     eax, 5Ch ; '\'
0x885291: cmp     dword ptr [eax], 0
0x885294: jnz     short loc_88529B
0x885296: call    sub_772560
0x88529B: push    2
0x88529D: push    1
0x88529F: push    0
0x8852A1: push    edi
0x8852A2: call    sub_801110
0x8852A7: add     esp, 10h
0x8852AA: push    edi; a3
0x8852AB: push    0; a2
0x8852AD: mov     ecx, esi; this
0x8852AF: call    sub_760010
0x8852B4: lea     eax, [esp+30h+var_10]
0x8852B8: push    eax
0x8852B9: call    sub_772630
0x8852BE: add     esp, 4
0x8852C1: mov     ebp, eax
0x8852C3: cmp     edi, [ebp+0]
0x8852C6: mov     byte ptr [esp+30h+var_4], 0Ah
0x8852CB: jz      short loc_8852EC
0x8852CD: test    edi, edi
0x8852CF: jz      short loc_8852DD
0x8852D1: add     [edi+5Ch], ebx
0x8852D4: jnz     short loc_8852DD
0x8852D6: mov     ecx, edi
0x8852D8: call    sub_772560
0x8852DD: mov     edi, [ebp+0]
0x8852E0: test    edi, edi
0x8852E2: mov     [esp+30h+a3], edi
0x8852E6: jz      short loc_8852EC
0x8852E8: add     dword ptr [edi+5Ch], 1
0x8852EC: mov     eax, [esp+30h+var_10]
0x8852F0: test    eax, eax
0x8852F2: mov     byte ptr [esp+30h+var_4], 1
0x8852F7: jz      short loc_88530B
0x8852F9: add     [eax+5Ch], ebx
0x8852FC: mov     ecx, eax
0x8852FE: add     eax, 5Ch ; '\'
0x885301: cmp     dword ptr [eax], 0
0x885304: jnz     short loc_88530B
0x885306: call    sub_772560
0x88530B: push    2
0x88530D: push    1
0x88530F: push    1
0x885311: push    edi
0x885312: call    sub_801110
0x885317: add     esp, 10h
0x88531A: push    edi; a3
0x88531B: push    1; a2
0x88531D: mov     ecx, esi; this
0x88531F: call    sub_760010
0x885324: lea     ecx, [esp+30h+var_10]
0x885328: push    ecx
0x885329: call    sub_772630
0x88532E: add     esp, 4
0x885331: mov     ebp, eax
0x885333: cmp     edi, [ebp+0]
0x885336: mov     byte ptr [esp+30h+var_4], 0Bh
0x88533B: jz      short loc_88535C
0x88533D: test    edi, edi
0x88533F: jz      short loc_88534D
0x885341: add     [edi+5Ch], ebx
0x885344: jnz     short loc_88534D
0x885346: mov     ecx, edi
0x885348: call    sub_772560
0x88534D: mov     edi, [ebp+0]
0x885350: test    edi, edi
0x885352: mov     [esp+30h+a3], edi
0x885356: jz      short loc_88535C
0x885358: add     dword ptr [edi+5Ch], 1
0x88535C: mov     eax, [esp+30h+var_10]
0x885360: test    eax, eax
0x885362: mov     byte ptr [esp+30h+var_4], 1
0x885367: jz      short loc_88537B
0x885369: add     [eax+5Ch], ebx
0x88536C: mov     ecx, eax
0x88536E: add     eax, 5Ch ; '\'
0x885371: cmp     dword ptr [eax], 0
0x885374: jnz     short loc_88537B
0x885376: call    sub_772560
0x88537B: push    2
0x88537D: push    1
0x88537F: push    2
0x885381: push    edi
0x885382: call    sub_801110
0x885387: add     esp, 10h
0x88538A: push    edi; a3
0x88538B: push    2; a2
0x88538D: mov     ecx, esi; this
0x88538F: call    sub_760010
0x885394: lea     edx, [esp+30h+var_10]
0x885398: push    edx
0x885399: call    sub_772630
0x88539E: add     esp, 4
0x8853A1: mov     ebp, eax
0x8853A3: cmp     edi, [ebp+0]
0x8853A6: mov     byte ptr [esp+30h+var_4], 0Ch
0x8853AB: jz      short loc_8853CC
0x8853AD: test    edi, edi
0x8853AF: jz      short loc_8853BD
0x8853B1: add     [edi+5Ch], ebx
0x8853B4: jnz     short loc_8853BD
0x8853B6: mov     ecx, edi
0x8853B8: call    sub_772560
0x8853BD: mov     edi, [ebp+0]
0x8853C0: test    edi, edi
0x8853C2: mov     [esp+30h+a3], edi
0x8853C6: jz      short loc_8853CC
0x8853C8: add     dword ptr [edi+5Ch], 1
0x8853CC: mov     eax, [esp+30h+var_10]
0x8853D0: test    eax, eax
0x8853D2: mov     byte ptr [esp+30h+var_4], 1
0x8853D7: jz      short loc_8853EB
0x8853D9: add     [eax+5Ch], ebx
0x8853DC: mov     ecx, eax
0x8853DE: add     eax, 5Ch ; '\'
0x8853E1: cmp     dword ptr [eax], 0
0x8853E4: jnz     short loc_8853EB
0x8853E6: call    sub_772560
0x8853EB: push    2
0x8853ED: push    1
0x8853EF: push    3
0x8853F1: push    edi
0x8853F2: call    sub_801110
0x8853F7: add     esp, 10h
0x8853FA: push    edi; a3
0x8853FB: push    3; a2
0x8853FD: mov     ecx, esi; this
0x8853FF: call    sub_760010
0x885404: lea     eax, [esp+30h+var_10]
0x885408: push    eax
0x885409: call    sub_772630
0x88540E: add     esp, 4
0x885411: mov     ebp, eax
0x885413: cmp     edi, [ebp+0]
0x885416: mov     byte ptr [esp+30h+var_4], 0Dh
0x88541B: jz      short loc_88543C
0x88541D: test    edi, edi
0x88541F: jz      short loc_88542D
0x885421: add     [edi+5Ch], ebx
0x885424: jnz     short loc_88542D
0x885426: mov     ecx, edi
0x885428: call    sub_772560
0x88542D: mov     edi, [ebp+0]
0x885430: test    edi, edi
0x885432: mov     [esp+30h+a3], edi
0x885436: jz      short loc_88543C
0x885438: add     dword ptr [edi+5Ch], 1
0x88543C: mov     eax, [esp+30h+var_10]
0x885440: test    eax, eax
0x885442: mov     byte ptr [esp+30h+var_4], 1
0x885447: jz      short loc_88545B
0x885449: add     [eax+5Ch], ebx
0x88544C: mov     ecx, eax
0x88544E: add     eax, 5Ch ; '\'
0x885451: cmp     dword ptr [eax], 0
0x885454: jnz     short loc_88545B
0x885456: call    sub_772560
0x88545B: push    2
0x88545D: push    3
0x88545F: push    4
0x885461: push    edi
0x885462: call    sub_801110
0x885467: mov     ecx, ds:0B43110h
0x88546D: add     esp, 10h
0x885470: push    ecx; a2
0x885471: mov     ecx, edi; this
0x885473: call    sub_76C910
0x885478: push    edi; a3
0x885479: push    4; a2
0x88547B: mov     ecx, esi; this
0x88547D: call    sub_760010
0x885482: lea     edx, [esp+30h+var_10]
0x885486: push    edx
0x885487: call    sub_772630
0x88548C: add     esp, 4
0x88548F: mov     ebp, eax
0x885491: cmp     edi, [ebp+0]
0x885494: mov     byte ptr [esp+30h+var_4], 0Eh
0x885499: jz      short loc_8854BA
0x88549B: test    edi, edi
0x88549D: jz      short loc_8854AB
0x88549F: add     [edi+5Ch], ebx
0x8854A2: jnz     short loc_8854AB
0x8854A4: mov     ecx, edi
0x8854A6: call    sub_772560
0x8854AB: mov     edi, [ebp+0]
0x8854AE: test    edi, edi
0x8854B0: mov     [esp+30h+a3], edi
0x8854B4: jz      short loc_8854BA
0x8854B6: add     dword ptr [edi+5Ch], 1
0x8854BA: mov     eax, [esp+30h+var_10]
0x8854BE: test    eax, eax
0x8854C0: mov     byte ptr [esp+30h+var_4], 1
0x8854C5: jz      short loc_8854D9
0x8854C7: add     [eax+5Ch], ebx
0x8854CA: mov     ecx, eax
0x8854CC: add     eax, 5Ch ; '\'
0x8854CF: cmp     dword ptr [eax], 0
0x8854D2: jnz     short loc_8854D9
0x8854D4: call    sub_772560
0x8854D9: push    2
0x8854DB: push    1
0x8854DD: push    5
0x8854DF: push    edi
0x8854E0: call    sub_801110
0x8854E5: add     esp, 10h
0x8854E8: push    edi; a3
0x8854E9: push    5; a2
0x8854EB: mov     ecx, esi; this
0x8854ED: call    sub_760010
0x8854F2: lea     eax, [esp+30h+var_10]
0x8854F6: push    eax
0x8854F7: call    sub_772630
0x8854FC: add     esp, 4
0x8854FF: mov     ebp, eax
0x885501: cmp     edi, [ebp+0]
0x885504: mov     byte ptr [esp+30h+var_4], 0Fh
0x885509: jz      short loc_88552A
0x88550B: test    edi, edi
0x88550D: jz      short loc_88551B
0x88550F: add     [edi+5Ch], ebx
0x885512: jnz     short loc_88551B
0x885514: mov     ecx, edi
0x885516: call    sub_772560
0x88551B: mov     edi, [ebp+0]
0x88551E: test    edi, edi
0x885520: mov     [esp+30h+a3], edi
0x885524: jz      short loc_88552A
0x885526: add     dword ptr [edi+5Ch], 1
0x88552A: mov     eax, [esp+30h+var_10]
0x88552E: test    eax, eax
0x885530: mov     byte ptr [esp+30h+var_4], 1
0x885535: jz      short loc_885549
0x885537: add     [eax+5Ch], ebx
0x88553A: mov     ecx, eax
0x88553C: add     eax, 5Ch ; '\'
0x88553F: cmp     dword ptr [eax], 0
0x885542: jnz     short loc_885549
0x885544: call    sub_772560
0x885549: push    2
0x88554B: push    3
0x88554D: push    6
0x88554F: push    edi
0x885550: call    sub_801110
0x885555: add     esp, 10h
0x885558: push    edi; a3
0x885559: push    6; a2
0x88555B: mov     ecx, esi; this
0x88555D: call    sub_760010
0x885562: mov     ecx, [esp+30h+var_14]
0x885566: mov     ebx, [ecx+0C8h]
0x88556C: mov     ebp, [esi+58h]
0x88556F: cmp     ebp, ebx
0x885571: jz      short loc_8855A5
0x885573: test    ebp, ebp
0x885575: jz      short loc_885594
0x885577: lea     edx, [ebp+4]
0x88557A: push    edx; lpAddend
0x88557B: call    dword ptr ds:0A2807Ch
0x885581: test    eax, eax
0x885583: jnz     short loc_885594
0x885585: test    ebp, ebp
0x885587: jz      short loc_885594
0x885589: mov     eax, [ebp+0]
0x88558C: mov     edx, [eax]
0x88558E: push    1
0x885590: mov     ecx, ebp
0x885592: call    edx
0x885594: test    ebx, ebx
0x885596: mov     [esi+58h], ebx
0x885599: jz      short loc_8855A5
0x88559B: add     ebx, 4
0x88559E: push    ebx; lpAddend
0x88559F: call    dword ptr ds:0A28078h
0x8855A5: mov     eax, ds:0B451B8h
0x8855AA: mov     ebp, [esi+44h]
0x8855AD: cmp     ebp, eax
0x8855AF: mov     ebx, eax
0x8855B1: jz      short loc_8855E5
0x8855B3: test    ebp, ebp
0x8855B5: jz      short loc_8855D4
0x8855B7: lea     eax, [ebp+4]
0x8855BA: push    eax; lpAddend
0x8855BB: call    dword ptr ds:0A2807Ch
0x8855C1: test    eax, eax
0x8855C3: jnz     short loc_8855D4
0x8855C5: test    ebp, ebp
0x8855C7: jz      short loc_8855D4
0x8855C9: mov     edx, [ebp+0]
0x8855CC: mov     eax, [edx]
0x8855CE: push    1
0x8855D0: mov     ecx, ebp
0x8855D2: call    eax
0x8855D4: test    ebx, ebx
0x8855D6: mov     [esi+44h], ebx
0x8855D9: jz      short loc_8855E5
0x8855DB: add     ebx, 4
0x8855DE: push    ebx; lpAddend
0x8855DF: call    dword ptr ds:0A28078h
0x8855E5: cmp     dword ptr [esi+30h], 0
0x8855E9: jnz     short loc_8855F3
0x8855EB: call    sub_772DF0
0x8855F0: mov     [esi+30h], eax
0x8855F3: mov     ecx, [esi+30h]
0x8855F6: push    0
0x8855F8: push    0
0x8855FA: push    1Bh
0x8855FC: call    sub_772CD0
0x885601: cmp     dword ptr [esi+30h], 0
0x885605: jnz     short loc_88560F
0x885607: call    sub_772DF0
0x88560C: mov     [esi+30h], eax
0x88560F: mov     ecx, [esi+30h]
0x885612: push    0
0x885614: push    0
0x885616: push    0Fh
0x885618: call    sub_772CD0
0x88561D: cmp     dword ptr [esi+30h], 0
0x885621: jnz     short loc_88562B
0x885623: call    sub_772DF0
0x885628: mov     [esi+30h], eax
0x88562B: mov     ecx, [esi+30h]
0x88562E: push    0
0x885630: push    1
0x885632: push    7
0x885634: call    sub_772CD0
0x885639: cmp     dword ptr [esi+30h], 0
0x88563D: jnz     short loc_885647
0x88563F: call    sub_772DF0
0x885644: mov     [esi+30h], eax
0x885647: mov     ecx, [esi+30h]
0x88564A: push    0
0x88564C: push    4
0x88564E: push    17h
0x885650: call    sub_772CD0
0x885655: cmp     dword ptr [esi+30h], 0
0x885659: jnz     short loc_885663
0x88565B: call    sub_772DF0
0x885660: mov     [esi+30h], eax
0x885663: mov     ecx, [esi+30h]
0x885666: push    0
0x885668: push    1
0x88566A: push    0Eh
0x88566C: call    sub_772CD0
0x885671: cmp     dword ptr [esi+30h], 0
0x885675: jnz     short loc_88567F
0x885677: call    sub_772DF0
0x88567C: mov     [esi+30h], eax
0x88567F: mov     ecx, [esi+30h]
0x885682: push    0
0x885684: push    0
0x885686: push    34h ; '4'
0x885688: call    sub_772CD0
0x88568D: mov     ecx, ds:0B43C74h
0x885693: mov     edx, ds:0B44304h
0x885699: mov     eax, ds:0B435E4h
0x88569E: mov     ds:0B43C9Ch, ecx
0x8856A4: mov     ecx, ds:0B44994h
0x8856AA: or      ebx, 0FFFFFFFFh
0x8856AD: cmp     esi, ds:0B477C0h
0x8856B3: mov     ds:0B4432Ch, edx
0x8856B9: mov     ds:0B4360Ch, eax
0x8856BE: mov     ds:0B449BCh, ecx
0x8856C4: jz      short loc_8856E4
0x8856C6: add     [esi+60h], ebx
0x8856C9: jnz     short loc_8856D2
0x8856CB: mov     ecx, esi
0x8856CD: call    sub_7604D0
0x8856D2: mov     esi, ds:0B477C0h
0x8856D8: test    esi, esi
0x8856DA: mov     [esp+30h+var_18], esi
0x8856DE: jz      short loc_8856E4
0x8856E0: add     dword ptr [esi+60h], 1
0x8856E4: mov     eax, [esi+18h]
0x8856E7: cmp     eax, 7
0x8856EA: jnb     loc_885A0E
0x8856F0: lea     edx, [esp+30h+var_10]
0x8856F4: push    edx
0x8856F5: call    sub_772630
0x8856FA: add     esp, 4
0x8856FD: mov     ebp, eax
0x8856FF: cmp     edi, [ebp+0]
0x885702: mov     byte ptr [esp+30h+var_4], 10h
0x885707: jz      short loc_885728
0x885709: test    edi, edi
0x88570B: jz      short loc_885719
0x88570D: add     [edi+5Ch], ebx
0x885710: jnz     short loc_885719
0x885712: mov     ecx, edi
0x885714: call    sub_772560
0x885719: mov     edi, [ebp+0]
0x88571C: test    edi, edi
0x88571E: mov     [esp+30h+a3], edi
0x885722: jz      short loc_885728
0x885724: add     dword ptr [edi+5Ch], 1
0x885728: mov     eax, [esp+30h+var_10]
0x88572C: test    eax, eax
0x88572E: mov     byte ptr [esp+30h+var_4], 1
0x885733: jz      short loc_885747
0x885735: add     [eax+5Ch], ebx
0x885738: mov     ecx, eax
0x88573A: add     eax, 5Ch ; '\'
0x88573D: cmp     dword ptr [eax], 0
0x885740: jnz     short loc_885747
0x885742: call    sub_772560
0x885747: push    2
0x885749: push    1
0x88574B: push    0
0x88574D: push    edi
0x88574E: call    sub_801110
0x885753: add     esp, 10h
0x885756: push    edi; a3
0x885757: push    0; a2
0x885759: mov     ecx, esi; this
0x88575B: call    sub_760010
0x885760: lea     eax, [esp+30h+var_10]
0x885764: push    eax
0x885765: call    sub_772630
0x88576A: add     esp, 4
0x88576D: mov     ebp, eax
0x88576F: cmp     edi, [ebp+0]
0x885772: mov     byte ptr [esp+30h+var_4], 11h
0x885777: jz      short loc_885798
0x885779: test    edi, edi
0x88577B: jz      short loc_885789
0x88577D: add     [edi+5Ch], ebx
0x885780: jnz     short loc_885789
0x885782: mov     ecx, edi
0x885784: call    sub_772560
0x885789: mov     edi, [ebp+0]
0x88578C: test    edi, edi
0x88578E: mov     [esp+30h+a3], edi
0x885792: jz      short loc_885798
0x885794: add     dword ptr [edi+5Ch], 1
0x885798: mov     eax, [esp+30h+var_10]
0x88579C: test    eax, eax
0x88579E: mov     byte ptr [esp+30h+var_4], 1
0x8857A3: jz      short loc_8857B7
0x8857A5: add     [eax+5Ch], ebx
0x8857A8: mov     ecx, eax
0x8857AA: add     eax, 5Ch ; '\'
0x8857AD: cmp     dword ptr [eax], 0
0x8857B0: jnz     short loc_8857B7
0x8857B2: call    sub_772560
0x8857B7: push    2
0x8857B9: push    1
0x8857BB: push    1
0x8857BD: push    edi
0x8857BE: call    sub_801110
0x8857C3: add     esp, 10h
0x8857C6: push    edi; a3
0x8857C7: push    1; a2
0x8857C9: mov     ecx, esi; this
0x8857CB: call    sub_760010
0x8857D0: lea     ecx, [esp+30h+var_10]
0x8857D4: push    ecx
0x8857D5: call    sub_772630
0x8857DA: add     esp, 4
0x8857DD: mov     ebp, eax
0x8857DF: cmp     edi, [ebp+0]
0x8857E2: mov     byte ptr [esp+30h+var_4], 12h
0x8857E7: jz      short loc_885808
0x8857E9: test    edi, edi
0x8857EB: jz      short loc_8857F9
0x8857ED: add     [edi+5Ch], ebx
0x8857F0: jnz     short loc_8857F9
0x8857F2: mov     ecx, edi
0x8857F4: call    sub_772560
0x8857F9: mov     edi, [ebp+0]
0x8857FC: test    edi, edi
0x8857FE: mov     [esp+30h+a3], edi
0x885802: jz      short loc_885808
0x885804: add     dword ptr [edi+5Ch], 1
0x885808: mov     eax, [esp+30h+var_10]
0x88580C: test    eax, eax
0x88580E: mov     byte ptr [esp+30h+var_4], 1
0x885813: jz      short loc_885827
0x885815: add     [eax+5Ch], ebx
0x885818: mov     ecx, eax
0x88581A: add     eax, 5Ch ; '\'
0x88581D: cmp     dword ptr [eax], 0
0x885820: jnz     short loc_885827
0x885822: call    sub_772560
0x885827: push    2
0x885829: push    1
0x88582B: push    2
0x88582D: push    edi
0x88582E: call    sub_801110
0x885833: add     esp, 10h
0x885836: push    edi; a3
0x885837: push    2; a2
0x885839: mov     ecx, esi; this
0x88583B: call    sub_760010
0x885840: lea     edx, [esp+30h+var_10]
0x885844: push    edx
0x885845: call    sub_772630
0x88584A: add     esp, 4
0x88584D: mov     ebp, eax
0x88584F: cmp     edi, [ebp+0]
0x885852: mov     byte ptr [esp+30h+var_4], 13h
0x885857: jz      short loc_885878
0x885859: test    edi, edi
0x88585B: jz      short loc_885869
0x88585D: add     [edi+5Ch], ebx
0x885860: jnz     short loc_885869
0x885862: mov     ecx, edi
0x885864: call    sub_772560
0x885869: mov     edi, [ebp+0]
0x88586C: test    edi, edi
0x88586E: mov     [esp+30h+a3], edi
0x885872: jz      short loc_885878
0x885874: add     dword ptr [edi+5Ch], 1
0x885878: mov     eax, [esp+30h+var_10]
0x88587C: test    eax, eax
0x88587E: mov     byte ptr [esp+30h+var_4], 1
0x885883: jz      short loc_885897
0x885885: add     [eax+5Ch], ebx
0x885888: mov     ecx, eax
0x88588A: add     eax, 5Ch ; '\'
0x88588D: cmp     dword ptr [eax], 0
0x885890: jnz     short loc_885897
0x885892: call    sub_772560
0x885897: push    2
0x885899: push    1
0x88589B: push    3
0x88589D: push    edi
0x88589E: call    sub_801110
0x8858A3: add     esp, 10h
0x8858A6: push    edi; a3
0x8858A7: push    3; a2
0x8858A9: mov     ecx, esi; this
0x8858AB: call    sub_760010
0x8858B0: lea     eax, [esp+30h+var_10]
0x8858B4: push    eax
0x8858B5: call    sub_772630
0x8858BA: add     esp, 4
0x8858BD: mov     ebp, eax
0x8858BF: cmp     edi, [ebp+0]
0x8858C2: mov     byte ptr [esp+30h+var_4], 14h
0x8858C7: jz      short loc_8858E8
0x8858C9: test    edi, edi
0x8858CB: jz      short loc_8858D9
0x8858CD: add     [edi+5Ch], ebx
0x8858D0: jnz     short loc_8858D9
0x8858D2: mov     ecx, edi
0x8858D4: call    sub_772560
0x8858D9: mov     edi, [ebp+0]
0x8858DC: test    edi, edi
0x8858DE: mov     [esp+30h+a3], edi
0x8858E2: jz      short loc_8858E8
0x8858E4: add     dword ptr [edi+5Ch], 1
0x8858E8: mov     eax, [esp+30h+var_10]
0x8858EC: test    eax, eax
0x8858EE: mov     byte ptr [esp+30h+var_4], 1
0x8858F3: jz      short loc_885907
0x8858F5: add     [eax+5Ch], ebx
0x8858F8: mov     ecx, eax
0x8858FA: add     eax, 5Ch ; '\'
0x8858FD: cmp     dword ptr [eax], 0
0x885900: jnz     short loc_885907
0x885902: call    sub_772560
0x885907: push    2
0x885909: push    3
0x88590B: push    4
0x88590D: push    edi
0x88590E: call    sub_801110
0x885913: mov     ecx, ds:0B43110h
0x885919: add     esp, 10h
0x88591C: push    ecx; a2
0x88591D: mov     ecx, edi; this
0x88591F: call    sub_76C910
0x885924: push    edi; a3
0x885925: push    4; a2
0x885927: mov     ecx, esi; this
0x885929: call    sub_760010
0x88592E: lea     edx, [esp+30h+var_10]
0x885932: push    edx
0x885933: call    sub_772630
0x885938: add     esp, 4
0x88593B: mov     ebp, eax
0x88593D: cmp     edi, [ebp+0]
0x885940: mov     byte ptr [esp+30h+var_4], 15h
0x885945: jz      short loc_885966
0x885947: test    edi, edi
0x885949: jz      short loc_885957
0x88594B: add     [edi+5Ch], ebx
0x88594E: jnz     short loc_885957
0x885950: mov     ecx, edi
0x885952: call    sub_772560
0x885957: mov     edi, [ebp+0]
0x88595A: test    edi, edi
0x88595C: mov     [esp+30h+a3], edi
0x885960: jz      short loc_885966
0x885962: add     dword ptr [edi+5Ch], 1
0x885966: mov     eax, [esp+30h+var_10]
0x88596A: test    eax, eax
0x88596C: mov     byte ptr [esp+30h+var_4], 1
0x885971: jz      short loc_885985
0x885973: add     [eax+5Ch], ebx
0x885976: mov     ecx, eax
0x885978: add     eax, 5Ch ; '\'
0x88597B: cmp     dword ptr [eax], 0
0x88597E: jnz     short loc_885985
0x885980: call    sub_772560
0x885985: push    2
0x885987: push    1
0x885989: push    5
0x88598B: push    edi
0x88598C: call    sub_801110
0x885991: add     esp, 10h
0x885994: push    edi; a3
0x885995: push    5; a2
0x885997: mov     ecx, esi; this
0x885999: call    sub_760010
0x88599E: lea     eax, [esp+30h+var_10]
0x8859A2: push    eax
0x8859A3: call    sub_772630
0x8859A8: add     esp, 4
0x8859AB: mov     ebp, eax
0x8859AD: cmp     edi, [ebp+0]
0x8859B0: mov     byte ptr [esp+30h+var_4], 16h
0x8859B5: jz      short loc_8859D6
0x8859B7: test    edi, edi
0x8859B9: jz      short loc_8859C7
0x8859BB: add     [edi+5Ch], ebx
0x8859BE: jnz     short loc_8859C7
0x8859C0: mov     ecx, edi
0x8859C2: call    sub_772560
0x8859C7: mov     edi, [ebp+0]
0x8859CA: test    edi, edi
0x8859CC: mov     [esp+30h+a3], edi
0x8859D0: jz      short loc_8859D6
0x8859D2: add     dword ptr [edi+5Ch], 1
0x8859D6: mov     eax, [esp+30h+var_10]
0x8859DA: test    eax, eax
0x8859DC: mov     byte ptr [esp+30h+var_4], 1
0x8859E1: jz      short loc_8859F5
0x8859E3: add     [eax+5Ch], ebx
0x8859E6: mov     ecx, eax
0x8859E8: add     eax, 5Ch ; '\'
0x8859EB: cmp     dword ptr [eax], 0
0x8859EE: jnz     short loc_8859F5
0x8859F0: call    sub_772560
0x8859F5: push    2
0x8859F7: push    3
0x8859F9: push    6
0x8859FB: push    edi
0x8859FC: call    sub_801110
0x885A01: add     esp, 10h
0x885A04: push    edi; a3
0x885A05: push    6; a2
0x885A07: mov     ecx, esi; this
0x885A09: call    sub_760010
0x885A0E: mov     ecx, [esp+30h+var_14]
0x885A12: mov     ebx, [ecx+0CCh]
0x885A18: mov     ebp, [esi+58h]
0x885A1B: cmp     ebp, ebx
0x885A1D: jz      short loc_885A51
0x885A1F: test    ebp, ebp
0x885A21: jz      short loc_885A40
0x885A23: lea     edx, [ebp+4]
0x885A26: push    edx; lpAddend
0x885A27: call    dword ptr ds:0A2807Ch
0x885A2D: test    eax, eax
0x885A2F: jnz     short loc_885A40
0x885A31: test    ebp, ebp
0x885A33: jz      short loc_885A40
0x885A35: mov     eax, [ebp+0]
0x885A38: mov     edx, [eax]
0x885A3A: push    1
0x885A3C: mov     ecx, ebp
0x885A3E: call    edx
0x885A40: test    ebx, ebx
0x885A42: mov     [esi+58h], ebx
0x885A45: jz      short loc_885A51
0x885A47: add     ebx, 4
0x885A4A: push    ebx; lpAddend
0x885A4B: call    dword ptr ds:0A28078h
0x885A51: mov     eax, ds:0B451C0h
0x885A56: mov     ebp, [esi+44h]
0x885A59: cmp     ebp, eax
0x885A5B: mov     ebx, eax
0x885A5D: jz      short loc_885A91
0x885A5F: test    ebp, ebp
0x885A61: jz      short loc_885A80
0x885A63: lea     eax, [ebp+4]
0x885A66: push    eax; lpAddend
0x885A67: call    dword ptr ds:0A2807Ch
0x885A6D: test    eax, eax
0x885A6F: jnz     short loc_885A80
0x885A71: test    ebp, ebp
0x885A73: jz      short loc_885A80
0x885A75: mov     edx, [ebp+0]
0x885A78: mov     eax, [edx]
0x885A7A: push    1
0x885A7C: mov     ecx, ebp
0x885A7E: call    eax
0x885A80: test    ebx, ebx
0x885A82: mov     [esi+44h], ebx
0x885A85: jz      short loc_885A91
0x885A87: add     ebx, 4
0x885A8A: push    ebx; lpAddend
0x885A8B: call    dword ptr ds:0A28078h
0x885A91: cmp     dword ptr [esi+30h], 0
0x885A95: jnz     short loc_885A9F
0x885A97: call    sub_772DF0
0x885A9C: mov     [esi+30h], eax
0x885A9F: mov     ecx, [esi+30h]
0x885AA2: push    0
0x885AA4: push    0
0x885AA6: push    1Bh
0x885AA8: call    sub_772CD0
0x885AAD: cmp     dword ptr [esi+30h], 0
0x885AB1: jnz     short loc_885ABB
0x885AB3: call    sub_772DF0
0x885AB8: mov     [esi+30h], eax
0x885ABB: mov     ecx, [esi+30h]
0x885ABE: push    0
0x885AC0: push    0
0x885AC2: push    0Fh
0x885AC4: call    sub_772CD0
0x885AC9: cmp     dword ptr [esi+30h], 0
0x885ACD: jnz     short loc_885AD7
0x885ACF: call    sub_772DF0
0x885AD4: mov     [esi+30h], eax
0x885AD7: mov     ecx, [esi+30h]
0x885ADA: push    0
0x885ADC: push    1
0x885ADE: push    7
0x885AE0: call    sub_772CD0
0x885AE5: cmp     dword ptr [esi+30h], 0
0x885AE9: jnz     short loc_885AF3
0x885AEB: call    sub_772DF0
0x885AF0: mov     [esi+30h], eax
0x885AF3: mov     ecx, [esi+30h]
0x885AF6: push    0
0x885AF8: push    4
0x885AFA: push    17h
0x885AFC: call    sub_772CD0
0x885B01: cmp     dword ptr [esi+30h], 0
0x885B05: jnz     short loc_885B0F
0x885B07: call    sub_772DF0
0x885B0C: mov     [esi+30h], eax
0x885B0F: mov     ecx, [esi+30h]
0x885B12: push    0
0x885B14: push    1
0x885B16: push    0Eh
0x885B18: call    sub_772CD0
0x885B1D: cmp     dword ptr [esi+30h], 0
0x885B21: jnz     short loc_885B2B
0x885B23: call    sub_772DF0
0x885B28: mov     [esi+30h], eax
0x885B2B: mov     ecx, [esi+30h]
0x885B2E: push    0
0x885B30: push    0
0x885B32: push    34h ; '4'
0x885B34: call    sub_772CD0
0x885B39: mov     ecx, ds:0B43CA0h
0x885B3F: mov     edx, ds:0B44330h
0x885B45: mov     eax, ds:0B43610h
0x885B4A: mov     ds:0B43CC8h, ecx
0x885B50: mov     ecx, ds:0B449C0h
0x885B56: or      ebx, 0FFFFFFFFh
0x885B59: cmp     esi, ds:0B477C4h
0x885B5F: mov     ds:0B44358h, edx
0x885B65: mov     ds:0B43638h, eax
0x885B6A: mov     ds:0B449E8h, ecx
0x885B70: jz      short loc_885B90
0x885B72: add     [esi+60h], ebx
0x885B75: jnz     short loc_885B7E
0x885B77: mov     ecx, esi
0x885B79: call    sub_7604D0
0x885B7E: mov     esi, ds:0B477C4h
0x885B84: test    esi, esi
0x885B86: mov     [esp+30h+var_18], esi
0x885B8A: jz      short loc_885B90
0x885B8C: add     dword ptr [esi+60h], 1
0x885B90: cmp     dword ptr [esi+18h], 7
0x885B94: jnb     loc_885EB8
0x885B9A: lea     edx, [esp+30h+var_10]
0x885B9E: push    edx
0x885B9F: call    sub_772630
0x885BA4: add     esp, 4
0x885BA7: mov     ebp, eax
0x885BA9: cmp     edi, [ebp+0]
0x885BAC: mov     byte ptr [esp+30h+var_4], 17h
0x885BB1: jz      short loc_885BD2
0x885BB3: test    edi, edi
0x885BB5: jz      short loc_885BC3
0x885BB7: add     [edi+5Ch], ebx
0x885BBA: jnz     short loc_885BC3
0x885BBC: mov     ecx, edi
0x885BBE: call    sub_772560
0x885BC3: mov     edi, [ebp+0]
0x885BC6: test    edi, edi
0x885BC8: mov     [esp+30h+a3], edi
0x885BCC: jz      short loc_885BD2
0x885BCE: add     dword ptr [edi+5Ch], 1
0x885BD2: mov     eax, [esp+30h+var_10]
0x885BD6: test    eax, eax
0x885BD8: mov     byte ptr [esp+30h+var_4], 1
0x885BDD: jz      short loc_885BF1
0x885BDF: add     [eax+5Ch], ebx
0x885BE2: mov     ecx, eax
0x885BE4: add     eax, 5Ch ; '\'
0x885BE7: cmp     dword ptr [eax], 0
0x885BEA: jnz     short loc_885BF1
0x885BEC: call    sub_772560
0x885BF1: push    2
0x885BF3: push    1
0x885BF5: push    0
0x885BF7: push    edi
0x885BF8: call    sub_801110
0x885BFD: add     esp, 10h
0x885C00: push    edi; a3
0x885C01: push    0; a2
0x885C03: mov     ecx, esi; this
0x885C05: call    sub_760010
0x885C0A: lea     eax, [esp+30h+var_10]
0x885C0E: push    eax
0x885C0F: call    sub_772630
0x885C14: add     esp, 4
0x885C17: mov     ebp, eax
0x885C19: cmp     edi, [ebp+0]
0x885C1C: mov     byte ptr [esp+30h+var_4], 18h
0x885C21: jz      short loc_885C42
0x885C23: test    edi, edi
0x885C25: jz      short loc_885C33
0x885C27: add     [edi+5Ch], ebx
0x885C2A: jnz     short loc_885C33
0x885C2C: mov     ecx, edi
0x885C2E: call    sub_772560
0x885C33: mov     edi, [ebp+0]
0x885C36: test    edi, edi
0x885C38: mov     [esp+30h+a3], edi
0x885C3C: jz      short loc_885C42
0x885C3E: add     dword ptr [edi+5Ch], 1
0x885C42: mov     eax, [esp+30h+var_10]
0x885C46: test    eax, eax
0x885C48: mov     byte ptr [esp+30h+var_4], 1
0x885C4D: jz      short loc_885C61
0x885C4F: add     [eax+5Ch], ebx
0x885C52: mov     ecx, eax
0x885C54: add     eax, 5Ch ; '\'
0x885C57: cmp     dword ptr [eax], 0
0x885C5A: jnz     short loc_885C61
0x885C5C: call    sub_772560
0x885C61: push    2
0x885C63: push    1
0x885C65: push    1
0x885C67: push    edi
0x885C68: call    sub_801110
0x885C6D: add     esp, 10h
0x885C70: push    edi; a3
0x885C71: push    1; a2
0x885C73: mov     ecx, esi; this
0x885C75: call    sub_760010
0x885C7A: lea     ecx, [esp+30h+var_10]
0x885C7E: push    ecx
0x885C7F: call    sub_772630
0x885C84: add     esp, 4
0x885C87: mov     ebp, eax
0x885C89: cmp     edi, [ebp+0]
0x885C8C: mov     byte ptr [esp+30h+var_4], 19h
0x885C91: jz      short loc_885CB2
0x885C93: test    edi, edi
0x885C95: jz      short loc_885CA3
0x885C97: add     [edi+5Ch], ebx
0x885C9A: jnz     short loc_885CA3
0x885C9C: mov     ecx, edi
0x885C9E: call    sub_772560
0x885CA3: mov     edi, [ebp+0]
0x885CA6: test    edi, edi
0x885CA8: mov     [esp+30h+a3], edi
0x885CAC: jz      short loc_885CB2
0x885CAE: add     dword ptr [edi+5Ch], 1
0x885CB2: mov     eax, [esp+30h+var_10]
0x885CB6: test    eax, eax
0x885CB8: mov     byte ptr [esp+30h+var_4], 1
0x885CBD: jz      short loc_885CD1
0x885CBF: add     [eax+5Ch], ebx
0x885CC2: mov     ecx, eax
0x885CC4: add     eax, 5Ch ; '\'
0x885CC7: cmp     dword ptr [eax], 0
0x885CCA: jnz     short loc_885CD1
0x885CCC: call    sub_772560
0x885CD1: push    2
0x885CD3: push    1
0x885CD5: push    2
0x885CD7: push    edi
0x885CD8: call    sub_801110
0x885CDD: add     esp, 10h
0x885CE0: push    edi; a3
0x885CE1: push    2; a2
0x885CE3: mov     ecx, esi; this
0x885CE5: call    sub_760010
0x885CEA: lea     edx, [esp+30h+var_10]
0x885CEE: push    edx
0x885CEF: call    sub_772630
0x885CF4: add     esp, 4
0x885CF7: mov     ebp, eax
0x885CF9: cmp     edi, [ebp+0]
0x885CFC: mov     byte ptr [esp+30h+var_4], 1Ah
0x885D01: jz      short loc_885D22
0x885D03: test    edi, edi
0x885D05: jz      short loc_885D13
0x885D07: add     [edi+5Ch], ebx
0x885D0A: jnz     short loc_885D13
0x885D0C: mov     ecx, edi
0x885D0E: call    sub_772560
0x885D13: mov     edi, [ebp+0]
0x885D16: test    edi, edi
0x885D18: mov     [esp+30h+a3], edi
0x885D1C: jz      short loc_885D22
0x885D1E: add     dword ptr [edi+5Ch], 1
0x885D22: mov     eax, [esp+30h+var_10]
0x885D26: test    eax, eax
0x885D28: mov     byte ptr [esp+30h+var_4], 1
0x885D2D: jz      short loc_885D41
0x885D2F: add     [eax+5Ch], ebx
0x885D32: mov     ecx, eax
0x885D34: add     eax, 5Ch ; '\'
0x885D37: cmp     dword ptr [eax], 0
0x885D3A: jnz     short loc_885D41
0x885D3C: call    sub_772560
0x885D41: push    2
0x885D43: push    1
0x885D45: push    3
0x885D47: push    edi
0x885D48: call    sub_801110
0x885D4D: add     esp, 10h
0x885D50: push    edi; a3
0x885D51: push    3; a2
0x885D53: mov     ecx, esi; this
0x885D55: call    sub_760010
0x885D5A: lea     eax, [esp+30h+var_10]
0x885D5E: push    eax
0x885D5F: call    sub_772630
0x885D64: add     esp, 4
0x885D67: mov     ebp, eax
0x885D69: cmp     edi, [ebp+0]
0x885D6C: mov     byte ptr [esp+30h+var_4], 1Bh
0x885D71: jz      short loc_885D92
0x885D73: test    edi, edi
0x885D75: jz      short loc_885D83
0x885D77: add     [edi+5Ch], ebx
0x885D7A: jnz     short loc_885D83
0x885D7C: mov     ecx, edi
0x885D7E: call    sub_772560
0x885D83: mov     edi, [ebp+0]
0x885D86: test    edi, edi
0x885D88: mov     [esp+30h+a3], edi
0x885D8C: jz      short loc_885D92
0x885D8E: add     dword ptr [edi+5Ch], 1
0x885D92: mov     eax, [esp+30h+var_10]
0x885D96: test    eax, eax
0x885D98: mov     byte ptr [esp+30h+var_4], 1
0x885D9D: jz      short loc_885DB1
0x885D9F: add     [eax+5Ch], ebx
0x885DA2: mov     ecx, eax
0x885DA4: add     eax, 5Ch ; '\'
0x885DA7: cmp     dword ptr [eax], 0
0x885DAA: jnz     short loc_885DB1
0x885DAC: call    sub_772560
0x885DB1: push    2
0x885DB3: push    3
0x885DB5: push    4
0x885DB7: push    edi
0x885DB8: call    sub_801110
0x885DBD: mov     ecx, ds:0B43110h
0x885DC3: add     esp, 10h
0x885DC6: push    ecx; a2
0x885DC7: mov     ecx, edi; this
0x885DC9: call    sub_76C910
0x885DCE: push    edi; a3
0x885DCF: push    4; a2
0x885DD1: mov     ecx, esi; this
0x885DD3: call    sub_760010
0x885DD8: lea     edx, [esp+30h+var_10]
0x885DDC: push    edx
0x885DDD: call    sub_772630
0x885DE2: add     esp, 4
0x885DE5: mov     ebp, eax
0x885DE7: cmp     edi, [ebp+0]
0x885DEA: mov     byte ptr [esp+30h+var_4], 1Ch
0x885DEF: jz      short loc_885E10
0x885DF1: test    edi, edi
0x885DF3: jz      short loc_885E01
0x885DF5: add     [edi+5Ch], ebx
0x885DF8: jnz     short loc_885E01
0x885DFA: mov     ecx, edi
0x885DFC: call    sub_772560
0x885E01: mov     edi, [ebp+0]
0x885E04: test    edi, edi
0x885E06: mov     [esp+30h+a3], edi
0x885E0A: jz      short loc_885E10
0x885E0C: add     dword ptr [edi+5Ch], 1
0x885E10: mov     eax, [esp+30h+var_10]
0x885E14: test    eax, eax
0x885E16: mov     byte ptr [esp+30h+var_4], 1
0x885E1B: jz      short loc_885E2F
0x885E1D: add     [eax+5Ch], ebx
0x885E20: mov     ecx, eax
0x885E22: add     eax, 5Ch ; '\'
0x885E25: cmp     dword ptr [eax], 0
0x885E28: jnz     short loc_885E2F
0x885E2A: call    sub_772560
0x885E2F: push    2
0x885E31: push    1
0x885E33: push    5
0x885E35: push    edi
0x885E36: call    sub_801110
0x885E3B: add     esp, 10h
0x885E3E: push    edi; a3
0x885E3F: push    5; a2
0x885E41: mov     ecx, esi; this
0x885E43: call    sub_760010
0x885E48: lea     eax, [esp+30h+var_10]
0x885E4C: push    eax
0x885E4D: call    sub_772630
0x885E52: add     esp, 4
0x885E55: mov     ebp, eax
0x885E57: cmp     edi, [ebp+0]
0x885E5A: mov     byte ptr [esp+30h+var_4], 1Dh
0x885E5F: jz      short loc_885E80
0x885E61: test    edi, edi
0x885E63: jz      short loc_885E71
0x885E65: add     [edi+5Ch], ebx
0x885E68: jnz     short loc_885E71
0x885E6A: mov     ecx, edi
0x885E6C: call    sub_772560
0x885E71: mov     edi, [ebp+0]
0x885E74: test    edi, edi
0x885E76: mov     [esp+30h+a3], edi
0x885E7A: jz      short loc_885E80
0x885E7C: add     dword ptr [edi+5Ch], 1
0x885E80: mov     eax, [esp+30h+var_10]
0x885E84: test    eax, eax
0x885E86: mov     byte ptr [esp+30h+var_4], 1
0x885E8B: jz      short loc_885E9F
0x885E8D: add     [eax+5Ch], ebx
0x885E90: mov     ecx, eax
0x885E92: add     eax, 5Ch ; '\'
0x885E95: cmp     dword ptr [eax], 0
0x885E98: jnz     short loc_885E9F
0x885E9A: call    sub_772560
0x885E9F: push    2
0x885EA1: push    3
0x885EA3: push    6
0x885EA5: push    edi
0x885EA6: call    sub_801110
0x885EAB: add     esp, 10h
0x885EAE: push    edi; a3
0x885EAF: push    6; a2
0x885EB1: mov     ecx, esi; this
0x885EB3: call    sub_760010
0x885EB8: mov     ecx, [esp+30h+var_14]
0x885EBC: mov     ebx, [ecx+0D0h]
0x885EC2: mov     ebp, [esi+58h]
0x885EC5: cmp     ebp, ebx
0x885EC7: jz      short loc_885EFB
0x885EC9: test    ebp, ebp
0x885ECB: jz      short loc_885EEA
0x885ECD: lea     edx, [ebp+4]
0x885ED0: push    edx; lpAddend
0x885ED1: call    dword ptr ds:0A2807Ch
0x885ED7: test    eax, eax
0x885ED9: jnz     short loc_885EEA
0x885EDB: test    ebp, ebp
0x885EDD: jz      short loc_885EEA
0x885EDF: mov     eax, [ebp+0]
0x885EE2: mov     edx, [eax]
0x885EE4: push    1
0x885EE6: mov     ecx, ebp
0x885EE8: call    edx
0x885EEA: test    ebx, ebx
0x885EEC: mov     [esi+58h], ebx
0x885EEF: jz      short loc_885EFB
0x885EF1: add     ebx, 4
0x885EF4: push    ebx; lpAddend
0x885EF5: call    dword ptr ds:0A28078h
0x885EFB: mov     eax, ds:0B451C8h
0x885F00: mov     ebp, [esi+44h]
0x885F03: cmp     ebp, eax
0x885F05: mov     ebx, eax
0x885F07: jz      short loc_885F3B
0x885F09: test    ebp, ebp
0x885F0B: jz      short loc_885F2A
0x885F0D: lea     eax, [ebp+4]
0x885F10: push    eax; lpAddend
0x885F11: call    dword ptr ds:0A2807Ch
0x885F17: test    eax, eax
0x885F19: jnz     short loc_885F2A
0x885F1B: test    ebp, ebp
0x885F1D: jz      short loc_885F2A
0x885F1F: mov     edx, [ebp+0]
0x885F22: mov     eax, [edx]
0x885F24: push    1
0x885F26: mov     ecx, ebp
0x885F28: call    eax
0x885F2A: test    ebx, ebx
0x885F2C: mov     [esi+44h], ebx
0x885F2F: jz      short loc_885F3B
0x885F31: add     ebx, 4
0x885F34: push    ebx; lpAddend
0x885F35: call    dword ptr ds:0A28078h
0x885F3B: cmp     dword ptr [esi+30h], 0
0x885F3F: jnz     short loc_885F49
0x885F41: call    sub_772DF0
0x885F46: mov     [esi+30h], eax
0x885F49: mov     ecx, [esi+30h]
0x885F4C: push    0
0x885F4E: push    0
0x885F50: push    1Bh
0x885F52: call    sub_772CD0
0x885F57: cmp     dword ptr [esi+30h], 0
0x885F5B: jnz     short loc_885F65
0x885F5D: call    sub_772DF0
0x885F62: mov     [esi+30h], eax
0x885F65: mov     ecx, [esi+30h]
0x885F68: push    0
0x885F6A: push    0
0x885F6C: push    0Fh
0x885F6E: call    sub_772CD0
0x885F73: cmp     dword ptr [esi+30h], 0
0x885F77: jnz     short loc_885F81
0x885F79: call    sub_772DF0
0x885F7E: mov     [esi+30h], eax
0x885F81: mov     ecx, [esi+30h]
0x885F84: push    0
0x885F86: mov     ebx, 1
0x885F8B: push    ebx
0x885F8C: push    7
0x885F8E: call    sub_772CD0
0x885F93: cmp     dword ptr [esi+30h], 0
0x885F97: jnz     short loc_885FA1
0x885F99: call    sub_772DF0
0x885F9E: mov     [esi+30h], eax
0x885FA1: mov     ecx, [esi+30h]
0x885FA4: push    0
0x885FA6: push    4
0x885FA8: push    17h
0x885FAA: call    sub_772CD0
0x885FAF: cmp     dword ptr [esi+30h], 0
0x885FB3: jnz     short loc_885FBD
0x885FB5: call    sub_772DF0
0x885FBA: mov     [esi+30h], eax
0x885FBD: mov     ecx, [esi+30h]
0x885FC0: push    0
0x885FC2: push    ebx
0x885FC3: push    0Eh
0x885FC5: call    sub_772CD0
0x885FCA: cmp     dword ptr [esi+30h], 0
0x885FCE: jnz     short loc_885FD8
0x885FD0: call    sub_772DF0
0x885FD5: mov     [esi+30h], eax
0x885FD8: mov     ecx, [esi+30h]
0x885FDB: push    0
0x885FDD: push    0
0x885FDF: push    34h ; '4'
0x885FE1: call    sub_772CD0
0x885FE6: mov     ecx, ds:0B43CCCh
0x885FEC: mov     edx, ds:0B4435Ch
0x885FF2: mov     eax, ds:0B4363Ch
0x885FF7: mov     ds:0B43CF4h, ecx
0x885FFD: mov     ecx, ds:0B449ECh
0x886003: or      ebp, 0FFFFFFFFh
0x886006: cmp     esi, ds:0B477C8h
0x88600C: mov     ds:0B44384h, edx
0x886012: mov     ds:0B43664h, eax
0x886017: mov     ds:0B44A14h, ecx
0x88601D: jz      short loc_88603C
0x88601F: add     [esi+60h], ebp
0x886022: jnz     short loc_88602B
0x886024: mov     ecx, esi
0x886026: call    sub_7604D0
0x88602B: mov     esi, ds:0B477C8h
0x886031: test    esi, esi
0x886033: mov     [esp+30h+var_18], esi
0x886037: jz      short loc_88603C
0x886039: add     [esi+60h], ebx
0x88603C: cmp     dword ptr [esi+18h], 8
0x886040: jnb     loc_8863D7
0x886046: lea     edx, [esp+30h+var_10]
0x88604A: push    edx
0x88604B: call    sub_772630
0x886050: add     esp, 4
0x886053: mov     ebp, eax
0x886055: cmp     edi, [ebp+0]
0x886058: mov     byte ptr [esp+30h+var_4], 1Eh
0x88605D: jz      short loc_88607E
0x88605F: test    edi, edi
0x886061: jz      short loc_886070
0x886063: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x886067: jnz     short loc_886070
0x886069: mov     ecx, edi
0x88606B: call    sub_772560
0x886070: mov     edi, [ebp+0]
0x886073: test    edi, edi
0x886075: mov     [esp+30h+a3], edi
0x886079: jz      short loc_88607E
0x88607B: add     [edi+5Ch], ebx
0x88607E: mov     eax, [esp+30h+var_10]
0x886082: test    eax, eax
0x886084: mov     byte ptr [esp+30h+var_4], 1
0x886089: jz      short loc_88609E
0x88608B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x88608F: mov     ecx, eax
0x886091: add     eax, 5Ch ; '\'
0x886094: cmp     dword ptr [eax], 0
0x886097: jnz     short loc_88609E
0x886099: call    sub_772560
0x88609E: push    2
0x8860A0: push    ebx
0x8860A1: push    0
0x8860A3: push    edi
0x8860A4: call    sub_801110
0x8860A9: add     esp, 10h
0x8860AC: push    edi; a3
0x8860AD: push    0; a2
0x8860AF: mov     ecx, esi; this
0x8860B1: call    sub_760010
0x8860B6: lea     eax, [esp+30h+var_10]
0x8860BA: push    eax
0x8860BB: call    sub_772630
0x8860C0: add     esp, 4
0x8860C3: mov     ebp, eax
0x8860C5: cmp     edi, [ebp+0]
0x8860C8: mov     byte ptr [esp+30h+var_4], 1Fh
0x8860CD: jz      short loc_8860EE
0x8860CF: test    edi, edi
0x8860D1: jz      short loc_8860E0
0x8860D3: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8860D7: jnz     short loc_8860E0
0x8860D9: mov     ecx, edi
0x8860DB: call    sub_772560
0x8860E0: mov     edi, [ebp+0]
0x8860E3: test    edi, edi
0x8860E5: mov     [esp+30h+a3], edi
0x8860E9: jz      short loc_8860EE
0x8860EB: add     [edi+5Ch], ebx
0x8860EE: mov     eax, [esp+30h+var_10]
0x8860F2: test    eax, eax
0x8860F4: mov     byte ptr [esp+30h+var_4], 1
0x8860F9: jz      short loc_88610E
0x8860FB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8860FF: mov     ecx, eax
0x886101: add     eax, 5Ch ; '\'
0x886104: cmp     dword ptr [eax], 0
0x886107: jnz     short loc_88610E
0x886109: call    sub_772560
0x88610E: push    2
0x886110: push    ebx
0x886111: push    ebx
0x886112: push    edi
0x886113: call    sub_801110
0x886118: add     esp, 10h
0x88611B: push    edi; a3
0x88611C: push    ebx; a2
0x88611D: mov     ecx, esi; this
0x88611F: call    sub_760010
0x886124: lea     ecx, [esp+30h+var_10]
0x886128: push    ecx
0x886129: call    sub_772630
0x88612E: add     esp, 4
0x886131: mov     ebp, eax
0x886133: cmp     edi, [ebp+0]
0x886136: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x88613B: jz      short loc_88615C
0x88613D: test    edi, edi
0x88613F: jz      short loc_88614E
0x886141: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x886145: jnz     short loc_88614E
0x886147: mov     ecx, edi
0x886149: call    sub_772560
0x88614E: mov     edi, [ebp+0]
0x886151: test    edi, edi
0x886153: mov     [esp+30h+a3], edi
0x886157: jz      short loc_88615C
0x886159: add     [edi+5Ch], ebx
0x88615C: mov     eax, [esp+30h+var_10]
0x886160: test    eax, eax
0x886162: mov     byte ptr [esp+30h+var_4], 1
0x886167: jz      short loc_88617C
0x886169: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x88616D: mov     ecx, eax
0x88616F: add     eax, 5Ch ; '\'
0x886172: cmp     dword ptr [eax], 0
0x886175: jnz     short loc_88617C
0x886177: call    sub_772560
0x88617C: push    2
0x88617E: push    ebx
0x88617F: push    2
0x886181: push    edi
0x886182: call    sub_801110
0x886187: add     esp, 10h
0x88618A: push    edi; a3
0x88618B: push    2; a2
0x88618D: mov     ecx, esi; this
0x88618F: call    sub_760010
0x886194: lea     edx, [esp+30h+var_10]
0x886198: push    edx
0x886199: call    sub_772630
0x88619E: add     esp, 4
0x8861A1: mov     ebp, eax
0x8861A3: cmp     edi, [ebp+0]
0x8861A6: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x8861AB: jz      short loc_8861CC
0x8861AD: test    edi, edi
0x8861AF: jz      short loc_8861BE
0x8861B1: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8861B5: jnz     short loc_8861BE
0x8861B7: mov     ecx, edi
0x8861B9: call    sub_772560
0x8861BE: mov     edi, [ebp+0]
0x8861C1: test    edi, edi
0x8861C3: mov     [esp+30h+a3], edi
0x8861C7: jz      short loc_8861CC
0x8861C9: add     [edi+5Ch], ebx
0x8861CC: mov     eax, [esp+30h+var_10]
0x8861D0: test    eax, eax
0x8861D2: mov     byte ptr [esp+30h+var_4], 1
0x8861D7: jz      short loc_8861EC
0x8861D9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8861DD: mov     ecx, eax
0x8861DF: add     eax, 5Ch ; '\'
0x8861E2: cmp     dword ptr [eax], 0
0x8861E5: jnz     short loc_8861EC
0x8861E7: call    sub_772560
0x8861EC: push    2
0x8861EE: push    ebx
0x8861EF: push    3
0x8861F1: push    edi
0x8861F2: call    sub_801110
0x8861F7: add     esp, 10h
0x8861FA: push    edi; a3
0x8861FB: push    3; a2
0x8861FD: mov     ecx, esi; this
0x8861FF: call    sub_760010
0x886204: lea     eax, [esp+30h+var_10]
0x886208: push    eax
0x886209: call    sub_772630
0x88620E: add     esp, 4
0x886211: mov     ebp, eax
0x886213: cmp     edi, [ebp+0]
0x886216: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x88621B: jz      short loc_88623C
0x88621D: test    edi, edi
0x88621F: jz      short loc_88622E
0x886221: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x886225: jnz     short loc_88622E
0x886227: mov     ecx, edi
0x886229: call    sub_772560
0x88622E: mov     edi, [ebp+0]
0x886231: test    edi, edi
0x886233: mov     [esp+30h+a3], edi
0x886237: jz      short loc_88623C
0x886239: add     [edi+5Ch], ebx
0x88623C: mov     eax, [esp+30h+var_10]
0x886240: test    eax, eax
0x886242: mov     byte ptr [esp+30h+var_4], 1
0x886247: jz      short loc_88625C
0x886249: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x88624D: mov     ecx, eax
0x88624F: add     eax, 5Ch ; '\'
0x886252: cmp     dword ptr [eax], 0
0x886255: jnz     short loc_88625C
0x886257: call    sub_772560
0x88625C: push    2
0x88625E: push    ebx
0x88625F: push    4
0x886261: push    edi
0x886262: call    sub_801110
0x886267: add     esp, 10h
0x88626A: push    edi; a3
0x88626B: push    4; a2
0x88626D: mov     ecx, esi; this
0x88626F: call    sub_760010
0x886274: lea     ecx, [esp+30h+var_10]
0x886278: push    ecx
0x886279: call    sub_772630
0x88627E: add     esp, 4
0x886281: mov     ebp, eax
0x886283: cmp     edi, [ebp+0]
0x886286: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x88628B: jz      short loc_8862AC
0x88628D: test    edi, edi
0x88628F: jz      short loc_88629E
0x886291: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x886295: jnz     short loc_88629E
0x886297: mov     ecx, edi
0x886299: call    sub_772560
0x88629E: mov     edi, [ebp+0]
0x8862A1: test    edi, edi
0x8862A3: mov     [esp+30h+a3], edi
0x8862A7: jz      short loc_8862AC
0x8862A9: add     [edi+5Ch], ebx
0x8862AC: mov     eax, [esp+30h+var_10]
0x8862B0: test    eax, eax
0x8862B2: mov     byte ptr [esp+30h+var_4], 1
0x8862B7: jz      short loc_8862CC
0x8862B9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8862BD: mov     ecx, eax
0x8862BF: add     eax, 5Ch ; '\'
0x8862C2: cmp     dword ptr [eax], 0
0x8862C5: jnz     short loc_8862CC
0x8862C7: call    sub_772560
0x8862CC: push    2
0x8862CE: push    3
0x8862D0: push    5
0x8862D2: push    edi
0x8862D3: call    sub_801110
0x8862D8: mov     edx, ds:0B43110h
0x8862DE: add     esp, 10h
0x8862E1: push    edx; a2
0x8862E2: mov     ecx, edi; this
0x8862E4: call    sub_76C910
0x8862E9: push    edi; a3
0x8862EA: push    5; a2
0x8862EC: mov     ecx, esi; this
0x8862EE: call    sub_760010
0x8862F3: lea     eax, [esp+30h+var_10]
0x8862F7: push    eax
0x8862F8: call    sub_772630
0x8862FD: add     esp, 4
0x886300: mov     ebp, eax
0x886302: cmp     edi, [ebp+0]
0x886305: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x88630A: jz      short loc_88632B
0x88630C: test    edi, edi
0x88630E: jz      short loc_88631D
0x886310: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x886314: jnz     short loc_88631D
0x886316: mov     ecx, edi
0x886318: call    sub_772560
0x88631D: mov     edi, [ebp+0]
0x886320: test    edi, edi
0x886322: mov     [esp+30h+a3], edi
0x886326: jz      short loc_88632B
0x886328: add     [edi+5Ch], ebx
0x88632B: mov     eax, [esp+30h+var_10]
0x88632F: test    eax, eax
0x886331: mov     byte ptr [esp+30h+var_4], 1
0x886336: jz      short loc_88634B
0x886338: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x88633C: mov     ecx, eax
0x88633E: add     eax, 5Ch ; '\'
0x886341: cmp     dword ptr [eax], 0
0x886344: jnz     short loc_88634B
0x886346: call    sub_772560
0x88634B: push    2
0x88634D: push    ebx
0x88634E: push    6
0x886350: push    edi
0x886351: call    sub_801110
0x886356: add     esp, 10h
0x886359: push    edi; a3
0x88635A: push    6; a2
0x88635C: mov     ecx, esi; this
0x88635E: call    sub_760010
0x886363: lea     ecx, [esp+30h+var_10]
0x886367: push    ecx
0x886368: call    sub_772630
0x88636D: add     esp, 4
0x886370: mov     ebp, eax
0x886372: cmp     edi, [ebp+0]
0x886375: mov     byte ptr [esp+30h+var_4], 25h ; '%'
0x88637A: jz      short loc_88639B
0x88637C: test    edi, edi
0x88637E: jz      short loc_88638D
0x886380: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x886384: jnz     short loc_88638D
0x886386: mov     ecx, edi
0x886388: call    sub_772560
0x88638D: mov     edi, [ebp+0]
0x886390: test    edi, edi
0x886392: mov     [esp+30h+a3], edi
0x886396: jz      short loc_88639B
0x886398: add     [edi+5Ch], ebx
0x88639B: mov     eax, [esp+30h+var_10]
0x88639F: test    eax, eax
0x8863A1: mov     byte ptr [esp+30h+var_4], 1
0x8863A6: jz      short loc_8863BB
0x8863A8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8863AC: mov     ecx, eax
0x8863AE: add     eax, 5Ch ; '\'
0x8863B1: cmp     dword ptr [eax], 0
0x8863B4: jnz     short loc_8863BB
0x8863B6: call    sub_772560
0x8863BB: push    2
0x8863BD: push    3
0x8863BF: push    7
0x8863C1: push    edi
0x8863C2: call    sub_801110
0x8863C7: add     esp, 10h
0x8863CA: push    edi; a3
0x8863CB: push    7; a2
0x8863CD: mov     ecx, esi; this
0x8863CF: call    sub_760010
0x8863D4: or      ebp, 0FFFFFFFFh
0x8863D7: mov     edx, [esp+30h+var_14]
0x8863DB: mov     eax, [edx+0D4h]
0x8863E1: push    eax; a2
0x8863E2: mov     ecx, esi; this
0x8863E4: call    sub_7AECB0
0x8863E9: push    2Fh ; '/'
0x8863EB: call    sub_883130
0x8863F0: add     esp, 4
0x8863F3: push    eax; a2
0x8863F4: mov     ecx, esi; this
0x8863F6: call    sub_7AEC60
0x8863FB: cmp     dword ptr [esi+30h], 0
0x8863FF: jnz     short loc_886409
0x886401: call    sub_772DF0
0x886406: mov     [esi+30h], eax
0x886409: mov     ecx, [esi+30h]
0x88640C: push    0
0x88640E: push    0
0x886410: push    1Bh
0x886412: call    sub_772CD0
0x886417: cmp     dword ptr [esi+30h], 0
0x88641B: jnz     short loc_886425
0x88641D: call    sub_772DF0
0x886422: mov     [esi+30h], eax
0x886425: mov     ecx, [esi+30h]
0x886428: push    0
0x88642A: push    0
0x88642C: push    0Fh
0x88642E: call    sub_772CD0
0x886433: cmp     dword ptr [esi+30h], 0
0x886437: jnz     short loc_886441
0x886439: call    sub_772DF0
0x88643E: mov     [esi+30h], eax
0x886441: mov     ecx, [esi+30h]
0x886444: push    0
0x886446: push    ebx
0x886447: push    7
0x886449: call    sub_772CD0
0x88644E: cmp     dword ptr [esi+30h], 0
0x886452: jnz     short loc_88645C
0x886454: call    sub_772DF0
0x886459: mov     [esi+30h], eax
0x88645C: mov     ecx, [esi+30h]
0x88645F: push    0
0x886461: push    4
0x886463: push    17h
0x886465: call    sub_772CD0
0x88646A: cmp     dword ptr [esi+30h], 0
0x88646E: jnz     short loc_886478
0x886470: call    sub_772DF0
0x886475: mov     [esi+30h], eax
0x886478: mov     ecx, [esi+30h]
0x88647B: push    0
0x88647D: push    ebx
0x88647E: push    0Eh
0x886480: call    sub_772CD0
0x886485: cmp     dword ptr [esi+30h], 0
0x886489: jnz     short loc_886493
0x88648B: call    sub_772DF0
0x886490: mov     [esi+30h], eax
0x886493: mov     ecx, [esi+30h]
0x886496: push    0
0x886498: push    0
0x88649A: push    34h ; '4'
0x88649C: call    sub_772CD0
0x8864A1: cmp     esi, ds:0B477CCh
0x8864A7: mov     eax, ds:0B43CF8h
0x8864AC: mov     ecx, ds:0B44388h
0x8864B2: mov     edx, ds:0B43668h
0x8864B8: mov     ds:0B43D28h, eax
0x8864BD: mov     eax, ds:0B44A18h
0x8864C2: mov     ds:0B443B8h, ecx
0x8864C8: mov     ds:0B43698h, edx
0x8864CE: mov     ds:0B44A48h, eax
0x8864D3: jz      short loc_8864F2
0x8864D5: add     [esi+60h], ebp
0x8864D8: jnz     short loc_8864E1
0x8864DA: mov     ecx, esi
0x8864DC: call    sub_7604D0
0x8864E1: mov     esi, ds:0B477CCh
0x8864E7: test    esi, esi
0x8864E9: mov     [esp+30h+var_18], esi
0x8864ED: jz      short loc_8864F2
0x8864EF: add     [esi+60h], ebx
0x8864F2: cmp     dword ptr [esi+18h], 8
0x8864F6: jnb     loc_8867C2
0x8864FC: lea     ecx, [esp+30h+var_10]
0x886500: push    ecx
0x886501: call    sub_772630
0x886506: add     esp, 4
0x886509: push    eax
0x88650A: lea     ecx, [esp+34h+a3]
0x88650E: mov     byte ptr [esp+34h+var_4], 26h ; '&'
0x886513: call    sub_75FAE0
0x886518: mov     eax, [esp+30h+var_10]
0x88651C: test    eax, eax
0x88651E: mov     byte ptr [esp+30h+var_4], 1
0x886523: jz      short loc_886537
0x886525: add     [eax+5Ch], ebp
0x886528: mov     ecx, eax
0x88652A: add     eax, 5Ch ; '\'
0x88652D: cmp     dword ptr [eax], 0
0x886530: jnz     short loc_886537
0x886532: call    sub_772560
0x886537: mov     edi, [esp+30h+a3]
0x88653B: push    2
0x88653D: push    ebx
0x88653E: push    0
0x886540: push    edi
0x886541: call    sub_801110
0x886546: add     esp, 10h
0x886549: push    edi; a3
0x88654A: push    0; a2
0x88654C: mov     ecx, esi; this
0x88654E: call    sub_760010
0x886553: lea     edx, [esp+30h+var_10]
0x886557: push    edx
0x886558: call    sub_772630
0x88655D: add     esp, 4
0x886560: push    eax
0x886561: lea     ecx, [esp+34h+a3]
0x886565: mov     byte ptr [esp+34h+var_4], 27h ; '''
0x88656A: call    sub_75FAE0
0x88656F: mov     eax, [esp+30h+var_10]
0x886573: test    eax, eax
0x886575: mov     byte ptr [esp+30h+var_4], 1
0x88657A: jz      short loc_88658E
0x88657C: add     [eax+5Ch], ebp
0x88657F: mov     ecx, eax
0x886581: add     eax, 5Ch ; '\'
0x886584: cmp     dword ptr [eax], 0
0x886587: jnz     short loc_88658E
0x886589: call    sub_772560
0x88658E: mov     edi, [esp+30h+a3]
0x886592: push    2
0x886594: push    ebx
0x886595: push    ebx
0x886596: push    edi
0x886597: call    sub_801110
0x88659C: add     esp, 10h
0x88659F: push    edi; a3
0x8865A0: push    ebx; a2
0x8865A1: mov     ecx, esi; this
0x8865A3: call    sub_760010
0x8865A8: lea     eax, [esp+30h+var_10]
0x8865AC: push    eax
0x8865AD: call    sub_772630
0x8865B2: add     esp, 4
0x8865B5: push    eax
0x8865B6: lea     ecx, [esp+34h+a3]
0x8865BA: mov     byte ptr [esp+34h+var_4], 28h ; '('
0x8865BF: call    sub_75FAE0
0x8865C4: mov     eax, [esp+30h+var_10]
0x8865C8: test    eax, eax
0x8865CA: mov     byte ptr [esp+30h+var_4], 1
0x8865CF: jz      short loc_8865E3
0x8865D1: add     [eax+5Ch], ebp
0x8865D4: mov     ecx, eax
0x8865D6: add     eax, 5Ch ; '\'
0x8865D9: cmp     dword ptr [eax], 0
0x8865DC: jnz     short loc_8865E3
0x8865DE: call    sub_772560
0x8865E3: mov     edi, [esp+30h+a3]
0x8865E7: push    2
0x8865E9: push    ebx
0x8865EA: push    2
0x8865EC: push    edi
0x8865ED: call    sub_801110
0x8865F2: add     esp, 10h
0x8865F5: push    edi; a3
0x8865F6: push    2; a2
0x8865F8: mov     ecx, esi; this
0x8865FA: call    sub_760010
0x8865FF: lea     ecx, [esp+30h+var_10]
0x886603: push    ecx
0x886604: call    sub_772630
0x886609: add     esp, 4
0x88660C: push    eax
0x88660D: lea     ecx, [esp+34h+a3]
0x886611: mov     byte ptr [esp+34h+var_4], 29h ; ')'
0x886616: call    sub_75FAE0
0x88661B: mov     eax, [esp+30h+var_10]
0x88661F: test    eax, eax
0x886621: mov     byte ptr [esp+30h+var_4], 1
0x886626: jz      short loc_88663A
0x886628: add     [eax+5Ch], ebp
0x88662B: mov     ecx, eax
0x88662D: add     eax, 5Ch ; '\'
0x886630: cmp     dword ptr [eax], 0
0x886633: jnz     short loc_88663A
0x886635: call    sub_772560
0x88663A: mov     edi, [esp+30h+a3]
0x88663E: push    2
0x886640: push    ebx
0x886641: push    3
0x886643: push    edi
0x886644: call    sub_801110
0x886649: add     esp, 10h
0x88664C: push    edi; a3
0x88664D: push    3; a2
0x88664F: mov     ecx, esi; this
0x886651: call    sub_760010
0x886656: lea     edx, [esp+30h+var_10]
0x88665A: push    edx
0x88665B: call    sub_772630
0x886660: add     esp, 4
0x886663: push    eax
0x886664: lea     ecx, [esp+34h+a3]
0x886668: mov     byte ptr [esp+34h+var_4], 2Ah ; '*'
0x88666D: call    sub_75FAE0
0x886672: mov     eax, [esp+30h+var_10]
0x886676: test    eax, eax
0x886678: mov     byte ptr [esp+30h+var_4], 1
0x88667D: jz      short loc_886691
0x88667F: add     [eax+5Ch], ebp
0x886682: mov     ecx, eax
0x886684: add     eax, 5Ch ; '\'
0x886687: cmp     dword ptr [eax], 0
0x88668A: jnz     short loc_886691
0x88668C: call    sub_772560
0x886691: mov     edi, [esp+30h+a3]
0x886695: push    2
0x886697: push    ebx
0x886698: push    4
0x88669A: push    edi
0x88669B: call    sub_801110
0x8866A0: add     esp, 10h
0x8866A3: push    edi; a3
0x8866A4: push    4; a2
0x8866A6: mov     ecx, esi; this
0x8866A8: call    sub_760010
0x8866AD: lea     eax, [esp+30h+var_10]
0x8866B1: push    eax
0x8866B2: call    sub_772630
0x8866B7: add     esp, 4
0x8866BA: push    eax
0x8866BB: lea     ecx, [esp+34h+a3]
0x8866BF: mov     byte ptr [esp+34h+var_4], 2Bh ; '+'
0x8866C4: call    sub_75FAE0
0x8866C9: mov     eax, [esp+30h+var_10]
0x8866CD: test    eax, eax
0x8866CF: mov     byte ptr [esp+30h+var_4], 1
0x8866D4: jz      short loc_8866E8
0x8866D6: add     [eax+5Ch], ebp
0x8866D9: mov     ecx, eax
0x8866DB: add     eax, 5Ch ; '\'
0x8866DE: cmp     dword ptr [eax], 0
0x8866E1: jnz     short loc_8866E8
0x8866E3: call    sub_772560
0x8866E8: mov     edi, [esp+30h+a3]
0x8866EC: push    2
0x8866EE: push    3
0x8866F0: push    5
0x8866F2: push    edi
0x8866F3: call    sub_801110
0x8866F8: mov     ecx, ds:0B43110h
0x8866FE: add     esp, 10h
0x886701: push    ecx; a2
0x886702: mov     ecx, edi; this
0x886704: call    sub_76C910
0x886709: push    edi; a3
0x88670A: push    5; a2
0x88670C: mov     ecx, esi; this
0x88670E: call    sub_760010
0x886713: lea     edx, [esp+30h+var_10]
0x886717: push    edx
0x886718: call    sub_772630
0x88671D: add     esp, 4
0x886720: push    eax
0x886721: lea     ecx, [esp+34h+a3]
0x886725: mov     byte ptr [esp+34h+var_4], 2Ch ; ','
0x88672A: call    sub_75FAE0
0x88672F: mov     eax, [esp+30h+var_10]
0x886733: test    eax, eax
0x886735: mov     byte ptr [esp+30h+var_4], 1
0x88673A: jz      short loc_88674E
0x88673C: add     [eax+5Ch], ebp
0x88673F: mov     ecx, eax
0x886741: add     eax, 5Ch ; '\'
0x886744: cmp     dword ptr [eax], 0
0x886747: jnz     short loc_88674E
0x886749: call    sub_772560
0x88674E: mov     edi, [esp+30h+a3]
0x886752: push    2
0x886754: push    ebx
0x886755: push    6
0x886757: push    edi
0x886758: call    sub_801110
0x88675D: add     esp, 10h
0x886760: push    edi; a3
0x886761: push    6; a2
0x886763: mov     ecx, esi; this
0x886765: call    sub_760010
0x88676A: lea     eax, [esp+30h+var_10]
0x88676E: push    eax
0x88676F: call    sub_772630
0x886774: add     esp, 4
0x886777: push    eax
0x886778: lea     ecx, [esp+34h+a3]
0x88677C: mov     byte ptr [esp+34h+var_4], 2Dh ; '-'
0x886781: call    sub_75FAE0
0x886786: mov     eax, [esp+30h+var_10]
0x88678A: test    eax, eax
0x88678C: mov     byte ptr [esp+30h+var_4], 1
0x886791: jz      short loc_8867A5
0x886793: add     [eax+5Ch], ebp
0x886796: mov     ecx, eax
0x886798: add     eax, 5Ch ; '\'
0x88679B: cmp     dword ptr [eax], 0
0x88679E: jnz     short loc_8867A5
0x8867A0: call    sub_772560
0x8867A5: mov     edi, [esp+30h+a3]
0x8867A9: push    2
0x8867AB: push    3
0x8867AD: push    7
0x8867AF: push    edi
0x8867B0: call    sub_801110
0x8867B5: add     esp, 10h
0x8867B8: push    edi; a3
0x8867B9: push    7; a2
0x8867BB: mov     ecx, esi; this
0x8867BD: call    sub_760010
0x8867C2: mov     ecx, [esp+30h+var_14]
0x8867C6: mov     eax, [ecx+0D8h]
0x8867CC: push    eax; a2
0x8867CD: mov     ecx, esi; this
0x8867CF: call    sub_7AECB0
0x8867D4: push    32h ; '2'
0x8867D6: call    sub_883130
0x8867DB: add     esp, 4
0x8867DE: push    eax; a2
0x8867DF: mov     ecx, esi; this
0x8867E1: call    sub_7AEC60
0x8867E6: cmp     dword ptr [esi+30h], 0
0x8867EA: jnz     short loc_8867F4
0x8867EC: call    sub_772DF0
0x8867F1: mov     [esi+30h], eax
0x8867F4: mov     ecx, [esi+30h]
0x8867F7: push    0
0x8867F9: push    0
0x8867FB: push    1Bh
0x8867FD: call    sub_772CD0
0x886802: cmp     dword ptr [esi+30h], 0
0x886806: jnz     short loc_886810
0x886808: call    sub_772DF0
0x88680D: mov     [esi+30h], eax
0x886810: mov     ecx, [esi+30h]
0x886813: push    0
0x886815: push    0
0x886817: push    0Fh
0x886819: call    sub_772CD0
0x88681E: cmp     dword ptr [esi+30h], 0
0x886822: jnz     short loc_88682C
0x886824: call    sub_772DF0
0x886829: mov     [esi+30h], eax
0x88682C: mov     ecx, [esi+30h]
0x88682F: push    0
0x886831: push    ebx
0x886832: push    7
0x886834: call    sub_772CD0
0x886839: cmp     dword ptr [esi+30h], 0
0x88683D: jnz     short loc_886847
0x88683F: call    sub_772DF0
0x886844: mov     [esi+30h], eax
0x886847: mov     ecx, [esi+30h]
0x88684A: push    0
0x88684C: push    4
0x88684E: push    17h
0x886850: call    sub_772CD0
0x886855: cmp     dword ptr [esi+30h], 0
0x886859: jnz     short loc_886863
0x88685B: call    sub_772DF0
0x886860: mov     [esi+30h], eax
0x886863: mov     ecx, [esi+30h]
0x886866: push    0
0x886868: push    ebx
0x886869: push    0Eh
0x88686B: call    sub_772CD0
0x886870: cmp     dword ptr [esi+30h], 0
0x886874: jnz     short loc_88687E
0x886876: call    sub_772DF0
0x88687B: mov     [esi+30h], eax
0x88687E: mov     ecx, [esi+30h]
0x886881: push    0
0x886883: push    0
0x886885: push    34h ; '4'
0x886887: call    sub_772CD0
0x88688C: cmp     esi, ds:0B477D0h
0x886892: mov     edx, ds:0B43D30h
0x886898: mov     eax, ds:0B443C0h
0x88689D: mov     ecx, ds:0B436A0h
0x8868A3: mov     ds:0B43D60h, edx
0x8868A9: mov     edx, ds:0B44A50h
0x8868AF: mov     ds:0B443F0h, eax
0x8868B4: mov     ds:0B436D0h, ecx
0x8868BA: mov     ds:0B44A80h, edx
0x8868C0: jz      short loc_8868DF
0x8868C2: add     [esi+60h], ebp
0x8868C5: jnz     short loc_8868CE
0x8868C7: mov     ecx, esi
0x8868C9: call    sub_7604D0
0x8868CE: mov     esi, ds:0B477D0h
0x8868D4: test    esi, esi
0x8868D6: mov     [esp+30h+var_18], esi
0x8868DA: jz      short loc_8868DF
0x8868DC: add     [esi+60h], ebx
0x8868DF: cmp     dword ptr [esi+18h], 8
0x8868E3: jnb     loc_886BAE
0x8868E9: lea     eax, [esp+30h+var_10]
0x8868ED: push    eax
0x8868EE: call    sub_772630
0x8868F3: add     esp, 4
0x8868F6: push    eax
0x8868F7: lea     ecx, [esp+34h+a3]
0x8868FB: mov     byte ptr [esp+34h+var_4], 2Eh ; '.'
0x886900: call    sub_75FAE0
0x886905: mov     eax, [esp+30h+var_10]
0x886909: test    eax, eax
0x88690B: mov     byte ptr [esp+30h+var_4], 1
0x886910: jz      short loc_886924
0x886912: add     [eax+5Ch], ebp
0x886915: mov     ecx, eax
0x886917: add     eax, 5Ch ; '\'
0x88691A: cmp     dword ptr [eax], 0
0x88691D: jnz     short loc_886924
0x88691F: call    sub_772560
0x886924: mov     edi, [esp+30h+a3]
0x886928: push    2
0x88692A: push    ebx
0x88692B: push    0
0x88692D: push    edi
0x88692E: call    sub_801110
0x886933: add     esp, 10h
0x886936: push    edi; a3
0x886937: push    0; a2
0x886939: mov     ecx, esi; this
0x88693B: call    sub_760010
0x886940: lea     ecx, [esp+30h+var_10]
0x886944: push    ecx
0x886945: call    sub_772630
0x88694A: add     esp, 4
0x88694D: push    eax
0x88694E: lea     ecx, [esp+34h+a3]
0x886952: mov     byte ptr [esp+34h+var_4], 2Fh ; '/'
0x886957: call    sub_75FAE0
0x88695C: mov     eax, [esp+30h+var_10]
0x886960: test    eax, eax
0x886962: mov     byte ptr [esp+30h+var_4], 1
0x886967: jz      short loc_88697B
0x886969: add     [eax+5Ch], ebp
0x88696C: mov     ecx, eax
0x88696E: add     eax, 5Ch ; '\'
0x886971: cmp     dword ptr [eax], 0
0x886974: jnz     short loc_88697B
0x886976: call    sub_772560
0x88697B: mov     edi, [esp+30h+a3]
0x88697F: push    2
0x886981: push    ebx
0x886982: push    ebx
0x886983: push    edi
0x886984: call    sub_801110
0x886989: add     esp, 10h
0x88698C: push    edi; a3
0x88698D: push    ebx; a2
0x88698E: mov     ecx, esi; this
0x886990: call    sub_760010
0x886995: lea     edx, [esp+30h+var_10]
0x886999: push    edx
0x88699A: call    sub_772630
0x88699F: add     esp, 4
0x8869A2: push    eax
0x8869A3: lea     ecx, [esp+34h+a3]
0x8869A7: mov     byte ptr [esp+34h+var_4], 30h ; '0'
0x8869AC: call    sub_75FAE0
0x8869B1: mov     eax, [esp+30h+var_10]
0x8869B5: test    eax, eax
0x8869B7: mov     byte ptr [esp+30h+var_4], 1
0x8869BC: jz      short loc_8869D0
0x8869BE: add     [eax+5Ch], ebp
0x8869C1: mov     ecx, eax
0x8869C3: add     eax, 5Ch ; '\'
0x8869C6: cmp     dword ptr [eax], 0
0x8869C9: jnz     short loc_8869D0
0x8869CB: call    sub_772560
0x8869D0: mov     edi, [esp+30h+a3]
0x8869D4: push    2
0x8869D6: push    ebx
0x8869D7: push    2
0x8869D9: push    edi
0x8869DA: call    sub_801110
0x8869DF: add     esp, 10h
0x8869E2: push    edi; a3
0x8869E3: push    2; a2
0x8869E5: mov     ecx, esi; this
0x8869E7: call    sub_760010
0x8869EC: lea     eax, [esp+30h+var_10]
0x8869F0: push    eax
0x8869F1: call    sub_772630
0x8869F6: add     esp, 4
0x8869F9: push    eax
0x8869FA: lea     ecx, [esp+34h+a3]
0x8869FE: mov     byte ptr [esp+34h+var_4], 31h ; '1'
0x886A03: call    sub_75FAE0
0x886A08: mov     eax, [esp+30h+var_10]
0x886A0C: test    eax, eax
0x886A0E: mov     byte ptr [esp+30h+var_4], 1
0x886A13: jz      short loc_886A27
0x886A15: add     [eax+5Ch], ebp
0x886A18: mov     ecx, eax
0x886A1A: add     eax, 5Ch ; '\'
0x886A1D: cmp     dword ptr [eax], 0
0x886A20: jnz     short loc_886A27
0x886A22: call    sub_772560
0x886A27: mov     edi, [esp+30h+a3]
0x886A2B: push    2
0x886A2D: push    ebx
0x886A2E: push    3
0x886A30: push    edi
0x886A31: call    sub_801110
0x886A36: add     esp, 10h
0x886A39: push    edi; a3
0x886A3A: push    3; a2
0x886A3C: mov     ecx, esi; this
0x886A3E: call    sub_760010
0x886A43: lea     ecx, [esp+30h+var_10]
0x886A47: push    ecx
0x886A48: call    sub_772630
0x886A4D: add     esp, 4
0x886A50: push    eax
0x886A51: lea     ecx, [esp+34h+a3]
0x886A55: mov     byte ptr [esp+34h+var_4], 32h ; '2'
0x886A5A: call    sub_75FAE0
0x886A5F: mov     eax, [esp+30h+var_10]
0x886A63: test    eax, eax
0x886A65: mov     byte ptr [esp+30h+var_4], 1
0x886A6A: jz      short loc_886A7E
0x886A6C: add     [eax+5Ch], ebp
0x886A6F: mov     ecx, eax
0x886A71: add     eax, 5Ch ; '\'
0x886A74: cmp     dword ptr [eax], 0
0x886A77: jnz     short loc_886A7E
0x886A79: call    sub_772560
0x886A7E: mov     edi, [esp+30h+a3]
0x886A82: push    2
0x886A84: push    ebx
0x886A85: push    4
0x886A87: push    edi
0x886A88: call    sub_801110
0x886A8D: add     esp, 10h
0x886A90: push    edi; a3
0x886A91: push    4; a2
0x886A93: mov     ecx, esi; this
0x886A95: call    sub_760010
0x886A9A: lea     edx, [esp+30h+var_10]
0x886A9E: push    edx
0x886A9F: call    sub_772630
0x886AA4: add     esp, 4
0x886AA7: push    eax
0x886AA8: lea     ecx, [esp+34h+a3]
0x886AAC: mov     byte ptr [esp+34h+var_4], 33h ; '3'
0x886AB1: call    sub_75FAE0
0x886AB6: mov     eax, [esp+30h+var_10]
0x886ABA: test    eax, eax
0x886ABC: mov     byte ptr [esp+30h+var_4], 1
0x886AC1: jz      short loc_886AD5
0x886AC3: add     [eax+5Ch], ebp
0x886AC6: mov     ecx, eax
0x886AC8: add     eax, 5Ch ; '\'
0x886ACB: cmp     dword ptr [eax], 0
0x886ACE: jnz     short loc_886AD5
0x886AD0: call    sub_772560
0x886AD5: mov     edi, [esp+30h+a3]
0x886AD9: push    2
0x886ADB: push    3
0x886ADD: push    5
0x886ADF: push    edi
0x886AE0: call    sub_801110
0x886AE5: mov     eax, ds:0B43110h
0x886AEA: add     esp, 10h
0x886AED: push    eax; a2
0x886AEE: mov     ecx, edi; this
0x886AF0: call    sub_76C910
0x886AF5: push    edi; a3
0x886AF6: push    5; a2
0x886AF8: mov     ecx, esi; this
0x886AFA: call    sub_760010
0x886AFF: lea     ecx, [esp+30h+var_10]
0x886B03: push    ecx
0x886B04: call    sub_772630
0x886B09: add     esp, 4
0x886B0C: push    eax
0x886B0D: lea     ecx, [esp+34h+a3]
0x886B11: mov     byte ptr [esp+34h+var_4], 34h ; '4'
0x886B16: call    sub_75FAE0
0x886B1B: mov     eax, [esp+30h+var_10]
0x886B1F: test    eax, eax
0x886B21: mov     byte ptr [esp+30h+var_4], 1
0x886B26: jz      short loc_886B3A
0x886B28: add     [eax+5Ch], ebp
0x886B2B: mov     ecx, eax
0x886B2D: add     eax, 5Ch ; '\'
0x886B30: cmp     dword ptr [eax], 0
0x886B33: jnz     short loc_886B3A
0x886B35: call    sub_772560
0x886B3A: mov     edi, [esp+30h+a3]
0x886B3E: push    2
0x886B40: push    ebx
0x886B41: push    6
0x886B43: push    edi
0x886B44: call    sub_801110
0x886B49: add     esp, 10h
0x886B4C: push    edi; a3
0x886B4D: push    6; a2
0x886B4F: mov     ecx, esi; this
0x886B51: call    sub_760010
0x886B56: lea     edx, [esp+30h+var_10]
0x886B5A: push    edx
0x886B5B: call    sub_772630
0x886B60: add     esp, 4
0x886B63: push    eax
0x886B64: lea     ecx, [esp+34h+a3]
0x886B68: mov     byte ptr [esp+34h+var_4], 35h ; '5'
0x886B6D: call    sub_75FAE0
0x886B72: mov     eax, [esp+30h+var_10]
0x886B76: test    eax, eax
0x886B78: mov     byte ptr [esp+30h+var_4], 1
0x886B7D: jz      short loc_886B91
0x886B7F: add     [eax+5Ch], ebp
0x886B82: mov     ecx, eax
0x886B84: add     eax, 5Ch ; '\'
0x886B87: cmp     dword ptr [eax], 0
0x886B8A: jnz     short loc_886B91
0x886B8C: call    sub_772560
0x886B91: mov     edi, [esp+30h+a3]
0x886B95: push    2
0x886B97: push    3
0x886B99: push    7
0x886B9B: push    edi
0x886B9C: call    sub_801110
0x886BA1: add     esp, 10h
0x886BA4: push    edi; a3
0x886BA5: push    7; a2
0x886BA7: mov     ecx, esi; this
0x886BA9: call    sub_760010
0x886BAE: mov     eax, [esp+30h+var_14]
0x886BB2: mov     eax, [eax+0DCh]
0x886BB8: push    eax; a2
0x886BB9: mov     ecx, esi; this
0x886BBB: call    sub_7AECB0
0x886BC0: push    38h ; '8'
0x886BC2: call    sub_883130
0x886BC7: add     esp, 4
0x886BCA: push    eax; a2
0x886BCB: mov     ecx, esi; this
0x886BCD: call    sub_7AEC60
0x886BD2: cmp     dword ptr [esi+30h], 0
0x886BD6: jnz     short loc_886BE0
0x886BD8: call    sub_772DF0
0x886BDD: mov     [esi+30h], eax
0x886BE0: mov     ecx, [esi+30h]
0x886BE3: push    0
0x886BE5: push    0
0x886BE7: push    1Bh
0x886BE9: call    sub_772CD0
0x886BEE: cmp     dword ptr [esi+30h], 0
0x886BF2: jnz     short loc_886BFC
0x886BF4: call    sub_772DF0
0x886BF9: mov     [esi+30h], eax
0x886BFC: mov     ecx, [esi+30h]
0x886BFF: push    0
0x886C01: push    0
0x886C03: push    0Fh
0x886C05: call    sub_772CD0
0x886C0A: cmp     dword ptr [esi+30h], 0
0x886C0E: jnz     short loc_886C18
0x886C10: call    sub_772DF0
0x886C15: mov     [esi+30h], eax
0x886C18: mov     ecx, [esi+30h]
0x886C1B: push    0
0x886C1D: push    ebx
0x886C1E: push    7
0x886C20: call    sub_772CD0
0x886C25: cmp     dword ptr [esi+30h], 0
0x886C29: jnz     short loc_886C33
0x886C2B: call    sub_772DF0
0x886C30: mov     [esi+30h], eax
0x886C33: mov     ecx, [esi+30h]
0x886C36: push    0
0x886C38: push    4
0x886C3A: push    17h
0x886C3C: call    sub_772CD0
0x886C41: cmp     dword ptr [esi+30h], 0
0x886C45: jnz     short loc_886C4F
0x886C47: call    sub_772DF0
0x886C4C: mov     [esi+30h], eax
0x886C4F: mov     ecx, [esi+30h]
0x886C52: push    0
0x886C54: push    ebx
0x886C55: push    0Eh
0x886C57: call    sub_772CD0
0x886C5C: cmp     dword ptr [esi+30h], 0
0x886C60: jnz     short loc_886C6A
0x886C62: call    sub_772DF0
0x886C67: mov     [esi+30h], eax
0x886C6A: mov     ecx, [esi+30h]
0x886C6D: push    0
0x886C6F: push    0
0x886C71: push    34h ; '4'
0x886C73: call    sub_772CD0
0x886C78: cmp     esi, ds:0B477D4h
0x886C7E: mov     ecx, ds:0B43D68h
0x886C84: mov     edx, ds:0B443F8h
0x886C8A: mov     eax, ds:0B436D8h
0x886C8F: mov     ds:0B43D94h, ecx
0x886C95: mov     ecx, ds:0B44A88h
0x886C9B: mov     ds:0B44424h, edx
0x886CA1: mov     ds:0B43704h, eax
0x886CA6: mov     ds:0B44AB4h, ecx
0x886CAC: jz      short loc_886CCB
0x886CAE: add     [esi+60h], ebp
0x886CB1: jnz     short loc_886CBA
0x886CB3: mov     ecx, esi
0x886CB5: call    sub_7604D0
0x886CBA: mov     esi, ds:0B477D4h
0x886CC0: test    esi, esi
0x886CC2: mov     [esp+30h+var_18], esi
0x886CC6: jz      short loc_886CCB
0x886CC8: add     [esi+60h], ebx
0x886CCB: mov     eax, [esi+18h]
0x886CCE: cmp     eax, 8
0x886CD1: jnb     loc_886F9D
0x886CD7: lea     edx, [esp+30h+var_10]
0x886CDB: push    edx
0x886CDC: call    sub_772630
0x886CE1: add     esp, 4
0x886CE4: push    eax
0x886CE5: lea     ecx, [esp+34h+a3]
0x886CE9: mov     byte ptr [esp+34h+var_4], 36h ; '6'
0x886CEE: call    sub_75FAE0
0x886CF3: mov     eax, [esp+30h+var_10]
0x886CF7: test    eax, eax
0x886CF9: mov     byte ptr [esp+30h+var_4], 1
0x886CFE: jz      short loc_886D12
0x886D00: add     [eax+5Ch], ebp
0x886D03: mov     ecx, eax
0x886D05: add     eax, 5Ch ; '\'
0x886D08: cmp     dword ptr [eax], 0
0x886D0B: jnz     short loc_886D12
0x886D0D: call    sub_772560
0x886D12: mov     edi, [esp+30h+a3]
0x886D16: push    2
0x886D18: push    ebx
0x886D19: push    0
0x886D1B: push    edi
0x886D1C: call    sub_801110
0x886D21: add     esp, 10h
0x886D24: push    edi; a3
0x886D25: push    0; a2
0x886D27: mov     ecx, esi; this
0x886D29: call    sub_760010
0x886D2E: lea     eax, [esp+30h+var_10]
0x886D32: push    eax
0x886D33: call    sub_772630
0x886D38: add     esp, 4
0x886D3B: push    eax
0x886D3C: lea     ecx, [esp+34h+a3]
0x886D40: mov     byte ptr [esp+34h+var_4], 37h ; '7'
0x886D45: call    sub_75FAE0
0x886D4A: mov     eax, [esp+30h+var_10]
0x886D4E: test    eax, eax
0x886D50: mov     byte ptr [esp+30h+var_4], 1
0x886D55: jz      short loc_886D69
0x886D57: add     [eax+5Ch], ebp
0x886D5A: mov     ecx, eax
0x886D5C: add     eax, 5Ch ; '\'
0x886D5F: cmp     dword ptr [eax], 0
0x886D62: jnz     short loc_886D69
0x886D64: call    sub_772560
0x886D69: mov     edi, [esp+30h+a3]
0x886D6D: push    2
0x886D6F: push    ebx
0x886D70: push    ebx
0x886D71: push    edi
0x886D72: call    sub_801110
0x886D77: add     esp, 10h
0x886D7A: push    edi; a3
0x886D7B: push    ebx; a2
0x886D7C: mov     ecx, esi; this
0x886D7E: call    sub_760010
0x886D83: lea     ecx, [esp+30h+var_10]
0x886D87: push    ecx
0x886D88: call    sub_772630
0x886D8D: add     esp, 4
0x886D90: push    eax
0x886D91: lea     ecx, [esp+34h+a3]
0x886D95: mov     byte ptr [esp+34h+var_4], 38h ; '8'
0x886D9A: call    sub_75FAE0
0x886D9F: mov     eax, [esp+30h+var_10]
0x886DA3: test    eax, eax
0x886DA5: mov     byte ptr [esp+30h+var_4], 1
0x886DAA: jz      short loc_886DBE
0x886DAC: add     [eax+5Ch], ebp
0x886DAF: mov     ecx, eax
0x886DB1: add     eax, 5Ch ; '\'
0x886DB4: cmp     dword ptr [eax], 0
0x886DB7: jnz     short loc_886DBE
0x886DB9: call    sub_772560
0x886DBE: mov     edi, [esp+30h+a3]
0x886DC2: push    2
0x886DC4: push    ebx
0x886DC5: push    2
0x886DC7: push    edi
0x886DC8: call    sub_801110
0x886DCD: add     esp, 10h
0x886DD0: push    edi; a3
0x886DD1: push    2; a2
0x886DD3: mov     ecx, esi; this
0x886DD5: call    sub_760010
0x886DDA: lea     edx, [esp+30h+var_10]
0x886DDE: push    edx
0x886DDF: call    sub_772630
0x886DE4: add     esp, 4
0x886DE7: push    eax
0x886DE8: lea     ecx, [esp+34h+a3]
0x886DEC: mov     byte ptr [esp+34h+var_4], 39h ; '9'
0x886DF1: call    sub_75FAE0
0x886DF6: mov     eax, [esp+30h+var_10]
0x886DFA: test    eax, eax
0x886DFC: mov     byte ptr [esp+30h+var_4], 1
0x886E01: jz      short loc_886E15
0x886E03: add     [eax+5Ch], ebp
0x886E06: mov     ecx, eax
0x886E08: add     eax, 5Ch ; '\'
0x886E0B: cmp     dword ptr [eax], 0
0x886E0E: jnz     short loc_886E15
0x886E10: call    sub_772560
0x886E15: mov     edi, [esp+30h+a3]
0x886E19: push    2
0x886E1B: push    ebx
0x886E1C: push    3
0x886E1E: push    edi
0x886E1F: call    sub_801110
0x886E24: add     esp, 10h
0x886E27: push    edi; a3
0x886E28: push    3; a2
0x886E2A: mov     ecx, esi; this
0x886E2C: call    sub_760010
0x886E31: lea     eax, [esp+30h+var_10]
0x886E35: push    eax
0x886E36: call    sub_772630
0x886E3B: add     esp, 4
0x886E3E: push    eax
0x886E3F: lea     ecx, [esp+34h+a3]
0x886E43: mov     byte ptr [esp+34h+var_4], 3Ah ; ':'
0x886E48: call    sub_75FAE0
0x886E4D: mov     eax, [esp+30h+var_10]
0x886E51: test    eax, eax
0x886E53: mov     byte ptr [esp+30h+var_4], 1
0x886E58: jz      short loc_886E6C
0x886E5A: add     [eax+5Ch], ebp
0x886E5D: mov     ecx, eax
0x886E5F: add     eax, 5Ch ; '\'
0x886E62: cmp     dword ptr [eax], 0
0x886E65: jnz     short loc_886E6C
0x886E67: call    sub_772560
0x886E6C: mov     edi, [esp+30h+a3]
0x886E70: push    2
0x886E72: push    ebx
0x886E73: push    4
0x886E75: push    edi
0x886E76: call    sub_801110
0x886E7B: add     esp, 10h
0x886E7E: push    edi; a3
0x886E7F: push    4; a2
0x886E81: mov     ecx, esi; this
0x886E83: call    sub_760010
0x886E88: lea     ecx, [esp+30h+var_10]
0x886E8C: push    ecx
0x886E8D: call    sub_772630
0x886E92: add     esp, 4
0x886E95: push    eax
0x886E96: lea     ecx, [esp+34h+a3]
0x886E9A: mov     byte ptr [esp+34h+var_4], 3Bh ; ';'
0x886E9F: call    sub_75FAE0
0x886EA4: mov     eax, [esp+30h+var_10]
0x886EA8: test    eax, eax
0x886EAA: mov     byte ptr [esp+30h+var_4], 1
0x886EAF: jz      short loc_886EC3
0x886EB1: add     [eax+5Ch], ebp
0x886EB4: mov     ecx, eax
0x886EB6: add     eax, 5Ch ; '\'
0x886EB9: cmp     dword ptr [eax], 0
0x886EBC: jnz     short loc_886EC3
0x886EBE: call    sub_772560
0x886EC3: mov     edi, [esp+30h+a3]
0x886EC7: push    2
0x886EC9: push    3
0x886ECB: push    5
0x886ECD: push    edi
0x886ECE: call    sub_801110
0x886ED3: mov     edx, ds:0B43110h
0x886ED9: add     esp, 10h
0x886EDC: push    edx; a2
0x886EDD: mov     ecx, edi; this
0x886EDF: call    sub_76C910
0x886EE4: push    edi; a3
0x886EE5: push    5; a2
0x886EE7: mov     ecx, esi; this
0x886EE9: call    sub_760010
0x886EEE: lea     eax, [esp+30h+var_10]
0x886EF2: push    eax
0x886EF3: call    sub_772630
0x886EF8: add     esp, 4
0x886EFB: push    eax
0x886EFC: lea     ecx, [esp+34h+a3]
0x886F00: mov     byte ptr [esp+34h+var_4], 3Ch ; '<'
0x886F05: call    sub_75FAE0
0x886F0A: mov     eax, [esp+30h+var_10]
0x886F0E: test    eax, eax
0x886F10: mov     byte ptr [esp+30h+var_4], 1
0x886F15: jz      short loc_886F29
0x886F17: add     [eax+5Ch], ebp
0x886F1A: mov     ecx, eax
0x886F1C: add     eax, 5Ch ; '\'
0x886F1F: cmp     dword ptr [eax], 0
0x886F22: jnz     short loc_886F29
0x886F24: call    sub_772560
0x886F29: mov     edi, [esp+30h+a3]
0x886F2D: push    2
0x886F2F: push    ebx
0x886F30: push    6
0x886F32: push    edi
0x886F33: call    sub_801110
0x886F38: add     esp, 10h
0x886F3B: push    edi; a3
0x886F3C: push    6; a2
0x886F3E: mov     ecx, esi; this
0x886F40: call    sub_760010
0x886F45: lea     ecx, [esp+30h+var_10]
0x886F49: push    ecx
0x886F4A: call    sub_772630
0x886F4F: add     esp, 4
0x886F52: push    eax
0x886F53: lea     ecx, [esp+34h+a3]
0x886F57: mov     byte ptr [esp+34h+var_4], 3Dh ; '='
0x886F5C: call    sub_75FAE0
0x886F61: mov     eax, [esp+30h+var_10]
0x886F65: test    eax, eax
0x886F67: mov     byte ptr [esp+30h+var_4], 1
0x886F6C: jz      short loc_886F80
0x886F6E: add     [eax+5Ch], ebp
0x886F71: mov     ecx, eax
0x886F73: add     eax, 5Ch ; '\'
0x886F76: cmp     dword ptr [eax], 0
0x886F79: jnz     short loc_886F80
0x886F7B: call    sub_772560
0x886F80: mov     edi, [esp+30h+a3]
0x886F84: push    2
0x886F86: push    3
0x886F88: push    7
0x886F8A: push    edi
0x886F8B: call    sub_801110
0x886F90: add     esp, 10h
0x886F93: push    edi; a3
0x886F94: push    7; a2
0x886F96: mov     ecx, esi; this
0x886F98: call    sub_760010
0x886F9D: mov     edx, [esp+30h+var_14]
0x886FA1: mov     eax, [edx+0E0h]
0x886FA7: push    eax; a2
0x886FA8: mov     ecx, esi; this
0x886FAA: call    sub_7AECB0
0x886FAF: push    3Bh ; ';'
0x886FB1: call    sub_883130
0x886FB6: add     esp, 4
0x886FB9: push    eax; a2
0x886FBA: mov     ecx, esi; this
0x886FBC: call    sub_7AEC60
0x886FC1: cmp     dword ptr [esi+30h], 0
0x886FC5: jnz     short loc_886FCF
0x886FC7: call    sub_772DF0
0x886FCC: mov     [esi+30h], eax
0x886FCF: mov     ecx, [esi+30h]
0x886FD2: push    0
0x886FD4: push    0
0x886FD6: push    1Bh
0x886FD8: call    sub_772CD0
0x886FDD: cmp     dword ptr [esi+30h], 0
0x886FE1: jnz     short loc_886FEB
0x886FE3: call    sub_772DF0
0x886FE8: mov     [esi+30h], eax
0x886FEB: mov     ecx, [esi+30h]
0x886FEE: push    0
0x886FF0: push    0
0x886FF2: push    0Fh
0x886FF4: call    sub_772CD0
0x886FF9: cmp     dword ptr [esi+30h], 0
0x886FFD: jnz     short loc_887007
0x886FFF: call    sub_772DF0
0x887004: mov     [esi+30h], eax
0x887007: mov     ecx, [esi+30h]
0x88700A: push    0
0x88700C: push    ebx
0x88700D: push    7
0x88700F: call    sub_772CD0
0x887014: cmp     dword ptr [esi+30h], 0
0x887018: jnz     short loc_887022
0x88701A: call    sub_772DF0
0x88701F: mov     [esi+30h], eax
0x887022: mov     ecx, [esi+30h]
0x887025: push    0
0x887027: push    4
0x887029: push    17h
0x88702B: call    sub_772CD0
0x887030: cmp     dword ptr [esi+30h], 0
0x887034: jnz     short loc_88703E
0x887036: call    sub_772DF0
0x88703B: mov     [esi+30h], eax
0x88703E: mov     ecx, [esi+30h]
0x887041: push    0
0x887043: push    ebx
0x887044: push    0Eh
0x887046: call    sub_772CD0
0x88704B: cmp     dword ptr [esi+30h], 0
0x88704F: jnz     short loc_887059
0x887051: call    sub_772DF0
0x887056: mov     [esi+30h], eax
0x887059: mov     ecx, [esi+30h]
0x88705C: push    0
0x88705E: push    0
0x887060: push    34h ; '4'
0x887062: call    sub_772CD0
0x887067: cmp     esi, ds:0B477D8h
0x88706D: mov     eax, ds:0B43D9Ch
0x887072: mov     ecx, ds:0B4442Ch
0x887078: mov     edx, ds:0B4370Ch
0x88707E: mov     ds:0B43DC8h, eax
0x887083: mov     eax, ds:0B44ABCh
0x887088: mov     ds:0B44458h, ecx
0x88708E: mov     ds:0B43738h, edx
0x887094: mov     ds:0B44AE8h, eax
0x887099: jz      short loc_8870B8
0x88709B: add     [esi+60h], ebp
0x88709E: jnz     short loc_8870A7
0x8870A0: mov     ecx, esi
0x8870A2: call    sub_7604D0
0x8870A7: mov     esi, ds:0B477D8h
0x8870AD: test    esi, esi
0x8870AF: mov     [esp+30h+var_18], esi
0x8870B3: jz      short loc_8870B8
0x8870B5: add     [esi+60h], ebx
0x8870B8: mov     eax, [esi+18h]
0x8870BB: cmp     eax, 8
0x8870BE: jnb     loc_88738A
0x8870C4: lea     ecx, [esp+30h+var_10]
0x8870C8: push    ecx
0x8870C9: call    sub_772630
0x8870CE: add     esp, 4
0x8870D1: push    eax
0x8870D2: lea     ecx, [esp+34h+a3]
0x8870D6: mov     byte ptr [esp+34h+var_4], 3Eh ; '>'
0x8870DB: call    sub_75FAE0
0x8870E0: mov     eax, [esp+30h+var_10]
0x8870E4: test    eax, eax
0x8870E6: mov     byte ptr [esp+30h+var_4], 1
0x8870EB: jz      short loc_8870FF
0x8870ED: add     [eax+5Ch], ebp
0x8870F0: mov     ecx, eax
0x8870F2: add     eax, 5Ch ; '\'
0x8870F5: cmp     dword ptr [eax], 0
0x8870F8: jnz     short loc_8870FF
0x8870FA: call    sub_772560
0x8870FF: mov     edi, [esp+30h+a3]
0x887103: push    2
0x887105: push    ebx
0x887106: push    0
0x887108: push    edi
0x887109: call    sub_801110
0x88710E: add     esp, 10h
0x887111: push    edi; a3
0x887112: push    0; a2
0x887114: mov     ecx, esi; this
0x887116: call    sub_760010
0x88711B: lea     edx, [esp+30h+var_10]
0x88711F: push    edx
0x887120: call    sub_772630
0x887125: add     esp, 4
0x887128: push    eax
0x887129: lea     ecx, [esp+34h+a3]
0x88712D: mov     byte ptr [esp+34h+var_4], 3Fh ; '?'
0x887132: call    sub_75FAE0
0x887137: mov     eax, [esp+30h+var_10]
0x88713B: test    eax, eax
0x88713D: mov     byte ptr [esp+30h+var_4], 1
0x887142: jz      short loc_887156
0x887144: add     [eax+5Ch], ebp
0x887147: mov     ecx, eax
0x887149: add     eax, 5Ch ; '\'
0x88714C: cmp     dword ptr [eax], 0
0x88714F: jnz     short loc_887156
0x887151: call    sub_772560
0x887156: mov     edi, [esp+30h+a3]
0x88715A: push    2
0x88715C: push    ebx
0x88715D: push    ebx
0x88715E: push    edi
0x88715F: call    sub_801110
0x887164: add     esp, 10h
0x887167: push    edi; a3
0x887168: push    ebx; a2
0x887169: mov     ecx, esi; this
0x88716B: call    sub_760010
0x887170: lea     eax, [esp+30h+var_10]
0x887174: push    eax
0x887175: call    sub_772630
0x88717A: add     esp, 4
0x88717D: push    eax
0x88717E: lea     ecx, [esp+34h+a3]
0x887182: mov     byte ptr [esp+34h+var_4], 40h ; '@'
0x887187: call    sub_75FAE0
0x88718C: mov     eax, [esp+30h+var_10]
0x887190: test    eax, eax
0x887192: mov     byte ptr [esp+30h+var_4], 1
0x887197: jz      short loc_8871AB
0x887199: add     [eax+5Ch], ebp
0x88719C: mov     ecx, eax
0x88719E: add     eax, 5Ch ; '\'
0x8871A1: cmp     dword ptr [eax], 0
0x8871A4: jnz     short loc_8871AB
0x8871A6: call    sub_772560
0x8871AB: mov     edi, [esp+30h+a3]
0x8871AF: push    2
0x8871B1: push    ebx
0x8871B2: push    2
0x8871B4: push    edi
0x8871B5: call    sub_801110
0x8871BA: add     esp, 10h
0x8871BD: push    edi; a3
0x8871BE: push    2; a2
0x8871C0: mov     ecx, esi; this
0x8871C2: call    sub_760010
0x8871C7: lea     ecx, [esp+30h+var_10]
0x8871CB: push    ecx
0x8871CC: call    sub_772630
0x8871D1: add     esp, 4
0x8871D4: push    eax
0x8871D5: lea     ecx, [esp+34h+a3]
0x8871D9: mov     byte ptr [esp+34h+var_4], 41h ; 'A'
0x8871DE: call    sub_75FAE0
0x8871E3: mov     eax, [esp+30h+var_10]
0x8871E7: test    eax, eax
0x8871E9: mov     byte ptr [esp+30h+var_4], 1
0x8871EE: jz      short loc_887202
0x8871F0: add     [eax+5Ch], ebp
0x8871F3: mov     ecx, eax
0x8871F5: add     eax, 5Ch ; '\'
0x8871F8: cmp     dword ptr [eax], 0
0x8871FB: jnz     short loc_887202
0x8871FD: call    sub_772560
0x887202: mov     edi, [esp+30h+a3]
0x887206: push    2
0x887208: push    ebx
0x887209: push    3
0x88720B: push    edi
0x88720C: call    sub_801110
0x887211: add     esp, 10h
0x887214: push    edi; a3
0x887215: push    3; a2
0x887217: mov     ecx, esi; this
0x887219: call    sub_760010
0x88721E: lea     edx, [esp+30h+var_10]
0x887222: push    edx
0x887223: call    sub_772630
0x887228: add     esp, 4
0x88722B: push    eax
0x88722C: lea     ecx, [esp+34h+a3]
0x887230: mov     byte ptr [esp+34h+var_4], 42h ; 'B'
0x887235: call    sub_75FAE0
0x88723A: mov     eax, [esp+30h+var_10]
0x88723E: test    eax, eax
0x887240: mov     byte ptr [esp+30h+var_4], 1
0x887245: jz      short loc_887259
0x887247: add     [eax+5Ch], ebp
0x88724A: mov     ecx, eax
0x88724C: add     eax, 5Ch ; '\'
0x88724F: cmp     dword ptr [eax], 0
0x887252: jnz     short loc_887259
0x887254: call    sub_772560
0x887259: mov     edi, [esp+30h+a3]
0x88725D: push    2
0x88725F: push    ebx
0x887260: push    4
0x887262: push    edi
0x887263: call    sub_801110
0x887268: add     esp, 10h
0x88726B: push    edi; a3
0x88726C: push    4; a2
0x88726E: mov     ecx, esi; this
0x887270: call    sub_760010
0x887275: lea     eax, [esp+30h+var_10]
0x887279: push    eax
0x88727A: call    sub_772630
0x88727F: add     esp, 4
0x887282: push    eax
0x887283: lea     ecx, [esp+34h+a3]
0x887287: mov     byte ptr [esp+34h+var_4], 43h ; 'C'
0x88728C: call    sub_75FAE0
0x887291: mov     eax, [esp+30h+var_10]
0x887295: test    eax, eax
0x887297: mov     byte ptr [esp+30h+var_4], 1
0x88729C: jz      short loc_8872B0
0x88729E: add     [eax+5Ch], ebp
0x8872A1: mov     ecx, eax
0x8872A3: add     eax, 5Ch ; '\'
0x8872A6: cmp     dword ptr [eax], 0
0x8872A9: jnz     short loc_8872B0
0x8872AB: call    sub_772560
0x8872B0: mov     edi, [esp+30h+a3]
0x8872B4: push    2
0x8872B6: push    3
0x8872B8: push    5
0x8872BA: push    edi
0x8872BB: call    sub_801110
0x8872C0: mov     ecx, ds:0B43110h
0x8872C6: add     esp, 10h
0x8872C9: push    ecx; a2
0x8872CA: mov     ecx, edi; this
0x8872CC: call    sub_76C910
0x8872D1: push    edi; a3
0x8872D2: push    5; a2
0x8872D4: mov     ecx, esi; this
0x8872D6: call    sub_760010
0x8872DB: lea     edx, [esp+30h+var_10]
0x8872DF: push    edx
0x8872E0: call    sub_772630
0x8872E5: add     esp, 4
0x8872E8: push    eax
0x8872E9: lea     ecx, [esp+34h+a3]
0x8872ED: mov     byte ptr [esp+34h+var_4], 44h ; 'D'
0x8872F2: call    sub_75FAE0
0x8872F7: mov     eax, [esp+30h+var_10]
0x8872FB: test    eax, eax
0x8872FD: mov     byte ptr [esp+30h+var_4], 1
0x887302: jz      short loc_887316
0x887304: add     [eax+5Ch], ebp
0x887307: mov     ecx, eax
0x887309: add     eax, 5Ch ; '\'
0x88730C: cmp     dword ptr [eax], 0
0x88730F: jnz     short loc_887316
0x887311: call    sub_772560
0x887316: mov     edi, [esp+30h+a3]
0x88731A: push    2
0x88731C: push    ebx
0x88731D: push    6
0x88731F: push    edi
0x887320: call    sub_801110
0x887325: add     esp, 10h
0x887328: push    edi; a3
0x887329: push    6; a2
0x88732B: mov     ecx, esi; this
0x88732D: call    sub_760010
0x887332: lea     eax, [esp+30h+var_10]
0x887336: push    eax
0x887337: call    sub_772630
0x88733C: add     esp, 4
0x88733F: push    eax
0x887340: lea     ecx, [esp+34h+a3]
0x887344: mov     byte ptr [esp+34h+var_4], 45h ; 'E'
0x887349: call    sub_75FAE0
0x88734E: mov     eax, [esp+30h+var_10]
0x887352: test    eax, eax
0x887354: mov     byte ptr [esp+30h+var_4], 1
0x887359: jz      short loc_88736D
0x88735B: add     [eax+5Ch], ebp
0x88735E: mov     ecx, eax
0x887360: add     eax, 5Ch ; '\'
0x887363: cmp     dword ptr [eax], 0
0x887366: jnz     short loc_88736D
0x887368: call    sub_772560
0x88736D: mov     edi, [esp+30h+a3]
0x887371: push    2
0x887373: push    3
0x887375: push    7
0x887377: push    edi
0x887378: call    sub_801110
0x88737D: add     esp, 10h
0x887380: push    edi; a3
0x887381: push    7; a2
0x887383: mov     ecx, esi; this
0x887385: call    sub_760010
0x88738A: mov     ecx, [esp+30h+var_14]
0x88738E: mov     eax, [ecx+0E4h]
0x887394: push    eax; a2
0x887395: mov     ecx, esi; this
0x887397: call    sub_7AECB0
0x88739C: push    3Eh ; '>'
0x88739E: call    sub_883130
0x8873A3: add     esp, 4
0x8873A6: push    eax; a2
0x8873A7: mov     ecx, esi; this
0x8873A9: call    sub_7AEC60
0x8873AE: cmp     dword ptr [esi+30h], 0
0x8873B2: jnz     short loc_8873BC
0x8873B4: call    sub_772DF0
0x8873B9: mov     [esi+30h], eax
0x8873BC: mov     ecx, [esi+30h]
0x8873BF: push    0
0x8873C1: push    0
0x8873C3: push    1Bh
0x8873C5: call    sub_772CD0
0x8873CA: cmp     dword ptr [esi+30h], 0
0x8873CE: jnz     short loc_8873D8
0x8873D0: call    sub_772DF0
0x8873D5: mov     [esi+30h], eax
0x8873D8: mov     ecx, [esi+30h]
0x8873DB: push    0
0x8873DD: push    0
0x8873DF: push    0Fh
0x8873E1: call    sub_772CD0
0x8873E6: cmp     dword ptr [esi+30h], 0
0x8873EA: jnz     short loc_8873F4
0x8873EC: call    sub_772DF0
0x8873F1: mov     [esi+30h], eax
0x8873F4: mov     ecx, [esi+30h]
0x8873F7: push    0
0x8873F9: push    ebx
0x8873FA: push    7
0x8873FC: call    sub_772CD0
0x887401: cmp     dword ptr [esi+30h], 0
0x887405: jnz     short loc_88740F
0x887407: call    sub_772DF0
0x88740C: mov     [esi+30h], eax
0x88740F: mov     ecx, [esi+30h]
0x887412: push    0
0x887414: push    4
0x887416: push    17h
0x887418: call    sub_772CD0
0x88741D: cmp     dword ptr [esi+30h], 0
0x887421: jnz     short loc_88742B
0x887423: call    sub_772DF0
0x887428: mov     [esi+30h], eax
0x88742B: mov     ecx, [esi+30h]
0x88742E: push    0
0x887430: push    ebx
0x887431: push    0Eh
0x887433: call    sub_772CD0
0x887438: cmp     dword ptr [esi+30h], 0
0x88743C: jnz     short loc_887446
0x88743E: call    sub_772DF0
0x887443: mov     [esi+30h], eax
0x887446: mov     ecx, [esi+30h]
0x887449: push    0
0x88744B: push    0
0x88744D: push    34h ; '4'
0x88744F: call    sub_772CD0
0x887454: cmp     esi, ds:0B477DCh
0x88745A: mov     edx, ds:0B43DD0h
0x887460: mov     eax, ds:0B44460h
0x887465: mov     ecx, ds:0B43740h
0x88746B: mov     ds:0B43E00h, edx
0x887471: mov     edx, ds:0B44AF0h
0x887477: mov     ds:0B44490h, eax
0x88747C: mov     ds:0B43770h, ecx
0x887482: mov     ds:0B44B20h, edx
0x887488: jz      short loc_8874A7
0x88748A: add     [esi+60h], ebp
0x88748D: jnz     short loc_887496
0x88748F: mov     ecx, esi
0x887491: call    sub_7604D0
0x887496: mov     esi, ds:0B477DCh
0x88749C: test    esi, esi
0x88749E: mov     [esp+30h+var_18], esi
0x8874A2: jz      short loc_8874A7
0x8874A4: add     [esi+60h], ebx
0x8874A7: mov     eax, [esi+18h]
0x8874AA: cmp     eax, 8
0x8874AD: jnb     loc_887778
0x8874B3: lea     eax, [esp+30h+var_10]
0x8874B7: push    eax
0x8874B8: call    sub_772630
0x8874BD: add     esp, 4
0x8874C0: push    eax
0x8874C1: lea     ecx, [esp+34h+a3]
0x8874C5: mov     byte ptr [esp+34h+var_4], 46h ; 'F'
0x8874CA: call    sub_75FAE0
0x8874CF: mov     eax, [esp+30h+var_10]
0x8874D3: test    eax, eax
0x8874D5: mov     byte ptr [esp+30h+var_4], 1
0x8874DA: jz      short loc_8874EE
0x8874DC: add     [eax+5Ch], ebp
0x8874DF: mov     ecx, eax
0x8874E1: add     eax, 5Ch ; '\'
0x8874E4: cmp     dword ptr [eax], 0
0x8874E7: jnz     short loc_8874EE
0x8874E9: call    sub_772560
0x8874EE: mov     edi, [esp+30h+a3]
0x8874F2: push    2
0x8874F4: push    ebx
0x8874F5: push    0
0x8874F7: push    edi
0x8874F8: call    sub_801110
0x8874FD: add     esp, 10h
0x887500: push    edi; a3
0x887501: push    0; a2
0x887503: mov     ecx, esi; this
0x887505: call    sub_760010
0x88750A: lea     ecx, [esp+30h+var_10]
0x88750E: push    ecx
0x88750F: call    sub_772630
0x887514: add     esp, 4
0x887517: push    eax
0x887518: lea     ecx, [esp+34h+a3]
0x88751C: mov     byte ptr [esp+34h+var_4], 47h ; 'G'
0x887521: call    sub_75FAE0
0x887526: mov     eax, [esp+30h+var_10]
0x88752A: test    eax, eax
0x88752C: mov     byte ptr [esp+30h+var_4], 1
0x887531: jz      short loc_887545
0x887533: add     [eax+5Ch], ebp
0x887536: mov     ecx, eax
0x887538: add     eax, 5Ch ; '\'
0x88753B: cmp     dword ptr [eax], 0
0x88753E: jnz     short loc_887545
0x887540: call    sub_772560
0x887545: mov     edi, [esp+30h+a3]
0x887549: push    2
0x88754B: push    ebx
0x88754C: push    ebx
0x88754D: push    edi
0x88754E: call    sub_801110
0x887553: add     esp, 10h
0x887556: push    edi; a3
0x887557: push    ebx; a2
0x887558: mov     ecx, esi; this
0x88755A: call    sub_760010
0x88755F: lea     edx, [esp+30h+var_10]
0x887563: push    edx
0x887564: call    sub_772630
0x887569: add     esp, 4
0x88756C: push    eax
0x88756D: lea     ecx, [esp+34h+a3]
0x887571: mov     byte ptr [esp+34h+var_4], 48h ; 'H'
0x887576: call    sub_75FAE0
0x88757B: mov     eax, [esp+30h+var_10]
0x88757F: test    eax, eax
0x887581: mov     byte ptr [esp+30h+var_4], 1
0x887586: jz      short loc_88759A
0x887588: add     [eax+5Ch], ebp
0x88758B: mov     ecx, eax
0x88758D: add     eax, 5Ch ; '\'
0x887590: cmp     dword ptr [eax], 0
0x887593: jnz     short loc_88759A
0x887595: call    sub_772560
0x88759A: mov     edi, [esp+30h+a3]
0x88759E: push    2
0x8875A0: push    ebx
0x8875A1: push    2
0x8875A3: push    edi
0x8875A4: call    sub_801110
0x8875A9: add     esp, 10h
0x8875AC: push    edi; a3
0x8875AD: push    2; a2
0x8875AF: mov     ecx, esi; this
0x8875B1: call    sub_760010
0x8875B6: lea     eax, [esp+30h+var_10]
0x8875BA: push    eax
0x8875BB: call    sub_772630
0x8875C0: add     esp, 4
0x8875C3: push    eax
0x8875C4: lea     ecx, [esp+34h+a3]
0x8875C8: mov     byte ptr [esp+34h+var_4], 49h ; 'I'
0x8875CD: call    sub_75FAE0
0x8875D2: mov     eax, [esp+30h+var_10]
0x8875D6: test    eax, eax
0x8875D8: mov     byte ptr [esp+30h+var_4], 1
0x8875DD: jz      short loc_8875F1
0x8875DF: add     [eax+5Ch], ebp
0x8875E2: mov     ecx, eax
0x8875E4: add     eax, 5Ch ; '\'
0x8875E7: cmp     dword ptr [eax], 0
0x8875EA: jnz     short loc_8875F1
0x8875EC: call    sub_772560
0x8875F1: mov     edi, [esp+30h+a3]
0x8875F5: push    2
0x8875F7: push    ebx
0x8875F8: push    3
0x8875FA: push    edi
0x8875FB: call    sub_801110
0x887600: add     esp, 10h
0x887603: push    edi; a3
0x887604: push    3; a2
0x887606: mov     ecx, esi; this
0x887608: call    sub_760010
0x88760D: lea     ecx, [esp+30h+var_10]
0x887611: push    ecx
0x887612: call    sub_772630
0x887617: add     esp, 4
0x88761A: push    eax
0x88761B: lea     ecx, [esp+34h+a3]
0x88761F: mov     byte ptr [esp+34h+var_4], 4Ah ; 'J'
0x887624: call    sub_75FAE0
0x887629: mov     eax, [esp+30h+var_10]
0x88762D: test    eax, eax
0x88762F: mov     byte ptr [esp+30h+var_4], 1
0x887634: jz      short loc_887648
0x887636: add     [eax+5Ch], ebp
0x887639: mov     ecx, eax
0x88763B: add     eax, 5Ch ; '\'
0x88763E: cmp     dword ptr [eax], 0
0x887641: jnz     short loc_887648
0x887643: call    sub_772560
0x887648: mov     edi, [esp+30h+a3]
0x88764C: push    2
0x88764E: push    ebx
0x88764F: push    4
0x887651: push    edi
0x887652: call    sub_801110
0x887657: add     esp, 10h
0x88765A: push    edi; a3
0x88765B: push    4; a2
0x88765D: mov     ecx, esi; this
0x88765F: call    sub_760010
0x887664: lea     edx, [esp+30h+var_10]
0x887668: push    edx
0x887669: call    sub_772630
0x88766E: add     esp, 4
0x887671: push    eax
0x887672: lea     ecx, [esp+34h+a3]
0x887676: mov     byte ptr [esp+34h+var_4], 4Bh ; 'K'
0x88767B: call    sub_75FAE0
0x887680: mov     eax, [esp+30h+var_10]
0x887684: test    eax, eax
0x887686: mov     byte ptr [esp+30h+var_4], 1
0x88768B: jz      short loc_88769F
0x88768D: add     [eax+5Ch], ebp
0x887690: mov     ecx, eax
0x887692: add     eax, 5Ch ; '\'
0x887695: cmp     dword ptr [eax], 0
0x887698: jnz     short loc_88769F
0x88769A: call    sub_772560
0x88769F: mov     edi, [esp+30h+a3]
0x8876A3: push    2
0x8876A5: push    3
0x8876A7: push    5
0x8876A9: push    edi
0x8876AA: call    sub_801110
0x8876AF: mov     eax, ds:0B43110h
0x8876B4: add     esp, 10h
0x8876B7: push    eax; a2
0x8876B8: mov     ecx, edi; this
0x8876BA: call    sub_76C910
0x8876BF: push    edi; a3
0x8876C0: push    5; a2
0x8876C2: mov     ecx, esi; this
0x8876C4: call    sub_760010
0x8876C9: lea     ecx, [esp+30h+var_10]
0x8876CD: push    ecx
0x8876CE: call    sub_772630
0x8876D3: add     esp, 4
0x8876D6: push    eax
0x8876D7: lea     ecx, [esp+34h+a3]
0x8876DB: mov     byte ptr [esp+34h+var_4], 4Ch ; 'L'
0x8876E0: call    sub_75FAE0
0x8876E5: mov     eax, [esp+30h+var_10]
0x8876E9: test    eax, eax
0x8876EB: mov     byte ptr [esp+30h+var_4], 1
0x8876F0: jz      short loc_887704
0x8876F2: add     [eax+5Ch], ebp
0x8876F5: mov     ecx, eax
0x8876F7: add     eax, 5Ch ; '\'
0x8876FA: cmp     dword ptr [eax], 0
0x8876FD: jnz     short loc_887704
0x8876FF: call    sub_772560
0x887704: mov     edi, [esp+30h+a3]
0x887708: push    2
0x88770A: push    ebx
0x88770B: push    6
0x88770D: push    edi
0x88770E: call    sub_801110
0x887713: add     esp, 10h
0x887716: push    edi; a3
0x887717: push    6; a2
0x887719: mov     ecx, esi; this
0x88771B: call    sub_760010
0x887720: lea     edx, [esp+30h+var_10]
0x887724: push    edx
0x887725: call    sub_772630
0x88772A: add     esp, 4
0x88772D: push    eax
0x88772E: lea     ecx, [esp+34h+a3]
0x887732: mov     byte ptr [esp+34h+var_4], 4Dh ; 'M'
0x887737: call    sub_75FAE0
0x88773C: mov     eax, [esp+30h+var_10]
0x887740: test    eax, eax
0x887742: mov     byte ptr [esp+30h+var_4], 1
0x887747: jz      short loc_88775B
0x887749: add     [eax+5Ch], ebp
0x88774C: mov     ecx, eax
0x88774E: add     eax, 5Ch ; '\'
0x887751: cmp     dword ptr [eax], 0
0x887754: jnz     short loc_88775B
0x887756: call    sub_772560
0x88775B: mov     edi, [esp+30h+a3]
0x88775F: push    2
0x887761: push    3
0x887763: push    7
0x887765: push    edi
0x887766: call    sub_801110
0x88776B: add     esp, 10h
0x88776E: push    edi; a3
0x88776F: push    7; a2
0x887771: mov     ecx, esi; this
0x887773: call    sub_760010
0x887778: mov     eax, [esp+30h+var_14]
0x88777C: mov     eax, [eax+0E8h]
0x887782: push    eax; a2
0x887783: mov     ecx, esi; this
0x887785: call    sub_7AECB0
0x88778A: push    41h ; 'A'
0x88778C: call    sub_883130
0x887791: add     esp, 4
0x887794: push    eax; a2
0x887795: mov     ecx, esi; this
0x887797: call    sub_7AEC60
0x88779C: cmp     dword ptr [esi+30h], 0
0x8877A0: jnz     short loc_8877AA
0x8877A2: call    sub_772DF0
0x8877A7: mov     [esi+30h], eax
0x8877AA: mov     ecx, [esi+30h]
0x8877AD: push    0
0x8877AF: push    0
0x8877B1: push    1Bh
0x8877B3: call    sub_772CD0
0x8877B8: cmp     dword ptr [esi+30h], 0
0x8877BC: jnz     short loc_8877C6
0x8877BE: call    sub_772DF0
0x8877C3: mov     [esi+30h], eax
0x8877C6: mov     ecx, [esi+30h]
0x8877C9: push    0
0x8877CB: push    0
0x8877CD: push    0Fh
0x8877CF: call    sub_772CD0
0x8877D4: cmp     dword ptr [esi+30h], 0
0x8877D8: jnz     short loc_8877E2
0x8877DA: call    sub_772DF0
0x8877DF: mov     [esi+30h], eax
0x8877E2: mov     ecx, [esi+30h]
0x8877E5: push    0
0x8877E7: push    ebx
0x8877E8: push    7
0x8877EA: call    sub_772CD0
0x8877EF: cmp     dword ptr [esi+30h], 0
0x8877F3: jnz     short loc_8877FD
0x8877F5: call    sub_772DF0
0x8877FA: mov     [esi+30h], eax
0x8877FD: mov     ecx, [esi+30h]
0x887800: push    0
0x887802: push    4
0x887804: push    17h
0x887806: call    sub_772CD0
0x88780B: cmp     dword ptr [esi+30h], 0
0x88780F: jnz     short loc_887819
0x887811: call    sub_772DF0
0x887816: mov     [esi+30h], eax
0x887819: mov     ecx, [esi+30h]
0x88781C: push    0
0x88781E: push    ebx
0x88781F: push    0Eh
0x887821: call    sub_772CD0
0x887826: cmp     dword ptr [esi+30h], 0
0x88782A: jnz     short loc_887834
0x88782C: call    sub_772DF0
0x887831: mov     [esi+30h], eax
0x887834: mov     ecx, [esi+30h]
0x887837: push    0
0x887839: push    0
0x88783B: push    34h ; '4'
0x88783D: call    sub_772CD0
0x887842: cmp     esi, ds:0B477E0h
0x887848: mov     ecx, ds:0B43E04h
0x88784E: mov     edx, ds:0B44494h
0x887854: mov     eax, ds:0B43774h
0x887859: mov     ds:0B43E34h, ecx
0x88785F: mov     ecx, ds:0B44B24h
0x887865: mov     ds:0B444C4h, edx
0x88786B: mov     ds:0B437A4h, eax
0x887870: mov     ds:0B44B54h, ecx
0x887876: jz      short loc_887895
0x887878: add     [esi+60h], ebp
0x88787B: jnz     short loc_887884
0x88787D: mov     ecx, esi
0x88787F: call    sub_7604D0
0x887884: mov     esi, ds:0B477E0h
0x88788A: test    esi, esi
0x88788C: mov     [esp+30h+var_18], esi
0x887890: jz      short loc_887895
0x887892: add     [esi+60h], ebx
0x887895: mov     eax, [esi+18h]
0x887898: cmp     eax, 8
0x88789B: jnb     loc_887B67
0x8878A1: lea     edx, [esp+30h+var_10]
0x8878A5: push    edx
0x8878A6: call    sub_772630
0x8878AB: add     esp, 4
0x8878AE: push    eax
0x8878AF: lea     ecx, [esp+34h+a3]
0x8878B3: mov     byte ptr [esp+34h+var_4], 4Eh ; 'N'
0x8878B8: call    sub_75FAE0
0x8878BD: mov     eax, [esp+30h+var_10]
0x8878C1: test    eax, eax
0x8878C3: mov     byte ptr [esp+30h+var_4], 1
0x8878C8: jz      short loc_8878DC
0x8878CA: add     [eax+5Ch], ebp
0x8878CD: mov     ecx, eax
0x8878CF: add     eax, 5Ch ; '\'
0x8878D2: cmp     dword ptr [eax], 0
0x8878D5: jnz     short loc_8878DC
0x8878D7: call    sub_772560
0x8878DC: mov     edi, [esp+30h+a3]
0x8878E0: push    2
0x8878E2: push    ebx
0x8878E3: push    0
0x8878E5: push    edi
0x8878E6: call    sub_801110
0x8878EB: add     esp, 10h
0x8878EE: push    edi; a3
0x8878EF: push    0; a2
0x8878F1: mov     ecx, esi; this
0x8878F3: call    sub_760010
0x8878F8: lea     eax, [esp+30h+var_10]
0x8878FC: push    eax
0x8878FD: call    sub_772630
0x887902: add     esp, 4
0x887905: push    eax
0x887906: lea     ecx, [esp+34h+a3]
0x88790A: mov     byte ptr [esp+34h+var_4], 4Fh ; 'O'
0x88790F: call    sub_75FAE0
0x887914: mov     eax, [esp+30h+var_10]
0x887918: test    eax, eax
0x88791A: mov     byte ptr [esp+30h+var_4], 1
0x88791F: jz      short loc_887933
0x887921: add     [eax+5Ch], ebp
0x887924: mov     ecx, eax
0x887926: add     eax, 5Ch ; '\'
0x887929: cmp     dword ptr [eax], 0
0x88792C: jnz     short loc_887933
0x88792E: call    sub_772560
0x887933: mov     edi, [esp+30h+a3]
0x887937: push    2
0x887939: push    ebx
0x88793A: push    ebx
0x88793B: push    edi
0x88793C: call    sub_801110
0x887941: add     esp, 10h
0x887944: push    edi; a3
0x887945: push    ebx; a2
0x887946: mov     ecx, esi; this
0x887948: call    sub_760010
0x88794D: lea     ecx, [esp+30h+var_10]
0x887951: push    ecx
0x887952: call    sub_772630
0x887957: add     esp, 4
0x88795A: push    eax
0x88795B: lea     ecx, [esp+34h+a3]
0x88795F: mov     byte ptr [esp+34h+var_4], 50h ; 'P'
0x887964: call    sub_75FAE0
0x887969: mov     eax, [esp+30h+var_10]
0x88796D: test    eax, eax
0x88796F: mov     byte ptr [esp+30h+var_4], 1
0x887974: jz      short loc_887988
0x887976: add     [eax+5Ch], ebp
0x887979: mov     ecx, eax
0x88797B: add     eax, 5Ch ; '\'
0x88797E: cmp     dword ptr [eax], 0
0x887981: jnz     short loc_887988
0x887983: call    sub_772560
0x887988: mov     edi, [esp+30h+a3]
0x88798C: push    2
0x88798E: push    ebx
0x88798F: push    2
0x887991: push    edi
0x887992: call    sub_801110
0x887997: add     esp, 10h
0x88799A: push    edi; a3
0x88799B: push    2; a2
0x88799D: mov     ecx, esi; this
0x88799F: call    sub_760010
0x8879A4: lea     edx, [esp+30h+var_10]
0x8879A8: push    edx
0x8879A9: call    sub_772630
0x8879AE: add     esp, 4
0x8879B1: push    eax
0x8879B2: lea     ecx, [esp+34h+a3]
0x8879B6: mov     byte ptr [esp+34h+var_4], 51h ; 'Q'
0x8879BB: call    sub_75FAE0
0x8879C0: mov     eax, [esp+30h+var_10]
0x8879C4: test    eax, eax
0x8879C6: mov     byte ptr [esp+30h+var_4], 1
0x8879CB: jz      short loc_8879DF
0x8879CD: add     [eax+5Ch], ebp
0x8879D0: mov     ecx, eax
0x8879D2: add     eax, 5Ch ; '\'
0x8879D5: cmp     dword ptr [eax], 0
0x8879D8: jnz     short loc_8879DF
0x8879DA: call    sub_772560
0x8879DF: mov     edi, [esp+30h+a3]
0x8879E3: push    2
0x8879E5: push    ebx
0x8879E6: push    3
0x8879E8: push    edi
0x8879E9: call    sub_801110
0x8879EE: add     esp, 10h
0x8879F1: push    edi; a3
0x8879F2: push    3; a2
0x8879F4: mov     ecx, esi; this
0x8879F6: call    sub_760010
0x8879FB: lea     eax, [esp+30h+var_10]
0x8879FF: push    eax
0x887A00: call    sub_772630
0x887A05: add     esp, 4
0x887A08: push    eax
0x887A09: lea     ecx, [esp+34h+a3]
0x887A0D: mov     byte ptr [esp+34h+var_4], 52h ; 'R'
0x887A12: call    sub_75FAE0
0x887A17: mov     eax, [esp+30h+var_10]
0x887A1B: test    eax, eax
0x887A1D: mov     byte ptr [esp+30h+var_4], 1
0x887A22: jz      short loc_887A36
0x887A24: add     [eax+5Ch], ebp
0x887A27: mov     ecx, eax
0x887A29: add     eax, 5Ch ; '\'
0x887A2C: cmp     dword ptr [eax], 0
0x887A2F: jnz     short loc_887A36
0x887A31: call    sub_772560
0x887A36: mov     edi, [esp+30h+a3]
0x887A3A: push    2
0x887A3C: push    ebx
0x887A3D: push    4
0x887A3F: push    edi
0x887A40: call    sub_801110
0x887A45: add     esp, 10h
0x887A48: push    edi; a3
0x887A49: push    4; a2
0x887A4B: mov     ecx, esi; this
0x887A4D: call    sub_760010
0x887A52: lea     ecx, [esp+30h+var_10]
0x887A56: push    ecx
0x887A57: call    sub_772630
0x887A5C: add     esp, 4
0x887A5F: push    eax
0x887A60: lea     ecx, [esp+34h+a3]
0x887A64: mov     byte ptr [esp+34h+var_4], 53h ; 'S'
0x887A69: call    sub_75FAE0
0x887A6E: mov     eax, [esp+30h+var_10]
0x887A72: test    eax, eax
0x887A74: mov     byte ptr [esp+30h+var_4], 1
0x887A79: jz      short loc_887A8D
0x887A7B: add     [eax+5Ch], ebp
0x887A7E: mov     ecx, eax
0x887A80: add     eax, 5Ch ; '\'
0x887A83: cmp     dword ptr [eax], 0
0x887A86: jnz     short loc_887A8D
0x887A88: call    sub_772560
0x887A8D: mov     edi, [esp+30h+a3]
0x887A91: push    2
0x887A93: push    3
0x887A95: push    5
0x887A97: push    edi
0x887A98: call    sub_801110
0x887A9D: mov     edx, ds:0B43110h
0x887AA3: add     esp, 10h
0x887AA6: push    edx; a2
0x887AA7: mov     ecx, edi; this
0x887AA9: call    sub_76C910
0x887AAE: push    edi; a3
0x887AAF: push    5; a2
0x887AB1: mov     ecx, esi; this
0x887AB3: call    sub_760010
0x887AB8: lea     eax, [esp+30h+var_10]
0x887ABC: push    eax
0x887ABD: call    sub_772630
0x887AC2: add     esp, 4
0x887AC5: push    eax
0x887AC6: lea     ecx, [esp+34h+a3]
0x887ACA: mov     byte ptr [esp+34h+var_4], 54h ; 'T'
0x887ACF: call    sub_75FAE0
0x887AD4: mov     eax, [esp+30h+var_10]
0x887AD8: test    eax, eax
0x887ADA: mov     byte ptr [esp+30h+var_4], 1
0x887ADF: jz      short loc_887AF3
0x887AE1: add     [eax+5Ch], ebp
0x887AE4: mov     ecx, eax
0x887AE6: add     eax, 5Ch ; '\'
0x887AE9: cmp     dword ptr [eax], 0
0x887AEC: jnz     short loc_887AF3
0x887AEE: call    sub_772560
0x887AF3: mov     edi, [esp+30h+a3]
0x887AF7: push    2
0x887AF9: push    ebx
0x887AFA: push    6
0x887AFC: push    edi
0x887AFD: call    sub_801110
0x887B02: add     esp, 10h
0x887B05: push    edi; a3
0x887B06: push    6; a2
0x887B08: mov     ecx, esi; this
0x887B0A: call    sub_760010
0x887B0F: lea     ecx, [esp+30h+var_10]
0x887B13: push    ecx
0x887B14: call    sub_772630
0x887B19: add     esp, 4
0x887B1C: push    eax
0x887B1D: lea     ecx, [esp+34h+a3]
0x887B21: mov     byte ptr [esp+34h+var_4], 55h ; 'U'
0x887B26: call    sub_75FAE0
0x887B2B: mov     eax, [esp+30h+var_10]
0x887B2F: test    eax, eax
0x887B31: mov     byte ptr [esp+30h+var_4], 1
0x887B36: jz      short loc_887B4A
0x887B38: add     [eax+5Ch], ebp
0x887B3B: mov     ecx, eax
0x887B3D: add     eax, 5Ch ; '\'
0x887B40: cmp     dword ptr [eax], 0
0x887B43: jnz     short loc_887B4A
0x887B45: call    sub_772560
0x887B4A: mov     edi, [esp+30h+a3]
0x887B4E: push    2
0x887B50: push    3
0x887B52: push    7
0x887B54: push    edi
0x887B55: call    sub_801110
0x887B5A: add     esp, 10h
0x887B5D: push    edi; a3
0x887B5E: push    7; a2
0x887B60: mov     ecx, esi; this
0x887B62: call    sub_760010
0x887B67: mov     edx, [esp+30h+var_14]
0x887B6B: mov     eax, [edx+0ECh]
0x887B71: push    eax; a2
0x887B72: mov     ecx, esi; this
0x887B74: call    sub_7AECB0
0x887B79: push    44h ; 'D'
0x887B7B: call    sub_883130
0x887B80: add     esp, 4
0x887B83: push    eax; a2
0x887B84: mov     ecx, esi; this
0x887B86: call    sub_7AEC60
0x887B8B: cmp     dword ptr [esi+30h], 0
0x887B8F: jnz     short loc_887B99
0x887B91: call    sub_772DF0
0x887B96: mov     [esi+30h], eax
0x887B99: mov     ecx, [esi+30h]
0x887B9C: push    0
0x887B9E: push    0
0x887BA0: push    1Bh
0x887BA2: call    sub_772CD0
0x887BA7: cmp     dword ptr [esi+30h], 0
0x887BAB: jnz     short loc_887BB5
0x887BAD: call    sub_772DF0
0x887BB2: mov     [esi+30h], eax
0x887BB5: mov     ecx, [esi+30h]
0x887BB8: push    0
0x887BBA: push    0
0x887BBC: push    0Fh
0x887BBE: call    sub_772CD0
0x887BC3: cmp     dword ptr [esi+30h], 0
0x887BC7: jnz     short loc_887BD1
0x887BC9: call    sub_772DF0
0x887BCE: mov     [esi+30h], eax
0x887BD1: mov     ecx, [esi+30h]
0x887BD4: push    0
0x887BD6: push    ebx
0x887BD7: push    7
0x887BD9: call    sub_772CD0
0x887BDE: cmp     dword ptr [esi+30h], 0
0x887BE2: jnz     short loc_887BEC
0x887BE4: call    sub_772DF0
0x887BE9: mov     [esi+30h], eax
0x887BEC: mov     ecx, [esi+30h]
0x887BEF: push    0
0x887BF1: push    4
0x887BF3: push    17h
0x887BF5: call    sub_772CD0
0x887BFA: cmp     dword ptr [esi+30h], 0
0x887BFE: jnz     short loc_887C08
0x887C00: call    sub_772DF0
0x887C05: mov     [esi+30h], eax
0x887C08: mov     ecx, [esi+30h]
0x887C0B: push    0
0x887C0D: push    ebx
0x887C0E: push    0Eh
0x887C10: call    sub_772CD0
0x887C15: cmp     dword ptr [esi+30h], 0
0x887C19: jnz     short loc_887C23
0x887C1B: call    sub_772DF0
0x887C20: mov     [esi+30h], eax
0x887C23: mov     ecx, [esi+30h]
0x887C26: push    0
0x887C28: push    0
0x887C2A: push    34h ; '4'
0x887C2C: call    sub_772CD0
0x887C31: cmp     esi, ds:0B477E4h
0x887C37: mov     eax, ds:0B43E38h
0x887C3C: mov     ecx, ds:0B444C8h
0x887C42: mov     edx, ds:0B437A8h
0x887C48: mov     ds:0B43E68h, eax
0x887C4D: mov     eax, ds:0B44B58h
0x887C52: mov     ds:0B444F8h, ecx
0x887C58: mov     ds:0B437D8h, edx
0x887C5E: mov     ds:0B44B88h, eax
0x887C63: jz      short loc_887C82
0x887C65: add     [esi+60h], ebp
0x887C68: jnz     short loc_887C71
0x887C6A: mov     ecx, esi
0x887C6C: call    sub_7604D0
0x887C71: mov     esi, ds:0B477E4h
0x887C77: test    esi, esi
0x887C79: mov     [esp+30h+var_18], esi
0x887C7D: jz      short loc_887C82
0x887C7F: add     [esi+60h], ebx
0x887C82: mov     eax, [esi+18h]
0x887C85: cmp     eax, 8
0x887C88: jnb     loc_887F54
0x887C8E: lea     ecx, [esp+30h+var_10]
0x887C92: push    ecx
0x887C93: call    sub_772630
0x887C98: add     esp, 4
0x887C9B: push    eax
0x887C9C: lea     ecx, [esp+34h+a3]
0x887CA0: mov     byte ptr [esp+34h+var_4], 56h ; 'V'
0x887CA5: call    sub_75FAE0
0x887CAA: mov     eax, [esp+30h+var_10]
0x887CAE: test    eax, eax
0x887CB0: mov     byte ptr [esp+30h+var_4], 1
0x887CB5: jz      short loc_887CC9
0x887CB7: add     [eax+5Ch], ebp
0x887CBA: mov     ecx, eax
0x887CBC: add     eax, 5Ch ; '\'
0x887CBF: cmp     dword ptr [eax], 0
0x887CC2: jnz     short loc_887CC9
0x887CC4: call    sub_772560
0x887CC9: mov     edi, [esp+30h+a3]
0x887CCD: push    2
0x887CCF: push    ebx
0x887CD0: push    0
0x887CD2: push    edi
0x887CD3: call    sub_801110
0x887CD8: add     esp, 10h
0x887CDB: push    edi; a3
0x887CDC: push    0; a2
0x887CDE: mov     ecx, esi; this
0x887CE0: call    sub_760010
0x887CE5: lea     edx, [esp+30h+var_10]
0x887CE9: push    edx
0x887CEA: call    sub_772630
0x887CEF: add     esp, 4
0x887CF2: push    eax
0x887CF3: lea     ecx, [esp+34h+a3]
0x887CF7: mov     byte ptr [esp+34h+var_4], 57h ; 'W'
0x887CFC: call    sub_75FAE0
0x887D01: mov     eax, [esp+30h+var_10]
0x887D05: test    eax, eax
0x887D07: mov     byte ptr [esp+30h+var_4], 1
0x887D0C: jz      short loc_887D20
0x887D0E: add     [eax+5Ch], ebp
0x887D11: mov     ecx, eax
0x887D13: add     eax, 5Ch ; '\'
0x887D16: cmp     dword ptr [eax], 0
0x887D19: jnz     short loc_887D20
0x887D1B: call    sub_772560
0x887D20: mov     edi, [esp+30h+a3]
0x887D24: push    2
0x887D26: push    ebx
0x887D27: push    ebx
0x887D28: push    edi
0x887D29: call    sub_801110
0x887D2E: add     esp, 10h
0x887D31: push    edi; a3
0x887D32: push    ebx; a2
0x887D33: mov     ecx, esi; this
0x887D35: call    sub_760010
0x887D3A: lea     eax, [esp+30h+var_10]
0x887D3E: push    eax
0x887D3F: call    sub_772630
0x887D44: add     esp, 4
0x887D47: push    eax
0x887D48: lea     ecx, [esp+34h+a3]
0x887D4C: mov     byte ptr [esp+34h+var_4], 58h ; 'X'
0x887D51: call    sub_75FAE0
0x887D56: mov     eax, [esp+30h+var_10]
0x887D5A: test    eax, eax
0x887D5C: mov     byte ptr [esp+30h+var_4], 1
0x887D61: jz      short loc_887D75
0x887D63: add     [eax+5Ch], ebp
0x887D66: mov     ecx, eax
0x887D68: add     eax, 5Ch ; '\'
0x887D6B: cmp     dword ptr [eax], 0
0x887D6E: jnz     short loc_887D75
0x887D70: call    sub_772560
0x887D75: mov     edi, [esp+30h+a3]
0x887D79: push    2
0x887D7B: push    ebx
0x887D7C: push    2
0x887D7E: push    edi
0x887D7F: call    sub_801110
0x887D84: add     esp, 10h
0x887D87: push    edi; a3
0x887D88: push    2; a2
0x887D8A: mov     ecx, esi; this
0x887D8C: call    sub_760010
0x887D91: lea     ecx, [esp+30h+var_10]
0x887D95: push    ecx
0x887D96: call    sub_772630
0x887D9B: add     esp, 4
0x887D9E: push    eax
0x887D9F: lea     ecx, [esp+34h+a3]
0x887DA3: mov     byte ptr [esp+34h+var_4], 59h ; 'Y'
0x887DA8: call    sub_75FAE0
0x887DAD: mov     eax, [esp+30h+var_10]
0x887DB1: test    eax, eax
0x887DB3: mov     byte ptr [esp+30h+var_4], 1
0x887DB8: jz      short loc_887DCC
0x887DBA: add     [eax+5Ch], ebp
0x887DBD: mov     ecx, eax
0x887DBF: add     eax, 5Ch ; '\'
0x887DC2: cmp     dword ptr [eax], 0
0x887DC5: jnz     short loc_887DCC
0x887DC7: call    sub_772560
0x887DCC: mov     edi, [esp+30h+a3]
0x887DD0: push    2
0x887DD2: push    ebx
0x887DD3: push    3
0x887DD5: push    edi
0x887DD6: call    sub_801110
0x887DDB: add     esp, 10h
0x887DDE: push    edi; a3
0x887DDF: push    3; a2
0x887DE1: mov     ecx, esi; this
0x887DE3: call    sub_760010
0x887DE8: lea     edx, [esp+30h+var_10]
0x887DEC: push    edx
0x887DED: call    sub_772630
0x887DF2: add     esp, 4
0x887DF5: push    eax
0x887DF6: lea     ecx, [esp+34h+a3]
0x887DFA: mov     byte ptr [esp+34h+var_4], 5Ah ; 'Z'
0x887DFF: call    sub_75FAE0
0x887E04: mov     eax, [esp+30h+var_10]
0x887E08: test    eax, eax
0x887E0A: mov     byte ptr [esp+30h+var_4], 1
0x887E0F: jz      short loc_887E23
0x887E11: add     [eax+5Ch], ebp
0x887E14: mov     ecx, eax
0x887E16: add     eax, 5Ch ; '\'
0x887E19: cmp     dword ptr [eax], 0
0x887E1C: jnz     short loc_887E23
0x887E1E: call    sub_772560
0x887E23: mov     edi, [esp+30h+a3]
0x887E27: push    2
0x887E29: push    ebx
0x887E2A: push    4
0x887E2C: push    edi
0x887E2D: call    sub_801110
0x887E32: add     esp, 10h
0x887E35: push    edi; a3
0x887E36: push    4; a2
0x887E38: mov     ecx, esi; this
0x887E3A: call    sub_760010
0x887E3F: lea     eax, [esp+30h+var_10]
0x887E43: push    eax
0x887E44: call    sub_772630
0x887E49: add     esp, 4
0x887E4C: push    eax
0x887E4D: lea     ecx, [esp+34h+a3]
0x887E51: mov     byte ptr [esp+34h+var_4], 5Bh ; '['
0x887E56: call    sub_75FAE0
0x887E5B: mov     eax, [esp+30h+var_10]
0x887E5F: test    eax, eax
0x887E61: mov     byte ptr [esp+30h+var_4], 1
0x887E66: jz      short loc_887E7A
0x887E68: add     [eax+5Ch], ebp
0x887E6B: mov     ecx, eax
0x887E6D: add     eax, 5Ch ; '\'
0x887E70: cmp     dword ptr [eax], 0
0x887E73: jnz     short loc_887E7A
0x887E75: call    sub_772560
0x887E7A: mov     edi, [esp+30h+a3]
0x887E7E: push    2
0x887E80: push    3
0x887E82: push    5
0x887E84: push    edi
0x887E85: call    sub_801110
0x887E8A: mov     ecx, ds:0B43110h
0x887E90: add     esp, 10h
0x887E93: push    ecx; a2
0x887E94: mov     ecx, edi; this
0x887E96: call    sub_76C910
0x887E9B: push    edi; a3
0x887E9C: push    5; a2
0x887E9E: mov     ecx, esi; this
0x887EA0: call    sub_760010
0x887EA5: lea     edx, [esp+30h+var_10]
0x887EA9: push    edx
0x887EAA: call    sub_772630
0x887EAF: add     esp, 4
0x887EB2: push    eax
0x887EB3: lea     ecx, [esp+34h+a3]
0x887EB7: mov     byte ptr [esp+34h+var_4], 5Ch ; '\'
0x887EBC: call    sub_75FAE0
0x887EC1: mov     eax, [esp+30h+var_10]
0x887EC5: test    eax, eax
0x887EC7: mov     byte ptr [esp+30h+var_4], 1
0x887ECC: jz      short loc_887EE0
0x887ECE: add     [eax+5Ch], ebp
0x887ED1: mov     ecx, eax
0x887ED3: add     eax, 5Ch ; '\'
0x887ED6: cmp     dword ptr [eax], 0
0x887ED9: jnz     short loc_887EE0
0x887EDB: call    sub_772560
0x887EE0: mov     edi, [esp+30h+a3]
0x887EE4: push    2
0x887EE6: push    ebx
0x887EE7: push    6
0x887EE9: push    edi
0x887EEA: call    sub_801110
0x887EEF: add     esp, 10h
0x887EF2: push    edi; a3
0x887EF3: push    6; a2
0x887EF5: mov     ecx, esi; this
0x887EF7: call    sub_760010
0x887EFC: lea     eax, [esp+30h+var_10]
0x887F00: push    eax
0x887F01: call    sub_772630
0x887F06: add     esp, 4
0x887F09: push    eax
0x887F0A: lea     ecx, [esp+34h+a3]
0x887F0E: mov     byte ptr [esp+34h+var_4], 5Dh ; ']'
0x887F13: call    sub_75FAE0
0x887F18: mov     eax, [esp+30h+var_10]
0x887F1C: test    eax, eax
0x887F1E: mov     byte ptr [esp+30h+var_4], 1
0x887F23: jz      short loc_887F37
0x887F25: add     [eax+5Ch], ebp
0x887F28: mov     ecx, eax
0x887F2A: add     eax, 5Ch ; '\'
0x887F2D: cmp     dword ptr [eax], 0
0x887F30: jnz     short loc_887F37
0x887F32: call    sub_772560
0x887F37: mov     edi, [esp+30h+a3]
0x887F3B: push    2
0x887F3D: push    3
0x887F3F: push    7
0x887F41: push    edi
0x887F42: call    sub_801110
0x887F47: add     esp, 10h
0x887F4A: push    edi; a3
0x887F4B: push    7; a2
0x887F4D: mov     ecx, esi; this
0x887F4F: call    sub_760010
0x887F54: mov     ecx, [esp+30h+var_14]
0x887F58: mov     eax, [ecx+0F0h]
0x887F5E: push    eax; a2
0x887F5F: mov     ecx, esi; this
0x887F61: call    sub_7AECB0
0x887F66: push    47h ; 'G'
0x887F68: call    sub_883130
0x887F6D: add     esp, 4
0x887F70: push    eax; a2
0x887F71: mov     ecx, esi; this
0x887F73: call    sub_7AEC60
0x887F78: cmp     dword ptr [esi+30h], 0
0x887F7C: jnz     short loc_887F86
0x887F7E: call    sub_772DF0
0x887F83: mov     [esi+30h], eax
0x887F86: mov     ecx, [esi+30h]
0x887F89: push    0
0x887F8B: push    0
0x887F8D: push    1Bh
0x887F8F: call    sub_772CD0
0x887F94: cmp     dword ptr [esi+30h], 0
0x887F98: jnz     short loc_887FA2
0x887F9A: call    sub_772DF0
0x887F9F: mov     [esi+30h], eax
0x887FA2: mov     ecx, [esi+30h]
0x887FA5: push    0
0x887FA7: push    0
0x887FA9: push    0Fh
0x887FAB: call    sub_772CD0
0x887FB0: cmp     dword ptr [esi+30h], 0
0x887FB4: jnz     short loc_887FBE
0x887FB6: call    sub_772DF0
0x887FBB: mov     [esi+30h], eax
0x887FBE: mov     ecx, [esi+30h]
0x887FC1: push    0
0x887FC3: push    ebx
0x887FC4: push    7
0x887FC6: call    sub_772CD0
0x887FCB: cmp     dword ptr [esi+30h], 0
0x887FCF: jnz     short loc_887FD9
0x887FD1: call    sub_772DF0
0x887FD6: mov     [esi+30h], eax
0x887FD9: mov     ecx, [esi+30h]
0x887FDC: push    0
0x887FDE: push    4
0x887FE0: push    17h
0x887FE2: call    sub_772CD0
0x887FE7: cmp     dword ptr [esi+30h], 0
0x887FEB: jnz     short loc_887FF5
0x887FED: call    sub_772DF0
0x887FF2: mov     [esi+30h], eax
0x887FF5: mov     ecx, [esi+30h]
0x887FF8: push    0
0x887FFA: push    ebx
0x887FFB: push    0Eh
0x887FFD: call    sub_772CD0
0x888002: cmp     dword ptr [esi+30h], 0
0x888006: jnz     short loc_888010
0x888008: call    sub_772DF0
0x88800D: mov     [esi+30h], eax
0x888010: mov     ecx, [esi+30h]
0x888013: push    0
0x888015: push    0
0x888017: push    34h ; '4'
0x888019: call    sub_772CD0
0x88801E: cmp     esi, ds:0B477E8h
0x888024: mov     edx, ds:0B43E6Ch
0x88802A: mov     eax, ds:0B444FCh
0x88802F: mov     ecx, ds:0B437DCh
0x888035: mov     ds:0B43E9Ch, edx
0x88803B: mov     edx, ds:0B44B8Ch
0x888041: mov     ds:0B4452Ch, eax
0x888046: mov     ds:0B4380Ch, ecx
0x88804C: mov     ds:0B44BBCh, edx
0x888052: jz      short loc_888071
0x888054: add     [esi+60h], ebp
0x888057: jnz     short loc_888060
0x888059: mov     ecx, esi
0x88805B: call    sub_7604D0
0x888060: mov     esi, ds:0B477E8h
0x888066: test    esi, esi
0x888068: mov     [esp+30h+var_18], esi
0x88806C: jz      short loc_888071
0x88806E: add     [esi+60h], ebx
0x888071: cmp     dword ptr [esi+18h], 4
0x888075: jnb     loc_8881E4
0x88807B: lea     eax, [esp+30h+var_10]
0x88807F: push    eax
0x888080: call    sub_772630
0x888085: add     esp, 4
0x888088: push    eax
0x888089: lea     ecx, [esp+34h+a3]
0x88808D: mov     byte ptr [esp+34h+var_4], 5Eh ; '^'
0x888092: call    sub_75FAE0
0x888097: mov     eax, [esp+30h+var_10]
0x88809B: test    eax, eax
0x88809D: mov     byte ptr [esp+30h+var_4], 1
0x8880A2: jz      short loc_8880B6
0x8880A4: add     [eax+5Ch], ebp
0x8880A7: mov     ecx, eax
0x8880A9: add     eax, 5Ch ; '\'
0x8880AC: cmp     dword ptr [eax], 0
0x8880AF: jnz     short loc_8880B6
0x8880B1: call    sub_772560
0x8880B6: mov     edi, [esp+30h+a3]
0x8880BA: push    2
0x8880BC: push    ebx
0x8880BD: push    0
0x8880BF: push    edi
0x8880C0: call    sub_801110
0x8880C5: add     esp, 10h
0x8880C8: push    edi; a3
0x8880C9: push    0; a2
0x8880CB: mov     ecx, esi; this
0x8880CD: call    sub_760010
0x8880D2: lea     ecx, [esp+30h+var_10]
0x8880D6: push    ecx
0x8880D7: call    sub_772630
0x8880DC: add     esp, 4
0x8880DF: push    eax
0x8880E0: lea     ecx, [esp+34h+a3]
0x8880E4: mov     byte ptr [esp+34h+var_4], 5Fh ; '_'
0x8880E9: call    sub_75FAE0
0x8880EE: mov     eax, [esp+30h+var_10]
0x8880F2: test    eax, eax
0x8880F4: mov     byte ptr [esp+30h+var_4], 1
0x8880F9: jz      short loc_88810D
0x8880FB: add     [eax+5Ch], ebp
0x8880FE: mov     ecx, eax
0x888100: add     eax, 5Ch ; '\'
0x888103: cmp     dword ptr [eax], 0
0x888106: jnz     short loc_88810D
0x888108: call    sub_772560
0x88810D: mov     edi, [esp+30h+a3]
0x888111: push    2
0x888113: push    ebx
0x888114: push    ebx
0x888115: push    edi
0x888116: call    sub_801110
0x88811B: add     esp, 10h
0x88811E: push    edi; a3
0x88811F: push    ebx; a2
0x888120: mov     ecx, esi; this
0x888122: call    sub_760010
0x888127: lea     edx, [esp+30h+var_10]
0x88812B: push    edx
0x88812C: call    sub_772630
0x888131: add     esp, 4
0x888134: push    eax
0x888135: lea     ecx, [esp+34h+a3]
0x888139: mov     byte ptr [esp+34h+var_4], 60h ; '`'
0x88813E: call    sub_75FAE0
0x888143: mov     eax, [esp+30h+var_10]
0x888147: test    eax, eax
0x888149: mov     byte ptr [esp+30h+var_4], 1
0x88814E: jz      short loc_888162
0x888150: add     [eax+5Ch], ebp
0x888153: mov     ecx, eax
0x888155: add     eax, 5Ch ; '\'
0x888158: cmp     dword ptr [eax], 0
0x88815B: jnz     short loc_888162
0x88815D: call    sub_772560
0x888162: mov     edi, [esp+30h+a3]
0x888166: push    2
0x888168: push    ebx
0x888169: push    2
0x88816B: push    edi
0x88816C: call    sub_801110
0x888171: add     esp, 10h
0x888174: push    edi; a3
0x888175: push    2; a2
0x888177: mov     ecx, esi; this
0x888179: call    sub_760010
0x88817E: lea     eax, [esp+30h+var_10]
0x888182: push    eax
0x888183: call    sub_772630
0x888188: add     esp, 4
0x88818B: push    eax
0x88818C: lea     ecx, [esp+34h+a3]
0x888190: mov     byte ptr [esp+34h+var_4], 61h ; 'a'
0x888195: call    sub_75FAE0
0x88819A: mov     eax, [esp+30h+var_10]
0x88819E: test    eax, eax
0x8881A0: mov     byte ptr [esp+30h+var_4], 1
0x8881A5: jz      short loc_8881B9
0x8881A7: add     [eax+5Ch], ebp
0x8881AA: mov     ecx, eax
0x8881AC: add     eax, 5Ch ; '\'
0x8881AF: cmp     dword ptr [eax], 0
0x8881B2: jnz     short loc_8881B9
0x8881B4: call    sub_772560
0x8881B9: mov     ecx, ds:0B43110h
0x8881BF: mov     edi, [esp+30h+a3]
0x8881C3: push    ecx; a2
0x8881C4: mov     ecx, edi; this
0x8881C6: call    sub_76C910
0x8881CB: push    2
0x8881CD: push    3
0x8881CF: push    3
0x8881D1: push    edi
0x8881D2: call    sub_801110
0x8881D7: add     esp, 10h
0x8881DA: push    edi; a3
0x8881DB: push    3; a2
0x8881DD: mov     ecx, esi; this
0x8881DF: call    sub_760010
0x8881E4: mov     edx, [esp+30h+var_14]
0x8881E8: mov     eax, [edx+0F4h]
0x8881EE: push    eax; a2
0x8881EF: mov     ecx, esi; this
0x8881F1: call    sub_7AECB0
0x8881F6: push    52h ; 'R'
0x8881F8: call    sub_883130
0x8881FD: add     esp, 4
0x888200: push    eax; a2
0x888201: mov     ecx, esi; this
0x888203: call    sub_7AEC60
0x888208: cmp     dword ptr [esi+30h], 0
0x88820C: jnz     short loc_888216
0x88820E: call    sub_772DF0
0x888213: mov     [esi+30h], eax
0x888216: mov     ecx, [esi+30h]
0x888219: push    0
0x88821B: push    ebx
0x88821C: push    1Bh
0x88821E: call    sub_772CD0
0x888223: cmp     dword ptr [esi+30h], 0
0x888227: jnz     short loc_888231
0x888229: call    sub_772DF0
0x88822E: mov     [esi+30h], eax
0x888231: mov     ecx, [esi+30h]
0x888234: push    0
0x888236: push    2
0x888238: push    13h
0x88823A: call    sub_772CD0
0x88823F: cmp     dword ptr [esi+30h], 0
0x888243: jnz     short loc_88824D
0x888245: call    sub_772DF0
0x88824A: mov     [esi+30h], eax
0x88824D: mov     ecx, [esi+30h]
0x888250: push    0
0x888252: push    2
0x888254: push    14h
0x888256: call    sub_772CD0
0x88825B: cmp     dword ptr [esi+30h], 0
0x88825F: jnz     short loc_888269
0x888261: call    sub_772DF0
0x888266: mov     [esi+30h], eax
0x888269: mov     ecx, [esi+30h]
0x88826C: push    0
0x88826E: push    0
0x888270: push    0Fh
0x888272: call    sub_772CD0
0x888277: cmp     dword ptr [esi+30h], 0
0x88827B: jnz     short loc_888285
0x88827D: call    sub_772DF0
0x888282: mov     [esi+30h], eax
0x888285: mov     ecx, [esi+30h]
0x888288: push    0
0x88828A: push    ebx
0x88828B: push    7
0x88828D: call    sub_772CD0
0x888292: cmp     dword ptr [esi+30h], 0
0x888296: jnz     short loc_8882A0
0x888298: call    sub_772DF0
0x88829D: mov     [esi+30h], eax
0x8882A0: mov     ecx, [esi+30h]
0x8882A3: push    0
0x8882A5: push    3
0x8882A7: push    17h
0x8882A9: call    sub_772CD0
0x8882AE: cmp     dword ptr [esi+30h], 0
0x8882B2: jnz     short loc_8882BC
0x8882B4: call    sub_772DF0
0x8882B9: mov     [esi+30h], eax
0x8882BC: mov     ecx, [esi+30h]
0x8882BF: push    0
0x8882C1: push    0
0x8882C3: push    0Eh
0x8882C5: call    sub_772CD0
0x8882CA: cmp     dword ptr [esi+30h], 0
0x8882CE: jnz     short loc_8882D8
0x8882D0: call    sub_772DF0
0x8882D5: mov     [esi+30h], eax
0x8882D8: mov     ecx, [esi+30h]
0x8882DB: push    0
0x8882DD: push    0
0x8882DF: push    34h ; '4'
0x8882E1: call    sub_772CD0
0x8882E6: cmp     esi, ds:0B477ECh
0x8882EC: mov     eax, ds:0B43EC0h
0x8882F1: mov     ecx, ds:0B44550h
0x8882F7: mov     edx, ds:0B43830h
0x8882FD: mov     ds:0B43ED8h, eax
0x888302: mov     eax, ds:0B44BE0h
0x888307: mov     ds:0B44568h, ecx
0x88830D: mov     ds:0B43848h, edx
0x888313: mov     ds:0B44BF8h, eax
0x888318: jz      short loc_888337
0x88831A: add     [esi+60h], ebp
0x88831D: jnz     short loc_888326
0x88831F: mov     ecx, esi
0x888321: call    sub_7604D0
0x888326: mov     esi, ds:0B477ECh
0x88832C: test    esi, esi
0x88832E: mov     [esp+30h+var_18], esi
0x888332: jz      short loc_888337
0x888334: add     [esi+60h], ebx
0x888337: cmp     dword ptr [esi+18h], 4
0x88833B: jnb     loc_8884AA
0x888341: lea     ecx, [esp+30h+var_10]
0x888345: push    ecx
0x888346: call    sub_772630
0x88834B: add     esp, 4
0x88834E: push    eax
0x88834F: lea     ecx, [esp+34h+a3]
0x888353: mov     byte ptr [esp+34h+var_4], 62h ; 'b'
0x888358: call    sub_75FAE0
0x88835D: mov     eax, [esp+30h+var_10]
0x888361: test    eax, eax
0x888363: mov     byte ptr [esp+30h+var_4], 1
0x888368: jz      short loc_88837C
0x88836A: add     [eax+5Ch], ebp
0x88836D: mov     ecx, eax
0x88836F: add     eax, 5Ch ; '\'
0x888372: cmp     dword ptr [eax], 0
0x888375: jnz     short loc_88837C
0x888377: call    sub_772560
0x88837C: mov     edi, [esp+30h+a3]
0x888380: push    2
0x888382: push    ebx
0x888383: push    0
0x888385: push    edi
0x888386: call    sub_801110
0x88838B: add     esp, 10h
0x88838E: push    edi; a3
0x88838F: push    0; a2
0x888391: mov     ecx, esi; this
0x888393: call    sub_760010
0x888398: lea     edx, [esp+30h+var_10]
0x88839C: push    edx
0x88839D: call    sub_772630
0x8883A2: add     esp, 4
0x8883A5: push    eax
0x8883A6: lea     ecx, [esp+34h+a3]
0x8883AA: mov     byte ptr [esp+34h+var_4], 63h ; 'c'
0x8883AF: call    sub_75FAE0
0x8883B4: mov     eax, [esp+30h+var_10]
0x8883B8: test    eax, eax
0x8883BA: mov     byte ptr [esp+30h+var_4], 1
0x8883BF: jz      short loc_8883D3
0x8883C1: add     [eax+5Ch], ebp
0x8883C4: mov     ecx, eax
0x8883C6: add     eax, 5Ch ; '\'
0x8883C9: cmp     dword ptr [eax], 0
0x8883CC: jnz     short loc_8883D3
0x8883CE: call    sub_772560
0x8883D3: mov     edi, [esp+30h+a3]
0x8883D7: push    2
0x8883D9: push    ebx
0x8883DA: push    ebx
0x8883DB: push    edi
0x8883DC: call    sub_801110
0x8883E1: add     esp, 10h
0x8883E4: push    edi; a3
0x8883E5: push    ebx; a2
0x8883E6: mov     ecx, esi; this
0x8883E8: call    sub_760010
0x8883ED: lea     eax, [esp+30h+var_10]
0x8883F1: push    eax
0x8883F2: call    sub_772630
0x8883F7: add     esp, 4
0x8883FA: push    eax
0x8883FB: lea     ecx, [esp+34h+a3]
0x8883FF: mov     byte ptr [esp+34h+var_4], 64h ; 'd'
0x888404: call    sub_75FAE0
0x888409: mov     eax, [esp+30h+var_10]
0x88840D: test    eax, eax
0x88840F: mov     byte ptr [esp+30h+var_4], 1
0x888414: jz      short loc_888428
0x888416: add     [eax+5Ch], ebp
0x888419: mov     ecx, eax
0x88841B: add     eax, 5Ch ; '\'
0x88841E: cmp     dword ptr [eax], 0
0x888421: jnz     short loc_888428
0x888423: call    sub_772560
0x888428: mov     edi, [esp+30h+a3]
0x88842C: push    2
0x88842E: push    ebx
0x88842F: push    2
0x888431: push    edi
0x888432: call    sub_801110
0x888437: add     esp, 10h
0x88843A: push    edi; a3
0x88843B: push    2; a2
0x88843D: mov     ecx, esi; this
0x88843F: call    sub_760010
0x888444: lea     ecx, [esp+30h+var_10]
0x888448: push    ecx
0x888449: call    sub_772630
0x88844E: add     esp, 4
0x888451: push    eax
0x888452: lea     ecx, [esp+34h+a3]
0x888456: mov     byte ptr [esp+34h+var_4], 65h ; 'e'
0x88845B: call    sub_75FAE0
0x888460: mov     eax, [esp+30h+var_10]
0x888464: test    eax, eax
0x888466: mov     byte ptr [esp+30h+var_4], 1
0x88846B: jz      short loc_88847F
0x88846D: add     [eax+5Ch], ebp
0x888470: mov     ecx, eax
0x888472: add     eax, 5Ch ; '\'
0x888475: cmp     dword ptr [eax], 0
0x888478: jnz     short loc_88847F
0x88847A: call    sub_772560
0x88847F: mov     edx, ds:0B43110h
0x888485: mov     edi, [esp+30h+a3]
0x888489: push    edx; a2
0x88848A: mov     ecx, edi; this
0x88848C: call    sub_76C910
0x888491: push    2
0x888493: push    3
0x888495: push    3
0x888497: push    edi
0x888498: call    sub_801110
0x88849D: add     esp, 10h
0x8884A0: push    edi; a3
0x8884A1: push    3; a2
0x8884A3: mov     ecx, esi; this
0x8884A5: call    sub_760010
0x8884AA: mov     eax, [esp+30h+var_14]
0x8884AE: mov     eax, [eax+0F8h]
0x8884B4: push    eax; a2
0x8884B5: mov     ecx, esi; this
0x8884B7: call    sub_7AECB0
0x8884BC: push    53h ; 'S'
0x8884BE: call    sub_883130
0x8884C3: add     esp, 4
0x8884C6: push    eax; a2
0x8884C7: mov     ecx, esi; this
0x8884C9: call    sub_7AEC60
0x8884CE: cmp     dword ptr [esi+30h], 0
0x8884D2: jnz     short loc_8884DC
0x8884D4: call    sub_772DF0
0x8884D9: mov     [esi+30h], eax
0x8884DC: mov     ecx, [esi+30h]
0x8884DF: push    0
0x8884E1: push    ebx
0x8884E2: push    1Bh
0x8884E4: call    sub_772CD0
0x8884E9: cmp     dword ptr [esi+30h], 0
0x8884ED: jnz     short loc_8884F7
0x8884EF: call    sub_772DF0
0x8884F4: mov     [esi+30h], eax
0x8884F7: mov     ecx, [esi+30h]
0x8884FA: push    0
0x8884FC: push    2
0x8884FE: push    13h
0x888500: call    sub_772CD0
0x888505: cmp     dword ptr [esi+30h], 0
0x888509: jnz     short loc_888513
0x88850B: call    sub_772DF0
0x888510: mov     [esi+30h], eax
0x888513: mov     ecx, [esi+30h]
0x888516: push    0
0x888518: push    2
0x88851A: push    14h
0x88851C: call    sub_772CD0
0x888521: cmp     dword ptr [esi+30h], 0
0x888525: jnz     short loc_88852F
0x888527: call    sub_772DF0
0x88852C: mov     [esi+30h], eax
0x88852F: mov     ecx, [esi+30h]
0x888532: push    0
0x888534: push    0
0x888536: push    0Fh
0x888538: call    sub_772CD0
0x88853D: cmp     dword ptr [esi+30h], 0
0x888541: jnz     short loc_88854B
0x888543: call    sub_772DF0
0x888548: mov     [esi+30h], eax
0x88854B: mov     ecx, [esi+30h]
0x88854E: push    0
0x888550: push    ebx
0x888551: push    7
0x888553: call    sub_772CD0
0x888558: cmp     dword ptr [esi+30h], 0
0x88855C: jnz     short loc_888566
0x88855E: call    sub_772DF0
0x888563: mov     [esi+30h], eax
0x888566: mov     ecx, [esi+30h]
0x888569: push    0
0x88856B: push    3
0x88856D: push    17h
0x88856F: call    sub_772CD0
0x888574: cmp     dword ptr [esi+30h], 0
0x888578: jnz     short loc_888582
0x88857A: call    sub_772DF0
0x88857F: mov     [esi+30h], eax
0x888582: mov     ecx, [esi+30h]
0x888585: push    0
0x888587: push    0
0x888589: push    0Eh
0x88858B: call    sub_772CD0
0x888590: cmp     dword ptr [esi+30h], 0
0x888594: jnz     short loc_88859E
0x888596: call    sub_772DF0
0x88859B: mov     [esi+30h], eax
0x88859E: mov     ecx, [esi+30h]
0x8885A1: push    0
0x8885A3: push    0
0x8885A5: push    34h ; '4'
0x8885A7: call    sub_772CD0
0x8885AC: mov     ecx, ds:0B43EF8h
0x8885B2: mov     edx, ds:0B44588h
0x8885B8: mov     eax, ds:0B43868h
0x8885BD: mov     ds:0B43F10h, ecx
0x8885C3: mov     ecx, ds:0B44C18h
0x8885C9: mov     ds:0B44C30h, ecx
0x8885CF: push    offset dword_B477F0
0x8885D4: lea     ecx, [esp+34h+var_18]
0x8885D8: mov     ds:0B445A0h, edx
0x8885DE: mov     ds:0B43880h, eax
0x8885E3: call    sub_76C890
0x8885E8: mov     esi, [esp+30h+var_18]
0x8885EC: cmp     dword ptr [esi+18h], 6
0x8885F0: jnb     loc_88880F
0x8885F6: lea     edx, [esp+30h+var_10]
0x8885FA: push    edx
0x8885FB: call    sub_772630
0x888600: add     esp, 4
0x888603: push    eax
0x888604: lea     ecx, [esp+34h+a3]
0x888608: mov     byte ptr [esp+34h+var_4], 66h ; 'f'
0x88860D: call    sub_75FAE0
0x888612: mov     eax, [esp+30h+var_10]
0x888616: test    eax, eax
0x888618: mov     byte ptr [esp+30h+var_4], 1
0x88861D: jz      short loc_888631
0x88861F: add     [eax+5Ch], ebp
0x888622: mov     ecx, eax
0x888624: add     eax, 5Ch ; '\'
0x888627: cmp     dword ptr [eax], 0
0x88862A: jnz     short loc_888631
0x88862C: call    sub_772560
0x888631: mov     edi, [esp+30h+a3]
0x888635: push    2
0x888637: push    ebx
0x888638: push    0
0x88863A: push    edi
0x88863B: call    sub_801110
0x888640: mov     eax, [esi+14h]
0x888643: add     esp, 10h
0x888646: push    edi; a3
0x888647: push    eax; a2
0x888648: mov     ecx, esi; this
0x88864A: call    sub_760010
0x88864F: lea     ecx, [esp+30h+var_10]
0x888653: push    ecx
0x888654: call    sub_772630
0x888659: add     esp, 4
0x88865C: push    eax
0x88865D: lea     ecx, [esp+34h+a3]
0x888661: mov     byte ptr [esp+34h+var_4], 67h ; 'g'
0x888666: call    sub_75FAE0
0x88866B: mov     eax, [esp+30h+var_10]
0x88866F: test    eax, eax
0x888671: mov     byte ptr [esp+30h+var_4], 1
0x888676: jz      short loc_88868A
0x888678: add     [eax+5Ch], ebp
0x88867B: mov     ecx, eax
0x88867D: add     eax, 5Ch ; '\'
0x888680: cmp     dword ptr [eax], 0
0x888683: jnz     short loc_88868A
0x888685: call    sub_772560
0x88868A: mov     edi, [esp+30h+a3]
0x88868E: push    2
0x888690: push    ebx
0x888691: push    ebx
0x888692: push    edi
0x888693: call    sub_801110
0x888698: add     esp, 10h
0x88869B: push    edi; a3
0x88869C: push    ebx; a2
0x88869D: mov     ecx, esi; this
0x88869F: call    sub_760010
0x8886A4: lea     edx, [esp+30h+var_10]
0x8886A8: push    edx
0x8886A9: call    sub_772630
0x8886AE: add     esp, 4
0x8886B1: push    eax
0x8886B2: lea     ecx, [esp+34h+a3]
0x8886B6: mov     byte ptr [esp+34h+var_4], 68h ; 'h'
0x8886BB: call    sub_75FAE0
0x8886C0: mov     eax, [esp+30h+var_10]
0x8886C4: test    eax, eax
0x8886C6: mov     byte ptr [esp+30h+var_4], 1
0x8886CB: jz      short loc_8886DF
0x8886CD: add     [eax+5Ch], ebp
0x8886D0: mov     ecx, eax
0x8886D2: add     eax, 5Ch ; '\'
0x8886D5: cmp     dword ptr [eax], 0
0x8886D8: jnz     short loc_8886DF
0x8886DA: call    sub_772560
0x8886DF: mov     edi, [esp+30h+a3]
0x8886E3: push    2
0x8886E5: push    ebx
0x8886E6: push    2
0x8886E8: push    edi
0x8886E9: call    sub_801110
0x8886EE: add     esp, 10h
0x8886F1: push    edi; a3
0x8886F2: push    2; a2
0x8886F4: mov     ecx, esi; this
0x8886F6: call    sub_760010
0x8886FB: lea     eax, [esp+30h+var_10]
0x8886FF: push    eax
0x888700: call    sub_772630
0x888705: add     esp, 4
0x888708: push    eax
0x888709: lea     ecx, [esp+34h+a3]
0x88870D: mov     byte ptr [esp+34h+var_4], 69h ; 'i'
0x888712: call    sub_75FAE0
0x888717: mov     eax, [esp+30h+var_10]
0x88871B: test    eax, eax
0x88871D: mov     byte ptr [esp+30h+var_4], 1
0x888722: jz      short loc_888736
0x888724: add     [eax+5Ch], ebp
0x888727: mov     ecx, eax
0x888729: add     eax, 5Ch ; '\'
0x88872C: cmp     dword ptr [eax], 0
0x88872F: jnz     short loc_888736
0x888731: call    sub_772560
0x888736: mov     ecx, ds:0B43110h
0x88873C: mov     edi, [esp+30h+a3]
0x888740: push    ecx; a2
0x888741: mov     ecx, edi; this
0x888743: call    sub_76C910
0x888748: push    2
0x88874A: push    3
0x88874C: push    3
0x88874E: push    edi
0x88874F: call    sub_801110
0x888754: add     esp, 10h
0x888757: push    edi; a3
0x888758: push    3; a2
0x88875A: mov     ecx, esi; this
0x88875C: call    sub_760010
0x888761: lea     edx, [esp+30h+var_10]
0x888765: push    edx
0x888766: call    sub_772630
0x88876B: add     esp, 4
0x88876E: push    eax
0x88876F: lea     ecx, [esp+34h+a3]
0x888773: mov     byte ptr [esp+34h+var_4], 6Ah ; 'j'
0x888778: call    sub_75FAE0
0x88877D: mov     eax, [esp+30h+var_10]
0x888781: test    eax, eax
0x888783: mov     byte ptr [esp+30h+var_4], 1
0x888788: jz      short loc_88879C
0x88878A: add     [eax+5Ch], ebp
0x88878D: mov     ecx, eax
0x88878F: add     eax, 5Ch ; '\'
0x888792: cmp     dword ptr [eax], 0
0x888795: jnz     short loc_88879C
0x888797: call    sub_772560
0x88879C: mov     edi, [esp+30h+a3]
0x8887A0: push    2
0x8887A2: push    ebx
0x8887A3: push    4
0x8887A5: push    edi
0x8887A6: call    sub_801110
0x8887AB: add     esp, 10h
0x8887AE: push    edi; a3
0x8887AF: push    4; a2
0x8887B1: mov     ecx, esi; this
0x8887B3: call    sub_760010
0x8887B8: lea     eax, [esp+30h+var_10]
0x8887BC: push    eax
0x8887BD: call    sub_772630
0x8887C2: add     esp, 4
0x8887C5: push    eax
0x8887C6: lea     ecx, [esp+34h+a3]
0x8887CA: mov     byte ptr [esp+34h+var_4], 6Bh ; 'k'
0x8887CF: call    sub_75FAE0
0x8887D4: mov     eax, [esp+30h+var_10]
0x8887D8: test    eax, eax
0x8887DA: mov     byte ptr [esp+30h+var_4], 1
0x8887DF: jz      short loc_8887F3
0x8887E1: add     [eax+5Ch], ebp
0x8887E4: mov     ecx, eax
0x8887E6: add     eax, 5Ch ; '\'
0x8887E9: cmp     dword ptr [eax], 0
0x8887EC: jnz     short loc_8887F3
0x8887EE: call    sub_772560
0x8887F3: mov     edi, [esp+30h+a3]
0x8887F7: push    2
0x8887F9: push    ebx
0x8887FA: push    5
0x8887FC: push    edi
0x8887FD: call    sub_801110
0x888802: add     esp, 10h
0x888805: push    edi; a3
0x888806: push    5; a2
0x888808: mov     ecx, esi; this
0x88880A: call    sub_760010
0x88880F: mov     ecx, [esp+30h+var_14]
0x888813: mov     eax, [ecx+0FCh]
0x888819: push    eax; a2
0x88881A: mov     ecx, esi; this
0x88881C: call    sub_7AECB0
0x888821: push    54h ; 'T'
0x888823: call    sub_883130
0x888828: add     esp, 4
0x88882B: push    eax; a2
0x88882C: mov     ecx, esi; this
0x88882E: call    sub_7AEC60
0x888833: cmp     dword ptr [esi+30h], 0
0x888837: jnz     short loc_888841
0x888839: call    sub_772DF0
0x88883E: mov     [esi+30h], eax
0x888841: mov     ecx, [esi+30h]
0x888844: push    0
0x888846: push    ebx
0x888847: push    1Bh
0x888849: call    sub_772CD0
0x88884E: cmp     dword ptr [esi+30h], 0
0x888852: jnz     short loc_88885C
0x888854: call    sub_772DF0
0x888859: mov     [esi+30h], eax
0x88885C: mov     ecx, [esi+30h]
0x88885F: push    0
0x888861: push    2
0x888863: push    13h
0x888865: call    sub_772CD0
0x88886A: cmp     dword ptr [esi+30h], 0
0x88886E: jnz     short loc_888878
0x888870: call    sub_772DF0
0x888875: mov     [esi+30h], eax
0x888878: mov     ecx, [esi+30h]
0x88887B: push    0
0x88887D: push    2
0x88887F: push    14h
0x888881: call    sub_772CD0
0x888886: cmp     dword ptr [esi+30h], 0
0x88888A: jnz     short loc_888894
0x88888C: call    sub_772DF0
0x888891: mov     [esi+30h], eax
0x888894: mov     ecx, [esi+30h]
0x888897: push    0
0x888899: push    0
0x88889B: push    0Fh
0x88889D: call    sub_772CD0
0x8888A2: cmp     dword ptr [esi+30h], 0
0x8888A6: jnz     short loc_8888B0
0x8888A8: call    sub_772DF0
0x8888AD: mov     [esi+30h], eax
0x8888B0: mov     ecx, [esi+30h]
0x8888B3: push    0
0x8888B5: push    ebx
0x8888B6: push    7
0x8888B8: call    sub_772CD0
0x8888BD: cmp     dword ptr [esi+30h], 0
0x8888C1: jnz     short loc_8888CB
0x8888C3: call    sub_772DF0
0x8888C8: mov     [esi+30h], eax
0x8888CB: mov     ecx, [esi+30h]
0x8888CE: push    0
0x8888D0: push    3
0x8888D2: push    17h
0x8888D4: call    sub_772CD0
0x8888D9: cmp     dword ptr [esi+30h], 0
0x8888DD: jnz     short loc_8888E7
0x8888DF: call    sub_772DF0
0x8888E4: mov     [esi+30h], eax
0x8888E7: mov     ecx, [esi+30h]
0x8888EA: push    0
0x8888EC: push    0
0x8888EE: push    0Eh
0x8888F0: call    sub_772CD0
0x8888F5: cmp     dword ptr [esi+30h], 0
0x8888F9: jnz     short loc_888903
0x8888FB: call    sub_772DF0
0x888900: mov     [esi+30h], eax
0x888903: mov     ecx, [esi+30h]
0x888906: push    0
0x888908: push    0
0x88890A: push    34h ; '4'
0x88890C: call    sub_772CD0
0x888911: mov     edx, ds:0B43F74h
0x888917: mov     ecx, ds:0B438E4h
0x88891D: mov     eax, ds:0B44604h
0x888922: mov     ds:0B43F8Ch, edx
0x888928: mov     edx, ds:0B44C94h
0x88892E: mov     ds:0B438FCh, ecx
0x888934: push    offset dword_B477F4
0x888939: lea     ecx, [esp+34h+var_18]
0x88893D: mov     ds:0B4461Ch, eax
0x888942: mov     ds:0B44CACh, edx
0x888948: call    sub_76C890
0x88894D: mov     esi, [esp+30h+var_18]
0x888951: cmp     dword ptr [esi+18h], 6
0x888955: jnb     loc_888B74
0x88895B: lea     eax, [esp+30h+var_10]
0x88895F: push    eax
0x888960: call    sub_772630
0x888965: add     esp, 4
0x888968: push    eax
0x888969: lea     ecx, [esp+34h+a3]
0x88896D: mov     byte ptr [esp+34h+var_4], 6Ch ; 'l'
0x888972: call    sub_75FAE0
0x888977: mov     eax, [esp+30h+var_10]
0x88897B: test    eax, eax
0x88897D: mov     byte ptr [esp+30h+var_4], 1
0x888982: jz      short loc_888996
0x888984: add     [eax+5Ch], ebp
0x888987: mov     ecx, eax
0x888989: add     eax, 5Ch ; '\'
0x88898C: cmp     dword ptr [eax], 0
0x88898F: jnz     short loc_888996
0x888991: call    sub_772560
0x888996: mov     edi, [esp+30h+a3]
0x88899A: push    2
0x88899C: push    ebx
0x88899D: push    0
0x88899F: push    edi
0x8889A0: call    sub_801110
0x8889A5: mov     ecx, [esi+14h]
0x8889A8: add     esp, 10h
0x8889AB: push    edi; a3
0x8889AC: push    ecx; a2
0x8889AD: mov     ecx, esi; this
0x8889AF: call    sub_760010
0x8889B4: lea     edx, [esp+30h+var_10]
0x8889B8: push    edx
0x8889B9: call    sub_772630
0x8889BE: add     esp, 4
0x8889C1: push    eax
0x8889C2: lea     ecx, [esp+34h+a3]
0x8889C6: mov     byte ptr [esp+34h+var_4], 6Dh ; 'm'
0x8889CB: call    sub_75FAE0
0x8889D0: mov     eax, [esp+30h+var_10]
0x8889D4: test    eax, eax
0x8889D6: mov     byte ptr [esp+30h+var_4], 1
0x8889DB: jz      short loc_8889EF
0x8889DD: add     [eax+5Ch], ebp
0x8889E0: mov     ecx, eax
0x8889E2: add     eax, 5Ch ; '\'
0x8889E5: cmp     dword ptr [eax], 0
0x8889E8: jnz     short loc_8889EF
0x8889EA: call    sub_772560
0x8889EF: mov     edi, [esp+30h+a3]
0x8889F3: push    2
0x8889F5: push    ebx
0x8889F6: push    ebx
0x8889F7: push    edi
0x8889F8: call    sub_801110
0x8889FD: add     esp, 10h
0x888A00: push    edi; a3
0x888A01: push    ebx; a2
0x888A02: mov     ecx, esi; this
0x888A04: call    sub_760010
0x888A09: lea     eax, [esp+30h+var_10]
0x888A0D: push    eax
0x888A0E: call    sub_772630
0x888A13: add     esp, 4
0x888A16: push    eax
0x888A17: lea     ecx, [esp+34h+a3]
0x888A1B: mov     byte ptr [esp+34h+var_4], 6Eh ; 'n'
0x888A20: call    sub_75FAE0
0x888A25: mov     eax, [esp+30h+var_10]
0x888A29: test    eax, eax
0x888A2B: mov     byte ptr [esp+30h+var_4], 1
0x888A30: jz      short loc_888A44
0x888A32: add     [eax+5Ch], ebp
0x888A35: mov     ecx, eax
0x888A37: add     eax, 5Ch ; '\'
0x888A3A: cmp     dword ptr [eax], 0
0x888A3D: jnz     short loc_888A44
0x888A3F: call    sub_772560
0x888A44: mov     edi, [esp+30h+a3]
0x888A48: push    2
0x888A4A: push    ebx
0x888A4B: push    2
0x888A4D: push    edi
0x888A4E: call    sub_801110
0x888A53: add     esp, 10h
0x888A56: push    edi; a3
0x888A57: push    2; a2
0x888A59: mov     ecx, esi; this
0x888A5B: call    sub_760010
0x888A60: lea     ecx, [esp+30h+var_10]
0x888A64: push    ecx
0x888A65: call    sub_772630
0x888A6A: add     esp, 4
0x888A6D: push    eax
0x888A6E: lea     ecx, [esp+34h+a3]
0x888A72: mov     byte ptr [esp+34h+var_4], 6Fh ; 'o'
0x888A77: call    sub_75FAE0
0x888A7C: mov     eax, [esp+30h+var_10]
0x888A80: test    eax, eax
0x888A82: mov     byte ptr [esp+30h+var_4], 1
0x888A87: jz      short loc_888A9B
0x888A89: add     [eax+5Ch], ebp
0x888A8C: mov     ecx, eax
0x888A8E: add     eax, 5Ch ; '\'
0x888A91: cmp     dword ptr [eax], 0
0x888A94: jnz     short loc_888A9B
0x888A96: call    sub_772560
0x888A9B: mov     edx, ds:0B43110h
0x888AA1: mov     edi, [esp+30h+a3]
0x888AA5: push    edx; a2
0x888AA6: mov     ecx, edi; this
0x888AA8: call    sub_76C910
0x888AAD: push    2
0x888AAF: push    3
0x888AB1: push    3
0x888AB3: push    edi
0x888AB4: call    sub_801110
0x888AB9: add     esp, 10h
0x888ABC: push    edi; a3
0x888ABD: push    3; a2
0x888ABF: mov     ecx, esi; this
0x888AC1: call    sub_760010
0x888AC6: lea     eax, [esp+30h+var_10]
0x888ACA: push    eax
0x888ACB: call    sub_772630
0x888AD0: add     esp, 4
0x888AD3: push    eax
0x888AD4: lea     ecx, [esp+34h+a3]
0x888AD8: mov     byte ptr [esp+34h+var_4], 70h ; 'p'
0x888ADD: call    sub_75FAE0
0x888AE2: mov     eax, [esp+30h+var_10]
0x888AE6: test    eax, eax
0x888AE8: mov     byte ptr [esp+30h+var_4], 1
0x888AED: jz      short loc_888B01
0x888AEF: add     [eax+5Ch], ebp
0x888AF2: mov     ecx, eax
0x888AF4: add     eax, 5Ch ; '\'
0x888AF7: cmp     dword ptr [eax], 0
0x888AFA: jnz     short loc_888B01
0x888AFC: call    sub_772560
0x888B01: mov     edi, [esp+30h+a3]
0x888B05: push    2
0x888B07: push    ebx
0x888B08: push    4
0x888B0A: push    edi
0x888B0B: call    sub_801110
0x888B10: add     esp, 10h
0x888B13: push    edi; a3
0x888B14: push    4; a2
0x888B16: mov     ecx, esi; this
0x888B18: call    sub_760010
0x888B1D: lea     ecx, [esp+30h+var_10]
0x888B21: push    ecx
0x888B22: call    sub_772630
0x888B27: add     esp, 4
0x888B2A: push    eax
0x888B2B: lea     ecx, [esp+34h+a3]
0x888B2F: mov     byte ptr [esp+34h+var_4], 71h ; 'q'
0x888B34: call    sub_75FAE0
0x888B39: mov     eax, [esp+30h+var_10]
0x888B3D: test    eax, eax
0x888B3F: mov     byte ptr [esp+30h+var_4], 1
0x888B44: jz      short loc_888B58
0x888B46: add     [eax+5Ch], ebp
0x888B49: mov     ecx, eax
0x888B4B: add     eax, 5Ch ; '\'
0x888B4E: cmp     dword ptr [eax], 0
0x888B51: jnz     short loc_888B58
0x888B53: call    sub_772560
0x888B58: mov     edi, [esp+30h+a3]
0x888B5C: push    2
0x888B5E: push    ebx
0x888B5F: push    5
0x888B61: push    edi
0x888B62: call    sub_801110
0x888B67: add     esp, 10h
0x888B6A: push    edi; a3
0x888B6B: push    5; a2
0x888B6D: mov     ecx, esi; this
0x888B6F: call    sub_760010
0x888B74: mov     edx, [esp+30h+var_14]
0x888B78: mov     eax, [edx+100h]
0x888B7E: push    eax; a2
0x888B7F: mov     ecx, esi; this
0x888B81: call    sub_7AECB0
0x888B86: push    56h ; 'V'
0x888B88: call    sub_883130
0x888B8D: add     esp, 4
0x888B90: push    eax; a2
0x888B91: mov     ecx, esi; this
0x888B93: call    sub_7AEC60
0x888B98: cmp     dword ptr [esi+30h], 0
0x888B9C: jnz     short loc_888BA6
0x888B9E: call    sub_772DF0
0x888BA3: mov     [esi+30h], eax
0x888BA6: mov     ecx, [esi+30h]
0x888BA9: push    0
0x888BAB: push    ebx
0x888BAC: push    1Bh
0x888BAE: call    sub_772CD0
0x888BB3: cmp     dword ptr [esi+30h], 0
0x888BB7: jnz     short loc_888BC1
0x888BB9: call    sub_772DF0
0x888BBE: mov     [esi+30h], eax
0x888BC1: mov     ecx, [esi+30h]
0x888BC4: push    0
0x888BC6: push    2
0x888BC8: push    13h
0x888BCA: call    sub_772CD0
0x888BCF: cmp     dword ptr [esi+30h], 0
0x888BD3: jnz     short loc_888BDD
0x888BD5: call    sub_772DF0
0x888BDA: mov     [esi+30h], eax
0x888BDD: mov     ecx, [esi+30h]
0x888BE0: push    0
0x888BE2: push    2
0x888BE4: push    14h
0x888BE6: call    sub_772CD0
0x888BEB: cmp     dword ptr [esi+30h], 0
0x888BEF: jnz     short loc_888BF9
0x888BF1: call    sub_772DF0
0x888BF6: mov     [esi+30h], eax
0x888BF9: mov     ecx, [esi+30h]
0x888BFC: push    0
0x888BFE: push    0
0x888C00: push    0Fh
0x888C02: call    sub_772CD0
0x888C07: cmp     dword ptr [esi+30h], 0
0x888C0B: jnz     short loc_888C15
0x888C0D: call    sub_772DF0
0x888C12: mov     [esi+30h], eax
0x888C15: mov     ecx, [esi+30h]
0x888C18: push    0
0x888C1A: push    ebx
0x888C1B: push    7
0x888C1D: call    sub_772CD0
0x888C22: cmp     dword ptr [esi+30h], 0
0x888C26: jnz     short loc_888C30
0x888C28: call    sub_772DF0
0x888C2D: mov     [esi+30h], eax
0x888C30: mov     ecx, [esi+30h]
0x888C33: push    0
0x888C35: push    3
0x888C37: push    17h
0x888C39: call    sub_772CD0
0x888C3E: cmp     dword ptr [esi+30h], 0
0x888C42: jnz     short loc_888C4C
0x888C44: call    sub_772DF0
0x888C49: mov     [esi+30h], eax
0x888C4C: mov     ecx, [esi+30h]
0x888C4F: push    0
0x888C51: push    0
0x888C53: push    0Eh
0x888C55: call    sub_772CD0
0x888C5A: cmp     dword ptr [esi+30h], 0
0x888C5E: jnz     short loc_888C68
0x888C60: call    sub_772DF0
0x888C65: mov     [esi+30h], eax
0x888C68: mov     ecx, [esi+30h]
0x888C6B: push    0
0x888C6D: push    0
0x888C6F: push    34h ; '4'
0x888C71: call    sub_772CD0
0x888C76: mov     eax, ds:0B43F90h
0x888C7B: mov     ecx, ds:0B44620h
0x888C81: mov     edx, ds:0B43900h
0x888C87: mov     ds:0B43FA8h, eax
0x888C8C: mov     eax, ds:0B44CB0h
0x888C91: mov     ds:0B44638h, ecx
0x888C97: push    offset dword_B477F8
0x888C9C: lea     ecx, [esp+34h+var_18]
0x888CA0: mov     ds:0B43918h, edx
0x888CA6: mov     ds:0B44CC8h, eax
0x888CAB: call    sub_76C890
0x888CB0: mov     esi, [esp+30h+var_18]
0x888CB4: cmp     dword ptr [esi+18h], 6
0x888CB8: jnb     loc_888ED6
0x888CBE: lea     ecx, [esp+30h+var_10]
0x888CC2: push    ecx
0x888CC3: call    sub_772630
0x888CC8: add     esp, 4
0x888CCB: push    eax
0x888CCC: lea     ecx, [esp+34h+a3]
0x888CD0: mov     byte ptr [esp+34h+var_4], 72h ; 'r'
0x888CD5: call    sub_75FAE0
0x888CDA: mov     eax, [esp+30h+var_10]
0x888CDE: test    eax, eax
0x888CE0: mov     byte ptr [esp+30h+var_4], 1
0x888CE5: jz      short loc_888CF9
0x888CE7: add     [eax+5Ch], ebp
0x888CEA: mov     ecx, eax
0x888CEC: add     eax, 5Ch ; '\'
0x888CEF: cmp     dword ptr [eax], 0
0x888CF2: jnz     short loc_888CF9
0x888CF4: call    sub_772560
0x888CF9: mov     edi, [esp+30h+a3]
0x888CFD: push    2
0x888CFF: push    ebx
0x888D00: push    0
0x888D02: push    edi
0x888D03: call    sub_801110
0x888D08: mov     edx, [esi+14h]
0x888D0B: add     esp, 10h
0x888D0E: push    edi; a3
0x888D0F: push    edx; a2
0x888D10: mov     ecx, esi; this
0x888D12: call    sub_760010
0x888D17: lea     eax, [esp+30h+var_10]
0x888D1B: push    eax
0x888D1C: call    sub_772630
0x888D21: add     esp, 4
0x888D24: push    eax
0x888D25: lea     ecx, [esp+34h+a3]
0x888D29: mov     byte ptr [esp+34h+var_4], 73h ; 's'
0x888D2E: call    sub_75FAE0
0x888D33: mov     eax, [esp+30h+var_10]
0x888D37: test    eax, eax
0x888D39: mov     byte ptr [esp+30h+var_4], 1
0x888D3E: jz      short loc_888D52
0x888D40: add     [eax+5Ch], ebp
0x888D43: mov     ecx, eax
0x888D45: add     eax, 5Ch ; '\'
0x888D48: cmp     dword ptr [eax], 0
0x888D4B: jnz     short loc_888D52
0x888D4D: call    sub_772560
0x888D52: mov     edi, [esp+30h+a3]
0x888D56: push    2
0x888D58: push    ebx
0x888D59: push    ebx
0x888D5A: push    edi
0x888D5B: call    sub_801110
0x888D60: add     esp, 10h
0x888D63: push    edi; a3
0x888D64: push    ebx; a2
0x888D65: mov     ecx, esi; this
0x888D67: call    sub_760010
0x888D6C: lea     ecx, [esp+30h+var_10]
0x888D70: push    ecx
0x888D71: call    sub_772630
0x888D76: add     esp, 4
0x888D79: push    eax
0x888D7A: lea     ecx, [esp+34h+a3]
0x888D7E: mov     byte ptr [esp+34h+var_4], 74h ; 't'
0x888D83: call    sub_75FAE0
0x888D88: mov     eax, [esp+30h+var_10]
0x888D8C: test    eax, eax
0x888D8E: mov     byte ptr [esp+30h+var_4], 1
0x888D93: jz      short loc_888DA7
0x888D95: add     [eax+5Ch], ebp
0x888D98: mov     ecx, eax
0x888D9A: add     eax, 5Ch ; '\'
0x888D9D: cmp     dword ptr [eax], 0
0x888DA0: jnz     short loc_888DA7
0x888DA2: call    sub_772560
0x888DA7: mov     edi, [esp+30h+a3]
0x888DAB: push    2
0x888DAD: push    ebx
0x888DAE: push    2
0x888DB0: push    edi
0x888DB1: call    sub_801110
0x888DB6: add     esp, 10h
0x888DB9: push    edi; a3
0x888DBA: push    2; a2
0x888DBC: mov     ecx, esi; this
0x888DBE: call    sub_760010
0x888DC3: lea     edx, [esp+30h+var_10]
0x888DC7: push    edx
0x888DC8: call    sub_772630
0x888DCD: add     esp, 4
0x888DD0: push    eax
0x888DD1: lea     ecx, [esp+34h+a3]
0x888DD5: mov     byte ptr [esp+34h+var_4], 75h ; 'u'
0x888DDA: call    sub_75FAE0
0x888DDF: mov     eax, [esp+30h+var_10]
0x888DE3: test    eax, eax
0x888DE5: mov     byte ptr [esp+30h+var_4], 1
0x888DEA: jz      short loc_888DFE
0x888DEC: add     [eax+5Ch], ebp
0x888DEF: mov     ecx, eax
0x888DF1: add     eax, 5Ch ; '\'
0x888DF4: cmp     dword ptr [eax], 0
0x888DF7: jnz     short loc_888DFE
0x888DF9: call    sub_772560
0x888DFE: mov     eax, ds:0B43110h
0x888E03: mov     edi, [esp+30h+a3]
0x888E07: push    eax; a2
0x888E08: mov     ecx, edi; this
0x888E0A: call    sub_76C910
0x888E0F: push    2
0x888E11: push    3
0x888E13: push    3
0x888E15: push    edi
0x888E16: call    sub_801110
0x888E1B: add     esp, 10h
0x888E1E: push    edi; a3
0x888E1F: push    3; a2
0x888E21: mov     ecx, esi; this
0x888E23: call    sub_760010
0x888E28: lea     ecx, [esp+30h+var_10]
0x888E2C: push    ecx
0x888E2D: call    sub_772630
0x888E32: add     esp, 4
0x888E35: push    eax
0x888E36: lea     ecx, [esp+34h+a3]
0x888E3A: mov     byte ptr [esp+34h+var_4], 76h ; 'v'
0x888E3F: call    sub_75FAE0
0x888E44: mov     eax, [esp+30h+var_10]
0x888E48: test    eax, eax
0x888E4A: mov     byte ptr [esp+30h+var_4], 1
0x888E4F: jz      short loc_888E63
0x888E51: add     [eax+5Ch], ebp
0x888E54: mov     ecx, eax
0x888E56: add     eax, 5Ch ; '\'
0x888E59: cmp     dword ptr [eax], 0
0x888E5C: jnz     short loc_888E63
0x888E5E: call    sub_772560
0x888E63: mov     edi, [esp+30h+a3]
0x888E67: push    2
0x888E69: push    ebx
0x888E6A: push    4
0x888E6C: push    edi
0x888E6D: call    sub_801110
0x888E72: add     esp, 10h
0x888E75: push    edi; a3
0x888E76: push    4; a2
0x888E78: mov     ecx, esi; this
0x888E7A: call    sub_760010
0x888E7F: lea     edx, [esp+30h+var_10]
0x888E83: push    edx
0x888E84: call    sub_772630
0x888E89: add     esp, 4
0x888E8C: push    eax
0x888E8D: lea     ecx, [esp+34h+a3]
0x888E91: mov     byte ptr [esp+34h+var_4], 77h ; 'w'
0x888E96: call    sub_75FAE0
0x888E9B: mov     eax, [esp+30h+var_10]
0x888E9F: test    eax, eax
0x888EA1: mov     byte ptr [esp+30h+var_4], 1
0x888EA6: jz      short loc_888EBA
0x888EA8: add     [eax+5Ch], ebp
0x888EAB: mov     ecx, eax
0x888EAD: add     eax, 5Ch ; '\'
0x888EB0: cmp     dword ptr [eax], 0
0x888EB3: jnz     short loc_888EBA
0x888EB5: call    sub_772560
0x888EBA: mov     edi, [esp+30h+a3]
0x888EBE: push    2
0x888EC0: push    ebx
0x888EC1: push    5
0x888EC3: push    edi
0x888EC4: call    sub_801110
0x888EC9: add     esp, 10h
0x888ECC: push    edi; a3
0x888ECD: push    5; a2
0x888ECF: mov     ecx, esi; this
0x888ED1: call    sub_760010
0x888ED6: mov     eax, [esp+30h+var_14]
0x888EDA: mov     eax, [eax+104h]
0x888EE0: push    eax; a2
0x888EE1: mov     ecx, esi; this
0x888EE3: call    sub_7AECB0
0x888EE8: push    58h ; 'X'
0x888EEA: call    sub_883130
0x888EEF: add     esp, 4
0x888EF2: push    eax; a2
0x888EF3: mov     ecx, esi; this
0x888EF5: call    sub_7AEC60
0x888EFA: cmp     dword ptr [esi+30h], 0
0x888EFE: jnz     short loc_888F08
0x888F00: call    sub_772DF0
0x888F05: mov     [esi+30h], eax
0x888F08: mov     ecx, [esi+30h]
0x888F0B: push    0
0x888F0D: push    ebx
0x888F0E: push    1Bh
0x888F10: call    sub_772CD0
0x888F15: cmp     dword ptr [esi+30h], 0
0x888F19: jnz     short loc_888F23
0x888F1B: call    sub_772DF0
0x888F20: mov     [esi+30h], eax
0x888F23: mov     ecx, [esi+30h]
0x888F26: push    0
0x888F28: push    2
0x888F2A: push    13h
0x888F2C: call    sub_772CD0
0x888F31: cmp     dword ptr [esi+30h], 0
0x888F35: jnz     short loc_888F3F
0x888F37: call    sub_772DF0
0x888F3C: mov     [esi+30h], eax
0x888F3F: mov     ecx, [esi+30h]
0x888F42: push    0
0x888F44: push    2
0x888F46: push    14h
0x888F48: call    sub_772CD0
0x888F4D: cmp     dword ptr [esi+30h], 0
0x888F51: jnz     short loc_888F5B
0x888F53: call    sub_772DF0
0x888F58: mov     [esi+30h], eax
0x888F5B: mov     ecx, [esi+30h]
0x888F5E: push    0
0x888F60: push    0
0x888F62: push    0Fh
0x888F64: call    sub_772CD0
0x888F69: cmp     dword ptr [esi+30h], 0
0x888F6D: jnz     short loc_888F77
0x888F6F: call    sub_772DF0
0x888F74: mov     [esi+30h], eax
0x888F77: mov     ecx, [esi+30h]
0x888F7A: push    0
0x888F7C: push    ebx
0x888F7D: push    7
0x888F7F: call    sub_772CD0
0x888F84: cmp     dword ptr [esi+30h], 0
0x888F88: jnz     short loc_888F92
0x888F8A: call    sub_772DF0
0x888F8F: mov     [esi+30h], eax
0x888F92: mov     ecx, [esi+30h]
0x888F95: push    0
0x888F97: push    3
0x888F99: push    17h
0x888F9B: call    sub_772CD0
0x888FA0: cmp     dword ptr [esi+30h], 0
0x888FA4: jnz     short loc_888FAE
0x888FA6: call    sub_772DF0
0x888FAB: mov     [esi+30h], eax
0x888FAE: mov     ecx, [esi+30h]
0x888FB1: push    0
0x888FB3: push    0
0x888FB5: push    0Eh
0x888FB7: call    sub_772CD0
0x888FBC: cmp     dword ptr [esi+30h], 0
0x888FC0: jnz     short loc_888FCA
0x888FC2: call    sub_772DF0
0x888FC7: mov     [esi+30h], eax
0x888FCA: mov     ecx, [esi+30h]
0x888FCD: push    0
0x888FCF: push    0
0x888FD1: push    34h ; '4'
0x888FD3: call    sub_772CD0
0x888FD8: mov     ecx, ds:0B43FACh
0x888FDE: mov     edx, ds:0B4463Ch
0x888FE4: mov     eax, ds:0B4391Ch
0x888FE9: mov     ds:0B43FC4h, ecx
0x888FEF: mov     ecx, ds:0B44CCCh
0x888FF5: mov     ds:0B44CE4h, ecx
0x888FFB: push    offset dword_B477FC
0x889000: lea     ecx, [esp+34h+var_18]
0x889004: mov     ds:0B44654h, edx
0x88900A: mov     ds:0B43934h, eax
0x88900F: call    sub_76C890
0x889014: mov     esi, [esp+30h+var_18]
0x889018: mov     eax, [esi+18h]
0x88901B: cmp     eax, 8
0x88901E: jnb     loc_8892EA
0x889024: lea     edx, [esp+30h+var_10]
0x889028: push    edx
0x889029: call    sub_772630
0x88902E: add     esp, 4
0x889031: push    eax
0x889032: lea     ecx, [esp+34h+a3]
0x889036: mov     byte ptr [esp+34h+var_4], 78h ; 'x'
0x88903B: call    sub_75FAE0
0x889040: mov     eax, [esp+30h+var_10]
0x889044: test    eax, eax
0x889046: mov     byte ptr [esp+30h+var_4], 1
0x88904B: jz      short loc_88905F
0x88904D: add     [eax+5Ch], ebp
0x889050: mov     ecx, eax
0x889052: add     eax, 5Ch ; '\'
0x889055: cmp     dword ptr [eax], 0
0x889058: jnz     short loc_88905F
0x88905A: call    sub_772560
0x88905F: mov     edi, [esp+30h+a3]
0x889063: push    2
0x889065: push    ebx
0x889066: push    0
0x889068: push    edi
0x889069: call    sub_801110
0x88906E: add     esp, 10h
0x889071: push    edi; a3
0x889072: push    0; a2
0x889074: mov     ecx, esi; this
0x889076: call    sub_760010
0x88907B: lea     eax, [esp+30h+var_10]
0x88907F: push    eax
0x889080: call    sub_772630
0x889085: add     esp, 4
0x889088: push    eax
0x889089: lea     ecx, [esp+34h+a3]
0x88908D: mov     byte ptr [esp+34h+var_4], 79h ; 'y'
0x889092: call    sub_75FAE0
0x889097: mov     eax, [esp+30h+var_10]
0x88909B: test    eax, eax
0x88909D: mov     byte ptr [esp+30h+var_4], 1
0x8890A2: jz      short loc_8890B6
0x8890A4: add     [eax+5Ch], ebp
0x8890A7: mov     ecx, eax
0x8890A9: add     eax, 5Ch ; '\'
0x8890AC: cmp     dword ptr [eax], 0
0x8890AF: jnz     short loc_8890B6
0x8890B1: call    sub_772560
0x8890B6: mov     edi, [esp+30h+a3]
0x8890BA: push    2
0x8890BC: push    ebx
0x8890BD: push    ebx
0x8890BE: push    edi
0x8890BF: call    sub_801110
0x8890C4: add     esp, 10h
0x8890C7: push    edi; a3
0x8890C8: push    ebx; a2
0x8890C9: mov     ecx, esi; this
0x8890CB: call    sub_760010
0x8890D0: lea     ecx, [esp+30h+var_10]
0x8890D4: push    ecx
0x8890D5: call    sub_772630
0x8890DA: add     esp, 4
0x8890DD: push    eax
0x8890DE: lea     ecx, [esp+34h+a3]
0x8890E2: mov     byte ptr [esp+34h+var_4], 7Ah ; 'z'
0x8890E7: call    sub_75FAE0
0x8890EC: mov     eax, [esp+30h+var_10]
0x8890F0: test    eax, eax
0x8890F2: mov     byte ptr [esp+30h+var_4], 1
0x8890F7: jz      short loc_88910B
0x8890F9: add     [eax+5Ch], ebp
0x8890FC: mov     ecx, eax
0x8890FE: add     eax, 5Ch ; '\'
0x889101: cmp     dword ptr [eax], 0
0x889104: jnz     short loc_88910B
0x889106: call    sub_772560
0x88910B: mov     edi, [esp+30h+a3]
0x88910F: push    2
0x889111: push    ebx
0x889112: push    2
0x889114: push    edi
0x889115: call    sub_801110
0x88911A: add     esp, 10h
0x88911D: push    edi; a3
0x88911E: push    2; a2
0x889120: mov     ecx, esi; this
0x889122: call    sub_760010
0x889127: lea     edx, [esp+30h+var_10]
0x88912B: push    edx
0x88912C: call    sub_772630
0x889131: add     esp, 4
0x889134: push    eax
0x889135: lea     ecx, [esp+34h+a3]
0x889139: mov     byte ptr [esp+34h+var_4], 7Bh ; '{'
0x88913E: call    sub_75FAE0
0x889143: mov     eax, [esp+30h+var_10]
0x889147: test    eax, eax
0x889149: mov     byte ptr [esp+30h+var_4], 1
0x88914E: jz      short loc_889162
0x889150: add     [eax+5Ch], ebp
0x889153: mov     ecx, eax
0x889155: add     eax, 5Ch ; '\'
0x889158: cmp     dword ptr [eax], 0
0x88915B: jnz     short loc_889162
0x88915D: call    sub_772560
0x889162: mov     edi, [esp+30h+a3]
0x889166: push    2
0x889168: push    ebx
0x889169: push    3
0x88916B: push    edi
0x88916C: call    sub_801110
0x889171: add     esp, 10h
0x889174: push    edi; a3
0x889175: push    3; a2
0x889177: mov     ecx, esi; this
0x889179: call    sub_760010
0x88917E: lea     eax, [esp+30h+var_10]
0x889182: push    eax
0x889183: call    sub_772630
0x889188: add     esp, 4
0x88918B: push    eax
0x88918C: lea     ecx, [esp+34h+a3]
0x889190: mov     byte ptr [esp+34h+var_4], 7Ch ; '|'
0x889195: call    sub_75FAE0
0x88919A: mov     eax, [esp+30h+var_10]
0x88919E: test    eax, eax
0x8891A0: mov     byte ptr [esp+30h+var_4], 1
0x8891A5: jz      short loc_8891B9
0x8891A7: add     [eax+5Ch], ebp
0x8891AA: mov     ecx, eax
0x8891AC: add     eax, 5Ch ; '\'
0x8891AF: cmp     dword ptr [eax], 0
0x8891B2: jnz     short loc_8891B9
0x8891B4: call    sub_772560
0x8891B9: mov     edi, [esp+30h+a3]
0x8891BD: push    2
0x8891BF: push    ebx
0x8891C0: push    4
0x8891C2: push    edi
0x8891C3: call    sub_801110
0x8891C8: add     esp, 10h
0x8891CB: push    edi; a3
0x8891CC: push    4; a2
0x8891CE: mov     ecx, esi; this
0x8891D0: call    sub_760010
0x8891D5: lea     ecx, [esp+30h+var_10]
0x8891D9: push    ecx
0x8891DA: call    sub_772630
0x8891DF: add     esp, 4
0x8891E2: push    eax
0x8891E3: lea     ecx, [esp+34h+a3]
0x8891E7: mov     byte ptr [esp+34h+var_4], 7Dh ; '}'
0x8891EC: call    sub_75FAE0
0x8891F1: mov     eax, [esp+30h+var_10]
0x8891F5: test    eax, eax
0x8891F7: mov     byte ptr [esp+30h+var_4], 1
0x8891FC: jz      short loc_889210
0x8891FE: add     [eax+5Ch], ebp
0x889201: mov     ecx, eax
0x889203: add     eax, 5Ch ; '\'
0x889206: cmp     dword ptr [eax], 0
0x889209: jnz     short loc_889210
0x88920B: call    sub_772560
0x889210: mov     edi, [esp+30h+a3]
0x889214: push    0
0x889216: push    3
0x889218: push    5
0x88921A: push    edi
0x88921B: call    sub_801110
0x889220: mov     edx, ds:0B43110h
0x889226: add     esp, 10h
0x889229: push    edx; a2
0x88922A: mov     ecx, edi; this
0x88922C: call    sub_76C910
0x889231: push    edi; a3
0x889232: push    5; a2
0x889234: mov     ecx, esi; this
0x889236: call    sub_760010
0x88923B: lea     eax, [esp+30h+var_10]
0x88923F: push    eax
0x889240: call    sub_772630
0x889245: add     esp, 4
0x889248: push    eax
0x889249: lea     ecx, [esp+34h+a3]
0x88924D: mov     byte ptr [esp+34h+var_4], 7Eh ; '~'
0x889252: call    sub_75FAE0
0x889257: mov     eax, [esp+30h+var_10]
0x88925B: test    eax, eax
0x88925D: mov     byte ptr [esp+30h+var_4], 1
0x889262: jz      short loc_889276
0x889264: add     [eax+5Ch], ebp
0x889267: mov     ecx, eax
0x889269: add     eax, 5Ch ; '\'
0x88926C: cmp     dword ptr [eax], 0
0x88926F: jnz     short loc_889276
0x889271: call    sub_772560
0x889276: mov     edi, [esp+30h+a3]
0x88927A: push    2
0x88927C: push    ebx
0x88927D: push    6
0x88927F: push    edi
0x889280: call    sub_801110
0x889285: add     esp, 10h
0x889288: push    edi; a3
0x889289: push    6; a2
0x88928B: mov     ecx, esi; this
0x88928D: call    sub_760010
0x889292: lea     ecx, [esp+30h+var_10]
0x889296: push    ecx
0x889297: call    sub_772630
0x88929C: add     esp, 4
0x88929F: push    eax
0x8892A0: lea     ecx, [esp+34h+a3]
0x8892A4: mov     byte ptr [esp+34h+var_4], 7Fh
0x8892A9: call    sub_75FAE0
0x8892AE: mov     eax, [esp+30h+var_10]
0x8892B2: test    eax, eax
0x8892B4: mov     byte ptr [esp+30h+var_4], 1
0x8892B9: jz      short loc_8892CD
0x8892BB: add     [eax+5Ch], ebp
0x8892BE: mov     ecx, eax
0x8892C0: add     eax, 5Ch ; '\'
0x8892C3: cmp     dword ptr [eax], 0
0x8892C6: jnz     short loc_8892CD
0x8892C8: call    sub_772560
0x8892CD: mov     edi, [esp+30h+a3]
0x8892D1: push    0
0x8892D3: push    3
0x8892D5: push    7
0x8892D7: push    edi
0x8892D8: call    sub_801110
0x8892DD: add     esp, 10h
0x8892E0: push    edi; a3
0x8892E1: push    7; a2
0x8892E3: mov     ecx, esi; this
0x8892E5: call    sub_760010
0x8892EA: mov     edx, [esp+30h+var_14]
0x8892EE: mov     eax, [edx+108h]
0x8892F4: push    eax; a2
0x8892F5: mov     ecx, esi; this
0x8892F7: call    sub_7AECB0
0x8892FC: push    7Bh ; '{'
0x8892FE: call    sub_883130
0x889303: add     esp, 4
0x889306: push    eax; a2
0x889307: mov     ecx, esi; this
0x889309: call    sub_7AEC60
0x88930E: cmp     dword ptr [esi+30h], 0
0x889312: jnz     short loc_88931C
0x889314: call    sub_772DF0
0x889319: mov     [esi+30h], eax
0x88931C: mov     ecx, [esi+30h]
0x88931F: push    0
0x889321: push    ebx
0x889322: push    1Bh
0x889324: call    sub_772CD0
0x889329: cmp     dword ptr [esi+30h], 0
0x88932D: jnz     short loc_889337
0x88932F: call    sub_772DF0
0x889334: mov     [esi+30h], eax
0x889337: mov     ecx, [esi+30h]
0x88933A: push    0
0x88933C: push    9
0x88933E: push    13h
0x889340: call    sub_772CD0
0x889345: cmp     dword ptr [esi+30h], 0
0x889349: jnz     short loc_889353
0x88934B: call    sub_772DF0
0x889350: mov     [esi+30h], eax
0x889353: mov     ecx, [esi+30h]
0x889356: push    0
0x889358: push    ebx
0x889359: push    14h
0x88935B: call    sub_772CD0
0x889360: cmp     dword ptr [esi+30h], 0
0x889364: jnz     short loc_88936E
0x889366: call    sub_772DF0
0x88936B: mov     [esi+30h], eax
0x88936E: mov     ecx, [esi+30h]
0x889371: push    0
0x889373: push    0
0x889375: push    0Fh
0x889377: call    sub_772CD0
0x88937C: cmp     dword ptr [esi+30h], 0
0x889380: jnz     short loc_88938A
0x889382: call    sub_772DF0
0x889387: mov     [esi+30h], eax
0x88938A: mov     ecx, [esi+30h]
0x88938D: push    0
0x88938F: push    ebx
0x889390: push    7
0x889392: call    sub_772CD0
0x889397: cmp     dword ptr [esi+30h], 0
0x88939B: jnz     short loc_8893A5
0x88939D: call    sub_772DF0
0x8893A2: mov     [esi+30h], eax
0x8893A5: mov     ecx, [esi+30h]
0x8893A8: push    0
0x8893AA: push    4
0x8893AC: push    17h
0x8893AE: call    sub_772CD0
0x8893B3: cmp     dword ptr [esi+30h], 0
0x8893B7: jnz     short loc_8893C1
0x8893B9: call    sub_772DF0
0x8893BE: mov     [esi+30h], eax
0x8893C1: mov     ecx, [esi+30h]
0x8893C4: push    0
0x8893C6: push    0
0x8893C8: push    0Eh
0x8893CA: call    sub_772CD0
0x8893CF: cmp     dword ptr [esi+30h], 0
0x8893D3: jnz     short loc_8893DD
0x8893D5: call    sub_772DF0
0x8893DA: mov     [esi+30h], eax
0x8893DD: mov     ecx, [esi+30h]
0x8893E0: push    0
0x8893E2: push    0
0x8893E4: push    34h ; '4'
0x8893E6: call    sub_772CD0
0x8893EB: test    edi, edi
0x8893ED: mov     eax, ds:0B440FCh
0x8893F2: mov     ecx, ds:0B4478Ch
0x8893F8: mov     edx, ds:0B43A6Ch
0x8893FE: mov     ds:0B44108h, eax
0x889403: mov     eax, ds:0B44E1Ch
0x889408: mov     ds:0B44798h, ecx
0x88940E: mov     ds:0B43A78h, edx
0x889414: mov     ds:0B44E28h, eax
0x889419: mov     byte ptr [esp+30h+var_4], 0
0x88941E: jz      short loc_88942C
0x889420: add     [edi+5Ch], ebp
0x889423: jnz     short loc_88942C
0x889425: mov     ecx, edi
0x889427: call    sub_772560
0x88942C: add     [esi+60h], ebp
0x88942F: mov     [esp+30h+var_4], ebp
0x889433: jnz     short loc_88943C
0x889435: mov     ecx, esi
0x889437: call    sub_7604D0
0x88943C: mov     ecx, dword ptr [esp+30h+var_C]
0x889440: mov     large fs:0, ecx
0x889447: pop     ecx
0x889448: pop     edi
0x889449: pop     esi
0x88944A: pop     ebp
0x88944B: pop     ebx
0x88944C: add     esp, 1Ch
0x88944F: retn
