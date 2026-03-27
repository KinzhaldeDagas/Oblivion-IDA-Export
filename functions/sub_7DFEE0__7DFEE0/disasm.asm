0x7DFEE0: push    0FFFFFFFFh
0x7DFEE2: push    offset SEH_7DFEE0
0x7DFEE7: mov     eax, large fs:0
0x7DFEED: push    eax
0x7DFEEE: sub     esp, 0Ch
0x7DFEF1: push    ebx
0x7DFEF2: push    ebp
0x7DFEF3: push    esi
0x7DFEF4: push    edi
0x7DFEF5: mov     eax, ds:0B30AACh
0x7DFEFA: xor     eax, esp
0x7DFEFC: push    eax
0x7DFEFD: lea     eax, [esp+2Ch+var_C]
0x7DFF01: mov     large fs:0, eax
0x7DFF07: mov     esi, ecx
0x7DFF09: mov     eax, [esi+0D4h]
0x7DFF0F: test    eax, eax
0x7DFF11: jnz     loc_7E0105
0x7DFF17: lea     eax, [esp+2Ch+var_14]
0x7DFF1B: push    eax
0x7DFF1C: call    sub_7606A0
0x7DFF21: add     esp, 4
0x7DFF24: mov     edi, eax
0x7DFF26: mov     ecx, [esi+0D4h]
0x7DFF2C: or      ebp, 0FFFFFFFFh
0x7DFF2F: cmp     ecx, [edi]
0x7DFF31: mov     [esp+2Ch+var_4], 0
0x7DFF39: jz      short loc_7DFF5F
0x7DFF3B: test    ecx, ecx
0x7DFF3D: jz      short loc_7DFF49
0x7DFF3F: add     [ecx+60h], ebp
0x7DFF42: jnz     short loc_7DFF49
0x7DFF44: call    sub_7604D0
0x7DFF49: mov     eax, [edi]
0x7DFF4B: test    eax, eax
0x7DFF4D: mov     [esi+0D4h], eax
0x7DFF53: jz      short loc_7DFF5F
0x7DFF55: mov     ebx, 1
0x7DFF5A: add     [eax+60h], ebx
0x7DFF5D: jmp     short loc_7DFF64
0x7DFF5F: mov     ebx, 1
0x7DFF64: mov     eax, [esp+2Ch+var_14]
0x7DFF68: test    eax, eax
0x7DFF6A: mov     [esp+2Ch+var_4], ebp
0x7DFF6E: jz      short loc_7DFF82
0x7DFF70: add     [eax+60h], ebp
0x7DFF73: mov     ecx, eax
0x7DFF75: add     eax, 60h ; '`'
0x7DFF78: cmp     dword ptr [eax], 0
0x7DFF7B: jnz     short loc_7DFF82
0x7DFF7D: call    sub_7604D0
0x7DFF82: lea     ecx, [esp+2Ch+a3]
0x7DFF86: push    ecx
0x7DFF87: call    sub_772630
0x7DFF8C: mov     edx, [esp+30h+a3]
0x7DFF90: push    2
0x7DFF92: push    3
0x7DFF94: push    0
0x7DFF96: push    edx
0x7DFF97: mov     [esp+40h+var_4], ebx
0x7DFF9B: call    sub_801110
0x7DFFA0: mov     ecx, [esp+40h+a3]
0x7DFFA4: add     esp, 14h
0x7DFFA7: push    0
0x7DFFA9: call    sub_771640
0x7DFFAE: mov     ecx, [esi+0D4h]; this
0x7DFFB4: mov     eax, [esp+2Ch+a3]
0x7DFFB8: mov     edx, [ecx+14h]
0x7DFFBB: push    eax; a3
0x7DFFBC: push    edx; a2
0x7DFFBD: call    sub_760010
0x7DFFC2: lea     eax, [esp+2Ch+var_14]
0x7DFFC6: push    eax
0x7DFFC7: call    sub_772630
0x7DFFCC: add     esp, 4
0x7DFFCF: mov     edi, eax
0x7DFFD1: mov     eax, [esp+2Ch+a3]
0x7DFFD5: cmp     eax, [edi]
0x7DFFD7: mov     byte ptr [esp+2Ch+var_4], 2
0x7DFFDC: jz      short loc_7E0005
0x7DFFDE: test    eax, eax
0x7DFFE0: jz      short loc_7DFFF4
0x7DFFE2: add     [eax+5Ch], ebp
0x7DFFE5: mov     ecx, eax
0x7DFFE7: add     eax, 5Ch ; '\'
0x7DFFEA: cmp     dword ptr [eax], 0
0x7DFFED: jnz     short loc_7DFFF4
0x7DFFEF: call    sub_772560
0x7DFFF4: mov     eax, [edi]
0x7DFFF6: test    eax, eax
0x7DFFF8: mov     [esp+2Ch+a3], eax
0x7DFFFC: jz      short loc_7E0005
0x7DFFFE: add     [eax+5Ch], ebx
0x7E0001: mov     eax, [esp+2Ch+a3]
0x7E0005: mov     ecx, [esp+2Ch+var_14]
0x7E0009: test    ecx, ecx
0x7E000B: mov     byte ptr [esp+2Ch+var_4], 1
0x7E0010: jz      short loc_7E0027
0x7E0012: add     [ecx+5Ch], ebp
0x7E0015: cmp     dword ptr [ecx+5Ch], 0
0x7E0019: lea     eax, [ecx+5Ch]
0x7E001C: jnz     short loc_7E0023
0x7E001E: call    sub_772560
0x7E0023: mov     eax, [esp+2Ch+a3]
0x7E0027: push    2
0x7E0029: push    3
0x7E002B: push    ebx
0x7E002C: push    eax
0x7E002D: call    sub_801110
0x7E0032: mov     ecx, [esp+3Ch+a3]
0x7E0036: add     esp, 10h
0x7E0039: push    0
0x7E003B: call    sub_771640
0x7E0040: mov     ecx, [esi+0D4h]; this
0x7E0046: mov     edx, [esp+2Ch+a3]
0x7E004A: mov     eax, [ecx+14h]
0x7E004D: push    edx; a3
0x7E004E: push    eax; a2
0x7E004F: call    sub_760010
0x7E0054: lea     ecx, [esp+2Ch+var_10]
0x7E0058: push    ecx
0x7E0059: call    sub_772630
0x7E005E: add     esp, 4
0x7E0061: mov     edi, eax
0x7E0063: mov     eax, [esp+2Ch+a3]
0x7E0067: cmp     eax, [edi]
0x7E0069: mov     byte ptr [esp+2Ch+var_4], 3
0x7E006E: jz      short loc_7E0097
0x7E0070: test    eax, eax
0x7E0072: jz      short loc_7E0086
0x7E0074: add     [eax+5Ch], ebp
0x7E0077: mov     ecx, eax
0x7E0079: add     eax, 5Ch ; '\'
0x7E007C: cmp     dword ptr [eax], 0
0x7E007F: jnz     short loc_7E0086
0x7E0081: call    sub_772560
0x7E0086: mov     eax, [edi]
0x7E0088: test    eax, eax
0x7E008A: mov     [esp+2Ch+a3], eax
0x7E008E: jz      short loc_7E0097
0x7E0090: add     [eax+5Ch], ebx
0x7E0093: mov     eax, [esp+2Ch+a3]
0x7E0097: mov     ecx, [esp+2Ch+var_10]
0x7E009B: test    ecx, ecx
0x7E009D: mov     byte ptr [esp+2Ch+var_4], 1
0x7E00A2: jz      short loc_7E00B9
0x7E00A4: add     [ecx+5Ch], ebp
0x7E00A7: cmp     dword ptr [ecx+5Ch], 0
0x7E00AB: lea     eax, [ecx+5Ch]
0x7E00AE: jnz     short loc_7E00B5
0x7E00B0: call    sub_772560
0x7E00B5: mov     eax, [esp+2Ch+a3]
0x7E00B9: push    2
0x7E00BB: push    3
0x7E00BD: push    2
0x7E00BF: push    eax
0x7E00C0: call    sub_801110
0x7E00C5: mov     ecx, [esp+3Ch+a3]
0x7E00C9: add     esp, 10h
0x7E00CC: push    0
0x7E00CE: call    sub_771640
0x7E00D3: mov     ecx, [esi+0D4h]; this
0x7E00D9: mov     edx, [esp+2Ch+a3]
0x7E00DD: mov     eax, [ecx+14h]
0x7E00E0: push    edx; a3
0x7E00E1: push    eax; a2
0x7E00E2: call    sub_760010
0x7E00E7: mov     eax, [esp+2Ch+a3]
0x7E00EB: test    eax, eax
0x7E00ED: mov     [esp+2Ch+var_4], ebp
0x7E00F1: jz      short loc_7E0105
0x7E00F3: add     [eax+5Ch], ebp
0x7E00F6: mov     ecx, eax
0x7E00F8: add     eax, 5Ch ; '\'
0x7E00FB: cmp     dword ptr [eax], 0
0x7E00FE: jnz     short loc_7E0105
0x7E0100: call    sub_772560
0x7E0105: mov     edi, [esi+0D4h]
0x7E010B: cmp     dword ptr [edi+30h], 0
0x7E010F: jnz     short loc_7E0119
0x7E0111: call    sub_772DF0
0x7E0116: mov     [edi+30h], eax
0x7E0119: mov     ecx, [edi+30h]
0x7E011C: push    0
0x7E011E: push    0
0x7E0120: push    7
0x7E0122: call    sub_772CD0
0x7E0127: mov     edi, [esi+0D4h]
0x7E012D: cmp     dword ptr [edi+30h], 0
0x7E0131: jnz     short loc_7E013B
0x7E0133: call    sub_772DF0
0x7E0138: mov     [edi+30h], eax
0x7E013B: mov     ecx, [edi+30h]
0x7E013E: push    0
0x7E0140: push    0
0x7E0142: push    0Eh
0x7E0144: call    sub_772CD0
0x7E0149: mov     edi, [esi+0D4h]
0x7E014F: cmp     dword ptr [edi+30h], 0
0x7E0153: jnz     short loc_7E015D
0x7E0155: call    sub_772DF0
0x7E015A: mov     [edi+30h], eax
0x7E015D: mov     ecx, [edi+30h]
0x7E0160: push    0
0x7E0162: push    0
0x7E0164: push    1Bh
0x7E0166: call    sub_772CD0
0x7E016B: mov     edi, [esi+0D4h]
0x7E0171: cmp     dword ptr [edi+30h], 0
0x7E0175: jnz     short loc_7E017F
0x7E0177: call    sub_772DF0
0x7E017C: mov     [edi+30h], eax
0x7E017F: mov     ecx, [edi+30h]
0x7E0182: push    0
0x7E0184: push    0
0x7E0186: push    0Fh
0x7E0188: call    sub_772CD0
0x7E018D: mov     edi, [esi+0D4h]
0x7E0193: cmp     dword ptr [edi+30h], 0
0x7E0197: jnz     short loc_7E01A1
0x7E0199: call    sub_772DF0
0x7E019E: mov     [edi+30h], eax
0x7E01A1: mov     ecx, [edi+30h]
0x7E01A4: push    0
0x7E01A6: push    0Fh
0x7E01A8: push    0A8h ; '¨'
0x7E01AD: call    sub_772CD0
0x7E01B2: mov     edi, [esi+0D4h]
0x7E01B8: mov     ebx, [esi+0B0h]
0x7E01BE: mov     ebp, [edi+58h]
0x7E01C1: add     edi, 58h ; 'X'
0x7E01C4: cmp     ebp, ebx
0x7E01C6: jz      short loc_7E01F9
0x7E01C8: test    ebp, ebp
0x7E01CA: jz      short loc_7E01E9
0x7E01CC: lea     ecx, [ebp+4]
0x7E01CF: push    ecx; lpAddend
0x7E01D0: call    dword ptr ds:0A2807Ch
0x7E01D6: test    eax, eax
0x7E01D8: jnz     short loc_7E01E9
0x7E01DA: test    ebp, ebp
0x7E01DC: jz      short loc_7E01E9
0x7E01DE: mov     edx, [ebp+0]
0x7E01E1: mov     eax, [edx]
0x7E01E3: push    1
0x7E01E5: mov     ecx, ebp
0x7E01E7: call    eax
0x7E01E9: test    ebx, ebx
0x7E01EB: mov     [edi], ebx
0x7E01ED: jz      short loc_7E01F9
0x7E01EF: add     ebx, 4
0x7E01F2: push    ebx; lpAddend
0x7E01F3: call    dword ptr ds:0A28078h
0x7E01F9: mov     ebx, [esi+0B4h]
0x7E01FF: mov     esi, [esi+0D4h]
0x7E0205: mov     edi, [esi+44h]
0x7E0208: add     esi, 44h ; 'D'
0x7E020B: cmp     edi, ebx
0x7E020D: jz      short loc_7E023F
0x7E020F: test    edi, edi
0x7E0211: jz      short loc_7E022F
0x7E0213: lea     ecx, [edi+4]
0x7E0216: push    ecx; lpAddend
0x7E0217: call    dword ptr ds:0A2807Ch
0x7E021D: test    eax, eax
0x7E021F: jnz     short loc_7E022F
0x7E0221: test    edi, edi
0x7E0223: jz      short loc_7E022F
0x7E0225: mov     edx, [edi]
0x7E0227: mov     eax, [edx]
0x7E0229: push    1
0x7E022B: mov     ecx, edi
0x7E022D: call    eax
0x7E022F: test    ebx, ebx
0x7E0231: mov     [esi], ebx
0x7E0233: jz      short loc_7E023F
0x7E0235: add     ebx, 4
0x7E0238: push    ebx; lpAddend
0x7E0239: call    dword ptr ds:0A28078h
0x7E023F: mov     al, 1
0x7E0241: mov     ecx, dword ptr [esp+2Ch+var_C]
0x7E0245: mov     large fs:0, ecx
0x7E024C: pop     ecx
0x7E024D: pop     edi
0x7E024E: pop     esi
0x7E024F: pop     ebp
0x7E0250: pop     ebx
0x7E0251: add     esp, 18h
0x7E0254: retn
