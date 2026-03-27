0x539E00: push    ebp
0x539E01: mov     ebp, esp
0x539E03: and     esp, 0FFFFFFF0h
0x539E06: push    0FFFFFFFFh
0x539E08: push    offset SEH_539E00
0x539E0D: mov     eax, large fs:0
0x539E13: push    eax
0x539E14: sub     esp, 1BCh
0x539E1A: mov     eax, ds:0B30AACh
0x539E1F: xor     eax, esp
0x539E21: mov     [esp+1C8h+var_14], eax
0x539E28: push    esi
0x539E29: push    edi
0x539E2A: mov     eax, ds:0B30AACh
0x539E2F: xor     eax, esp
0x539E31: push    eax
0x539E32: lea     eax, [esp+1D4h+var_C]
0x539E39: mov     large fs:0, eax
0x539E3F: fld1
0x539E41: mov     eax, [ebp+arg_C]
0x539E44: mov     esi, ecx
0x539E46: fstp    dword ptr [esi+14h]
0x539E49: fld     dword ptr ds:0A56670h
0x539E4F: or      word ptr [esi+0Ch], 41h
0x539E54: fcom    [ebp+arg_0]
0x539E57: mov     [esp+1D4h+var_1AC], eax
0x539E5B: fnstsw  ax
0x539E5D: test    ah, 5
0x539E60: jp      short loc_539E67
0x539E62: fstp    [ebp+arg_0]
0x539E65: jmp     short loc_539E69
0x539E67: fstp    st
0x539E69: fldz
0x539E6B: push    14h; Size
0x539E6D: fst     [esp+1D8h+var_1BC]
0x539E71: fld     [ebp+arg_0]
0x539E74: mov     ecx, [esp+1D8h+var_1BC]
0x539E78: fld     [ebp+arg_4]
0x539E7B: mov     [esp+1D8h+var_19C], ecx
0x539E7F: fld     st
0x539E81: fsubp   st(2), st
0x539E83: fxch    st(1)
0x539E85: fstp    [esp+1D8h+var_1B8]
0x539E89: mov     edx, [esp+1D8h+var_1B8]
0x539E8D: fxch    st(1)
0x539E8F: mov     [esp+1D8h+var_198], edx
0x539E93: fst     [esp+1D8h+var_1B4]
0x539E97: mov     eax, [esp+1D8h+var_1B4]
0x539E9B: fst     [esp+1D8h+var_1BC]
0x539E9F: mov     ecx, [esp+1D8h+var_1BC]
0x539EA3: fstp    [esp+1D8h+var_1B4]
0x539EA7: mov     [esp+1D8h+var_194], eax
0x539EAB: mov     eax, [esp+1D8h+var_1B4]
0x539EAF: fstp    [esp+1D8h+var_1B8]
0x539EB3: mov     edx, [esp+1D8h+var_1B8]
0x539EB7: mov     [esp+1D8h+var_1A8], ecx
0x539EBB: mov     [esp+1D8h+var_1A4], edx
0x539EBF: mov     [esp+1D8h+var_1A0], eax
0x539EC3: call    FormHeapAlloc
0x539EC8: add     esp, 4
0x539ECB: mov     [esp+1D4h+var_1B0], eax
0x539ECF: test    eax, eax
0x539ED1: mov     [esp+1D4h+var_4], 0
0x539EDC: jz      short loc_539EFA
0x539EDE: fld     [ebp+arg_4]
0x539EE1: push    ecx
0x539EE2: fstp    [esp+1D8h+var_1D8]; float
0x539EE5: lea     ecx, [esp+1D8h+var_1A8]
0x539EE9: push    ecx; int
0x539EEA: lea     edx, [esp+1DCh+var_19C]
0x539EEE: push    edx; int
0x539EEF: mov     ecx, eax
0x539EF1: call    sub_8B6A40
0x539EF6: mov     edi, eax
0x539EF8: jmp     short loc_539EFC
0x539EFA: xor     edi, edi
0x539EFC: lea     ecx, [esp+1D4h+var_100]
0x539F03: mov     [esp+1D4h+var_4], 0FFFFFFFFh
0x539F0E: call    sub_8A5790
0x539F13: test    edi, edi
0x539F15: mov     [esp+1D4h+var_4], 1
0x539F20: mov     [esp+1D4h+var_100], 0
0x539F2B: mov     [esp+1D4h+var_E0], 0
0x539F36: jz      short loc_539F3D
0x539F38: mov     eax, [edi+8]
0x539F3B: jmp     short loc_539F3F
0x539F3D: xor     eax, eax
0x539F3F: test    edi, edi
0x539F41: fld     dword ptr ds:0A379B4h
0x539F47: fst     [esp+1D4h+var_50]
0x539F4E: xorps   xmm0, xmm0
0x539F51: fst     [esp+1D4h+var_48]
0x539F58: movaps  [esp+1D4h+var_140], xmm0
0x539F60: fldz
0x539F62: movaps  [esp+1D4h+var_130], xmm0
0x539F6A: fst     [esp+1D4h+var_190]
0x539F6E: movaps  [esp+1D4h+var_120], xmm0
0x539F76: fstp    [esp+1D4h+var_18C]
0x539F7A: mov     [esp+1D4h+var_FC], eax
0x539F81: fld1
0x539F83: mov     [esp+1D4h+var_DC], eax
0x539F8A: fst     dword ptr [esp+1D4h+var_140]
0x539F91: movaps  [esp+1D4h+var_180], xmm0
0x539F96: fst     dword ptr [esp+1D4h+var_130+4]
0x539F9D: movaps  [esp+1D4h+var_170], xmm0
0x539FA2: fstp    dword ptr [esp+1D4h+var_120+8]
0x539FA9: movaps  [esp+1D4h+var_160], xmm0
0x539FAE: movaps  [esp+1D4h+var_150], xmm0
0x539FB6: movaps  [esp+1D4h+var_110], xmm0
0x539FBE: jz      short loc_539FC5
0x539FC0: mov     edi, [edi+8]
0x539FC3: jmp     short loc_539FC7
0x539FC5: xor     edi, edi
0x539FC7: lea     eax, [esp+1D4h+var_190]
0x539FCB: push    eax; int
0x539FCC: push    ecx
0x539FCD: fstp    [esp+1DCh+var_1DC]; float
0x539FD0: push    edi; int
0x539FD1: call    sub_8B6550
0x539FD6: movaps  xmm0, [esp+1E0h+var_180]
0x539FDB: movaps  [esp+1E0h+var_60], xmm0
0x539FE3: movaps  xmm0, [esp+1E0h+var_170]
0x539FE8: movaps  [esp+1E0h+var_90], xmm0
0x539FF0: movaps  xmm0, [esp+1E0h+var_160]
0x539FF8: movaps  [esp+1E0h+var_80], xmm0
0x53A000: movaps  xmm0, [esp+1E0h+var_150]
0x53A008: push    1Ch; Size
0x53A00A: movaps  [esp+1E4h+var_70], xmm0
0x53A012: mov     [esp+1E4h+var_30], 6
0x53A01A: call    FormHeapAlloc
0x53A01F: add     esp, 10h
0x53A022: mov     [esp+1D4h+var_1B0], eax
0x53A026: test    eax, eax
0x53A028: mov     byte ptr [esp+1D4h+var_4], 2
0x53A030: jz      short loc_53A043
0x53A032: lea     ecx, [esp+1D4h+var_100]
0x53A039: push    ecx
0x53A03A: mov     ecx, eax
0x53A03C: call    sub_533290
0x53A041: jmp     short loc_53A045
0x53A043: xor     eax, eax
0x53A045: push    eax
0x53A046: mov     ecx, esi
0x53A048: mov     byte ptr [esp+1D8h+var_4], 1
0x53A050: call    sub_897670
0x53A055: mov     edx, [esp+1D4h+var_1AC]
0x53A059: push    edx
0x53A05A: mov     ecx, esi
0x53A05C: call    sub_539B80
0x53A061: mov     ecx, esi
0x53A063: call    sub_452A60
0x53A068: mov     esi, eax
0x53A06A: test    esi, esi
0x53A06C: jz      short loc_53A0BA
0x53A06E: push    offset dword_BA7F3C
0x53A073: mov     ecx, esi
0x53A075: call    sub_700010
0x53A07A: test    eax, eax
0x53A07C: jnz     short loc_53A0AB
0x53A07E: push    64h ; 'd'; Size
0x53A080: call    FormHeapAlloc
0x53A085: add     esp, 4
0x53A088: mov     [esp+1D4h+var_1B0], eax
0x53A08C: test    eax, eax
0x53A08E: mov     byte ptr [esp+1D4h+var_4], 3
0x53A096: jz      short loc_53A0A1
0x53A098: mov     ecx, eax
0x53A09A: call    sub_8AA810
0x53A09F: jmp     short loc_53A0A3
0x53A0A1: xor     eax, eax
0x53A0A3: mov     byte ptr [esp+1D4h+var_4], 1
0x53A0AB: mov     edx, [eax]
0x53A0AD: or      word ptr [eax+8], 8
0x53A0B2: mov     ecx, eax
0x53A0B4: mov     eax, [edx+58h]
0x53A0B7: push    esi
0x53A0B8: call    eax
0x53A0BA: mov     eax, [esp+1D4h+var_EC]
0x53A0C1: test    eax, eax
0x53A0C3: mov     [esp+1D4h+var_4], 0FFFFFFFFh
0x53A0CE: js      short loc_53A10B
0x53A0D0: mov     ecx, ds:0BA9DE4h
0x53A0D6: mov     edx, large fs:2Ch
0x53A0DD: mov     ecx, [edx+ecx*4]
0x53A0E0: mov     ecx, [ecx+19Ch]
0x53A0E6: test    ecx, ecx
0x53A0E8: jnz     short loc_53A0F0
0x53A0EA: mov     ecx, ds:0BA7D9Ch
0x53A0F0: mov     edx, [esp+1D4h+var_F4]
0x53A0F7: and     eax, 3FFFFFFFh
0x53A0FC: add     eax, eax
0x53A0FE: add     eax, eax
0x53A100: push    14h
0x53A102: add     eax, eax
0x53A104: push    eax
0x53A105: push    edx
0x53A106: call    sub_8A75D0
0x53A10B: mov     ecx, dword ptr [esp+1D4h+var_C]
0x53A112: mov     large fs:0, ecx
0x53A119: pop     ecx
0x53A11A: pop     edi
0x53A11B: pop     esi
0x53A11C: mov     ecx, [esp+1C8h+var_14]
0x53A123: xor     ecx, esp
0x53A125: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53A12A: mov     esp, ebp
0x53A12C: pop     ebp
0x53A12D: retn    10h
