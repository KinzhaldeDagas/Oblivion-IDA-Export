0x801C90: push    0FFFFFFFFh
0x801C92: push    offset CreatePixelShader_SEH
0x801C97: mov     eax, large fs:0
0x801C9D: push    eax
0x801C9E: sub     esp, 0D8Ch
0x801CA4: mov     eax, ds:0B30AACh
0x801CA9: xor     eax, esp
0x801CAB: mov     [esp+0D98h+var_10], eax
0x801CB2: push    ebx
0x801CB3: push    ebp
0x801CB4: push    esi
0x801CB5: push    edi
0x801CB6: mov     eax, ds:0B30AACh
0x801CBB: xor     eax, esp
0x801CBD: push    eax; File
0x801CBE: lea     eax, [esp+0DACh+var_C]
0x801CC5: mov     large fs:0, eax
0x801CCB: mov     ebx, [esp+0DACh+arg_C]
0x801CD2: mov     ebp, [esp+0DACh+lpFileName]
0x801CD9: mov     eax, [esp+0DACh+arg_4]
0x801CE0: mov     edi, [esp+0DACh+Str1]
0x801CE7: push    offset off_A8ABBC
0x801CEC: xor     esi, esi
0x801CEE: push    ebx
0x801CEF: lea     ecx, [esp+0DB4h+Filename]
0x801CF3: push    ebp
0x801CF4: push    ecx
0x801CF5: mov     [esp+0DBCh+var_D6C], ebp
0x801CF9: mov     [esp+0DBCh+var_D74], eax
0x801CFD: mov     [esp+0DBCh+var_D68], ebx
0x801D01: mov     [esp+0DBCh+Size], esi
0x801D05: mov     [esp+0DBCh+var_D90], esi
0x801D09: mov     [esp+0DBCh+var_D60], esi
0x801D0D: mov     [esp+0DBCh+var_D54], esi
0x801D11: mov     [esp+0DBCh+var_D70], esi
0x801D15: call    sub_801210
0x801D1A: mov     ecx, ds:0B430B8h
0x801D20: add     esp, 10h
0x801D23: cmp     ecx, esi
0x801D25: mov     [esp+0DACh+var_D95], 1
0x801D2A: jz      short loc_801D34
0x801D2C: push    ebx
0x801D2D: call    NiTMap_GetAtIndex
0x801D32: mov     esi, eax
0x801D34: cmp     byte ptr ds:0B2DD4Ch, 0
0x801D3B: jz      loc_801E32
0x801D41: test    esi, esi
0x801D43: jnz     loc_801E32
0x801D49: xor     eax, eax
0x801D4B: push    20h ; ' '; int
0x801D4D: lea     edx, [esp+0DB0h+var_D80]
0x801D51: push    edx; int
0x801D52: push    ebp; lpFileName
0x801D53: mov     dword ptr [esp+0DB8h+var_D80], eax
0x801D57: mov     dword ptr [esp+0DB8h+var_D80+4], eax
0x801D5B: mov     dword ptr [esp+0DB8h+var_D88], eax
0x801D5F: mov     dword ptr [esp+0DB8h+var_D88+4], eax
0x801D63: call    ArciveManager__GetTimeForFileOrContainer
0x801D68: mov     [esp+0DB8h+var_D96], al
0x801D6C: push    20h ; ' '; int
0x801D6E: lea     eax, [esp+0DBCh+var_D88]
0x801D72: push    eax; int
0x801D73: lea     ecx, [esp+0DC0h+Filename]
0x801D77: push    ecx; lpFileName
0x801D78: call    ArciveManager__GetTimeForFileOrContainer
0x801D7D: mov     bl, al
0x801D7F: add     esp, 18h
0x801D82: test    bl, bl
0x801D84: jnz     short loc_801DD8
0x801D86: cmp     ds:0B430AEh, al
0x801D8C: jz      short loc_801DD8
0x801D8E: xor     edx, edx
0x801D90: cmp     edx, offset CacheOrNullString
0x801D96: jz      short loc_801DA0
0x801D98: cmp     ds:0B42D80h, dl
0x801D9E: jnz     short loc_801DC2
0x801DA0: push    offset aCache; "cache:\\"
0x801DA5: call    strcpy_toB42D80
0x801DAA: mov     eax, [esp+0DB0h+var_D68]
0x801DAE: push    offset off_A8ABBC
0x801DB3: push    eax
0x801DB4: lea     ecx, [esp+0DB8h+Filename]
0x801DB8: push    ebp
0x801DB9: push    ecx
0x801DBA: call    sub_801210
0x801DBF: add     esp, 14h
0x801DC2: push    20h ; ' '; int
0x801DC4: lea     edx, [esp+0DB0h+var_D88]
0x801DC8: push    edx; int
0x801DC9: lea     eax, [esp+0DB4h+Filename]
0x801DCD: push    eax; lpFileName
0x801DCE: call    ArciveManager__GetTimeForFileOrContainer
0x801DD3: add     esp, 0Ch
0x801DD6: mov     bl, al
0x801DD8: cmp     [esp+0DACh+var_D96], 0
0x801DDD: jnz     short loc_801E0D
0x801DDF: push    ebp
0x801DE0: lea     ecx, [esp+0DB0h+var_C40]
0x801DE7: push    offset aShaderErrorErr; "SHADER ERROR : error opening HLSL sourc"...
0x801DEC: push    ecx
0x801DED: call    __sprintf
0x801DF2: mov     eax, ds:0B42E8Ch
0x801DF7: add     esp, 0Ch
0x801DFA: test    eax, eax
0x801DFC: jz      short loc_801E0D
0x801DFE: lea     edx, [esp+0DACh+var_C40]
0x801E05: push    0; _DWORD
0x801E07: push    edx; _DWORD
0x801E08: call    eax ; dword_B42E8C
0x801E0A: add     esp, 8
0x801E0D: test    bl, bl
0x801E0F: jnz     short loc_801E15
0x801E11: mov     [esp+0DACh+var_D95], bl
0x801E15: mov     eax, dword ptr [esp+0DACh+var_D80+4]
0x801E19: mov     ecx, dword ptr [esp+0DACh+var_D88+4]
0x801E1D: cmp     eax, ecx
0x801E1F: ja      short loc_801E2D
0x801E21: jnz     short loc_801E32
0x801E23: mov     eax, dword ptr [esp+0DACh+var_D80]
0x801E27: cmp     eax, dword ptr [esp+0DACh+var_D88]
0x801E2B: jbe     short loc_801E32
0x801E2D: mov     [esp+0DACh+var_D95], 0
0x801E32: xor     edx, edx
0x801E34: cmp     esi, edx
0x801E36: mov     [esp+0DACh+var_D96], 0
0x801E3B: mov     [esp+0DACh+Src], edx
0x801E3F: jz      short loc_801E50
0x801E41: add     esi, 104h
0x801E47: mov     [esp+0DACh+Src], esi
0x801E4B: jmp     loc_80231F
0x801E50: cmp     [esp+0DACh+var_D95], 0
0x801E55: jnz     loc_8022C5
0x801E5B: cmp     byte ptr ds:0B43070h, 0
0x801E62: mov     [esp+0DACh+var_D64], edx
0x801E66: jz      short loc_801E8D
0x801E68: mov     eax, [esp+0DACh+var_D74]
0x801E6C: cmp     [eax], edx
0x801E6E: jz      short loc_801E7C
0x801E70: lea     ecx, [eax+8]
0x801E73: mov     eax, ecx
0x801E75: add     ecx, 8
0x801E78: cmp     [eax], edx
0x801E7A: jnz     short loc_801E73
0x801E7C: mov     dword ptr [eax], offset off_A6DFC0
0x801E82: mov     dword ptr [eax+4], offset EmptyString
0x801E89: mov     [esp+0DACh+var_D64], eax
0x801E8D: push    4; MaxCount
0x801E8F: push    offset aPs_2_0; "ps_2_0"
0x801E94: push    edi; Str1
0x801E95: mov     [esp+0DB8h+var_D78], edi
0x801E99: call    _strncmp
0x801E9E: add     esp, 0Ch
0x801EA1: test    eax, eax
0x801EA3: jnz     short loc_801EBB
0x801EA5: push    1
0x801EA7: call    sub_7B4780
0x801EAC: add     esp, 4
0x801EAF: test    eax, eax
0x801EB1: mov     [esp+0DACh+var_D78], eax
0x801EB5: jnz     short loc_801EBB
0x801EB7: mov     [esp+0DACh+var_D78], edi
0x801EBB: push    20h ; ' '
0x801EBD: push    2800h
0x801EC2: push    0
0x801EC4: mov     edi, ebp
0x801EC6: push    edi
0x801EC7: call    sub_431130
0x801ECC: mov     ebp, eax
0x801ECE: add     esp, 10h
0x801ED1: test    ebp, ebp
0x801ED3: jz      loc_802293
0x801ED9: cmp     byte ptr [ebp+24h], 0
0x801EDD: mov     ecx, ebp
0x801EDF: jz      loc_80228A
0x801EE5: mov     edx, [ebp+0]
0x801EE8: mov     eax, [edx+1Ch]
0x801EEB: call    eax
0x801EED: mov     esi, eax
0x801EEF: push    esi; Size
0x801EF0: mov     [esp+0DB0h+var_D50], esi
0x801EF4: call    FormHeapAlloc
0x801EF9: add     esp, 4
0x801EFC: push    esi
0x801EFD: push    eax
0x801EFE: mov     ecx, ebp
0x801F00: mov     dword ptr [esp+0DB4h+var_D80], eax
0x801F04: call    ReadFile??
0x801F09: mov     ebx, [esp+0DACh+var_D74]
0x801F0D: add     ebx, 4
0x801F10: mov     [esp+0DACh+var_D4C], offset ??_7ShaderIncludes@@6B@; const ShaderIncludes::`vftable'
0x801F18: mov     dword ptr [esp+0DACh+var_D48], edi
0x801F1C: mov     [esp+0DACh+var_B3C], 0
0x801F24: mov     [esp+0DACh+var_D5C], 0
0x801F2C: mov     dword ptr [esp+0DACh+var_D88], ebx
0x801F30: mov     eax, [ebx-4]
0x801F33: test    eax, eax
0x801F35: jz      loc_802014
0x801F3B: mov     edx, eax
0x801F3D: lea     ecx, [ecx+0]
0x801F40: mov     cl, [eax]
0x801F42: add     eax, 1
0x801F45: test    cl, cl
0x801F47: jnz     short loc_801F40
0x801F49: lea     edi, [esp+0DACh+var_B3C]
0x801F50: sub     eax, edx
0x801F52: add     edi, 0FFFFFFFFh
0x801F55: mov     cl, [edi+1]
0x801F58: add     edi, 1
0x801F5B: test    cl, cl
0x801F5D: jnz     short loc_801F55
0x801F5F: mov     ecx, eax
0x801F61: shr     ecx, 2
0x801F64: mov     esi, edx
0x801F66: rep movsd
0x801F68: mov     ecx, eax
0x801F6A: mov     eax, [ebx]
0x801F6C: and     ecx, 3
0x801F6F: test    eax, eax
0x801F71: rep movsb
0x801F73: jz      short loc_801FCF
0x801F75: cmp     byte ptr [eax], 0
0x801F78: jz      short loc_801FCF
0x801F7A: lea     edi, [esp+0DACh+var_B3C]
0x801F81: add     edi, 0FFFFFFFFh
0x801F84: mov     cl, [edi+1]
0x801F87: add     edi, 1
0x801F8A: test    cl, cl
0x801F8C: jnz     short loc_801F84
0x801F8E: mov     cx, ds:0A61F44h
0x801F95: mov     [edi], cx
0x801F98: mov     ecx, eax
0x801F9A: lea     ebx, [ebx+0]
0x801FA0: mov     dl, [eax]
0x801FA2: add     eax, 1
0x801FA5: test    dl, dl
0x801FA7: jnz     short loc_801FA0
0x801FA9: lea     edi, [esp+0DACh+var_B3C]
0x801FB0: sub     eax, ecx
0x801FB2: mov     esi, ecx
0x801FB4: add     edi, 0FFFFFFFFh
0x801FB7: mov     cl, [edi+1]
0x801FBA: add     edi, 1
0x801FBD: test    cl, cl
0x801FBF: jnz     short loc_801FB7
0x801FC1: mov     ecx, eax
0x801FC3: shr     ecx, 2
0x801FC6: rep movsd
0x801FC8: mov     ecx, eax
0x801FCA: and     ecx, 3
0x801FCD: rep movsb
0x801FCF: lea     eax, [esp+0DACh+var_B3C]
0x801FD6: add     eax, 0FFFFFFFFh
0x801FD9: lea     esp, [esp+0]
0x801FE0: mov     cl, [eax+1]
0x801FE3: add     eax, 1
0x801FE6: test    cl, cl
0x801FE8: jnz     short loc_801FE0
0x801FEA: mov     dx, ds:0A36130h
0x801FF1: mov     cl, ds:0A36132h
0x801FF7: mov     [eax], dx
0x801FFA: mov     [eax+2], cl
0x801FFD: mov     eax, [esp+0DACh+var_D5C]
0x802001: add     eax, 1
0x802004: add     ebx, 8
0x802007: cmp     eax, 8
0x80200A: mov     [esp+0DACh+var_D5C], eax
0x80200E: jl      loc_801F30
0x802014: mov     esi, [esp+0DACh+var_D78]
0x802018: mov     eax, [esp+0DACh+var_D6C]
0x80201C: lea     edx, [esp+0DACh+var_B3C]
0x802023: push    edx
0x802024: push    esi
0x802025: push    eax
0x802026: lea     ecx, [esp+0DB8h+var_524]
0x80202D: push    offset aCompilingSSS; "compiling : %s\n %s %s"
0x802032: push    ecx
0x802033: call    __sprintf
0x802038: mov     eax, ds:0B42E8Ch
0x80203D: add     esp, 14h
0x802040: test    eax, eax
0x802042: jz      short loc_802053
0x802044: lea     edx, [esp+0DACh+var_524]
0x80204B: push    0; _DWORD
0x80204D: push    edx; _DWORD
0x80204E: call    eax ; dword_B42E8C
0x802050: add     esp, 8
0x802053: lea     eax, [esp+0DACh+var_D54]
0x802057: push    eax
0x802058: lea     ecx, [esp+0DB0h+var_D90]
0x80205C: push    ecx
0x80205D: mov     ecx, [esp+0DB4h+var_D74]
0x802061: lea     edx, [esp+0DB4h+Size]
0x802065: push    edx
0x802066: mov     edx, [esp+0DB8h+var_D50]
0x80206A: push    0
0x80206C: push    esi
0x80206D: mov     esi, dword ptr [esp+0DC0h+var_D80]
0x802071: push    offset aMain; "main"
0x802076: lea     eax, [esp+0DC4h+var_D4C]
0x80207A: push    eax
0x80207B: push    ecx
0x80207C: push    edx
0x80207D: push    esi
0x80207E: call    D3DXCompileShader_0
0x802083: mov     dword ptr [esp+0DACh+var_D80], eax
0x802087: mov     eax, [ebp+0]
0x80208A: mov     edx, [eax]
0x80208C: push    1
0x80208E: mov     ecx, ebp
0x802090: call    edx
0x802092: push    esi
0x802093: call    FormHeapFree
0x802098: add     esp, 4
0x80209B: cmp     [esp+0DACh+var_D90], 0
0x8020A0: jz      loc_8021F4
0x8020A6: cmp     [esp+0DACh+Size], 0
0x8020AB: jnz     loc_8021F4
0x8020B1: mov     ebp, dword ptr [esp+0DACh+var_D88]
0x8020B5: mov     [esp+0DACh+var_B3C], 0
0x8020BD: mov     ebx, 8
0x8020C2: mov     eax, [ebp-4]
0x8020C5: test    eax, eax
0x8020C7: jz      loc_80218D
0x8020CD: mov     edx, eax
0x8020CF: nop
0x8020D0: mov     cl, [eax]
0x8020D2: add     eax, 1
0x8020D5: test    cl, cl
0x8020D7: jnz     short loc_8020D0
0x8020D9: lea     edi, [esp+0DACh+var_B3C]
0x8020E0: sub     eax, edx
0x8020E2: add     edi, 0FFFFFFFFh
0x8020E5: mov     cl, [edi+1]
0x8020E8: add     edi, 1
0x8020EB: test    cl, cl
0x8020ED: jnz     short loc_8020E5
0x8020EF: mov     ecx, eax
0x8020F1: shr     ecx, 2
0x8020F4: mov     esi, edx
0x8020F6: rep movsd
0x8020F8: mov     ecx, eax
0x8020FA: mov     eax, [ebp+0]
0x8020FD: and     ecx, 3
0x802100: test    eax, eax
0x802102: rep movsb
0x802104: jz      short loc_80215F
0x802106: cmp     byte ptr [eax], 0
0x802109: jz      short loc_80215F
0x80210B: lea     edi, [esp+0DACh+var_B3C]
0x802112: add     edi, 0FFFFFFFFh
0x802115: mov     cl, [edi+1]
0x802118: add     edi, 1
0x80211B: test    cl, cl
0x80211D: jnz     short loc_802115
0x80211F: mov     cx, ds:0A61F44h
0x802126: mov     [edi], cx
0x802129: mov     ecx, eax
0x80212B: jmp     short loc_802130
0x80212D: align 10h
0x802130: mov     dl, [eax]
0x802132: add     eax, 1
0x802135: test    dl, dl
0x802137: jnz     short loc_802130
0x802139: lea     edi, [esp+0DACh+var_B3C]
0x802140: sub     eax, ecx
0x802142: mov     esi, ecx
0x802144: add     edi, 0FFFFFFFFh
0x802147: mov     cl, [edi+1]
0x80214A: add     edi, 1
0x80214D: test    cl, cl
0x80214F: jnz     short loc_802147
0x802151: mov     ecx, eax
0x802153: shr     ecx, 2
0x802156: rep movsd
0x802158: mov     ecx, eax
0x80215A: and     ecx, 3
0x80215D: rep movsb
0x80215F: lea     eax, [esp+0DACh+var_B3C]
0x802166: add     eax, 0FFFFFFFFh
0x802169: lea     esp, [esp+0]
0x802170: mov     cl, [eax+1]
0x802173: add     eax, 1
0x802176: test    cl, cl
0x802178: jnz     short loc_802170
0x80217A: mov     dx, ds:0A36130h
0x802181: mov     cl, ds:0A36132h
0x802187: mov     [eax], dx
0x80218A: mov     [eax+2], cl
0x80218D: add     ebp, 8
0x802190: sub     ebx, 1
0x802193: jnz     loc_8020C2
0x802199: mov     eax, [esp+0DACh+var_D90]
0x80219D: mov     edx, [eax]
0x80219F: push    eax
0x8021A0: mov     eax, [edx+0Ch]
0x8021A3: call    eax
0x8021A5: mov     edx, [esp+0DACh+var_D6C]
0x8021A9: push    eax
0x8021AA: lea     ecx, [esp+0DB0h+var_B3C]
0x8021B1: push    ecx
0x8021B2: push    edx
0x8021B3: lea     eax, [esp+0DB8h+var_524]
0x8021BA: push    offset aSSS_4; "%s\n %s\n %s"
0x8021BF: push    eax
0x8021C0: call    __sprintf
0x8021C5: mov     eax, ds:0B42E8Ch
0x8021CA: add     esp, 14h
0x8021CD: test    eax, eax
0x8021CF: jz      short loc_8021E0
0x8021D1: lea     ecx, [esp+0DACh+var_524]
0x8021D8: push    0; _DWORD
0x8021DA: push    ecx; _DWORD
0x8021DB: call    eax ; dword_B42E8C
0x8021DD: add     esp, 8
0x8021E0: mov     eax, [esp+0DACh+var_D90]
0x8021E4: mov     edx, [eax]
0x8021E6: push    eax
0x8021E7: mov     eax, [edx+8]
0x8021EA: call    eax
0x8021EC: mov     [esp+0DACh+var_D90], 0
0x8021F4: cmp     dword ptr [esp+0DACh+var_D80], 0
0x8021F9: jnz     loc_802434
0x8021FF: cmp     [esp+0DACh+Size], 0
0x802204: jz      short loc_80226C
0x802206: lea     ecx, [esp+0DACh+Filename]
0x80220A: push    offset aWb; "wb"
0x80220F: push    ecx; Filename
0x802210: call    _fopen
0x802215: mov     esi, eax
0x802217: mov     eax, [esp+0DB4h+Size]
0x80221B: mov     edx, [eax]
0x80221D: add     esp, 8
0x802220: push    eax
0x802221: mov     eax, [edx+10h]
0x802224: call    eax
0x802226: push    esi
0x802227: push    1; Count
0x802229: push    eax; Count
0x80222A: mov     [esp+0DB8h+var_D70], eax
0x80222E: mov     eax, [esp+0DB8h+Size]
0x802232: mov     ecx, [eax]
0x802234: mov     edx, [ecx+0Ch]
0x802237: push    eax; Size
0x802238: call    edx
0x80223A: push    eax; Str
0x80223B: call    _fwrite
0x802240: push    esi; File
0x802241: call    _fflush
0x802246: push    esi; File
0x802247: call    _fclose
0x80224C: lea     eax, [esp+0DC8h+var_D48]
0x802253: push    eax; Str1
0x802254: call    sub_42E800
0x802259: mov     eax, [esp+34h]
0x80225D: mov     ecx, [eax]
0x80225F: mov     edx, [ecx+0Ch]
0x802262: add     esp, 1Ch
0x802265: push    eax
0x802266: call    edx
0x802268: mov     [esp+0DACh+Src], eax
0x80226C: mov     eax, [esp+0DACh+var_D64]
0x802270: test    eax, eax
0x802272: jz      loc_80231F
0x802278: mov     dword ptr [eax], 0
0x80227E: mov     dword ptr [eax+4], 0
0x802285: jmp     loc_80231F
0x80228A: mov     eax, [ebp+0]
0x80228D: mov     edx, [eax]
0x80228F: push    1
0x802291: call    edx
0x802293: push    edi
0x802294: lea     eax, [esp+0DB0h+var_C40]
0x80229B: push    offset aShaderErrorE_0; "SHADER ERROR : error opening hlsl file "...
0x8022A0: push    eax
0x8022A1: call    __sprintf
0x8022A6: mov     eax, ds:0B42E8Ch
0x8022AB: add     esp, 0Ch
0x8022AE: test    eax, eax
0x8022B0: jz      loc_802434
0x8022B6: push    0
0x8022B8: lea     ecx, [esp+0DB0h+var_C40]
0x8022BF: push    ecx
0x8022C0: jmp     loc_80242F
0x8022C5: push    20h ; ' '
0x8022C7: push    2800h
0x8022CC: lea     edx, [esp+0DB4h+Filename]
0x8022D0: push    0
0x8022D2: push    edx
0x8022D3: call    sub_431130
0x8022D8: mov     esi, eax
0x8022DA: add     esp, 10h
0x8022DD: test    esi, esi
0x8022DF: jz      loc_802402
0x8022E5: cmp     byte ptr [esi+24h], 0
0x8022E9: jz      short loc_802315
0x8022EB: mov     eax, [esi]
0x8022ED: mov     edx, [eax+1Ch]
0x8022F0: mov     ecx, esi
0x8022F2: call    edx
0x8022F4: mov     edi, eax
0x8022F6: push    edi; Size
0x8022F7: mov     [esp+0DB0h+var_D70], edi
0x8022FB: call    FormHeapAlloc
0x802300: add     esp, 4
0x802303: push    edi
0x802304: push    eax
0x802305: mov     ecx, esi
0x802307: mov     [esp+0DB4h+Src], eax
0x80230B: mov     [esp+0DB4h+var_D96], 1
0x802310: call    ReadFile??
0x802315: mov     eax, [esi]
0x802317: mov     edx, [eax]
0x802319: push    1
0x80231B: mov     ecx, esi
0x80231D: call    edx
0x80231F: mov     esi, [esp+0DACh+Src]
0x802323: test    esi, esi
0x802325: jz      loc_8023EC
0x80232B: mov     ecx, ds:0B430B4h
0x802331: test    ecx, ecx
0x802333: jz      short loc_80234A
0x802335: mov     eax, [esp+0DACh+var_D70]
0x802339: mov     edx, [esp+0DACh+var_D68]
0x80233D: push    eax; Size
0x80233E: push    esi; Src
0x80233F: push    edx; int
0x802340: call    sub_7DAF50
0x802345: jmp     loc_8023EC
0x80234A: mov     eax, ds:0B43104h
0x80234F: mov     eax, [eax+280h]
0x802355: mov     ecx, [eax]
0x802357: lea     edx, [esp+0DACh+var_D58]
0x80235B: push    edx
0x80235C: push    esi
0x80235D: push    eax
0x80235E: mov     eax, [ecx+1A8h]
0x802364: call    eax
0x802366: test    eax, eax
0x802368: jz      short loc_8023A0
0x80236A: lea     ecx, [esp+0DACh+Filename]
0x80236E: push    ecx
0x80236F: lea     edx, [esp+0DB0h+var_628]
0x802376: push    offset aShaderErrorF_0; "SHADER ERROR : failed to create pixel s"...
0x80237B: push    edx
0x80237C: call    __sprintf
0x802381: mov     eax, ds:0B42E8Ch
0x802386: add     esp, 0Ch
0x802389: test    eax, eax
0x80238B: jz      loc_802434
0x802391: push    0
0x802393: lea     ecx, [esp+0DB0h+var_628]
0x80239A: push    ecx
0x80239B: jmp     loc_80242F
0x8023A0: push    2Ch ; ','; Size
0x8023A2: call    FormHeapAlloc
0x8023A7: add     esp, 4
0x8023AA: mov     dword ptr [esp+0DACh+var_D88], eax
0x8023AE: test    eax, eax
0x8023B0: mov     [esp+0DACh+var_4], 0
0x8023BB: jz      short loc_8023CD
0x8023BD: mov     edx, ds:0B43104h
0x8023C3: push    edx
0x8023C4: mov     ecx, eax
0x8023C6: call    sub_780B90
0x8023CB: jmp     short loc_8023CF
0x8023CD: xor     eax, eax
0x8023CF: mov     ecx, [esp+0DACh+var_D58]
0x8023D3: mov     edx, [eax]
0x8023D5: mov     edx, [edx+3Ch]
0x8023D8: push    ecx
0x8023D9: mov     ecx, eax
0x8023DB: mov     [esp+0DB0h+var_4], 0FFFFFFFFh
0x8023E6: mov     [esp+0DB0h+var_D60], eax
0x8023EA: call    edx
0x8023EC: cmp     [esp+0DACh+var_D96], 0
0x8023F1: jz      short loc_8023FC
0x8023F3: push    esi
0x8023F4: call    FormHeapFree
0x8023F9: add     esp, 4
0x8023FC: mov     eax, [esp+0DACh+var_D60]
0x802400: jmp     short loc_802436
0x802402: lea     eax, [esp+0DACh+Filename]
0x802406: push    eax
0x802407: lea     ecx, [esp+0DB0h+var_C40]
0x80240E: push    offset aShaderErrorE_1; "SHADER ERROR : error opening cache file"...
0x802413: push    ecx
0x802414: call    __sprintf
0x802419: mov     eax, ds:0B42E8Ch
0x80241E: add     esp, 0Ch
0x802421: test    eax, eax
0x802423: jz      short loc_802434
0x802425: push    0; _DWORD
0x802427: lea     edx, [esp+0DB0h+var_C40]
0x80242E: push    edx; _DWORD
0x80242F: call    eax ; dword_B42E8C
0x802431: add     esp, 8
0x802434: xor     eax, eax
0x802436: mov     ecx, [esp+0DACh+var_C]
0x80243D: mov     large fs:0, ecx
0x802444: pop     ecx
0x802445: pop     edi
0x802446: pop     esi
0x802447: pop     ebp
0x802448: pop     ebx
0x802449: mov     ecx, [esp+0D98h+var_10]
0x802450: xor     ecx, esp
0x802452: call    @__security_check_cookie@4; __security_check_cookie(x)
0x802457: add     esp, 0D98h
0x80245D: retn    18h
