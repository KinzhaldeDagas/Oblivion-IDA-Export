0x8DA870: push    ebx
0x8DA871: mov     edx, ecx
0x8DA873: push    ebp
0x8DA874: mov     ebp, [esp+8+arg_0]
0x8DA878: mov     eax, [ebp+8]
0x8DA87B: mov     [edx+1C24h], eax
0x8DA881: mov     ecx, [ebp+0Ch]
0x8DA884: mov     [edx+1C20h], ecx
0x8DA88A: fld     dword ptr [ebp+8]
0x8DA88D: mov     ecx, [ebp+4]
0x8DA890: fld     st
0x8DA892: fmulp   st(1), st
0x8DA894: lea     eax, [edx+1A50h]
0x8DA89A: push    esi
0x8DA89B: push    edi
0x8DA89C: fmul    dword ptr [ebp+0]
0x8DA89F: mov     [eax], ecx
0x8DA8A1: mov     ecx, [ebp+4]
0x8DA8A4: mov     [eax+4], ecx
0x8DA8A7: mov     ecx, [ebp+4]
0x8DA8AA: fmul    dword ptr ds:0A3D65Ch
0x8DA8B0: mov     [eax+0Ch], ecx
0x8DA8B3: mov     cl, [ebp+19h]
0x8DA8B6: test    cl, cl
0x8DA8B8: jz      short loc_8DA8C5
0x8DA8BA: fld     dword ptr ds:0A53954h
0x8DA8C0: fmul    st, st(1)
0x8DA8C2: fstp    dword ptr [eax+0Ch]
0x8DA8C5: mov     ecx, [ebp+4]
0x8DA8C8: mov     [eax+8], ecx
0x8DA8CB: mov     cl, [ebp+1Ah]
0x8DA8CE: test    cl, cl
0x8DA8D0: jz      short loc_8DA8DD
0x8DA8D2: fmul    dword ptr ds:0A30634h
0x8DA8D8: fstp    dword ptr [eax+8]
0x8DA8DB: jmp     short loc_8DA8DF
0x8DA8DD: fstp    st
0x8DA8DF: fld     qword ptr ds:0A9A3B0h
0x8DA8E5: mov     dword ptr [eax+30h], 7F7FFFFFh
0x8DA8EC: mov     byte ptr [eax+10h], 0
0x8DA8F0: fabs
0x8DA8F2: mov     cx, [ebp+10h]
0x8DA8F6: mov     [eax+38h], cx
0x8DA8FA: mov     ecx, 0E02D78ECh
0x8DA8FF: mov     [eax+14h], ecx
0x8DA902: mov     [eax+18h], ecx
0x8DA905: mov     ecx, 0DF0AC723h
0x8DA90A: mov     [eax+24h], ecx
0x8DA90D: mov     [eax+28h], ecx
0x8DA910: mov     ecx, 3F800000h
0x8DA915: mov     [eax+1Ch], ecx
0x8DA918: mov     [eax+20h], ecx
0x8DA91B: mov     [eax+34h], ecx
0x8DA91E: lea     ebx, [edx+1B40h]
0x8DA924: mov     esi, eax
0x8DA926: mov     edi, ebx
0x8DA928: fstp    dword ptr [eax+2Ch]
0x8DA92B: mov     ecx, 0Fh
0x8DA930: rep movsd
0x8DA932: mov     esi, eax
0x8DA934: lea     edi, [edx+1A8Ch]
0x8DA93A: mov     ecx, 0Fh
0x8DA93F: rep movsd
0x8DA941: mov     esi, eax
0x8DA943: lea     edi, [edx+1AC8h]
0x8DA949: mov     ecx, 0Fh
0x8DA94E: rep movsd
0x8DA950: mov     esi, eax
0x8DA952: lea     edi, [edx+1B04h]
0x8DA958: mov     ecx, 0Fh
0x8DA95D: rep movsd
0x8DA95F: mov     eax, [ebp+4]
0x8DA962: mov     [ebx+0Ch], eax
0x8DA965: mov     ecx, [ebp+4]
0x8DA968: mov     [ebx+4], ecx
0x8DA96B: mov     eax, [ebp+4]
0x8DA96E: mov     [ebx+8], eax
0x8DA971: mov     al, [ebp+18h]
0x8DA974: test    al, al
0x8DA976: mov     bl, 1
0x8DA978: jz      loc_8DAA89
0x8DA97E: fld     dword ptr ds:0A31E2Ch
0x8DA984: mov     dword ptr [edx+1AA0h], 0BF19999Ah
0x8DA98E: mov     dword ptr [edx+1AA4h], 0BE4CCCCCh
0x8DA998: mov     dword ptr [edx+1AB0h], 0BE99999Ah
0x8DA9A2: mov     dword ptr [edx+1AB4h], 0BE0F5C28h
0x8DA9AC: mov     dword ptr [edx+1AB8h], 3D2C0831h
0x8DA9B6: mov     dword ptr [edx+1ABCh], 3E4CCCCCh
0x8DA9C0: fdiv    dword ptr [ebp+0Ch]
0x8DA9C3: fstp    dword ptr [edx+1AA8h]
0x8DA9C9: fld     dword ptr ds:0A5ACC4h
0x8DA9CF: fdiv    dword ptr [ebp+0Ch]
0x8DA9D2: fstp    dword ptr [edx+1AACh]
0x8DA9D8: fld     dword ptr ds:0A9A3A8h
0x8DA9DE: fdiv    dword ptr [ebp+0Ch]
0x8DA9E1: fmul    dword ptr ds:0A53954h
0x8DA9E7: fstp    dword ptr [edx+1AC0h]
0x8DA9ED: mov     cx, [ebp+12h]
0x8DA9F1: mov     [edx+1AC4h], cx
0x8DA9F8: mov     [edx+1A9Ch], bl
0x8DA9FE: mov     al, [ebp+18h]
0x8DAA01: test    al, al
0x8DAA03: jz      loc_8DAA89
0x8DAA09: fld     dword ptr ds:0A31E2Ch
0x8DAA0F: mov     dword ptr [edx+1ADCh], 0BF000000h
0x8DAA19: mov     dword ptr [edx+1AE0h], 0BE2AAAABh
0x8DAA23: mov     dword ptr [edx+1AECh], 0BE800000h
0x8DAA2D: mov     dword ptr [edx+1AF0h], 0BDEEEEEFh
0x8DAA37: mov     dword ptr [edx+1AF4h], 3D0F5C29h
0x8DAA41: mov     dword ptr [edx+1AF8h], 3E2AAAABh
0x8DAA4B: fdiv    dword ptr [ebp+0Ch]
0x8DAA4E: fstp    dword ptr [edx+1AE4h]
0x8DAA54: fld     dword ptr ds:0A5ACC4h
0x8DAA5A: fdiv    dword ptr [ebp+0Ch]
0x8DAA5D: fstp    dword ptr [edx+1AE8h]
0x8DAA63: fld     dword ptr ds:0A97F40h
0x8DAA69: fdiv    dword ptr [ebp+0Ch]
0x8DAA6C: fmul    dword ptr ds:0A30634h
0x8DAA72: fstp    dword ptr [edx+1AFCh]
0x8DAA78: mov     ax, [ebp+14h]
0x8DAA7C: mov     [edx+1B00h], ax
0x8DAA83: mov     [edx+1AD8h], bl
0x8DAA89: mov     ecx, [ebp+4]
0x8DAA8C: mov     [edx+1B04h], ecx
0x8DAA92: mov     al, [ebp+18h]
0x8DAA95: test    al, al
0x8DAA97: jz      loc_8DAB1D
0x8DAA9D: fld     dword ptr ds:0A31E2Ch
0x8DAAA3: mov     dword ptr [edx+1B18h], 0BECCCCCDh
0x8DAAAD: mov     dword ptr [edx+1B1Ch], 0BD0158EDh
0x8DAAB7: mov     dword ptr [edx+1B28h], 0BE4CCCCDh
0x8DAAC1: mov     dword ptr [edx+1B2Ch], 0BCB51618h
0x8DAACB: mov     dword ptr [edx+1B30h], 3BD94DB8h
0x8DAAD5: mov     dword ptr [edx+1B34h], 3D0158EDh
0x8DAADF: fdiv    dword ptr [ebp+0Ch]
0x8DAAE2: fstp    dword ptr [edx+1B20h]
0x8DAAE8: fld     dword ptr ds:0A5ACC4h
0x8DAAEE: fdiv    dword ptr [ebp+0Ch]
0x8DAAF1: fstp    dword ptr [edx+1B24h]
0x8DAAF7: fld     dword ptr ds:0A9A3A4h
0x8DAAFD: fdiv    dword ptr [ebp+0Ch]
0x8DAB00: fmul    dword ptr ds:0A30634h
0x8DAB06: fstp    dword ptr [edx+1B38h]
0x8DAB0C: mov     ax, [ebp+16h]
0x8DAB10: mov     [edx+1B3Ch], ax
0x8DAB17: mov     [edx+1B14h], bl
0x8DAB1D: mov     eax, 1010101h
0x8DAB22: lea     edi, [edx+19D4h]
0x8DAB28: mov     ecx, 10h
0x8DAB2D: rep stosd
0x8DAB2F: mov     al, 2
0x8DAB31: pop     edi
0x8DAB32: mov     cl, 3
0x8DAB34: pop     esi
0x8DAB35: pop     ebp
0x8DAB36: mov     [edx+19DFh], bl
0x8DAB3C: mov     [edx+19E7h], bl
0x8DAB42: mov     [edx+19EDh], bl
0x8DAB48: mov     [edx+19EEh], bl
0x8DAB4E: mov     [edx+19EFh], bl
0x8DAB54: mov     [edx+19F0h], bl
0x8DAB5A: mov     [edx+19F1h], bl
0x8DAB60: mov     [edx+19F7h], bl
0x8DAB66: mov     [edx+19F8h], bl
0x8DAB6C: mov     [edx+19FFh], bl
0x8DAB72: mov     byte ptr [edx+19DDh], 0
0x8DAB79: mov     byte ptr [edx+19DEh], 0
0x8DAB80: mov     [edx+19E0h], cl
0x8DAB86: mov     byte ptr [edx+19E1h], 4
0x8DAB8D: mov     [edx+19E2h], cl
0x8DAB93: mov     byte ptr [edx+19E5h], 0
0x8DAB9A: mov     byte ptr [edx+19E6h], 0
0x8DABA1: mov     [edx+19E8h], al
0x8DABA7: mov     [edx+19E9h], al
0x8DABAD: mov     [edx+19EAh], al
0x8DABB3: mov     [edx+19F2h], al
0x8DABB9: mov     [edx+19F5h], cl
0x8DABBF: mov     [edx+19F6h], al
0x8DABC5: mov     [edx+19F9h], al
0x8DABCB: mov     [edx+19FAh], al
0x8DABD1: mov     byte ptr [edx+19FDh], 4
0x8DABD8: mov     [edx+19FEh], al
0x8DABDE: mov     [edx+1A00h], al
0x8DABE4: mov     [edx+1A01h], al
0x8DABEA: mov     [edx+1A02h], al
0x8DABF0: mov     [edx+1A05h], cl
0x8DABF6: mov     [edx+1A06h], al
0x8DABFC: mov     [edx+1A07h], al
0x8DAC02: mov     [edx+1A08h], al
0x8DAC08: mov     [edx+1A09h], al
0x8DAC0E: mov     [edx+1A0Ah], al
0x8DAC14: pop     ebx
0x8DAC15: retn    4
