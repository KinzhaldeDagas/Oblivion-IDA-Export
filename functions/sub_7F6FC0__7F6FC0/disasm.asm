0x7F6FC0: push    0FFFFFFFFh
0x7F6FC2: push    offset SEH_7F6FC0
0x7F6FC7: mov     eax, large fs:0
0x7F6FCD: push    eax
0x7F6FCE: sub     esp, 0C4h
0x7F6FD4: push    ebx
0x7F6FD5: push    ebp
0x7F6FD6: push    esi
0x7F6FD7: push    edi
0x7F6FD8: mov     eax, ds:0B30AACh
0x7F6FDD: xor     eax, esp
0x7F6FDF: push    eax
0x7F6FE0: lea     eax, [esp+0E4h+var_C]
0x7F6FE7: mov     large fs:0, eax
0x7F6FED: mov     esi, ecx
0x7F6FEF: mov     [esp+0E4h+var_C4], esi
0x7F6FF3: mov     eax, ds:0B3F928h
0x7F6FF8: mov     edi, [esp+0E4h+arg_4]
0x7F6FFF: push    edi
0x7F7000: mov     [esp+0E8h+var_90], eax
0x7F7004: mov     [esp+0E8h+var_CD], 0
0x7F7009: call    sub_7F5C40
0x7F700E: push    edi
0x7F700F: mov     ecx, esi
0x7F7011: mov     [esp+0E8h+var_98], eax
0x7F7015: call    sub_7F5E80
0x7F701A: mov     ecx, [esp+0E4h+arg_0]
0x7F7021: mov     [esp+0E4h+var_94], eax
0x7F7025: mov     eax, [ecx+4]
0x7F7028: mov     edx, [eax]
0x7F702A: lea     ecx, [eax+8]
0x7F702D: mov     ecx, [ecx]
0x7F702F: mov     ebp, [ecx]
0x7F7031: mov     eax, [ebp+0B4h]
0x7F7037: mov     [esp+0E4h+var_B4], ecx
0x7F703B: lea     esi, [ebp+64h]
0x7F703E: mov     ecx, 0Dh
0x7F7043: lea     edi, [esp+0E4h+var_80]
0x7F7047: rep movsd
0x7F7049: mov     ecx, [ebp+20h]
0x7F704C: mov     [esp+0E4h+var_A8], ecx
0x7F7050: mov     [esp+0E4h+var_B0], edx
0x7F7054: mov     edx, [ebp+24h]
0x7F7057: mov     [esp+0E4h+var_A4], edx
0x7F705B: mov     [esp+0E4h+var_AC], eax
0x7F705F: mov     eax, [ebp+28h]
0x7F7062: mov     [esp+0E4h+var_A0], eax
0x7F7066: mov     ecx, [ebp+2Ch]
0x7F7069: lea     edx, [esp+0E4h+var_BC]
0x7F706D: mov     [esp+0E4h+var_9C], ecx
0x7F7071: push    edx
0x7F7072: mov     ecx, ebp
0x7F7074: call    sub_405760
0x7F7079: mov     edi, [eax]
0x7F707B: mov     eax, [esp+0E4h+var_BC]
0x7F707F: test    eax, eax
0x7F7081: jz      short loc_7F70A1
0x7F7083: mov     esi, eax
0x7F7085: add     eax, 4
0x7F7088: push    eax; lpAddend
0x7F7089: call    dword ptr ds:0A2807Ch
0x7F708F: test    eax, eax
0x7F7091: jnz     short loc_7F70A1
0x7F7093: test    esi, esi
0x7F7095: jz      short loc_7F70A1
0x7F7097: mov     eax, [esi]
0x7F7099: mov     edx, [eax]
0x7F709B: push    1
0x7F709D: mov     ecx, esi
0x7F709F: call    edx
0x7F70A1: movzx   eax, word ptr [esp+0E4h+arg_4]
0x7F70A9: mov     ebx, [ebp+0BCh]
0x7F70AF: mov     esi, [edi+18h]
0x7F70B2: mov     ds:0B42E90h, eax
0x7F70B7: mov     eax, [esp+0E4h+var_B4]
0x7F70BB: mov     ds:0B42EB8h, eax
0x7F70C0: call    sub_7ECB20
0x7F70C5: mov     ecx, [esp+0E4h+var_B4]
0x7F70C9: mov     edx, [esp+0E4h+arg_4]
0x7F70D0: push    0
0x7F70D2: push    esi
0x7F70D3: mov     esi, [esp+0ECh+var_C4]
0x7F70D7: push    ecx
0x7F70D8: push    edx
0x7F70D9: mov     ecx, esi
0x7F70DB: call    sub_7F60F0
0x7F70E0: push    ebp
0x7F70E1: mov     ecx, esi
0x7F70E3: call    sub_7F6A30
0x7F70E8: mov     eax, [esp+0E4h+var_AC]
0x7F70EC: mov     esi, [eax+38h]
0x7F70EF: lea     ecx, [esp+0E4h+var_C0]
0x7F70F3: push    ecx
0x7F70F4: mov     ecx, ebp
0x7F70F6: call    sub_7016D0
0x7F70FB: mov     eax, [eax]
0x7F70FD: mov     edx, [ebx]
0x7F70FF: mov     edx, [edx+28h]
0x7F7102: lea     ecx, [esp+0E4h+var_A8]
0x7F7106: push    ecx
0x7F7107: lea     ecx, [esp+0E8h+var_80]
0x7F710B: push    ecx
0x7F710C: push    eax
0x7F710D: push    edi
0x7F710E: push    esi
0x7F710F: push    0
0x7F7111: push    ebp
0x7F7112: mov     ecx, ebx
0x7F7114: mov     [esp+100h+var_4], 0
0x7F711F: call    edx
0x7F7121: mov     eax, [esp+0E4h+var_C0]
0x7F7125: test    eax, eax
0x7F7127: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x7F7132: jz      short loc_7F7156
0x7F7134: mov     [esp+0E4h+var_CC], eax
0x7F7138: add     eax, 4
0x7F713B: push    eax; lpAddend
0x7F713C: call    dword ptr ds:0A2807Ch
0x7F7142: test    eax, eax
0x7F7144: jnz     short loc_7F7156
0x7F7146: mov     ecx, [esp+0E4h+var_CC]
0x7F714A: test    ecx, ecx
0x7F714C: jz      short loc_7F7156
0x7F714E: mov     eax, [ecx]
0x7F7150: mov     edx, [eax]
0x7F7152: push    1
0x7F7154: call    edx
0x7F7156: lea     eax, [esp+0E4h+var_C0]
0x7F715A: push    eax
0x7F715B: mov     ecx, ebp
0x7F715D: call    sub_7016D0
0x7F7162: mov     eax, [eax]
0x7F7164: mov     edx, [ebx]
0x7F7166: mov     edx, [edx+2Ch]
0x7F7169: lea     ecx, [esp+0E4h+var_A8]
0x7F716D: push    ecx
0x7F716E: lea     ecx, [esp+0E8h+var_80]
0x7F7172: push    ecx
0x7F7173: push    eax
0x7F7174: push    edi
0x7F7175: push    esi
0x7F7176: push    0
0x7F7178: push    ebp
0x7F7179: mov     ecx, ebx
0x7F717B: mov     [esp+100h+var_4], 1
0x7F7186: call    edx
0x7F7188: mov     eax, [esp+0E4h+var_C0]
0x7F718C: test    eax, eax
0x7F718E: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x7F7199: jz      short loc_7F71BD
0x7F719B: mov     [esp+0E4h+var_CC], eax
0x7F719F: add     eax, 4
0x7F71A2: push    eax; lpAddend
0x7F71A3: call    dword ptr ds:0A2807Ch
0x7F71A9: test    eax, eax
0x7F71AB: jnz     short loc_7F71BD
0x7F71AD: mov     ecx, [esp+0E4h+var_CC]
0x7F71B1: test    ecx, ecx
0x7F71B3: jz      short loc_7F71BD
0x7F71B5: mov     eax, [ecx]
0x7F71B7: mov     edx, [eax]
0x7F71B9: push    1
0x7F71BB: call    edx
0x7F71BD: mov     eax, [ebx]
0x7F71BF: mov     edx, [eax+48h]
0x7F71C2: mov     ecx, ebx
0x7F71C4: call    edx
0x7F71C6: mov     eax, [ebx+3Ch]
0x7F71C9: lea     ecx, [esp+0E4h+var_CC]
0x7F71CD: push    ecx
0x7F71CE: mov     ecx, ebp
0x7F71D0: mov     [esp+0E8h+var_C0], eax
0x7F71D4: call    sub_7016D0
0x7F71D9: mov     eax, [eax]
0x7F71DB: mov     edx, [ebx]
0x7F71DD: mov     edx, [edx+30h]
0x7F71E0: lea     ecx, [esp+0E4h+var_A8]
0x7F71E4: push    ecx
0x7F71E5: lea     ecx, [esp+0E8h+var_80]
0x7F71E9: push    ecx
0x7F71EA: push    eax
0x7F71EB: push    edi
0x7F71EC: push    esi
0x7F71ED: push    0
0x7F71EF: push    ebp
0x7F71F0: mov     ecx, ebx
0x7F71F2: mov     [esp+100h+var_4], 2
0x7F71FD: call    edx
0x7F71FF: mov     eax, [esp+0E4h+var_CC]
0x7F7203: test    eax, eax
0x7F7205: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x7F7210: jz      short loc_7F7234
0x7F7212: mov     [esp+0E4h+var_C8], eax
0x7F7216: add     eax, 4
0x7F7219: push    eax; lpAddend
0x7F721A: call    dword ptr ds:0A2807Ch
0x7F7220: test    eax, eax
0x7F7222: jnz     short loc_7F7234
0x7F7224: mov     ecx, [esp+0E4h+var_C8]
0x7F7228: test    ecx, ecx
0x7F722A: jz      short loc_7F7234
0x7F722C: mov     eax, [ecx]
0x7F722E: mov     edx, [eax]
0x7F7230: push    1
0x7F7232: call    edx
0x7F7234: lea     eax, [esp+0E4h+var_CC]
0x7F7238: push    eax
0x7F7239: mov     ecx, ebp
0x7F723B: call    sub_7016D0
0x7F7240: mov     eax, [eax]
0x7F7242: mov     edx, [ebx]
0x7F7244: mov     edx, [edx+34h]
0x7F7247: lea     ecx, [esp+0E4h+var_A8]
0x7F724B: push    ecx
0x7F724C: lea     ecx, [esp+0E8h+var_80]
0x7F7250: push    ecx
0x7F7251: push    eax
0x7F7252: push    edi
0x7F7253: push    esi
0x7F7254: push    0
0x7F7256: push    0
0x7F7258: push    ebp
0x7F7259: mov     ecx, ebx
0x7F725B: mov     [esp+104h+var_4], 3
0x7F7266: call    edx
0x7F7268: mov     eax, [esp+0E4h+var_CC]
0x7F726C: test    eax, eax
0x7F726E: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x7F7279: jz      short loc_7F729D
0x7F727B: mov     [esp+0E4h+var_C8], eax
0x7F727F: add     eax, 4
0x7F7282: push    eax; lpAddend
0x7F7283: call    dword ptr ds:0A2807Ch
0x7F7289: test    eax, eax
0x7F728B: jnz     short loc_7F729D
0x7F728D: mov     ecx, [esp+0E4h+var_C8]
0x7F7291: test    ecx, ecx
0x7F7293: jz      short loc_7F729D
0x7F7295: mov     eax, [ecx]
0x7F7297: mov     edx, [eax]
0x7F7299: push    1
0x7F729B: call    edx
0x7F729D: mov     eax, [ebx]
0x7F729F: mov     edx, [eax+3Ch]
0x7F72A2: push    edi
0x7F72A3: push    esi
0x7F72A4: push    0
0x7F72A6: push    ebp
0x7F72A7: mov     ecx, ebx
0x7F72A9: call    edx
0x7F72AB: lea     eax, [esp+0E4h+var_CC]
0x7F72AF: push    eax
0x7F72B0: mov     ecx, ebp
0x7F72B2: call    sub_7016D0
0x7F72B7: mov     eax, [eax]
0x7F72B9: mov     edx, [ebx]
0x7F72BB: mov     edx, [edx+38h]
0x7F72BE: lea     ecx, [esp+0E4h+var_A8]
0x7F72C2: push    ecx
0x7F72C3: lea     ecx, [esp+0E8h+var_80]
0x7F72C7: push    ecx
0x7F72C8: push    eax
0x7F72C9: push    edi
0x7F72CA: push    esi
0x7F72CB: xor     edi, edi
0x7F72CD: push    edi
0x7F72CE: push    edi
0x7F72CF: push    ebp
0x7F72D0: mov     ecx, ebx
0x7F72D2: mov     [esp+104h+var_4], 4
0x7F72DD: call    edx
0x7F72DF: mov     eax, [esp+0E4h+var_CC]
0x7F72E3: cmp     eax, edi
0x7F72E5: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x7F72F0: jz      short loc_7F7310
0x7F72F2: mov     esi, eax
0x7F72F4: add     eax, 4
0x7F72F7: push    eax; lpAddend
0x7F72F8: call    dword ptr ds:0A2807Ch
0x7F72FE: test    eax, eax
0x7F7300: jnz     short loc_7F7310
0x7F7302: cmp     esi, edi
0x7F7304: jz      short loc_7F7310
0x7F7306: mov     eax, [esi]
0x7F7308: mov     edx, [eax]
0x7F730A: push    1
0x7F730C: mov     ecx, esi
0x7F730E: call    edx
0x7F7310: mov     eax, ds:0B3F928h
0x7F7315: mov     ecx, [eax+8ACh]
0x7F731B: mov     ax, ds:0B427BEh
0x7F7321: cmp     ax, 5
0x7F7325: jnb     short loc_7F7358
0x7F7327: movzx   edx, ax
0x7F732A: cmp     dword ptr [ecx+edx*8+0D48h], 2
0x7F7332: lea     eax, [ecx+edx*8+0D48h]
0x7F7339: jz      short loc_7F7358
0x7F733B: push    2
0x7F733D: mov     dword ptr [eax], 2
0x7F7343: mov     eax, [ecx+0FF8h]
0x7F7349: mov     ecx, [eax]
0x7F734B: mov     edx, [ecx+114h]
0x7F7351: push    7
0x7F7353: push    1
0x7F7355: push    eax
0x7F7356: call    edx
0x7F7358: mov     ecx, ds:0B3F928h
0x7F735E: mov     eax, [ebp+0]
0x7F7361: mov     edx, [eax+88h]
0x7F7367: push    ecx
0x7F7368: mov     ecx, ebp
0x7F736A: call    edx
0x7F736C: mov     eax, [esp+0E4h+arg_4]
0x7F7373: push    eax
0x7F7374: call    sub_7D1800
0x7F7379: mov     edx, ds:0B28CB0h
0x7F737F: mov     ecx, [esp+0E8h+var_AC]
0x7F7383: lea     eax, ds:0[edx*4]
0x7F738A: mov     [esp+0E8h+var_CC], ecx
0x7F738E: mov     ecx, [esp+0E8h+var_C4]
0x7F7392: mov     edx, [ecx]
0x7F7394: push    eax
0x7F7395: push    edi
0x7F7396: push    edx
0x7F7397: call    __memset
0x7F739C: mov     eax, [esp+0F4h+var_B0]
0x7F73A0: add     esp, 10h
0x7F73A3: cmp     eax, edi
0x7F73A5: jz      loc_7F7624
0x7F73AB: jmp     short loc_7F73B4
0x7F73AD: align 10h
0x7F73B0: mov     eax, [esp+0E4h+var_B0]
0x7F73B4: mov     ecx, [esp+0E4h+var_B4]
0x7F73B8: mov     edx, [eax]
0x7F73BA: mov     edi, [eax+8]
0x7F73BD: mov     [esp+0E4h+var_BC], ecx
0x7F73C1: lea     ecx, [eax+8]
0x7F73C4: movzx   eax, word ptr [esp+0E4h+arg_4]
0x7F73CC: mov     ds:0B42E90h, eax
0x7F73D1: mov     ds:0B42EB8h, edi
0x7F73D7: mov     ebp, [edi]
0x7F73D9: mov     esi, [ebp+0B4h]
0x7F73DF: mov     [esp+0E4h+var_88], eax
0x7F73E3: lea     eax, [esp+0E4h+var_84]
0x7F73E7: push    eax
0x7F73E8: mov     ecx, ebp
0x7F73EA: mov     [esp+0E8h+var_B0], edx
0x7F73EE: mov     [esp+0E8h+var_B4], edi
0x7F73F2: mov     [esp+0E8h+var_AC], esi
0x7F73F6: call    sub_405760
0x7F73FB: mov     ecx, [eax]
0x7F73FD: mov     eax, [esp+0E4h+var_84]
0x7F7401: test    eax, eax
0x7F7403: mov     [esp+0E4h+var_C8], ecx
0x7F7407: jz      short loc_7F742B
0x7F7409: mov     [esp+0E4h+var_B8], eax
0x7F740D: add     eax, 4
0x7F7410: push    eax; lpAddend
0x7F7411: call    dword ptr ds:0A2807Ch
0x7F7417: test    eax, eax
0x7F7419: jnz     short loc_7F742B
0x7F741B: mov     ecx, [esp+0E4h+var_B8]
0x7F741F: test    ecx, ecx
0x7F7421: jz      short loc_7F742B
0x7F7423: mov     edx, [ecx]
0x7F7425: mov     eax, [edx]
0x7F7427: push    1
0x7F7429: call    eax
0x7F742B: cmp     [esp+0E4h+var_CC], esi
0x7F742F: mov     ecx, [esp+0E4h+var_C8]
0x7F7433: mov     edx, [ecx+18h]
0x7F7436: mov     [esp+0E4h+var_B8], edx
0x7F743A: jz      loc_7F756B
0x7F7440: cmp     [esp+0E4h+var_CD], 0
0x7F7445: jz      short loc_7F746A
0x7F7447: mov     eax, [esp+0E4h+var_94]
0x7F744B: mov     ecx, [esp+0E4h+var_98]
0x7F744F: mov     edx, [esp+0E4h+arg_4]
0x7F7456: push    ebx
0x7F7457: push    eax
0x7F7458: push    ecx
0x7F7459: mov     ecx, [esp+0F0h+var_C4]
0x7F745D: push    0
0x7F745F: push    edx
0x7F7460: call    sub_7F68C0
0x7F7465: mov     [esp+0E4h+var_CD], 0
0x7F746A: mov     ecx, [esp+0E4h+var_C4]
0x7F746E: push    ebp
0x7F746F: call    sub_7F6A30
0x7F7474: mov     eax, [esi+38h]
0x7F7477: lea     esi, [ebp+64h]
0x7F747A: mov     ecx, 0Dh
0x7F747F: lea     edi, [esp+0E4h+var_80]
0x7F7483: rep movsd
0x7F7485: mov     ecx, [ebp+20h]
0x7F7488: mov     esi, [esp+0E4h+var_B8]
0x7F748C: mov     edi, [esp+0E4h+var_C4]
0x7F7490: mov     [esp+0E4h+var_A8], ecx
0x7F7494: mov     edx, [ebp+24h]
0x7F7497: mov     [esp+0E4h+var_A4], edx
0x7F749B: mov     edx, [esp+0E4h+var_BC]
0x7F749F: mov     [esp+0E4h+var_CC], eax
0x7F74A3: mov     eax, [ebp+28h]
0x7F74A6: push    edx
0x7F74A7: mov     [esp+0E8h+var_A0], eax
0x7F74AB: mov     ecx, [ebp+2Ch]
0x7F74AE: mov     eax, [esp+0E8h+var_B4]
0x7F74B2: push    esi
0x7F74B3: mov     [esp+0ECh+var_9C], ecx
0x7F74B7: mov     ecx, [esp+0ECh+arg_4]
0x7F74BE: push    eax
0x7F74BF: push    ecx
0x7F74C0: mov     ecx, edi
0x7F74C2: call    sub_7F60F0
0x7F74C7: mov     edx, [esp+0E4h+arg_4]
0x7F74CE: push    ebx
0x7F74CF: push    esi
0x7F74D0: mov     esi, [esp+0ECh+var_C8]
0x7F74D4: push    esi
0x7F74D5: push    edx
0x7F74D6: push    ebp
0x7F74D7: mov     ecx, edi
0x7F74D9: call    sub_7F6150
0x7F74DE: lea     eax, [esp+0E4h+var_8C]
0x7F74E2: push    eax
0x7F74E3: mov     ecx, ebp
0x7F74E5: call    sub_7016D0
0x7F74EA: mov     eax, [eax]
0x7F74EC: mov     edx, [ebx]
0x7F74EE: mov     edx, [edx+34h]
0x7F74F1: lea     ecx, [esp+0E4h+var_A8]
0x7F74F5: push    ecx
0x7F74F6: lea     ecx, [esp+0E8h+var_80]
0x7F74FA: push    ecx
0x7F74FB: push    eax
0x7F74FC: mov     eax, [esp+0F0h+var_CC]
0x7F7500: push    esi
0x7F7501: push    eax
0x7F7502: push    0
0x7F7504: push    0
0x7F7506: push    ebp
0x7F7507: mov     ecx, ebx
0x7F7509: mov     [esp+104h+var_4], 5
0x7F7514: call    edx
0x7F7516: mov     eax, [esp+0E4h+var_8C]
0x7F751A: test    eax, eax
0x7F751C: mov     [esp+0E4h+var_4], 0FFFFFFFFh
0x7F7527: jz      short loc_7F754B
0x7F7529: mov     [esp+0E4h+var_BC], eax
0x7F752D: add     eax, 4
0x7F7530: push    eax; lpAddend
0x7F7531: call    dword ptr ds:0A2807Ch
0x7F7537: test    eax, eax
0x7F7539: jnz     short loc_7F754B
0x7F753B: mov     ecx, [esp+0E4h+var_BC]
0x7F753F: test    ecx, ecx
0x7F7541: jz      short loc_7F754B
0x7F7543: mov     eax, [ecx]
0x7F7545: mov     edx, [eax]
0x7F7547: push    1
0x7F7549: call    edx
0x7F754B: mov     ecx, [esp+0E4h+var_CC]
0x7F754F: mov     eax, [ebx]
0x7F7551: mov     edx, [eax+3Ch]
0x7F7554: push    esi
0x7F7555: push    ecx
0x7F7556: push    0
0x7F7558: push    ebp
0x7F7559: mov     ecx, ebx
0x7F755B: call    edx
0x7F755D: mov     eax, [esp+0E4h+var_C0]
0x7F7561: push    0
0x7F7563: push    eax
0x7F7564: mov     ecx, edi
0x7F7566: jmp     loc_7F7608
0x7F756B: cmp     [esp+0E4h+var_CD], 0
0x7F7570: mov     esi, [esp+0E4h+var_C4]
0x7F7574: jnz     short loc_7F7597
0x7F7576: mov     ecx, [esp+0E4h+var_94]
0x7F757A: mov     edx, [esp+0E4h+var_98]
0x7F757E: mov     eax, [esp+0E4h+arg_4]
0x7F7585: push    ebx
0x7F7586: push    ecx
0x7F7587: push    edx
0x7F7588: push    1
0x7F758A: push    eax
0x7F758B: mov     ecx, esi
0x7F758D: call    sub_7F68C0
0x7F7592: mov     [esp+0E4h+var_CD], 1
0x7F7597: mov     ecx, [esp+0E4h+var_BC]
0x7F759B: mov     edx, [esp+0E4h+var_B8]
0x7F759F: push    ecx
0x7F75A0: push    edx
0x7F75A1: push    edi
0x7F75A2: mov     edi, [esp+0F0h+arg_4]
0x7F75A9: push    edi
0x7F75AA: mov     ecx, esi
0x7F75AC: call    sub_7F60F0
0x7F75B1: mov     eax, [esp+0E4h+var_B8]
0x7F75B5: mov     ecx, [esp+0E4h+var_C8]
0x7F75B9: push    ebx
0x7F75BA: push    eax
0x7F75BB: push    ecx
0x7F75BC: push    edi
0x7F75BD: push    ebp
0x7F75BE: mov     ecx, esi
0x7F75C0: call    sub_7F6150
0x7F75C5: lea     edx, [esp+0E4h+var_4C]
0x7F75CC: push    edx
0x7F75CD: lea     eax, [esp+0E8h+var_80]
0x7F75D1: push    eax
0x7F75D2: mov     ecx, esi
0x7F75D4: call    sub_7F5B80
0x7F75D9: fld     [esp+0E4h+var_50]
0x7F75E0: mov     ecx, [ebp+0B8h]
0x7F75E6: mov     edx, [esp+0E4h+var_88]
0x7F75EA: push    ecx; int
0x7F75EB: push    edx; int
0x7F75EC: push    ecx
0x7F75ED: lea     eax, [esp+0F0h+var_4C]
0x7F75F4: fstp    [esp+0F0h+var_F0]; float
0x7F75F7: push    eax; int
0x7F75F8: mov     ecx, ebx
0x7F75FA: call    sub_7C9140
0x7F75FF: mov     ecx, [esp+0E4h+var_C0]
0x7F7603: push    0
0x7F7605: push    ecx
0x7F7606: mov     ecx, esi
0x7F7608: push    ebx
0x7F7609: push    ebp
0x7F760A: call    sub_7F6BF0
0x7F760F: cmp     [esp+0E4h+var_B0], 0
0x7F7614: mov     edx, [esp+0E4h+var_AC]
0x7F7618: mov     [esp+0E4h+var_CC], edx
0x7F761C: jnz     loc_7F73B0
0x7F7622: xor     edi, edi
0x7F7624: mov     esi, [esp+0E4h+arg_0]
0x7F762B: mov     ecx, esi
0x7F762D: call    sub_7A9C30
0x7F7632: mov     eax, [esi+4]
0x7F7635: mov     [esi+0Ch], eax
0x7F7638: mov     [esi+4], edi
0x7F763B: mov     [esi+8], edi
0x7F763E: mov     [esi+10h], edi
0x7F7641: mov     edx, [ebx]
0x7F7643: mov     eax, [edx+4Ch]
0x7F7646: mov     ecx, ebx
0x7F7648: call    eax
0x7F764A: mov     ecx, [esp+0E4h+var_90]
0x7F764E: mov     ecx, [ecx+8ACh]
0x7F7654: mov     edx, [ecx]
0x7F7656: mov     eax, [edx+0FCh]
0x7F765C: push    edi
0x7F765D: call    eax
0x7F765F: mov     ecx, dword ptr [esp+0E4h+var_C]
0x7F7666: mov     large fs:0, ecx
0x7F766D: pop     ecx
0x7F766E: pop     edi
0x7F766F: pop     esi
0x7F7670: pop     ebp
0x7F7671: pop     ebx
0x7F7672: add     esp, 0D0h
0x7F7678: retn    8
