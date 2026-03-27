0x81AA00: push    0FFFFFFFFh
0x81AA02: push    offset SEH_81AA00
0x81AA07: mov     eax, large fs:0
0x81AA0D: push    eax
0x81AA0E: sub     esp, 0Ch
0x81AA11: push    ebx
0x81AA12: push    ebp
0x81AA13: push    esi
0x81AA14: push    edi
0x81AA15: mov     eax, ds:0B30AACh
0x81AA1A: xor     eax, esp
0x81AA1C: push    eax
0x81AA1D: lea     eax, [esp+2Ch+var_C]
0x81AA21: mov     large fs:0, eax
0x81AA27: xor     edi, edi
0x81AA29: xor     esi, esi
0x81AA2B: mov     [esp+2Ch+var_14], edi
0x81AA2F: mov     [esp+2Ch+var_4], esi
0x81AA33: mov     [esp+2Ch+var_18], esi
0x81AA37: mov     eax, ds:0B45664h
0x81AA3C: cmp     eax, esi
0x81AA3E: mov     ebp, 1
0x81AA43: mov     byte ptr [esp+2Ch+var_4], 1
0x81AA48: jz      short loc_81AA57
0x81AA4A: mov     edi, eax
0x81AA4C: cmp     edi, esi
0x81AA4E: mov     [esp+2Ch+var_14], edi
0x81AA52: jz      short loc_81AA57
0x81AA54: add     [edi+60h], ebp
0x81AA57: mov     eax, [edi+18h]
0x81AA5A: or      ebx, 0FFFFFFFFh
0x81AA5D: cmp     eax, 4
0x81AA60: jnb     loc_81AC39
0x81AA66: lea     eax, [esp+2Ch+var_10]
0x81AA6A: push    eax
0x81AA6B: call    sub_772630
0x81AA70: add     esp, 4
0x81AA73: mov     eax, [eax]
0x81AA75: test    eax, eax
0x81AA77: jz      short loc_81AA82
0x81AA79: mov     esi, eax
0x81AA7B: add     [esi+5Ch], ebp
0x81AA7E: mov     [esp+2Ch+var_18], esi
0x81AA82: mov     eax, [esp+2Ch+var_10]
0x81AA86: test    eax, eax
0x81AA88: mov     byte ptr [esp+2Ch+var_4], 1
0x81AA8D: jz      short loc_81AAA1
0x81AA8F: add     [eax+5Ch], ebx
0x81AA92: mov     ecx, eax
0x81AA94: add     eax, 5Ch ; '\'
0x81AA97: cmp     dword ptr [eax], 0
0x81AA9A: jnz     short loc_81AAA1
0x81AA9C: call    sub_772560
0x81AAA1: push    2
0x81AAA3: push    1
0x81AAA5: push    0
0x81AAA7: push    esi
0x81AAA8: call    sub_801110
0x81AAAD: mov     ecx, [edi+14h]
0x81AAB0: add     esp, 10h
0x81AAB3: push    esi; a3
0x81AAB4: push    ecx; a2
0x81AAB5: mov     ecx, edi; this
0x81AAB7: call    sub_760010
0x81AABC: lea     edx, [esp+2Ch+var_10]
0x81AAC0: push    edx
0x81AAC1: call    sub_772630
0x81AAC6: add     esp, 4
0x81AAC9: mov     ebp, eax
0x81AACB: cmp     esi, [ebp+0]
0x81AACE: mov     byte ptr [esp+2Ch+var_4], 3
0x81AAD3: jz      short loc_81AAF4
0x81AAD5: test    esi, esi
0x81AAD7: jz      short loc_81AAE5
0x81AAD9: add     [esi+5Ch], ebx
0x81AADC: jnz     short loc_81AAE5
0x81AADE: mov     ecx, esi
0x81AAE0: call    sub_772560
0x81AAE5: mov     esi, [ebp+0]
0x81AAE8: test    esi, esi
0x81AAEA: mov     [esp+2Ch+var_18], esi
0x81AAEE: jz      short loc_81AAF4
0x81AAF0: add     dword ptr [esi+5Ch], 1
0x81AAF4: mov     eax, [esp+2Ch+var_10]
0x81AAF8: test    eax, eax
0x81AAFA: mov     byte ptr [esp+2Ch+var_4], 1
0x81AAFF: jz      short loc_81AB13
0x81AB01: add     [eax+5Ch], ebx
0x81AB04: mov     ecx, eax
0x81AB06: add     eax, 5Ch ; '\'
0x81AB09: cmp     dword ptr [eax], 0
0x81AB0C: jnz     short loc_81AB13
0x81AB0E: call    sub_772560
0x81AB13: push    2
0x81AB15: push    3
0x81AB17: push    1
0x81AB19: push    esi
0x81AB1A: call    sub_801110
0x81AB1F: mov     eax, ds:0B43110h
0x81AB24: add     esp, 10h
0x81AB27: push    eax; a2
0x81AB28: mov     ecx, esi; this
0x81AB2A: call    sub_76C910
0x81AB2F: mov     ecx, [edi+14h]
0x81AB32: push    esi; a3
0x81AB33: push    ecx; a2
0x81AB34: mov     ecx, edi; this
0x81AB36: call    sub_760010
0x81AB3B: lea     edx, [esp+2Ch+var_10]
0x81AB3F: push    edx
0x81AB40: call    sub_772630
0x81AB45: add     esp, 4
0x81AB48: mov     ebp, eax
0x81AB4A: cmp     esi, [ebp+0]
0x81AB4D: mov     byte ptr [esp+2Ch+var_4], 4
0x81AB52: jz      short loc_81AB73
0x81AB54: test    esi, esi
0x81AB56: jz      short loc_81AB64
0x81AB58: add     [esi+5Ch], ebx
0x81AB5B: jnz     short loc_81AB64
0x81AB5D: mov     ecx, esi
0x81AB5F: call    sub_772560
0x81AB64: mov     esi, [ebp+0]
0x81AB67: test    esi, esi
0x81AB69: mov     [esp+2Ch+var_18], esi
0x81AB6D: jz      short loc_81AB73
0x81AB6F: add     dword ptr [esi+5Ch], 1
0x81AB73: mov     eax, [esp+2Ch+var_10]
0x81AB77: test    eax, eax
0x81AB79: mov     byte ptr [esp+2Ch+var_4], 1
0x81AB7E: jz      short loc_81AB92
0x81AB80: add     [eax+5Ch], ebx
0x81AB83: mov     ecx, eax
0x81AB85: add     eax, 5Ch ; '\'
0x81AB88: cmp     dword ptr [eax], 0
0x81AB8B: jnz     short loc_81AB92
0x81AB8D: call    sub_772560
0x81AB92: push    2
0x81AB94: push    3
0x81AB96: push    2
0x81AB98: push    esi
0x81AB99: call    sub_801110
0x81AB9E: mov     eax, ds:0B430D4h
0x81ABA3: add     esp, 10h
0x81ABA6: push    eax; a2
0x81ABA7: mov     ecx, esi; this
0x81ABA9: call    sub_76C910
0x81ABAE: mov     ecx, [edi+14h]
0x81ABB1: push    esi; a3
0x81ABB2: push    ecx; a2
0x81ABB3: mov     ecx, edi; this
0x81ABB5: call    sub_760010
0x81ABBA: lea     edx, [esp+2Ch+var_10]
0x81ABBE: push    edx
0x81ABBF: call    sub_772630
0x81ABC4: add     esp, 4
0x81ABC7: mov     ebp, eax
0x81ABC9: cmp     esi, [ebp+0]
0x81ABCC: mov     byte ptr [esp+2Ch+var_4], 5
0x81ABD1: jz      short loc_81ABF2
0x81ABD3: test    esi, esi
0x81ABD5: jz      short loc_81ABE3
0x81ABD7: add     [esi+5Ch], ebx
0x81ABDA: jnz     short loc_81ABE3
0x81ABDC: mov     ecx, esi
0x81ABDE: call    sub_772560
0x81ABE3: mov     esi, [ebp+0]
0x81ABE6: test    esi, esi
0x81ABE8: mov     [esp+2Ch+var_18], esi
0x81ABEC: jz      short loc_81ABF2
0x81ABEE: add     dword ptr [esi+5Ch], 1
0x81ABF2: mov     eax, [esp+2Ch+var_10]
0x81ABF6: test    eax, eax
0x81ABF8: mov     byte ptr [esp+2Ch+var_4], 1
0x81ABFD: jz      short loc_81AC11
0x81ABFF: add     [eax+5Ch], ebx
0x81AC02: mov     ecx, eax
0x81AC04: add     eax, 5Ch ; '\'
0x81AC07: cmp     dword ptr [eax], 0
0x81AC0A: jnz     short loc_81AC11
0x81AC0C: call    sub_772560
0x81AC11: push    2
0x81AC13: push    1
0x81AC15: push    3
0x81AC17: push    esi
0x81AC18: call    sub_801110
0x81AC1D: mov     eax, ds:0B430ECh
0x81AC22: add     esp, 10h
0x81AC25: push    eax; a2
0x81AC26: mov     ecx, esi; this
0x81AC28: call    sub_76C910
0x81AC2D: mov     ecx, [edi+14h]
0x81AC30: push    esi; a3
0x81AC31: push    ecx; a2
0x81AC32: mov     ecx, edi; this
0x81AC34: call    sub_760010
0x81AC39: mov     eax, ds:0B452D0h
0x81AC3E: mov     ebp, [edi+58h]
0x81AC41: cmp     ebp, eax
0x81AC43: mov     ebx, eax
0x81AC45: jz      short loc_81AC79
0x81AC47: test    ebp, ebp
0x81AC49: jz      short loc_81AC68
0x81AC4B: lea     edx, [ebp+4]
0x81AC4E: push    edx; lpAddend
0x81AC4F: call    dword ptr ds:0A2807Ch
0x81AC55: test    eax, eax
0x81AC57: jnz     short loc_81AC68
0x81AC59: test    ebp, ebp
0x81AC5B: jz      short loc_81AC68
0x81AC5D: mov     eax, [ebp+0]
0x81AC60: mov     edx, [eax]
0x81AC62: push    1
0x81AC64: mov     ecx, ebp
0x81AC66: call    edx
0x81AC68: test    ebx, ebx
0x81AC6A: mov     [edi+58h], ebx
0x81AC6D: jz      short loc_81AC79
0x81AC6F: add     ebx, 4
0x81AC72: push    ebx; lpAddend
0x81AC73: call    dword ptr ds:0A28078h
0x81AC79: mov     eax, ds:0B450FCh
0x81AC7E: mov     ebp, [edi+44h]
0x81AC81: cmp     ebp, eax
0x81AC83: mov     ebx, eax
0x81AC85: jz      short loc_81ACB9
0x81AC87: test    ebp, ebp
0x81AC89: jz      short loc_81ACA8
0x81AC8B: lea     eax, [ebp+4]
0x81AC8E: push    eax; lpAddend
0x81AC8F: call    dword ptr ds:0A2807Ch
0x81AC95: test    eax, eax
0x81AC97: jnz     short loc_81ACA8
0x81AC99: test    ebp, ebp
0x81AC9B: jz      short loc_81ACA8
0x81AC9D: mov     edx, [ebp+0]
0x81ACA0: mov     eax, [edx]
0x81ACA2: push    1
0x81ACA4: mov     ecx, ebp
0x81ACA6: call    eax
0x81ACA8: test    ebx, ebx
0x81ACAA: mov     [edi+44h], ebx
0x81ACAD: jz      short loc_81ACB9
0x81ACAF: add     ebx, 4
0x81ACB2: push    ebx; lpAddend
0x81ACB3: call    dword ptr ds:0A28078h
0x81ACB9: cmp     dword ptr [edi+30h], 0
0x81ACBD: jnz     short loc_81ACC7
0x81ACBF: call    sub_772DF0
0x81ACC4: mov     [edi+30h], eax
0x81ACC7: mov     ecx, [edi+30h]
0x81ACCA: push    0
0x81ACCC: push    0
0x81ACCE: push    1Bh
0x81ACD0: call    sub_772CD0
0x81ACD5: cmp     dword ptr [edi+30h], 0
0x81ACD9: jnz     short loc_81ACE3
0x81ACDB: call    sub_772DF0
0x81ACE0: mov     [edi+30h], eax
0x81ACE3: mov     ecx, [edi+30h]
0x81ACE6: push    0
0x81ACE8: push    0
0x81ACEA: push    0Fh
0x81ACEC: call    sub_772CD0
0x81ACF1: cmp     dword ptr [edi+30h], 0
0x81ACF5: jnz     short loc_81ACFF
0x81ACF7: call    sub_772DF0
0x81ACFC: mov     [edi+30h], eax
0x81ACFF: mov     ecx, [edi+30h]
0x81AD02: push    0
0x81AD04: push    1
0x81AD06: push    7
0x81AD08: call    sub_772CD0
0x81AD0D: cmp     dword ptr [edi+30h], 0
0x81AD11: jnz     short loc_81AD1B
0x81AD13: call    sub_772DF0
0x81AD18: mov     [edi+30h], eax
0x81AD1B: mov     ecx, [edi+30h]
0x81AD1E: push    0
0x81AD20: push    4
0x81AD22: push    17h
0x81AD24: call    sub_772CD0
0x81AD29: cmp     dword ptr [edi+30h], 0
0x81AD2D: jnz     short loc_81AD37
0x81AD2F: call    sub_772DF0
0x81AD34: mov     [edi+30h], eax
0x81AD37: mov     ecx, [edi+30h]
0x81AD3A: push    0
0x81AD3C: push    1
0x81AD3E: push    0Eh
0x81AD40: call    sub_772CD0
0x81AD45: cmp     dword ptr [edi+30h], 0
0x81AD49: jnz     short loc_81AD53
0x81AD4B: call    sub_772DF0
0x81AD50: mov     [edi+30h], eax
0x81AD53: mov     ecx, [edi+30h]
0x81AD56: push    0
0x81AD58: push    0
0x81AD5A: push    34h ; '4'
0x81AD5C: call    sub_772CD0
0x81AD61: or      ebx, 0FFFFFFFFh
0x81AD64: cmp     edi, ds:0B45668h
0x81AD6A: mov     dword ptr ds:0B43BE4h, 1082h
0x81AD74: mov     dword ptr ds:0B44274h, 1Ch
0x81AD7E: jz      short loc_81AD9E
0x81AD80: add     [edi+60h], ebx
0x81AD83: jnz     short loc_81AD8C
0x81AD85: mov     ecx, edi
0x81AD87: call    sub_7604D0
0x81AD8C: mov     edi, ds:0B45668h
0x81AD92: test    edi, edi
0x81AD94: mov     [esp+2Ch+var_14], edi
0x81AD98: jz      short loc_81AD9E
0x81AD9A: add     dword ptr [edi+60h], 1
0x81AD9E: cmp     dword ptr [edi+18h], 4
0x81ADA2: jnb     loc_81AF9A
0x81ADA8: lea     ecx, [esp+2Ch+var_10]
0x81ADAC: push    ecx
0x81ADAD: call    sub_772630
0x81ADB2: add     esp, 4
0x81ADB5: mov     ebp, eax
0x81ADB7: cmp     esi, [ebp+0]
0x81ADBA: mov     byte ptr [esp+2Ch+var_4], 6
0x81ADBF: jz      short loc_81ADE0
0x81ADC1: test    esi, esi
0x81ADC3: jz      short loc_81ADD1
0x81ADC5: add     [esi+5Ch], ebx
0x81ADC8: jnz     short loc_81ADD1
0x81ADCA: mov     ecx, esi
0x81ADCC: call    sub_772560
0x81ADD1: mov     esi, [ebp+0]
0x81ADD4: test    esi, esi
0x81ADD6: mov     [esp+2Ch+var_18], esi
0x81ADDA: jz      short loc_81ADE0
0x81ADDC: add     dword ptr [esi+5Ch], 1
0x81ADE0: mov     eax, [esp+2Ch+var_10]
0x81ADE4: test    eax, eax
0x81ADE6: mov     byte ptr [esp+2Ch+var_4], 1
0x81ADEB: jz      short loc_81ADFF
0x81ADED: add     [eax+5Ch], ebx
0x81ADF0: mov     ecx, eax
0x81ADF2: add     eax, 5Ch ; '\'
0x81ADF5: cmp     dword ptr [eax], 0
0x81ADF8: jnz     short loc_81ADFF
0x81ADFA: call    sub_772560
0x81ADFF: push    2
0x81AE01: push    1
0x81AE03: push    0
0x81AE05: push    esi
0x81AE06: call    sub_801110
0x81AE0B: mov     edx, [edi+14h]
0x81AE0E: add     esp, 10h
0x81AE11: push    esi; a3
0x81AE12: push    edx; a2
0x81AE13: mov     ecx, edi; this
0x81AE15: call    sub_760010
0x81AE1A: lea     eax, [esp+2Ch+var_10]
0x81AE1E: push    eax
0x81AE1F: call    sub_772630
0x81AE24: add     esp, 4
0x81AE27: mov     ebp, eax
0x81AE29: cmp     esi, [ebp+0]
0x81AE2C: mov     byte ptr [esp+2Ch+var_4], 7
0x81AE31: jz      short loc_81AE52
0x81AE33: test    esi, esi
0x81AE35: jz      short loc_81AE43
0x81AE37: add     [esi+5Ch], ebx
0x81AE3A: jnz     short loc_81AE43
0x81AE3C: mov     ecx, esi
0x81AE3E: call    sub_772560
0x81AE43: mov     esi, [ebp+0]
0x81AE46: test    esi, esi
0x81AE48: mov     [esp+2Ch+var_18], esi
0x81AE4C: jz      short loc_81AE52
0x81AE4E: add     dword ptr [esi+5Ch], 1
0x81AE52: mov     eax, [esp+2Ch+var_10]
0x81AE56: test    eax, eax
0x81AE58: mov     byte ptr [esp+2Ch+var_4], 1
0x81AE5D: jz      short loc_81AE71
0x81AE5F: add     [eax+5Ch], ebx
0x81AE62: mov     ecx, eax
0x81AE64: add     eax, 5Ch ; '\'
0x81AE67: cmp     dword ptr [eax], 0
0x81AE6A: jnz     short loc_81AE71
0x81AE6C: call    sub_772560
0x81AE71: push    2
0x81AE73: push    3
0x81AE75: push    1
0x81AE77: push    esi
0x81AE78: call    sub_801110
0x81AE7D: mov     ecx, ds:0B43110h
0x81AE83: add     esp, 10h
0x81AE86: push    ecx; a2
0x81AE87: mov     ecx, esi; this
0x81AE89: call    sub_76C910
0x81AE8E: mov     edx, [edi+14h]
0x81AE91: push    esi; a3
0x81AE92: push    edx; a2
0x81AE93: mov     ecx, edi; this
0x81AE95: call    sub_760010
0x81AE9A: lea     eax, [esp+2Ch+var_10]
0x81AE9E: push    eax
0x81AE9F: call    sub_772630
0x81AEA4: add     esp, 4
0x81AEA7: mov     ebp, eax
0x81AEA9: cmp     esi, [ebp+0]
0x81AEAC: mov     byte ptr [esp+2Ch+var_4], 8
0x81AEB1: jz      short loc_81AED2
0x81AEB3: test    esi, esi
0x81AEB5: jz      short loc_81AEC3
0x81AEB7: add     [esi+5Ch], ebx
0x81AEBA: jnz     short loc_81AEC3
0x81AEBC: mov     ecx, esi
0x81AEBE: call    sub_772560
0x81AEC3: mov     esi, [ebp+0]
0x81AEC6: test    esi, esi
0x81AEC8: mov     [esp+2Ch+var_18], esi
0x81AECC: jz      short loc_81AED2
0x81AECE: add     dword ptr [esi+5Ch], 1
0x81AED2: mov     eax, [esp+2Ch+var_10]
0x81AED6: test    eax, eax
0x81AED8: mov     byte ptr [esp+2Ch+var_4], 1
0x81AEDD: jz      short loc_81AEF1
0x81AEDF: add     [eax+5Ch], ebx
0x81AEE2: mov     ecx, eax
0x81AEE4: add     eax, 5Ch ; '\'
0x81AEE7: cmp     dword ptr [eax], 0
0x81AEEA: jnz     short loc_81AEF1
0x81AEEC: call    sub_772560
0x81AEF1: push    2
0x81AEF3: push    3
0x81AEF5: push    2
0x81AEF7: push    esi
0x81AEF8: call    sub_801110
0x81AEFD: mov     ecx, ds:0B430D4h
0x81AF03: add     esp, 10h
0x81AF06: push    ecx; a2
0x81AF07: mov     ecx, esi; this
0x81AF09: call    sub_76C910
0x81AF0E: mov     edx, [edi+14h]
0x81AF11: push    esi; a3
0x81AF12: push    edx; a2
0x81AF13: mov     ecx, edi; this
0x81AF15: call    sub_760010
0x81AF1A: lea     eax, [esp+2Ch+var_10]
0x81AF1E: push    eax
0x81AF1F: call    sub_772630
0x81AF24: add     esp, 4
0x81AF27: mov     ebp, eax
0x81AF29: cmp     esi, [ebp+0]
0x81AF2C: mov     byte ptr [esp+2Ch+var_4], 9
0x81AF31: jz      short loc_81AF52
0x81AF33: test    esi, esi
0x81AF35: jz      short loc_81AF43
0x81AF37: add     [esi+5Ch], ebx
0x81AF3A: jnz     short loc_81AF43
0x81AF3C: mov     ecx, esi
0x81AF3E: call    sub_772560
0x81AF43: mov     esi, [ebp+0]
0x81AF46: test    esi, esi
0x81AF48: mov     [esp+2Ch+var_18], esi
0x81AF4C: jz      short loc_81AF52
0x81AF4E: add     dword ptr [esi+5Ch], 1
0x81AF52: mov     eax, [esp+2Ch+var_10]
0x81AF56: test    eax, eax
0x81AF58: mov     byte ptr [esp+2Ch+var_4], 1
0x81AF5D: jz      short loc_81AF71
0x81AF5F: add     [eax+5Ch], ebx
0x81AF62: mov     ecx, eax
0x81AF64: add     eax, 5Ch ; '\'
0x81AF67: cmp     dword ptr [eax], 0
0x81AF6A: jnz     short loc_81AF71
0x81AF6C: call    sub_772560
0x81AF71: push    2
0x81AF73: push    1
0x81AF75: push    3
0x81AF77: push    esi
0x81AF78: call    sub_801110
0x81AF7D: mov     ecx, ds:0B430ECh
0x81AF83: add     esp, 10h
0x81AF86: push    ecx; a2
0x81AF87: mov     ecx, esi; this
0x81AF89: call    sub_76C910
0x81AF8E: mov     edx, [edi+14h]
0x81AF91: push    esi; a3
0x81AF92: push    edx; a2
0x81AF93: mov     ecx, edi; this
0x81AF95: call    sub_760010
0x81AF9A: mov     eax, ds:0B4534Ch
0x81AF9F: mov     ebp, [edi+58h]
0x81AFA2: cmp     ebp, eax
0x81AFA4: mov     ebx, eax
0x81AFA6: jz      short loc_81AFDA
0x81AFA8: test    ebp, ebp
0x81AFAA: jz      short loc_81AFC9
0x81AFAC: lea     eax, [ebp+4]
0x81AFAF: push    eax; lpAddend
0x81AFB0: call    dword ptr ds:0A2807Ch
0x81AFB6: test    eax, eax
0x81AFB8: jnz     short loc_81AFC9
0x81AFBA: test    ebp, ebp
0x81AFBC: jz      short loc_81AFC9
0x81AFBE: mov     edx, [ebp+0]
0x81AFC1: mov     eax, [edx]
0x81AFC3: push    1
0x81AFC5: mov     ecx, ebp
0x81AFC7: call    eax
0x81AFC9: test    ebx, ebx
0x81AFCB: mov     [edi+58h], ebx
0x81AFCE: jz      short loc_81AFDA
0x81AFD0: add     ebx, 4
0x81AFD3: push    ebx; lpAddend
0x81AFD4: call    dword ptr ds:0A28078h
0x81AFDA: mov     eax, ds:0B450FCh
0x81AFDF: mov     ebp, [edi+44h]
0x81AFE2: cmp     ebp, eax
0x81AFE4: mov     ebx, eax
0x81AFE6: jz      short loc_81B01A
0x81AFE8: test    ebp, ebp
0x81AFEA: jz      short loc_81B009
0x81AFEC: lea     ecx, [ebp+4]
0x81AFEF: push    ecx; lpAddend
0x81AFF0: call    dword ptr ds:0A2807Ch
0x81AFF6: test    eax, eax
0x81AFF8: jnz     short loc_81B009
0x81AFFA: test    ebp, ebp
0x81AFFC: jz      short loc_81B009
0x81AFFE: mov     edx, [ebp+0]
0x81B001: mov     eax, [edx]
0x81B003: push    1
0x81B005: mov     ecx, ebp
0x81B007: call    eax
0x81B009: test    ebx, ebx
0x81B00B: mov     [edi+44h], ebx
0x81B00E: jz      short loc_81B01A
0x81B010: add     ebx, 4
0x81B013: push    ebx; lpAddend
0x81B014: call    dword ptr ds:0A28078h
0x81B01A: cmp     dword ptr [edi+30h], 0
0x81B01E: jnz     short loc_81B028
0x81B020: call    sub_772DF0
0x81B025: mov     [edi+30h], eax
0x81B028: mov     ecx, [edi+30h]
0x81B02B: push    0
0x81B02D: push    0
0x81B02F: push    1Bh
0x81B031: call    sub_772CD0
0x81B036: cmp     dword ptr [edi+30h], 0
0x81B03A: jnz     short loc_81B044
0x81B03C: call    sub_772DF0
0x81B041: mov     [edi+30h], eax
0x81B044: mov     ecx, [edi+30h]
0x81B047: push    0
0x81B049: push    0
0x81B04B: push    0Fh
0x81B04D: call    sub_772CD0
0x81B052: cmp     dword ptr [edi+30h], 0
0x81B056: jnz     short loc_81B060
0x81B058: call    sub_772DF0
0x81B05D: mov     [edi+30h], eax
0x81B060: mov     ecx, [edi+30h]
0x81B063: push    0
0x81B065: push    1
0x81B067: push    7
0x81B069: call    sub_772CD0
0x81B06E: cmp     dword ptr [edi+30h], 0
0x81B072: jnz     short loc_81B07C
0x81B074: call    sub_772DF0
0x81B079: mov     [edi+30h], eax
0x81B07C: mov     ecx, [edi+30h]
0x81B07F: push    0
0x81B081: push    4
0x81B083: push    17h
0x81B085: call    sub_772CD0
0x81B08A: cmp     dword ptr [edi+30h], 0
0x81B08E: jnz     short loc_81B098
0x81B090: call    sub_772DF0
0x81B095: mov     [edi+30h], eax
0x81B098: mov     ecx, [edi+30h]
0x81B09B: push    0
0x81B09D: push    1
0x81B09F: push    0Eh
0x81B0A1: call    sub_772CD0
0x81B0A6: cmp     dword ptr [edi+30h], 0
0x81B0AA: jnz     short loc_81B0B4
0x81B0AC: call    sub_772DF0
0x81B0B1: mov     [edi+30h], eax
0x81B0B4: mov     ecx, [edi+30h]
0x81B0B7: push    0
0x81B0B9: push    0
0x81B0BB: push    34h ; '4'
0x81B0BD: call    sub_772CD0
0x81B0C2: or      ebx, 0FFFFFFFFh
0x81B0C5: test    esi, esi
0x81B0C7: mov     dword ptr ds:0B43BE8h, 41088h
0x81B0D1: mov     dword ptr ds:0B44278h, 1Ch
0x81B0DB: mov     byte ptr [esp+2Ch+var_4], 0
0x81B0E0: jz      short loc_81B0EE
0x81B0E2: add     [esi+5Ch], ebx
0x81B0E5: jnz     short loc_81B0EE
0x81B0E7: mov     ecx, esi
0x81B0E9: call    sub_772560
0x81B0EE: add     [edi+60h], ebx
0x81B0F1: mov     [esp+2Ch+var_4], ebx
0x81B0F5: jnz     short loc_81B0FE
0x81B0F7: mov     ecx, edi
0x81B0F9: call    sub_7604D0
0x81B0FE: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81B102: mov     large fs:0, ecx
0x81B109: pop     ecx
0x81B10A: pop     edi
0x81B10B: pop     esi
0x81B10C: pop     ebp
0x81B10D: pop     ebx
0x81B10E: add     esp, 18h
0x81B111: retn
