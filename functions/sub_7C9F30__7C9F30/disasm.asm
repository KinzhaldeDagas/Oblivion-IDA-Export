0x7C9F30: push    0FFFFFFFFh
0x7C9F32: push    offset SEH_7C9F30; float
0x7C9F37: mov     eax, large fs:0
0x7C9F3D: push    eax; int
0x7C9F3E: sub     esp, 50h
0x7C9F41: push    ebx; float
0x7C9F42: push    ebp; int
0x7C9F43: push    esi; __int16
0x7C9F44: push    edi; int
0x7C9F45: mov     eax, ds:0B30AACh
0x7C9F4A: xor     eax, esp
0x7C9F4C: push    eax
0x7C9F4D: lea     eax, [esp+70h+var_C]
0x7C9F51: mov     large fs:0, eax
0x7C9F57: mov     edi, ecx
0x7C9F59: mov     eax, [edi]
0x7C9F5B: mov     edx, [eax+80h]
0x7C9F61: call    edx
0x7C9F63: mov     eax, ds:0B42E90h
0x7C9F68: xor     ebx, ebx
0x7C9F6A: mov     [esp+70h+var_58], eax; int
0x7C9F6E: mov     [esp+70h+var_50], ebx; float
0x7C9F72: mov     esi, [esp+70h+arg_C]
0x7C9F79: mov     ebp, [esi+18h]
0x7C9F7C: cmp     ebp, ebx
0x7C9F7E: mov     [esp+70h+var_4], ebx
0x7C9F82: mov     [esp+70h+var_59], bl
0x7C9F86: mov     [esp+70h+var_5A], bl
0x7C9F8A: jz      short loc_7C9FB1
0x7C9F8C: mov     edx, [ebp+0]
0x7C9F8F: mov     eax, [edx+54h]
0x7C9F92: mov     ecx, ebp
0x7C9F94: call    eax
0x7C9F96: cmp     eax, 1
0x7C9F99: jl      short loc_7C9FB1
0x7C9F9B: mov     edx, [ebp+0]
0x7C9F9E: mov     eax, [edx+54h]
0x7C9FA1: mov     ecx, ebp
0x7C9FA3: call    eax
0x7C9FA5: cmp     eax, 0Ah
0x7C9FA8: jg      short loc_7C9FB1
0x7C9FAA: mov     eax, 1
0x7C9FAF: jmp     short loc_7C9FB3
0x7C9FB1: xor     eax, eax
0x7C9FB3: neg     eax
0x7C9FB5: sbb     eax, eax
0x7C9FB7: and     eax, ebp
0x7C9FB9: mov     ebx, 0
0x7C9FBE: jz      short loc_7C9FF1
0x7C9FC0: test    ebp, ebp
0x7C9FC2: jz      short loc_7C9FE9
0x7C9FC4: mov     edx, [ebp+0]
0x7C9FC7: mov     eax, [edx+54h]
0x7C9FCA: mov     ecx, ebp
0x7C9FCC: call    eax
0x7C9FCE: cmp     eax, 5
0x7C9FD1: jl      short loc_7C9FE9
0x7C9FD3: mov     edx, [ebp+0]
0x7C9FD6: mov     eax, [edx+54h]
0x7C9FD9: mov     ecx, ebp
0x7C9FDB: call    eax
0x7C9FDD: cmp     eax, 0Ah
0x7C9FE0: jg      short loc_7C9FE9
0x7C9FE2: mov     ebx, 1
0x7C9FE7: jmp     short loc_7C9FEB
0x7C9FE9: xor     ebx, ebx
0x7C9FEB: neg     ebx
0x7C9FED: sbb     ebx, ebx
0x7C9FEF: and     ebx, ebp
0x7C9FF1: test    ebp, ebp
0x7C9FF3: jnz     short loc_7CA012
0x7C9FF5: mov     eax, ds:0B42E8Ch
0x7C9FFA: test    eax, eax
0x7C9FFC: jz      def_7CA265; jumptable 007CA265 default case, cases 1,4,5,12-15,24,47,48,51,76-78,80,82-84,87-89,91,93-95,98-100,102,104-106,109-111,113,115-117,121-123,127-130,135-137,141-144,148-150,154-157,161-163,167-170,175-177,181-184,188-190,194-197,201-203,207-210,214-216,220-225,230,231,233,234,236-245,247,248,250-259,267-270,275,276,279,282,283,286,289,290,293,296-351,378,380-383,392,393,404-413
0x7CA002: push    ebp
0x7CA003: push    offset aAttemptingTo_2; "Attempting to render geometry with a sh"...
0x7CA008: call    eax ; dword_B42E8C
0x7CA00A: add     esp, 8
0x7CA00D: jmp     def_7CA265; jumptable 007CA265 default case, cases 1,4,5,12-15,24,47,48,51,76-78,80,82-84,87-89,91,93-95,98-100,102,104-106,109-111,113,115-117,121-123,127-130,135-137,141-144,148-150,154-157,161-163,167-170,175-177,181-184,188-190,194-197,201-203,207-210,214-216,220-225,230,231,233,234,236-245,247,248,250-259,267-270,275,276,279,282,283,286,289,290,293,296-351,378,380-383,392,393,404-413
0x7CA012: mov     ecx, [esp+70h+var_58]
0x7CA016: mov     eax, [esi+10h]
0x7CA019: push    ecx
0x7CA01A: push    eax
0x7CA01B: push    ebx
0x7CA01C: mov     ecx, edi
0x7CA01E: call    sub_7C87C0
0x7CA023: mov     eax, [ebp+1Ch]
0x7CA026: mov     ecx, [esi+8]
0x7CA029: test    al, 2
0x7CA02B: setnbe  byte ptr [esp+70h+arg_C]
0x7CA033: test    eax, 100h
0x7CA038: setnbe  dl
0x7CA03B: test    ecx, ecx
0x7CA03D: jz      short loc_7CA077
0x7CA03F: mov     ax, [ecx+18h]
0x7CA043: shr     ax, 9
0x7CA047: test    al, 1
0x7CA049: jz      short loc_7CA050
0x7CA04B: mov     [esp+70h+var_5A], 1
0x7CA050: fld     dword ptr [ebp+20h]
0x7CA053: fstp    [esp+70h+var_54]
0x7CA057: fld1
0x7CA059: fcom    [esp+70h+var_54]
0x7CA05D: fnstsw  ax
0x7CA05F: test    ah, 41h
0x7CA062: jz      short loc_7CA06E
0x7CA064: test    byte ptr [ecx+18h], 1
0x7CA068: jz      short loc_7CA079
0x7CA06A: test    dl, dl
0x7CA06C: jz      short loc_7CA079
0x7CA06E: fstp    st
0x7CA070: mov     [esp+70h+var_59], 1
0x7CA075: jmp     short loc_7CA084
0x7CA077: fld1
0x7CA079: push    ecx
0x7CA07A: mov     ecx, ebp
0x7CA07C: fstp    [esp+74h+var_74]; float
0x7CA07F: call    sub_7E2430
0x7CA084: test    ebx, ebx
0x7CA086: fld     dword ptr [ebp+20h]
0x7CA089: mov     ecx, ds:0B46498h
0x7CA08F: fstp    [esp+70h+var_54]; int
0x7CA093: mov     edx, ds:0B4649Ch
0x7CA099: mov     eax, ds:0B464A0h
0x7CA09E: mov     ebp, [esp+70h+arg_0]
0x7CA0A2: mov     [esp+70h+var_4C], ecx; int
0x7CA0A6: fld     [esp+70h+var_4C]
0x7CA0AA: mov     ecx, ds:0B464A4h
0x7CA0B0: fstp    [esp+70h+var_3C]
0x7CA0B4: mov     [esp+70h+var_48], edx; int
0x7CA0B8: fld     [esp+70h+var_48]
0x7CA0BC: mov     edx, [esp+70h+var_3C]
0x7CA0C0: fstp    [esp+70h+var_38]
0x7CA0C4: mov     [esp+70h+var_44], eax; int
0x7CA0C8: fld     [esp+70h+var_44]
0x7CA0CC: mov     eax, [esp+70h+var_38]
0x7CA0D0: fstp    [esp+70h+var_34]
0x7CA0D4: fld     [esp+70h+var_54]
0x7CA0D8: mov     [esp+70h+var_40], ecx; int
0x7CA0DC: mov     ecx, [esp+70h+var_34]
0x7CA0E0: fstp    [esp+70h+var_30]
0x7CA0E4: mov     ds:0B46498h, edx
0x7CA0EA: mov     edx, [esp+70h+var_30]
0x7CA0EE: mov     ds:0B4649Ch, eax
0x7CA0F3: mov     ds:0B464A0h, ecx
0x7CA0F9: mov     ds:0B464A4h, edx
0x7CA0FF: jz      loc_7CA1B3
0x7CA105: movzx   eax, word ptr ds:0B42EACh
0x7CA10C: sub     eax, 1
0x7CA10F: jz      short loc_7CA13F
0x7CA111: sub     eax, 1
0x7CA114: jnz     loc_7CA1B3
0x7CA11A: mov     eax, [ebx]
0x7CA11C: mov     edx, [eax+60h]
0x7CA11F: push    ebp
0x7CA120: mov     ecx, ebx
0x7CA122: call    edx
0x7CA124: movzx   eax, ax
0x7CA127: cmp     ax, 10h
0x7CA12B: jbe     short loc_7CA132
0x7CA12D: mov     eax, 10h
0x7CA132: movzx   eax, ax
0x7CA135: shl     eax, 4
0x7CA138: add     eax, offset unk_B2DE00
0x7CA13D: jmp     short loc_7CA15F
0x7CA13F: mov     ecx, ebx
0x7CA141: call    sub_7ED5D0
0x7CA146: movzx   eax, ax
0x7CA149: cmp     ax, 0Ah
0x7CA14D: jbe     short loc_7CA154
0x7CA14F: mov     eax, 0Ah
0x7CA154: movzx   eax, ax
0x7CA157: shl     eax, 4
0x7CA15A: add     eax, offset unk_B2DD50
0x7CA15F: mov     edx, [eax]
0x7CA161: sub     esp, 10h
0x7CA164: mov     ecx, esp
0x7CA166: mov     [ecx], edx
0x7CA168: mov     edx, [eax+4]
0x7CA16B: mov     [ecx+4], edx
0x7CA16E: mov     edx, [eax+8]
0x7CA171: mov     eax, [eax+0Ch]
0x7CA174: mov     [ecx+8], edx
0x7CA177: push    0
0x7CA179: mov     [ecx+0Ch], eax
0x7CA17C: call    sub_7ECAE0
0x7CA181: mov     ecx, ds:0B25AD0h
0x7CA187: mov     edx, ds:0B25AD4h
0x7CA18D: add     esp, 4
0x7CA190: mov     eax, esp
0x7CA192: mov     [eax], ecx
0x7CA194: mov     ecx, ds:0B25AD8h
0x7CA19A: mov     [eax+4], edx
0x7CA19D: mov     edx, ds:0B25ADCh
0x7CA1A3: mov     [eax+8], ecx
0x7CA1A6: push    19h
0x7CA1A8: mov     [eax+0Ch], edx
0x7CA1AB: call    sub_7ECAE0
0x7CA1B0: add     esp, 14h
0x7CA1B3: cmp     byte ptr [esp+70h+arg_C], 0
0x7CA1BB: jz      short loc_7CA1C5
0x7CA1BD: mov     eax, [edi+80h]
0x7CA1C3: jmp     short loc_7CA201
0x7CA1C5: test    ebx, ebx
0x7CA1C7: jz      short loc_7CA1DA
0x7CA1C9: test    dword ptr [ebx+1Ch], 1000h
0x7CA1D0: jbe     short loc_7CA1DA
0x7CA1D2: mov     eax, [edi+84h]
0x7CA1D8: jmp     short loc_7CA201
0x7CA1DA: mov     eax, [esp+70h+var_58]
0x7CA1DE: cmp     eax, 48h ; 'H'
0x7CA1E1: jz      short loc_7CA1FB
0x7CA1E3: cmp     eax, 49h ; 'I'
0x7CA1E6: jz      short loc_7CA1FB
0x7CA1E8: cmp     eax, 168h
0x7CA1ED: jl      short loc_7CA1F6
0x7CA1EF: cmp     eax, 175h
0x7CA1F4: jle     short loc_7CA1FB
0x7CA1F6: mov     eax, [edi+7Ch]
0x7CA1F9: jmp     short loc_7CA201
0x7CA1FB: mov     eax, [edi+88h]
0x7CA201: push    eax; a2
0x7CA202: lea     ecx, [edi+24h]; this
0x7CA205: call    NiSmartPointer_Set??
0x7CA20A: cmp     byte ptr ds:0B42E86h, 0
0x7CA211: jz      short loc_7CA24F
0x7CA213: fld1
0x7CA215: sub     esp, 10h
0x7CA218: mov     eax, esp
0x7CA21A: fst     [esp+80h+var_3C]; int
0x7CA21E: mov     ecx, [esp+80h+var_3C]
0x7CA222: fst     [esp+80h+var_38]; float
0x7CA226: mov     edx, [esp+80h+var_38]
0x7CA22A: fst     [esp+80h+var_34]; int
0x7CA22E: mov     [eax], ecx
0x7CA230: fstp    [esp+80h+var_30]; int
0x7CA234: mov     ecx, [esp+80h+var_34]
0x7CA238: mov     [eax+4], edx
0x7CA23B: mov     edx, [esp+80h+var_30]
0x7CA23F: mov     [eax+8], ecx
0x7CA242: push    0
0x7CA244: mov     [eax+0Ch], edx
0x7CA247: call    sub_7ECAE0
0x7CA24C: add     esp, 14h
0x7CA24F: mov     eax, [esp+70h+var_58]
0x7CA253: cmp     eax, 19Fh; switch 416 cases
0x7CA258: ja      def_7CA265; jumptable 007CA265 default case, cases 1,4,5,12-15,24,47,48,51,76-78,80,82-84,87-89,91,93-95,98-100,102,104-106,109-111,113,115-117,121-123,127-130,135-137,141-144,148-150,154-157,161-163,167-170,175-177,181-184,188-190,194-197,201-203,207-210,214-216,220-225,230,231,233,234,236-245,247,248,250-259,267-270,275,276,279,282,283,286,289,290,293,296-351,378,380-383,392,393,404-413
0x7CA25E: movzx   eax, ds:byte_7CBBE8[eax]
0x7CA265: jmp     ds:jpt_7CA265[eax*4]; switch jump
0x7CA26C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 6
0x7CA270: push    ebx
0x7CA271: push    esi
0x7CA272: push    ecx
0x7CA273: push    ebp
0x7CA274: mov     ecx, edi
0x7CA276: call    sub_8480C0
0x7CA27B: jmp     loc_7CB2A0
0x7CA280: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 7
0x7CA284: push    ebx
0x7CA285: push    esi
0x7CA286: push    edx
0x7CA287: push    ebp
0x7CA288: mov     ecx, edi
0x7CA28A: call    sub_848190
0x7CA28F: jmp     loc_7CB2A0
0x7CA294: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 8
0x7CA298: push    ebx
0x7CA299: push    esi
0x7CA29A: push    eax
0x7CA29B: push    ebp
0x7CA29C: mov     ecx, edi
0x7CA29E: call    sub_848270
0x7CA2A3: jmp     loc_7CB2A0
0x7CA2A8: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 9
0x7CA2AC: push    ebx
0x7CA2AD: push    esi
0x7CA2AE: push    ecx
0x7CA2AF: push    ebp
0x7CA2B0: mov     ecx, edi
0x7CA2B2: call    sub_848300
0x7CA2B7: jmp     loc_7CB2A0
0x7CA2BC: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 0
0x7CA2C0: push    ebx
0x7CA2C1: push    esi
0x7CA2C2: push    edx
0x7CA2C3: push    ebp
0x7CA2C4: mov     ecx, edi
0x7CA2C6: call    sub_852030
0x7CA2CB: jmp     loc_7CB2A0
0x7CA2D0: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 2
0x7CA2D4: push    ebx
0x7CA2D5: push    esi
0x7CA2D6: push    eax
0x7CA2D7: push    ebp
0x7CA2D8: mov     ecx, edi
0x7CA2DA: call    sub_8520C0
0x7CA2DF: jmp     loc_7CB2A0
0x7CA2E4: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 3
0x7CA2E8: push    ebx
0x7CA2E9: push    esi
0x7CA2EA: push    ecx
0x7CA2EB: push    ebp
0x7CA2EC: mov     ecx, edi
0x7CA2EE: call    sub_8490F0
0x7CA2F3: jmp     loc_7CB2A0
0x7CA2F8: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 16
0x7CA2FC: push    ebx
0x7CA2FD: push    esi
0x7CA2FE: push    edx
0x7CA2FF: push    ebp
0x7CA300: mov     ecx, edi
0x7CA302: call    sub_849220
0x7CA307: jmp     loc_7CB2A0
0x7CA30C: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 17
0x7CA310: push    ebx
0x7CA311: push    esi
0x7CA312: push    eax
0x7CA313: push    ebp
0x7CA314: mov     ecx, edi
0x7CA316: call    sub_8492B0
0x7CA31B: jmp     loc_7CB2A0
0x7CA320: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 18
0x7CA324: push    ebx
0x7CA325: push    esi
0x7CA326: push    ecx
0x7CA327: push    ebp
0x7CA328: mov     ecx, edi
0x7CA32A: call    sub_849440
0x7CA32F: jmp     loc_7CB2A0
0x7CA334: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 19
0x7CA338: push    ebx
0x7CA339: push    esi
0x7CA33A: push    edx
0x7CA33B: push    ebp
0x7CA33C: mov     ecx, edi
0x7CA33E: call    sub_849550
0x7CA343: jmp     loc_7CB2A0
0x7CA348: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 20
0x7CA34C: push    ebx
0x7CA34D: push    esi
0x7CA34E: push    eax
0x7CA34F: push    ebp
0x7CA350: mov     ecx, edi
0x7CA352: call    sub_8496E0
0x7CA357: jmp     loc_7CB2A0
0x7CA35C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 21
0x7CA360: push    ebx
0x7CA361: push    esi
0x7CA362: push    ecx
0x7CA363: push    ebp
0x7CA364: mov     ecx, edi
0x7CA366: call    sub_849770
0x7CA36B: jmp     loc_7CB2A0
0x7CA370: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 22
0x7CA374: push    ebx
0x7CA375: push    esi
0x7CA376: push    edx
0x7CA377: push    ebp
0x7CA378: mov     ecx, edi
0x7CA37A: call    sub_849900
0x7CA37F: jmp     loc_7CB2A0
0x7CA384: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 23
0x7CA388: push    ebx
0x7CA389: push    esi
0x7CA38A: push    eax
0x7CA38B: push    ebp
0x7CA38C: mov     ecx, edi
0x7CA38E: call    sub_849A10
0x7CA393: jmp     loc_7CB2A0
0x7CA398: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 400
0x7CA39C: push    ebx
0x7CA39D: push    esi
0x7CA39E: push    ecx
0x7CA39F: push    ebp
0x7CA3A0: mov     ecx, edi
0x7CA3A2: call    sub_850610
0x7CA3A7: jmp     loc_7CB2A0
0x7CA3AC: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 401
0x7CA3B0: push    ebx
0x7CA3B1: push    esi
0x7CA3B2: push    edx
0x7CA3B3: push    ebp
0x7CA3B4: mov     ecx, edi
0x7CA3B6: call    sub_8506B0
0x7CA3BB: jmp     loc_7CB2A0
0x7CA3C0: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 402
0x7CA3C4: push    ebx
0x7CA3C5: push    esi
0x7CA3C6: push    eax
0x7CA3C7: push    ebp
0x7CA3C8: mov     ecx, edi
0x7CA3CA: call    sub_8507A0
0x7CA3CF: jmp     loc_7CB2A0
0x7CA3D4: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 403
0x7CA3D8: push    ebx
0x7CA3D9: push    esi
0x7CA3DA: push    ecx
0x7CA3DB: push    ebp
0x7CA3DC: mov     ecx, edi
0x7CA3DE: call    sub_850840
0x7CA3E3: jmp     loc_7CB2A0
0x7CA3E8: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 384
0x7CA3EC: push    ebx
0x7CA3ED: push    esi
0x7CA3EE: push    edx
0x7CA3EF: push    ebp
0x7CA3F0: mov     ecx, edi
0x7CA3F2: call    sub_84FED0
0x7CA3F7: jmp     loc_7CB2A0
0x7CA3FC: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 385
0x7CA400: push    ebx
0x7CA401: push    esi
0x7CA402: push    eax
0x7CA403: push    ebp
0x7CA404: mov     ecx, edi
0x7CA406: call    sub_8500A0
0x7CA40B: jmp     loc_7CB2A0
0x7CA410: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 386
0x7CA414: push    ebx
0x7CA415: push    esi
0x7CA416: push    ecx
0x7CA417: push    ebp
0x7CA418: mov     ecx, edi
0x7CA41A: call    sub_850270
0x7CA41F: jmp     loc_7CB2A0
0x7CA424: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 387
0x7CA428: push    ebx
0x7CA429: push    esi
0x7CA42A: push    edx
0x7CA42B: push    ebp
0x7CA42C: mov     ecx, edi
0x7CA42E: call    sub_850440
0x7CA433: jmp     loc_7CB2A0
0x7CA438: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 226
0x7CA43C: push    ebx
0x7CA43D: push    esi
0x7CA43E: push    eax
0x7CA43F: push    ebp
0x7CA440: mov     ecx, edi
0x7CA442: call    sub_84EB60
0x7CA447: jmp     loc_7CB2A0
0x7CA44C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 227
0x7CA450: push    ebx
0x7CA451: push    esi
0x7CA452: push    ecx
0x7CA453: push    ebp
0x7CA454: mov     ecx, edi
0x7CA456: call    sub_84EC90
0x7CA45B: jmp     loc_7CB2A0
0x7CA460: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 228
0x7CA464: push    ebx
0x7CA465: push    esi
0x7CA466: push    edx
0x7CA467: push    ebp
0x7CA468: mov     ecx, edi
0x7CA46A: call    sub_84EDC0
0x7CA46F: jmp     loc_7CB2A0
0x7CA474: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 229
0x7CA478: push    ebx
0x7CA479: push    esi
0x7CA47A: push    eax
0x7CA47B: push    ebp
0x7CA47C: mov     ecx, edi
0x7CA47E: call    sub_84EEF0
0x7CA483: jmp     loc_7CB2A0
0x7CA488: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 260
0x7CA48C: push    ebx
0x7CA48D: push    esi
0x7CA48E: push    ecx
0x7CA48F: push    ebp
0x7CA490: mov     ecx, edi
0x7CA492: call    sub_84F020
0x7CA497: jmp     loc_7CB2A0
0x7CA49C: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 261
0x7CA4A0: push    ebx
0x7CA4A1: push    esi
0x7CA4A2: push    edx
0x7CA4A3: push    ebp
0x7CA4A4: mov     ecx, edi
0x7CA4A6: call    sub_84F120
0x7CA4AB: jmp     loc_7CB2A0
0x7CA4B0: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 262
0x7CA4B4: push    ebx
0x7CA4B5: push    esi
0x7CA4B6: push    eax
0x7CA4B7: push    ebp
0x7CA4B8: mov     ecx, edi
0x7CA4BA: call    sub_84F340
0x7CA4BF: jmp     loc_7CB2A0
0x7CA4C4: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 263
0x7CA4C8: push    ebx
0x7CA4C9: push    esi
0x7CA4CA: push    ecx
0x7CA4CB: push    ebp
0x7CA4CC: mov     ecx, edi
0x7CA4CE: call    sub_84F4F0
0x7CA4D3: jmp     loc_7CB2A0
0x7CA4D8: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 264
0x7CA4DC: push    ebx
0x7CA4DD: push    esi
0x7CA4DE: push    edx
0x7CA4DF: push    ebp
0x7CA4E0: mov     ecx, edi
0x7CA4E2: call    sub_84F5F0
0x7CA4E7: jmp     loc_7CB2A0
0x7CA4EC: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 265
0x7CA4F0: push    ebx
0x7CA4F1: push    esi
0x7CA4F2: push    eax
0x7CA4F3: push    ebp
0x7CA4F4: mov     ecx, edi
0x7CA4F6: call    sub_84F6F0
0x7CA4FB: jmp     loc_7CB2A0
0x7CA500: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 266
0x7CA504: push    ebx
0x7CA505: push    esi
0x7CA506: push    ecx
0x7CA507: push    ebp
0x7CA508: mov     ecx, edi
0x7CA50A: call    sub_84F7F0
0x7CA50F: jmp     loc_7CB2A0
0x7CA514: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 271
0x7CA518: push    ebx
0x7CA519: push    esi
0x7CA51A: push    edx
0x7CA51B: push    ebp
0x7CA51C: mov     ecx, edi
0x7CA51E: call    sub_84FA10
0x7CA523: jmp     loc_7CB2A0
0x7CA528: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 272
0x7CA52C: push    ebx
0x7CA52D: push    esi
0x7CA52E: push    eax
0x7CA52F: push    ebp
0x7CA530: mov     ecx, edi
0x7CA532: call    sub_84FB40
0x7CA537: jmp     loc_7CB2A0
0x7CA53C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 273
0x7CA540: push    ebx
0x7CA541: push    esi
0x7CA542: push    ecx
0x7CA543: push    ebp
0x7CA544: mov     ecx, edi
0x7CA546: call    sub_84FC70
0x7CA54B: jmp     loc_7CB2A0
0x7CA550: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 274
0x7CA554: push    ebx
0x7CA555: push    esi
0x7CA556: push    edx
0x7CA557: push    ebp
0x7CA558: mov     ecx, edi
0x7CA55A: call    sub_84FDA0
0x7CA55F: jmp     loc_7CB2A0
0x7CA564: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 25
0x7CA568: push    ebx
0x7CA569: push    esi
0x7CA56A: push    eax
0x7CA56B: push    ebp
0x7CA56C: mov     ecx, edi
0x7CA56E: call    sub_849BA0
0x7CA573: jmp     loc_7CB2A0
0x7CA578: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 26
0x7CA57C: push    ebx
0x7CA57D: push    esi
0x7CA57E: push    ecx
0x7CA57F: push    ebp
0x7CA580: mov     ecx, edi
0x7CA582: call    sub_849D60
0x7CA587: jmp     loc_7CB2A0
0x7CA58C: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 52
0x7CA590: push    ebx
0x7CA591: push    esi
0x7CA592: push    edx
0x7CA593: push    ebp
0x7CA594: mov     ecx, edi
0x7CA596: call    sub_849F20
0x7CA59B: jmp     loc_7CB2A0
0x7CA5A0: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 53
0x7CA5A4: push    ebx
0x7CA5A5: push    esi
0x7CA5A6: push    eax
0x7CA5A7: push    ebp
0x7CA5A8: mov     ecx, edi
0x7CA5AA: call    sub_84A100
0x7CA5AF: jmp     loc_7CB2A0
0x7CA5B4: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 27
0x7CA5B8: push    ebx
0x7CA5B9: push    esi
0x7CA5BA: push    ecx
0x7CA5BB: push    ebp
0x7CA5BC: mov     ecx, edi
0x7CA5BE: call    sub_84A2E0
0x7CA5C3: jmp     loc_7CB2A0
0x7CA5C8: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 28
0x7CA5CC: push    ebx
0x7CA5CD: push    esi
0x7CA5CE: push    edx
0x7CA5CF: push    ebp
0x7CA5D0: mov     ecx, edi
0x7CA5D2: call    sub_84A510
0x7CA5D7: jmp     loc_7CB2A0
0x7CA5DC: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 54
0x7CA5E0: push    ebx
0x7CA5E1: push    esi
0x7CA5E2: push    eax
0x7CA5E3: push    ebp
0x7CA5E4: mov     ecx, edi
0x7CA5E6: call    sub_84A740
0x7CA5EB: jmp     loc_7CB2A0
0x7CA5F0: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 55
0x7CA5F4: push    ebx
0x7CA5F5: push    esi
0x7CA5F6: push    ecx
0x7CA5F7: push    ebp
0x7CA5F8: mov     ecx, edi
0x7CA5FA: call    sub_84A980
0x7CA5FF: jmp     loc_7CB2A0
0x7CA604: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 29
0x7CA608: push    ebx
0x7CA609: push    esi
0x7CA60A: push    edx
0x7CA60B: push    ebp
0x7CA60C: mov     ecx, edi
0x7CA60E: call    sub_84ABC0
0x7CA613: jmp     loc_7CB2A0
0x7CA618: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 30
0x7CA61C: push    ebx
0x7CA61D: push    esi
0x7CA61E: push    eax
0x7CA61F: push    ebp
0x7CA620: mov     ecx, edi
0x7CA622: call    sub_84AE80
0x7CA627: jmp     loc_7CB2A0
0x7CA62C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 31
0x7CA630: push    ebx
0x7CA631: push    esi
0x7CA632: push    ecx
0x7CA633: push    ebp
0x7CA634: mov     ecx, edi
0x7CA636: call    sub_84B040
0x7CA63B: jmp     loc_7CB2A0
0x7CA640: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 56
0x7CA644: push    ebx
0x7CA645: push    esi
0x7CA646: push    edx
0x7CA647: push    ebp
0x7CA648: mov     ecx, edi
0x7CA64A: call    sub_84B200
0x7CA64F: jmp     loc_7CB2A0
0x7CA654: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 57
0x7CA658: push    ebx
0x7CA659: push    esi
0x7CA65A: push    eax
0x7CA65B: push    ebp
0x7CA65C: mov     ecx, edi
0x7CA65E: call    sub_84B3E0
0x7CA663: jmp     loc_7CB2A0
0x7CA668: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 32
0x7CA66C: push    ebx
0x7CA66D: push    esi
0x7CA66E: push    ecx
0x7CA66F: push    ebp
0x7CA670: mov     ecx, edi
0x7CA672: call    sub_84B5C0
0x7CA677: jmp     loc_7CB2A0
0x7CA67C: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 33
0x7CA680: push    ebx
0x7CA681: push    esi
0x7CA682: push    edx
0x7CA683: push    ebp
0x7CA684: mov     ecx, edi
0x7CA686: call    sub_84B5C0
0x7CA68B: jmp     loc_7CB2A0
0x7CA690: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 34
0x7CA694: push    ebx
0x7CA695: push    esi
0x7CA696: push    eax
0x7CA697: push    ebp
0x7CA698: mov     ecx, edi
0x7CA69A: call    sub_84B7F0
0x7CA69F: jmp     loc_7CB2A0
0x7CA6A4: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 58
0x7CA6A8: push    ebx
0x7CA6A9: push    esi
0x7CA6AA: push    ecx
0x7CA6AB: push    ebp
0x7CA6AC: mov     ecx, edi
0x7CA6AE: call    sub_84BAB0
0x7CA6B3: jmp     loc_7CB2A0
0x7CA6B8: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 59
0x7CA6BC: push    ebx
0x7CA6BD: push    esi
0x7CA6BE: push    edx
0x7CA6BF: push    ebp
0x7CA6C0: mov     ecx, edi
0x7CA6C2: call    sub_84BD80
0x7CA6C7: jmp     loc_7CB2A0
0x7CA6CC: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 60
0x7CA6D0: push    ebx
0x7CA6D1: push    esi
0x7CA6D2: push    eax
0x7CA6D3: push    ebp
0x7CA6D4: mov     ecx, edi
0x7CA6D6: call    sub_84BFC0
0x7CA6DB: jmp     loc_7CB2A0
0x7CA6E0: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 35
0x7CA6E4: push    ebx
0x7CA6E5: push    esi
0x7CA6E6: push    ecx
0x7CA6E7: push    ebp
0x7CA6E8: mov     ecx, edi
0x7CA6EA: call    nullsub_19
0x7CA6EF: jmp     loc_7CB2A0
0x7CA6F4: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 61
0x7CA6F8: push    ebx
0x7CA6F9: push    esi
0x7CA6FA: push    edx
0x7CA6FB: push    ebp
0x7CA6FC: mov     ecx, edi
0x7CA6FE: call    nullsub_19
0x7CA703: jmp     loc_7CB2A0
0x7CA708: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 36
0x7CA70C: push    ebx
0x7CA70D: push    esi
0x7CA70E: push    eax
0x7CA70F: push    ebp
0x7CA710: mov     ecx, edi
0x7CA712: call    sub_84C200
0x7CA717: jmp     loc_7CB2A0
0x7CA71C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 37
0x7CA720: push    ebx
0x7CA721: push    esi
0x7CA722: push    ecx
0x7CA723: push    ebp
0x7CA724: mov     ecx, edi
0x7CA726: call    sub_84C3C0
0x7CA72B: jmp     loc_7CB2A0
0x7CA730: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 62
0x7CA734: push    ebx
0x7CA735: push    esi
0x7CA736: push    edx
0x7CA737: push    ebp
0x7CA738: mov     ecx, edi
0x7CA73A: call    sub_84C580
0x7CA73F: jmp     loc_7CB2A0
0x7CA744: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 63
0x7CA748: push    ebx
0x7CA749: push    esi
0x7CA74A: push    eax
0x7CA74B: push    ebp
0x7CA74C: mov     ecx, edi
0x7CA74E: call    sub_84C760
0x7CA753: jmp     loc_7CB2A0
0x7CA758: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 38
0x7CA75C: push    ebx
0x7CA75D: push    esi
0x7CA75E: push    ecx
0x7CA75F: push    ebp
0x7CA760: mov     ecx, edi
0x7CA762: call    sub_84C940
0x7CA767: jmp     loc_7CB2A0
0x7CA76C: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 39
0x7CA770: push    ebx
0x7CA771: push    esi
0x7CA772: push    edx
0x7CA773: push    ebp
0x7CA774: mov     ecx, edi
0x7CA776: call    sub_84C940
0x7CA77B: jmp     loc_7CB2A0
0x7CA780: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 64
0x7CA784: push    ebx
0x7CA785: push    esi
0x7CA786: push    eax
0x7CA787: push    ebp
0x7CA788: mov     ecx, edi
0x7CA78A: call    sub_84CB70
0x7CA78F: jmp     loc_7CB2A0
0x7CA794: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 65
0x7CA798: push    ebx
0x7CA799: push    esi
0x7CA79A: push    ecx
0x7CA79B: push    ebp
0x7CA79C: mov     ecx, edi
0x7CA79E: call    sub_84CDB0
0x7CA7A3: jmp     loc_7CB2A0
0x7CA7A8: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 40
0x7CA7AC: push    ebx
0x7CA7AD: push    esi
0x7CA7AE: push    edx
0x7CA7AF: push    ebp
0x7CA7B0: mov     ecx, edi
0x7CA7B2: call    sub_84CFF0
0x7CA7B7: jmp     loc_7CB2A0
0x7CA7BC: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 68
0x7CA7C0: push    ebx
0x7CA7C1: push    esi
0x7CA7C2: push    eax
0x7CA7C3: push    ebp
0x7CA7C4: mov     ecx, edi
0x7CA7C6: call    sub_84D2B0
0x7CA7CB: jmp     loc_7CB2A0
0x7CA7D0: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 66
0x7CA7D4: push    ebx
0x7CA7D5: push    esi
0x7CA7D6: push    ecx
0x7CA7D7: push    ebp
0x7CA7D8: mov     ecx, edi
0x7CA7DA: call    sub_84D900
0x7CA7DF: jmp     loc_7CB2A0
0x7CA7E4: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 67
0x7CA7E8: push    ebx
0x7CA7E9: push    esi
0x7CA7EA: push    edx
0x7CA7EB: push    ebp
0x7CA7EC: mov     ecx, edi
0x7CA7EE: call    sub_84DAE0
0x7CA7F3: jmp     loc_7CB2A0
0x7CA7F8: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 43
0x7CA7FC: push    ebx
0x7CA7FD: push    esi
0x7CA7FE: push    eax
0x7CA7FF: push    ebp
0x7CA800: mov     ecx, edi
0x7CA802: call    sub_84DCC0
0x7CA807: jmp     loc_7CB2A0
0x7CA80C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 44
0x7CA810: push    ebx
0x7CA811: push    esi
0x7CA812: push    ecx
0x7CA813: push    ebp
0x7CA814: mov     ecx, edi
0x7CA816: call    sub_84DEF0
0x7CA81B: jmp     loc_7CB2A0
0x7CA820: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 45
0x7CA824: push    ebx
0x7CA825: push    esi
0x7CA826: push    edx
0x7CA827: push    ebp
0x7CA828: mov     ecx, edi
0x7CA82A: call    sub_84E120
0x7CA82F: jmp     loc_7CB2A0
0x7CA834: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 69
0x7CA838: push    ebx
0x7CA839: push    esi
0x7CA83A: push    eax
0x7CA83B: push    ebp
0x7CA83C: mov     ecx, edi
0x7CA83E: call    sub_84E3E0
0x7CA843: jmp     loc_7CB2A0
0x7CA848: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 70
0x7CA84C: push    ebx
0x7CA84D: push    esi
0x7CA84E: push    ecx
0x7CA84F: push    ebp
0x7CA850: mov     ecx, edi
0x7CA852: call    sub_84E620
0x7CA857: jmp     loc_7CB2A0
0x7CA85C: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 46
0x7CA860: push    ebx
0x7CA861: push    esi
0x7CA862: push    edx
0x7CA863: push    ebp
0x7CA864: mov     ecx, edi
0x7CA866: call    nullsub_19
0x7CA86B: jmp     loc_7CB2A0
0x7CA870: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 71
0x7CA874: push    ebx
0x7CA875: push    esi
0x7CA876: push    eax
0x7CA877: push    ebp
0x7CA878: mov     ecx, edi
0x7CA87A: call    nullsub_19
0x7CA87F: jmp     loc_7CB2A0
0x7CA884: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 41
0x7CA888: push    ebx
0x7CA889: push    esi
0x7CA88A: push    ecx
0x7CA88B: push    ebp
0x7CA88C: mov     ecx, edi
0x7CA88E: call    sub_84D580
0x7CA893: jmp     loc_7CB2A0
0x7CA898: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 42
0x7CA89C: push    ebx
0x7CA89D: push    esi
0x7CA89E: push    edx
0x7CA89F: push    ebp
0x7CA8A0: mov     ecx, edi
0x7CA8A2: call    sub_84D740
0x7CA8A7: jmp     loc_7CB2A0
0x7CA8AC: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 49
0x7CA8B0: push    ebx
0x7CA8B1: push    esi
0x7CA8B2: push    eax
0x7CA8B3: push    ebp
0x7CA8B4: mov     ecx, edi
0x7CA8B6: call    sub_84E860
0x7CA8BB: jmp     loc_7CB2A0
0x7CA8C0: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 50
0x7CA8C4: push    ebx
0x7CA8C5: push    esi
0x7CA8C6: push    ecx
0x7CA8C7: push    ebp
0x7CA8C8: mov     ecx, edi
0x7CA8CA: call    sub_84E9E0
0x7CA8CF: jmp     loc_7CB2A0
0x7CA8D4: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 396
0x7CA8D8: push    ebx
0x7CA8D9: push    esi
0x7CA8DA: push    edx
0x7CA8DB: push    ebp
0x7CA8DC: mov     ecx, edi
0x7CA8DE: call    sub_851CA0
0x7CA8E3: jmp     loc_7CB2A0
0x7CA8E8: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 397
0x7CA8EC: push    ebx
0x7CA8ED: push    esi
0x7CA8EE: push    eax
0x7CA8EF: push    ebp
0x7CA8F0: mov     ecx, edi
0x7CA8F2: call    sub_851E70
0x7CA8F7: jmp     loc_7CB2A0
0x7CA8FC: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 398
0x7CA900: push    ebx
0x7CA901: push    esi
0x7CA902: push    ecx
0x7CA903: push    ebp
0x7CA904: mov     ecx, edi
0x7CA906: call    sub_848950
0x7CA90B: jmp     loc_7CB2A0
0x7CA910: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 399
0x7CA914: push    ebx
0x7CA915: push    esi
0x7CA916: push    edx
0x7CA917: push    ebp
0x7CA918: mov     ecx, edi
0x7CA91A: call    sub_848AD0
0x7CA91F: jmp     loc_7CB2A0
0x7CA924: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 72
0x7CA928: push    1
0x7CA92A: push    ebx
0x7CA92B: push    esi
0x7CA92C: push    eax
0x7CA92D: push    ebp
0x7CA92E: mov     ecx, edi
0x7CA930: call    sub_850C70
0x7CA935: jmp     loc_7CB2A0
0x7CA93A: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 366
0x7CA93E: push    1
0x7CA940: push    ebx
0x7CA941: push    esi
0x7CA942: push    ecx
0x7CA943: push    ebp
0x7CA944: mov     ecx, edi
0x7CA946: call    sub_850F60
0x7CA94B: jmp     loc_7CB2A0
0x7CA950: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 365
0x7CA954: push    1
0x7CA956: push    ebx
0x7CA957: push    esi
0x7CA958: push    edx
0x7CA959: push    ebp
0x7CA95A: mov     ecx, edi
0x7CA95C: call    sub_851250
0x7CA961: jmp     loc_7CB2A0
0x7CA966: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 368
0x7CA96A: push    1
0x7CA96C: push    ebx
0x7CA96D: push    esi
0x7CA96E: push    eax
0x7CA96F: push    ebp
0x7CA970: mov     ecx, edi
0x7CA972: call    sub_851520
0x7CA977: jmp     loc_7CB2A0
0x7CA97C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 360
0x7CA980: push    1
0x7CA982: push    ebx
0x7CA983: push    esi
0x7CA984: push    ecx
0x7CA985: push    ebp
0x7CA986: mov     ecx, edi
0x7CA988: call    sub_8517F0
0x7CA98D: jmp     loc_7CB2A0
0x7CA992: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 369
0x7CA996: push    1
0x7CA998: push    ebx
0x7CA999: push    esi
0x7CA99A: push    edx
0x7CA99B: push    ebp
0x7CA99C: mov     ecx, edi
0x7CA99E: call    sub_8519B0
0x7CA9A3: jmp     loc_7CB2A0
0x7CA9A8: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 73
0x7CA9AC: push    1
0x7CA9AE: push    ebx
0x7CA9AF: push    esi
0x7CA9B0: push    eax
0x7CA9B1: push    ebp
0x7CA9B2: mov     ecx, edi
0x7CA9B4: call    sub_846250
0x7CA9B9: jmp     loc_7CB2A0
0x7CA9BE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 367
0x7CA9C2: push    1
0x7CA9C4: push    ebx
0x7CA9C5: push    esi
0x7CA9C6: push    ecx
0x7CA9C7: push    ebp
0x7CA9C8: mov     ecx, edi
0x7CA9CA: call    sub_846570
0x7CA9CF: jmp     loc_7CB2A0
0x7CA9D4: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 374
0x7CA9D8: push    1
0x7CA9DA: push    ebx
0x7CA9DB: push    esi
0x7CA9DC: push    edx
0x7CA9DD: push    ebp
0x7CA9DE: mov     ecx, edi
0x7CA9E0: call    sub_846890
0x7CA9E5: jmp     loc_7CB2A0
0x7CA9EA: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 361
0x7CA9EE: push    1
0x7CA9F0: push    ebx
0x7CA9F1: push    esi
0x7CA9F2: push    eax
0x7CA9F3: push    ebp
0x7CA9F4: mov     ecx, edi
0x7CA9F6: call    loc_846C50
0x7CA9FB: jmp     loc_7CB2A0
0x7CAA00: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 362
0x7CAA04: push    1
0x7CAA06: push    ebx
0x7CAA07: push    esi
0x7CAA08: push    ecx
0x7CAA09: push    ebp
0x7CAA0A: mov     ecx, edi
0x7CAA0C: call    sub_846DC0
0x7CAA11: jmp     loc_7CB2A0
0x7CAA16: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 364
0x7CAA1A: push    1
0x7CAA1C: push    ebx
0x7CAA1D: push    esi
0x7CAA1E: push    edx
0x7CAA1F: push    ebp
0x7CAA20: mov     ecx, edi
0x7CAA22: call    sub_846F90
0x7CAA27: jmp     loc_7CB2A0
0x7CAA2C: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 370
0x7CAA30: push    1
0x7CAA32: push    ebx
0x7CAA33: push    esi
0x7CAA34: push    eax
0x7CAA35: push    ebp
0x7CAA36: mov     ecx, edi
0x7CAA38: call    sub_847160
0x7CAA3D: jmp     loc_7CB2A0
0x7CAA42: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 371
0x7CAA46: push    1
0x7CAA48: push    ebx
0x7CAA49: push    esi
0x7CAA4A: push    ecx
0x7CAA4B: push    ebp
0x7CAA4C: mov     ecx, edi
0x7CAA4E: call    sub_847400
0x7CAA53: jmp     loc_7CB2A0
0x7CAA58: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 372
0x7CAA5C: push    1
0x7CAA5E: push    ebx
0x7CAA5F: push    esi
0x7CAA60: push    edx
0x7CAA61: push    ebp
0x7CAA62: mov     ecx, edi
0x7CAA64: call    sub_8476F0
0x7CAA69: jmp     loc_7CB2A0
0x7CAA6E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 363
0x7CAA72: push    1
0x7CAA74: push    ebx
0x7CAA75: push    esi
0x7CAA76: push    eax
0x7CAA77: push    ebp
0x7CAA78: mov     ecx, edi
0x7CAA7A: call    sub_8479E0
0x7CAA7F: jmp     loc_7CB2A0
0x7CAA84: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 373
0x7CAA88: push    1
0x7CAA8A: push    ebx
0x7CAA8B: push    esi
0x7CAA8C: push    ecx
0x7CAA8D: push    ebp
0x7CAA8E: mov     ecx, edi
0x7CAA90: call    sub_847D50
0x7CAA95: jmp     loc_7CB2A0
0x7CAA9A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 74
0x7CAA9E: push    ebx
0x7CAA9F: push    esi
0x7CAAA0: push    edx
0x7CAAA1: push    ebp
0x7CAAA2: mov     ecx, edi
0x7CAAA4: call    sub_8419C0
0x7CAAA9: jmp     loc_7CB2A0
0x7CAAAE: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 75
0x7CAAB2: push    ebx
0x7CAAB3: push    esi
0x7CAAB4: push    eax
0x7CAAB5: push    ebp
0x7CAAB6: mov     ecx, edi
0x7CAAB8: call    sub_841B40
0x7CAABD: jmp     loc_7CB2A0
0x7CAAC2: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 79
0x7CAAC6: push    ebx
0x7CAAC7: push    esi
0x7CAAC8: push    ecx
0x7CAAC9: push    ebp
0x7CAACA: mov     ecx, edi
0x7CAACC: call    sub_841D30
0x7CAAD1: jmp     loc_7CB2A0
0x7CAAD6: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 81
0x7CAADA: push    ebx
0x7CAADB: push    esi
0x7CAADC: push    edx
0x7CAADD: push    ebp
0x7CAADE: mov     ecx, edi
0x7CAAE0: call    sub_841EB0
0x7CAAE5: jmp     loc_7CB2A0
0x7CAAEA: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 85
0x7CAAEE: push    ebx
0x7CAAEF: push    esi
0x7CAAF0: push    eax
0x7CAAF1: push    ebp
0x7CAAF2: mov     ecx, edi
0x7CAAF4: call    sub_8420A0
0x7CAAF9: jmp     loc_7CB2A0
0x7CAAFE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 86
0x7CAB02: push    ebx
0x7CAB03: push    esi
0x7CAB04: push    ecx
0x7CAB05: push    ebp
0x7CAB06: mov     ecx, edi
0x7CAB08: call    sub_8422C0
0x7CAB0D: jmp     loc_7CB2A0
0x7CAB12: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 90
0x7CAB16: push    ebx
0x7CAB17: push    esi
0x7CAB18: push    edx
0x7CAB19: push    ebp
0x7CAB1A: mov     ecx, edi
0x7CAB1C: call    sub_842550
0x7CAB21: jmp     loc_7CB2A0
0x7CAB26: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 92
0x7CAB2A: push    ebx
0x7CAB2B: push    esi
0x7CAB2C: push    eax
0x7CAB2D: push    ebp
0x7CAB2E: mov     ecx, edi
0x7CAB30: call    sub_842770
0x7CAB35: jmp     loc_7CB2A0
0x7CAB3A: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 96
0x7CAB3E: push    ebx
0x7CAB3F: push    esi
0x7CAB40: push    ecx
0x7CAB41: push    ebp
0x7CAB42: mov     ecx, edi
0x7CAB44: call    sub_842A00
0x7CAB49: jmp     loc_7CB2A0
0x7CAB4E: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 97
0x7CAB52: push    ebx
0x7CAB53: push    esi
0x7CAB54: push    edx
0x7CAB55: push    ebp
0x7CAB56: mov     ecx, edi
0x7CAB58: call    sub_842B80
0x7CAB5D: jmp     loc_7CB2A0
0x7CAB62: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 101
0x7CAB66: push    ebx
0x7CAB67: push    esi
0x7CAB68: push    eax
0x7CAB69: push    ebp
0x7CAB6A: mov     ecx, edi
0x7CAB6C: call    sub_842D70
0x7CAB71: jmp     loc_7CB2A0
0x7CAB76: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 103
0x7CAB7A: push    ebx
0x7CAB7B: push    esi
0x7CAB7C: push    ecx
0x7CAB7D: push    ebp
0x7CAB7E: mov     ecx, edi
0x7CAB80: call    sub_842EF0
0x7CAB85: jmp     loc_7CB2A0
0x7CAB8A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 107
0x7CAB8E: push    ebx
0x7CAB8F: push    esi
0x7CAB90: push    edx
0x7CAB91: push    ebp
0x7CAB92: mov     ecx, edi
0x7CAB94: call    sub_8430E0
0x7CAB99: jmp     loc_7CB2A0
0x7CAB9E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 108
0x7CABA2: push    ebx
0x7CABA3: push    esi
0x7CABA4: push    eax
0x7CABA5: push    ebp
0x7CABA6: mov     ecx, edi
0x7CABA8: call    sub_843300
0x7CABAD: jmp     loc_7CB2A0
0x7CABB2: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 112
0x7CABB6: push    ebx
0x7CABB7: push    esi
0x7CABB8: push    ecx
0x7CABB9: push    ebp
0x7CABBA: mov     ecx, edi
0x7CABBC: call    sub_843590
0x7CABC1: jmp     loc_7CB2A0
0x7CABC6: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 114
0x7CABCA: push    ebx
0x7CABCB: push    esi
0x7CABCC: push    edx
0x7CABCD: push    ebp
0x7CABCE: mov     ecx, edi
0x7CABD0: call    sub_8437B0
0x7CABD5: jmp     loc_7CB2A0
0x7CABDA: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 118
0x7CABDE: push    ebx
0x7CABDF: push    esi
0x7CABE0: push    eax
0x7CABE1: push    ebp
0x7CABE2: mov     ecx, edi
0x7CABE4: call    sub_83AD30
0x7CABE9: jmp     loc_7CB2A0
0x7CABEE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 119
0x7CABF2: push    ebx
0x7CABF3: push    esi
0x7CABF4: push    ecx
0x7CABF5: push    ebp
0x7CABF6: mov     ecx, edi
0x7CABF8: call    sub_83AEB0
0x7CABFD: jmp     loc_7CB2A0
0x7CAC02: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 120
0x7CAC06: push    ebx
0x7CAC07: push    esi
0x7CAC08: push    edx
0x7CAC09: push    ebp
0x7CAC0A: mov     ecx, edi
0x7CAC0C: call    sub_83B0F0
0x7CAC11: jmp     loc_7CB2A0
0x7CAC16: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 124
0x7CAC1A: push    ebx
0x7CAC1B: push    esi
0x7CAC1C: push    eax
0x7CAC1D: push    ebp
0x7CAC1E: mov     ecx, edi
0x7CAC20: call    sub_83B2E0
0x7CAC25: jmp     loc_7CB2A0
0x7CAC2A: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 125
0x7CAC2E: push    ebx
0x7CAC2F: push    esi
0x7CAC30: push    ecx
0x7CAC31: push    ebp
0x7CAC32: mov     ecx, edi
0x7CAC34: call    sub_83B4F0
0x7CAC39: jmp     loc_7CB2A0
0x7CAC3E: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 126
0x7CAC42: push    ebx
0x7CAC43: push    esi
0x7CAC44: push    edx
0x7CAC45: push    ebp
0x7CAC46: mov     ecx, edi
0x7CAC48: call    sub_83B670
0x7CAC4D: jmp     loc_7CB2A0
0x7CAC52: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 131
0x7CAC56: push    ebx
0x7CAC57: push    esi
0x7CAC58: push    eax
0x7CAC59: push    ebp
0x7CAC5A: mov     ecx, edi
0x7CAC5C: call    sub_83B860
0x7CAC61: jmp     loc_7CB2A0
0x7CAC66: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 379
0x7CAC6A: push    ebx
0x7CAC6B: push    esi
0x7CAC6C: push    ecx
0x7CAC6D: push    ebp
0x7CAC6E: mov     ecx, edi
0x7CAC70: call    sub_83BA70
0x7CAC75: jmp     loc_7CB2A0
0x7CAC7A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 146
0x7CAC7E: push    ebx
0x7CAC7F: push    esi
0x7CAC80: push    edx
0x7CAC81: push    ebp
0x7CAC82: mov     ecx, edi
0x7CAC84: call    sub_83CC80
0x7CAC89: jmp     loc_7CB2A0
0x7CAC8E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 147
0x7CAC92: push    ebx
0x7CAC93: push    esi
0x7CAC94: push    eax
0x7CAC95: push    ebp
0x7CAC96: mov     ecx, edi
0x7CAC98: call    sub_83CE00
0x7CAC9D: jmp     loc_7CB2A0
0x7CACA2: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 151
0x7CACA6: push    ebx
0x7CACA7: push    esi
0x7CACA8: push    ecx
0x7CACA9: push    ebp
0x7CACAA: mov     ecx, edi
0x7CACAC: call    sub_83CFF0
0x7CACB1: jmp     loc_7CB2A0
0x7CACB6: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 152
0x7CACBA: push    ebx
0x7CACBB: push    esi
0x7CACBC: push    edx
0x7CACBD: push    ebp
0x7CACBE: mov     ecx, edi
0x7CACC0: call    sub_83D200
0x7CACC5: jmp     loc_7CB2A0
0x7CACCA: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 153
0x7CACCE: push    ebx
0x7CACCF: push    esi
0x7CACD0: push    eax
0x7CACD1: push    ebp
0x7CACD2: mov     ecx, edi
0x7CACD4: call    sub_83D380
0x7CACD9: jmp     loc_7CB2A0
0x7CACDE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 158
0x7CACE2: push    ebx
0x7CACE3: push    esi
0x7CACE4: push    ecx
0x7CACE5: push    ebp
0x7CACE6: mov     ecx, edi
0x7CACE8: call    sub_83D570
0x7CACED: jmp     loc_7CB2A0
0x7CACF2: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 132
0x7CACF6: push    ebx
0x7CACF7: push    esi
0x7CACF8: push    edx
0x7CACF9: push    ebp
0x7CACFA: mov     ecx, edi
0x7CACFC: call    sub_83BBF0
0x7CAD01: jmp     loc_7CB2A0
0x7CAD06: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 133
0x7CAD0A: push    ebx
0x7CAD0B: push    esi
0x7CAD0C: push    eax
0x7CAD0D: push    ebp
0x7CAD0E: mov     ecx, edi
0x7CAD10: call    sub_83BE10
0x7CAD15: jmp     loc_7CB2A0
0x7CAD1A: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 134
0x7CAD1E: push    ebx
0x7CAD1F: push    esi
0x7CAD20: push    ecx
0x7CAD21: push    ebp
0x7CAD22: mov     ecx, edi
0x7CAD24: call    sub_83BFE0
0x7CAD29: jmp     loc_7CB2A0
0x7CAD2E: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 138
0x7CAD32: push    ebx
0x7CAD33: push    esi
0x7CAD34: push    edx
0x7CAD35: push    ebp
0x7CAD36: mov     ecx, edi
0x7CAD38: call    sub_83C270
0x7CAD3D: jmp     loc_7CB2A0
0x7CAD42: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 139
0x7CAD46: push    ebx
0x7CAD47: push    esi
0x7CAD48: push    eax
0x7CAD49: push    ebp
0x7CAD4A: mov     ecx, edi
0x7CAD4C: call    sub_83C520
0x7CAD51: jmp     loc_7CB2A0
0x7CAD56: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 140
0x7CAD5A: push    ebx
0x7CAD5B: push    esi
0x7CAD5C: push    ecx
0x7CAD5D: push    ebp
0x7CAD5E: mov     ecx, edi
0x7CAD60: call    sub_83C740
0x7CAD65: jmp     loc_7CB2A0
0x7CAD6A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 145
0x7CAD6E: push    ebx
0x7CAD6F: push    esi
0x7CAD70: push    edx
0x7CAD71: push    ebp
0x7CAD72: mov     ecx, edi
0x7CAD74: call    sub_83C9D0
0x7CAD79: jmp     loc_7CB2A0
0x7CAD7E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 159
0x7CAD82: push    ebx
0x7CAD83: push    esi
0x7CAD84: push    eax
0x7CAD85: push    ebp
0x7CAD86: mov     ecx, edi
0x7CAD88: call    sub_83D780
0x7CAD8D: jmp     loc_7CB2A0
0x7CAD92: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 160
0x7CAD96: push    ebx
0x7CAD97: push    esi
0x7CAD98: push    ecx
0x7CAD99: push    ebp
0x7CAD9A: mov     ecx, edi
0x7CAD9C: call    sub_83D9A0
0x7CADA1: jmp     loc_7CB2A0
0x7CADA6: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 164
0x7CADAA: push    ebx
0x7CADAB: push    esi
0x7CADAC: push    edx
0x7CADAD: push    ebp
0x7CADAE: mov     ecx, edi
0x7CADB0: call    sub_83DC30
0x7CADB5: jmp     loc_7CB2A0
0x7CADBA: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 165
0x7CADBE: push    ebx
0x7CADBF: push    esi
0x7CADC0: push    eax
0x7CADC1: push    ebp
0x7CADC2: mov     ecx, edi
0x7CADC4: call    sub_83DEE0
0x7CADC9: jmp     loc_7CB2A0
0x7CADCE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 166
0x7CADD2: push    ebx
0x7CADD3: push    esi
0x7CADD4: push    ecx
0x7CADD5: push    ebp
0x7CADD6: mov     ecx, edi
0x7CADD8: call    sub_83E100
0x7CADDD: jmp     loc_7CB2A0
0x7CADE2: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 171
0x7CADE6: push    ebx
0x7CADE7: push    esi
0x7CADE8: push    edx
0x7CADE9: push    ebp
0x7CADEA: mov     ecx, edi
0x7CADEC: call    sub_83E390
0x7CADF1: jmp     loc_7CB2A0
0x7CADF6: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 172
0x7CADFA: push    ebx
0x7CADFB: push    esi
0x7CADFC: push    eax
0x7CADFD: push    ebp
0x7CADFE: mov     ecx, edi
0x7CAE00: call    sub_83E640
0x7CAE05: jmp     loc_7CB2A0
0x7CAE0A: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 173
0x7CAE0E: push    ebx
0x7CAE0F: push    esi
0x7CAE10: push    ecx
0x7CAE11: push    ebp
0x7CAE12: mov     ecx, edi
0x7CAE14: call    sub_83E7C0
0x7CAE19: jmp     loc_7CB2A0
0x7CAE1E: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 174
0x7CAE22: push    ebx
0x7CAE23: push    esi
0x7CAE24: push    edx
0x7CAE25: push    ebp
0x7CAE26: mov     ecx, edi
0x7CAE28: call    sub_83E9B0
0x7CAE2D: jmp     loc_7CB2A0
0x7CAE32: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 178
0x7CAE36: push    ebx
0x7CAE37: push    esi
0x7CAE38: push    eax
0x7CAE39: push    ebp
0x7CAE3A: mov     ecx, edi
0x7CAE3C: call    sub_83EBC0
0x7CAE41: jmp     loc_7CB2A0
0x7CAE46: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 179
0x7CAE4A: push    ebx
0x7CAE4B: push    esi
0x7CAE4C: push    ecx
0x7CAE4D: push    ebp
0x7CAE4E: mov     ecx, edi
0x7CAE50: call    sub_83ED40
0x7CAE55: jmp     loc_7CB2A0
0x7CAE5A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 180
0x7CAE5E: push    ebx
0x7CAE5F: push    esi
0x7CAE60: push    edx
0x7CAE61: push    ebp
0x7CAE62: mov     ecx, edi
0x7CAE64: call    sub_83EF30
0x7CAE69: jmp     loc_7CB2A0
0x7CAE6E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 198
0x7CAE72: push    ebx
0x7CAE73: push    esi
0x7CAE74: push    eax
0x7CAE75: push    ebp
0x7CAE76: mov     ecx, edi
0x7CAE78: call    sub_840000
0x7CAE7D: jmp     loc_7CB2A0
0x7CAE82: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 199
0x7CAE86: push    ebx
0x7CAE87: push    esi
0x7CAE88: push    ecx
0x7CAE89: push    ebp
0x7CAE8A: mov     ecx, edi
0x7CAE8C: call    sub_840180
0x7CAE91: jmp     loc_7CB2A0
0x7CAE96: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 200
0x7CAE9A: push    ebx
0x7CAE9B: push    esi
0x7CAE9C: push    edx
0x7CAE9D: push    ebp
0x7CAE9E: mov     ecx, edi
0x7CAEA0: call    sub_840370
0x7CAEA5: jmp     loc_7CB2A0
0x7CAEAA: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 204
0x7CAEAE: push    ebx
0x7CAEAF: push    esi
0x7CAEB0: push    eax
0x7CAEB1: push    ebp
0x7CAEB2: mov     ecx, edi
0x7CAEB4: call    sub_840580
0x7CAEB9: jmp     loc_7CB2A0
0x7CAEBE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 205
0x7CAEC2: push    ebx
0x7CAEC3: push    esi
0x7CAEC4: push    ecx
0x7CAEC5: push    ebp
0x7CAEC6: mov     ecx, edi
0x7CAEC8: call    sub_840700
0x7CAECD: jmp     loc_7CB2A0
0x7CAED2: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 206
0x7CAED6: push    ebx
0x7CAED7: push    esi
0x7CAED8: push    edx
0x7CAED9: push    ebp
0x7CAEDA: mov     ecx, edi
0x7CAEDC: call    sub_8408F0
0x7CAEE1: jmp     loc_7CB2A0
0x7CAEE6: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 185
0x7CAEEA: push    ebx
0x7CAEEB: push    esi
0x7CAEEC: push    eax
0x7CAEED: push    ebp
0x7CAEEE: mov     ecx, edi
0x7CAEF0: call    sub_83F140
0x7CAEF5: jmp     loc_7CB2A0
0x7CAEFA: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 186
0x7CAEFE: push    ebx
0x7CAEFF: push    esi
0x7CAF00: push    ecx
0x7CAF01: push    ebp
0x7CAF02: mov     ecx, edi
0x7CAF04: call    sub_83F360
0x7CAF09: jmp     loc_7CB2A0
0x7CAF0E: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 187
0x7CAF12: push    ebx
0x7CAF13: push    esi
0x7CAF14: push    edx
0x7CAF15: push    ebp
0x7CAF16: mov     ecx, edi
0x7CAF18: call    sub_83F5F0
0x7CAF1D: jmp     loc_7CB2A0
0x7CAF22: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 191
0x7CAF26: push    ebx
0x7CAF27: push    esi
0x7CAF28: push    eax
0x7CAF29: push    ebp
0x7CAF2A: mov     ecx, edi
0x7CAF2C: call    sub_83F8A0
0x7CAF31: jmp     loc_7CB2A0
0x7CAF36: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 192
0x7CAF3A: push    ebx
0x7CAF3B: push    esi
0x7CAF3C: push    ecx
0x7CAF3D: push    ebp
0x7CAF3E: mov     ecx, edi
0x7CAF40: call    sub_83FAC0
0x7CAF45: jmp     loc_7CB2A0
0x7CAF4A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 193
0x7CAF4E: push    ebx
0x7CAF4F: push    esi
0x7CAF50: push    edx
0x7CAF51: push    ebp
0x7CAF52: mov     ecx, edi
0x7CAF54: call    sub_83FD50
0x7CAF59: jmp     loc_7CB2A0
0x7CAF5E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 211
0x7CAF62: push    ebx
0x7CAF63: push    esi
0x7CAF64: push    eax
0x7CAF65: push    ebp
0x7CAF66: mov     ecx, edi
0x7CAF68: call    sub_840B00
0x7CAF6D: jmp     loc_7CB2A0
0x7CAF72: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 212
0x7CAF76: push    ebx
0x7CAF77: push    esi
0x7CAF78: push    ecx
0x7CAF79: push    ebp
0x7CAF7A: mov     ecx, edi
0x7CAF7C: call    sub_840D20
0x7CAF81: jmp     loc_7CB2A0
0x7CAF86: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 213
0x7CAF8A: push    ebx
0x7CAF8B: push    esi
0x7CAF8C: push    edx
0x7CAF8D: push    ebp
0x7CAF8E: mov     ecx, edi
0x7CAF90: call    sub_840FB0
0x7CAF95: jmp     loc_7CB2A0
0x7CAF9A: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 217
0x7CAF9E: push    ebx
0x7CAF9F: push    esi
0x7CAFA0: push    eax
0x7CAFA1: push    ebp
0x7CAFA2: mov     ecx, edi
0x7CAFA4: call    sub_841260
0x7CAFA9: jmp     loc_7CB2A0
0x7CAFAE: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 218
0x7CAFB2: push    ebx
0x7CAFB3: push    esi
0x7CAFB4: push    ecx
0x7CAFB5: push    ebp
0x7CAFB6: mov     ecx, edi
0x7CAFB8: call    sub_841480
0x7CAFBD: jmp     loc_7CB2A0
0x7CAFC2: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 219
0x7CAFC6: push    ebx
0x7CAFC7: push    esi
0x7CAFC8: push    edx
0x7CAFC9: push    ebp
0x7CAFCA: mov     ecx, edi
0x7CAFCC: call    sub_841710
0x7CAFD1: jmp     loc_7CB2A0
0x7CAFD6: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 232
0x7CAFDA: push    ebx
0x7CAFDB: push    esi
0x7CAFDC: push    eax
0x7CAFDD: push    ebp
0x7CAFDE: mov     ecx, edi
0x7CAFE0: call    sub_843A40
0x7CAFE5: jmp     loc_7CB2A0
0x7CAFEA: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 235
0x7CAFEE: push    ebx
0x7CAFEF: push    esi
0x7CAFF0: push    ecx
0x7CAFF1: push    ebp
0x7CAFF2: mov     ecx, edi
0x7CAFF4: call    sub_843B30
0x7CAFF9: jmp     loc_7CB2A0
0x7CAFFE: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 246
0x7CB002: push    ebx
0x7CB003: push    esi
0x7CB004: push    edx
0x7CB005: push    ebp
0x7CB006: mov     ecx, edi
0x7CB008: call    sub_843C10
0x7CB00D: jmp     loc_7CB2A0
0x7CB012: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 249
0x7CB016: push    ebx
0x7CB017: push    esi
0x7CB018: push    eax
0x7CB019: push    ebp
0x7CB01A: mov     ecx, edi
0x7CB01C: call    sub_843CF0
0x7CB021: jmp     loc_7CB2A0
0x7CB026: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 277
0x7CB02A: push    ebx
0x7CB02B: push    esi
0x7CB02C: push    ecx
0x7CB02D: push    ebp
0x7CB02E: mov     ecx, edi
0x7CB030: call    sub_843DD0
0x7CB035: jmp     loc_7CB2A0
0x7CB03A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 278
0x7CB03E: push    ebx
0x7CB03F: push    esi
0x7CB040: push    edx
0x7CB041: push    ebp
0x7CB042: mov     ecx, edi
0x7CB044: call    sub_843ED0
0x7CB049: jmp     loc_7CB2A0
0x7CB04E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 280
0x7CB052: push    ebx
0x7CB053: push    esi
0x7CB054: push    eax
0x7CB055: push    ebp
0x7CB056: mov     ecx, edi
0x7CB058: call    sub_843FD0
0x7CB05D: jmp     loc_7CB2A0
0x7CB062: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 281
0x7CB066: push    ebx
0x7CB067: push    esi
0x7CB068: push    ecx
0x7CB069: push    ebp
0x7CB06A: mov     ecx, edi
0x7CB06C: call    sub_8440D0
0x7CB071: jmp     loc_7CB2A0
0x7CB076: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 284
0x7CB07A: push    ebx
0x7CB07B: push    esi
0x7CB07C: push    edx
0x7CB07D: push    ebp
0x7CB07E: mov     ecx, edi
0x7CB080: call    sub_8441D0
0x7CB085: jmp     loc_7CB2A0
0x7CB08A: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 285
0x7CB08E: push    ebx
0x7CB08F: push    esi
0x7CB090: push    eax
0x7CB091: push    ebp
0x7CB092: mov     ecx, edi
0x7CB094: call    sub_844370
0x7CB099: jmp     loc_7CB2A0
0x7CB09E: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 287
0x7CB0A2: push    ebx
0x7CB0A3: push    esi
0x7CB0A4: push    ecx
0x7CB0A5: push    ebp
0x7CB0A6: mov     ecx, edi
0x7CB0A8: call    sub_844510
0x7CB0AD: jmp     loc_7CB2A0
0x7CB0B2: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 288
0x7CB0B6: push    ebx
0x7CB0B7: push    esi
0x7CB0B8: push    edx
0x7CB0B9: push    ebp
0x7CB0BA: mov     ecx, edi
0x7CB0BC: call    sub_8446B0
0x7CB0C1: jmp     loc_7CB2A0
0x7CB0C6: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 291
0x7CB0CA: push    ebx
0x7CB0CB: push    esi
0x7CB0CC: push    eax
0x7CB0CD: push    ebp
0x7CB0CE: mov     ecx, edi
0x7CB0D0: call    sub_844850
0x7CB0D5: jmp     loc_7CB2A0
0x7CB0DA: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 292
0x7CB0DE: push    ebx
0x7CB0DF: push    esi
0x7CB0E0: push    ecx
0x7CB0E1: push    ebp
0x7CB0E2: mov     ecx, edi
0x7CB0E4: call    sub_844950
0x7CB0E9: jmp     loc_7CB2A0
0x7CB0EE: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 294
0x7CB0F2: push    ebx
0x7CB0F3: push    esi
0x7CB0F4: push    edx
0x7CB0F5: push    ebp
0x7CB0F6: mov     ecx, edi
0x7CB0F8: call    sub_844A50
0x7CB0FD: jmp     loc_7CB2A0
0x7CB102: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 295
0x7CB106: push    ebx
0x7CB107: push    esi
0x7CB108: push    eax
0x7CB109: push    ebp
0x7CB10A: mov     ecx, edi
0x7CB10C: call    sub_844B50
0x7CB111: jmp     loc_7CB2A0
0x7CB116: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 388
0x7CB11A: push    ebx
0x7CB11B: push    esi
0x7CB11C: push    ecx
0x7CB11D: push    ebp
0x7CB11E: mov     ecx, edi
0x7CB120: call    sub_844C50
0x7CB125: jmp     loc_7CB2A0
0x7CB12A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 389
0x7CB12E: push    ebx
0x7CB12F: push    esi
0x7CB130: push    edx
0x7CB131: push    ebp
0x7CB132: mov     ecx, edi
0x7CB134: call    sub_844E30
0x7CB139: jmp     loc_7CB2A0
0x7CB13E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 390
0x7CB142: push    ebx
0x7CB143: push    esi
0x7CB144: push    eax
0x7CB145: push    ebp
0x7CB146: mov     ecx, edi
0x7CB148: call    sub_845010
0x7CB14D: jmp     loc_7CB2A0
0x7CB152: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 391
0x7CB156: push    ebx
0x7CB157: push    esi
0x7CB158: push    ecx
0x7CB159: push    ebp
0x7CB15A: mov     ecx, edi
0x7CB15C: call    sub_8451B0
0x7CB161: jmp     loc_7CB2A0
0x7CB166: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 394
0x7CB16A: push    ebx
0x7CB16B: push    esi
0x7CB16C: push    edx
0x7CB16D: push    ebp
0x7CB16E: mov     ecx, edi
0x7CB170: call    sub_8453F0
0x7CB175: jmp     loc_7CB2A0
0x7CB17A: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 395
0x7CB17E: push    ebx
0x7CB17F: push    esi
0x7CB180: push    eax
0x7CB181: push    ebp
0x7CB182: mov     ecx, edi
0x7CB184: call    sub_845870
0x7CB189: jmp     loc_7CB2A0
0x7CB18E: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 375
0x7CB192: push    ebx
0x7CB193: push    esi
0x7CB194: push    ecx
0x7CB195: push    ebp
0x7CB196: mov     ecx, edi
0x7CB198: call    sub_845CF0
0x7CB19D: jmp     loc_7CB2A0
0x7CB1A2: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 376
0x7CB1A6: push    ebx
0x7CB1A7: push    esi
0x7CB1A8: push    edx
0x7CB1A9: push    ebp
0x7CB1AA: mov     ecx, edi
0x7CB1AC: call    sub_845EC0
0x7CB1B1: jmp     loc_7CB2A0
0x7CB1B6: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 377
0x7CB1BA: push    ebx
0x7CB1BB: push    esi
0x7CB1BC: push    eax
0x7CB1BD: push    ebp
0x7CB1BE: mov     ecx, edi
0x7CB1C0: call    sub_846090
0x7CB1C5: jmp     loc_7CB2A0
0x7CB1CA: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 414
0x7CB1CE: push    ebx
0x7CB1CF: push    esi
0x7CB1D0: push    ecx
0x7CB1D1: push    ebp
0x7CB1D2: mov     ecx, edi
0x7CB1D4: call    sub_850930
0x7CB1D9: jmp     loc_7CB2A0
0x7CB1DE: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 415
0x7CB1E2: push    ebx
0x7CB1E3: push    esi
0x7CB1E4: push    edx
0x7CB1E5: push    ebp
0x7CB1E6: mov     ecx, edi
0x7CB1E8: call    sub_850A40
0x7CB1ED: jmp     loc_7CB2A0
0x7CB1F2: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 10
0x7CB1F6: push    ebx
0x7CB1F7: push    esi
0x7CB1F8: push    eax
0x7CB1F9: push    ebp
0x7CB1FA: mov     ecx, edi
0x7CB1FC: call    sub_850B50
0x7CB201: jmp     loc_7CB2A0
0x7CB206: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 11
0x7CB20A: push    ebx
0x7CB20B: push    esi
0x7CB20C: push    ecx
0x7CB20D: push    ebp
0x7CB20E: mov     ecx, edi
0x7CB210: call    sub_850BE0
0x7CB215: jmp     loc_7CB2A0
0x7CB21A: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 352
0x7CB21E: push    ebx
0x7CB21F: push    esi
0x7CB220: push    edx
0x7CB221: push    ebp
0x7CB222: mov     ecx, edi
0x7CB224: call    sub_8483E0
0x7CB229: jmp     short loc_7CB2A0
0x7CB22B: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 353
0x7CB22F: push    ebx
0x7CB230: push    esi
0x7CB231: push    eax
0x7CB232: push    ebp
0x7CB233: mov     ecx, edi
0x7CB235: call    sub_8484C0
0x7CB23A: jmp     short loc_7CB2A0
0x7CB23C: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 354
0x7CB240: push    ebx
0x7CB241: push    esi
0x7CB242: push    ecx
0x7CB243: push    ebp
0x7CB244: mov     ecx, edi
0x7CB246: call    sub_8485A0
0x7CB24B: jmp     short loc_7CB2A0
0x7CB24D: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 355
0x7CB251: push    ebx
0x7CB252: push    esi
0x7CB253: push    edx
0x7CB254: push    ebp
0x7CB255: mov     ecx, edi
0x7CB257: call    sub_848680
0x7CB25C: jmp     short loc_7CB2A0
0x7CB25E: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 356
0x7CB262: push    ebx
0x7CB263: push    esi
0x7CB264: push    eax
0x7CB265: push    ebp
0x7CB266: mov     ecx, edi
0x7CB268: call    sub_848710
0x7CB26D: jmp     short loc_7CB2A0
0x7CB26F: mov     ecx, [esp+70h+arg_4]; jumptable 007CA265 case 357
0x7CB273: push    ebx
0x7CB274: push    esi
0x7CB275: push    ecx
0x7CB276: push    ebp
0x7CB277: mov     ecx, edi
0x7CB279: call    sub_8487A0
0x7CB27E: jmp     short loc_7CB2A0
0x7CB280: mov     edx, [esp+70h+arg_4]; jumptable 007CA265 case 358
0x7CB284: push    ebx
0x7CB285: push    esi
0x7CB286: push    edx
0x7CB287: push    ebp
0x7CB288: mov     ecx, edi
0x7CB28A: call    sub_848830
0x7CB28F: jmp     short loc_7CB2A0
0x7CB291: mov     eax, [esp+70h+arg_4]; jumptable 007CA265 case 359
0x7CB295: push    ebx
0x7CB296: push    esi
0x7CB297: push    eax
0x7CB298: push    ebp
0x7CB299: mov     ecx, edi
0x7CB29B: call    sub_8488C0
0x7CB2A0: mov     ebp, [esp+70h+var_58]
0x7CB2A4: lea     ecx, [ebp-34h]
0x7CB2A7: cmp     ecx, 160h
0x7CB2AD: ja      loc_7CB4A5
0x7CB2B3: cmp     ebp, 160h
0x7CB2B9: jl      short loc_7CB2C7
0x7CB2BB: cmp     ebp, 167h
0x7CB2C1: jle     loc_7CB4A5
0x7CB2C7: cmp     ebp, 18Ah
0x7CB2CD: jl      short loc_7CB2DB
0x7CB2CF: cmp     ebp, 18Fh
0x7CB2D5: jle     loc_7CB4A5
0x7CB2DB: call    sub_7C8510
0x7CB2E0: test    al, al
0x7CB2E2: jz      loc_7CB44D
0x7CB2E8: cmp     [esp+70h+var_59], 0
0x7CB2ED: jnz     loc_7CB37C
0x7CB2F3: fld     dword ptr [ebx+20h]
0x7CB2F6: fstp    [esp+70h+arg_4]
0x7CB2FA: fld1
0x7CB2FC: fcomp   [esp+70h+arg_4]
0x7CB300: fnstsw  ax
0x7CB302: test    ah, 44h
0x7CB305: jp      short loc_7CB37C
0x7CB307: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB30E: push    0
0x7CB310: push    0
0x7CB312: push    1Bh
0x7CB314: call    sub_76C730
0x7CB319: cmp     [esp+70h+var_5A], 0
0x7CB31E: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB325: push    0
0x7CB327: jnz     short loc_7CB332
0x7CB329: push    0
0x7CB32B: push    0Fh
0x7CB32D: jmp     loc_7CB42B
0x7CB332: push    1
0x7CB334: push    0Fh
0x7CB336: call    sub_76C730
0x7CB33B: mov     eax, [esi+8]
0x7CB33E: mov     al, [eax+1Ah]
0x7CB341: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB348: movzx   edx, al
0x7CB34B: push    0
0x7CB34D: push    edx
0x7CB34E: push    18h
0x7CB350: call    sub_76C730
0x7CB355: mov     esi, [esi+8]
0x7CB358: movzx   eax, word ptr [esi+18h]
0x7CB35C: shr     eax, 0Ah
0x7CB35F: and     eax, 7
0x7CB362: cmp     eax, 6; switch 7 cases
0x7CB365: ja      def_7CB36B; jumptable 007CB36B default case
0x7CB36B: jmp     ds:jpt_7CB36B[eax*4]; switch jump
0x7CB372: mov     eax, 2; jumptable 007CB36B case 1
0x7CB377: jmp     loc_7CB41F
0x7CB37C: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB383: push    0
0x7CB385: push    1
0x7CB387: push    1Bh
0x7CB389: call    sub_76C730
0x7CB38E: mov     edi, [edi+18h]
0x7CB391: mov     eax, [esi+8]
0x7CB394: mov     edx, [edi]
0x7CB396: push    eax
0x7CB397: mov     eax, [edx+8]
0x7CB39A: mov     ecx, edi
0x7CB39C: call    eax
0x7CB39E: cmp     [esp+70h+var_5A], 0
0x7CB3A3: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB3AA: push    0
0x7CB3AC: jnz     short loc_7CB3B4
0x7CB3AE: push    0
0x7CB3B0: push    0Fh
0x7CB3B2: jmp     short loc_7CB42B
0x7CB3B4: push    1
0x7CB3B6: push    0Fh
0x7CB3B8: call    sub_76C730
0x7CB3BD: mov     eax, [esi+8]
0x7CB3C0: mov     al, [eax+1Ah]
0x7CB3C3: mov     ecx, ds:0B455A0h[ebp*4]
0x7CB3CA: movzx   edx, al
0x7CB3CD: push    0
0x7CB3CF: push    edx
0x7CB3D0: push    18h
0x7CB3D2: call    sub_76C730
0x7CB3D7: mov     esi, [esi+8]
0x7CB3DA: movzx   eax, word ptr [esi+18h]
0x7CB3DE: shr     eax, 0Ah
0x7CB3E1: and     eax, 7
0x7CB3E4: cmp     eax, 6; switch 7 cases
0x7CB3E7: ja      short def_7CB36B; jumptable 007CB36B default case
0x7CB3E9: jmp     ds:jpt_7CB3E9[eax*4]; switch jump
0x7CB3F0: mov     eax, 8; jumptable 007CB36B case 0
0x7CB3F5: jmp     short loc_7CB41F
0x7CB3F7: mov     eax, 3; jumptable 007CB36B case 2
0x7CB3FC: jmp     short loc_7CB41F
0x7CB3FE: mov     eax, 4; jumptable 007CB36B case 3
0x7CB403: jmp     short loc_7CB41F
0x7CB405: mov     eax, 5; jumptable 007CB36B case 4
0x7CB40A: jmp     short loc_7CB41F
0x7CB40C: mov     eax, 6; jumptable 007CB36B case 5
0x7CB411: jmp     short loc_7CB41F
0x7CB413: mov     eax, 7; jumptable 007CB36B case 6
0x7CB418: jmp     short loc_7CB41F
