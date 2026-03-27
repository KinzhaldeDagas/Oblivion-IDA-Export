0x7E7F70: push    0FFFFFFFFh
0x7E7F72: push    offset SEH_7E7F70
0x7E7F77: mov     eax, large fs:0
0x7E7F7D: push    eax
0x7E7F7E: sub     esp, 8
0x7E7F81: push    ebx
0x7E7F82: push    ebp
0x7E7F83: push    esi
0x7E7F84: push    edi
0x7E7F85: mov     eax, ds:0B30AACh
0x7E7F8A: xor     eax, esp
0x7E7F8C: push    eax
0x7E7F8D: lea     eax, [esp+28h+var_C]
0x7E7F91: mov     large fs:0, eax
0x7E7F97: mov     esi, ecx
0x7E7F99: lea     eax, [esp+28h+a3]
0x7E7F9D: push    eax
0x7E7F9E: call    sub_772630
0x7E7FA3: mov     ecx, [esp+2Ch+a3]
0x7E7FA7: push    2
0x7E7FA9: push    3
0x7E7FAB: push    0
0x7E7FAD: push    ecx
0x7E7FAE: mov     [esp+3Ch+var_4], 0
0x7E7FB6: call    sub_801110
0x7E7FBB: mov     ecx, [esi+7Ch]; this
0x7E7FBE: mov     edx, [esp+3Ch+a3]
0x7E7FC2: mov     eax, [ecx+14h]
0x7E7FC5: add     esp, 14h
0x7E7FC8: push    edx; a3
0x7E7FC9: push    eax; a2
0x7E7FCA: call    sub_760010
0x7E7FCF: lea     ecx, [esp+28h+var_10]
0x7E7FD3: push    ecx
0x7E7FD4: call    sub_772630
0x7E7FD9: add     esp, 4
0x7E7FDC: mov     edi, eax
0x7E7FDE: mov     eax, [esp+28h+a3]
0x7E7FE2: cmp     eax, [edi]
0x7E7FE4: mov     ebx, 1
0x7E7FE9: mov     byte ptr [esp+28h+var_4], bl
0x7E7FED: jz      short loc_7E8017
0x7E7FEF: test    eax, eax
0x7E7FF1: jz      short loc_7E8006
0x7E7FF3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E7FF7: mov     ecx, eax
0x7E7FF9: add     eax, 5Ch ; '\'
0x7E7FFC: cmp     dword ptr [eax], 0
0x7E7FFF: jnz     short loc_7E8006
0x7E8001: call    sub_772560
0x7E8006: mov     eax, [edi]
0x7E8008: test    eax, eax
0x7E800A: mov     [esp+28h+a3], eax
0x7E800E: jz      short loc_7E8017
0x7E8010: add     [eax+5Ch], ebx
0x7E8013: mov     eax, [esp+28h+a3]
0x7E8017: mov     ecx, [esp+28h+var_10]
0x7E801B: test    ecx, ecx
0x7E801D: mov     byte ptr [esp+28h+var_4], 0
0x7E8022: jz      short loc_7E803A
0x7E8024: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E8028: cmp     dword ptr [ecx+5Ch], 0
0x7E802C: lea     eax, [ecx+5Ch]
0x7E802F: jnz     short loc_7E8036
0x7E8031: call    sub_772560
0x7E8036: mov     eax, [esp+28h+a3]
0x7E803A: push    2
0x7E803C: push    ebx
0x7E803D: push    ebx
0x7E803E: push    eax
0x7E803F: call    sub_801110
0x7E8044: mov     ecx, [esi+7Ch]; this
0x7E8047: mov     edx, [esp+38h+a3]
0x7E804B: mov     eax, [ecx+14h]
0x7E804E: add     esp, 10h
0x7E8051: push    edx; a3
0x7E8052: push    eax; a2
0x7E8053: call    sub_760010
0x7E8058: lea     ecx, [esp+28h+var_10]
0x7E805C: push    ecx
0x7E805D: call    sub_772630
0x7E8062: add     esp, 4
0x7E8065: mov     edi, eax
0x7E8067: mov     eax, [esp+28h+a3]
0x7E806B: cmp     eax, [edi]
0x7E806D: mov     byte ptr [esp+28h+var_4], 2
0x7E8072: jz      short loc_7E809C
0x7E8074: test    eax, eax
0x7E8076: jz      short loc_7E808B
0x7E8078: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E807C: mov     ecx, eax
0x7E807E: add     eax, 5Ch ; '\'
0x7E8081: cmp     dword ptr [eax], 0
0x7E8084: jnz     short loc_7E808B
0x7E8086: call    sub_772560
0x7E808B: mov     eax, [edi]
0x7E808D: test    eax, eax
0x7E808F: mov     [esp+28h+a3], eax
0x7E8093: jz      short loc_7E809C
0x7E8095: add     [eax+5Ch], ebx
0x7E8098: mov     eax, [esp+28h+a3]
0x7E809C: mov     ecx, [esp+28h+var_10]
0x7E80A0: test    ecx, ecx
0x7E80A2: mov     byte ptr [esp+28h+var_4], 0
0x7E80A7: jz      short loc_7E80BF
0x7E80A9: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E80AD: cmp     dword ptr [ecx+5Ch], 0
0x7E80B1: lea     eax, [ecx+5Ch]
0x7E80B4: jnz     short loc_7E80BB
0x7E80B6: call    sub_772560
0x7E80BB: mov     eax, [esp+28h+a3]
0x7E80BF: push    2
0x7E80C1: push    ebx
0x7E80C2: push    2
0x7E80C4: push    eax
0x7E80C5: call    sub_801110
0x7E80CA: mov     ecx, [esi+7Ch]; this
0x7E80CD: mov     edx, [esp+38h+a3]
0x7E80D1: mov     eax, [ecx+14h]
0x7E80D4: add     esp, 10h
0x7E80D7: push    edx; a3
0x7E80D8: push    eax; a2
0x7E80D9: call    sub_760010
0x7E80DE: mov     edi, [esi+7Ch]
0x7E80E1: cmp     dword ptr [edi+30h], 0
0x7E80E5: jnz     short loc_7E80EF
0x7E80E7: call    sub_772DF0
0x7E80EC: mov     [edi+30h], eax
0x7E80EF: mov     ecx, [edi+30h]
0x7E80F2: push    0
0x7E80F4: push    0
0x7E80F6: push    1Bh
0x7E80F8: call    sub_772CD0
0x7E80FD: cmp     dword ptr ds:0B42F48h, 2
0x7E8104: mov     edi, [esi+7Ch]
0x7E8107: jl      loc_7E81C5
0x7E810D: cmp     dword ptr [edi+30h], 0
0x7E8111: jnz     short loc_7E811B
0x7E8113: call    sub_772DF0
0x7E8118: mov     [edi+30h], eax
0x7E811B: mov     ecx, [edi+30h]
0x7E811E: push    0
0x7E8120: push    ebx
0x7E8121: push    0Fh
0x7E8123: call    sub_772CD0
0x7E8128: mov     edi, [esi+7Ch]
0x7E812B: cmp     dword ptr [edi+30h], 0
0x7E812F: jnz     short loc_7E8139
0x7E8131: call    sub_772DF0
0x7E8136: mov     [edi+30h], eax
0x7E8139: mov     ecx, [edi+30h]
0x7E813C: push    0
0x7E813E: push    5
0x7E8140: push    19h
0x7E8142: call    sub_772CD0
0x7E8147: mov     edi, [esi+7Ch]
0x7E814A: cmp     dword ptr [edi+30h], 0
0x7E814E: jnz     short loc_7E8158
0x7E8150: call    sub_772DF0
0x7E8155: mov     [edi+30h], eax
0x7E8158: mov     ecx, [edi+30h]
0x7E815B: push    0
0x7E815D: push    0Ah
0x7E815F: push    18h
0x7E8161: call    sub_772CD0
0x7E8166: cmp     byte ptr ds:0B43070h, 0
0x7E816D: jz      short loc_7E81E1
0x7E816F: mov     edi, [esi+7Ch]
0x7E8172: cmp     dword ptr [edi+30h], 0
0x7E8176: jnz     short loc_7E8180
0x7E8178: call    sub_772DF0
0x7E817D: mov     [edi+30h], eax
0x7E8180: mov     ecx, [edi+30h]
0x7E8183: push    0
0x7E8185: push    ebx
0x7E8186: push    1Bh
0x7E8188: call    sub_772CD0
0x7E818D: mov     edi, [esi+7Ch]
0x7E8190: cmp     dword ptr [edi+30h], 0
0x7E8194: jnz     short loc_7E819E
0x7E8196: call    sub_772DF0
0x7E819B: mov     [edi+30h], eax
0x7E819E: mov     ecx, [edi+30h]
0x7E81A1: push    0
0x7E81A3: push    5
0x7E81A5: push    13h
0x7E81A7: call    sub_772CD0
0x7E81AC: mov     edi, [esi+7Ch]
0x7E81AF: cmp     dword ptr [edi+30h], 0
0x7E81B3: jnz     short loc_7E81BD
0x7E81B5: call    sub_772DF0
0x7E81BA: mov     [edi+30h], eax
0x7E81BD: push    0
0x7E81BF: push    6
0x7E81C1: push    14h
0x7E81C3: jmp     short loc_7E81D9
0x7E81C5: cmp     dword ptr [edi+30h], 0
0x7E81C9: jnz     short loc_7E81D3
0x7E81CB: call    sub_772DF0
0x7E81D0: mov     [edi+30h], eax
0x7E81D3: push    0
0x7E81D5: push    0
0x7E81D7: push    0Fh
0x7E81D9: mov     ecx, [edi+30h]
0x7E81DC: call    sub_772CD0
0x7E81E1: mov     edi, [esi+7Ch]
0x7E81E4: cmp     dword ptr [edi+30h], 0
0x7E81E8: jnz     short loc_7E81F2
0x7E81EA: call    sub_772DF0
0x7E81EF: mov     [edi+30h], eax
0x7E81F2: mov     ecx, [edi+30h]
0x7E81F5: push    0
0x7E81F7: push    ebx
0x7E81F8: push    7
0x7E81FA: call    sub_772CD0
0x7E81FF: mov     edi, [esi+7Ch]
0x7E8202: cmp     dword ptr [edi+30h], 0
0x7E8206: jnz     short loc_7E8210
0x7E8208: call    sub_772DF0
0x7E820D: mov     [edi+30h], eax
0x7E8210: mov     ecx, [edi+30h]
0x7E8213: push    0
0x7E8215: push    4
0x7E8217: push    17h
0x7E8219: call    sub_772CD0
0x7E821E: mov     edi, [esi+7Ch]
0x7E8221: cmp     dword ptr [edi+30h], 0
0x7E8225: jnz     short loc_7E822F
0x7E8227: call    sub_772DF0
0x7E822C: mov     [edi+30h], eax
0x7E822F: mov     ecx, [edi+30h]
0x7E8232: push    0
0x7E8234: push    ebx
0x7E8235: push    0Eh
0x7E8237: call    sub_772CD0
0x7E823C: mov     edi, [esi+7Ch]
0x7E823F: cmp     dword ptr [edi+30h], 0
0x7E8243: jnz     short loc_7E824D
0x7E8245: call    sub_772DF0
0x7E824A: mov     [edi+30h], eax
0x7E824D: mov     ecx, [edi+30h]
0x7E8250: push    0
0x7E8252: push    7
0x7E8254: push    0A8h ; '¨'
0x7E8259: call    sub_772CD0
0x7E825E: mov     edi, [esi+7Ch]
0x7E8261: cmp     dword ptr [edi+30h], 0
0x7E8265: jnz     short loc_7E826F
0x7E8267: call    sub_772DF0
0x7E826C: mov     [edi+30h], eax
0x7E826F: mov     ecx, [edi+30h]
0x7E8272: push    0
0x7E8274: push    0
0x7E8276: push    1Ch
0x7E8278: call    sub_772CD0
0x7E827D: mov     ebx, [esi+7Ch]
0x7E8280: mov     ebp, [esi+94h]
0x7E8286: mov     edi, [ebx+58h]
0x7E8289: cmp     edi, ebp
0x7E828B: jz      short loc_7E82BE
0x7E828D: test    edi, edi
0x7E828F: jz      short loc_7E82AD
0x7E8291: lea     ecx, [edi+4]
0x7E8294: push    ecx; lpAddend
0x7E8295: call    dword ptr ds:0A2807Ch
0x7E829B: test    eax, eax
0x7E829D: jnz     short loc_7E82AD
0x7E829F: test    edi, edi
0x7E82A1: jz      short loc_7E82AD
0x7E82A3: mov     edx, [edi]
0x7E82A5: mov     eax, [edx]
0x7E82A7: push    1
0x7E82A9: mov     ecx, edi
0x7E82AB: call    eax
0x7E82AD: test    ebp, ebp
0x7E82AF: mov     [ebx+58h], ebp
0x7E82B2: jz      short loc_7E82BE
0x7E82B4: add     ebp, 4
0x7E82B7: push    ebp; lpAddend
0x7E82B8: call    dword ptr ds:0A28078h
0x7E82BE: mov     ebp, [esi+7Ch]
0x7E82C1: mov     ebx, [esi+134h]
0x7E82C7: mov     edi, [ebp+44h]
0x7E82CA: cmp     edi, ebx
0x7E82CC: jz      short loc_7E82FF
0x7E82CE: test    edi, edi
0x7E82D0: jz      short loc_7E82EE
0x7E82D2: lea     ecx, [edi+4]
0x7E82D5: push    ecx; lpAddend
0x7E82D6: call    dword ptr ds:0A2807Ch
0x7E82DC: test    eax, eax
0x7E82DE: jnz     short loc_7E82EE
0x7E82E0: test    edi, edi
0x7E82E2: jz      short loc_7E82EE
0x7E82E4: mov     edx, [edi]
0x7E82E6: mov     eax, [edx]
0x7E82E8: push    1
0x7E82EA: mov     ecx, edi
0x7E82EC: call    eax
0x7E82EE: test    ebx, ebx
0x7E82F0: mov     [ebp+44h], ebx
0x7E82F3: jz      short loc_7E82FF
0x7E82F5: add     ebx, 4
0x7E82F8: push    ebx; lpAddend
0x7E82F9: call    dword ptr ds:0A28078h
0x7E82FF: lea     ecx, [esp+28h+var_10]
0x7E8303: push    ecx
0x7E8304: call    sub_772630
0x7E8309: add     esp, 4
0x7E830C: mov     edi, eax
0x7E830E: mov     eax, [esp+28h+a3]
0x7E8312: cmp     eax, [edi]
0x7E8314: mov     byte ptr [esp+28h+var_4], 3
0x7E8319: jz      short loc_7E834A
0x7E831B: test    eax, eax
0x7E831D: jz      short loc_7E8332
0x7E831F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E8323: mov     ecx, eax
0x7E8325: add     eax, 5Ch ; '\'
0x7E8328: cmp     dword ptr [eax], 0
0x7E832B: jnz     short loc_7E8332
0x7E832D: call    sub_772560
0x7E8332: mov     eax, [edi]
0x7E8334: test    eax, eax
0x7E8336: mov     [esp+28h+a3], eax
0x7E833A: mov     ebp, 1
0x7E833F: jz      short loc_7E834F
0x7E8341: add     [eax+5Ch], ebp
0x7E8344: mov     eax, [esp+28h+a3]
0x7E8348: jmp     short loc_7E834F
0x7E834A: mov     ebp, 1
0x7E834F: mov     ecx, [esp+28h+var_10]
0x7E8353: test    ecx, ecx
0x7E8355: mov     byte ptr [esp+28h+var_4], 0
0x7E835A: jz      short loc_7E8372
0x7E835C: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E8360: cmp     dword ptr [ecx+5Ch], 0
0x7E8364: lea     eax, [ecx+5Ch]
0x7E8367: jnz     short loc_7E836E
0x7E8369: call    sub_772560
0x7E836E: mov     eax, [esp+28h+a3]
0x7E8372: mov     ebx, 2
0x7E8377: push    ebx
0x7E8378: push    3
0x7E837A: push    0
0x7E837C: push    eax
0x7E837D: call    sub_801110
0x7E8382: mov     ecx, [esi+80h]; this
0x7E8388: mov     edx, [esp+38h+a3]
0x7E838C: mov     eax, [ecx+14h]
0x7E838F: add     esp, 10h
0x7E8392: push    edx; a3
0x7E8393: push    eax; a2
0x7E8394: call    sub_760010
0x7E8399: cmp     ds:0B42F48h, ebx
0x7E839F: lea     ecx, [esp+28h+var_10]
0x7E83A3: push    ecx
0x7E83A4: jl      loc_7E8524
0x7E83AA: call    sub_772630
0x7E83AF: add     esp, 4
0x7E83B2: mov     edi, eax
0x7E83B4: mov     eax, [esp+28h+a3]
0x7E83B8: cmp     eax, [edi]
0x7E83BA: mov     byte ptr [esp+28h+var_4], 4
0x7E83BF: jz      short loc_7E83E9
0x7E83C1: test    eax, eax
0x7E83C3: jz      short loc_7E83D8
0x7E83C5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E83C9: mov     ecx, eax
0x7E83CB: add     eax, 5Ch ; '\'
0x7E83CE: cmp     dword ptr [eax], 0
0x7E83D1: jnz     short loc_7E83D8
0x7E83D3: call    sub_772560
0x7E83D8: mov     eax, [edi]
0x7E83DA: test    eax, eax
0x7E83DC: mov     [esp+28h+a3], eax
0x7E83E0: jz      short loc_7E83E9
0x7E83E2: add     [eax+5Ch], ebp
0x7E83E5: mov     eax, [esp+28h+a3]
0x7E83E9: mov     ecx, [esp+28h+var_10]
0x7E83ED: test    ecx, ecx
0x7E83EF: mov     byte ptr [esp+28h+var_4], 0
0x7E83F4: jz      short loc_7E840C
0x7E83F6: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E83FA: cmp     dword ptr [ecx+5Ch], 0
0x7E83FE: lea     eax, [ecx+5Ch]
0x7E8401: jnz     short loc_7E8408
0x7E8403: call    sub_772560
0x7E8408: mov     eax, [esp+28h+a3]
0x7E840C: push    ebx
0x7E840D: push    3
0x7E840F: push    ebp
0x7E8410: push    eax
0x7E8411: call    sub_801110
0x7E8416: mov     ecx, [esi+80h]; this
0x7E841C: mov     edx, [esp+38h+a3]
0x7E8420: mov     eax, [ecx+14h]
0x7E8423: add     esp, 10h
0x7E8426: push    edx; a3
0x7E8427: push    eax; a2
0x7E8428: call    sub_760010
0x7E842D: lea     ecx, [esp+28h+var_10]
0x7E8431: push    ecx
0x7E8432: call    sub_772630
0x7E8437: add     esp, 4
0x7E843A: mov     edi, eax
0x7E843C: mov     eax, [esp+28h+a3]
0x7E8440: cmp     eax, [edi]
0x7E8442: mov     byte ptr [esp+28h+var_4], 5
0x7E8447: jz      short loc_7E8471
0x7E8449: test    eax, eax
0x7E844B: jz      short loc_7E8460
0x7E844D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E8451: mov     ecx, eax
0x7E8453: add     eax, 5Ch ; '\'
0x7E8456: cmp     dword ptr [eax], 0
0x7E8459: jnz     short loc_7E8460
0x7E845B: call    sub_772560
0x7E8460: mov     eax, [edi]
0x7E8462: test    eax, eax
0x7E8464: mov     [esp+28h+a3], eax
0x7E8468: jz      short loc_7E8471
0x7E846A: add     [eax+5Ch], ebp
0x7E846D: mov     eax, [esp+28h+a3]
0x7E8471: mov     ecx, [esp+28h+var_10]
0x7E8475: test    ecx, ecx
0x7E8477: mov     byte ptr [esp+28h+var_4], 0
0x7E847C: jz      short loc_7E8494
0x7E847E: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E8482: cmp     dword ptr [ecx+5Ch], 0
0x7E8486: lea     eax, [ecx+5Ch]
0x7E8489: jnz     short loc_7E8490
0x7E848B: call    sub_772560
0x7E8490: mov     eax, [esp+28h+a3]
0x7E8494: push    ebx
0x7E8495: push    ebp
0x7E8496: push    ebx
0x7E8497: push    eax
0x7E8498: call    sub_801110
0x7E849D: mov     ecx, [esi+80h]; this
0x7E84A3: mov     edx, [esp+38h+a3]
0x7E84A7: mov     eax, [ecx+14h]
0x7E84AA: add     esp, 10h
0x7E84AD: push    edx; a3
0x7E84AE: push    eax; a2
0x7E84AF: call    sub_760010
0x7E84B4: lea     ecx, [esp+28h+var_10]
0x7E84B8: push    ecx
0x7E84B9: call    sub_772630
0x7E84BE: add     esp, 4
0x7E84C1: mov     edi, eax
0x7E84C3: mov     eax, [esp+28h+a3]
0x7E84C7: cmp     eax, [edi]
0x7E84C9: mov     byte ptr [esp+28h+var_4], 6
0x7E84CE: jz      short loc_7E84F8
0x7E84D0: test    eax, eax
0x7E84D2: jz      short loc_7E84E7
0x7E84D4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E84D8: mov     ecx, eax
0x7E84DA: add     eax, 5Ch ; '\'
0x7E84DD: cmp     dword ptr [eax], 0
0x7E84E0: jnz     short loc_7E84E7
0x7E84E2: call    sub_772560
0x7E84E7: mov     eax, [edi]
0x7E84E9: test    eax, eax
0x7E84EB: mov     [esp+28h+a3], eax
0x7E84EF: jz      short loc_7E84F8
0x7E84F1: add     [eax+5Ch], ebp
0x7E84F4: mov     eax, [esp+28h+a3]
0x7E84F8: mov     ecx, [esp+28h+var_10]
0x7E84FC: test    ecx, ecx
0x7E84FE: mov     byte ptr [esp+28h+var_4], 0
0x7E8503: jz      short loc_7E851B
0x7E8505: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E8509: cmp     dword ptr [ecx+5Ch], 0
0x7E850D: lea     eax, [ecx+5Ch]
0x7E8510: jnz     short loc_7E8517
0x7E8512: call    sub_772560
0x7E8517: mov     eax, [esp+28h+a3]
0x7E851B: push    ebx
0x7E851C: push    ebp
0x7E851D: push    3
0x7E851F: jmp     loc_7E8612
0x7E8524: call    sub_772630
0x7E8529: add     esp, 4
0x7E852C: mov     edi, eax
0x7E852E: mov     eax, [esp+28h+a3]
0x7E8532: cmp     eax, [edi]
0x7E8534: mov     byte ptr [esp+28h+var_4], 7
0x7E8539: jz      short loc_7E8563
0x7E853B: test    eax, eax
0x7E853D: jz      short loc_7E8552
0x7E853F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E8543: mov     ecx, eax
0x7E8545: add     eax, 5Ch ; '\'
0x7E8548: cmp     dword ptr [eax], 0
0x7E854B: jnz     short loc_7E8552
0x7E854D: call    sub_772560
0x7E8552: mov     eax, [edi]
0x7E8554: test    eax, eax
0x7E8556: mov     [esp+28h+a3], eax
0x7E855A: jz      short loc_7E8563
0x7E855C: add     [eax+5Ch], ebp
0x7E855F: mov     eax, [esp+28h+a3]
0x7E8563: mov     ecx, [esp+28h+var_10]
0x7E8567: test    ecx, ecx
0x7E8569: mov     byte ptr [esp+28h+var_4], 0
0x7E856E: jz      short loc_7E8586
0x7E8570: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E8574: cmp     dword ptr [ecx+5Ch], 0
0x7E8578: lea     eax, [ecx+5Ch]
0x7E857B: jnz     short loc_7E8582
0x7E857D: call    sub_772560
0x7E8582: mov     eax, [esp+28h+a3]
0x7E8586: push    ebx
0x7E8587: push    3
0x7E8589: push    ebp
0x7E858A: push    eax
0x7E858B: call    sub_801110
0x7E8590: mov     ecx, [esi+80h]; this
0x7E8596: mov     edx, [esp+38h+a3]
0x7E859A: mov     eax, [ecx+14h]
0x7E859D: add     esp, 10h
0x7E85A0: push    edx; a3
0x7E85A1: push    eax; a2
0x7E85A2: call    sub_760010
0x7E85A7: lea     ecx, [esp+28h+var_10]
0x7E85AB: push    ecx
0x7E85AC: call    sub_772630
0x7E85B1: add     esp, 4
0x7E85B4: mov     edi, eax
0x7E85B6: mov     eax, [esp+28h+a3]
0x7E85BA: cmp     eax, [edi]
0x7E85BC: mov     byte ptr [esp+28h+var_4], 8
0x7E85C1: jz      short loc_7E85EB
0x7E85C3: test    eax, eax
0x7E85C5: jz      short loc_7E85DA
0x7E85C7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E85CB: mov     ecx, eax
0x7E85CD: add     eax, 5Ch ; '\'
0x7E85D0: cmp     dword ptr [eax], 0
0x7E85D3: jnz     short loc_7E85DA
0x7E85D5: call    sub_772560
0x7E85DA: mov     eax, [edi]
0x7E85DC: test    eax, eax
0x7E85DE: mov     [esp+28h+a3], eax
0x7E85E2: jz      short loc_7E85EB
0x7E85E4: add     [eax+5Ch], ebp
0x7E85E7: mov     eax, [esp+28h+a3]
0x7E85EB: mov     ecx, [esp+28h+var_10]
0x7E85EF: test    ecx, ecx
0x7E85F1: mov     byte ptr [esp+28h+var_4], 0
0x7E85F6: jz      short loc_7E860E
0x7E85F8: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E85FC: cmp     dword ptr [ecx+5Ch], 0
0x7E8600: lea     eax, [ecx+5Ch]
0x7E8603: jnz     short loc_7E860A
0x7E8605: call    sub_772560
0x7E860A: mov     eax, [esp+28h+a3]
0x7E860E: push    ebx
0x7E860F: push    3
0x7E8611: push    ebx
0x7E8612: push    eax
0x7E8613: call    sub_801110
0x7E8618: mov     edx, [esp+38h+a3]
0x7E861C: mov     ecx, [esi+80h]; this
0x7E8622: mov     eax, [ecx+14h]
0x7E8625: add     esp, 10h
0x7E8628: push    edx; a3
0x7E8629: push    eax; a2
0x7E862A: call    sub_760010
0x7E862F: mov     edi, [esi+80h]
0x7E8635: cmp     dword ptr [edi+30h], 0
0x7E8639: jnz     short loc_7E8643
0x7E863B: call    sub_772DF0
0x7E8640: mov     [edi+30h], eax
0x7E8643: mov     ecx, [edi+30h]
0x7E8646: push    0
0x7E8648: push    0
0x7E864A: push    1Bh
0x7E864C: call    sub_772CD0
0x7E8651: cmp     ds:0B42F48h, ebx
0x7E8657: mov     edi, [esi+80h]
0x7E865D: jl      loc_7E872A
0x7E8663: cmp     dword ptr [edi+30h], 0
0x7E8667: jnz     short loc_7E8671
0x7E8669: call    sub_772DF0
0x7E866E: mov     [edi+30h], eax
0x7E8671: mov     ecx, [edi+30h]
0x7E8674: push    0
0x7E8676: push    ebp
0x7E8677: push    0Fh
0x7E8679: call    sub_772CD0
0x7E867E: mov     edi, [esi+80h]
0x7E8684: cmp     dword ptr [edi+30h], 0
0x7E8688: jnz     short loc_7E8692
0x7E868A: call    sub_772DF0
0x7E868F: mov     [edi+30h], eax
0x7E8692: mov     ecx, [edi+30h]
0x7E8695: push    0
0x7E8697: push    5
0x7E8699: push    19h
0x7E869B: call    sub_772CD0
0x7E86A0: mov     edi, [esi+80h]
0x7E86A6: cmp     dword ptr [edi+30h], 0
0x7E86AA: jnz     short loc_7E86B4
0x7E86AC: call    sub_772DF0
0x7E86B1: mov     [edi+30h], eax
0x7E86B4: mov     ecx, [edi+30h]
0x7E86B7: push    0
0x7E86B9: push    0Ah
0x7E86BB: push    18h
0x7E86BD: call    sub_772CD0
0x7E86C2: cmp     byte ptr ds:0B43070h, 0
0x7E86C9: jz      short loc_7E8746
0x7E86CB: mov     edi, [esi+80h]
0x7E86D1: cmp     dword ptr [edi+30h], 0
0x7E86D5: jnz     short loc_7E86DF
0x7E86D7: call    sub_772DF0
0x7E86DC: mov     [edi+30h], eax
0x7E86DF: mov     ecx, [edi+30h]
0x7E86E2: push    0
0x7E86E4: push    ebp
0x7E86E5: push    1Bh
0x7E86E7: call    sub_772CD0
0x7E86EC: mov     edi, [esi+80h]
0x7E86F2: cmp     dword ptr [edi+30h], 0
0x7E86F6: jnz     short loc_7E8700
0x7E86F8: call    sub_772DF0
0x7E86FD: mov     [edi+30h], eax
0x7E8700: mov     ecx, [edi+30h]
0x7E8703: push    0
0x7E8705: push    5
0x7E8707: push    13h
0x7E8709: call    sub_772CD0
0x7E870E: mov     edi, [esi+80h]
0x7E8714: cmp     dword ptr [edi+30h], 0
0x7E8718: jnz     short loc_7E8722
0x7E871A: call    sub_772DF0
0x7E871F: mov     [edi+30h], eax
0x7E8722: push    0
0x7E8724: push    6
0x7E8726: push    14h
0x7E8728: jmp     short loc_7E873E
0x7E872A: cmp     dword ptr [edi+30h], 0
0x7E872E: jnz     short loc_7E8738
0x7E8730: call    sub_772DF0
0x7E8735: mov     [edi+30h], eax
0x7E8738: push    0
0x7E873A: push    0
0x7E873C: push    0Fh
0x7E873E: mov     ecx, [edi+30h]
0x7E8741: call    sub_772CD0
0x7E8746: mov     edi, [esi+80h]
0x7E874C: cmp     dword ptr [edi+30h], 0
0x7E8750: jnz     short loc_7E875A
0x7E8752: call    sub_772DF0
0x7E8757: mov     [edi+30h], eax
0x7E875A: mov     ecx, [edi+30h]
0x7E875D: push    0
0x7E875F: push    ebp
0x7E8760: push    7
0x7E8762: call    sub_772CD0
0x7E8767: mov     edi, [esi+80h]
0x7E876D: cmp     dword ptr [edi+30h], 0
0x7E8771: jnz     short loc_7E877B
0x7E8773: call    sub_772DF0
0x7E8778: mov     [edi+30h], eax
0x7E877B: mov     ecx, [edi+30h]
0x7E877E: push    0
0x7E8780: push    4
0x7E8782: push    17h
0x7E8784: call    sub_772CD0
0x7E8789: mov     edi, [esi+80h]
0x7E878F: cmp     dword ptr [edi+30h], 0
0x7E8793: jnz     short loc_7E879D
0x7E8795: call    sub_772DF0
0x7E879A: mov     [edi+30h], eax
0x7E879D: mov     ecx, [edi+30h]
0x7E87A0: push    0
0x7E87A2: push    ebp
0x7E87A3: push    0Eh
0x7E87A5: call    sub_772CD0
0x7E87AA: mov     edi, [esi+80h]
0x7E87B0: cmp     dword ptr [edi+30h], 0
0x7E87B4: jnz     short loc_7E87BE
0x7E87B6: call    sub_772DF0
0x7E87BB: mov     [edi+30h], eax
0x7E87BE: mov     ecx, [edi+30h]
0x7E87C1: push    0
0x7E87C3: push    7
0x7E87C5: push    0A8h ; '¨'
0x7E87CA: call    sub_772CD0
0x7E87CF: mov     edi, [esi+80h]
0x7E87D5: cmp     dword ptr [edi+30h], 0
0x7E87D9: jnz     short loc_7E87E3
0x7E87DB: call    sub_772DF0
0x7E87E0: mov     [edi+30h], eax
0x7E87E3: mov     ecx, [edi+30h]
0x7E87E6: push    0
0x7E87E8: push    0
0x7E87EA: push    1Ch
0x7E87EC: call    sub_772CD0
0x7E87F1: mov     ebx, [esi+80h]
0x7E87F7: mov     ebp, [esi+0A4h]
0x7E87FD: mov     edi, [ebx+58h]
0x7E8800: cmp     edi, ebp
0x7E8802: jz      short loc_7E8835
0x7E8804: test    edi, edi
0x7E8806: jz      short loc_7E8824
0x7E8808: lea     ecx, [edi+4]
0x7E880B: push    ecx; lpAddend
0x7E880C: call    dword ptr ds:0A2807Ch
0x7E8812: test    eax, eax
0x7E8814: jnz     short loc_7E8824
0x7E8816: test    edi, edi
0x7E8818: jz      short loc_7E8824
0x7E881A: mov     edx, [edi]
0x7E881C: mov     eax, [edx]
0x7E881E: push    1
0x7E8820: mov     ecx, edi
0x7E8822: call    eax
0x7E8824: test    ebp, ebp
0x7E8826: mov     [ebx+58h], ebp
0x7E8829: jz      short loc_7E8835
0x7E882B: add     ebp, 4
0x7E882E: push    ebp; lpAddend
0x7E882F: call    dword ptr ds:0A28078h
0x7E8835: mov     ebp, [esi+80h]
0x7E883B: mov     ebx, [esi+138h]
0x7E8841: mov     edi, [ebp+44h]
0x7E8844: cmp     edi, ebx
0x7E8846: jz      short loc_7E8879
0x7E8848: test    edi, edi
0x7E884A: jz      short loc_7E8868
0x7E884C: lea     ecx, [edi+4]
0x7E884F: push    ecx; lpAddend
0x7E8850: call    dword ptr ds:0A2807Ch
0x7E8856: test    eax, eax
0x7E8858: jnz     short loc_7E8868
0x7E885A: test    edi, edi
0x7E885C: jz      short loc_7E8868
0x7E885E: mov     edx, [edi]
0x7E8860: mov     eax, [edx]
0x7E8862: push    1
0x7E8864: mov     ecx, edi
0x7E8866: call    eax
0x7E8868: test    ebx, ebx
0x7E886A: mov     [ebp+44h], ebx
0x7E886D: jz      short loc_7E8879
0x7E886F: add     ebx, 4
0x7E8872: push    ebx; lpAddend
0x7E8873: call    dword ptr ds:0A28078h
0x7E8879: cmp     dword ptr ds:0B42F48h, 2
0x7E8880: jl      loc_7E8B3B
0x7E8886: lea     ecx, [esp+28h+var_10]
0x7E888A: push    ecx
0x7E888B: call    sub_772630
0x7E8890: add     esp, 4
0x7E8893: mov     edi, eax
0x7E8895: mov     eax, [esp+28h+a3]
0x7E8899: cmp     eax, [edi]
0x7E889B: mov     byte ptr [esp+28h+var_4], 9
0x7E88A0: jz      short loc_7E88CB
0x7E88A2: test    eax, eax
0x7E88A4: jz      short loc_7E88B9
0x7E88A6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E88AA: mov     ecx, eax
0x7E88AC: add     eax, 5Ch ; '\'
0x7E88AF: cmp     dword ptr [eax], 0
0x7E88B2: jnz     short loc_7E88B9
0x7E88B4: call    sub_772560
0x7E88B9: mov     eax, [edi]
0x7E88BB: test    eax, eax
0x7E88BD: mov     [esp+28h+a3], eax
0x7E88C1: jz      short loc_7E88CB
0x7E88C3: add     dword ptr [eax+5Ch], 1
0x7E88C7: mov     eax, [esp+28h+a3]
0x7E88CB: mov     ecx, [esp+28h+var_10]
0x7E88CF: test    ecx, ecx
0x7E88D1: mov     byte ptr [esp+28h+var_4], 0
0x7E88D6: jz      short loc_7E88EE
0x7E88D8: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E88DC: cmp     dword ptr [ecx+5Ch], 0
0x7E88E0: lea     eax, [ecx+5Ch]
0x7E88E3: jnz     short loc_7E88EA
0x7E88E5: call    sub_772560
0x7E88EA: mov     eax, [esp+28h+a3]
0x7E88EE: push    2
0x7E88F0: push    3
0x7E88F2: push    0
0x7E88F4: push    eax
0x7E88F5: call    sub_801110
0x7E88FA: mov     ecx, [esi+84h]; this
0x7E8900: mov     edx, [esp+38h+a3]
0x7E8904: mov     eax, [ecx+14h]
0x7E8907: add     esp, 10h
0x7E890A: push    edx; a3
0x7E890B: push    eax; a2
0x7E890C: call    sub_760010
0x7E8911: lea     ecx, [esp+28h+var_10]
0x7E8915: push    ecx
0x7E8916: call    sub_772630
0x7E891B: add     esp, 4
0x7E891E: mov     edi, eax
0x7E8920: mov     eax, [esp+28h+a3]
0x7E8924: cmp     eax, [edi]
0x7E8926: mov     byte ptr [esp+28h+var_4], 0Ah
0x7E892B: jz      short loc_7E8956
0x7E892D: test    eax, eax
0x7E892F: jz      short loc_7E8944
0x7E8931: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E8935: mov     ecx, eax
0x7E8937: add     eax, 5Ch ; '\'
0x7E893A: cmp     dword ptr [eax], 0
0x7E893D: jnz     short loc_7E8944
0x7E893F: call    sub_772560
0x7E8944: mov     eax, [edi]
0x7E8946: test    eax, eax
0x7E8948: mov     [esp+28h+a3], eax
0x7E894C: jz      short loc_7E8956
0x7E894E: add     dword ptr [eax+5Ch], 1
0x7E8952: mov     eax, [esp+28h+a3]
0x7E8956: mov     ecx, [esp+28h+var_10]
0x7E895A: test    ecx, ecx
0x7E895C: mov     byte ptr [esp+28h+var_4], 0
0x7E8961: jz      short loc_7E8979
0x7E8963: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7E8967: cmp     dword ptr [ecx+5Ch], 0
0x7E896B: lea     eax, [ecx+5Ch]
0x7E896E: jnz     short loc_7E8975
0x7E8970: call    sub_772560
0x7E8975: mov     eax, [esp+28h+a3]
0x7E8979: push    2
0x7E897B: push    3
0x7E897D: push    1
0x7E897F: push    eax
0x7E8980: call    sub_801110
0x7E8985: mov     ecx, [esi+84h]; this
0x7E898B: mov     edx, [esp+38h+a3]
0x7E898F: mov     eax, [ecx+14h]
0x7E8992: add     esp, 10h
0x7E8995: push    edx; a3
0x7E8996: push    eax; a2
0x7E8997: call    sub_760010
0x7E899C: mov     edi, [esi+84h]
0x7E89A2: cmp     dword ptr [edi+30h], 0
0x7E89A6: jnz     short loc_7E89B0
0x7E89A8: call    sub_772DF0
0x7E89AD: mov     [edi+30h], eax
0x7E89B0: mov     ecx, [edi+30h]
0x7E89B3: push    0
0x7E89B5: push    1
0x7E89B7: push    0Fh
0x7E89B9: call    sub_772CD0
0x7E89BE: mov     edi, [esi+84h]
0x7E89C4: cmp     dword ptr [edi+30h], 0
0x7E89C8: jnz     short loc_7E89D2
0x7E89CA: call    sub_772DF0
0x7E89CF: mov     [edi+30h], eax
0x7E89D2: mov     ecx, [edi+30h]
0x7E89D5: push    0
0x7E89D7: push    5
0x7E89D9: push    19h
0x7E89DB: call    sub_772CD0
0x7E89E0: mov     edi, [esi+84h]
0x7E89E6: cmp     dword ptr [edi+30h], 0
0x7E89EA: jnz     short loc_7E89F4
0x7E89EC: call    sub_772DF0
0x7E89F1: mov     [edi+30h], eax
0x7E89F4: mov     ecx, [edi+30h]
0x7E89F7: push    0
0x7E89F9: push    0Ah
0x7E89FB: push    18h
0x7E89FD: call    sub_772CD0
0x7E8A02: mov     edi, [esi+84h]
0x7E8A08: cmp     dword ptr [edi+30h], 0
0x7E8A0C: jnz     short loc_7E8A16
0x7E8A0E: call    sub_772DF0
0x7E8A13: mov     [edi+30h], eax
0x7E8A16: mov     ecx, [edi+30h]
0x7E8A19: push    0
0x7E8A1B: push    1
0x7E8A1D: push    1Bh
0x7E8A1F: call    sub_772CD0
0x7E8A24: mov     edi, [esi+84h]
0x7E8A2A: cmp     dword ptr [edi+30h], 0
0x7E8A2E: jnz     short loc_7E8A38
0x7E8A30: call    sub_772DF0
0x7E8A35: mov     [edi+30h], eax
0x7E8A38: mov     ecx, [edi+30h]
0x7E8A3B: push    0
0x7E8A3D: push    9
0x7E8A3F: push    13h
0x7E8A41: call    sub_772CD0
0x7E8A46: mov     edi, [esi+84h]
0x7E8A4C: cmp     dword ptr [edi+30h], 0
0x7E8A50: jnz     short loc_7E8A5A
0x7E8A52: call    sub_772DF0
0x7E8A57: mov     [edi+30h], eax
0x7E8A5A: mov     ecx, [edi+30h]
0x7E8A5D: push    0
0x7E8A5F: push    1
0x7E8A61: push    14h
0x7E8A63: call    sub_772CD0
0x7E8A68: mov     edi, [esi+84h]
0x7E8A6E: cmp     dword ptr [edi+30h], 0
0x7E8A72: jnz     short loc_7E8A7C
0x7E8A74: call    sub_772DF0
0x7E8A79: mov     [edi+30h], eax
0x7E8A7C: mov     ecx, [edi+30h]
0x7E8A7F: push    0
0x7E8A81: push    1
0x7E8A83: push    7
0x7E8A85: call    sub_772CD0
0x7E8A8A: mov     edi, [esi+84h]
0x7E8A90: cmp     dword ptr [edi+30h], 0
0x7E8A94: jnz     short loc_7E8A9E
0x7E8A96: call    sub_772DF0
0x7E8A9B: mov     [edi+30h], eax
0x7E8A9E: mov     ecx, [edi+30h]
0x7E8AA1: push    0
0x7E8AA3: push    4
0x7E8AA5: push    17h
0x7E8AA7: call    sub_772CD0
0x7E8AAC: mov     edi, [esi+84h]
0x7E8AB2: cmp     dword ptr [edi+30h], 0
0x7E8AB6: jnz     short loc_7E8AC0
0x7E8AB8: call    sub_772DF0
0x7E8ABD: mov     [edi+30h], eax
0x7E8AC0: mov     ecx, [edi+30h]
0x7E8AC3: push    0
0x7E8AC5: push    0
0x7E8AC7: push    0Eh
0x7E8AC9: call    sub_772CD0
0x7E8ACE: mov     edi, [esi+84h]
0x7E8AD4: cmp     dword ptr [edi+30h], 0
0x7E8AD8: jnz     short loc_7E8AE2
0x7E8ADA: call    sub_772DF0
0x7E8ADF: mov     [edi+30h], eax
0x7E8AE2: mov     ecx, [edi+30h]
0x7E8AE5: push    0
0x7E8AE7: push    7
0x7E8AE9: push    0A8h ; '¨'
0x7E8AEE: call    sub_772CD0
0x7E8AF3: mov     edi, [esi+84h]
0x7E8AF9: cmp     dword ptr [edi+30h], 0
0x7E8AFD: jnz     short loc_7E8B07
0x7E8AFF: call    sub_772DF0
0x7E8B04: mov     [edi+30h], eax
0x7E8B07: mov     ecx, [edi+30h]
0x7E8B0A: push    0
0x7E8B0C: push    0
0x7E8B0E: push    1Ch
0x7E8B10: call    sub_772CD0
0x7E8B15: mov     eax, [esi+134h]
0x7E8B1B: mov     ecx, [esi+84h]; this
0x7E8B21: push    eax; a2
0x7E8B22: call    sub_7AECB0
0x7E8B27: mov     eax, [esi+14Ch]
0x7E8B2D: mov     esi, [esi+84h]
0x7E8B33: push    eax; a2
0x7E8B34: mov     ecx, esi; this
0x7E8B36: call    sub_7AEC60
0x7E8B3B: mov     eax, [esp+28h+a3]
0x7E8B3F: test    eax, eax
0x7E8B41: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7E8B49: jz      short loc_7E8B5E
0x7E8B4B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E8B4F: mov     ecx, eax
0x7E8B51: add     eax, 5Ch ; '\'
0x7E8B54: cmp     dword ptr [eax], 0
0x7E8B57: jnz     short loc_7E8B5E
0x7E8B59: call    sub_772560
0x7E8B5E: mov     ecx, dword ptr [esp+28h+var_C]
0x7E8B62: mov     large fs:0, ecx
0x7E8B69: pop     ecx
0x7E8B6A: pop     edi
0x7E8B6B: pop     esi
0x7E8B6C: pop     ebp
0x7E8B6D: pop     ebx
0x7E8B6E: add     esp, 14h
0x7E8B71: retn
