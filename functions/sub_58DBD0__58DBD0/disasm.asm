0x58DBD0: push    0FFFFFFFFh
0x58DBD2: push    offset SEH_58DBD0
0x58DBD7: mov     eax, large fs:0
0x58DBDD: push    eax
0x58DBDE: mov     eax, 10ACh
0x58DBE3: call    __alloca_probe
0x58DBE8: mov     eax, ds:0B30AACh
0x58DBED: xor     eax, esp
0x58DBEF: mov     [esp+10B8h+var_10], eax
0x58DBF6: push    ebx
0x58DBF7: push    ebp
0x58DBF8: push    esi
0x58DBF9: push    edi
0x58DBFA: mov     eax, ds:0B30AACh
0x58DBFF: xor     eax, esp
0x58DC01: push    eax; ArgList
0x58DC02: lea     eax, [esp+10CCh+var_C]
0x58DC09: mov     large fs:0, eax
0x58DC0F: mov     edi, [esp+10CCh+Str]
0x58DC16: push    14h; Size
0x58DC18: mov     [esp+10D0h+var_10A4], edi
0x58DC1C: call    FormHeapAlloc
0x58DC21: add     esp, 4
0x58DC24: mov     [esp+10CCh+var_109C], eax
0x58DC28: xor     esi, esi
0x58DC2A: cmp     eax, esi
0x58DC2C: mov     [esp+10CCh+var_4], esi
0x58DC33: jz      short loc_58DC42
0x58DC35: mov     ecx, eax
0x58DC37: call    sub_58CD30
0x58DC3C: mov     [esp+10CCh+var_10A8], eax
0x58DC40: jmp     short loc_58DC46
0x58DC42: mov     [esp+10CCh+var_10A8], esi
0x58DC46: mov     eax, [esp+10CCh+arg_4]
0x58DC4D: xor     ebp, ebp
0x58DC4F: cmp     eax, esi
0x58DC51: mov     [esp+10CCh+var_4], 0FFFFFFFFh
0x58DC5C: mov     [esp+10CCh+var_109C], ebp
0x58DC60: jz      short loc_58DC73
0x58DC62: mov     [esp+10CCh+var_10AC], eax
0x58DC66: mov     eax, [esp+10CCh+arg_8]
0x58DC6D: mov     [esp+10CCh+var_1098], eax
0x58DC71: jmp     short loc_58DC91
0x58DC73: push    esi; char
0x58DC74: push    edi; Str
0x58DC75: call    sub_585220
0x58DC7A: mov     ebp, eax
0x58DC7C: mov     ecx, [ebp+4]
0x58DC7F: mov     edx, [ebp+0]
0x58DC82: add     esp, 8
0x58DC85: mov     [esp+10CCh+var_109C], eax
0x58DC89: mov     [esp+10CCh+var_10AC], ecx
0x58DC8D: mov     [esp+10CCh+var_1098], edx
0x58DC91: xor     bl, bl
0x58DC93: xor     edi, edi
0x58DC95: cmp     ebp, esi
0x58DC97: mov     [esp+10CCh+var_1010], 0
0x58DC9F: mov     [esp+10CCh+var_1094], esi
0x58DCA3: mov     [esp+10CCh+var_10AD], bl
0x58DCA7: mov     [esp+10CCh+var_10B5], bl
0x58DCAB: mov     [esp+10CCh+var_10B4], 1
0x58DCB3: mov     [esp+10CCh+var_10A0], esi
0x58DCB7: jz      short loc_58DCDF
0x58DCB9: push    1
0x58DCBB: push    ebp
0x58DCBC: call    LoadXML_LoadSrcFiles
0x58DCC1: add     esp, 8
0x58DCC4: cmp     eax, ebp
0x58DCC6: mov     [esp+10CCh+var_10A0], eax
0x58DCCA: jz      short loc_58DCDB
0x58DCCC: mov     ecx, [eax+4]
0x58DCCF: mov     edx, [eax]
0x58DCD1: mov     [esp+10CCh+var_10AC], ecx
0x58DCD5: mov     [esp+10CCh+var_1098], edx
0x58DCD9: jmp     short loc_58DCDF
0x58DCDB: mov     [esp+10CCh+var_10A0], esi
0x58DCDF: mov     edx, [esp+10CCh+var_1098]
0x58DCE3: xor     ebp, ebp
0x58DCE5: test    edx, edx
0x58DCE7: jbe     loc_58E1DA
0x58DCED: lea     ecx, [ecx+0]
0x58DCF0: mov     ecx, [esp+10CCh+var_10AC]
0x58DCF4: mov     al, [ecx+ebp]
0x58DCF7: cmp     al, 0Ah
0x58DCF9: jnz     short loc_58DD00
0x58DCFB: add     [esp+10CCh+var_10B4], 1
0x58DD00: test    edi, edi
0x58DD02: jnz     short loc_58DD4A
0x58DD04: cmp     al, 3Ch ; '<'
0x58DD06: jnz     loc_58E1CB
0x58DD0C: lea     eax, [ebp+3]
0x58DD0F: cmp     eax, edx
0x58DD11: jnb     short loc_58DD34
0x58DD13: cmp     byte ptr [ecx+ebp+1], 21h ; '!'
0x58DD18: jnz     short loc_58DD34
0x58DD1A: cmp     byte ptr [ecx+ebp+2], 2Dh ; '-'
0x58DD1F: jnz     short loc_58DD34
0x58DD21: cmp     byte ptr [ecx+ebp+3], 2Dh ; '-'
0x58DD26: jnz     short loc_58DD34
0x58DD28: xor     bl, bl
0x58DD2A: mov     edi, 4
0x58DD2F: jmp     loc_58E1CB
0x58DD34: mov     edi, 1
0x58DD39: mov     [esp+10CCh+Src], 0
0x58DD3E: mov     [esp+10CCh+var_10B5], 0
0x58DD43: xor     esi, esi
0x58DD45: jmp     loc_58E1CB
0x58DD4A: cmp     edi, 1
0x58DD4D: jnz     loc_58DE62
0x58DD53: cmp     [esp+10CCh+Src], 0
0x58DD58: jnz     short loc_58DD68
0x58DD5A: cmp     al, 2Fh ; '/'
0x58DD5C: jnz     short loc_58DD68
0x58DD5E: mov     [esp+10CCh+var_10B5], 1
0x58DD63: jmp     loc_58E1CB
0x58DD68: cmp     al, 3Eh ; '>'
0x58DD6A: jz      loc_58DDF3
0x58DD70: lea     ecx, [ebp+1]
0x58DD73: cmp     ecx, edx
0x58DD75: jnb     short loc_58DD86
0x58DD77: cmp     al, 2Fh ; '/'
0x58DD79: jnz     short loc_58DD86
0x58DD7B: mov     edx, [esp+10CCh+var_10AC]
0x58DD7F: cmp     byte ptr [edx+ebp+1], 3Eh ; '>'
0x58DD84: jz      short loc_58DDF3
0x58DD86: cmp     al, 20h ; ' '
0x58DD88: ja      short loc_58DDCF
0x58DD8A: cmp     [esp+10CCh+Src], 0
0x58DD8F: jz      loc_58E1CB
0x58DD95: cmp     [esp+10CCh+var_10B5], 0
0x58DD9A: push    0; int
0x58DD9C: jz      short loc_58DDAC
0x58DD9E: mov     eax, [esp+10D0h+var_10B4]
0x58DDA2: push    eax
0x58DDA3: lea     ecx, [esp+10D4h+Src]
0x58DDA7: push    ecx
0x58DDA8: push    0Fh
0x58DDAA: jmp     short loc_58DDB8
0x58DDAC: mov     edx, [esp+10D0h+var_10B4]
0x58DDB0: push    edx; int
0x58DDB1: lea     eax, [esp+10D4h+Src]
0x58DDB5: push    eax; Src
0x58DDB6: push    0Ah; int
0x58DDB8: mov     ecx, [esp+10DCh+var_10A8]
0x58DDBC: call    sub_588A60
0x58DDC1: mov     ecx, eax
0x58DDC3: call    sub_58D2F0
0x58DDC8: xor     esi, esi
0x58DDCA: jmp     loc_58E1C9
0x58DDCF: test    bl, bl
0x58DDD1: jz      short loc_58DDE2
0x58DDD3: sub     ebp, 1
0x58DDD6: mov     edi, 5
0x58DDDB: xor     bl, bl
0x58DDDD: jmp     loc_58E1CB
0x58DDE2: mov     [esp+esi+10CCh+Src], al
0x58DDE6: add     esi, 1
0x58DDE9: mov     [esp+esi+10CCh+Src], 0
0x58DDEE: jmp     loc_58E1CB
0x58DDF3: cmp     [esp+10CCh+Src], 0
0x58DDF8: jz      short loc_58DE3F
0x58DDFA: cmp     [esp+10CCh+var_10B5], 0
0x58DDFF: push    0; int
0x58DE01: jz      short loc_58DE21
0x58DE03: mov     ecx, [esp+10D0h+var_10B4]
0x58DE07: push    ecx; int
0x58DE08: mov     ecx, [esp+10D4h+var_10A8]
0x58DE0C: lea     edx, [esp+10D4h+Src]
0x58DE10: push    edx; Src
0x58DE11: push    0Fh; int
0x58DE13: call    sub_588A60
0x58DE18: mov     ecx, eax
0x58DE1A: call    sub_58D2F0
0x58DE1F: jmp     short loc_58DE47
0x58DE21: mov     eax, [esp+10D0h+var_10B4]
0x58DE25: push    eax; int
0x58DE26: lea     ecx, [esp+10D4h+Src]
0x58DE2A: push    ecx; Src
0x58DE2B: mov     ecx, [esp+10D8h+var_10A8]
0x58DE2F: push    0Ah; int
0x58DE31: call    sub_588A60
0x58DE36: mov     ecx, eax
0x58DE38: call    sub_58D2F0
0x58DE3D: jmp     short loc_58DE47
0x58DE3F: test    bl, bl
0x58DE41: jz      loc_58E25E
0x58DE47: mov     eax, [esp+10CCh+var_10AC]
0x58DE4B: xor     edx, edx
0x58DE4D: xor     esi, esi
0x58DE4F: cmp     byte ptr [eax+ebp], 2Fh ; '/'
0x58DE53: setnz   dl
0x58DE56: add     edx, 2
0x58DE59: mov     edi, edx
0x58DE5B: xor     bl, bl
0x58DE5D: jmp     loc_58E1CB
0x58DE62: cmp     edi, 4
0x58DE65: jnz     short loc_58DEA2
0x58DE67: lea     ecx, [ebp+2]
0x58DE6A: cmp     ecx, edx
0x58DE6C: jnb     loc_58E1CB
0x58DE72: cmp     al, 2Dh ; '-'
0x58DE74: jnz     loc_58E1CB
0x58DE7A: mov     eax, [esp+10CCh+var_10AC]
0x58DE7E: cmp     byte ptr [eax+ebp+1], 2Dh ; '-'
0x58DE83: jnz     loc_58E1CB
0x58DE89: cmp     byte ptr [eax+ebp+2], 3Eh ; '>'
0x58DE8E: jnz     loc_58E1CB
0x58DE94: mov     ebp, ecx
0x58DE96: mov     edi, 3
0x58DE9B: xor     bl, bl
0x58DE9D: jmp     loc_58E1CB
0x58DEA2: cmp     edi, 5
0x58DEA5: jnz     loc_58DF76
0x58DEAB: cmp     al, 3Eh ; '>'
0x58DEAD: jz      loc_58E2D6
0x58DEB3: lea     ecx, [ebp+1]
0x58DEB6: cmp     ecx, edx
0x58DEB8: jnb     short loc_58DECD
0x58DEBA: cmp     al, 2Fh ; '/'
0x58DEBC: jnz     short loc_58DECD
0x58DEBE: mov     edx, [esp+10CCh+var_10AC]
0x58DEC2: cmp     byte ptr [edx+ebp+1], 3Eh ; '>'
0x58DEC7: jz      loc_58E2D6
0x58DECD: cmp     al, 3Dh ; '='
0x58DECF: jnz     short loc_58DF09
0x58DED1: cmp     [esp+10CCh+var_1010], 0
0x58DED9: jz      loc_58E285
0x58DEDF: lea     eax, [esp+10CCh+var_1010]
0x58DEE6: push    eax; unsigned __int8 *
0x58DEE7: call    TileStringToStringID
0x58DEEC: add     esp, 4
0x58DEEF: xor     esi, esi
0x58DEF1: mov     [esp+10CCh+var_1094], eax
0x58DEF5: mov     [esp+10CCh+var_1010], 0
0x58DEFD: mov     edi, 6
0x58DF02: xor     bl, bl
0x58DF04: jmp     loc_58E1CB
0x58DF09: cmp     al, 20h ; ' '
0x58DF0B: ja      short loc_58DF3E
0x58DF0D: cmp     [esp+10CCh+var_1010], 0
0x58DF15: jz      loc_58E1CB
0x58DF1B: lea     ecx, [esp+10CCh+var_1010]
0x58DF22: push    ecx; unsigned __int8 *
0x58DF23: call    TileStringToStringID
0x58DF28: add     esp, 4
0x58DF2B: mov     [esp+10CCh+var_1094], eax
0x58DF2F: mov     [esp+10CCh+var_1010], 0
0x58DF37: xor     esi, esi
0x58DF39: jmp     loc_58E1C9
0x58DF3E: test    bl, bl
0x58DF40: jnz     loc_58E2AC
0x58DF46: mov     [esp+esi+10CCh+var_1010], al
0x58DF4D: add     esi, 1
0x58DF50: cmp     esi, 1000h
0x58DF56: mov     [esp+esi+10CCh+var_1010], 0
0x58DF5E: jle     loc_58E1CB
0x58DF64: push    offset aXmlReadBufferT; "XML Read buffer too small!"
0x58DF69: call    PrintError
0x58DF6E: add     esp, 4
0x58DF71: jmp     loc_58E1CB
0x58DF76: cmp     edi, 6
0x58DF79: jnz     loc_58E06C
0x58DF7F: cmp     al, 22h ; '"'
0x58DF81: jnz     short loc_58DF94
0x58DF83: cmp     [esp+10CCh+var_10AD], 0
0x58DF88: setz    dl
0x58DF8B: mov     [esp+10CCh+var_10AD], dl
0x58DF8F: jmp     loc_58E1CB
0x58DF94: cmp     [esp+10CCh+var_10AD], 0
0x58DF99: jnz     short loc_58DF46
0x58DF9B: cmp     al, 3Eh ; '>'
0x58DF9D: jz      short loc_58E011
0x58DF9F: lea     ecx, [ebp+1]
0x58DFA2: cmp     ecx, edx
0x58DFA4: jnb     short loc_58DFB5
0x58DFA6: cmp     al, 2Fh ; '/'
0x58DFA8: jnz     short loc_58DFB5
0x58DFAA: mov     edx, [esp+10CCh+var_10AC]
0x58DFAE: cmp     byte ptr [edx+ebp+1], 3Eh ; '>'
0x58DFB3: jz      short loc_58E011
0x58DFB5: cmp     al, 20h ; ' '
0x58DFB7: ja      short loc_58DFFA
0x58DFB9: cmp     [esp+10CCh+var_1010], 0
0x58DFC1: jz      loc_58E1CB
0x58DFC7: mov     eax, [esp+10CCh+var_10B4]
0x58DFCB: mov     edx, [esp+10CCh+var_1094]
0x58DFCF: push    0; int
0x58DFD1: push    eax; int
0x58DFD2: lea     ecx, [esp+10D4h+var_1010]
0x58DFD9: push    ecx; Src
0x58DFDA: mov     ecx, [esp+10D8h+var_10A8]
0x58DFDE: push    edx; int
0x58DFDF: call    sub_588A60
0x58DFE4: mov     ecx, eax
0x58DFE6: call    sub_58D2F0
0x58DFEB: mov     [esp+10CCh+var_1010], 0
0x58DFF3: xor     esi, esi
0x58DFF5: jmp     loc_58E1C9
0x58DFFA: test    bl, bl
0x58DFFC: jz      loc_58DF46
0x58E002: sub     ebp, 1
0x58E005: mov     edi, 5
0x58E00A: xor     bl, bl
0x58E00C: jmp     loc_58E1CB
0x58E011: cmp     [esp+10CCh+var_1010], 0
0x58E019: jz      short loc_58E041
0x58E01B: mov     eax, [esp+10CCh+var_10B4]
0x58E01F: mov     edx, [esp+10CCh+var_1094]
0x58E023: push    0; int
0x58E025: push    eax; int
0x58E026: lea     ecx, [esp+10D4h+var_1010]
0x58E02D: push    ecx; Src
0x58E02E: mov     ecx, [esp+10D8h+var_10A8]
0x58E032: push    edx; int
0x58E033: call    sub_588A60
0x58E038: mov     ecx, eax
0x58E03A: call    sub_58D2F0
0x58E03F: jmp     short loc_58E049
0x58E041: test    bl, bl
0x58E043: jz      loc_58E300
0x58E049: mov     ecx, [esp+10CCh+var_10AC]
0x58E04D: xor     eax, eax
0x58E04F: xor     esi, esi
0x58E051: mov     [esp+10CCh+var_1010], 0
0x58E059: cmp     byte ptr [ecx+ebp], 2Fh ; '/'
0x58E05D: setnz   al
0x58E060: add     eax, 2
0x58E063: mov     edi, eax
0x58E065: xor     bl, bl
0x58E067: jmp     loc_58E1CB
0x58E06C: cmp     edi, 2
0x58E06F: jnz     short loc_58E0A6
0x58E071: cmp     al, 3Eh ; '>'
0x58E073: jnz     loc_58E32A
0x58E079: mov     edx, [esp+10CCh+var_10B4]
0x58E07D: mov     ecx, [esp+10CCh+var_10A8]
0x58E081: push    0; int
0x58E083: push    edx; int
0x58E084: lea     eax, [esp+10D4h+Src]
0x58E088: push    eax; Src
0x58E089: push    0Fh; int
0x58E08B: call    sub_588A60
0x58E090: mov     ecx, eax
0x58E092: call    sub_58D2F0
0x58E097: mov     edi, 3
0x58E09C: mov     [esp+10CCh+Src], 0
0x58E0A1: jmp     loc_58E1CB
0x58E0A6: cmp     edi, 3
0x58E0A9: jnz     loc_58E1CB
0x58E0AF: cmp     al, 3Ch ; '<'
0x58E0B1: jnz     loc_58E177
0x58E0B7: lea     eax, [ebp+3]
0x58E0BA: cmp     eax, edx
0x58E0BC: jnb     short loc_58E0DF
0x58E0BE: cmp     byte ptr [ecx+ebp+1], 21h ; '!'
0x58E0C3: jnz     short loc_58E0DF
0x58E0C5: cmp     byte ptr [ecx+ebp+2], 2Dh ; '-'
0x58E0CA: jnz     short loc_58E0DF
0x58E0CC: cmp     byte ptr [ecx+ebp+3], 2Dh ; '-'
0x58E0D1: jnz     short loc_58E0DF
0x58E0D3: xor     bl, bl
0x58E0D5: mov     edi, 4
0x58E0DA: jmp     loc_58E1CB
0x58E0DF: cmp     [esp+10CCh+var_1010], 0
0x58E0E7: jz      short loc_58E15C
0x58E0E9: lea     eax, [esp+10CCh+var_1010]
0x58E0F0: lea     edx, [eax+1]
0x58E0F3: mov     cl, [eax]
0x58E0F5: add     eax, 1
0x58E0F8: test    cl, cl
0x58E0FA: jnz     short loc_58E0F3
0x58E0FC: sub     eax, edx
0x58E0FE: add     eax, 0FFFFFFFFh
0x58E101: cmp     [esp+eax+10CCh+var_1010], 20h ; ' '
0x58E109: ja      short loc_58E110
0x58E10B: sub     eax, 1
0x58E10E: jmp     short loc_58E101
0x58E110: mov     [esp+eax+10CCh+var_100F], 0
0x58E118: mov     al, [esp+10CCh+var_1010]
0x58E11F: cmp     al, 26h ; '&'
0x58E121: jnz     short loc_58E134
0x58E123: mov     ecx, [esp+10CCh+var_10B4]
0x58E127: push    0
0x58E129: push    ecx
0x58E12A: lea     edx, [esp+10D4h+var_1010]
0x58E131: push    edx
0x58E132: jmp     short loc_58E147
0x58E134: test    al, al
0x58E136: jz      short loc_58E15C
0x58E138: mov     eax, [esp+10CCh+var_10B4]
0x58E13C: push    1; int
0x58E13E: push    eax; int
0x58E13F: lea     ecx, [esp+10D4h+var_1010]
0x58E146: push    ecx; Src
0x58E147: mov     ecx, [esp+10D8h+var_10A8]
0x58E14B: push    0BB9h; int
0x58E150: call    sub_588A60
0x58E155: mov     ecx, eax
0x58E157: call    sub_58D2F0
0x58E15C: xor     esi, esi
0x58E15E: xor     bl, bl
0x58E160: mov     [esp+10CCh+var_1010], 0
0x58E168: mov     [esp+10CCh+var_10B5], bl
0x58E16C: mov     edi, 1
0x58E171: mov     [esp+10CCh+Src], bl
0x58E175: jmp     short loc_58E1CB
0x58E177: lea     ecx, [ebp+1]
0x58E17A: cmp     ecx, edx
0x58E17C: jnb     short loc_58E191
0x58E17E: cmp     al, 2Fh ; '/'
0x58E180: jnz     short loc_58E191
0x58E182: mov     edx, [esp+10CCh+var_10AC]
0x58E186: cmp     byte ptr [edx+ebp+1], 3Eh ; '>'
0x58E18B: jz      loc_58E354
0x58E191: cmp     al, 3Eh ; '>'
0x58E193: jz      loc_58E37E
0x58E199: cmp     al, 20h ; ' '
0x58E19B: ja      short loc_58E1A2
0x58E19D: cmp     bl, 1
0x58E1A0: jnz     short loc_58E1CB
0x58E1A2: mov     [esp+esi+10CCh+var_1010], al
0x58E1A9: add     esi, 1
0x58E1AC: cmp     esi, 1000h
0x58E1B2: mov     [esp+esi+10CCh+var_1010], 0
0x58E1BA: jle     short loc_58E1C9
0x58E1BC: push    offset aXmlReadBufferT; "XML Read buffer too small!"
0x58E1C1: call    PrintError
0x58E1C6: add     esp, 4
0x58E1C9: mov     bl, 1
0x58E1CB: mov     edx, [esp+10CCh+var_1098]
0x58E1CF: add     ebp, 1
0x58E1D2: cmp     ebp, edx
0x58E1D4: jb      loc_58DCF0
0x58E1DA: mov     eax, [esp+10CCh+var_10A0]
0x58E1DE: test    eax, eax
0x58E1E0: jz      short loc_58E206
0x58E1E2: mov     eax, [eax+4]
0x58E1E5: test    eax, eax
0x58E1E7: jz      short loc_58E1F2
0x58E1E9: push    eax
0x58E1EA: call    FormHeapFree
0x58E1EF: add     esp, 4
0x58E1F2: mov     eax, [esp+10CCh+var_10A0]
0x58E1F6: push    eax
0x58E1F7: mov     dword ptr [eax+4], 0
0x58E1FE: call    FormHeapFree
0x58E203: add     esp, 4
0x58E206: mov     eax, [esp+10CCh+var_109C]
0x58E20A: test    eax, eax
0x58E20C: jz      short loc_58E232
0x58E20E: mov     eax, [eax+4]
0x58E211: test    eax, eax
0x58E213: jz      short loc_58E21E
0x58E215: push    eax
0x58E216: call    FormHeapFree
0x58E21B: add     esp, 4
0x58E21E: mov     eax, [esp+10CCh+var_109C]
0x58E222: push    eax
0x58E223: mov     dword ptr [eax+4], 0
0x58E22A: call    FormHeapFree
0x58E22F: add     esp, 4
0x58E232: mov     eax, [esp+10CCh+var_10A8]
0x58E236: mov     ecx, [esp+10CCh+var_C]
0x58E23D: mov     large fs:0, ecx
0x58E244: pop     ecx
0x58E245: pop     edi
0x58E246: pop     esi
0x58E247: pop     ebp
0x58E248: pop     ebx
0x58E249: mov     ecx, [esp+10B8h+var_10]
0x58E250: xor     ecx, esp
0x58E252: call    @__security_check_cookie@4; __security_check_cookie(x)
0x58E257: add     esp, 10B8h
0x58E25D: retn
0x58E25E: mov     eax, [esp+10CCh+var_10B4]
0x58E262: mov     ecx, [esp+10CCh+var_10A4]
0x58E266: push    eax
0x58E267: push    ecx
0x58E268: push    offset aEmptyTagName; "Empty tag name"
0x58E26D: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E272: call    PrintError
0x58E277: add     esp, 10h
0x58E27A: mov     byte ptr ds:0B3B0A0h, 1
0x58E281: xor     eax, eax
0x58E283: jmp     short loc_58E236
0x58E285: mov     edx, [esp+10CCh+var_10B4]
0x58E289: mov     eax, [esp+10CCh+var_10A4]
0x58E28D: push    edx
0x58E28E: push    eax
0x58E28F: push    offset aMissingAttribu; "Missing attribute name"
0x58E294: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E299: call    PrintError
0x58E29E: add     esp, 10h
0x58E2A1: mov     byte ptr ds:0B3B0A0h, 1
0x58E2A8: xor     eax, eax
0x58E2AA: jmp     short loc_58E236
0x58E2AC: mov     ecx, [esp+10CCh+var_10B4]
0x58E2B0: mov     edx, [esp+10CCh+var_10A4]
0x58E2B4: push    ecx
0x58E2B5: push    edx
0x58E2B6: push    offset aUnexpectedWord; "Unexpected word after attribute name"
0x58E2BB: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E2C0: call    PrintError
0x58E2C5: add     esp, 10h
0x58E2C8: mov     byte ptr ds:0B3B0A0h, 1
0x58E2CF: xor     eax, eax
0x58E2D1: jmp     loc_58E236
0x58E2D6: mov     eax, [esp+10CCh+var_10B4]
0x58E2DA: mov     ecx, [esp+10CCh+var_10A4]
0x58E2DE: push    eax
0x58E2DF: push    ecx
0x58E2E0: push    offset aAttributeWithN; "Attribute with no value"
0x58E2E5: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E2EA: call    PrintError
0x58E2EF: add     esp, 10h
0x58E2F2: mov     byte ptr ds:0B3B0A0h, 1
0x58E2F9: xor     eax, eax
0x58E2FB: jmp     loc_58E236
0x58E300: mov     edx, [esp+10CCh+var_10B4]
0x58E304: mov     eax, [esp+10CCh+var_10A4]
0x58E308: push    edx
0x58E309: push    eax
0x58E30A: push    offset aMissingAttri_0; "Missing attribute's value"
0x58E30F: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E314: call    PrintError
0x58E319: add     esp, 10h
0x58E31C: mov     byte ptr ds:0B3B0A0h, 1
0x58E323: xor     eax, eax
0x58E325: jmp     loc_58E236
0x58E32A: mov     ecx, [esp+10CCh+var_10B4]
0x58E32E: mov     edx, [esp+10CCh+var_10A4]
0x58E332: push    ecx
0x58E333: push    edx
0x58E334: push    offset aCloseTagMarker; "Close-tag marker '/' not followed by en"...
0x58E339: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E33E: call    PrintError
0x58E343: add     esp, 10h
0x58E346: mov     byte ptr ds:0B3B0A0h, 1
0x58E34D: xor     eax, eax
0x58E34F: jmp     loc_58E236
0x58E354: mov     eax, [esp+10CCh+var_10B4]
0x58E358: mov     ecx, [esp+10CCh+var_10A4]
0x58E35C: push    eax
0x58E35D: push    ecx
0x58E35E: push    offset aUnballancedClo; "Unballanced close-tag marker pair '/>' "...
0x58E363: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E368: call    PrintError
0x58E36D: add     esp, 10h
0x58E370: mov     byte ptr ds:0B3B0A0h, 1
0x58E377: xor     eax, eax
0x58E379: jmp     loc_58E236
0x58E37E: mov     edx, [esp+10CCh+var_10B4]
0x58E382: mov     eax, [esp+10CCh+var_10A4]
0x58E386: push    edx
0x58E387: push    eax
0x58E388: push    offset aUnballancedEnd; "Unballanced end-of-tag marker '>' found"
0x58E38D: push    offset aXmlErrorSInFil; "XML ERROR: %s -- in file '%s' on line %"...
0x58E392: call    PrintError
0x58E397: add     esp, 10h
0x58E39A: mov     byte ptr ds:0B3B0A0h, 1
0x58E3A1: xor     eax, eax
0x58E3A3: jmp     loc_58E236
