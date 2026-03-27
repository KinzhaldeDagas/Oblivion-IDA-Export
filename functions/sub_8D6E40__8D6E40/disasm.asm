0x8D6E40: push    ebp
0x8D6E41: mov     ebp, esp
0x8D6E43: and     esp, 0FFFFFFF0h
0x8D6E46: sub     esp, 44h
0x8D6E49: push    ebx
0x8D6E4A: mov     ebx, large fs:2Ch
0x8D6E51: push    esi
0x8D6E52: push    edi
0x8D6E53: mov     edi, ds:0BA9DE4h
0x8D6E59: mov     eax, [ebx+edi*4]
0x8D6E5C: mov     ecx, [eax+1A4h]
0x8D6E62: cmp     ecx, [eax+1A8h]
0x8D6E68: jnb     short loc_8D6E95
0x8D6E6A: mov     esi, eax
0x8D6E6C: mov     ecx, [esi+1A4h]
0x8D6E72: mov     dword ptr [ecx], offset aLtintegrate; "LtIntegrate"
0x8D6E78: mov     dword ptr [ecx+0Ch], offset aInit_0; "Init"
0x8D6E7F: rdtsc
0x8D6E81: mov     [esp+50h+var_40], eax
0x8D6E85: mov     edx, [esp+50h+var_40]
0x8D6E89: mov     [ecx+4], edx
0x8D6E8C: add     ecx, 10h
0x8D6E8F: mov     [esi+1A4h], ecx
0x8D6E95: mov     esi, [ebp+arg_0]
0x8D6E98: mov     ecx, [ebp+arg_4]
0x8D6E9B: mov     edx, [ecx]
0x8D6E9D: lea     eax, [esi+160h]
0x8D6EA3: mov     [eax], edx
0x8D6EA5: mov     edx, [ecx+4]
0x8D6EA8: mov     [eax+4], edx
0x8D6EAB: mov     edx, [ecx+8]
0x8D6EAE: mov     [eax+8], edx
0x8D6EB1: mov     ecx, [ecx+0Ch]; void *
0x8D6EB4: mov     [eax+0Ch], ecx
0x8D6EB7: fld     dword ptr [esi+270h]
0x8D6EBD: mov     eax, [ebp+arg_4]
0x8D6EC0: fmul    dword ptr [eax+8]
0x8D6EC3: fstp    dword ptr [esi+264h]
0x8D6EC9: mov     edx, [esi+264h]
0x8D6ECF: fild    dword ptr [esi+26Ch]
0x8D6ED5: mov     [esp+50h+var_40], edx
0x8D6ED9: movss   xmm0, [esp+50h+var_40]
0x8D6EDF: movaps  xmm2, xmm0
0x8D6EE2: fmul    dword ptr [eax+0Ch]
0x8D6EE5: shufps  xmm2, xmm0, 0
0x8D6EE9: fstp    dword ptr [esi+268h]
0x8D6EEF: movaps  xmm1, xmmword ptr [esi+20h]
0x8D6EF3: mulps   xmm2, xmm1
0x8D6EF6: movaps  xmmword ptr [esi+180h], xmm2
0x8D6EFD: mov     eax, [eax+8]
0x8D6F00: movaps  xmm1, xmmword ptr [esi+20h]
0x8D6F04: mov     [esp+50h+var_40], eax
0x8D6F08: movss   xmm0, [esp+50h+var_40]
0x8D6F0E: movaps  xmm2, xmm0
0x8D6F11: shufps  xmm2, xmm0, 0
0x8D6F15: mulps   xmm2, xmm1
0x8D6F18: movaps  xmmword ptr [esi+190h], xmm2
0x8D6F1F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x8D6F24: push    esi
0x8D6F25: call    sub_8CC3F0
0x8D6F2A: mov     ecx, [esi+88h]
0x8D6F30: mov     eax, [esi+8Ch]
0x8D6F36: add     esp, 4
0x8D6F39: inc     ecx
0x8D6F3A: dec     eax
0x8D6F3B: mov     [esi+8Ch], eax
0x8D6F41: mov     eax, [ebx+edi*4]
0x8D6F44: mov     [esi+88h], ecx
0x8D6F4A: mov     ecx, [eax+1A4h]
0x8D6F50: cmp     ecx, [eax+1A8h]
0x8D6F56: jnb     short loc_8D6F7D
0x8D6F58: mov     ecx, [eax+1A4h]
0x8D6F5E: mov     dword ptr [ecx], offset aStactions; "StActions"
0x8D6F64: rdtsc
0x8D6F66: mov     [esp+50h+var_40], eax
0x8D6F6A: mov     edx, [esp+50h+var_40]
0x8D6F6E: mov     eax, [ebx+edi*4]
0x8D6F71: mov     [ecx+4], edx
0x8D6F74: add     ecx, 0Ch
0x8D6F77: mov     [eax+1A4h], ecx
0x8D6F7D: mov     ecx, [esi+3Ch]
0x8D6F80: xor     eax, eax
0x8D6F82: test    ecx, ecx
0x8D6F84: mov     [esp+50h+var_40], eax
0x8D6F88: jle     short loc_8D6FD8
0x8D6F8A: lea     ebx, [ebx+0]
0x8D6F90: mov     ecx, [esi+38h]
0x8D6F93: mov     edi, [ecx+eax*4]
0x8D6F96: mov     ecx, [edi+60h]
0x8D6F99: add     edi, 5Ch ; '\'
0x8D6F9C: xor     ebx, ebx
0x8D6F9E: test    ecx, ecx
0x8D6FA0: jle     short loc_8D6FBF
0x8D6FA2: mov     edx, [edi]
0x8D6FA4: mov     ecx, [edx+ebx*4]
0x8D6FA7: mov     edx, [ecx]
0x8D6FA9: lea     eax, [esi+160h]
0x8D6FAF: push    eax
0x8D6FB0: call    dword ptr [edx+8]
0x8D6FB3: mov     eax, [edi+4]
0x8D6FB6: inc     ebx
0x8D6FB7: cmp     ebx, eax
0x8D6FB9: jl      short loc_8D6FA2
0x8D6FBB: mov     eax, [esp+50h+var_40]
0x8D6FBF: mov     ecx, [esi+3Ch]
0x8D6FC2: inc     eax
0x8D6FC3: cmp     eax, ecx
0x8D6FC5: mov     [esp+50h+var_40], eax
0x8D6FC9: jl      short loc_8D6F90
0x8D6FCB: mov     ebx, large fs:2Ch
0x8D6FD2: mov     edi, ds:0BA9DE4h
0x8D6FD8: mov     ecx, [esi+8Ch]
0x8D6FDE: mov     eax, [esi+88h]
0x8D6FE4: inc     ecx
0x8D6FE5: dec     eax
0x8D6FE6: mov     [esi+8Ch], ecx
0x8D6FEC: mov     [esi+88h], eax
0x8D6FF2: jnz     short loc_8D700F
0x8D6FF4: mov     eax, [esi+84h]
0x8D6FFA: test    eax, eax
0x8D6FFC: jz      short loc_8D700F
0x8D6FFE: mov     al, [esi+90h]
0x8D7004: test    al, al
0x8D7006: jnz     short loc_8D700F
0x8D7008: mov     ecx, esi
0x8D700A: call    sub_899210
0x8D700F: inc     dword ptr [esi+88h]
0x8D7015: mov     eax, [esi+264h]
0x8D701B: mov     ecx, [esi+268h]
0x8D7021: mov     [esp+50h+var_2C], eax
0x8D7025: mov     eax, [ebp+arg_4]
0x8D7028: mov     edx, [eax+8]
0x8D702B: mov     eax, [eax+0Ch]
0x8D702E: mov     [esp+50h+var_28], ecx
0x8D7032: mov     ecx, [esi+270h]
0x8D7038: mov     [esp+50h+var_20], eax
0x8D703C: mov     eax, [ebx+edi*4]
0x8D703F: mov     [esp+50h+var_24], edx
0x8D7043: mov     edx, [eax+1A4h]
0x8D7049: mov     [esp+50h+var_1C], ecx
0x8D704D: cmp     edx, [eax+1A8h]
0x8D7053: jnb     short loc_8D707A
0x8D7055: mov     ecx, [eax+1A4h]
0x8D705B: mov     dword ptr [ecx], offset aStintegrate; "StIntegrate"
0x8D7061: rdtsc
0x8D7063: mov     [esp+50h+var_40], eax
0x8D7067: mov     eax, [esp+50h+var_40]
0x8D706B: mov     [ecx+4], eax
0x8D706E: mov     eax, [ebx+edi*4]
0x8D7071: add     ecx, 0Ch
0x8D7074: mov     [eax+1A4h], ecx
0x8D707A: mov     eax, [esi+3Ch]
0x8D707D: dec     eax
0x8D707E: mov     [esp+50h+var_40], eax
0x8D7082: js      loc_8D71FA
0x8D7088: jmp     short loc_8D7090
0x8D708A: mov     eax, [esp+50h+var_40]
0x8D708E: mov     edi, edi
0x8D7090: mov     ecx, [esi+38h]
0x8D7093: mov     ecx, [ecx+eax*4]
0x8D7096: mov     eax, [ecx+0Ch]
0x8D7099: test    eax, eax
0x8D709B: mov     [esp+50h+var_38], ecx
0x8D709F: jnz     loc_8D71AA
0x8D70A5: mov     eax, [ebx+edi*4]
0x8D70A8: mov     edx, [eax+1A4h]
0x8D70AE: cmp     edx, [eax+1A8h]
0x8D70B4: jnb     short loc_8D70E2
0x8D70B6: mov     edi, eax
0x8D70B8: mov     [esp+50h+var_44], edi
0x8D70BC: mov     edi, [edi+1A4h]
0x8D70C2: mov     dword ptr [edi], offset aTtsingleobj; "TtSingleObj"
0x8D70C8: rdtsc
0x8D70CA: mov     [esp+50h+var_3C], eax
0x8D70CE: mov     eax, [esp+50h+var_3C]
0x8D70D2: mov     edx, [esp+50h+var_44]
0x8D70D6: mov     [edi+4], eax
0x8D70D9: add     edi, 0Ch
0x8D70DC: mov     [edx+1A4h], edi
0x8D70E2: mov     edi, [ecx+38h]
0x8D70E5: dec     edi
0x8D70E6: js      short loc_8D7113
0x8D70E8: lea     eax, [esi+190h]
0x8D70EE: mov     [esp+50h+var_44], eax
0x8D70F2: mov     ecx, [esp+50h+var_38]
0x8D70F6: mov     edx, [ecx+34h]
0x8D70F9: mov     eax, [edx+edi*4]
0x8D70FC: mov     ecx, [eax+50h]
0x8D70FF: mov     eax, [esp+50h+var_44]
0x8D7103: mov     edx, [ecx]
0x8D7105: push    eax
0x8D7106: lea     eax, [esi+160h]
0x8D710C: push    eax
0x8D710D: call    dword ptr [edx+10h]
0x8D7110: dec     edi
0x8D7111: jns     short loc_8D70F2
0x8D7113: mov     ecx, ds:0BA9DE4h
0x8D7119: mov     eax, [ebx+ecx*4]
0x8D711C: mov     edx, [eax+1A4h]
0x8D7122: cmp     edx, [eax+1A8h]
0x8D7128: jnb     short loc_8D7154
0x8D712A: mov     eax, ds:0BA9DE4h
0x8D712F: mov     edi, [ebx+eax*4]
0x8D7132: mov     ecx, [edi+1A4h]
0x8D7138: mov     dword ptr [ecx], offset aEt; "Et"
0x8D713E: rdtsc
0x8D7140: mov     [esp+50h+var_34], eax
0x8D7144: mov     edx, [esp+50h+var_34]
0x8D7148: mov     [ecx+4], edx
0x8D714B: add     ecx, 0Ch
0x8D714E: mov     [edi+1A4h], ecx
0x8D7154: mov     edi, ds:0BA9DE4h
0x8D715A: mov     eax, [esi+134h]
0x8D7160: test    eax, eax
0x8D7162: jz      loc_8D71F0
0x8D7168: mov     eax, [ebx+edi*4]
0x8D716B: mov     edx, [eax+1A4h]
0x8D7171: cmp     edx, [eax+1A8h]
0x8D7177: jnb     short loc_8D719E
0x8D7179: mov     ecx, [eax+1A4h]
0x8D717F: mov     dword ptr [ecx], offset aStpostintegrat; "StPostIntegrateCb"
0x8D7185: rdtsc
0x8D7187: mov     [esp+50h+var_30], eax
0x8D718B: mov     eax, [esp+50h+var_30]
0x8D718F: mov     [ecx+4], eax
0x8D7192: mov     eax, [ebx+edi*4]
0x8D7195: add     ecx, 0Ch
0x8D7198: mov     [eax+1A4h], ecx
0x8D719E: mov     eax, [esi+3Ch]
0x8D71A1: dec     eax
0x8D71A2: mov     [esp+50h+var_44], eax
0x8D71A6: js      short loc_8D71F0
0x8D71A8: jmp     short loc_8D71D1
0x8D71AA: mov     eax, [ecx+38h]
0x8D71AD: mov     edx, [ecx+34h]
0x8D71B0: push    eax
0x8D71B1: push    edx
0x8D71B2: push    ecx
0x8D71B3: lea     eax, [esp+5Ch+var_2C]
0x8D71B7: push    eax
0x8D71B8: lea     eax, [esi+160h]
0x8D71BE: lea     ecx, [eax+10h]
0x8D71C1: push    ecx
0x8D71C2: push    eax
0x8D71C3: call    sub_924000
0x8D71C8: add     esp, 18h
0x8D71CB: jmp     short loc_8D715A
0x8D71CD: mov     eax, [esp+50h+var_44]
0x8D71D1: mov     ecx, [ebp+arg_4]
0x8D71D4: mov     edx, [esi+38h]
0x8D71D7: mov     eax, [edx+eax*4]
0x8D71DA: push    ecx
0x8D71DB: push    eax
0x8D71DC: push    esi
0x8D71DD: call    sub_8DCF10
0x8D71E2: mov     eax, [esp+5Ch+var_44]
0x8D71E6: add     esp, 0Ch
0x8D71E9: dec     eax
0x8D71EA: mov     [esp+50h+var_44], eax
0x8D71EE: jns     short loc_8D71CD
0x8D71F0: dec     [esp+50h+var_40]
0x8D71F4: jns     loc_8D708A
0x8D71FA: dec     dword ptr [esi+88h]
0x8D7200: jnz     short loc_8D721D
0x8D7202: mov     eax, [esi+84h]
0x8D7208: test    eax, eax
0x8D720A: jz      short loc_8D721D
0x8D720C: mov     al, [esi+90h]
0x8D7212: test    al, al
0x8D7214: jnz     short loc_8D721D
0x8D7216: mov     ecx, esi
0x8D7218: call    sub_899210
0x8D721D: mov     eax, [esi+11Ch]
0x8D7223: test    eax, eax
0x8D7225: jz      loc_8D72A5
0x8D722B: mov     eax, [ebx+edi*4]
0x8D722E: mov     ecx, [eax+1A4h]
0x8D7234: cmp     ecx, [eax+1A8h]
0x8D723A: jnb     short loc_8D7261
0x8D723C: mov     ecx, [eax+1A4h]
0x8D7242: mov     dword ptr [ecx], offset aTtpostintegrat; "TtPostIntegrateCb"
0x8D7248: rdtsc
0x8D724A: mov     [esp+50h+var_30], eax
0x8D724E: mov     edx, [esp+50h+var_30]
0x8D7252: mov     eax, [ebx+edi*4]
0x8D7255: mov     [ecx+4], edx
0x8D7258: add     ecx, 0Ch
0x8D725B: mov     [eax+1A4h], ecx
0x8D7261: mov     eax, [ebp+arg_4]
0x8D7264: push    eax
0x8D7265: push    esi
0x8D7266: call    sub_8DCDF0
0x8D726B: mov     eax, [ebx+edi*4]
0x8D726E: mov     ecx, [eax+1A4h]
0x8D7274: mov     edx, [eax+1A8h]
0x8D727A: add     esp, 8
0x8D727D: cmp     ecx, edx
0x8D727F: jnb     short loc_8D72A5
0x8D7281: mov     esi, eax
0x8D7283: mov     ecx, [esi+1A4h]
0x8D7289: mov     dword ptr [ecx], offset aEt; "Et"
0x8D728F: rdtsc
0x8D7291: mov     [esp+50h+var_30], eax
0x8D7295: mov     edx, [esp+50h+var_30]
0x8D7299: mov     [ecx+4], edx
0x8D729C: add     ecx, 0Ch
0x8D729F: mov     [esi+1A4h], ecx
0x8D72A5: mov     eax, [ebx+edi*4]
0x8D72A8: mov     ecx, [eax+1A4h]
0x8D72AE: cmp     ecx, [eax+1A8h]
0x8D72B4: jnb     short loc_8D72DA
0x8D72B6: mov     ebx, eax
0x8D72B8: mov     ecx, [ebx+1A4h]
0x8D72BE: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D72C4: rdtsc
0x8D72C6: mov     [esp+50h+var_30], eax
0x8D72CA: mov     edx, [esp+50h+var_30]
0x8D72CE: mov     [ecx+4], edx
0x8D72D1: add     ecx, 0Ch
0x8D72D4: mov     [ebx+1A4h], ecx
0x8D72DA: pop     edi
0x8D72DB: pop     esi
0x8D72DC: pop     ebx
0x8D72DD: mov     esp, ebp
0x8D72DF: pop     ebp
0x8D72E0: retn    8
