0x850F60: push    0FFFFFFFFh
0x850F62: push    offset SEH_850F60
0x850F67: mov     eax, large fs:0
0x850F6D: push    eax
0x850F6E: sub     esp, 24h
0x850F71: push    ebx
0x850F72: push    ebp
0x850F73: push    esi
0x850F74: push    edi
0x850F75: mov     eax, ds:0B30AACh
0x850F7A: xor     eax, esp
0x850F7C: push    eax
0x850F7D: lea     eax, [esp+44h+var_C]
0x850F81: mov     large fs:0, eax
0x850F87: mov     [esp+44h+var_20], ecx
0x850F8B: mov     eax, ds:0B45B58h
0x850F90: mov     ecx, ds:0B42EB8h
0x850F96: movzx   ecx, byte ptr [ecx+9]
0x850F9A: mov     edx, [eax+24h]
0x850F9D: mov     edi, [esp+44h+arg_C]
0x850FA1: mov     ebp, [edx]
0x850FA3: mov     [esp+44h+var_24], eax
0x850FA7: mov     eax, [edi]
0x850FA9: mov     edx, [eax+88h]
0x850FAF: mov     [esp+44h+var_28], ecx
0x850FB3: push    ecx
0x850FB4: mov     ecx, edi
0x850FB6: call    edx
0x850FB8: mov     esi, [ebp+4]
0x850FBB: mov     ebx, eax
0x850FBD: cmp     esi, ebx
0x850FBF: jz      short loc_850FF2
0x850FC1: test    esi, esi
0x850FC3: jz      short loc_850FE1
0x850FC5: lea     eax, [esi+4]
0x850FC8: push    eax; lpAddend
0x850FC9: call    dword ptr ds:0A2807Ch
0x850FCF: test    eax, eax
0x850FD1: jnz     short loc_850FE1
0x850FD3: test    esi, esi
0x850FD5: jz      short loc_850FE1
0x850FD7: mov     edx, [esi]
0x850FD9: mov     eax, [edx]
0x850FDB: push    1
0x850FDD: mov     ecx, esi
0x850FDF: call    eax
0x850FE1: test    ebx, ebx
0x850FE3: mov     [ebp+4], ebx
0x850FE6: jz      short loc_850FF2
0x850FE8: add     ebx, 4
0x850FEB: push    ebx; lpAddend
0x850FEC: call    dword ptr ds:0A28078h
0x850FF2: test    ebp, ebp
0x850FF4: jz      short loc_851010
0x850FF6: cmp     byte ptr ds:0B42CDDh, 0
0x850FFD: jz      short loc_851010
0x850FFF: mov     edx, [edi]
0x851001: mov     eax, [edx+78h]
0x851004: mov     ecx, edi
0x851006: call    eax
0x851008: push    eax
0x851009: mov     ecx, ebp
0x85100B: call    sub_7715E0
0x851010: mov     ecx, [esp+44h+var_24]
0x851014: mov     edx, [ecx+24h]
0x851017: mov     esi, [edx+4]
0x85101A: mov     eax, [edi]
0x85101C: mov     ebp, [esp+44h+var_28]
0x851020: mov     edx, [eax+8Ch]
0x851026: push    ebp
0x851027: mov     ecx, edi
0x851029: mov     [esp+48h+arg_C], esi
0x85102D: call    edx
0x85102F: test    eax, eax
0x851031: jz      short loc_851044
0x851033: mov     eax, [edi]
0x851035: mov     edx, [eax+8Ch]
0x85103B: push    ebp
0x85103C: mov     ecx, edi
0x85103E: call    edx
0x851040: mov     ebx, eax
0x851042: jmp     short loc_851059
0x851044: test    dword ptr [edi+1Ch], 80h
0x85104B: mov     ebx, ds:0B430F0h
0x851051: ja      short loc_851059
0x851053: mov     ebx, ds:0B430DCh
0x851059: mov     esi, [esi+4]
0x85105C: cmp     esi, ebx
0x85105E: jz      short loc_851097
0x851060: test    esi, esi
0x851062: jz      short loc_851080
0x851064: lea     eax, [esi+4]
0x851067: push    eax; lpAddend
0x851068: call    dword ptr ds:0A2807Ch
0x85106E: test    eax, eax
0x851070: jnz     short loc_851080
0x851072: test    esi, esi
0x851074: jz      short loc_851080
0x851076: mov     edx, [esi]
0x851078: mov     eax, [edx]
0x85107A: push    1
0x85107C: mov     ecx, esi
0x85107E: call    eax
0x851080: test    ebx, ebx
0x851082: mov     esi, [esp+44h+arg_C]
0x851086: mov     [esi+4], ebx
0x851089: jz      short loc_85109B
0x85108B: add     ebx, 4
0x85108E: push    ebx; lpAddend
0x85108F: call    dword ptr ds:0A28078h
0x851095: jmp     short loc_85109B
0x851097: mov     esi, [esp+44h+arg_C]
0x85109B: test    esi, esi
0x85109D: jz      short loc_8510B9
0x85109F: cmp     byte ptr ds:0B42CDDh, 0
0x8510A6: jz      short loc_8510B9
0x8510A8: mov     edx, [edi]
0x8510AA: mov     eax, [edx+78h]
0x8510AD: mov     ecx, edi
0x8510AF: call    eax
0x8510B1: push    eax
0x8510B2: mov     ecx, esi
0x8510B4: call    sub_7715E0
0x8510B9: cmp     ebp, 4
0x8510BC: fld1
0x8510BE: fldz
0x8510C0: jnz     short loc_8510CA
0x8510C2: fxch    st(1)
0x8510C4: fst     [esp+44h+var_28]
0x8510C8: jmp     short loc_8510EC
0x8510CA: cmp     ebp, 3
0x8510CD: fst     [esp+44h+var_28]
0x8510D1: jnz     short loc_8510EA
0x8510D3: fstp    st(1)
0x8510D5: fld1
0x8510D7: fst     [esp+44h+var_2C]
0x8510DB: fxch    st(1)
0x8510DD: cmp     ebp, 1
0x8510E0: fst     [esp+44h+var_30]
0x8510E4: jnz     short loc_8510FF
0x8510E6: fstp    st
0x8510E8: jmp     short loc_851101
0x8510EA: fxch    st(1)
0x8510EC: cmp     ebp, 2
0x8510EF: fxch    st(1)
0x8510F1: fst     [esp+44h+var_2C]
0x8510F5: jnz     short loc_8510DD
0x8510F7: fxch    st(1)
0x8510F9: fstp    [esp+44h+var_30]
0x8510FD: jmp     short loc_851101
0x8510FF: fstp    st(1)
0x851101: fstp    [esp+44h+arg_C]
0x851105: sub     esp, 10h
0x851108: fld     [esp+54h+arg_C]
0x85110C: mov     eax, esp
0x85110E: fstp    [esp+54h+var_1C]
0x851112: mov     ecx, [esp+54h+var_1C]
0x851116: fld     [esp+54h+var_30]
0x85111A: mov     [eax], ecx
0x85111C: fstp    [esp+54h+var_18]
0x851120: mov     edx, [esp+54h+var_18]
0x851124: fld     [esp+54h+var_2C]
0x851128: mov     [eax+4], edx
0x85112B: fstp    [esp+54h+var_14]
0x85112F: mov     ecx, [esp+54h+var_14]
0x851133: fld     [esp+54h+var_28]
0x851137: mov     [eax+8], ecx
0x85113A: fstp    [esp+54h+var_10]
0x85113E: mov     edx, [esp+54h+var_10]
0x851142: push    2
0x851144: mov     [eax+0Ch], edx
0x851147: call    sub_7ECAE0
0x85114C: add     esp, 14h
0x85114F: cmp     ebp, 8
0x851152: jnz     short loc_85115E
0x851154: fld1
0x851156: fst     [esp+44h+var_30]
0x85115A: fldz
0x85115C: jmp     short loc_851180
0x85115E: cmp     ebp, 7
0x851161: fldz
0x851163: fst     [esp+44h+var_30]
0x851167: fld1
0x851169: jnz     short loc_85117E
0x85116B: fst     [esp+44h+var_2C]
0x85116F: fxch    st(1)
0x851171: cmp     ebp, 5
0x851174: fst     [esp+44h+var_28]
0x851178: jnz     short loc_851191
0x85117A: fstp    st
0x85117C: jmp     short loc_851193
0x85117E: fxch    st(1)
0x851180: cmp     ebp, 6
0x851183: fst     [esp+44h+var_2C]
0x851187: jnz     short loc_851171
0x851189: fxch    st(1)
0x85118B: fstp    [esp+44h+var_28]
0x85118F: jmp     short loc_851193
0x851191: fstp    st(1)
0x851193: fstp    [esp+44h+arg_C]
0x851197: sub     esp, 10h
0x85119A: fld     [esp+54h+arg_C]
0x85119E: mov     eax, esp
0x8511A0: fstp    [esp+54h+var_1C]
0x8511A4: mov     ecx, [esp+54h+var_1C]
0x8511A8: fld     [esp+54h+var_28]
0x8511AC: mov     [eax], ecx
0x8511AE: fstp    [esp+54h+var_18]
0x8511B2: mov     edx, [esp+54h+var_18]
0x8511B6: fld     [esp+54h+var_2C]
0x8511BA: mov     [eax+4], edx
0x8511BD: fstp    [esp+54h+var_14]
0x8511C1: mov     ecx, [esp+54h+var_14]
0x8511C5: fld     [esp+54h+var_30]
0x8511C9: mov     [eax+8], ecx
0x8511CC: fstp    [esp+54h+var_10]
0x8511D0: mov     edx, [esp+54h+var_10]
0x8511D4: push    3
0x8511D6: mov     [eax+0Ch], edx
0x8511D9: call    sub_7ECAE0
0x8511DE: add     esp, 14h
0x8511E1: cmp     byte ptr [esp+44h+arg_10], 0
0x8511E6: jz      short loc_85122B
0x8511E8: mov     edi, [esp+44h+var_24]
0x8511EC: mov     ebx, 1
0x8511F1: add     [edi+60h], ebx
0x8511F4: mov     [esp+44h+arg_10], edi
0x8511F8: mov     esi, [esp+44h+var_20]
0x8511FC: mov     ecx, [esi+38h]
0x8511FF: lea     eax, [esp+44h+arg_10]
0x851203: push    eax
0x851204: push    ecx
0x851205: lea     ecx, [esi+40h]
0x851208: mov     [esp+4Ch+var_4], 0
0x851210: call    sub_76CE40
0x851215: or      eax, 0FFFFFFFFh
0x851218: add     [edi+60h], eax
0x85121B: mov     [esp+44h+var_4], eax
0x85121F: jnz     short loc_851228
0x851221: mov     ecx, edi
0x851223: call    sub_7604D0
0x851228: add     [esi+38h], ebx
0x85122B: mov     ecx, dword ptr [esp+44h+var_C]
0x85122F: mov     large fs:0, ecx
0x851236: pop     ecx
0x851237: pop     edi
0x851238: pop     esi
0x851239: pop     ebp
0x85123A: pop     ebx
0x85123B: add     esp, 30h
0x85123E: retn    14h
