0x7F7EE0: push    0FFFFFFFFh
0x7F7EE2: push    offset SEH_7F7EE0
0x7F7EE7: mov     eax, large fs:0
0x7F7EED: push    eax
0x7F7EEE: sub     esp, 0CCh
0x7F7EF4: push    ebx
0x7F7EF5: push    ebp
0x7F7EF6: push    esi
0x7F7EF7: push    edi
0x7F7EF8: mov     eax, ds:0B30AACh
0x7F7EFD: xor     eax, esp
0x7F7EFF: push    eax
0x7F7F00: lea     eax, [esp+0ECh+var_C]
0x7F7F07: mov     large fs:0, eax
0x7F7F0D: mov     esi, ecx
0x7F7F0F: mov     [esp+0ECh+var_C4], esi
0x7F7F13: mov     eax, ds:0B3F928h
0x7F7F18: mov     edi, [esp+0ECh+arg_4]
0x7F7F1F: push    edi
0x7F7F20: mov     [esp+0F0h+var_9C], eax
0x7F7F24: mov     [esp+0F0h+var_D5], 0
0x7F7F29: call    sub_7F5C40
0x7F7F2E: push    edi
0x7F7F2F: mov     ecx, esi
0x7F7F31: mov     [esp+0F0h+var_98], eax
0x7F7F35: call    sub_7F5E80
0x7F7F3A: mov     ecx, [esp+0ECh+arg_0]
0x7F7F41: mov     [esp+0ECh+var_94], eax
0x7F7F45: mov     eax, [ecx+4]
0x7F7F48: mov     edx, [eax]
0x7F7F4A: lea     ecx, [eax+8]
0x7F7F4D: mov     ecx, [ecx]
0x7F7F4F: mov     ebp, [ecx]
0x7F7F51: mov     eax, [ebp+0B4h]
0x7F7F57: mov     [esp+0ECh+var_C0], ecx
0x7F7F5B: lea     esi, [ebp+64h]
0x7F7F5E: mov     ecx, 0Dh
0x7F7F63: lea     edi, [esp+0ECh+var_80]
0x7F7F67: rep movsd
0x7F7F69: mov     ecx, [ebp+20h]
0x7F7F6C: mov     [esp+0ECh+var_AC], ecx
0x7F7F70: mov     [esp+0ECh+var_B0], edx
0x7F7F74: mov     edx, [ebp+24h]
0x7F7F77: mov     [esp+0ECh+var_A8], edx
0x7F7F7B: mov     [esp+0ECh+var_BC], eax
0x7F7F7F: mov     eax, [ebp+28h]
0x7F7F82: mov     [esp+0ECh+var_A4], eax
0x7F7F86: mov     ecx, [ebp+2Ch]
0x7F7F89: lea     edx, [esp+0ECh+var_D4]
0x7F7F8D: mov     [esp+0ECh+var_A0], ecx
0x7F7F91: push    edx
0x7F7F92: mov     ecx, ebp
0x7F7F94: call    sub_405760
0x7F7F99: mov     esi, [eax]
0x7F7F9B: mov     eax, [esp+0ECh+var_D4]
0x7F7F9F: test    eax, eax
0x7F7FA1: jz      short loc_7F7FC1
0x7F7FA3: mov     edi, eax
0x7F7FA5: add     eax, 4
0x7F7FA8: push    eax; lpAddend
0x7F7FA9: call    dword ptr ds:0A2807Ch
0x7F7FAF: test    eax, eax
0x7F7FB1: jnz     short loc_7F7FC1
0x7F7FB3: test    edi, edi
0x7F7FB5: jz      short loc_7F7FC1
0x7F7FB7: mov     eax, [edi]
0x7F7FB9: mov     edx, [eax]
0x7F7FBB: push    1
0x7F7FBD: mov     ecx, edi
0x7F7FBF: call    edx
0x7F7FC1: mov     ebx, [ebp+0BCh]
0x7F7FC7: mov     edi, [esi+18h]
0x7F7FCA: push    1; a1
0x7F7FCC: call    GetShaderDefinition
0x7F7FD1: mov     ecx, [esp+0F0h+var_C0]
0x7F7FD5: add     eax, 4
0x7F7FD8: mov     eax, [eax]
0x7F7FDA: mov     [esp+0F0h+var_B4], eax
0x7F7FDE: movzx   eax, word ptr [esp+0F0h+arg_4]
0x7F7FE6: add     esp, 4
0x7F7FE9: mov     ds:0B42E90h, eax
0x7F7FEE: mov     ds:0B42EB8h, ecx
0x7F7FF4: call    sub_7ECB20
0x7F7FF9: mov     edx, [esp+0ECh+var_C0]
0x7F7FFD: mov     eax, [esp+0ECh+arg_4]
0x7F8004: push    0
0x7F8006: push    edi
0x7F8007: mov     edi, [esp+0F4h+var_C4]
0x7F800B: push    edx
0x7F800C: push    eax
0x7F800D: mov     ecx, edi
0x7F800F: call    sub_7F60F0
0x7F8014: push    ebp
0x7F8015: mov     ecx, edi
0x7F8017: call    sub_7F6A30
0x7F801C: mov     ecx, [esp+0ECh+var_BC]
0x7F8020: mov     edi, [ecx+38h]
0x7F8023: lea     edx, [esp+0ECh+var_D0]
0x7F8027: push    edx
0x7F8028: mov     ecx, ebp
0x7F802A: call    sub_7016D0
0x7F802F: mov     eax, [eax]
0x7F8031: mov     edx, [ebx]
0x7F8033: mov     edx, [edx+28h]
0x7F8036: lea     ecx, [esp+0ECh+var_AC]
0x7F803A: push    ecx
0x7F803B: lea     ecx, [esp+0F0h+var_80]
0x7F803F: push    ecx
0x7F8040: push    eax
0x7F8041: push    esi
0x7F8042: push    edi
0x7F8043: push    0
0x7F8045: push    ebp
0x7F8046: mov     ecx, ebx
0x7F8048: mov     [esp+108h+var_4], 0
0x7F8053: call    edx
0x7F8055: mov     eax, [esp+0ECh+var_D0]
0x7F8059: test    eax, eax
0x7F805B: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F8066: jz      short loc_7F808A
0x7F8068: mov     [esp+0ECh+var_CC], eax
0x7F806C: add     eax, 4
0x7F806F: push    eax; lpAddend
0x7F8070: call    dword ptr ds:0A2807Ch
0x7F8076: test    eax, eax
0x7F8078: jnz     short loc_7F808A
0x7F807A: mov     ecx, [esp+0ECh+var_CC]
0x7F807E: test    ecx, ecx
0x7F8080: jz      short loc_7F808A
0x7F8082: mov     eax, [ecx]
0x7F8084: mov     edx, [eax]
0x7F8086: push    1
0x7F8088: call    edx
0x7F808A: lea     eax, [esp+0ECh+var_D0]
0x7F808E: push    eax
0x7F808F: mov     ecx, ebp
0x7F8091: call    sub_7016D0
0x7F8096: mov     eax, [eax]
0x7F8098: mov     edx, [ebx]
0x7F809A: mov     edx, [edx+2Ch]
0x7F809D: lea     ecx, [esp+0ECh+var_AC]
0x7F80A1: push    ecx
0x7F80A2: lea     ecx, [esp+0F0h+var_80]
0x7F80A6: push    ecx
0x7F80A7: push    eax
0x7F80A8: push    esi
0x7F80A9: push    edi
0x7F80AA: push    0
0x7F80AC: push    ebp
0x7F80AD: mov     ecx, ebx
0x7F80AF: mov     [esp+108h+var_4], 1
0x7F80BA: call    edx
0x7F80BC: mov     eax, [esp+0ECh+var_D0]
0x7F80C0: test    eax, eax
0x7F80C2: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F80CD: jz      short loc_7F80F1
0x7F80CF: mov     [esp+0ECh+var_CC], eax
0x7F80D3: add     eax, 4
0x7F80D6: push    eax; lpAddend
0x7F80D7: call    dword ptr ds:0A2807Ch
0x7F80DD: test    eax, eax
0x7F80DF: jnz     short loc_7F80F1
0x7F80E1: mov     ecx, [esp+0ECh+var_CC]
0x7F80E5: test    ecx, ecx
0x7F80E7: jz      short loc_7F80F1
0x7F80E9: mov     eax, [ecx]
0x7F80EB: mov     edx, [eax]
0x7F80ED: push    1
0x7F80EF: call    edx
0x7F80F1: mov     eax, [ebx]
0x7F80F3: mov     edx, [eax+48h]
0x7F80F6: mov     ecx, ebx
0x7F80F8: call    edx
0x7F80FA: mov     eax, [ebx+3Ch]
0x7F80FD: lea     ecx, [esp+0ECh+var_D0]
0x7F8101: push    ecx
0x7F8102: mov     ecx, ebp
0x7F8104: mov     [esp+0F0h+var_B8], eax
0x7F8108: call    sub_7016D0
0x7F810D: mov     eax, [eax]
0x7F810F: mov     edx, [ebx]
0x7F8111: mov     edx, [edx+30h]
0x7F8114: lea     ecx, [esp+0ECh+var_AC]
0x7F8118: push    ecx
0x7F8119: lea     ecx, [esp+0F0h+var_80]
0x7F811D: push    ecx
0x7F811E: push    eax
0x7F811F: push    esi
0x7F8120: push    edi
0x7F8121: push    0
0x7F8123: push    ebp
0x7F8124: mov     ecx, ebx
0x7F8126: mov     [esp+108h+var_4], 2
0x7F8131: call    edx
0x7F8133: mov     eax, [esp+0ECh+var_D0]
0x7F8137: test    eax, eax
0x7F8139: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F8144: jz      short loc_7F8168
0x7F8146: mov     [esp+0ECh+var_CC], eax
0x7F814A: add     eax, 4
0x7F814D: push    eax; lpAddend
0x7F814E: call    dword ptr ds:0A2807Ch
0x7F8154: test    eax, eax
0x7F8156: jnz     short loc_7F8168
0x7F8158: mov     ecx, [esp+0ECh+var_CC]
0x7F815C: test    ecx, ecx
0x7F815E: jz      short loc_7F8168
0x7F8160: mov     eax, [ecx]
0x7F8162: mov     edx, [eax]
0x7F8164: push    1
0x7F8166: call    edx
0x7F8168: lea     eax, [esp+0ECh+var_D0]
0x7F816C: push    eax
0x7F816D: mov     ecx, ebp
0x7F816F: call    sub_7016D0
0x7F8174: mov     eax, [eax]
0x7F8176: mov     edx, [ebx]
0x7F8178: mov     edx, [edx+34h]
0x7F817B: lea     ecx, [esp+0ECh+var_AC]
0x7F817F: push    ecx
0x7F8180: lea     ecx, [esp+0F0h+var_80]
0x7F8184: push    ecx
0x7F8185: push    eax
0x7F8186: push    esi
0x7F8187: push    edi
0x7F8188: push    0
0x7F818A: push    0
0x7F818C: push    ebp
0x7F818D: mov     ecx, ebx
0x7F818F: mov     [esp+10Ch+var_4], 3
0x7F819A: call    edx
0x7F819C: mov     eax, [esp+0ECh+var_D0]
0x7F81A0: test    eax, eax
0x7F81A2: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F81AD: jz      short loc_7F81D1
0x7F81AF: mov     [esp+0ECh+var_CC], eax
0x7F81B3: add     eax, 4
0x7F81B6: push    eax; lpAddend
0x7F81B7: call    dword ptr ds:0A2807Ch
0x7F81BD: test    eax, eax
0x7F81BF: jnz     short loc_7F81D1
0x7F81C1: mov     ecx, [esp+0ECh+var_CC]
0x7F81C5: test    ecx, ecx
0x7F81C7: jz      short loc_7F81D1
0x7F81C9: mov     eax, [ecx]
0x7F81CB: mov     edx, [eax]
0x7F81CD: push    1
0x7F81CF: call    edx
0x7F81D1: mov     eax, [ebx]
0x7F81D3: mov     edx, [eax+3Ch]
0x7F81D6: push    esi
0x7F81D7: push    edi
0x7F81D8: push    0
0x7F81DA: push    ebp
0x7F81DB: mov     ecx, ebx
0x7F81DD: call    edx
0x7F81DF: lea     eax, [esp+0ECh+var_D0]
0x7F81E3: push    eax
0x7F81E4: mov     ecx, ebp
0x7F81E6: call    sub_7016D0
0x7F81EB: mov     eax, [eax]
0x7F81ED: mov     edx, [ebx]
0x7F81EF: mov     edx, [edx+38h]
0x7F81F2: lea     ecx, [esp+0ECh+var_AC]
0x7F81F6: push    ecx
0x7F81F7: lea     ecx, [esp+0F0h+var_80]
0x7F81FB: push    ecx
0x7F81FC: push    eax
0x7F81FD: push    esi
0x7F81FE: push    edi
0x7F81FF: push    0
0x7F8201: push    0
0x7F8203: push    ebp
0x7F8204: mov     ecx, ebx
0x7F8206: mov     [esp+10Ch+var_4], 4
0x7F8211: call    edx
0x7F8213: mov     eax, [esp+0ECh+var_D0]
0x7F8217: test    eax, eax
0x7F8219: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F8224: jz      short loc_7F8244
0x7F8226: mov     esi, eax
0x7F8228: add     eax, 4
0x7F822B: push    eax; lpAddend
0x7F822C: call    dword ptr ds:0A2807Ch
0x7F8232: test    eax, eax
0x7F8234: jnz     short loc_7F8244
0x7F8236: test    esi, esi
0x7F8238: jz      short loc_7F8244
0x7F823A: mov     eax, [esi]
0x7F823C: mov     edx, [eax]
0x7F823E: push    1
0x7F8240: mov     ecx, esi
0x7F8242: call    edx
0x7F8244: mov     ecx, ds:0B3F928h
0x7F824A: mov     eax, [ebp+0]
0x7F824D: mov     edx, [eax+88h]
0x7F8253: push    ecx
0x7F8254: mov     ecx, ebp
0x7F8256: call    edx
0x7F8258: mov     eax, [esp+0ECh+arg_4]
0x7F825F: push    eax
0x7F8260: call    sub_7D1800
0x7F8265: mov     edx, ds:0B28CB0h
0x7F826B: mov     ecx, [esp+0F0h+var_BC]
0x7F826F: lea     eax, ds:0[edx*4]
0x7F8276: mov     [esp+0F0h+var_D4], ecx
0x7F827A: mov     ecx, [esp+0F0h+var_C4]
0x7F827E: mov     edx, [ecx]
0x7F8280: push    eax
0x7F8281: push    0
0x7F8283: push    edx
0x7F8284: call    __memset
0x7F8289: mov     eax, [esp+0FCh+var_B0]
0x7F828D: add     esp, 10h
0x7F8290: test    eax, eax
0x7F8292: jz      loc_7F8661
0x7F8298: jmp     short loc_7F82A4
0x7F829A: align 10h
0x7F82A0: mov     eax, [esp+0ECh+var_B0]
0x7F82A4: mov     ecx, [esp+0ECh+var_C0]
0x7F82A8: mov     edx, [eax]
0x7F82AA: mov     [esp+0ECh+var_CC], ecx
0x7F82AE: lea     ecx, [eax+8]
0x7F82B1: mov     eax, [ecx]
0x7F82B3: movzx   ecx, word ptr [esp+0ECh+arg_4]
0x7F82BB: mov     ds:0B42E90h, ecx
0x7F82C1: mov     ds:0B42EB8h, eax
0x7F82C6: mov     ebp, [eax]
0x7F82C8: lea     ecx, [esp+0ECh+var_90]
0x7F82CC: mov     [esp+0ECh+var_C0], eax
0x7F82D0: mov     eax, [ebp+0B4h]
0x7F82D6: push    ecx
0x7F82D7: mov     ecx, ebp
0x7F82D9: mov     [esp+0F0h+var_B0], edx
0x7F82DD: mov     [esp+0F0h+var_BC], eax
0x7F82E1: call    sub_405760
0x7F82E6: mov     esi, [eax]
0x7F82E8: mov     eax, [esp+0ECh+var_90]
0x7F82EC: test    eax, eax
0x7F82EE: mov     [esp+0ECh+var_D0], esi
0x7F82F2: jz      short loc_7F8312
0x7F82F4: mov     edi, eax
0x7F82F6: add     eax, 4
0x7F82F9: push    eax; lpAddend
0x7F82FA: call    dword ptr ds:0A2807Ch
0x7F8300: test    eax, eax
0x7F8302: jnz     short loc_7F8312
0x7F8304: test    edi, edi
0x7F8306: jz      short loc_7F8312
0x7F8308: mov     edx, [edi]
0x7F830A: mov     eax, [edx]
0x7F830C: push    1
0x7F830E: mov     ecx, edi
0x7F8310: call    eax
0x7F8312: mov     ecx, [esi+18h]
0x7F8315: mov     [esp+0ECh+var_C8], ecx
0x7F8319: lea     esi, [ebp+64h]
0x7F831C: mov     ecx, 0Dh
0x7F8321: lea     edi, [esp+0ECh+var_80]
0x7F8325: rep movsd
0x7F8327: mov     edx, [ebp+20h]
0x7F832A: mov     [esp+0ECh+var_AC], edx
0x7F832E: mov     eax, [ebp+24h]
0x7F8331: mov     [esp+0ECh+var_A8], eax
0x7F8335: mov     ecx, [ebp+28h]
0x7F8338: mov     eax, [esp+0ECh+var_BC]
0x7F833C: cmp     [esp+0ECh+var_D4], eax
0x7F8340: mov     [esp+0ECh+var_A4], ecx
0x7F8344: mov     edx, [ebp+2Ch]
0x7F8347: mov     [esp+0ECh+var_A0], edx
0x7F834B: jz      loc_7F8577
0x7F8351: cmp     [esp+0ECh+var_D5], 0
0x7F8356: jz      short loc_7F837F
0x7F8358: mov     ecx, [esp+0ECh+var_B4]
0x7F835C: mov     edx, [esp+0ECh+var_94]
0x7F8360: mov     eax, [esp+0ECh+var_98]
0x7F8364: push    ecx
0x7F8365: mov     ecx, [esp+0F0h+arg_4]
0x7F836C: push    edx
0x7F836D: push    eax
0x7F836E: push    0
0x7F8370: push    ecx
0x7F8371: mov     ecx, [esp+100h+var_C4]
0x7F8375: call    sub_7F68C0
0x7F837A: mov     [esp+0ECh+var_D5], 0
0x7F837F: mov     ecx, [esp+0ECh+var_C4]
0x7F8383: push    ebp
0x7F8384: call    sub_7F6A30
0x7F8389: mov     eax, [esp+0ECh+var_CC]
0x7F838D: mov     edx, [esp+0ECh+var_BC]
0x7F8391: mov     edi, [esp+0ECh+var_C8]
0x7F8395: mov     ecx, [esp+0ECh+var_C0]
0x7F8399: mov     esi, [edx+38h]
0x7F839C: mov     edx, [esp+0ECh+arg_4]
0x7F83A3: push    eax
0x7F83A4: push    edi
0x7F83A5: push    ecx
0x7F83A6: mov     ecx, [esp+0F8h+var_C4]
0x7F83AA: push    edx
0x7F83AB: call    sub_7F60F0
0x7F83B0: mov     eax, [esp+0ECh+arg_4]
0x7F83B7: mov     ecx, [esp+0ECh+var_C4]
0x7F83BB: push    ebx
0x7F83BC: push    edi
0x7F83BD: mov     edi, [esp+0F4h+var_D0]
0x7F83C1: push    edi
0x7F83C2: push    eax
0x7F83C3: push    ebp
0x7F83C4: call    sub_7F63D0
0x7F83C9: mov     ecx, [esp+0ECh+var_C0]
0x7F83CD: cmp     byte ptr [ecx+7], 0
0x7F83D1: jnz     short loc_7F83DB
0x7F83D3: fldz
0x7F83D5: fstp    dword ptr ds:0B4668Ch
0x7F83DB: lea     edx, [esp+0ECh+var_8C]
0x7F83DF: push    edx
0x7F83E0: mov     ecx, ebp
0x7F83E2: call    sub_7016D0
0x7F83E7: mov     eax, [eax]
0x7F83E9: mov     edx, [ebx]
0x7F83EB: mov     edx, [edx+34h]
0x7F83EE: lea     ecx, [esp+0ECh+var_AC]
0x7F83F2: push    ecx
0x7F83F3: lea     ecx, [esp+0F0h+var_80]
0x7F83F7: push    ecx
0x7F83F8: push    eax
0x7F83F9: push    edi
0x7F83FA: push    esi
0x7F83FB: push    0
0x7F83FD: push    0
0x7F83FF: push    ebp
0x7F8400: mov     ecx, ebx
0x7F8402: mov     [esp+10Ch+var_4], 5
0x7F840D: call    edx
0x7F840F: mov     eax, [esp+0ECh+var_8C]
0x7F8413: test    eax, eax
0x7F8415: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F8420: jz      short loc_7F8444
0x7F8422: mov     [esp+0ECh+var_D4], eax
0x7F8426: add     eax, 4
0x7F8429: push    eax; lpAddend
0x7F842A: call    dword ptr ds:0A2807Ch
0x7F8430: test    eax, eax
0x7F8432: jnz     short loc_7F8444
0x7F8434: mov     ecx, [esp+0ECh+var_D4]
0x7F8438: test    ecx, ecx
0x7F843A: jz      short loc_7F8444
0x7F843C: mov     eax, [ecx]
0x7F843E: mov     edx, [eax]
0x7F8440: push    1
0x7F8442: call    edx
0x7F8444: mov     eax, [ebx]
0x7F8446: mov     edx, [eax+3Ch]
0x7F8449: push    edi
0x7F844A: push    esi
0x7F844B: push    0
0x7F844D: push    ebp
0x7F844E: mov     ecx, ebx
0x7F8450: call    edx
0x7F8452: mov     eax, [ebx+2Ch]
0x7F8455: lea     ecx, [esp+0ECh+var_88]
0x7F8459: push    ecx
0x7F845A: mov     ecx, ebp
0x7F845C: mov     [esp+0F0h+var_C8], eax
0x7F8460: call    sub_7016D0
0x7F8465: mov     edx, [esp+0ECh+var_B8]
0x7F8469: mov     ecx, [edx+44h]
0x7F846C: mov     eax, [eax]
0x7F846E: mov     edx, [esp+0ECh+var_C8]
0x7F8472: mov     edx, [edx]
0x7F8474: mov     edx, [edx+40h]
0x7F8477: push    1
0x7F8479: push    0
0x7F847B: mov     [esp+0F4h+var_D4], ecx
0x7F847F: lea     ecx, [esp+0F4h+var_AC]
0x7F8483: push    ecx
0x7F8484: lea     ecx, [esp+0F8h+var_80]
0x7F8488: push    ecx
0x7F8489: mov     ecx, [esp+0FCh+var_C8]
0x7F848D: push    eax
0x7F848E: mov     eax, [esp+100h+var_D4]
0x7F8492: push    edi
0x7F8493: push    esi
0x7F8494: push    0
0x7F8496: push    0
0x7F8498: push    ebp
0x7F8499: push    eax
0x7F849A: mov     [esp+118h+var_4], 6
0x7F84A5: call    edx
0x7F84A7: mov     eax, [esp+0ECh+var_88]
0x7F84AB: test    eax, eax
0x7F84AD: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F84B8: jz      short loc_7F84DC
0x7F84BA: mov     [esp+0ECh+var_D4], eax
0x7F84BE: add     eax, 4
0x7F84C1: push    eax; lpAddend
0x7F84C2: call    dword ptr ds:0A2807Ch
0x7F84C8: test    eax, eax
0x7F84CA: jnz     short loc_7F84DC
0x7F84CC: mov     ecx, [esp+0ECh+var_D4]
0x7F84D0: test    ecx, ecx
0x7F84D2: jz      short loc_7F84DC
0x7F84D4: mov     eax, [ecx]
0x7F84D6: mov     edx, [eax]
0x7F84D8: push    1
0x7F84DA: call    edx
0x7F84DC: mov     eax, [ebx+30h]
0x7F84DF: lea     ecx, [esp+0ECh+var_84]
0x7F84E3: push    ecx
0x7F84E4: mov     ecx, ebp
0x7F84E6: mov     [esp+0F0h+var_C8], eax
0x7F84EA: call    sub_7016D0
0x7F84EF: mov     edx, [esp+0ECh+var_B8]
0x7F84F3: mov     ecx, [edx+58h]
0x7F84F6: mov     eax, [eax]
0x7F84F8: mov     edx, [esp+0ECh+var_C8]
0x7F84FC: mov     edx, [edx]
0x7F84FE: mov     edx, [edx+40h]
0x7F8501: push    1
0x7F8503: push    0
0x7F8505: mov     [esp+0F4h+var_D4], ecx
0x7F8509: lea     ecx, [esp+0F4h+var_AC]
0x7F850D: push    ecx
0x7F850E: lea     ecx, [esp+0F8h+var_80]
0x7F8512: push    ecx
0x7F8513: mov     ecx, [esp+0FCh+var_C8]
0x7F8517: push    eax
0x7F8518: mov     eax, [esp+100h+var_D4]
0x7F851C: push    edi
0x7F851D: push    esi
0x7F851E: push    0
0x7F8520: push    0
0x7F8522: push    ebp
0x7F8523: push    eax
0x7F8524: mov     [esp+118h+var_4], 7
0x7F852F: call    edx
0x7F8531: mov     eax, [esp+0ECh+var_84]
0x7F8535: test    eax, eax
0x7F8537: mov     [esp+0ECh+var_4], 0FFFFFFFFh
0x7F8542: jz      short loc_7F8562
0x7F8544: mov     esi, eax
0x7F8546: add     eax, 4
0x7F8549: push    eax; lpAddend
0x7F854A: call    dword ptr ds:0A2807Ch
0x7F8550: test    eax, eax
0x7F8552: jnz     short loc_7F8562
0x7F8554: test    esi, esi
0x7F8556: jz      short loc_7F8562
0x7F8558: mov     eax, [esi]
0x7F855A: mov     edx, [eax]
0x7F855C: push    1
0x7F855E: mov     ecx, esi
0x7F8560: call    edx
0x7F8562: mov     eax, [esp+0ECh+var_B8]
0x7F8566: mov     ecx, [esp+0ECh+var_B4]
0x7F856A: push    0
0x7F856C: push    eax
0x7F856D: push    ecx
0x7F856E: mov     ecx, [esp+0F8h+var_C4]
0x7F8572: jmp     loc_7F8648
0x7F8577: cmp     [esp+0ECh+var_D5], 0
0x7F857C: mov     edi, [esp+0ECh+arg_4]
0x7F8583: mov     esi, [esp+0ECh+var_C4]
0x7F8587: jnz     short loc_7F85A7
0x7F8589: mov     edx, [esp+0ECh+var_B4]
0x7F858D: mov     eax, [esp+0ECh+var_94]
0x7F8591: mov     ecx, [esp+0ECh+var_98]
0x7F8595: push    edx
0x7F8596: push    eax
0x7F8597: push    ecx
0x7F8598: push    1
0x7F859A: push    edi
0x7F859B: mov     ecx, esi
0x7F859D: call    sub_7F68C0
0x7F85A2: mov     [esp+0ECh+var_D5], 1
0x7F85A7: mov     edx, [esp+0ECh+var_CC]
0x7F85AB: mov     eax, [esp+0ECh+var_C8]
0x7F85AF: mov     ecx, [esp+0ECh+var_C0]
0x7F85B3: push    edx
0x7F85B4: push    eax
0x7F85B5: push    ecx
0x7F85B6: push    edi
0x7F85B7: mov     ecx, esi
0x7F85B9: call    sub_7F60F0
0x7F85BE: mov     edx, [esp+0ECh+var_C8]
0x7F85C2: mov     eax, [esp+0ECh+var_D0]
0x7F85C6: push    ebx
0x7F85C7: push    edx
0x7F85C8: push    eax
0x7F85C9: push    edi
0x7F85CA: push    ebp
0x7F85CB: mov     ecx, esi
0x7F85CD: call    sub_7F63D0
0x7F85D2: mov     ecx, [esp+0ECh+var_C0]
0x7F85D6: cmp     byte ptr [ecx+7], 0
0x7F85DA: jnz     short loc_7F85E4
0x7F85DC: fldz
0x7F85DE: fstp    dword ptr ds:0B4668Ch
0x7F85E4: lea     edx, [esp+0ECh+var_80]
0x7F85E8: push    edx
0x7F85E9: call    sub_7C8680
0x7F85EE: mov     ecx, [esp+0F0h+var_9C]
0x7F85F2: add     esp, 4
0x7F85F5: push    0
0x7F85F7: lea     eax, [esp+0F0h+var_80]
0x7F85FB: push    eax
0x7F85FC: call    sub_765480
0x7F8601: lea     ecx, [esp+0ECh+var_4C]
0x7F8608: push    ecx
0x7F8609: lea     edx, [esp+0F0h+var_80]
0x7F860D: push    edx
0x7F860E: mov     ecx, esi
0x7F8610: call    sub_7F5B80
0x7F8615: fld     [esp+0ECh+var_50]
0x7F861C: mov     eax, [ebp+0B8h]
0x7F8622: push    eax; int
0x7F8623: movzx   eax, di
0x7F8626: mov     edi, [esp+0F0h+var_B4]
0x7F862A: push    eax; int
0x7F862B: push    ecx
0x7F862C: lea     ecx, [esp+0F8h+var_4C]
0x7F8633: fstp    [esp+0F8h+var_F8]; float
0x7F8636: push    ecx; int
0x7F8637: mov     ecx, edi
0x7F8639: call    sub_7C9140
0x7F863E: mov     edx, [esp+0ECh+var_B8]
0x7F8642: push    0
0x7F8644: push    edx
0x7F8645: push    edi
0x7F8646: mov     ecx, esi
0x7F8648: push    ebp
0x7F8649: call    sub_7F6BF0
0x7F864E: cmp     [esp+0ECh+var_B0], 0
0x7F8653: mov     eax, [esp+0ECh+var_BC]
0x7F8657: mov     [esp+0ECh+var_D4], eax
0x7F865B: jnz     loc_7F82A0
0x7F8661: mov     esi, [esp+0ECh+arg_0]
0x7F8668: mov     ecx, esi
0x7F866A: call    sub_7A9C30
0x7F866F: mov     ecx, [esi+4]
0x7F8672: xor     edi, edi
0x7F8674: mov     [esi+0Ch], ecx
0x7F8677: mov     [esi+4], edi
0x7F867A: mov     [esi+8], edi
0x7F867D: mov     [esi+10h], edi
0x7F8680: mov     edx, [ebx]
0x7F8682: mov     eax, [edx+4Ch]
0x7F8685: mov     ecx, ebx
0x7F8687: call    eax
0x7F8689: mov     ecx, [esp+0ECh+var_9C]
0x7F868D: mov     ecx, [ecx+8ACh]
0x7F8693: mov     edx, [ecx]
0x7F8695: mov     eax, [edx+0FCh]
0x7F869B: push    edi
0x7F869C: call    eax
0x7F869E: mov     ecx, dword ptr [esp+0ECh+var_C]
0x7F86A5: mov     large fs:0, ecx
0x7F86AC: pop     ecx
0x7F86AD: pop     edi
0x7F86AE: pop     esi
0x7F86AF: pop     ebp
0x7F86B0: pop     ebx
0x7F86B1: add     esp, 0D8h
0x7F86B7: retn    8
