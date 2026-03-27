0x7CBDC0: push    0FFFFFFFFh
0x7CBDC2: push    offset SEH_7FC7D0
0x7CBDC7: mov     eax, large fs:0
0x7CBDCD: push    eax
0x7CBDCE: sub     esp, 8
0x7CBDD1: push    ebx
0x7CBDD2: push    ebp
0x7CBDD3: push    esi
0x7CBDD4: push    edi
0x7CBDD5: mov     eax, ds:0B30AACh
0x7CBDDA: xor     eax, esp
0x7CBDDC: push    eax
0x7CBDDD: lea     eax, [esp+28h+var_C]
0x7CBDE1: mov     large fs:0, eax
0x7CBDE7: push    8; Size
0x7CBDE9: call    FormHeapAlloc
0x7CBDEE: add     esp, 4
0x7CBDF1: mov     [esp+28h+var_14], eax
0x7CBDF5: test    eax, eax
0x7CBDF7: mov     [esp+28h+var_4], 0
0x7CBDFF: jz      short loc_7CBE0C
0x7CBE01: mov     ecx, eax
0x7CBE03: call    ShaderDefinition__Init
0x7CBE08: mov     ebp, eax
0x7CBE0A: jmp     short loc_7CBE0E
0x7CBE0C: xor     ebp, ebp
0x7CBE0E: mov     eax, ds:0B43104h
0x7CBE13: push    1; StreamCount
0x7CBE15: push    6; a2
0x7CBE17: push    eax; a1
0x7CBE18: mov     [esp+34h+var_4], 0FFFFFFFFh
0x7CBE20: call    CreateDX9ShaderDeclaration
0x7CBE25: mov     esi, [ebp+0]
0x7CBE28: mov     edi, eax
0x7CBE2A: add     esp, 0Ch
0x7CBE2D: cmp     esi, edi
0x7CBE2F: jz      short loc_7CBE62
0x7CBE31: test    esi, esi
0x7CBE33: jz      short loc_7CBE51
0x7CBE35: lea     ecx, [esi+4]
0x7CBE38: push    ecx; lpAddend
0x7CBE39: call    dword ptr ds:0A2807Ch
0x7CBE3F: test    eax, eax
0x7CBE41: jnz     short loc_7CBE51
0x7CBE43: test    esi, esi
0x7CBE45: jz      short loc_7CBE51
0x7CBE47: mov     edx, [esi]
0x7CBE49: mov     eax, [edx]
0x7CBE4B: push    1
0x7CBE4D: mov     ecx, esi
0x7CBE4F: call    eax
0x7CBE51: test    edi, edi
0x7CBE53: mov     [ebp+0], edi
0x7CBE56: jz      short loc_7CBE62
0x7CBE58: add     edi, 4
0x7CBE5B: push    edi; lpAddend
0x7CBE5C: call    dword ptr ds:0A28078h
0x7CBE62: mov     ecx, ds:0B43104h
0x7CBE68: push    1; StreamCount
0x7CBE6A: push    8; a2
0x7CBE6C: push    ecx; a1
0x7CBE6D: call    CreateDX9ShaderDeclaration
0x7CBE72: mov     edx, ds:0B43104h
0x7CBE78: push    1; StreamCount
0x7CBE7A: push    4; a2
0x7CBE7C: push    edx; a1
0x7CBE7D: mov     esi, eax
0x7CBE7F: call    CreateDX9ShaderDeclaration
0x7CBE84: push    1; StreamCount
0x7CBE86: mov     ebx, eax
0x7CBE88: mov     eax, ds:0B43104h
0x7CBE8D: push    8; a2
0x7CBE8F: push    eax; a1
0x7CBE90: call    CreateDX9ShaderDeclaration
0x7CBE95: mov     ecx, [ebp+0]
0x7CBE98: mov     edx, [ecx]
0x7CBE9A: add     esp, 24h
0x7CBE9D: push    0
0x7CBE9F: push    2
0x7CBEA1: push    0
0x7CBEA3: push    0
0x7CBEA5: mov     edi, eax
0x7CBEA7: mov     eax, [edx+50h]
0x7CBEAA: push    0
0x7CBEAC: call    eax
0x7CBEAE: mov     ecx, [ebp+0]
0x7CBEB1: mov     edx, [ecx]
0x7CBEB3: mov     eax, [edx+50h]
0x7CBEB6: push    0
0x7CBEB8: push    2
0x7CBEBA: push    3
0x7CBEBC: push    3
0x7CBEBE: push    1
0x7CBEC0: call    eax
0x7CBEC2: mov     ecx, [ebp+0]
0x7CBEC5: mov     edx, [ecx]
0x7CBEC7: mov     eax, [edx+50h]
0x7CBECA: push    0
0x7CBECC: push    3
0x7CBECE: push    4
0x7CBED0: push    5
0x7CBED2: push    2
0x7CBED4: call    eax
0x7CBED6: mov     ecx, [ebp+0]
0x7CBED9: mov     edx, [ecx]
0x7CBEDB: mov     eax, [edx+50h]
0x7CBEDE: push    0
0x7CBEE0: push    1
0x7CBEE2: push    5
0x7CBEE4: push    7
0x7CBEE6: push    3
0x7CBEE8: call    eax
0x7CBEEA: mov     ecx, [ebp+0]
0x7CBEED: mov     edx, [ecx]
0x7CBEEF: mov     eax, [edx+4Ch]
0x7CBEF2: push    0
0x7CBEF4: push    0
0x7CBEF6: push    6
0x7CBEF8: push    2
0x7CBEFA: push    80000000h
0x7CBEFF: push    0Eh
0x7CBF01: push    4
0x7CBF03: push    0
0x7CBF05: call    eax
0x7CBF07: mov     ecx, [ebp+0]
0x7CBF0A: mov     edx, [ecx]
0x7CBF0C: mov     eax, [edx+4Ch]
0x7CBF0F: push    0
0x7CBF11: push    0
0x7CBF13: push    7
0x7CBF15: push    2
0x7CBF17: push    80000001h
0x7CBF1C: push    0Fh
0x7CBF1E: push    5
0x7CBF20: push    0
0x7CBF22: call    eax
0x7CBF24: mov     edx, [esi]
0x7CBF26: push    0
0x7CBF28: mov     eax, [edx+50h]
0x7CBF2B: push    2
0x7CBF2D: push    0
0x7CBF2F: push    0
0x7CBF31: push    0
0x7CBF33: mov     ecx, esi
0x7CBF35: call    eax
0x7CBF37: mov     edx, [esi]
0x7CBF39: mov     eax, [edx+50h]
0x7CBF3C: push    0
0x7CBF3E: push    3
0x7CBF40: push    1
0x7CBF42: push    1
0x7CBF44: push    1
0x7CBF46: mov     ecx, esi
0x7CBF48: call    eax
0x7CBF4A: mov     edx, [esi]
0x7CBF4C: mov     eax, [edx+50h]
0x7CBF4F: push    0
0x7CBF51: push    4
0x7CBF53: push    2
0x7CBF55: push    2
0x7CBF57: push    2
0x7CBF59: mov     ecx, esi
0x7CBF5B: call    eax
0x7CBF5D: mov     edx, [esi]
0x7CBF5F: mov     eax, [edx+50h]
0x7CBF62: push    0
0x7CBF64: push    2
0x7CBF66: push    3
0x7CBF68: push    3
0x7CBF6A: push    3
0x7CBF6C: mov     ecx, esi
0x7CBF6E: call    eax
0x7CBF70: mov     edx, [esi]
0x7CBF72: mov     eax, [edx+50h]
0x7CBF75: push    0
0x7CBF77: push    3
0x7CBF79: push    4
0x7CBF7B: push    5
0x7CBF7D: push    4
0x7CBF7F: mov     ecx, esi
0x7CBF81: call    eax
0x7CBF83: mov     edx, [esi]
0x7CBF85: mov     eax, [edx+50h]
0x7CBF88: push    0
0x7CBF8A: push    1
0x7CBF8C: push    5
0x7CBF8E: push    7
0x7CBF90: push    5
0x7CBF92: mov     ecx, esi
0x7CBF94: call    eax
0x7CBF96: mov     edx, [esi]
0x7CBF98: mov     eax, [edx+4Ch]
0x7CBF9B: push    0
0x7CBF9D: push    0
0x7CBF9F: push    6
0x7CBFA1: push    2
0x7CBFA3: push    80000000h
0x7CBFA8: push    0Eh
0x7CBFAA: push    6
0x7CBFAC: push    0
0x7CBFAE: mov     ecx, esi
0x7CBFB0: call    eax
0x7CBFB2: mov     edx, [esi]
0x7CBFB4: mov     eax, [edx+4Ch]
0x7CBFB7: push    0
0x7CBFB9: push    0
0x7CBFBB: push    7
0x7CBFBD: push    2
0x7CBFBF: push    80000001h
0x7CBFC4: push    0Fh
0x7CBFC6: push    7
0x7CBFC8: push    0
0x7CBFCA: mov     ecx, esi
0x7CBFCC: call    eax
0x7CBFCE: mov     edx, [ebx]
0x7CBFD0: push    0
0x7CBFD2: push    2
0x7CBFD4: push    0
0x7CBFD6: push    0
0x7CBFD8: mov     eax, [edx+50h]
0x7CBFDB: push    0
0x7CBFDD: mov     ecx, ebx
0x7CBFDF: call    eax
0x7CBFE1: mov     edx, [ebx]
0x7CBFE3: mov     eax, [edx+50h]
0x7CBFE6: push    0
0x7CBFE8: push    2
0x7CBFEA: push    3
0x7CBFEC: push    3
0x7CBFEE: push    1
0x7CBFF0: mov     ecx, ebx
0x7CBFF2: call    eax
0x7CBFF4: mov     edx, [ebx]
0x7CBFF6: mov     eax, [edx+50h]
0x7CBFF9: push    0
0x7CBFFB: push    3
0x7CBFFD: push    4
0x7CBFFF: push    5
0x7CC001: push    2
0x7CC003: mov     ecx, ebx
0x7CC005: call    eax
0x7CC007: mov     edx, [ebx]
0x7CC009: mov     eax, [edx+50h]
0x7CC00C: push    0
0x7CC00E: push    1
0x7CC010: push    5
0x7CC012: push    7
0x7CC014: push    3
0x7CC016: mov     ecx, ebx
0x7CC018: call    eax
0x7CC01A: mov     edx, [edi]
0x7CC01C: mov     eax, [edx+50h]
0x7CC01F: push    0
0x7CC021: push    2
0x7CC023: push    0
0x7CC025: push    0
0x7CC027: push    0
0x7CC029: mov     ecx, edi
0x7CC02B: call    eax
0x7CC02D: mov     edx, [edi]
0x7CC02F: mov     eax, [edx+50h]
0x7CC032: push    0
0x7CC034: push    2
0x7CC036: push    3
0x7CC038: push    3
0x7CC03A: push    1
0x7CC03C: mov     ecx, edi
0x7CC03E: call    eax
0x7CC040: mov     edx, [edi]
0x7CC042: mov     eax, [edx+50h]
0x7CC045: push    0
0x7CC047: push    3
0x7CC049: push    4
0x7CC04B: push    5
0x7CC04D: push    2
0x7CC04F: mov     ecx, edi
0x7CC051: call    eax
0x7CC053: mov     edx, [edi]
0x7CC055: mov     eax, [edx+50h]
0x7CC058: push    0
0x7CC05A: push    1
0x7CC05C: push    5
0x7CC05E: push    7
0x7CC060: push    3
0x7CC062: mov     ecx, edi
0x7CC064: call    eax
0x7CC066: mov     edx, [edi]
0x7CC068: mov     eax, [edx+4Ch]
0x7CC06B: push    0
0x7CC06D: push    0
0x7CC06F: push    6
0x7CC071: push    2
0x7CC073: push    80000000h
0x7CC078: push    0Eh
0x7CC07A: push    4
0x7CC07C: push    0
0x7CC07E: mov     ecx, edi
0x7CC080: call    eax
0x7CC082: mov     edx, [edi]
0x7CC084: push    0
0x7CC086: mov     eax, [edx+4Ch]
0x7CC089: push    0
0x7CC08B: push    7
0x7CC08D: push    2
0x7CC08F: push    80000001h
0x7CC094: push    0Fh
0x7CC096: push    5
0x7CC098: push    0
0x7CC09A: mov     ecx, edi
0x7CC09C: call    eax
0x7CC09E: mov     edx, [edi]
0x7CC0A0: mov     eax, [edx+4Ch]
0x7CC0A3: push    0
0x7CC0A5: push    1
0x7CC0A7: push    5
0x7CC0A9: push    3
0x7CC0AB: push    80000002h
0x7CC0B0: push    8
0x7CC0B2: push    6
0x7CC0B4: push    0
0x7CC0B6: mov     ecx, edi
0x7CC0B8: call    eax
0x7CC0BA: mov     edx, [edi]
0x7CC0BC: mov     eax, [edx+4Ch]
0x7CC0BF: push    0
0x7CC0C1: push    2
0x7CC0C3: push    5
0x7CC0C5: push    3
0x7CC0C7: push    80000003h
0x7CC0CC: push    9
0x7CC0CE: push    7
0x7CC0D0: push    0
0x7CC0D2: mov     ecx, edi
0x7CC0D4: call    eax
0x7CC0D6: mov     ecx, [ebp+0]
0x7CC0D9: test    ecx, ecx
0x7CC0DB: mov     [esp+28h+var_14], ecx
0x7CC0DF: jnz     short loc_7CC0E7
0x7CC0E1: mov     [esp+28h+var_14], ecx
0x7CC0E5: jmp     short loc_7CC112
0x7CC0E7: mov     edx, [ecx]
0x7CC0E9: mov     eax, [edx+4]
0x7CC0EC: call    eax
0x7CC0EE: test    eax, eax
0x7CC0F0: jz      short loc_7CC104
0x7CC0F2: cmp     eax, offset dword_B3F684
0x7CC0F7: jz      loc_7CC1BD
0x7CC0FD: mov     eax, [eax+4]
0x7CC100: test    eax, eax
0x7CC102: jnz     short loc_7CC0F2
0x7CC104: xor     al, al
0x7CC106: neg     al
0x7CC108: sbb     eax, eax
0x7CC10A: and     eax, [esp+28h+var_14]
0x7CC10E: mov     [esp+28h+var_14], eax
0x7CC112: mov     edx, [esi]
0x7CC114: mov     eax, [edx+4]
0x7CC117: mov     ecx, esi
0x7CC119: call    eax
0x7CC11B: test    eax, eax
0x7CC11D: jz      short loc_7CC132
0x7CC11F: nop
0x7CC120: cmp     eax, offset dword_B3F684
0x7CC125: jz      loc_7CC1C4
0x7CC12B: mov     eax, [eax+4]
0x7CC12E: test    eax, eax
0x7CC130: jnz     short loc_7CC120
0x7CC132: xor     al, al
0x7CC134: mov     edx, [ebx]
0x7CC136: neg     al
0x7CC138: mov     ecx, ebx
0x7CC13A: sbb     eax, eax
0x7CC13C: and     eax, esi
0x7CC13E: mov     esi, eax
0x7CC140: mov     eax, [edx+4]
0x7CC143: call    eax
0x7CC145: test    eax, eax
0x7CC147: jz      short loc_7CC15E
0x7CC149: lea     esp, [esp+0]
0x7CC150: cmp     eax, offset dword_B3F684
0x7CC155: jz      short loc_7CC1CB
0x7CC157: mov     eax, [eax+4]
0x7CC15A: test    eax, eax
0x7CC15C: jnz     short loc_7CC150
0x7CC15E: xor     al, al
0x7CC160: mov     edx, [edi]
0x7CC162: neg     al
0x7CC164: mov     ecx, edi
0x7CC166: sbb     eax, eax
0x7CC168: and     eax, ebx
0x7CC16A: mov     ebx, eax
0x7CC16C: mov     eax, [edx+4]
0x7CC16F: call    eax
0x7CC171: test    eax, eax
0x7CC173: jz      short loc_7CC183
0x7CC175: cmp     eax, offset dword_B3F684
0x7CC17A: jz      short loc_7CC1CF
0x7CC17C: mov     eax, [eax+4]
0x7CC17F: test    eax, eax
0x7CC181: jnz     short loc_7CC175
0x7CC183: xor     al, al
0x7CC185: neg     al
0x7CC187: push    9Ch ; 'œ'; Size
0x7CC18C: sbb     eax, eax
0x7CC18E: and     eax, edi
0x7CC190: mov     edi, eax
0x7CC192: call    FormHeapAlloc
0x7CC197: add     esp, 4
0x7CC19A: mov     [esp+28h+var_10], eax
0x7CC19E: test    eax, eax
0x7CC1A0: mov     [esp+28h+var_4], 1
0x7CC1A8: jz      short loc_7CC1D3
0x7CC1AA: mov     ecx, [esp+28h+var_14]
0x7CC1AE: push    edi
0x7CC1AF: push    ebx
0x7CC1B0: push    esi
0x7CC1B1: push    ecx
0x7CC1B2: mov     ecx, eax; this
0x7CC1B4: call    ??0ShadowLightShader@@QAE@XZ; ShadowLightShader::ShadowLightShader(void)
0x7CC1B9: mov     esi, eax
0x7CC1BB: jmp     short loc_7CC1D5
0x7CC1BD: mov     al, 1
0x7CC1BF: jmp     loc_7CC106
0x7CC1C4: mov     al, 1
0x7CC1C6: jmp     loc_7CC134
0x7CC1CB: mov     al, 1
0x7CC1CD: jmp     short loc_7CC160
0x7CC1CF: mov     al, 1
0x7CC1D1: jmp     short loc_7CC185
0x7CC1D3: xor     esi, esi
0x7CC1D5: mov     edx, [esi]
0x7CC1D7: mov     eax, [edx+84h]
0x7CC1DD: mov     ecx, esi
0x7CC1DF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7CC1E7: call    eax
0x7CC1E9: mov     edx, [esi]
0x7CC1EB: mov     eax, [edx+0A8h]
0x7CC1F1: mov     ecx, esi
0x7CC1F3: call    eax
0x7CC1F5: mov     edx, [esi]
0x7CC1F7: mov     eax, [edx+0B4h]
0x7CC1FD: mov     ecx, esi
0x7CC1FF: call    eax
0x7CC201: mov     edx, [esi]
0x7CC203: mov     eax, [edx+0B8h]
0x7CC209: mov     ecx, esi
0x7CC20B: call    eax
0x7CC20D: mov     edx, [esi]
0x7CC20F: mov     eax, [edx+88h]
0x7CC215: mov     ecx, esi
0x7CC217: call    eax
0x7CC219: mov     edi, [ebp+4]
0x7CC21C: cmp     edi, esi
0x7CC21E: jz      short loc_7CC24D
0x7CC220: test    edi, edi
0x7CC222: jz      short loc_7CC240
0x7CC224: lea     ecx, [edi+4]
0x7CC227: push    ecx; lpAddend
0x7CC228: call    dword ptr ds:0A2807Ch
0x7CC22E: test    eax, eax
0x7CC230: jnz     short loc_7CC240
0x7CC232: test    edi, edi
0x7CC234: jz      short loc_7CC240
0x7CC236: mov     edx, [edi]
0x7CC238: mov     eax, [edx]
0x7CC23A: push    1
0x7CC23C: mov     ecx, edi
0x7CC23E: call    eax
0x7CC240: mov     [ebp+4], esi
0x7CC243: add     esi, 4
0x7CC246: push    esi; lpAddend
0x7CC247: call    dword ptr ds:0A28078h
0x7CC24D: mov     ecx, [ebp+4]
0x7CC250: mov     edx, [ecx]
0x7CC252: mov     eax, [ebp+0]
0x7CC255: mov     edx, [edx+54h]
0x7CC258: push    eax
0x7CC259: call    edx
0x7CC25B: mov     eax, ebp
0x7CC25D: mov     ecx, dword ptr [esp+28h+var_C]
0x7CC261: mov     large fs:0, ecx
0x7CC268: pop     ecx
0x7CC269: pop     edi
0x7CC26A: pop     esi
0x7CC26B: pop     ebp
0x7CC26C: pop     ebx
0x7CC26D: add     esp, 14h
0x7CC270: retn
