0x81BCE0: push    0FFFFFFFFh
0x81BCE2: push    offset SEH_81BCE0
0x81BCE7: mov     eax, large fs:0
0x81BCED: push    eax
0x81BCEE: sub     esp, 0Ch
0x81BCF1: push    ebx
0x81BCF2: push    ebp
0x81BCF3: push    esi
0x81BCF4: push    edi
0x81BCF5: mov     eax, ds:0B30AACh
0x81BCFA: xor     eax, esp
0x81BCFC: push    eax
0x81BCFD: lea     eax, [esp+2Ch+var_C]
0x81BD01: mov     large fs:0, eax
0x81BD07: xor     esi, esi
0x81BD09: mov     [esp+2Ch+var_14], esi
0x81BD0D: xor     edi, edi
0x81BD0F: mov     [esp+2Ch+var_4], esi
0x81BD13: mov     [esp+2Ch+var_18], edi
0x81BD17: mov     eax, ds:0B459B0h
0x81BD1C: test    eax, eax
0x81BD1E: mov     ebx, 1
0x81BD23: mov     byte ptr [esp+2Ch+var_4], bl
0x81BD27: jz      short loc_81BD36
0x81BD29: mov     esi, eax
0x81BD2B: test    esi, esi
0x81BD2D: mov     [esp+2Ch+var_14], esi
0x81BD31: jz      short loc_81BD36
0x81BD33: add     [esi+60h], ebx
0x81BD36: mov     eax, [esi+18h]
0x81BD39: cmp     eax, ebx
0x81BD3B: jnb     short loc_81BD93
0x81BD3D: lea     eax, [esp+2Ch+var_10]
0x81BD41: push    eax
0x81BD42: call    sub_772630
0x81BD47: add     esp, 4
0x81BD4A: mov     eax, [eax]
0x81BD4C: test    eax, eax
0x81BD4E: jz      short loc_81BD59
0x81BD50: mov     edi, eax
0x81BD52: add     [edi+5Ch], ebx
0x81BD55: mov     [esp+2Ch+var_18], edi
0x81BD59: mov     eax, [esp+2Ch+var_10]
0x81BD5D: test    eax, eax
0x81BD5F: mov     byte ptr [esp+2Ch+var_4], 1
0x81BD64: jz      short loc_81BD79
0x81BD66: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81BD6A: mov     ecx, eax
0x81BD6C: add     eax, 5Ch ; '\'
0x81BD6F: cmp     dword ptr [eax], 0
0x81BD72: jnz     short loc_81BD79
0x81BD74: call    sub_772560
0x81BD79: push    2
0x81BD7B: push    ebx
0x81BD7C: push    0
0x81BD7E: push    edi
0x81BD7F: call    sub_801110
0x81BD84: mov     ecx, [esi+14h]
0x81BD87: add     esp, 10h
0x81BD8A: push    edi; a3
0x81BD8B: push    ecx; a2
0x81BD8C: mov     ecx, esi; this
0x81BD8E: call    sub_760010
0x81BD93: mov     eax, ds:0B452A4h
0x81BD98: mov     ebp, [esi+58h]
0x81BD9B: cmp     ebp, eax
0x81BD9D: mov     ebx, eax
0x81BD9F: jz      short loc_81BDD3
0x81BDA1: test    ebp, ebp
0x81BDA3: jz      short loc_81BDC2
0x81BDA5: lea     edx, [ebp+4]
0x81BDA8: push    edx; lpAddend
0x81BDA9: call    dword ptr ds:0A2807Ch
0x81BDAF: test    eax, eax
0x81BDB1: jnz     short loc_81BDC2
0x81BDB3: test    ebp, ebp
0x81BDB5: jz      short loc_81BDC2
0x81BDB7: mov     eax, [ebp+0]
0x81BDBA: mov     edx, [eax]
0x81BDBC: push    1
0x81BDBE: mov     ecx, ebp
0x81BDC0: call    edx
0x81BDC2: test    ebx, ebx
0x81BDC4: mov     [esi+58h], ebx
0x81BDC7: jz      short loc_81BDD3
0x81BDC9: add     ebx, 4
0x81BDCC: push    ebx; lpAddend
0x81BDCD: call    dword ptr ds:0A28078h
0x81BDD3: mov     eax, ds:0B45094h
0x81BDD8: mov     ebp, [esi+44h]
0x81BDDB: cmp     ebp, eax
0x81BDDD: mov     ebx, eax
0x81BDDF: jz      short loc_81BE13
0x81BDE1: test    ebp, ebp
0x81BDE3: jz      short loc_81BE02
0x81BDE5: lea     eax, [ebp+4]
0x81BDE8: push    eax; lpAddend
0x81BDE9: call    dword ptr ds:0A2807Ch
0x81BDEF: test    eax, eax
0x81BDF1: jnz     short loc_81BE02
0x81BDF3: test    ebp, ebp
0x81BDF5: jz      short loc_81BE02
0x81BDF7: mov     edx, [ebp+0]
0x81BDFA: mov     eax, [edx]
0x81BDFC: push    1
0x81BDFE: mov     ecx, ebp
0x81BE00: call    eax
0x81BE02: test    ebx, ebx
0x81BE04: mov     [esi+44h], ebx
0x81BE07: jz      short loc_81BE13
0x81BE09: add     ebx, 4
0x81BE0C: push    ebx; lpAddend
0x81BE0D: call    dword ptr ds:0A28078h
0x81BE13: cmp     dword ptr [esi+30h], 0
0x81BE17: jnz     short loc_81BE21
0x81BE19: call    sub_772DF0
0x81BE1E: mov     [esi+30h], eax
0x81BE21: mov     ecx, [esi+30h]
0x81BE24: push    0
0x81BE26: push    1
0x81BE28: push    1Bh
0x81BE2A: call    sub_772CD0
0x81BE2F: cmp     dword ptr [esi+30h], 0
0x81BE33: jnz     short loc_81BE3D
0x81BE35: call    sub_772DF0
0x81BE3A: mov     [esi+30h], eax
0x81BE3D: mov     ecx, [esi+30h]
0x81BE40: push    0
0x81BE42: push    9
0x81BE44: push    13h
0x81BE46: call    sub_772CD0
0x81BE4B: cmp     dword ptr [esi+30h], 0
0x81BE4F: jnz     short loc_81BE59
0x81BE51: call    sub_772DF0
0x81BE56: mov     [esi+30h], eax
0x81BE59: mov     ecx, [esi+30h]
0x81BE5C: push    0
0x81BE5E: push    1
0x81BE60: push    14h
0x81BE62: call    sub_772CD0
0x81BE67: cmp     dword ptr [esi+30h], 0
0x81BE6B: jnz     short loc_81BE75
0x81BE6D: call    sub_772DF0
0x81BE72: mov     [esi+30h], eax
0x81BE75: mov     ecx, [esi+30h]
0x81BE78: push    0
0x81BE7A: push    0
0x81BE7C: push    0Fh
0x81BE7E: call    sub_772CD0
0x81BE83: cmp     dword ptr [esi+30h], 0
0x81BE87: jnz     short loc_81BE91
0x81BE89: call    sub_772DF0
0x81BE8E: mov     [esi+30h], eax
0x81BE91: mov     ecx, [esi+30h]
0x81BE94: push    0
0x81BE96: push    1
0x81BE98: push    7
0x81BE9A: call    sub_772CD0
0x81BE9F: cmp     dword ptr [esi+30h], 0
0x81BEA3: jnz     short loc_81BEAD
0x81BEA5: call    sub_772DF0
0x81BEAA: mov     [esi+30h], eax
0x81BEAD: mov     ecx, [esi+30h]
0x81BEB0: push    0
0x81BEB2: push    3
0x81BEB4: push    17h
0x81BEB6: call    sub_772CD0
0x81BEBB: cmp     dword ptr [esi+30h], 0
0x81BEBF: jnz     short loc_81BEC9
0x81BEC1: call    sub_772DF0
0x81BEC6: mov     [esi+30h], eax
0x81BEC9: mov     ecx, [esi+30h]
0x81BECC: push    0
0x81BECE: push    0
0x81BED0: push    0Eh
0x81BED2: call    sub_772CD0
0x81BED7: cmp     dword ptr [esi+30h], 0
0x81BEDB: jnz     short loc_81BEE5
0x81BEDD: call    sub_772DF0
0x81BEE2: mov     [esi+30h], eax
0x81BEE5: mov     ecx, [esi+30h]
0x81BEE8: push    0
0x81BEEA: push    0
0x81BEEC: push    34h ; '4'
0x81BEEE: call    sub_772CD0
0x81BEF3: or      ebx, 0FFFFFFFFh
0x81BEF6: cmp     esi, ds:0B459B4h
0x81BEFC: mov     dword ptr ds:0B43F30h, 2
0x81BF06: mov     dword ptr ds:0B445C0h, 0
0x81BF10: jz      short loc_81BF30
0x81BF12: add     [esi+60h], ebx
0x81BF15: jnz     short loc_81BF1E
0x81BF17: mov     ecx, esi
0x81BF19: call    sub_7604D0
0x81BF1E: mov     esi, ds:0B459B4h
0x81BF24: test    esi, esi
0x81BF26: mov     [esp+2Ch+var_14], esi
0x81BF2A: jz      short loc_81BF30
0x81BF2C: add     dword ptr [esi+60h], 1
0x81BF30: mov     eax, [esi+18h]
0x81BF33: cmp     eax, 3
0x81BF36: jnb     loc_81C092
0x81BF3C: lea     ecx, [esp+2Ch+var_10]
0x81BF40: push    ecx
0x81BF41: call    sub_772630
0x81BF46: add     esp, 4
0x81BF49: mov     ebp, eax
0x81BF4B: cmp     edi, [ebp+0]
0x81BF4E: mov     byte ptr [esp+2Ch+var_4], 3
0x81BF53: jz      short loc_81BF74
0x81BF55: test    edi, edi
0x81BF57: jz      short loc_81BF65
0x81BF59: add     [edi+5Ch], ebx
0x81BF5C: jnz     short loc_81BF65
0x81BF5E: mov     ecx, edi
0x81BF60: call    sub_772560
0x81BF65: mov     edi, [ebp+0]
0x81BF68: test    edi, edi
0x81BF6A: mov     [esp+2Ch+var_18], edi
0x81BF6E: jz      short loc_81BF74
0x81BF70: add     dword ptr [edi+5Ch], 1
0x81BF74: mov     eax, [esp+2Ch+var_10]
0x81BF78: test    eax, eax
0x81BF7A: mov     byte ptr [esp+2Ch+var_4], 1
0x81BF7F: jz      short loc_81BF93
0x81BF81: add     [eax+5Ch], ebx
0x81BF84: mov     ecx, eax
0x81BF86: add     eax, 5Ch ; '\'
0x81BF89: cmp     dword ptr [eax], 0
0x81BF8C: jnz     short loc_81BF93
0x81BF8E: call    sub_772560
0x81BF93: push    2
0x81BF95: push    1
0x81BF97: push    0
0x81BF99: push    edi
0x81BF9A: call    sub_801110
0x81BF9F: mov     edx, [esi+14h]
0x81BFA2: add     esp, 10h
0x81BFA5: push    edi; a3
0x81BFA6: push    edx; a2
0x81BFA7: mov     ecx, esi; this
0x81BFA9: call    sub_760010
0x81BFAE: lea     eax, [esp+2Ch+var_10]
0x81BFB2: push    eax
0x81BFB3: call    sub_772630
0x81BFB8: add     esp, 4
0x81BFBB: mov     ebp, eax
0x81BFBD: cmp     edi, [ebp+0]
0x81BFC0: mov     byte ptr [esp+2Ch+var_4], 4
0x81BFC5: jz      short loc_81BFE6
0x81BFC7: test    edi, edi
0x81BFC9: jz      short loc_81BFD7
0x81BFCB: add     [edi+5Ch], ebx
0x81BFCE: jnz     short loc_81BFD7
0x81BFD0: mov     ecx, edi
0x81BFD2: call    sub_772560
0x81BFD7: mov     edi, [ebp+0]
0x81BFDA: test    edi, edi
0x81BFDC: mov     [esp+2Ch+var_18], edi
0x81BFE0: jz      short loc_81BFE6
0x81BFE2: add     dword ptr [edi+5Ch], 1
0x81BFE6: mov     eax, [esp+2Ch+var_10]
0x81BFEA: test    eax, eax
0x81BFEC: mov     byte ptr [esp+2Ch+var_4], 1
0x81BFF1: jz      short loc_81C005
0x81BFF3: add     [eax+5Ch], ebx
0x81BFF6: mov     ecx, eax
0x81BFF8: add     eax, 5Ch ; '\'
0x81BFFB: cmp     dword ptr [eax], 0
0x81BFFE: jnz     short loc_81C005
0x81C000: call    sub_772560
0x81C005: push    2
0x81C007: push    1
0x81C009: push    1
0x81C00B: push    edi
0x81C00C: call    sub_801110
0x81C011: mov     ecx, [esi+14h]
0x81C014: add     esp, 10h
0x81C017: push    edi; a3
0x81C018: push    ecx; a2
0x81C019: mov     ecx, esi; this
0x81C01B: call    sub_760010
0x81C020: lea     edx, [esp+2Ch+var_10]
0x81C024: push    edx
0x81C025: call    sub_772630
0x81C02A: add     esp, 4
0x81C02D: mov     ebp, eax
0x81C02F: cmp     edi, [ebp+0]
0x81C032: mov     byte ptr [esp+2Ch+var_4], 5
0x81C037: jz      short loc_81C058
0x81C039: test    edi, edi
0x81C03B: jz      short loc_81C049
0x81C03D: add     [edi+5Ch], ebx
0x81C040: jnz     short loc_81C049
0x81C042: mov     ecx, edi
0x81C044: call    sub_772560
0x81C049: mov     edi, [ebp+0]
0x81C04C: test    edi, edi
0x81C04E: mov     [esp+2Ch+var_18], edi
0x81C052: jz      short loc_81C058
0x81C054: add     dword ptr [edi+5Ch], 1
0x81C058: mov     eax, [esp+2Ch+var_10]
0x81C05C: test    eax, eax
0x81C05E: mov     byte ptr [esp+2Ch+var_4], 1
0x81C063: jz      short loc_81C077
0x81C065: add     [eax+5Ch], ebx
0x81C068: mov     ecx, eax
0x81C06A: add     eax, 5Ch ; '\'
0x81C06D: cmp     dword ptr [eax], 0
0x81C070: jnz     short loc_81C077
0x81C072: call    sub_772560
0x81C077: push    2
0x81C079: push    1
0x81C07B: push    2
0x81C07D: push    edi
0x81C07E: call    sub_801110
0x81C083: mov     eax, [esi+14h]
0x81C086: add     esp, 10h
0x81C089: push    edi; a3
0x81C08A: push    eax; a2
0x81C08B: mov     ecx, esi; this
0x81C08D: call    sub_760010
0x81C092: mov     eax, ds:0B452ACh
0x81C097: mov     ebp, [esi+58h]
0x81C09A: cmp     ebp, eax
0x81C09C: mov     ebx, eax
0x81C09E: jz      short loc_81C0D2
0x81C0A0: test    ebp, ebp
0x81C0A2: jz      short loc_81C0C1
0x81C0A4: lea     ecx, [ebp+4]
0x81C0A7: push    ecx; lpAddend
0x81C0A8: call    dword ptr ds:0A2807Ch
0x81C0AE: test    eax, eax
0x81C0B0: jnz     short loc_81C0C1
0x81C0B2: test    ebp, ebp
0x81C0B4: jz      short loc_81C0C1
0x81C0B6: mov     edx, [ebp+0]
0x81C0B9: mov     eax, [edx]
0x81C0BB: push    1
0x81C0BD: mov     ecx, ebp
0x81C0BF: call    eax
0x81C0C1: test    ebx, ebx
0x81C0C3: mov     [esi+58h], ebx
0x81C0C6: jz      short loc_81C0D2
0x81C0C8: add     ebx, 4
0x81C0CB: push    ebx; lpAddend
0x81C0CC: call    dword ptr ds:0A28078h
0x81C0D2: mov     eax, ds:0B4509Ch
0x81C0D7: mov     ebp, [esi+44h]
0x81C0DA: cmp     ebp, eax
0x81C0DC: mov     ebx, eax
0x81C0DE: jz      short loc_81C112
0x81C0E0: test    ebp, ebp
0x81C0E2: jz      short loc_81C101
0x81C0E4: lea     ecx, [ebp+4]
0x81C0E7: push    ecx; lpAddend
0x81C0E8: call    dword ptr ds:0A2807Ch
0x81C0EE: test    eax, eax
0x81C0F0: jnz     short loc_81C101
0x81C0F2: test    ebp, ebp
0x81C0F4: jz      short loc_81C101
0x81C0F6: mov     edx, [ebp+0]
0x81C0F9: mov     eax, [edx]
0x81C0FB: push    1
0x81C0FD: mov     ecx, ebp
0x81C0FF: call    eax
0x81C101: test    ebx, ebx
0x81C103: mov     [esi+44h], ebx
0x81C106: jz      short loc_81C112
0x81C108: add     ebx, 4
0x81C10B: push    ebx; lpAddend
0x81C10C: call    dword ptr ds:0A28078h
0x81C112: cmp     dword ptr [esi+30h], 0
0x81C116: jnz     short loc_81C120
0x81C118: call    sub_772DF0
0x81C11D: mov     [esi+30h], eax
0x81C120: mov     ecx, [esi+30h]
0x81C123: push    0
0x81C125: push    1
0x81C127: push    1Bh
0x81C129: call    sub_772CD0
0x81C12E: cmp     dword ptr [esi+30h], 0
0x81C132: jnz     short loc_81C13C
0x81C134: call    sub_772DF0
0x81C139: mov     [esi+30h], eax
0x81C13C: mov     ecx, [esi+30h]
0x81C13F: push    0
0x81C141: push    9
0x81C143: push    13h
0x81C145: call    sub_772CD0
0x81C14A: cmp     dword ptr [esi+30h], 0
0x81C14E: jnz     short loc_81C158
0x81C150: call    sub_772DF0
0x81C155: mov     [esi+30h], eax
0x81C158: mov     ecx, [esi+30h]
0x81C15B: push    0
0x81C15D: push    1
0x81C15F: push    14h
0x81C161: call    sub_772CD0
0x81C166: cmp     dword ptr [esi+30h], 0
0x81C16A: jnz     short loc_81C174
0x81C16C: call    sub_772DF0
0x81C171: mov     [esi+30h], eax
0x81C174: mov     ecx, [esi+30h]
0x81C177: push    0
0x81C179: push    0
0x81C17B: push    0Fh
0x81C17D: call    sub_772CD0
0x81C182: cmp     dword ptr [esi+30h], 0
0x81C186: jnz     short loc_81C190
0x81C188: call    sub_772DF0
0x81C18D: mov     [esi+30h], eax
0x81C190: mov     ecx, [esi+30h]
0x81C193: push    0
0x81C195: push    1
0x81C197: push    7
0x81C199: call    sub_772CD0
0x81C19E: cmp     dword ptr [esi+30h], 0
0x81C1A2: jnz     short loc_81C1AC
0x81C1A4: call    sub_772DF0
0x81C1A9: mov     [esi+30h], eax
0x81C1AC: mov     ecx, [esi+30h]
0x81C1AF: push    0
0x81C1B1: push    3
0x81C1B3: push    17h
0x81C1B5: call    sub_772CD0
0x81C1BA: cmp     dword ptr [esi+30h], 0
0x81C1BE: jnz     short loc_81C1C8
0x81C1C0: call    sub_772DF0
0x81C1C5: mov     [esi+30h], eax
0x81C1C8: mov     ecx, [esi+30h]
0x81C1CB: push    0
0x81C1CD: push    0
0x81C1CF: push    0Eh
0x81C1D1: call    sub_772CD0
0x81C1D6: cmp     dword ptr [esi+30h], 0
0x81C1DA: jnz     short loc_81C1E4
0x81C1DC: call    sub_772DF0
0x81C1E1: mov     [esi+30h], eax
0x81C1E4: mov     ecx, [esi+30h]
0x81C1E7: push    0
0x81C1E9: push    0
0x81C1EB: push    34h ; '4'
0x81C1ED: call    sub_772CD0
0x81C1F2: mov     ebp, 2
0x81C1F7: or      ebx, 0FFFFFFFFh
0x81C1FA: cmp     esi, ds:0B459B8h
0x81C200: mov     ds:0B43F34h, ebp
0x81C206: mov     dword ptr ds:0B445C4h, 0
0x81C210: jz      short loc_81C230
0x81C212: add     [esi+60h], ebx
0x81C215: jnz     short loc_81C21E
0x81C217: mov     ecx, esi
0x81C219: call    sub_7604D0
0x81C21E: mov     esi, ds:0B459B8h
0x81C224: test    esi, esi
0x81C226: mov     [esp+2Ch+var_14], esi
0x81C22A: jz      short loc_81C230
0x81C22C: add     dword ptr [esi+60h], 1
0x81C230: cmp     [esi+18h], ebp
0x81C233: jnb     loc_81C31D
0x81C239: lea     ecx, [esp+2Ch+var_10]
0x81C23D: push    ecx
0x81C23E: call    sub_772630
0x81C243: add     esp, 4
0x81C246: mov     ebp, eax
0x81C248: cmp     edi, [ebp+0]
0x81C24B: mov     byte ptr [esp+2Ch+var_4], 6
0x81C250: jz      short loc_81C271
0x81C252: test    edi, edi
0x81C254: jz      short loc_81C262
0x81C256: add     [edi+5Ch], ebx
0x81C259: jnz     short loc_81C262
0x81C25B: mov     ecx, edi
0x81C25D: call    sub_772560
0x81C262: mov     edi, [ebp+0]
0x81C265: test    edi, edi
0x81C267: mov     [esp+2Ch+var_18], edi
0x81C26B: jz      short loc_81C271
0x81C26D: add     dword ptr [edi+5Ch], 1
0x81C271: mov     eax, [esp+2Ch+var_10]
0x81C275: test    eax, eax
0x81C277: mov     byte ptr [esp+2Ch+var_4], 1
0x81C27C: jz      short loc_81C290
0x81C27E: add     [eax+5Ch], ebx
0x81C281: mov     ecx, eax
0x81C283: add     eax, 5Ch ; '\'
0x81C286: cmp     dword ptr [eax], 0
0x81C289: jnz     short loc_81C290
0x81C28B: call    sub_772560
0x81C290: push    2
0x81C292: push    1
0x81C294: push    0
0x81C296: push    edi
0x81C297: call    sub_801110
0x81C29C: mov     edx, [esi+14h]
0x81C29F: add     esp, 10h
0x81C2A2: push    edi; a3
0x81C2A3: push    edx; a2
0x81C2A4: mov     ecx, esi; this
0x81C2A6: call    sub_760010
0x81C2AB: lea     eax, [esp+2Ch+var_10]
0x81C2AF: push    eax
0x81C2B0: call    sub_772630
0x81C2B5: add     esp, 4
0x81C2B8: mov     ebp, eax
0x81C2BA: cmp     edi, [ebp+0]
0x81C2BD: mov     byte ptr [esp+2Ch+var_4], 7
0x81C2C2: jz      short loc_81C2E3
0x81C2C4: test    edi, edi
0x81C2C6: jz      short loc_81C2D4
0x81C2C8: add     [edi+5Ch], ebx
0x81C2CB: jnz     short loc_81C2D4
0x81C2CD: mov     ecx, edi
0x81C2CF: call    sub_772560
0x81C2D4: mov     edi, [ebp+0]
0x81C2D7: test    edi, edi
0x81C2D9: mov     [esp+2Ch+var_18], edi
0x81C2DD: jz      short loc_81C2E3
0x81C2DF: add     dword ptr [edi+5Ch], 1
0x81C2E3: mov     eax, [esp+2Ch+var_10]
0x81C2E7: test    eax, eax
0x81C2E9: mov     byte ptr [esp+2Ch+var_4], 1
0x81C2EE: jz      short loc_81C302
0x81C2F0: add     [eax+5Ch], ebx
0x81C2F3: mov     ecx, eax
0x81C2F5: add     eax, 5Ch ; '\'
0x81C2F8: cmp     dword ptr [eax], 0
0x81C2FB: jnz     short loc_81C302
0x81C2FD: call    sub_772560
0x81C302: push    2
0x81C304: push    1
0x81C306: push    1
0x81C308: push    edi
0x81C309: call    sub_801110
0x81C30E: mov     ecx, [esi+14h]
0x81C311: add     esp, 10h
0x81C314: push    edi; a3
0x81C315: push    ecx; a2
0x81C316: mov     ecx, esi; this
0x81C318: call    sub_760010
0x81C31D: mov     eax, ds:0B452A8h
0x81C322: mov     ebp, [esi+58h]
0x81C325: cmp     ebp, eax
0x81C327: mov     ebx, eax
0x81C329: jz      short loc_81C35D
0x81C32B: test    ebp, ebp
0x81C32D: jz      short loc_81C34C
0x81C32F: lea     edx, [ebp+4]
0x81C332: push    edx; lpAddend
0x81C333: call    dword ptr ds:0A2807Ch
0x81C339: test    eax, eax
0x81C33B: jnz     short loc_81C34C
0x81C33D: test    ebp, ebp
0x81C33F: jz      short loc_81C34C
0x81C341: mov     eax, [ebp+0]
0x81C344: mov     edx, [eax]
0x81C346: push    1
0x81C348: mov     ecx, ebp
0x81C34A: call    edx
0x81C34C: test    ebx, ebx
0x81C34E: mov     [esi+58h], ebx
0x81C351: jz      short loc_81C35D
0x81C353: add     ebx, 4
0x81C356: push    ebx; lpAddend
0x81C357: call    dword ptr ds:0A28078h
0x81C35D: mov     eax, ds:0B450A0h
0x81C362: mov     ebp, [esi+44h]
0x81C365: cmp     ebp, eax
0x81C367: mov     ebx, eax
0x81C369: jz      short loc_81C39D
0x81C36B: test    ebp, ebp
0x81C36D: jz      short loc_81C38C
0x81C36F: lea     eax, [ebp+4]
0x81C372: push    eax; lpAddend
0x81C373: call    dword ptr ds:0A2807Ch
0x81C379: test    eax, eax
0x81C37B: jnz     short loc_81C38C
0x81C37D: test    ebp, ebp
0x81C37F: jz      short loc_81C38C
0x81C381: mov     edx, [ebp+0]
0x81C384: mov     eax, [edx]
0x81C386: push    1
0x81C388: mov     ecx, ebp
0x81C38A: call    eax
0x81C38C: test    ebx, ebx
0x81C38E: mov     [esi+44h], ebx
0x81C391: jz      short loc_81C39D
0x81C393: add     ebx, 4
0x81C396: push    ebx; lpAddend
0x81C397: call    dword ptr ds:0A28078h
0x81C39D: cmp     dword ptr [esi+30h], 0
0x81C3A1: jnz     short loc_81C3AB
0x81C3A3: call    sub_772DF0
0x81C3A8: mov     [esi+30h], eax
0x81C3AB: mov     ecx, [esi+30h]
0x81C3AE: push    0
0x81C3B0: mov     ebp, 1
0x81C3B5: push    ebp
0x81C3B6: push    1Bh
0x81C3B8: call    sub_772CD0
0x81C3BD: cmp     dword ptr [esi+30h], 0
0x81C3C1: jnz     short loc_81C3CB
0x81C3C3: call    sub_772DF0
0x81C3C8: mov     [esi+30h], eax
0x81C3CB: mov     ecx, [esi+30h]
0x81C3CE: push    0
0x81C3D0: push    9
0x81C3D2: push    13h
0x81C3D4: call    sub_772CD0
0x81C3D9: cmp     dword ptr [esi+30h], 0
0x81C3DD: jnz     short loc_81C3E7
0x81C3DF: call    sub_772DF0
0x81C3E4: mov     [esi+30h], eax
0x81C3E7: mov     ecx, [esi+30h]
0x81C3EA: push    0
0x81C3EC: push    ebp
0x81C3ED: push    14h
0x81C3EF: call    sub_772CD0
0x81C3F4: cmp     dword ptr [esi+30h], 0
0x81C3F8: jnz     short loc_81C402
0x81C3FA: call    sub_772DF0
0x81C3FF: mov     [esi+30h], eax
0x81C402: mov     ecx, [esi+30h]
0x81C405: push    0
0x81C407: push    ebp
0x81C408: push    0Fh
0x81C40A: call    sub_772CD0
0x81C40F: cmp     dword ptr [esi+30h], 0
0x81C413: jnz     short loc_81C41D
0x81C415: call    sub_772DF0
0x81C41A: mov     [esi+30h], eax
0x81C41D: mov     ecx, [esi+30h]
0x81C420: push    0
0x81C422: push    ebp
0x81C423: push    7
0x81C425: call    sub_772CD0
0x81C42A: cmp     dword ptr [esi+30h], 0
0x81C42E: jnz     short loc_81C438
0x81C430: call    sub_772DF0
0x81C435: mov     [esi+30h], eax
0x81C438: mov     ecx, [esi+30h]
0x81C43B: push    0
0x81C43D: push    3
0x81C43F: push    17h
0x81C441: call    sub_772CD0
0x81C446: cmp     dword ptr [esi+30h], 0
0x81C44A: jnz     short loc_81C454
0x81C44C: call    sub_772DF0
0x81C451: mov     [esi+30h], eax
0x81C454: mov     ecx, [esi+30h]
0x81C457: push    0
0x81C459: push    0
0x81C45B: push    0Eh
0x81C45D: call    sub_772CD0
0x81C462: cmp     dword ptr [esi+30h], 0
0x81C466: jnz     short loc_81C470
0x81C468: call    sub_772DF0
0x81C46D: mov     [esi+30h], eax
0x81C470: mov     ecx, [esi+30h]
0x81C473: push    0
0x81C475: push    0
0x81C477: push    34h ; '4'
0x81C479: call    sub_772CD0
0x81C47E: cmp     esi, ds:0B459BCh
0x81C484: mov     dword ptr ds:0B43F38h, 2
0x81C48E: mov     dword ptr ds:0B445C8h, 80h ; '€'
0x81C498: jz      short loc_81C4B8
0x81C49A: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81C49E: jnz     short loc_81C4A7
0x81C4A0: mov     ecx, esi
0x81C4A2: call    sub_7604D0
0x81C4A7: mov     esi, ds:0B459BCh
0x81C4AD: test    esi, esi
0x81C4AF: mov     [esp+2Ch+var_14], esi
0x81C4B3: jz      short loc_81C4B8
0x81C4B5: add     [esi+60h], ebp
0x81C4B8: cmp     [esi+18h], ebp
0x81C4BB: jnb     short loc_81C52D
0x81C4BD: lea     ecx, [esp+2Ch+var_10]
0x81C4C1: push    ecx
0x81C4C2: call    sub_772630
0x81C4C7: add     esp, 4
0x81C4CA: mov     ebx, eax
0x81C4CC: cmp     edi, [ebx]
0x81C4CE: mov     byte ptr [esp+2Ch+var_4], 8
0x81C4D3: jz      short loc_81C4F3
0x81C4D5: test    edi, edi
0x81C4D7: jz      short loc_81C4E6
0x81C4D9: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x81C4DD: jnz     short loc_81C4E6
0x81C4DF: mov     ecx, edi
0x81C4E1: call    sub_772560
0x81C4E6: mov     edi, [ebx]
0x81C4E8: test    edi, edi
0x81C4EA: mov     [esp+2Ch+var_18], edi
0x81C4EE: jz      short loc_81C4F3
0x81C4F0: add     [edi+5Ch], ebp
0x81C4F3: mov     eax, [esp+2Ch+var_10]
0x81C4F7: test    eax, eax
0x81C4F9: mov     byte ptr [esp+2Ch+var_4], 1
0x81C4FE: jz      short loc_81C513
0x81C500: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81C504: mov     ecx, eax
0x81C506: add     eax, 5Ch ; '\'
0x81C509: cmp     dword ptr [eax], 0
0x81C50C: jnz     short loc_81C513
0x81C50E: call    sub_772560
0x81C513: push    2
0x81C515: push    ebp
0x81C516: push    0
0x81C518: push    edi
0x81C519: call    sub_801110
0x81C51E: mov     edx, [esi+14h]
0x81C521: add     esp, 10h
0x81C524: push    edi; a3
0x81C525: push    edx; a2
0x81C526: mov     ecx, esi; this
0x81C528: call    sub_760010
0x81C52D: mov     eax, ds:0B45320h
0x81C532: mov     ebp, [esi+58h]
0x81C535: cmp     ebp, eax
0x81C537: mov     ebx, eax
0x81C539: jz      short loc_81C56D
0x81C53B: test    ebp, ebp
0x81C53D: jz      short loc_81C55C
0x81C53F: lea     eax, [ebp+4]
0x81C542: push    eax; lpAddend
0x81C543: call    dword ptr ds:0A2807Ch
0x81C549: test    eax, eax
0x81C54B: jnz     short loc_81C55C
0x81C54D: test    ebp, ebp
0x81C54F: jz      short loc_81C55C
0x81C551: mov     edx, [ebp+0]
0x81C554: mov     eax, [edx]
0x81C556: push    1
0x81C558: mov     ecx, ebp
0x81C55A: call    eax
0x81C55C: test    ebx, ebx
0x81C55E: mov     [esi+58h], ebx
0x81C561: jz      short loc_81C56D
0x81C563: add     ebx, 4
0x81C566: push    ebx; lpAddend
0x81C567: call    dword ptr ds:0A28078h
0x81C56D: mov     eax, ds:0B45094h
0x81C572: mov     ebp, [esi+44h]
0x81C575: cmp     ebp, eax
0x81C577: mov     ebx, eax
0x81C579: jz      short loc_81C5AD
0x81C57B: test    ebp, ebp
0x81C57D: jz      short loc_81C59C
0x81C57F: lea     ecx, [ebp+4]
0x81C582: push    ecx; lpAddend
0x81C583: call    dword ptr ds:0A2807Ch
0x81C589: test    eax, eax
0x81C58B: jnz     short loc_81C59C
0x81C58D: test    ebp, ebp
0x81C58F: jz      short loc_81C59C
0x81C591: mov     edx, [ebp+0]
0x81C594: mov     eax, [edx]
0x81C596: push    1
0x81C598: mov     ecx, ebp
0x81C59A: call    eax
0x81C59C: test    ebx, ebx
0x81C59E: mov     [esi+44h], ebx
0x81C5A1: jz      short loc_81C5AD
0x81C5A3: add     ebx, 4
0x81C5A6: push    ebx; lpAddend
0x81C5A7: call    dword ptr ds:0A28078h
0x81C5AD: cmp     dword ptr [esi+30h], 0
0x81C5B1: jnz     short loc_81C5BB
0x81C5B3: call    sub_772DF0
0x81C5B8: mov     [esi+30h], eax
0x81C5BB: mov     ecx, [esi+30h]
0x81C5BE: push    0
0x81C5C0: mov     ebp, 1
0x81C5C5: push    ebp
0x81C5C6: push    1Bh
0x81C5C8: call    sub_772CD0
0x81C5CD: cmp     dword ptr [esi+30h], 0
0x81C5D1: jnz     short loc_81C5DB
0x81C5D3: call    sub_772DF0
0x81C5D8: mov     [esi+30h], eax
0x81C5DB: mov     ecx, [esi+30h]
0x81C5DE: push    0
0x81C5E0: push    9
0x81C5E2: push    13h
0x81C5E4: call    sub_772CD0
0x81C5E9: cmp     dword ptr [esi+30h], 0
0x81C5ED: jnz     short loc_81C5F7
0x81C5EF: call    sub_772DF0
0x81C5F4: mov     [esi+30h], eax
0x81C5F7: mov     ecx, [esi+30h]
0x81C5FA: push    0
0x81C5FC: push    ebp
0x81C5FD: push    14h
0x81C5FF: call    sub_772CD0
0x81C604: cmp     dword ptr [esi+30h], 0
0x81C608: jnz     short loc_81C612
0x81C60A: call    sub_772DF0
0x81C60F: mov     [esi+30h], eax
0x81C612: mov     ecx, [esi+30h]
0x81C615: push    0
0x81C617: push    0
0x81C619: push    0Fh
0x81C61B: call    sub_772CD0
0x81C620: cmp     dword ptr [esi+30h], 0
0x81C624: jnz     short loc_81C62E
0x81C626: call    sub_772DF0
0x81C62B: mov     [esi+30h], eax
0x81C62E: mov     ecx, [esi+30h]
0x81C631: push    0
0x81C633: push    ebp
0x81C634: push    7
0x81C636: call    sub_772CD0
0x81C63B: cmp     dword ptr [esi+30h], 0
0x81C63F: jnz     short loc_81C649
0x81C641: call    sub_772DF0
0x81C646: mov     [esi+30h], eax
0x81C649: mov     ecx, [esi+30h]
0x81C64C: push    0
0x81C64E: push    3
0x81C650: push    17h
0x81C652: call    sub_772CD0
0x81C657: cmp     dword ptr [esi+30h], 0
0x81C65B: jnz     short loc_81C665
0x81C65D: call    sub_772DF0
0x81C662: mov     [esi+30h], eax
0x81C665: mov     ecx, [esi+30h]
0x81C668: push    0
0x81C66A: push    0
0x81C66C: push    0Eh
0x81C66E: call    sub_772CD0
0x81C673: cmp     dword ptr [esi+30h], 0
0x81C677: jnz     short loc_81C681
0x81C679: call    sub_772DF0
0x81C67E: mov     [esi+30h], eax
0x81C681: mov     ecx, [esi+30h]
0x81C684: push    0
0x81C686: push    0
0x81C688: push    34h ; '4'
0x81C68A: call    sub_772CD0
0x81C68F: cmp     esi, ds:0B459C0h
0x81C695: mov     dword ptr ds:0B43F3Ch, 40008h
0x81C69F: mov     dword ptr ds:0B445CCh, 0
0x81C6A9: jz      short loc_81C6C9
0x81C6AB: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81C6AF: jnz     short loc_81C6B8
0x81C6B1: mov     ecx, esi
0x81C6B3: call    sub_7604D0
0x81C6B8: mov     esi, ds:0B459C0h
0x81C6BE: test    esi, esi
0x81C6C0: mov     [esp+2Ch+var_14], esi
0x81C6C4: jz      short loc_81C6C9
0x81C6C6: add     [esi+60h], ebp
0x81C6C9: cmp     [esi+18h], ebp
0x81C6CC: jnb     short loc_81C73E
0x81C6CE: lea     ecx, [esp+2Ch+var_10]
0x81C6D2: push    ecx
0x81C6D3: call    sub_772630
0x81C6D8: add     esp, 4
0x81C6DB: mov     ebx, eax
0x81C6DD: cmp     edi, [ebx]
0x81C6DF: mov     byte ptr [esp+2Ch+var_4], 9
0x81C6E4: jz      short loc_81C704
0x81C6E6: test    edi, edi
0x81C6E8: jz      short loc_81C6F7
0x81C6EA: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x81C6EE: jnz     short loc_81C6F7
0x81C6F0: mov     ecx, edi
0x81C6F2: call    sub_772560
0x81C6F7: mov     edi, [ebx]
0x81C6F9: test    edi, edi
0x81C6FB: mov     [esp+2Ch+var_18], edi
0x81C6FF: jz      short loc_81C704
0x81C701: add     [edi+5Ch], ebp
0x81C704: mov     eax, [esp+2Ch+var_10]
0x81C708: test    eax, eax
0x81C70A: mov     byte ptr [esp+2Ch+var_4], 1
0x81C70F: jz      short loc_81C724
0x81C711: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81C715: mov     ecx, eax
0x81C717: add     eax, 5Ch ; '\'
0x81C71A: cmp     dword ptr [eax], 0
0x81C71D: jnz     short loc_81C724
0x81C71F: call    sub_772560
0x81C724: push    2
0x81C726: push    ebp
0x81C727: push    0
0x81C729: push    edi
0x81C72A: call    sub_801110
0x81C72F: mov     edx, [esi+14h]
0x81C732: add     esp, 10h
0x81C735: push    edi; a3
0x81C736: push    edx; a2
0x81C737: mov     ecx, esi; this
0x81C739: call    sub_760010
0x81C73E: mov     eax, ds:0B452A8h
0x81C743: mov     ebp, [esi+58h]
0x81C746: cmp     ebp, eax
0x81C748: mov     ebx, eax
0x81C74A: jz      short loc_81C77E
0x81C74C: test    ebp, ebp
0x81C74E: jz      short loc_81C76D
0x81C750: lea     eax, [ebp+4]
0x81C753: push    eax; lpAddend
0x81C754: call    dword ptr ds:0A2807Ch
0x81C75A: test    eax, eax
0x81C75C: jnz     short loc_81C76D
0x81C75E: test    ebp, ebp
0x81C760: jz      short loc_81C76D
0x81C762: mov     edx, [ebp+0]
0x81C765: mov     eax, [edx]
0x81C767: push    1
0x81C769: mov     ecx, ebp
0x81C76B: call    eax
0x81C76D: test    ebx, ebx
0x81C76F: mov     [esi+58h], ebx
0x81C772: jz      short loc_81C77E
0x81C774: add     ebx, 4
0x81C777: push    ebx; lpAddend
0x81C778: call    dword ptr ds:0A28078h
0x81C77E: mov     eax, ds:0B45098h
0x81C783: mov     ebp, [esi+44h]
0x81C786: cmp     ebp, eax
0x81C788: mov     ebx, eax
0x81C78A: jz      short loc_81C7BE
0x81C78C: test    ebp, ebp
0x81C78E: jz      short loc_81C7AD
0x81C790: lea     ecx, [ebp+4]
0x81C793: push    ecx; lpAddend
0x81C794: call    dword ptr ds:0A2807Ch
0x81C79A: test    eax, eax
0x81C79C: jnz     short loc_81C7AD
0x81C79E: test    ebp, ebp
0x81C7A0: jz      short loc_81C7AD
0x81C7A2: mov     edx, [ebp+0]
0x81C7A5: mov     eax, [edx]
0x81C7A7: push    1
0x81C7A9: mov     ecx, ebp
0x81C7AB: call    eax
0x81C7AD: test    ebx, ebx
0x81C7AF: mov     [esi+44h], ebx
0x81C7B2: jz      short loc_81C7BE
0x81C7B4: add     ebx, 4
0x81C7B7: push    ebx; lpAddend
0x81C7B8: call    dword ptr ds:0A28078h
0x81C7BE: cmp     dword ptr [esi+30h], 0
0x81C7C2: jnz     short loc_81C7CC
0x81C7C4: call    sub_772DF0
0x81C7C9: mov     [esi+30h], eax
0x81C7CC: mov     ecx, [esi+30h]
0x81C7CF: push    0
0x81C7D1: mov     ebp, 1
0x81C7D6: push    ebp
0x81C7D7: push    1Bh
0x81C7D9: call    sub_772CD0
0x81C7DE: cmp     dword ptr [esi+30h], 0
0x81C7E2: jnz     short loc_81C7EC
0x81C7E4: call    sub_772DF0
0x81C7E9: mov     [esi+30h], eax
0x81C7EC: mov     ecx, [esi+30h]
0x81C7EF: push    0
0x81C7F1: push    9
0x81C7F3: push    13h
0x81C7F5: call    sub_772CD0
0x81C7FA: cmp     dword ptr [esi+30h], 0
0x81C7FE: jnz     short loc_81C808
0x81C800: call    sub_772DF0
0x81C805: mov     [esi+30h], eax
0x81C808: mov     ecx, [esi+30h]
0x81C80B: push    0
0x81C80D: push    ebp
0x81C80E: push    14h
0x81C810: call    sub_772CD0
0x81C815: cmp     dword ptr [esi+30h], 0
0x81C819: jnz     short loc_81C823
0x81C81B: call    sub_772DF0
0x81C820: mov     [esi+30h], eax
0x81C823: mov     ecx, [esi+30h]
0x81C826: push    0
0x81C828: push    0
0x81C82A: push    0Fh
0x81C82C: call    sub_772CD0
0x81C831: cmp     dword ptr [esi+30h], 0
0x81C835: jnz     short loc_81C83F
0x81C837: call    sub_772DF0
0x81C83C: mov     [esi+30h], eax
0x81C83F: mov     ecx, [esi+30h]
0x81C842: push    0
0x81C844: push    ebp
0x81C845: push    7
0x81C847: call    sub_772CD0
0x81C84C: cmp     dword ptr [esi+30h], 0
0x81C850: jnz     short loc_81C85A
0x81C852: call    sub_772DF0
0x81C857: mov     [esi+30h], eax
0x81C85A: mov     ecx, [esi+30h]
0x81C85D: push    0
0x81C85F: push    3
0x81C861: push    17h
0x81C863: call    sub_772CD0
0x81C868: cmp     dword ptr [esi+30h], 0
0x81C86C: jnz     short loc_81C876
0x81C86E: call    sub_772DF0
0x81C873: mov     [esi+30h], eax
0x81C876: mov     ecx, [esi+30h]
0x81C879: push    0
0x81C87B: push    0
0x81C87D: push    0Eh
0x81C87F: call    sub_772CD0
0x81C884: cmp     dword ptr [esi+30h], 0
0x81C888: jnz     short loc_81C892
0x81C88A: call    sub_772DF0
0x81C88F: mov     [esi+30h], eax
0x81C892: mov     ecx, [esi+30h]
0x81C895: push    0
0x81C897: push    0
0x81C899: push    34h ; '4'
0x81C89B: call    sub_772CD0
0x81C8A0: cmp     esi, ds:0B459C4h
0x81C8A6: mov     dword ptr ds:0B43F40h, 2
0x81C8B0: mov     dword ptr ds:0B445D0h, 0
0x81C8BA: jz      short loc_81C8DA
0x81C8BC: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81C8C0: jnz     short loc_81C8C9
0x81C8C2: mov     ecx, esi
0x81C8C4: call    sub_7604D0
0x81C8C9: mov     esi, ds:0B459C4h
0x81C8CF: test    esi, esi
0x81C8D1: mov     [esp+2Ch+var_14], esi
0x81C8D5: jz      short loc_81C8DA
0x81C8D7: add     [esi+60h], ebp
0x81C8DA: cmp     [esi+18h], ebp
0x81C8DD: jnb     short loc_81C94F
0x81C8DF: lea     ecx, [esp+2Ch+var_10]
0x81C8E3: push    ecx
0x81C8E4: call    sub_772630
0x81C8E9: add     esp, 4
0x81C8EC: mov     ebx, eax
0x81C8EE: cmp     edi, [ebx]
0x81C8F0: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81C8F5: jz      short loc_81C915
0x81C8F7: test    edi, edi
0x81C8F9: jz      short loc_81C908
0x81C8FB: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x81C8FF: jnz     short loc_81C908
0x81C901: mov     ecx, edi
0x81C903: call    sub_772560
0x81C908: mov     edi, [ebx]
0x81C90A: test    edi, edi
0x81C90C: mov     [esp+2Ch+var_18], edi
0x81C910: jz      short loc_81C915
0x81C912: add     [edi+5Ch], ebp
0x81C915: mov     eax, [esp+2Ch+var_10]
0x81C919: test    eax, eax
0x81C91B: mov     byte ptr [esp+2Ch+var_4], 1
0x81C920: jz      short loc_81C935
0x81C922: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81C926: mov     ecx, eax
0x81C928: add     eax, 5Ch ; '\'
0x81C92B: cmp     dword ptr [eax], 0
0x81C92E: jnz     short loc_81C935
0x81C930: call    sub_772560
0x81C935: push    2
0x81C937: push    ebp
0x81C938: push    0
0x81C93A: push    edi
0x81C93B: call    sub_801110
0x81C940: mov     edx, [esi+14h]
0x81C943: add     esp, 10h
0x81C946: push    edi; a3
0x81C947: push    edx; a2
0x81C948: mov     ecx, esi; this
0x81C94A: call    sub_760010
0x81C94F: mov     eax, ds:0B45324h
0x81C954: mov     ebp, [esi+58h]
0x81C957: cmp     ebp, eax
0x81C959: mov     ebx, eax
0x81C95B: jz      short loc_81C98F
0x81C95D: test    ebp, ebp
0x81C95F: jz      short loc_81C97E
0x81C961: lea     eax, [ebp+4]
0x81C964: push    eax; lpAddend
0x81C965: call    dword ptr ds:0A2807Ch
0x81C96B: test    eax, eax
0x81C96D: jnz     short loc_81C97E
0x81C96F: test    ebp, ebp
0x81C971: jz      short loc_81C97E
0x81C973: mov     edx, [ebp+0]
0x81C976: mov     eax, [edx]
0x81C978: push    1
0x81C97A: mov     ecx, ebp
0x81C97C: call    eax
0x81C97E: test    ebx, ebx
0x81C980: mov     [esi+58h], ebx
0x81C983: jz      short loc_81C98F
0x81C985: add     ebx, 4
0x81C988: push    ebx; lpAddend
0x81C989: call    dword ptr ds:0A28078h
0x81C98F: mov     eax, ds:0B45098h
0x81C994: mov     ebp, [esi+44h]
0x81C997: cmp     ebp, eax
0x81C999: mov     ebx, eax
0x81C99B: jz      short loc_81C9CF
0x81C99D: test    ebp, ebp
0x81C99F: jz      short loc_81C9BE
0x81C9A1: lea     ecx, [ebp+4]
0x81C9A4: push    ecx; lpAddend
0x81C9A5: call    dword ptr ds:0A2807Ch
0x81C9AB: test    eax, eax
0x81C9AD: jnz     short loc_81C9BE
0x81C9AF: test    ebp, ebp
0x81C9B1: jz      short loc_81C9BE
0x81C9B3: mov     edx, [ebp+0]
0x81C9B6: mov     eax, [edx]
0x81C9B8: push    1
0x81C9BA: mov     ecx, ebp
0x81C9BC: call    eax
0x81C9BE: test    ebx, ebx
0x81C9C0: mov     [esi+44h], ebx
0x81C9C3: jz      short loc_81C9CF
0x81C9C5: add     ebx, 4
0x81C9C8: push    ebx; lpAddend
0x81C9C9: call    dword ptr ds:0A28078h
0x81C9CF: cmp     dword ptr [esi+30h], 0
0x81C9D3: jnz     short loc_81C9DD
0x81C9D5: call    sub_772DF0
0x81C9DA: mov     [esi+30h], eax
0x81C9DD: mov     ecx, [esi+30h]
0x81C9E0: push    0
0x81C9E2: push    1
0x81C9E4: push    1Bh
0x81C9E6: call    sub_772CD0
0x81C9EB: cmp     dword ptr [esi+30h], 0
0x81C9EF: jnz     short loc_81C9F9
0x81C9F1: call    sub_772DF0
0x81C9F6: mov     [esi+30h], eax
0x81C9F9: mov     ecx, [esi+30h]
0x81C9FC: push    0
0x81C9FE: push    9
0x81CA00: push    13h
0x81CA02: call    sub_772CD0
0x81CA07: cmp     dword ptr [esi+30h], 0
0x81CA0B: jnz     short loc_81CA15
0x81CA0D: call    sub_772DF0
0x81CA12: mov     [esi+30h], eax
0x81CA15: mov     ecx, [esi+30h]
0x81CA18: push    0
0x81CA1A: push    1
0x81CA1C: push    14h
0x81CA1E: call    sub_772CD0
0x81CA23: cmp     dword ptr [esi+30h], 0
0x81CA27: jnz     short loc_81CA31
0x81CA29: call    sub_772DF0
0x81CA2E: mov     [esi+30h], eax
0x81CA31: mov     ecx, [esi+30h]
0x81CA34: push    0
0x81CA36: push    0
0x81CA38: push    0Fh
0x81CA3A: call    sub_772CD0
0x81CA3F: cmp     dword ptr [esi+30h], 0
0x81CA43: jnz     short loc_81CA4D
0x81CA45: call    sub_772DF0
0x81CA4A: mov     [esi+30h], eax
0x81CA4D: mov     ecx, [esi+30h]
0x81CA50: push    0
0x81CA52: push    1
0x81CA54: push    7
0x81CA56: call    sub_772CD0
0x81CA5B: cmp     dword ptr [esi+30h], 0
0x81CA5F: jnz     short loc_81CA69
0x81CA61: call    sub_772DF0
0x81CA66: mov     [esi+30h], eax
0x81CA69: mov     ecx, [esi+30h]
0x81CA6C: push    0
0x81CA6E: push    3
0x81CA70: push    17h
0x81CA72: call    sub_772CD0
0x81CA77: cmp     dword ptr [esi+30h], 0
0x81CA7B: jnz     short loc_81CA85
0x81CA7D: call    sub_772DF0
0x81CA82: mov     [esi+30h], eax
0x81CA85: mov     ecx, [esi+30h]
0x81CA88: push    0
0x81CA8A: push    0
0x81CA8C: push    0Eh
0x81CA8E: call    sub_772CD0
0x81CA93: cmp     dword ptr [esi+30h], 0
0x81CA97: jnz     short loc_81CAA1
0x81CA99: call    sub_772DF0
0x81CA9E: mov     [esi+30h], eax
0x81CAA1: mov     ecx, [esi+30h]
0x81CAA4: push    0
0x81CAA6: push    0
0x81CAA8: push    34h ; '4'
0x81CAAA: call    sub_772CD0
0x81CAAF: or      ebx, 0FFFFFFFFh
0x81CAB2: cmp     esi, ds:0B459C8h
0x81CAB8: mov     dword ptr ds:0B43F44h, 40008h
0x81CAC2: mov     dword ptr ds:0B445D4h, 0
0x81CACC: jz      short loc_81CAEC
0x81CACE: add     [esi+60h], ebx
0x81CAD1: jnz     short loc_81CADA
0x81CAD3: mov     ecx, esi
0x81CAD5: call    sub_7604D0
0x81CADA: mov     esi, ds:0B459C8h
0x81CAE0: test    esi, esi
0x81CAE2: mov     [esp+2Ch+var_14], esi
0x81CAE6: jz      short loc_81CAEC
0x81CAE8: add     dword ptr [esi+60h], 1
0x81CAEC: cmp     dword ptr [esi+18h], 3
0x81CAF0: jnb     loc_81CC4C
0x81CAF6: lea     ecx, [esp+2Ch+var_10]
0x81CAFA: push    ecx
0x81CAFB: call    sub_772630
0x81CB00: add     esp, 4
0x81CB03: mov     ebp, eax
0x81CB05: cmp     edi, [ebp+0]
0x81CB08: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x81CB0D: jz      short loc_81CB2E
0x81CB0F: test    edi, edi
0x81CB11: jz      short loc_81CB1F
0x81CB13: add     [edi+5Ch], ebx
0x81CB16: jnz     short loc_81CB1F
0x81CB18: mov     ecx, edi
0x81CB1A: call    sub_772560
0x81CB1F: mov     edi, [ebp+0]
0x81CB22: test    edi, edi
0x81CB24: mov     [esp+2Ch+var_18], edi
0x81CB28: jz      short loc_81CB2E
0x81CB2A: add     dword ptr [edi+5Ch], 1
0x81CB2E: mov     eax, [esp+2Ch+var_10]
0x81CB32: test    eax, eax
0x81CB34: mov     byte ptr [esp+2Ch+var_4], 1
0x81CB39: jz      short loc_81CB4D
0x81CB3B: add     [eax+5Ch], ebx
0x81CB3E: mov     ecx, eax
0x81CB40: add     eax, 5Ch ; '\'
0x81CB43: cmp     dword ptr [eax], 0
0x81CB46: jnz     short loc_81CB4D
0x81CB48: call    sub_772560
0x81CB4D: push    2
0x81CB4F: push    1
0x81CB51: push    0
0x81CB53: push    edi
0x81CB54: call    sub_801110
0x81CB59: mov     edx, [esi+14h]
0x81CB5C: add     esp, 10h
0x81CB5F: push    edi; a3
0x81CB60: push    edx; a2
0x81CB61: mov     ecx, esi; this
0x81CB63: call    sub_760010
0x81CB68: lea     eax, [esp+2Ch+var_10]
0x81CB6C: push    eax
0x81CB6D: call    sub_772630
0x81CB72: add     esp, 4
0x81CB75: mov     ebp, eax
0x81CB77: cmp     edi, [ebp+0]
0x81CB7A: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x81CB7F: jz      short loc_81CBA0
0x81CB81: test    edi, edi
0x81CB83: jz      short loc_81CB91
0x81CB85: add     [edi+5Ch], ebx
0x81CB88: jnz     short loc_81CB91
0x81CB8A: mov     ecx, edi
0x81CB8C: call    sub_772560
0x81CB91: mov     edi, [ebp+0]
0x81CB94: test    edi, edi
0x81CB96: mov     [esp+2Ch+var_18], edi
0x81CB9A: jz      short loc_81CBA0
0x81CB9C: add     dword ptr [edi+5Ch], 1
0x81CBA0: mov     eax, [esp+2Ch+var_10]
0x81CBA4: test    eax, eax
0x81CBA6: mov     byte ptr [esp+2Ch+var_4], 1
0x81CBAB: jz      short loc_81CBBF
0x81CBAD: add     [eax+5Ch], ebx
0x81CBB0: mov     ecx, eax
0x81CBB2: add     eax, 5Ch ; '\'
0x81CBB5: cmp     dword ptr [eax], 0
0x81CBB8: jnz     short loc_81CBBF
0x81CBBA: call    sub_772560
0x81CBBF: push    2
0x81CBC1: push    1
0x81CBC3: push    1
0x81CBC5: push    edi
0x81CBC6: call    sub_801110
0x81CBCB: mov     ecx, [esi+14h]
0x81CBCE: add     esp, 10h
0x81CBD1: push    edi; a3
0x81CBD2: push    ecx; a2
0x81CBD3: mov     ecx, esi; this
0x81CBD5: call    sub_760010
0x81CBDA: lea     edx, [esp+2Ch+var_10]
0x81CBDE: push    edx
0x81CBDF: call    sub_772630
0x81CBE4: add     esp, 4
0x81CBE7: mov     ebp, eax
0x81CBE9: cmp     edi, [ebp+0]
0x81CBEC: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x81CBF1: jz      short loc_81CC12
0x81CBF3: test    edi, edi
0x81CBF5: jz      short loc_81CC03
0x81CBF7: add     [edi+5Ch], ebx
0x81CBFA: jnz     short loc_81CC03
0x81CBFC: mov     ecx, edi
0x81CBFE: call    sub_772560
0x81CC03: mov     edi, [ebp+0]
0x81CC06: test    edi, edi
0x81CC08: mov     [esp+2Ch+var_18], edi
0x81CC0C: jz      short loc_81CC12
0x81CC0E: add     dword ptr [edi+5Ch], 1
0x81CC12: mov     eax, [esp+2Ch+var_10]
0x81CC16: test    eax, eax
0x81CC18: mov     byte ptr [esp+2Ch+var_4], 1
0x81CC1D: jz      short loc_81CC31
0x81CC1F: add     [eax+5Ch], ebx
0x81CC22: mov     ecx, eax
0x81CC24: add     eax, 5Ch ; '\'
0x81CC27: cmp     dword ptr [eax], 0
0x81CC2A: jnz     short loc_81CC31
0x81CC2C: call    sub_772560
0x81CC31: push    2
0x81CC33: push    1
0x81CC35: push    2
0x81CC37: push    edi
0x81CC38: call    sub_801110
0x81CC3D: mov     eax, [esi+14h]
0x81CC40: add     esp, 10h
0x81CC43: push    edi; a3
0x81CC44: push    eax; a2
0x81CC45: mov     ecx, esi; this
0x81CC47: call    sub_760010
0x81CC4C: mov     eax, ds:0B45328h
0x81CC51: mov     ebp, [esi+58h]
0x81CC54: cmp     ebp, eax
0x81CC56: mov     ebx, eax
0x81CC58: jz      short loc_81CC8C
0x81CC5A: test    ebp, ebp
0x81CC5C: jz      short loc_81CC7B
0x81CC5E: lea     ecx, [ebp+4]
0x81CC61: push    ecx; lpAddend
0x81CC62: call    dword ptr ds:0A2807Ch
0x81CC68: test    eax, eax
0x81CC6A: jnz     short loc_81CC7B
0x81CC6C: test    ebp, ebp
0x81CC6E: jz      short loc_81CC7B
0x81CC70: mov     edx, [ebp+0]
0x81CC73: mov     eax, [edx]
0x81CC75: push    1
0x81CC77: mov     ecx, ebp
0x81CC79: call    eax
0x81CC7B: test    ebx, ebx
0x81CC7D: mov     [esi+58h], ebx
0x81CC80: jz      short loc_81CC8C
0x81CC82: add     ebx, 4
0x81CC85: push    ebx; lpAddend
0x81CC86: call    dword ptr ds:0A28078h
0x81CC8C: mov     eax, ds:0B4509Ch
0x81CC91: mov     ebp, [esi+44h]
0x81CC94: cmp     ebp, eax
0x81CC96: mov     ebx, eax
0x81CC98: jz      short loc_81CCCC
0x81CC9A: test    ebp, ebp
0x81CC9C: jz      short loc_81CCBB
0x81CC9E: lea     ecx, [ebp+4]
0x81CCA1: push    ecx; lpAddend
0x81CCA2: call    dword ptr ds:0A2807Ch
0x81CCA8: test    eax, eax
0x81CCAA: jnz     short loc_81CCBB
0x81CCAC: test    ebp, ebp
0x81CCAE: jz      short loc_81CCBB
0x81CCB0: mov     edx, [ebp+0]
0x81CCB3: mov     eax, [edx]
0x81CCB5: push    1
0x81CCB7: mov     ecx, ebp
0x81CCB9: call    eax
0x81CCBB: test    ebx, ebx
0x81CCBD: mov     [esi+44h], ebx
0x81CCC0: jz      short loc_81CCCC
0x81CCC2: add     ebx, 4
0x81CCC5: push    ebx; lpAddend
0x81CCC6: call    dword ptr ds:0A28078h
0x81CCCC: cmp     dword ptr [esi+30h], 0
0x81CCD0: jnz     short loc_81CCDA
0x81CCD2: call    sub_772DF0
0x81CCD7: mov     [esi+30h], eax
0x81CCDA: mov     ecx, [esi+30h]
0x81CCDD: push    0
0x81CCDF: push    1
0x81CCE1: push    1Bh
0x81CCE3: call    sub_772CD0
0x81CCE8: cmp     dword ptr [esi+30h], 0
0x81CCEC: jnz     short loc_81CCF6
0x81CCEE: call    sub_772DF0
0x81CCF3: mov     [esi+30h], eax
0x81CCF6: mov     ecx, [esi+30h]
0x81CCF9: push    0
0x81CCFB: push    9
0x81CCFD: push    13h
0x81CCFF: call    sub_772CD0
0x81CD04: cmp     dword ptr [esi+30h], 0
0x81CD08: jnz     short loc_81CD12
0x81CD0A: call    sub_772DF0
0x81CD0F: mov     [esi+30h], eax
0x81CD12: mov     ecx, [esi+30h]
0x81CD15: push    0
0x81CD17: push    1
0x81CD19: push    14h
0x81CD1B: call    sub_772CD0
0x81CD20: cmp     dword ptr [esi+30h], 0
0x81CD24: jnz     short loc_81CD2E
0x81CD26: call    sub_772DF0
0x81CD2B: mov     [esi+30h], eax
0x81CD2E: mov     ecx, [esi+30h]
0x81CD31: push    0
0x81CD33: push    0
0x81CD35: push    0Fh
0x81CD37: call    sub_772CD0
0x81CD3C: cmp     dword ptr [esi+30h], 0
0x81CD40: jnz     short loc_81CD4A
0x81CD42: call    sub_772DF0
0x81CD47: mov     [esi+30h], eax
0x81CD4A: mov     ecx, [esi+30h]
0x81CD4D: push    0
0x81CD4F: push    1
0x81CD51: push    7
0x81CD53: call    sub_772CD0
0x81CD58: cmp     dword ptr [esi+30h], 0
0x81CD5C: jnz     short loc_81CD66
0x81CD5E: call    sub_772DF0
0x81CD63: mov     [esi+30h], eax
0x81CD66: mov     ecx, [esi+30h]
0x81CD69: push    0
0x81CD6B: push    4
0x81CD6D: push    17h
0x81CD6F: call    sub_772CD0
0x81CD74: cmp     dword ptr [esi+30h], 0
0x81CD78: jnz     short loc_81CD82
0x81CD7A: call    sub_772DF0
0x81CD7F: mov     [esi+30h], eax
0x81CD82: mov     ecx, [esi+30h]
0x81CD85: push    0
0x81CD87: push    1
0x81CD89: push    0Eh
0x81CD8B: call    sub_772CD0
0x81CD90: cmp     dword ptr [esi+30h], 0
0x81CD94: jnz     short loc_81CD9E
0x81CD96: call    sub_772DF0
0x81CD9B: mov     [esi+30h], eax
0x81CD9E: mov     ecx, [esi+30h]
0x81CDA1: push    0
0x81CDA3: push    0
0x81CDA5: push    34h ; '4'
0x81CDA7: call    sub_772CD0
0x81CDAC: or      ebx, 0FFFFFFFFh
0x81CDAF: cmp     esi, ds:0B459D0h
0x81CDB5: mov     dword ptr ds:0B43F48h, 40008h
0x81CDBF: mov     dword ptr ds:0B445D8h, 0
0x81CDC9: jz      short loc_81CDE9
0x81CDCB: add     [esi+60h], ebx
0x81CDCE: jnz     short loc_81CDD7
0x81CDD0: mov     ecx, esi
0x81CDD2: call    sub_7604D0
0x81CDD7: mov     esi, ds:0B459D0h
0x81CDDD: test    esi, esi
0x81CDDF: mov     [esp+2Ch+var_14], esi
0x81CDE3: jz      short loc_81CDE9
0x81CDE5: add     dword ptr [esi+60h], 1
0x81CDE9: cmp     dword ptr [esi+18h], 2
0x81CDED: jnb     loc_81CED7
0x81CDF3: lea     ecx, [esp+2Ch+var_10]
0x81CDF7: push    ecx
0x81CDF8: call    sub_772630
0x81CDFD: add     esp, 4
0x81CE00: mov     ebp, eax
0x81CE02: cmp     edi, [ebp+0]
0x81CE05: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x81CE0A: jz      short loc_81CE2B
0x81CE0C: test    edi, edi
0x81CE0E: jz      short loc_81CE1C
0x81CE10: add     [edi+5Ch], ebx
0x81CE13: jnz     short loc_81CE1C
0x81CE15: mov     ecx, edi
0x81CE17: call    sub_772560
0x81CE1C: mov     edi, [ebp+0]
0x81CE1F: test    edi, edi
0x81CE21: mov     [esp+2Ch+var_18], edi
0x81CE25: jz      short loc_81CE2B
0x81CE27: add     dword ptr [edi+5Ch], 1
0x81CE2B: mov     eax, [esp+2Ch+var_10]
0x81CE2F: test    eax, eax
0x81CE31: mov     byte ptr [esp+2Ch+var_4], 1
0x81CE36: jz      short loc_81CE4A
0x81CE38: add     [eax+5Ch], ebx
0x81CE3B: mov     ecx, eax
0x81CE3D: add     eax, 5Ch ; '\'
0x81CE40: cmp     dword ptr [eax], 0
0x81CE43: jnz     short loc_81CE4A
0x81CE45: call    sub_772560
0x81CE4A: push    2
0x81CE4C: push    1
0x81CE4E: push    0
0x81CE50: push    edi
0x81CE51: call    sub_801110
0x81CE56: mov     edx, [esi+14h]
0x81CE59: add     esp, 10h
0x81CE5C: push    edi; a3
0x81CE5D: push    edx; a2
0x81CE5E: mov     ecx, esi; this
0x81CE60: call    sub_760010
0x81CE65: lea     eax, [esp+2Ch+var_10]
0x81CE69: push    eax
0x81CE6A: call    sub_772630
0x81CE6F: add     esp, 4
0x81CE72: mov     ebp, eax
0x81CE74: cmp     edi, [ebp+0]
0x81CE77: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x81CE7C: jz      short loc_81CE9D
0x81CE7E: test    edi, edi
0x81CE80: jz      short loc_81CE8E
0x81CE82: add     [edi+5Ch], ebx
0x81CE85: jnz     short loc_81CE8E
0x81CE87: mov     ecx, edi
0x81CE89: call    sub_772560
0x81CE8E: mov     edi, [ebp+0]
0x81CE91: test    edi, edi
0x81CE93: mov     [esp+2Ch+var_18], edi
0x81CE97: jz      short loc_81CE9D
0x81CE99: add     dword ptr [edi+5Ch], 1
0x81CE9D: mov     eax, [esp+2Ch+var_10]
0x81CEA1: test    eax, eax
0x81CEA3: mov     byte ptr [esp+2Ch+var_4], 1
0x81CEA8: jz      short loc_81CEBC
0x81CEAA: add     [eax+5Ch], ebx
0x81CEAD: mov     ecx, eax
0x81CEAF: add     eax, 5Ch ; '\'
0x81CEB2: cmp     dword ptr [eax], 0
0x81CEB5: jnz     short loc_81CEBC
0x81CEB7: call    sub_772560
0x81CEBC: push    2
0x81CEBE: push    1
0x81CEC0: push    1
0x81CEC2: push    edi
0x81CEC3: call    sub_801110
0x81CEC8: mov     ecx, [esi+14h]
0x81CECB: add     esp, 10h
0x81CECE: push    edi; a3
0x81CECF: push    ecx; a2
0x81CED0: mov     ecx, esi; this
0x81CED2: call    sub_760010
0x81CED7: mov     eax, ds:0B45324h
0x81CEDC: mov     ebp, [esi+58h]
0x81CEDF: cmp     ebp, eax
0x81CEE1: mov     ebx, eax
0x81CEE3: jz      short loc_81CF17
0x81CEE5: test    ebp, ebp
0x81CEE7: jz      short loc_81CF06
0x81CEE9: lea     edx, [ebp+4]
0x81CEEC: push    edx; lpAddend
0x81CEED: call    dword ptr ds:0A2807Ch
0x81CEF3: test    eax, eax
0x81CEF5: jnz     short loc_81CF06
0x81CEF7: test    ebp, ebp
0x81CEF9: jz      short loc_81CF06
0x81CEFB: mov     eax, [ebp+0]
0x81CEFE: mov     edx, [eax]
0x81CF00: push    1
0x81CF02: mov     ecx, ebp
0x81CF04: call    edx
0x81CF06: test    ebx, ebx
0x81CF08: mov     [esi+58h], ebx
0x81CF0B: jz      short loc_81CF17
0x81CF0D: add     ebx, 4
0x81CF10: push    ebx; lpAddend
0x81CF11: call    dword ptr ds:0A28078h
0x81CF17: mov     eax, ds:0B450A0h
0x81CF1C: mov     ebp, [esi+44h]
0x81CF1F: cmp     ebp, eax
0x81CF21: mov     ebx, eax
0x81CF23: jz      short loc_81CF57
0x81CF25: test    ebp, ebp
0x81CF27: jz      short loc_81CF46
0x81CF29: lea     eax, [ebp+4]
0x81CF2C: push    eax; lpAddend
0x81CF2D: call    dword ptr ds:0A2807Ch
0x81CF33: test    eax, eax
0x81CF35: jnz     short loc_81CF46
0x81CF37: test    ebp, ebp
0x81CF39: jz      short loc_81CF46
0x81CF3B: mov     edx, [ebp+0]
0x81CF3E: mov     eax, [edx]
0x81CF40: push    1
0x81CF42: mov     ecx, ebp
0x81CF44: call    eax
0x81CF46: test    ebx, ebx
0x81CF48: mov     [esi+44h], ebx
0x81CF4B: jz      short loc_81CF57
0x81CF4D: add     ebx, 4
0x81CF50: push    ebx; lpAddend
0x81CF51: call    dword ptr ds:0A28078h
0x81CF57: cmp     dword ptr [esi+30h], 0
0x81CF5B: jnz     short loc_81CF65
0x81CF5D: call    sub_772DF0
0x81CF62: mov     [esi+30h], eax
0x81CF65: mov     ecx, [esi+30h]
0x81CF68: push    0
0x81CF6A: push    1
0x81CF6C: push    1Bh
0x81CF6E: call    sub_772CD0
0x81CF73: cmp     dword ptr [esi+30h], 0
0x81CF77: jnz     short loc_81CF81
0x81CF79: call    sub_772DF0
0x81CF7E: mov     [esi+30h], eax
0x81CF81: mov     ecx, [esi+30h]
0x81CF84: push    0
0x81CF86: push    9
0x81CF88: push    13h
0x81CF8A: call    sub_772CD0
0x81CF8F: cmp     dword ptr [esi+30h], 0
0x81CF93: jnz     short loc_81CF9D
0x81CF95: call    sub_772DF0
0x81CF9A: mov     [esi+30h], eax
0x81CF9D: mov     ecx, [esi+30h]
0x81CFA0: push    0
0x81CFA2: push    1
0x81CFA4: push    14h
0x81CFA6: call    sub_772CD0
0x81CFAB: cmp     dword ptr [esi+30h], 0
0x81CFAF: jnz     short loc_81CFB9
0x81CFB1: call    sub_772DF0
0x81CFB6: mov     [esi+30h], eax
0x81CFB9: mov     ecx, [esi+30h]
0x81CFBC: push    0
0x81CFBE: push    1
0x81CFC0: push    0Fh
0x81CFC2: call    sub_772CD0
0x81CFC7: cmp     dword ptr [esi+30h], 0
0x81CFCB: jnz     short loc_81CFD5
0x81CFCD: call    sub_772DF0
0x81CFD2: mov     [esi+30h], eax
0x81CFD5: mov     ecx, [esi+30h]
0x81CFD8: push    0
0x81CFDA: push    1
0x81CFDC: push    7
0x81CFDE: call    sub_772CD0
0x81CFE3: cmp     dword ptr [esi+30h], 0
0x81CFE7: jnz     short loc_81CFF1
0x81CFE9: call    sub_772DF0
0x81CFEE: mov     [esi+30h], eax
0x81CFF1: mov     ecx, [esi+30h]
0x81CFF4: push    0
0x81CFF6: push    4
0x81CFF8: push    17h
0x81CFFA: call    sub_772CD0
0x81CFFF: cmp     dword ptr [esi+30h], 0
0x81D003: jnz     short loc_81D00D
0x81D005: call    sub_772DF0
0x81D00A: mov     [esi+30h], eax
0x81D00D: mov     ecx, [esi+30h]
0x81D010: push    0
0x81D012: push    1
0x81D014: push    0Eh
0x81D016: call    sub_772CD0
0x81D01B: cmp     dword ptr [esi+30h], 0
0x81D01F: jnz     short loc_81D029
0x81D021: call    sub_772DF0
0x81D026: mov     [esi+30h], eax
0x81D029: mov     ecx, [esi+30h]
0x81D02C: push    0
0x81D02E: push    0
0x81D030: push    34h ; '4'
0x81D032: call    sub_772CD0
0x81D037: or      ebx, 0FFFFFFFFh
0x81D03A: test    edi, edi
0x81D03C: mov     dword ptr ds:0B43F50h, 40008h
0x81D046: mov     dword ptr ds:0B445E0h, 80h ; '€'
0x81D050: mov     byte ptr [esp+2Ch+var_4], 0
0x81D055: jz      short loc_81D063
0x81D057: add     [edi+5Ch], ebx
0x81D05A: jnz     short loc_81D063
0x81D05C: mov     ecx, edi
0x81D05E: call    sub_772560
0x81D063: add     [esi+60h], ebx
0x81D066: mov     [esp+2Ch+var_4], ebx
0x81D06A: jnz     short loc_81D073
0x81D06C: mov     ecx, esi
0x81D06E: call    sub_7604D0
0x81D073: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81D077: mov     large fs:0, ecx
0x81D07E: pop     ecx
0x81D07F: pop     edi
0x81D080: pop     esi
0x81D081: pop     ebp
0x81D082: pop     ebx
0x81D083: add     esp, 18h
0x81D086: retn
