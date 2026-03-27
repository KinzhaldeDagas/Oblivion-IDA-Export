0x81EA70: push    0FFFFFFFFh
0x81EA72: push    offset SEH_81EA70
0x81EA77: mov     eax, large fs:0
0x81EA7D: push    eax
0x81EA7E: sub     esp, 0Ch
0x81EA81: push    ebx
0x81EA82: push    ebp
0x81EA83: push    esi
0x81EA84: push    edi
0x81EA85: mov     eax, ds:0B30AACh
0x81EA8A: xor     eax, esp
0x81EA8C: push    eax
0x81EA8D: lea     eax, [esp+2Ch+var_C]
0x81EA91: mov     large fs:0, eax
0x81EA97: xor     esi, esi
0x81EA99: mov     [esp+2Ch+var_14], esi
0x81EA9D: xor     ebx, ebx
0x81EA9F: mov     [esp+2Ch+var_4], esi
0x81EAA3: mov     [esp+2Ch+a3], ebx
0x81EAA7: mov     eax, ds:0B45BE0h
0x81EAAC: test    eax, eax
0x81EAAE: mov     edi, 1
0x81EAB3: mov     byte ptr [esp+2Ch+var_4], 1
0x81EAB8: jz      short loc_81EAC7
0x81EABA: mov     esi, eax
0x81EABC: test    esi, esi
0x81EABE: mov     [esp+2Ch+var_14], esi
0x81EAC2: jz      short loc_81EAC7
0x81EAC4: add     [esi+60h], edi
0x81EAC7: mov     eax, [esi+18h]
0x81EACA: cmp     eax, edi
0x81EACC: jnb     short loc_81EB24
0x81EACE: lea     eax, [esp+2Ch+var_10]
0x81EAD2: push    eax
0x81EAD3: call    sub_772630
0x81EAD8: add     esp, 4
0x81EADB: mov     eax, [eax]
0x81EADD: test    eax, eax
0x81EADF: jz      short loc_81EAEA
0x81EAE1: mov     ebx, eax
0x81EAE3: add     [ebx+5Ch], edi
0x81EAE6: mov     [esp+2Ch+a3], ebx
0x81EAEA: mov     eax, [esp+2Ch+var_10]
0x81EAEE: test    eax, eax
0x81EAF0: mov     byte ptr [esp+2Ch+var_4], 1
0x81EAF5: jz      short loc_81EB0A
0x81EAF7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81EAFB: mov     ecx, eax
0x81EAFD: add     eax, 5Ch ; '\'
0x81EB00: cmp     dword ptr [eax], 0
0x81EB03: jnz     short loc_81EB0A
0x81EB05: call    sub_772560
0x81EB0A: push    2
0x81EB0C: push    edi
0x81EB0D: push    0
0x81EB0F: push    ebx
0x81EB10: call    sub_801110
0x81EB15: mov     ecx, [esi+14h]
0x81EB18: add     esp, 10h
0x81EB1B: push    ebx; a3
0x81EB1C: push    ecx; a2
0x81EB1D: mov     ecx, esi; this
0x81EB1F: call    sub_760010
0x81EB24: mov     eax, ds:0B452D4h
0x81EB29: mov     edi, [esi+58h]
0x81EB2C: cmp     edi, eax
0x81EB2E: mov     ebp, eax
0x81EB30: jz      short loc_81EB63
0x81EB32: test    edi, edi
0x81EB34: jz      short loc_81EB52
0x81EB36: lea     edx, [edi+4]
0x81EB39: push    edx; lpAddend
0x81EB3A: call    dword ptr ds:0A2807Ch
0x81EB40: test    eax, eax
0x81EB42: jnz     short loc_81EB52
0x81EB44: test    edi, edi
0x81EB46: jz      short loc_81EB52
0x81EB48: mov     eax, [edi]
0x81EB4A: mov     edx, [eax]
0x81EB4C: push    1
0x81EB4E: mov     ecx, edi
0x81EB50: call    edx
0x81EB52: test    ebp, ebp
0x81EB54: mov     [esi+58h], ebp
0x81EB57: jz      short loc_81EB63
0x81EB59: add     ebp, 4
0x81EB5C: push    ebp; lpAddend
0x81EB5D: call    dword ptr ds:0A28078h
0x81EB63: mov     eax, ds:0B45100h
0x81EB68: mov     edi, [esi+44h]
0x81EB6B: cmp     edi, eax
0x81EB6D: mov     ebp, eax
0x81EB6F: jz      short loc_81EBA2
0x81EB71: test    edi, edi
0x81EB73: jz      short loc_81EB91
0x81EB75: lea     eax, [edi+4]
0x81EB78: push    eax; lpAddend
0x81EB79: call    dword ptr ds:0A2807Ch
0x81EB7F: test    eax, eax
0x81EB81: jnz     short loc_81EB91
0x81EB83: test    edi, edi
0x81EB85: jz      short loc_81EB91
0x81EB87: mov     edx, [edi]
0x81EB89: mov     eax, [edx]
0x81EB8B: push    1
0x81EB8D: mov     ecx, edi
0x81EB8F: call    eax
0x81EB91: test    ebp, ebp
0x81EB93: mov     [esi+44h], ebp
0x81EB96: jz      short loc_81EBA2
0x81EB98: add     ebp, 4
0x81EB9B: push    ebp; lpAddend
0x81EB9C: call    dword ptr ds:0A28078h
0x81EBA2: cmp     dword ptr [esi+30h], 0
0x81EBA6: jnz     short loc_81EBB0
0x81EBA8: call    sub_772DF0
0x81EBAD: mov     [esi+30h], eax
0x81EBB0: mov     ecx, [esi+30h]
0x81EBB3: push    0
0x81EBB5: mov     ebp, 1
0x81EBBA: push    ebp
0x81EBBB: push    1Bh
0x81EBBD: call    sub_772CD0
0x81EBC2: cmp     dword ptr [esi+30h], 0
0x81EBC6: jnz     short loc_81EBD0
0x81EBC8: call    sub_772DF0
0x81EBCD: mov     [esi+30h], eax
0x81EBD0: mov     ecx, [esi+30h]
0x81EBD3: push    0
0x81EBD5: push    5
0x81EBD7: push    13h
0x81EBD9: call    sub_772CD0
0x81EBDE: cmp     dword ptr [esi+30h], 0
0x81EBE2: jnz     short loc_81EBEC
0x81EBE4: call    sub_772DF0
0x81EBE9: mov     [esi+30h], eax
0x81EBEC: mov     ecx, [esi+30h]
0x81EBEF: push    0
0x81EBF1: push    6
0x81EBF3: push    14h
0x81EBF5: call    sub_772CD0
0x81EBFA: cmp     dword ptr [esi+30h], 0
0x81EBFE: jnz     short loc_81EC08
0x81EC00: call    sub_772DF0
0x81EC05: mov     [esi+30h], eax
0x81EC08: mov     ecx, [esi+30h]
0x81EC0B: push    0
0x81EC0D: push    0
0x81EC0F: push    0Fh
0x81EC11: call    sub_772CD0
0x81EC16: cmp     dword ptr [esi+30h], 0
0x81EC1A: jnz     short loc_81EC24
0x81EC1C: call    sub_772DF0
0x81EC21: mov     [esi+30h], eax
0x81EC24: mov     ecx, [esi+30h]
0x81EC27: push    0
0x81EC29: push    ebp
0x81EC2A: push    7
0x81EC2C: call    sub_772CD0
0x81EC31: cmp     dword ptr [esi+30h], 0
0x81EC35: jnz     short loc_81EC3F
0x81EC37: call    sub_772DF0
0x81EC3C: mov     [esi+30h], eax
0x81EC3F: mov     ecx, [esi+30h]
0x81EC42: push    0
0x81EC44: push    3
0x81EC46: push    17h
0x81EC48: call    sub_772CD0
0x81EC4D: cmp     dword ptr [esi+30h], 0
0x81EC51: jnz     short loc_81EC5B
0x81EC53: call    sub_772DF0
0x81EC58: mov     [esi+30h], eax
0x81EC5B: mov     ecx, [esi+30h]
0x81EC5E: push    0
0x81EC60: push    0
0x81EC62: push    0Eh
0x81EC64: call    sub_772CD0
0x81EC69: cmp     dword ptr [esi+30h], 0
0x81EC6D: jnz     short loc_81EC77
0x81EC6F: call    sub_772DF0
0x81EC74: mov     [esi+30h], eax
0x81EC77: mov     ecx, [esi+30h]
0x81EC7A: push    0
0x81EC7C: push    0
0x81EC7E: push    34h ; '4'
0x81EC80: call    sub_772CD0
0x81EC85: cmp     esi, ds:0B45BE4h
0x81EC8B: mov     dword ptr ds:0B44160h, 18002h
0x81EC95: mov     dword ptr ds:0B447F0h, 0
0x81EC9F: mov     dword ptr ds:0B43AD0h, 18000h
0x81ECA9: jz      short loc_81ECC9
0x81ECAB: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81ECAF: jnz     short loc_81ECB8
0x81ECB1: mov     ecx, esi
0x81ECB3: call    sub_7604D0
0x81ECB8: mov     esi, ds:0B45BE4h
0x81ECBE: test    esi, esi
0x81ECC0: mov     [esp+2Ch+var_14], esi
0x81ECC4: jz      short loc_81ECC9
0x81ECC6: add     [esi+60h], ebp
0x81ECC9: cmp     [esi+18h], ebp
0x81ECCC: jnb     short loc_81ED3E
0x81ECCE: lea     ecx, [esp+2Ch+var_10]
0x81ECD2: push    ecx
0x81ECD3: call    sub_772630
0x81ECD8: add     esp, 4
0x81ECDB: mov     edi, eax
0x81ECDD: cmp     ebx, [edi]
0x81ECDF: mov     byte ptr [esp+2Ch+var_4], 3
0x81ECE4: jz      short loc_81ED04
0x81ECE6: test    ebx, ebx
0x81ECE8: jz      short loc_81ECF7
0x81ECEA: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x81ECEE: jnz     short loc_81ECF7
0x81ECF0: mov     ecx, ebx
0x81ECF2: call    sub_772560
0x81ECF7: mov     ebx, [edi]
0x81ECF9: test    ebx, ebx
0x81ECFB: mov     [esp+2Ch+a3], ebx
0x81ECFF: jz      short loc_81ED04
0x81ED01: add     [ebx+5Ch], ebp
0x81ED04: mov     eax, [esp+2Ch+var_10]
0x81ED08: test    eax, eax
0x81ED0A: mov     byte ptr [esp+2Ch+var_4], 1
0x81ED0F: jz      short loc_81ED24
0x81ED11: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81ED15: mov     ecx, eax
0x81ED17: add     eax, 5Ch ; '\'
0x81ED1A: cmp     dword ptr [eax], 0
0x81ED1D: jnz     short loc_81ED24
0x81ED1F: call    sub_772560
0x81ED24: push    2
0x81ED26: push    ebp
0x81ED27: push    0
0x81ED29: push    ebx
0x81ED2A: call    sub_801110
0x81ED2F: mov     edx, [esi+14h]
0x81ED32: add     esp, 10h
0x81ED35: push    ebx; a3
0x81ED36: push    edx; a2
0x81ED37: mov     ecx, esi; this
0x81ED39: call    sub_760010
0x81ED3E: mov     eax, ds:0B452D8h
0x81ED43: mov     edi, [esi+58h]
0x81ED46: cmp     edi, eax
0x81ED48: mov     ebp, eax
0x81ED4A: jz      short loc_81ED7D
0x81ED4C: test    edi, edi
0x81ED4E: jz      short loc_81ED6C
0x81ED50: lea     eax, [edi+4]
0x81ED53: push    eax; lpAddend
0x81ED54: call    dword ptr ds:0A2807Ch
0x81ED5A: test    eax, eax
0x81ED5C: jnz     short loc_81ED6C
0x81ED5E: test    edi, edi
0x81ED60: jz      short loc_81ED6C
0x81ED62: mov     edx, [edi]
0x81ED64: mov     eax, [edx]
0x81ED66: push    1
0x81ED68: mov     ecx, edi
0x81ED6A: call    eax
0x81ED6C: test    ebp, ebp
0x81ED6E: mov     [esi+58h], ebp
0x81ED71: jz      short loc_81ED7D
0x81ED73: add     ebp, 4
0x81ED76: push    ebp; lpAddend
0x81ED77: call    dword ptr ds:0A28078h
0x81ED7D: mov     eax, ds:0B45104h
0x81ED82: mov     edi, [esi+44h]
0x81ED85: cmp     edi, eax
0x81ED87: mov     ebp, eax
0x81ED89: jz      short loc_81EDBC
0x81ED8B: test    edi, edi
0x81ED8D: jz      short loc_81EDAB
0x81ED8F: lea     ecx, [edi+4]
0x81ED92: push    ecx; lpAddend
0x81ED93: call    dword ptr ds:0A2807Ch
0x81ED99: test    eax, eax
0x81ED9B: jnz     short loc_81EDAB
0x81ED9D: test    edi, edi
0x81ED9F: jz      short loc_81EDAB
0x81EDA1: mov     edx, [edi]
0x81EDA3: mov     eax, [edx]
0x81EDA5: push    1
0x81EDA7: mov     ecx, edi
0x81EDA9: call    eax
0x81EDAB: test    ebp, ebp
0x81EDAD: mov     [esi+44h], ebp
0x81EDB0: jz      short loc_81EDBC
0x81EDB2: add     ebp, 4
0x81EDB5: push    ebp; lpAddend
0x81EDB6: call    dword ptr ds:0A28078h
0x81EDBC: cmp     dword ptr [esi+30h], 0
0x81EDC0: jnz     short loc_81EDCA
0x81EDC2: call    sub_772DF0
0x81EDC7: mov     [esi+30h], eax
0x81EDCA: mov     ecx, [esi+30h]
0x81EDCD: push    0
0x81EDCF: mov     ebp, 1
0x81EDD4: push    ebp
0x81EDD5: push    1Bh
0x81EDD7: call    sub_772CD0
0x81EDDC: cmp     dword ptr [esi+30h], 0
0x81EDE0: jnz     short loc_81EDEA
0x81EDE2: call    sub_772DF0
0x81EDE7: mov     [esi+30h], eax
0x81EDEA: mov     ecx, [esi+30h]
0x81EDED: push    0
0x81EDEF: push    5
0x81EDF1: push    13h
0x81EDF3: call    sub_772CD0
0x81EDF8: cmp     dword ptr [esi+30h], 0
0x81EDFC: jnz     short loc_81EE06
0x81EDFE: call    sub_772DF0
0x81EE03: mov     [esi+30h], eax
0x81EE06: mov     ecx, [esi+30h]
0x81EE09: push    0
0x81EE0B: push    6
0x81EE0D: push    14h
0x81EE0F: call    sub_772CD0
0x81EE14: cmp     dword ptr [esi+30h], 0
0x81EE18: jnz     short loc_81EE22
0x81EE1A: call    sub_772DF0
0x81EE1F: mov     [esi+30h], eax
0x81EE22: mov     ecx, [esi+30h]
0x81EE25: push    0
0x81EE27: push    0
0x81EE29: push    0Fh
0x81EE2B: call    sub_772CD0
0x81EE30: cmp     dword ptr [esi+30h], 0
0x81EE34: jnz     short loc_81EE3E
0x81EE36: call    sub_772DF0
0x81EE3B: mov     [esi+30h], eax
0x81EE3E: mov     ecx, [esi+30h]
0x81EE41: push    0
0x81EE43: push    ebp
0x81EE44: push    7
0x81EE46: call    sub_772CD0
0x81EE4B: cmp     dword ptr [esi+30h], 0
0x81EE4F: jnz     short loc_81EE59
0x81EE51: call    sub_772DF0
0x81EE56: mov     [esi+30h], eax
0x81EE59: mov     ecx, [esi+30h]
0x81EE5C: push    0
0x81EE5E: push    3
0x81EE60: push    17h
0x81EE62: call    sub_772CD0
0x81EE67: cmp     dword ptr [esi+30h], 0
0x81EE6B: jnz     short loc_81EE75
0x81EE6D: call    sub_772DF0
0x81EE72: mov     [esi+30h], eax
0x81EE75: mov     ecx, [esi+30h]
0x81EE78: push    0
0x81EE7A: push    0
0x81EE7C: push    0Eh
0x81EE7E: call    sub_772CD0
0x81EE83: cmp     dword ptr [esi+30h], 0
0x81EE87: jnz     short loc_81EE91
0x81EE89: call    sub_772DF0
0x81EE8E: mov     [esi+30h], eax
0x81EE91: mov     ecx, [esi+30h]
0x81EE94: push    0
0x81EE96: push    0
0x81EE98: push    34h ; '4'
0x81EE9A: call    sub_772CD0
0x81EE9F: cmp     esi, ds:0B45BE8h
0x81EEA5: mov     dword ptr ds:0B44164h, 18002h
0x81EEAF: mov     dword ptr ds:0B447F4h, 0
0x81EEB9: mov     dword ptr ds:0B43AD4h, 18000h
0x81EEC3: jz      short loc_81EEE3
0x81EEC5: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81EEC9: jnz     short loc_81EED2
0x81EECB: mov     ecx, esi
0x81EECD: call    sub_7604D0
0x81EED2: mov     esi, ds:0B45BE8h
0x81EED8: test    esi, esi
0x81EEDA: mov     [esp+2Ch+var_14], esi
0x81EEDE: jz      short loc_81EEE3
0x81EEE0: add     [esi+60h], ebp
0x81EEE3: cmp     [esi+18h], ebp
0x81EEE6: jnb     short loc_81EF58
0x81EEE8: lea     ecx, [esp+2Ch+var_10]
0x81EEEC: push    ecx
0x81EEED: call    sub_772630
0x81EEF2: add     esp, 4
0x81EEF5: mov     edi, eax
0x81EEF7: cmp     ebx, [edi]
0x81EEF9: mov     byte ptr [esp+2Ch+var_4], 4
0x81EEFE: jz      short loc_81EF1E
0x81EF00: test    ebx, ebx
0x81EF02: jz      short loc_81EF11
0x81EF04: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x81EF08: jnz     short loc_81EF11
0x81EF0A: mov     ecx, ebx
0x81EF0C: call    sub_772560
0x81EF11: mov     ebx, [edi]
0x81EF13: test    ebx, ebx
0x81EF15: mov     [esp+2Ch+a3], ebx
0x81EF19: jz      short loc_81EF1E
0x81EF1B: add     [ebx+5Ch], ebp
0x81EF1E: mov     eax, [esp+2Ch+var_10]
0x81EF22: test    eax, eax
0x81EF24: mov     byte ptr [esp+2Ch+var_4], 1
0x81EF29: jz      short loc_81EF3E
0x81EF2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81EF2F: mov     ecx, eax
0x81EF31: add     eax, 5Ch ; '\'
0x81EF34: cmp     dword ptr [eax], 0
0x81EF37: jnz     short loc_81EF3E
0x81EF39: call    sub_772560
0x81EF3E: push    2
0x81EF40: push    ebp
0x81EF41: push    0
0x81EF43: push    ebx
0x81EF44: call    sub_801110
0x81EF49: mov     edx, [esi+14h]
0x81EF4C: add     esp, 10h
0x81EF4F: push    ebx; a3
0x81EF50: push    edx; a2
0x81EF51: mov     ecx, esi; this
0x81EF53: call    sub_760010
0x81EF58: mov     eax, ds:0B45310h
0x81EF5D: mov     edi, [esi+58h]
0x81EF60: cmp     edi, eax
0x81EF62: mov     ebp, eax
0x81EF64: jz      short loc_81EF97
0x81EF66: test    edi, edi
0x81EF68: jz      short loc_81EF86
0x81EF6A: lea     eax, [edi+4]
0x81EF6D: push    eax; lpAddend
0x81EF6E: call    dword ptr ds:0A2807Ch
0x81EF74: test    eax, eax
0x81EF76: jnz     short loc_81EF86
0x81EF78: test    edi, edi
0x81EF7A: jz      short loc_81EF86
0x81EF7C: mov     edx, [edi]
0x81EF7E: mov     eax, [edx]
0x81EF80: push    1
0x81EF82: mov     ecx, edi
0x81EF84: call    eax
0x81EF86: test    ebp, ebp
0x81EF88: mov     [esi+58h], ebp
0x81EF8B: jz      short loc_81EF97
0x81EF8D: add     ebp, 4
0x81EF90: push    ebp; lpAddend
0x81EF91: call    dword ptr ds:0A28078h
0x81EF97: mov     eax, ds:0B45100h
0x81EF9C: mov     edi, [esi+44h]
0x81EF9F: cmp     edi, eax
0x81EFA1: mov     ebp, eax
0x81EFA3: jz      short loc_81EFD6
0x81EFA5: test    edi, edi
0x81EFA7: jz      short loc_81EFC5
0x81EFA9: lea     ecx, [edi+4]
0x81EFAC: push    ecx; lpAddend
0x81EFAD: call    dword ptr ds:0A2807Ch
0x81EFB3: test    eax, eax
0x81EFB5: jnz     short loc_81EFC5
0x81EFB7: test    edi, edi
0x81EFB9: jz      short loc_81EFC5
0x81EFBB: mov     edx, [edi]
0x81EFBD: mov     eax, [edx]
0x81EFBF: push    1
0x81EFC1: mov     ecx, edi
0x81EFC3: call    eax
0x81EFC5: test    ebp, ebp
0x81EFC7: mov     [esi+44h], ebp
0x81EFCA: jz      short loc_81EFD6
0x81EFCC: add     ebp, 4
0x81EFCF: push    ebp; lpAddend
0x81EFD0: call    dword ptr ds:0A28078h
0x81EFD6: cmp     dword ptr [esi+30h], 0
0x81EFDA: jnz     short loc_81EFE4
0x81EFDC: call    sub_772DF0
0x81EFE1: mov     [esi+30h], eax
0x81EFE4: mov     ecx, [esi+30h]
0x81EFE7: push    0
0x81EFE9: push    1
0x81EFEB: push    1Bh
0x81EFED: call    sub_772CD0
0x81EFF2: cmp     dword ptr [esi+30h], 0
0x81EFF6: jnz     short loc_81F000
0x81EFF8: call    sub_772DF0
0x81EFFD: mov     [esi+30h], eax
0x81F000: mov     ecx, [esi+30h]
0x81F003: push    0
0x81F005: push    5
0x81F007: push    13h
0x81F009: call    sub_772CD0
0x81F00E: cmp     dword ptr [esi+30h], 0
0x81F012: jnz     short loc_81F01C
0x81F014: call    sub_772DF0
0x81F019: mov     [esi+30h], eax
0x81F01C: mov     ecx, [esi+30h]
0x81F01F: push    0
0x81F021: push    6
0x81F023: push    14h
0x81F025: call    sub_772CD0
0x81F02A: cmp     dword ptr [esi+30h], 0
0x81F02E: jnz     short loc_81F038
0x81F030: call    sub_772DF0
0x81F035: mov     [esi+30h], eax
0x81F038: mov     ecx, [esi+30h]
0x81F03B: push    0
0x81F03D: push    0
0x81F03F: push    0Fh
0x81F041: call    sub_772CD0
0x81F046: cmp     dword ptr [esi+30h], 0
0x81F04A: jnz     short loc_81F054
0x81F04C: call    sub_772DF0
0x81F051: mov     [esi+30h], eax
0x81F054: mov     ecx, [esi+30h]
0x81F057: push    0
0x81F059: push    1
0x81F05B: push    7
0x81F05D: call    sub_772CD0
0x81F062: cmp     dword ptr [esi+30h], 0
0x81F066: jnz     short loc_81F070
0x81F068: call    sub_772DF0
0x81F06D: mov     [esi+30h], eax
0x81F070: mov     ecx, [esi+30h]
0x81F073: push    0
0x81F075: push    3
0x81F077: push    17h
0x81F079: call    sub_772CD0
0x81F07E: cmp     dword ptr [esi+30h], 0
0x81F082: jnz     short loc_81F08C
0x81F084: call    sub_772DF0
0x81F089: mov     [esi+30h], eax
0x81F08C: mov     ecx, [esi+30h]
0x81F08F: push    0
0x81F091: push    0
0x81F093: push    0Eh
0x81F095: call    sub_772CD0
0x81F09A: cmp     dword ptr [esi+30h], 0
0x81F09E: jnz     short loc_81F0A8
0x81F0A0: call    sub_772DF0
0x81F0A5: mov     [esi+30h], eax
0x81F0A8: mov     ecx, [esi+30h]
0x81F0AB: push    0
0x81F0AD: push    0
0x81F0AF: push    34h ; '4'
0x81F0B1: call    sub_772CD0
0x81F0B6: cmp     esi, ds:0B45BECh
0x81F0BC: mov     ebx, 58008h
0x81F0C1: mov     ds:0B44168h, ebx
0x81F0C7: mov     dword ptr ds:0B447F8h, 0
0x81F0D1: mov     dword ptr ds:0B43AD8h, 18000h
0x81F0DB: jz      short loc_81F0FC
0x81F0DD: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81F0E1: jnz     short loc_81F0EA
0x81F0E3: mov     ecx, esi
0x81F0E5: call    sub_7604D0
0x81F0EA: mov     esi, ds:0B45BECh
0x81F0F0: test    esi, esi
0x81F0F2: mov     [esp+2Ch+var_14], esi
0x81F0F6: jz      short loc_81F0FC
0x81F0F8: add     dword ptr [esi+60h], 1
0x81F0FC: cmp     dword ptr [esi+18h], 1
0x81F100: jnb     short loc_81F178
0x81F102: lea     ecx, [esp+2Ch+var_10]
0x81F106: push    ecx
0x81F107: call    sub_772630
0x81F10C: add     esp, 4
0x81F10F: mov     edi, eax
0x81F111: mov     ebp, [esp+2Ch+a3]
0x81F115: cmp     ebp, [edi]
0x81F117: mov     byte ptr [esp+2Ch+var_4], 5
0x81F11C: jz      short loc_81F13D
0x81F11E: test    ebp, ebp
0x81F120: jz      short loc_81F12F
0x81F122: add     dword ptr [ebp+5Ch], 0FFFFFFFFh
0x81F126: jnz     short loc_81F12F
0x81F128: mov     ecx, ebp
0x81F12A: call    sub_772560
0x81F12F: mov     ebp, [edi]
0x81F131: test    ebp, ebp
0x81F133: mov     [esp+2Ch+a3], ebp
0x81F137: jz      short loc_81F13D
0x81F139: add     dword ptr [ebp+5Ch], 1
0x81F13D: mov     eax, [esp+2Ch+var_10]
0x81F141: test    eax, eax
0x81F143: mov     byte ptr [esp+2Ch+var_4], 1
0x81F148: jz      short loc_81F15D
0x81F14A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81F14E: mov     ecx, eax
0x81F150: add     eax, 5Ch ; '\'
0x81F153: cmp     dword ptr [eax], 0
0x81F156: jnz     short loc_81F15D
0x81F158: call    sub_772560
0x81F15D: push    2
0x81F15F: push    1
0x81F161: push    0
0x81F163: push    ebp
0x81F164: call    sub_801110
0x81F169: mov     edx, [esi+14h]
0x81F16C: add     esp, 10h
0x81F16F: push    ebp; a3
0x81F170: push    edx; a2
0x81F171: mov     ecx, esi; this
0x81F173: call    sub_760010
0x81F178: mov     eax, ds:0B45314h
0x81F17D: mov     edi, [esi+58h]
0x81F180: cmp     edi, eax
0x81F182: mov     ebp, eax
0x81F184: jz      short loc_81F1B7
0x81F186: test    edi, edi
0x81F188: jz      short loc_81F1A6
0x81F18A: lea     eax, [edi+4]
0x81F18D: push    eax; lpAddend
0x81F18E: call    dword ptr ds:0A2807Ch
0x81F194: test    eax, eax
0x81F196: jnz     short loc_81F1A6
0x81F198: test    edi, edi
0x81F19A: jz      short loc_81F1A6
0x81F19C: mov     edx, [edi]
0x81F19E: mov     eax, [edx]
0x81F1A0: push    1
0x81F1A2: mov     ecx, edi
0x81F1A4: call    eax
0x81F1A6: test    ebp, ebp
0x81F1A8: mov     [esi+58h], ebp
0x81F1AB: jz      short loc_81F1B7
0x81F1AD: add     ebp, 4
0x81F1B0: push    ebp; lpAddend
0x81F1B1: call    dword ptr ds:0A28078h
0x81F1B7: mov     eax, ds:0B45104h
0x81F1BC: mov     edi, [esi+44h]
0x81F1BF: cmp     edi, eax
0x81F1C1: mov     ebp, eax
0x81F1C3: jz      short loc_81F1F6
0x81F1C5: test    edi, edi
0x81F1C7: jz      short loc_81F1E5
0x81F1C9: lea     ecx, [edi+4]
0x81F1CC: push    ecx; lpAddend
0x81F1CD: call    dword ptr ds:0A2807Ch
0x81F1D3: test    eax, eax
0x81F1D5: jnz     short loc_81F1E5
0x81F1D7: test    edi, edi
0x81F1D9: jz      short loc_81F1E5
0x81F1DB: mov     edx, [edi]
0x81F1DD: mov     eax, [edx]
0x81F1DF: push    1
0x81F1E1: mov     ecx, edi
0x81F1E3: call    eax
0x81F1E5: test    ebp, ebp
0x81F1E7: mov     [esi+44h], ebp
0x81F1EA: jz      short loc_81F1F6
0x81F1EC: add     ebp, 4
0x81F1EF: push    ebp; lpAddend
0x81F1F0: call    dword ptr ds:0A28078h
0x81F1F6: cmp     dword ptr [esi+30h], 0
0x81F1FA: jnz     short loc_81F204
0x81F1FC: call    sub_772DF0
0x81F201: mov     [esi+30h], eax
0x81F204: mov     ecx, [esi+30h]
0x81F207: push    0
0x81F209: push    1
0x81F20B: push    1Bh
0x81F20D: call    sub_772CD0
0x81F212: cmp     dword ptr [esi+30h], 0
0x81F216: jnz     short loc_81F220
0x81F218: call    sub_772DF0
0x81F21D: mov     [esi+30h], eax
0x81F220: mov     ecx, [esi+30h]
0x81F223: push    0
0x81F225: push    5
0x81F227: push    13h
0x81F229: call    sub_772CD0
0x81F22E: cmp     dword ptr [esi+30h], 0
0x81F232: jnz     short loc_81F23C
0x81F234: call    sub_772DF0
0x81F239: mov     [esi+30h], eax
0x81F23C: mov     ecx, [esi+30h]
0x81F23F: push    0
0x81F241: push    6
0x81F243: push    14h
0x81F245: call    sub_772CD0
0x81F24A: cmp     dword ptr [esi+30h], 0
0x81F24E: jnz     short loc_81F258
0x81F250: call    sub_772DF0
0x81F255: mov     [esi+30h], eax
0x81F258: mov     ecx, [esi+30h]
0x81F25B: push    0
0x81F25D: push    0
0x81F25F: push    0Fh
0x81F261: call    sub_772CD0
0x81F266: cmp     dword ptr [esi+30h], 0
0x81F26A: jnz     short loc_81F274
0x81F26C: call    sub_772DF0
0x81F271: mov     [esi+30h], eax
0x81F274: mov     ecx, [esi+30h]
0x81F277: push    0
0x81F279: push    1
0x81F27B: push    7
0x81F27D: call    sub_772CD0
0x81F282: cmp     dword ptr [esi+30h], 0
0x81F286: jnz     short loc_81F290
0x81F288: call    sub_772DF0
0x81F28D: mov     [esi+30h], eax
0x81F290: mov     ecx, [esi+30h]
0x81F293: push    0
0x81F295: push    3
0x81F297: push    17h
0x81F299: call    sub_772CD0
0x81F29E: cmp     dword ptr [esi+30h], 0
0x81F2A2: jnz     short loc_81F2AC
0x81F2A4: call    sub_772DF0
0x81F2A9: mov     [esi+30h], eax
0x81F2AC: mov     ecx, [esi+30h]
0x81F2AF: push    0
0x81F2B1: push    0
0x81F2B3: push    0Eh
0x81F2B5: call    sub_772CD0
0x81F2BA: cmp     dword ptr [esi+30h], 0
0x81F2BE: jnz     short loc_81F2C8
0x81F2C0: call    sub_772DF0
0x81F2C5: mov     [esi+30h], eax
0x81F2C8: mov     ecx, [esi+30h]
0x81F2CB: push    0
0x81F2CD: push    0
0x81F2CF: push    34h ; '4'
0x81F2D1: call    sub_772CD0
0x81F2D6: mov     ecx, [esp+2Ch+a3]
0x81F2DA: or      edi, 0FFFFFFFFh
0x81F2DD: test    ecx, ecx
0x81F2DF: mov     ds:0B4416Ch, ebx
0x81F2E5: mov     dword ptr ds:0B447FCh, 0
0x81F2EF: mov     dword ptr ds:0B43ADCh, 18000h
0x81F2F9: mov     byte ptr [esp+2Ch+var_4], 0
0x81F2FE: jz      short loc_81F30A
0x81F300: add     [ecx+5Ch], edi
0x81F303: jnz     short loc_81F30A
0x81F305: call    sub_772560
0x81F30A: add     [esi+60h], edi
0x81F30D: mov     [esp+2Ch+var_4], edi
0x81F311: jnz     short loc_81F31A
0x81F313: mov     ecx, esi
0x81F315: call    sub_7604D0
0x81F31A: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81F31E: mov     large fs:0, ecx
0x81F325: pop     ecx
0x81F326: pop     edi
0x81F327: pop     esi
0x81F328: pop     ebp
0x81F329: pop     ebx
0x81F32A: add     esp, 18h
0x81F32D: retn
