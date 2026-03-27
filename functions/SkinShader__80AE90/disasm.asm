0x80AE90: push    0FFFFFFFFh
0x80AE92: push    offset SEH_8122A0
0x80AE97: mov     eax, large fs:0
0x80AE9D: push    eax
0x80AE9E: push    ecx
0x80AE9F: push    ebx
0x80AEA0: push    esi
0x80AEA1: push    edi
0x80AEA2: mov     eax, ds:0B30AACh
0x80AEA7: xor     eax, esp
0x80AEA9: push    eax
0x80AEAA: lea     eax, [esp+20h+var_C]
0x80AEAE: mov     large fs:0, eax
0x80AEB4: push    8; Size
0x80AEB6: call    FormHeapAlloc
0x80AEBB: add     esp, 4
0x80AEBE: mov     [esp+20h+var_10], eax
0x80AEC2: xor     edi, edi
0x80AEC4: cmp     eax, edi
0x80AEC6: mov     [esp+20h+var_4], edi
0x80AECA: jz      short loc_80AED5
0x80AECC: mov     ecx, eax
0x80AECE: call    ShaderDefinition__Init
0x80AED3: mov     edi, eax
0x80AED5: mov     eax, ds:0B43104h
0x80AEDA: push    1; StreamCount
0x80AEDC: push    6; a2
0x80AEDE: push    eax; a1
0x80AEDF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x80AEE7: call    CreateDX9ShaderDeclaration
0x80AEEC: mov     esi, [edi]
0x80AEEE: mov     ebx, eax
0x80AEF0: add     esp, 0Ch
0x80AEF3: cmp     esi, ebx
0x80AEF5: jz      short loc_80AF27
0x80AEF7: test    esi, esi
0x80AEF9: jz      short loc_80AF17
0x80AEFB: lea     ecx, [esi+4]
0x80AEFE: push    ecx; lpAddend
0x80AEFF: call    dword ptr ds:0A2807Ch
0x80AF05: test    eax, eax
0x80AF07: jnz     short loc_80AF17
0x80AF09: test    esi, esi
0x80AF0B: jz      short loc_80AF17
0x80AF0D: mov     edx, [esi]
0x80AF0F: mov     eax, [edx]
0x80AF11: push    1
0x80AF13: mov     ecx, esi
0x80AF15: call    eax
0x80AF17: test    ebx, ebx
0x80AF19: mov     [edi], ebx
0x80AF1B: jz      short loc_80AF27
0x80AF1D: add     ebx, 4
0x80AF20: push    ebx; lpAddend
0x80AF21: call    dword ptr ds:0A28078h
0x80AF27: mov     ecx, ds:0B43104h
0x80AF2D: push    1; StreamCount
0x80AF2F: push    8; a2
0x80AF31: push    ecx; a1
0x80AF32: call    CreateDX9ShaderDeclaration
0x80AF37: mov     ecx, [edi]
0x80AF39: mov     edx, [ecx]
0x80AF3B: add     esp, 0Ch
0x80AF3E: push    0
0x80AF40: push    2
0x80AF42: push    0
0x80AF44: push    0
0x80AF46: mov     esi, eax
0x80AF48: mov     eax, [edx+50h]
0x80AF4B: push    0
0x80AF4D: call    eax
0x80AF4F: mov     ecx, [edi]
0x80AF51: mov     edx, [ecx]
0x80AF53: mov     eax, [edx+50h]
0x80AF56: push    0
0x80AF58: push    2
0x80AF5A: push    3
0x80AF5C: push    3
0x80AF5E: push    1
0x80AF60: call    eax
0x80AF62: mov     ecx, [edi]
0x80AF64: mov     edx, [ecx]
0x80AF66: mov     eax, [edx+50h]
0x80AF69: push    0
0x80AF6B: push    3
0x80AF6D: push    4
0x80AF6F: push    5
0x80AF71: push    2
0x80AF73: call    eax
0x80AF75: mov     ecx, [edi]
0x80AF77: mov     edx, [ecx]
0x80AF79: mov     eax, [edx+50h]
0x80AF7C: push    0
0x80AF7E: push    1
0x80AF80: push    5
0x80AF82: push    7
0x80AF84: push    3
0x80AF86: call    eax
0x80AF88: mov     ecx, [edi]
0x80AF8A: mov     edx, [ecx]
0x80AF8C: mov     eax, [edx+4Ch]
0x80AF8F: push    0
0x80AF91: push    0
0x80AF93: push    6
0x80AF95: push    2
0x80AF97: push    80000000h
0x80AF9C: push    0Eh
0x80AF9E: push    4
0x80AFA0: push    0
0x80AFA2: call    eax
0x80AFA4: mov     ecx, [edi]
0x80AFA6: mov     edx, [ecx]
0x80AFA8: mov     eax, [edx+4Ch]
0x80AFAB: push    0
0x80AFAD: push    0
0x80AFAF: push    7
0x80AFB1: push    2
0x80AFB3: push    80000001h
0x80AFB8: push    0Fh
0x80AFBA: push    5
0x80AFBC: push    0
0x80AFBE: call    eax
0x80AFC0: mov     edx, [esi]
0x80AFC2: mov     eax, [edx+50h]
0x80AFC5: push    0
0x80AFC7: push    2
0x80AFC9: push    0
0x80AFCB: push    0
0x80AFCD: push    0
0x80AFCF: mov     ecx, esi
0x80AFD1: call    eax
0x80AFD3: mov     edx, [esi]
0x80AFD5: push    0
0x80AFD7: push    3
0x80AFD9: push    1
0x80AFDB: push    1
0x80AFDD: mov     eax, [edx+50h]
0x80AFE0: push    1
0x80AFE2: mov     ecx, esi
0x80AFE4: call    eax
0x80AFE6: mov     edx, [esi]
0x80AFE8: mov     eax, [edx+50h]
0x80AFEB: push    0
0x80AFED: push    4
0x80AFEF: push    2
0x80AFF1: push    2
0x80AFF3: push    2
0x80AFF5: mov     ecx, esi
0x80AFF7: call    eax
0x80AFF9: mov     edx, [esi]
0x80AFFB: mov     eax, [edx+50h]
0x80AFFE: push    0
0x80B000: push    2
0x80B002: push    3
0x80B004: push    3
0x80B006: push    3
0x80B008: mov     ecx, esi
0x80B00A: call    eax
0x80B00C: mov     edx, [esi]
0x80B00E: mov     eax, [edx+50h]
0x80B011: push    0
0x80B013: push    3
0x80B015: push    4
0x80B017: push    5
0x80B019: push    4
0x80B01B: mov     ecx, esi
0x80B01D: call    eax
0x80B01F: mov     edx, [esi]
0x80B021: mov     eax, [edx+50h]
0x80B024: push    0
0x80B026: push    1
0x80B028: push    5
0x80B02A: push    7
0x80B02C: push    5
0x80B02E: mov     ecx, esi
0x80B030: call    eax
0x80B032: mov     edx, [esi]
0x80B034: mov     eax, [edx+4Ch]
0x80B037: push    0
0x80B039: push    0
0x80B03B: push    6
0x80B03D: push    2
0x80B03F: push    80000000h
0x80B044: push    0Eh
0x80B046: push    6
0x80B048: push    0
0x80B04A: mov     ecx, esi
0x80B04C: call    eax
0x80B04E: mov     edx, [esi]
0x80B050: mov     eax, [edx+4Ch]
0x80B053: push    0
0x80B055: push    0
0x80B057: push    7
0x80B059: push    2
0x80B05B: push    80000001h
0x80B060: push    0Fh
0x80B062: push    7
0x80B064: push    0
0x80B066: mov     ecx, esi
0x80B068: call    eax
0x80B06A: mov     ebx, [edi]
0x80B06C: test    ebx, ebx
0x80B06E: jz      short loc_80B098
0x80B070: mov     edx, [ebx]
0x80B072: mov     eax, [edx+4]
0x80B075: mov     ecx, ebx
0x80B077: call    eax
0x80B079: test    eax, eax
0x80B07B: jz      short loc_80B08E
0x80B07D: lea     ecx, [ecx+0]
0x80B080: cmp     eax, offset dword_B3F684
0x80B085: jz      short loc_80B0E7
0x80B087: mov     eax, [eax+4]
0x80B08A: test    eax, eax
0x80B08C: jnz     short loc_80B080
0x80B08E: xor     al, al
0x80B090: neg     al
0x80B092: sbb     eax, eax
0x80B094: and     eax, ebx
0x80B096: mov     ebx, eax
0x80B098: mov     edx, [esi]
0x80B09A: mov     eax, [edx+4]
0x80B09D: mov     ecx, esi
0x80B09F: call    eax
0x80B0A1: test    eax, eax
0x80B0A3: jz      short loc_80B0B3
0x80B0A5: cmp     eax, offset dword_B3F684
0x80B0AA: jz      short loc_80B0EB
0x80B0AC: mov     eax, [eax+4]
0x80B0AF: test    eax, eax
0x80B0B1: jnz     short loc_80B0A5
0x80B0B3: xor     al, al
0x80B0B5: neg     al
0x80B0B7: push    114h; Size
0x80B0BC: sbb     eax, eax
0x80B0BE: and     eax, esi
0x80B0C0: mov     esi, eax
0x80B0C2: call    FormHeapAlloc
0x80B0C7: add     esp, 4
0x80B0CA: mov     [esp+20h+var_10], eax
0x80B0CE: test    eax, eax
0x80B0D0: mov     [esp+20h+var_4], 1
0x80B0D8: jz      short loc_80B0EF
0x80B0DA: push    esi
0x80B0DB: push    ebx
0x80B0DC: mov     ecx, eax; this
0x80B0DE: call    ??0SkinShader@@QAE@XZ; SkinShader::SkinShader(void)
0x80B0E3: mov     esi, eax
0x80B0E5: jmp     short loc_80B0F1
0x80B0E7: mov     al, 1
0x80B0E9: jmp     short loc_80B090
0x80B0EB: mov     al, 1
0x80B0ED: jmp     short loc_80B0B5
0x80B0EF: xor     esi, esi
0x80B0F1: mov     edx, [esi]
0x80B0F3: mov     eax, [edx+84h]
0x80B0F9: mov     ecx, esi
0x80B0FB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x80B103: call    eax
0x80B105: mov     edx, [esi]
0x80B107: mov     eax, [edx+0A8h]
0x80B10D: mov     ecx, esi
0x80B10F: call    eax
0x80B111: mov     edx, [esi]
0x80B113: mov     eax, [edx+0B4h]
0x80B119: mov     ecx, esi
0x80B11B: call    eax
0x80B11D: mov     edx, [esi]
0x80B11F: mov     eax, [edx+0B8h]
0x80B125: mov     ecx, esi
0x80B127: call    eax
0x80B129: mov     edx, [esi]
0x80B12B: mov     eax, [edx+88h]
0x80B131: mov     ecx, esi
0x80B133: call    eax
0x80B135: mov     ebx, [edi+4]
0x80B138: cmp     ebx, esi
0x80B13A: jz      short loc_80B169
0x80B13C: test    ebx, ebx
0x80B13E: jz      short loc_80B15C
0x80B140: lea     ecx, [ebx+4]
0x80B143: push    ecx; lpAddend
0x80B144: call    dword ptr ds:0A2807Ch
0x80B14A: test    eax, eax
0x80B14C: jnz     short loc_80B15C
0x80B14E: test    ebx, ebx
0x80B150: jz      short loc_80B15C
0x80B152: mov     edx, [ebx]
0x80B154: mov     eax, [edx]
0x80B156: push    1
0x80B158: mov     ecx, ebx
0x80B15A: call    eax
0x80B15C: mov     [edi+4], esi
0x80B15F: add     esi, 4
0x80B162: push    esi; lpAddend
0x80B163: call    dword ptr ds:0A28078h
0x80B169: mov     ecx, [edi+4]
0x80B16C: mov     edx, [ecx]
0x80B16E: mov     eax, [edi]
0x80B170: mov     edx, [edx+54h]
0x80B173: push    eax
0x80B174: call    edx
0x80B176: mov     eax, edi
0x80B178: mov     ecx, dword ptr [esp+20h+var_C]
0x80B17C: mov     large fs:0, ecx
0x80B183: pop     ecx
0x80B184: pop     edi
0x80B185: pop     esi
0x80B186: pop     ebx
0x80B187: add     esp, 10h
0x80B18A: retn
