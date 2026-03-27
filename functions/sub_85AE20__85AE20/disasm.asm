0x85AE20: push    0FFFFFFFFh
0x85AE22: push    offset SEH_85AE20
0x85AE27: mov     eax, large fs:0
0x85AE2D: push    eax
0x85AE2E: sub     esp, 7Ch
0x85AE31: push    ebx
0x85AE32: push    ebp
0x85AE33: push    esi
0x85AE34: push    edi
0x85AE35: mov     eax, ds:0B30AACh
0x85AE3A: xor     eax, esp
0x85AE3C: push    eax
0x85AE3D: lea     eax, [esp+9Ch+var_C]
0x85AE44: mov     large fs:0, eax
0x85AE4A: mov     esi, ecx
0x85AE4C: mov     ecx, [esi+1Ch]
0x85AE4F: movzx   edi, word ptr ds:0B42EACh
0x85AE56: test    cl, 1
0x85AE59: setnbe  al
0x85AE5C: test    cl, 10h
0x85AE5F: setnbe  dl
0x85AE62: test    al, al
0x85AE64: mov     [esp+9Ch+var_80], 0
0x85AE6C: jnz     short loc_85AE76
0x85AE6E: test    dl, dl
0x85AE70: mov     byte ptr [esp+9Ch+anonymous_0+4], al
0x85AE74: jz      short loc_85AE7B
0x85AE76: mov     byte ptr [esp+9Ch+anonymous_0+4], 1
0x85AE7B: test    ecx, 80h
0x85AE81: setnbe  byte ptr [esp+9Ch+var_87+1]
0x85AE86: test    ecx, 20000h
0x85AE8C: setnbe  [esp+9Ch+var_20]
0x85AE91: test    ecx, 200000h
0x85AE97: setnbe  al
0x85AE9A: test    cl, 8
0x85AE9D: setnbe  dl
0x85AEA0: test    cl, 2
0x85AEA3: setnbe  [esp+9Ch+var_24]
0x85AEA8: test    cl, 20h
0x85AEAB: mov     byte ptr [esp+9Ch+var_3C], al
0x85AEAF: mov     byte ptr [esp+9Ch+anonymous_1], dl
0x85AEB3: ja      short loc_85AEC0
0x85AEB5: cmp     di, 3
0x85AEB9: mov     byte ptr [esp+9Ch+var_87+3], 0
0x85AEBE: jnz     short loc_85AEC5
0x85AEC0: mov     byte ptr [esp+9Ch+var_87+3], 1
0x85AEC5: mov     eax, [esi+0C4h]
0x85AECB: mov     ebp, [esp+9Ch+arg_0]
0x85AED2: test    ecx, 100h
0x85AED8: setnbe  byte ptr [esp+9Ch+var_44]
0x85AEDD: cmp     dword ptr [eax], 0
0x85AEE0: setnz   al
0x85AEE3: test    ecx, 400h
0x85AEE9: mov     byte ptr [esp+9Ch+var_55], al
0x85AEED: mov     eax, [ebp+0B4h]
0x85AEF3: setnbe  [esp+9Ch+var_5D]
0x85AEF8: cmp     dword ptr [eax+24h], 0
0x85AEFC: setnz   dl
0x85AEFF: cmp     byte ptr ds:0B43074h, 0
0x85AF06: mov     byte ptr [esp+9Ch+var_10], dl
0x85AF0D: jnz     short loc_85AF6B
0x85AF0F: cmp     dword ptr ds:0B43108h, 0
0x85AF16: jz      short loc_85AF6B
0x85AF18: test    byte ptr ds:0B42F40h, 20h
0x85AF1F: jz      short loc_85AF6B
0x85AF21: cmp     dword ptr ds:0B42F48h, 2
0x85AF28: jl      short loc_85AF6B
0x85AF2A: test    ecx, 2000h
0x85AF30: ja      short loc_85AF6B
0x85AF32: fld     dword ptr ds:0B44F04h
0x85AF38: fnstcw  word ptr [esp+9Ch+var_4C]
0x85AF3C: movzx   eax, word ptr [esp+9Ch+var_4C]
0x85AF41: or      eax, 0C00h
0x85AF46: mov     [esp+9Ch+var_40], eax
0x85AF4A: fldcw   word ptr [esp+9Ch+var_40]
0x85AF4E: fistp   [esp+9Ch+var_38]
0x85AF52: mov     eax, dword ptr [esp+9Ch+var_38]
0x85AF56: test    eax, eax
0x85AF58: fldcw   word ptr [esp+9Ch+var_4C]
0x85AF5C: jz      short loc_85AF6B
0x85AF5E: shr     ecx, 1Ch
0x85AF61: cmp     cl, 1
0x85AF64: mov     byte ptr [esp+9Ch+anonymous_2], 1
0x85AF69: jnz     short loc_85AF70
0x85AF6B: mov     byte ptr [esp+9Ch+anonymous_2], 0
0x85AF70: mov     edx, [esi]
0x85AF72: mov     eax, [edx+4]
0x85AF75: mov     ecx, esi
0x85AF77: call    eax
0x85AF79: test    eax, eax
0x85AF7B: jz      short loc_85AF92
0x85AF7D: lea     ecx, [ecx+0]
0x85AF80: cmp     eax, offset unk_B468C8
0x85AF85: jz      loc_85B0E3
0x85AF8B: mov     eax, [eax+4]
0x85AF8E: test    eax, eax
0x85AF90: jnz     short loc_85AF80
0x85AF92: xor     al, al
0x85AF94: mov     edx, [esi]
0x85AF96: neg     al
0x85AF98: mov     ecx, esi
0x85AF9A: sbb     eax, eax
0x85AF9C: and     eax, esi
0x85AF9E: mov     eax, [edx+4]
0x85AFA1: setnz   byte ptr [esp+9Ch+var_7B]
0x85AFA6: call    eax
0x85AFA8: test    eax, eax
0x85AFAA: jz      short loc_85AFC2
0x85AFAC: lea     esp, [esp+0]
0x85AFB0: cmp     eax, offset unk_B478B0
0x85AFB5: jz      loc_85B0EA
0x85AFBB: mov     eax, [eax+4]
0x85AFBE: test    eax, eax
0x85AFC0: jnz     short loc_85AFB0
0x85AFC2: xor     al, al
0x85AFC4: mov     edx, [esi]
0x85AFC6: neg     al
0x85AFC8: mov     ecx, esi
0x85AFCA: sbb     eax, eax
0x85AFCC: and     eax, esi
0x85AFCE: mov     eax, [edx+4]
0x85AFD1: setnz   [esp+9Ch+anonymous_3]
0x85AFD6: call    eax
0x85AFD8: test    eax, eax
0x85AFDA: jz      short loc_85AFF2
0x85AFDC: lea     esp, [esp+0]
0x85AFE0: cmp     eax, offset unk_B468BC
0x85AFE5: jz      loc_85B0F1
0x85AFEB: mov     eax, [eax+4]
0x85AFEE: test    eax, eax
0x85AFF0: jnz     short loc_85AFE0
0x85AFF2: xor     al, al
0x85AFF4: neg     al
0x85AFF6: mov     cl, ds:0B42F3Eh
0x85AFFC: mov     edx, ds:0B42F48h
0x85B002: mov     byte ptr [esp+9Ch+var_50+3], cl
0x85B006: mov     [esp+9Ch+var_48], edx
0x85B00A: sbb     eax, eax
0x85B00C: and     eax, esi
0x85B00E: mov     eax, [esi+1Ch]
0x85B011: setnz   byte ptr [esp+9Ch+var_50+1]
0x85B016: test    eax, 400000h
0x85B01B: setnbe  byte ptr [esp+9Ch+var_30]
0x85B020: test    eax, 800h
0x85B025: setnbe  byte ptr [esp+9Ch+var_74]
0x85B02A: test    eax, 1000h
0x85B02F: setnbe  byte ptr [esp+9Ch+var_2C]
0x85B034: test    eax, 4000h
0x85B039: setnbe  [esp+9Ch+anonymous_4]
0x85B03E: test    eax, 8000h
0x85B043: setnbe  byte ptr [esp+9Ch+var_50]
0x85B048: test    eax, 10000h
0x85B04D: setnbe  byte ptr [esp+9Ch+var_40]
0x85B052: call    InitBSShaderAccumulator
0x85B057: mov     ecx, eax
0x85B059: call    sub_7AA380
0x85B05E: mov     [esp+9Ch+var_82], al
0x85B062: mov     eax, [esi+1Ch]
0x85B065: test    eax, 100000h
0x85B06A: jbe     short loc_85B07A
0x85B06C: cmp     byte ptr ds:0B42E86h, 0
0x85B073: mov     [esp+9Ch+var_5E], 0
0x85B078: jz      short loc_85B07F
0x85B07A: mov     [esp+9Ch+var_5E], 1
0x85B07F: test    eax, 40000h
0x85B084: push    0
0x85B086: mov     ecx, ebp
0x85B088: setnbe  [esp+0A0h+var_59]
0x85B08D: call    NiNode_GetNiPropertyByID
0x85B092: mov     ebx, ds:0A2807Ch
0x85B098: mov     edi, eax
0x85B09A: test    edi, edi
0x85B09C: mov     [esp+9Ch+var_28], edi
0x85B0A0: jnz     loc_85B161
0x85B0A6: lea     eax, [esp+9Ch+var_14]
0x85B0AD: push    eax
0x85B0AE: mov     ecx, ebp
0x85B0B0: call    sub_405760
0x85B0B5: cmp     dword ptr [eax], 0
0x85B0B8: mov     [esp+9Ch+var_4], 0
0x85B0C3: jz      short loc_85B0F8
0x85B0C5: lea     ecx, [esp+9Ch+var_18]
0x85B0CC: push    ecx
0x85B0CD: mov     ecx, ebp
0x85B0CF: call    sub_405760
0x85B0D4: mov     eax, [eax]
0x85B0D6: mov     edi, [eax+8]
0x85B0D9: mov     [esp+9Ch+var_80], 1
0x85B0E1: jmp     short loc_85B0FA
0x85B0E3: mov     al, 1
0x85B0E5: jmp     loc_85AF94
0x85B0EA: mov     al, 1
0x85B0EC: jmp     loc_85AFC4
0x85B0F1: mov     al, 1
0x85B0F3: jmp     loc_85AFF4
0x85B0F8: xor     edi, edi
0x85B0FA: test    byte ptr [esp+9Ch+var_80], 1
0x85B0FF: mov     [esp+9Ch+var_28], edi
0x85B103: jz      short loc_85B12E
0x85B105: mov     ebp, [esp+9Ch+var_18]
0x85B10C: and     [esp+9Ch+var_80], 0FFFFFFFEh
0x85B111: test    ebp, ebp
0x85B113: jz      short loc_85B12E
0x85B115: lea     edx, [ebp+4]
0x85B118: push    edx; lpAddend
0x85B119: call    ebx ; InterlockedDecrement
0x85B11B: test    eax, eax
0x85B11D: jnz     short loc_85B12E
0x85B11F: test    ebp, ebp
0x85B121: jz      short loc_85B12E
0x85B123: mov     eax, [ebp+0]
0x85B126: mov     edx, [eax]
0x85B128: push    1
0x85B12A: mov     ecx, ebp
0x85B12C: call    edx
0x85B12E: mov     ebp, dword ptr [esp+9Ch+var_14]
0x85B135: test    ebp, ebp
0x85B137: mov     [esp+9Ch+var_4], 0FFFFFFFFh
0x85B142: jz      short loc_85B15D
0x85B144: lea     eax, [ebp+4]
0x85B147: push    eax; lpAddend
0x85B148: call    ebx ; InterlockedDecrement
0x85B14A: test    eax, eax
0x85B14C: jnz     short loc_85B15D
0x85B14E: test    ebp, ebp
0x85B150: jz      short loc_85B15D
0x85B152: mov     edx, [ebp+0]
0x85B155: mov     eax, [edx]
0x85B157: push    1
0x85B159: mov     ecx, ebp
0x85B15B: call    eax
0x85B15D: test    edi, edi
0x85B15F: jz      short loc_85B16C
0x85B161: test    byte ptr [edi+18h], 1
0x85B165: mov     byte ptr [esp+9Ch+var_87+2], 1
0x85B16A: jnz     short loc_85B171
0x85B16C: mov     byte ptr [esp+9Ch+var_87+2], 0
0x85B171: test    edi, edi
0x85B173: jz      short loc_85B1A5
0x85B175: mov     cx, [edi+18h]
0x85B179: shr     cx, 9
0x85B17D: test    cl, 1
0x85B180: jz      short loc_85B1A5
0x85B182: mov     byte ptr [esp+9Ch+var_1C], 1
0x85B18A: mov     byte ptr [esp+9Ch+var_44], 0
0x85B18F: fldz
0x85B191: fcom    dword ptr [esi+0A4h]
0x85B197: fnstsw  ax
0x85B199: test    ah, 44h
0x85B19C: jp      short loc_85B1AF
0x85B19E: mov     byte ptr [esp+9Ch+var_87+1], 0
0x85B1A3: jmp     short loc_85B1C0
0x85B1A5: mov     byte ptr [esp+9Ch+var_1C], 0
0x85B1AD: jmp     short loc_85B18F
0x85B1AF: cmp     [esp+9Ch+var_20], 0
0x85B1B4: jz      short loc_85B1C0
0x85B1B6: mov     byte ptr [esp+9Ch+var_87+1], 1
0x85B1BB: mov     byte ptr [esp+9Ch+anonymous_0+4], 0
0x85B1C0: fcomp   dword ptr [esi+9Ch]
0x85B1C6: fnstsw  ax
0x85B1C8: test    ah, 44h
0x85B1CB: jp      short loc_85B1D2
0x85B1CD: mov     byte ptr [esp+9Ch+anonymous_0+4], 0
0x85B1D2: mov     eax, [esi+1Ch]
0x85B1D5: shr     eax, 1Ch
0x85B1D8: movzx   edx, al
0x85B1DB: push    edx
0x85B1DC: call    GetShadowSceneNode
0x85B1E1: mov     eax, [eax+118h]
0x85B1E7: add     esp, 4
0x85B1EA: cmp     byte ptr [esp+9Ch+anonymous_0+4], 0
0x85B1EF: mov     dword ptr [esp+9Ch+anonymous_0], eax
0x85B1F3: jz      short loc_85B221
0x85B1F5: lea     ecx, [esp+9Ch+var_4C]
0x85B1F9: push    ecx
0x85B1FA: mov     ecx, eax
0x85B1FC: call    sub_405AD0
0x85B201: mov     eax, [eax]
0x85B203: or      [esp+9Ch+var_80], 2
0x85B208: push    offset dword_B3FA90
0x85B20D: lea     ecx, [eax+0F8h]
0x85B213: call    sub_8AA390
0x85B218: test    al, al
0x85B21A: mov     [esp+9Ch+anonymous_5], 1
0x85B21F: jnz     short loc_85B226
0x85B221: mov     [esp+9Ch+anonymous_5], 0
0x85B226: test    byte ptr [esp+9Ch+var_80], 2
0x85B22B: jz      short loc_85B24D
0x85B22D: mov     edi, [esp+9Ch+var_4C]
0x85B231: test    edi, edi
0x85B233: jz      short loc_85B24D
0x85B235: lea     edx, [edi+4]
0x85B238: push    edx; lpAddend
0x85B239: call    ebx ; InterlockedDecrement
0x85B23B: test    eax, eax
0x85B23D: jnz     short loc_85B24D
0x85B23F: test    edi, edi
0x85B241: jz      short loc_85B24D
0x85B243: mov     eax, [edi]
0x85B245: mov     edx, [eax]
0x85B247: push    1
0x85B249: mov     ecx, edi
0x85B24B: call    edx
0x85B24D: fld1
0x85B24F: mov     edi, [esp+9Ch+arg_8]
0x85B256: fcomp   dword ptr [esi+20h]
0x85B259: mov     ebx, [esp+9Ch+arg_C]
0x85B260: mov     ebp, dword ptr [esp+9Ch+var_24]
0x85B264: fnstsw  ax
0x85B266: test    ah, 41h
0x85B269: jz      short loc_85B272
0x85B26B: cmp     byte ptr [esp+9Ch+var_87+2], 0
0x85B270: jz      short loc_85B29F
0x85B272: cmp     [esp+9Ch+var_82], 0
0x85B277: mov     [esp+9Ch+var_81], 1
0x85B27C: jz      short loc_85B29A
0x85B27E: mov     ecx, [esp+9Ch+arg_0]
0x85B285: push    ebp
0x85B286: lea     eax, [esp+0A0h+var_81]
0x85B28A: push    eax
0x85B28B: push    ebx
0x85B28C: push    edi
0x85B28D: push    ecx
0x85B28E: mov     ecx, esi
0x85B290: call    sub_854E90
0x85B295: mov     byte ptr [esp+9Ch+anonymous_0+4], 0
0x85B29A: mov     byte ptr [esp+9Ch+var_87+3], 1
0x85B29F: mov     ecx, esi
0x85B2A1: mov     byte ptr [esp+9Ch+var_87], 1
0x85B2A6: call    sub_7ED600
0x85B2AB: movzx   edx, ax
0x85B2AE: mov     eax, [esp+9Ch+arg_4]
0x85B2B5: mov     ecx, eax
0x85B2B7: and     ecx, 1
0x85B2BA: setnle  byte ptr [esp+9Ch+var_50+2]
0x85B2BF: test    al, 2
0x85B2C1: setnle  [esp+9Ch+anonymous_6]
0x85B2C6: mov     dword ptr [esp+9Ch+var_38], ecx
0x85B2CA: test    al, 4
0x85B2CC: mov     ecx, eax
0x85B2CE: setnle  byte ptr [esp+9Ch+var_87+2]
0x85B2D3: and     ecx, 8
0x85B2D6: jle     short loc_85B2E4
0x85B2D8: cmp     byte ptr [esp+9Ch+anonymous_0+4], 0
0x85B2DD: mov     [esp+9Ch+var_83], 1
0x85B2E2: jnz     short loc_85B2E9
0x85B2E4: mov     [esp+9Ch+var_83], 0
0x85B2E9: cmp     byte ptr [esp+9Ch+var_87+1], 0
0x85B2EE: jz      short loc_85B2F9
0x85B2F0: test    ecx, ecx
0x85B2F2: mov     [esp+9Ch+var_82], 1
0x85B2F7: jg      short loc_85B2FE
0x85B2F9: mov     [esp+9Ch+var_82], 0
0x85B2FE: mov     ecx, eax
0x85B300: and     ecx, 0Fh
0x85B303: cmp     cl, 0Fh
0x85B306: setz    cl
0x85B309: cmp     byte ptr [esp+9Ch+var_50], 0
0x85B30E: mov     byte ptr [esp+9Ch+var_4C], cl
0x85B312: mov     byte ptr [esp+9Ch+var_87+1], cl
0x85B316: movzx   ecx, dx
0x85B319: mov     [esp+9Ch+var_81], 1
0x85B31E: mov     [esp+9Ch+var_80], ecx
0x85B322: jnz     loc_85BB9C
0x85B328: cmp     byte ptr [esp+9Ch+var_40], 0
0x85B32D: jnz     loc_85BB9C
0x85B333: cmp     [esp+9Ch+anonymous_3], 0
0x85B338: jnz     loc_85BB83
0x85B33E: cmp     byte ptr [esp+9Ch+var_50+1], 0
0x85B343: jnz     loc_85BB83
0x85B349: cmp     [esp+9Ch+anonymous_4], 0
0x85B34E: jnz     loc_85B977
0x85B354: cmp     [esp+9Ch+var_5E], 0
0x85B359: jz      loc_85B99C
0x85B35F: cmp     byte ptr [esp+9Ch+var_50+2], 0
0x85B364: jz      loc_85B6B7
0x85B36A: cmp     byte ptr ds:0B43073h, 0
0x85B371: mov     cl, byte ptr [esp+9Ch+var_87+3]
0x85B375: jnz     loc_85B503
0x85B37B: test    cl, cl
0x85B37D: jnz     short loc_85B3B7
0x85B37F: cmp     [esp+9Ch+anonymous_6], cl
0x85B383: jz      loc_85B689
0x85B389: cmp     byte ptr [esp+9Ch+var_87+2], cl
0x85B38D: jz      loc_85B503
0x85B393: cmp     [esp+9Ch+var_83], cl
0x85B397: jz      loc_85B503
0x85B39D: cmp     [esp+9Ch+var_5D], cl
0x85B3A1: jnz     loc_85B503
0x85B3A7: cmp     byte ptr [esp+9Ch+var_50+3], cl
0x85B3AB: jz      short loc_85B3B7
0x85B3AD: cmp     byte ptr [esp+9Ch+var_44], cl
0x85B3B1: jnz     loc_85B503
0x85B3B7: cmp     dx, 1
0x85B3BB: jbe     short loc_85B3C5
0x85B3BD: test    cl, cl
0x85B3BF: jz      loc_85B503
0x85B3C5: cmp     [esp+9Ch+anonymous_5], 0
0x85B3CA: jz      loc_85B503
0x85B3D0: test    dx, dx
0x85B3D3: jz      short loc_85B3E0
0x85B3D5: cmp     byte ptr [esp+9Ch+anonymous_2], 0
0x85B3DA: jnz     loc_85B503
0x85B3E0: cmp     [esp+9Ch+var_48], 5
0x85B3E5: jge     short loc_85B3FD
0x85B3E7: cmp     byte ptr [esp+9Ch+var_74], 0
0x85B3EC: jnz     loc_85B503
0x85B3F2: cmp     [esp+9Ch+var_59], 0
0x85B3F7: jnz     loc_85B503
0x85B3FD: fld1
0x85B3FF: fcomp   dword ptr [esi+9Ch]
0x85B405: fnstsw  ax
0x85B407: test    ah, 44h
0x85B40A: jp      loc_85B503
0x85B410: cmp     [esp+9Ch+var_5D], 0
0x85B415: jz      short loc_85B46A
0x85B417: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B41B: mov     eax, [esp+9Ch+var_30]
0x85B41F: mov     ecx, [esp+9Ch+var_7B]
0x85B423: push    edx
0x85B424: mov     edx, [esp+0A0h+var_2C]
0x85B428: push    eax
0x85B429: mov     eax, [esp+0A4h+var_74]
0x85B42D: push    ecx
0x85B42E: mov     ecx, [esp+0A8h+anonymous_2]
0x85B432: push    edx
0x85B433: mov     edx, [esp+0ACh+anonymous_1]
0x85B437: push    eax
0x85B438: mov     eax, dword ptr [esp+0B0h+var_5D]
0x85B43C: push    ecx
0x85B43D: mov     ecx, [esp+0B4h+var_55]
0x85B441: push    edx
0x85B442: push    eax
0x85B443: mov     eax, dword ptr [esp+0BCh+anonymous_0]
0x85B447: push    ecx
0x85B448: mov     ecx, [esp+0C0h+arg_0]
0x85B44F: push    ebp
0x85B450: lea     edx, [esp+0C4h+var_87]
0x85B454: push    edx
0x85B455: push    ebx
0x85B456: push    edi
0x85B457: push    eax
0x85B458: push    ecx
0x85B459: mov     ecx, esi
0x85B45B: call    sub_856D60
0x85B460: mov     byte ptr [esp+9Ch+var_87+1], 0
0x85B465: jmp     loc_85B89C
0x85B46A: test    dx, dx
0x85B46D: jnz     short loc_85B4B5
0x85B46F: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B473: mov     eax, [esp+9Ch+var_7B]
0x85B477: mov     ecx, [esp+9Ch+var_74]
0x85B47B: push    edx
0x85B47C: mov     edx, [esp+0A0h+anonymous_2]
0x85B480: push    eax
0x85B481: mov     eax, [esp+0A4h+anonymous_1]
0x85B485: push    ecx
0x85B486: mov     ecx, [esp+0A8h+var_55]
0x85B48A: push    edx
0x85B48B: push    eax
0x85B48C: mov     eax, dword ptr [esp+0B0h+anonymous_0]
0x85B490: push    0
0x85B492: push    ecx
0x85B493: mov     ecx, [esp+0B8h+arg_0]
0x85B49A: push    ebp
0x85B49B: lea     edx, [esp+0BCh+var_87]
0x85B49F: push    edx
0x85B4A0: push    ebx
0x85B4A1: push    edi
0x85B4A2: push    eax
0x85B4A3: push    ecx
0x85B4A4: mov     ecx, esi
0x85B4A6: call    sub_8580E0
0x85B4AB: mov     byte ptr [esp+9Ch+var_87+1], 0
0x85B4B0: jmp     loc_85B89C
0x85B4B5: mov     ecx, esi
0x85B4B7: call    sub_7ED2A0
0x85B4BC: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B4C0: mov     ecx, [esp+9Ch+var_7B]
0x85B4C4: push    edx
0x85B4C5: mov     edx, [esp+0A0h+var_74]
0x85B4C9: push    ecx
0x85B4CA: mov     ecx, [esp+0A4h+anonymous_2]
0x85B4CE: push    edx
0x85B4CF: mov     edx, [esp+0A8h+anonymous_1]
0x85B4D3: push    ecx
0x85B4D4: mov     ecx, [esp+0ACh+var_55]
0x85B4D8: push    edx
0x85B4D9: push    0
0x85B4DB: push    ecx
0x85B4DC: mov     ecx, [esp+0B8h+arg_0]
0x85B4E3: push    ebp
0x85B4E4: lea     edx, [esp+0BCh+var_87]
0x85B4E8: push    edx
0x85B4E9: push    ebx
0x85B4EA: push    edi
0x85B4EB: push    eax
0x85B4EC: mov     eax, dword ptr [esp+0CCh+anonymous_0]
0x85B4F0: push    eax
0x85B4F1: push    ecx
0x85B4F2: mov     ecx, esi
0x85B4F4: call    sub_8588E0
0x85B4F9: mov     byte ptr [esp+9Ch+var_87+1], 0
0x85B4FE: jmp     loc_85B89C
0x85B503: cmp     [esp+9Ch+anonymous_6], 0
0x85B508: jz      loc_85B689
0x85B50E: cmp     byte ptr [esp+9Ch+var_87+2], 0
0x85B513: jz      loc_85B5D3
0x85B519: cmp     dx, 1
0x85B51D: jbe     short loc_85B527
0x85B51F: test    cl, cl
0x85B521: jz      loc_85B5D3
0x85B527: test    dx, dx
0x85B52A: jnz     short loc_85B577
0x85B52C: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B530: mov     eax, [esp+9Ch+var_30]
0x85B534: mov     ecx, [esp+9Ch+var_7B]
0x85B538: push    edx
0x85B539: mov     edx, [esp+0A0h+var_2C]
0x85B53D: push    eax
0x85B53E: mov     eax, [esp+0A4h+var_74]
0x85B542: push    ecx
0x85B543: mov     ecx, [esp+0A8h+anonymous_2]
0x85B547: push    edx
0x85B548: mov     edx, [esp+0ACh+anonymous_1]
0x85B54C: push    eax
0x85B54D: mov     eax, dword ptr [esp+0B0h+var_5D]
0x85B551: push    ecx
0x85B552: mov     ecx, [esp+0B4h+var_55]
0x85B556: push    edx
0x85B557: push    eax
0x85B558: mov     eax, dword ptr [esp+0BCh+anonymous_0]
0x85B55C: push    ecx
0x85B55D: mov     ecx, [esp+0C0h+arg_0]
0x85B564: push    ebp
0x85B565: lea     edx, [esp+0C4h+var_87]
0x85B569: push    edx
0x85B56A: push    ebx
0x85B56B: push    edi
0x85B56C: push    eax
0x85B56D: push    ecx
0x85B56E: mov     ecx, esi
0x85B570: call    sub_856D60
0x85B575: jmp     short loc_85B5BE
0x85B577: mov     ecx, esi
0x85B579: call    sub_7ED2A0
0x85B57E: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B582: mov     ecx, [esp+9Ch+var_7B]
0x85B586: push    edx
0x85B587: mov     edx, [esp+0A0h+var_74]
0x85B58B: push    ecx
0x85B58C: mov     ecx, [esp+0A4h+anonymous_2]
0x85B590: push    edx
0x85B591: mov     edx, [esp+0A8h+anonymous_1]
0x85B595: push    ecx
0x85B596: mov     ecx, dword ptr [esp+0ACh+var_5D]
0x85B59A: push    edx
0x85B59B: mov     edx, [esp+0B0h+var_55]
0x85B59F: push    ecx
0x85B5A0: push    edx
0x85B5A1: mov     edx, dword ptr [esp+0B8h+anonymous_0]
0x85B5A5: push    ebp
0x85B5A6: lea     ecx, [esp+0BCh+var_87]
0x85B5AA: push    ecx
0x85B5AB: push    ebx
0x85B5AC: push    edi
0x85B5AD: push    eax
0x85B5AE: mov     eax, [esp+0CCh+arg_0]
0x85B5B5: push    edx
0x85B5B6: push    eax
0x85B5B7: mov     ecx, esi
0x85B5B9: call    sub_857750
0x85B5BE: cmp     [esp+9Ch+var_83], 0
0x85B5C3: jnz     loc_85B811
0x85B5C9: mov     byte ptr [esp+9Ch+var_87+1], 0
0x85B5CE: jmp     loc_85B89C
0x85B5D3: cmp     dx, 1
0x85B5D7: mov     ecx, esi
0x85B5D9: ja      short loc_85B62D
0x85B5DB: call    sub_7ED2A0
0x85B5E0: mov     ecx, [esp+9Ch+var_7B]
0x85B5E4: mov     edx, [esp+9Ch+var_74]
0x85B5E8: push    ecx
0x85B5E9: mov     ecx, [esp+0A0h+anonymous_2]
0x85B5ED: push    edx
0x85B5EE: mov     edx, [esp+0A4h+anonymous_1]
0x85B5F2: push    ecx
0x85B5F3: mov     ecx, dword ptr [esp+0A8h+var_5D]
0x85B5F7: push    edx
0x85B5F8: mov     edx, [esp+0ACh+var_55]
0x85B5FC: push    ecx
0x85B5FD: push    edx
0x85B5FE: mov     edx, dword ptr [esp+0B4h+anonymous_0]
0x85B602: push    ebp
0x85B603: lea     ecx, [esp+0B8h+var_87]
0x85B607: push    ecx
0x85B608: push    ebx
0x85B609: push    edi
0x85B60A: push    eax
0x85B60B: mov     eax, [esp+0C8h+arg_0]
0x85B612: push    edx
0x85B613: push    eax
0x85B614: mov     ecx, esi
0x85B616: call    sub_855E80
0x85B61B: mov     [esp+9Ch+var_80], 0
0x85B623: mov     [esp+9Ch+var_81], 0
0x85B628: jmp     loc_85B6B7
0x85B62D: call    sub_7ED2A0
0x85B632: mov     ecx, esi
0x85B634: mov     [esp+9Ch+var_48], eax
0x85B638: call    sub_7ED4B0
0x85B63D: mov     ecx, [esp+9Ch+var_7B]
0x85B641: mov     edx, [esp+9Ch+var_74]
0x85B645: push    ecx
0x85B646: mov     ecx, [esp+0A0h+anonymous_2]
0x85B64A: push    edx
0x85B64B: mov     edx, [esp+0A4h+anonymous_1]
0x85B64F: push    ecx
0x85B650: mov     ecx, dword ptr [esp+0A8h+var_5D]
0x85B654: push    edx
0x85B655: mov     edx, [esp+0ACh+var_55]
0x85B659: push    ecx
0x85B65A: push    edx
0x85B65B: mov     edx, [esp+0B4h+var_48]
0x85B65F: push    ebp
0x85B660: lea     ecx, [esp+0B8h+var_87]
0x85B664: push    ecx
0x85B665: mov     ecx, [esp+0BCh+arg_0]
0x85B66C: push    ebx
0x85B66D: push    edi
0x85B66E: push    eax
0x85B66F: mov     eax, dword ptr [esp+0C8h+anonymous_0]
0x85B673: push    edx
0x85B674: push    eax
0x85B675: push    ecx
0x85B676: mov     ecx, esi
0x85B678: call    sub_856510
0x85B67D: sub     [esp+9Ch+var_80], 2
0x85B682: mov     [esp+9Ch+var_81], 0
0x85B687: jmp     short loc_85B6B7
0x85B689: mov     edx, [esp+9Ch+var_7B]
0x85B68D: mov     eax, [esp+9Ch+var_55]
0x85B691: mov     ecx, [esp+9Ch+var_1C]
0x85B698: push    edx
0x85B699: push    eax
0x85B69A: mov     eax, dword ptr [esp+0A4h+anonymous_0]
0x85B69E: push    ecx
0x85B69F: mov     ecx, [esp+0A8h+arg_0]
0x85B6A6: push    ebp
0x85B6A7: lea     edx, [esp+0ACh+var_87]
0x85B6AB: push    edx
0x85B6AC: push    ebx
0x85B6AD: push    edi
0x85B6AE: push    eax
0x85B6AF: push    ecx
0x85B6B0: mov     ecx, esi
0x85B6B2: call    sub_852150
0x85B6B7: cmp     [esp+9Ch+anonymous_6], 0
0x85B6BC: jz      loc_85B7C0
0x85B6C2: cmp     [esp+9Ch+var_81], 0
0x85B6C7: jz      short loc_85B6FA
0x85B6C9: mov     edx, [esp+9Ch+var_7B]
0x85B6CD: mov     eax, [esp+9Ch+anonymous_1]
0x85B6D1: push    edx
0x85B6D2: mov     edx, dword ptr [esp+0A0h+anonymous_0]
0x85B6D6: push    eax
0x85B6D7: mov     eax, [esp+0A4h+arg_0]
0x85B6DE: push    0
0x85B6E0: push    ebp
0x85B6E1: lea     ecx, [esp+0ACh+var_87]
0x85B6E5: push    ecx
0x85B6E6: push    ebx
0x85B6E7: push    edi
0x85B6E8: push    edx
0x85B6E9: push    eax
0x85B6EA: mov     ecx, esi
0x85B6EC: call    sub_853720
0x85B6F1: mov     ecx, esi
0x85B6F3: call    sub_7ED2A0
0x85B6F8: jmp     short loc_85B701
0x85B6FA: mov     ecx, esi
0x85B6FC: call    sub_7ED4B0
0x85B701: test    eax, eax
0x85B703: mov     dword ptr [esp+9Ch+anonymous_0+4], eax
0x85B707: jz      loc_85B7C0
0x85B70D: lea     ecx, [ecx+0]
0x85B710: mov     ecx, esi
0x85B712: call    sub_7ED4B0
0x85B717: cmp     [esp+9Ch+var_80], 2
0x85B71C: ja      short loc_85B767
0x85B71E: mov     ecx, [esp+9Ch+var_7B]
0x85B722: mov     edx, [esp+9Ch+var_74]
0x85B726: push    ecx
0x85B727: mov     ecx, [esp+0A0h+anonymous_1]
0x85B72B: push    edx
0x85B72C: mov     edx, dword ptr [esp+0A4h+var_5D]
0x85B730: push    ecx
0x85B731: push    edx
0x85B732: mov     edx, dword ptr [esp+0ACh+anonymous_0+4]
0x85B736: push    ebp
0x85B737: lea     ecx, [esp+0B0h+var_87]
0x85B73B: push    ecx
0x85B73C: push    ebx
0x85B73D: push    edi
0x85B73E: push    eax
0x85B73F: mov     eax, [esp+0C0h+arg_0]
0x85B746: push    edx
0x85B747: push    eax
0x85B748: mov     ecx, esi
0x85B74A: call    sub_859160
0x85B74F: cmp     [esp+9Ch+var_80], 1
0x85B754: ja      short loc_85B760
0x85B756: mov     [esp+9Ch+var_80], 0
0x85B75E: jmp     short loc_85B7AD
0x85B760: sub     [esp+9Ch+var_80], 2
0x85B765: jmp     short loc_85B7AD
0x85B767: mov     ecx, esi
0x85B769: mov     [esp+9Ch+var_48], eax
0x85B76D: call    sub_7ED4B0
0x85B772: mov     ecx, [esp+9Ch+var_7B]
0x85B776: mov     edx, [esp+9Ch+var_74]
0x85B77A: push    ecx
0x85B77B: mov     ecx, [esp+0A0h+anonymous_1]
0x85B77F: push    edx
0x85B780: mov     edx, dword ptr [esp+0A4h+var_5D]
0x85B784: push    ecx
0x85B785: push    edx
0x85B786: mov     edx, [esp+0ACh+var_48]
0x85B78A: push    ebp
0x85B78B: lea     ecx, [esp+0B0h+var_87]
0x85B78F: push    ecx
0x85B790: mov     ecx, [esp+0B4h+arg_0]
0x85B797: push    ebx
0x85B798: push    edi
0x85B799: push    eax
0x85B79A: mov     eax, dword ptr [esp+0C0h+anonymous_0+4]
0x85B79E: push    edx
0x85B79F: push    eax
0x85B7A0: push    ecx
0x85B7A1: mov     ecx, esi
0x85B7A3: call    sub_859430
0x85B7A8: sub     [esp+9Ch+var_80], 3
0x85B7AD: mov     ecx, esi
0x85B7AF: call    sub_7ED4B0
0x85B7B4: test    eax, eax
0x85B7B6: mov     dword ptr [esp+9Ch+anonymous_0+4], eax
0x85B7BA: jnz     loc_85B710
0x85B7C0: cmp     byte ptr [esp+9Ch+var_87+2], 0
0x85B7C5: jz      short loc_85B806
0x85B7C7: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B7CB: mov     eax, [esp+9Ch+var_74]
0x85B7CF: mov     ecx, [esp+9Ch+var_7B]
0x85B7D3: push    edx
0x85B7D4: mov     edx, [esp+0A0h+var_10]
0x85B7DB: push    eax
0x85B7DC: mov     eax, dword ptr [esp+0A4h+var_5D]
0x85B7E0: push    0
0x85B7E2: push    ecx
0x85B7E3: mov     ecx, [esp+0ACh+anonymous_1]
0x85B7E7: push    edx
0x85B7E8: push    eax
0x85B7E9: mov     eax, dword ptr [esp+0B4h+anonymous_0]
0x85B7ED: push    ecx
0x85B7EE: mov     ecx, [esp+0B8h+arg_0]
0x85B7F5: push    ebp
0x85B7F6: lea     edx, [esp+0BCh+var_87]
0x85B7FA: push    edx
0x85B7FB: push    ebx
0x85B7FC: push    edi
0x85B7FD: push    eax
0x85B7FE: push    ecx
0x85B7FF: mov     ecx, esi
0x85B801: call    sub_859720
0x85B806: cmp     [esp+9Ch+var_83], 0
0x85B80B: jz      loc_85B89C
0x85B811: cmp     [esp+9Ch+anonymous_5], 0
0x85B816: jz      short loc_85B84D
0x85B818: mov     edx, dword ptr [esp+9Ch+var_59]
0x85B81C: mov     eax, [esp+9Ch+var_7B]
0x85B820: mov     ecx, [esp+9Ch+var_74]
0x85B824: push    edx
0x85B825: mov     edx, [esp+0A0h+anonymous_2]
0x85B829: push    eax
0x85B82A: mov     eax, [esp+0A4h+anonymous_1]
0x85B82E: push    ecx
0x85B82F: push    edx
0x85B830: mov     edx, dword ptr [esp+0ACh+anonymous_0]
0x85B834: push    eax
0x85B835: mov     eax, [esp+0B0h+arg_0]
0x85B83C: push    ebp
0x85B83D: lea     ecx, [esp+0B4h+var_87]
0x85B841: push    ecx
0x85B842: push    ebx
0x85B843: push    edi
0x85B844: push    edx
0x85B845: push    eax
0x85B846: mov     ecx, esi
0x85B848: call    sub_859880
0x85B84D: mov     ecx, esi
0x85B84F: call    sub_7ED2A0
0x85B854: test    eax, eax
0x85B856: jz      short loc_85B89C
0x85B858: jmp     short loc_85B860
0x85B85A: align 10h
0x85B860: mov     ecx, dword ptr [esp+9Ch+var_59]
0x85B864: mov     edx, [esp+9Ch+var_7B]
0x85B868: push    ecx
0x85B869: mov     ecx, [esp+0A0h+var_74]
0x85B86D: push    edx
0x85B86E: mov     edx, [esp+0A4h+anonymous_2]
0x85B872: push    ecx
0x85B873: mov     ecx, [esp+0A8h+anonymous_1]
0x85B877: push    edx
0x85B878: push    ecx
0x85B879: push    ebp
0x85B87A: lea     edx, [esp+0B4h+var_87]
0x85B87E: push    edx
0x85B87F: push    ebx
0x85B880: push    edi
0x85B881: push    eax
0x85B882: mov     eax, [esp+0C4h+arg_0]
0x85B889: push    eax
0x85B88A: mov     ecx, esi
0x85B88C: call    sub_859880
0x85B891: mov     ecx, esi
0x85B893: call    sub_7ED4B0
0x85B898: test    eax, eax
0x85B89A: jnz     short loc_85B860
0x85B89C: cmp     [esp+9Ch+var_82], 0
0x85B8A1: jz      short loc_85B8D6
0x85B8A3: mov     ecx, esi
0x85B8A5: call    sub_7ED2A0
0x85B8AA: mov     ecx, [esp+9Ch+var_3C]
0x85B8AE: mov     edx, dword ptr [esp+9Ch+var_20]
0x85B8B2: push    ecx
0x85B8B3: push    edx
0x85B8B4: mov     edx, dword ptr [esp+0A4h+anonymous_0]
0x85B8B8: push    ebp
0x85B8B9: lea     ecx, [esp+0A8h+var_87]
0x85B8BD: push    ecx
0x85B8BE: push    ebx
0x85B8BF: push    edi
0x85B8C0: push    eax
0x85B8C1: mov     eax, [esp+0B8h+arg_0]
0x85B8C8: push    edx
0x85B8C9: push    eax
0x85B8CA: mov     ecx, esi
0x85B8CC: call    sub_85A010
0x85B8D1: mov     byte ptr [esp+9Ch+var_87+1], 1
0x85B8D6: cmp     dword ptr [esi+34h], 2
0x85B8DA: ja      short loc_85B8E6
0x85B8DC: cmp     word ptr [edi], 2
0x85B8E0: jbe     loc_85B99C
0x85B8E6: cmp     byte ptr ds:0B42E97h, 0
0x85B8ED: jz      loc_85B99C
0x85B8F3: cmp     byte ptr [esp+9Ch+var_7B], 0
0x85B8F8: jnz     loc_85B99C
0x85B8FE: cmp     byte ptr [esp+9Ch+var_87+3], 0
0x85B903: jnz     loc_85B99C
0x85B909: cmp     byte ptr [esp+9Ch+var_44], 0
0x85B90E: jnz     loc_85B99C
0x85B914: cmp     bl, 1
0x85B917: jnz     short loc_85B971
0x85B919: push    10h; Size
0x85B91B: call    FormHeapAlloc
0x85B920: add     esp, 4
0x85B923: mov     [esp+9Ch+var_3C], eax
0x85B927: test    eax, eax
0x85B929: mov     [esp+9Ch+var_4], 1
0x85B934: jz      short loc_85B951
0x85B936: mov     ecx, [esp+9Ch+arg_0]
0x85B93D: push    0
0x85B93F: push    0
0x85B941: push    1
0x85B943: push    3
0x85B945: push    ecx
0x85B946: push    eax
0x85B947: call    sub_7E2370
0x85B94C: add     esp, 18h
0x85B94F: jmp     short loc_85B953
0x85B951: xor     eax, eax
0x85B953: lea     edx, [esp+9Ch+var_3C]
0x85B957: push    edx
0x85B958: lea     ecx, [esi+28h]
0x85B95B: mov     [esp+0A0h+var_4], 0FFFFFFFFh
0x85B966: mov     [esp+0A0h+var_3C], eax
0x85B96A: call    sub_6AA320
0x85B96F: jmp     short loc_85B99C
0x85B971: add     word ptr [edi], 1
0x85B975: jmp     short loc_85B99C
0x85B977: mov     eax, [esp+9Ch+anonymous_2]
0x85B97B: mov     ecx, dword ptr [esp+9Ch+anonymous_0+4]
0x85B97F: push    eax
0x85B980: mov     eax, dword ptr [esp+0A0h+anonymous_0]
0x85B984: push    ecx
0x85B985: mov     ecx, [esp+0A4h+arg_0]
0x85B98C: lea     edx, [esp+0A4h+var_87]
0x85B990: push    edx
0x85B991: push    ebx
0x85B992: push    edi
0x85B993: push    eax
0x85B994: push    ecx
0x85B995: mov     ecx, esi
0x85B997: call    sub_85A390
0x85B99C: cmp     byte ptr [esp+9Ch+var_87+1], 0
0x85B9A1: jnz     short loc_85B9C5
0x85B9A3: cmp     dword ptr [esi+34h], 0
0x85B9A7: jz      short loc_85B9C5
0x85B9A9: mov     edx, [esi+30h]
0x85B9AC: mov     eax, [edx+8]
0x85B9AF: movzx   ecx, word ptr [eax+4]
0x85B9B3: cmp     cx, 190h
0x85B9B8: jz      short loc_85B9C5
0x85B9BA: cmp     cx, 192h
0x85B9BF: jz      short loc_85B9C5
0x85B9C1: mov     byte ptr [eax+7], 1
0x85B9C5: cmp     byte ptr [esp+9Ch+var_4C], 0
0x85B9CA: jz      short loc_85B9F2
0x85B9CC: mov     eax, [esi+8Ch]
0x85B9D2: test    eax, eax
0x85B9D4: jz      short loc_85B9F2
0x85B9D6: mov     edx, [esp+9Ch+arg_0]
0x85B9DD: push    eax
0x85B9DE: mov     eax, [esp+0A0h+var_44]
0x85B9E2: push    eax
0x85B9E3: lea     ecx, [esp+0A4h+var_87]
0x85B9E7: push    ecx
0x85B9E8: push    ebx
0x85B9E9: push    edi
0x85B9EA: push    edx
0x85B9EB: mov     ecx, esi
0x85B9ED: call    sub_85A200
0x85B9F2: cmp     byte ptr [esp+9Ch+var_87+1], 0
0x85B9F7: jz      short loc_85BA2A
0x85B9F9: mov     eax, [esp+9Ch+var_28]
0x85B9FD: test    eax, eax
0x85B9FF: jz      short loc_85BA0B
0x85BA01: test    byte ptr [eax+18h], 1
0x85BA05: jz      short loc_85BA0B
0x85BA07: mov     al, 1
0x85BA09: jmp     short loc_85BA0D
0x85BA0B: xor     al, al
0x85BA0D: mov     edx, [esp+9Ch+arg_0]
0x85BA14: push    eax
0x85BA15: mov     eax, [esp+0A0h+var_7B]
0x85BA19: push    eax
0x85BA1A: push    ebp
0x85BA1B: lea     ecx, [esp+0A8h+var_87]
0x85BA1F: push    ecx
0x85BA20: push    ebx
0x85BA21: push    edi
0x85BA22: push    edx
0x85BA23: mov     ecx, esi
0x85BA25: call    sub_854190
0x85BA2A: cmp     dword ptr [esi+0E0h], 0
0x85BA31: jz      short loc_85BA4A
0x85BA33: mov     ecx, [esp+9Ch+arg_0]
0x85BA3A: push    ebp
0x85BA3B: lea     eax, [esp+0A0h+var_87]
0x85BA3F: push    eax
0x85BA40: push    ebx
0x85BA41: push    edi
0x85BA42: push    ecx
0x85BA43: mov     ecx, esi
0x85BA45: call    sub_85ACC0
0x85BA4A: cmp     byte ptr ds:0B43073h, 0
0x85BA51: jz      short loc_85BAAD
0x85BA53: cmp     dword ptr [esp+9Ch+var_38], 0
0x85BA58: jz      short loc_85BA71
0x85BA5A: mov     edx, [esp+9Ch+var_55]
0x85BA5E: mov     eax, [esp+9Ch+arg_0]
0x85BA65: push    edx
0x85BA66: push    ebp
0x85BA67: push    ebx
0x85BA68: push    edi
0x85BA69: push    eax
0x85BA6A: mov     ecx, esi
0x85BA6C: call    sub_854FF0
0x85BA71: cmp     byte ptr [esp+9Ch+var_7B], 0
0x85BA76: jnz     short loc_85BAAD
0x85BA78: cmp     byte ptr [esp+9Ch+var_30], 0
0x85BA7D: jnz     short loc_85BAAD
0x85BA7F: cmp     byte ptr [esp+9Ch+var_74], 0
0x85BA84: jnz     short loc_85BAAD
0x85BA86: cmp     byte ptr [esp+9Ch+var_2C], 0
0x85BA8B: jnz     short loc_85BAAD
0x85BA8D: cmp     [esp+9Ch+anonymous_4], 0
0x85BA92: jnz     short loc_85BAAD
0x85BA94: cmp     [esp+9Ch+var_59], 0
0x85BA99: jnz     short loc_85BAAD
0x85BA9B: mov     ecx, [esp+9Ch+arg_0]
0x85BAA2: push    ebp
0x85BAA3: push    ebx
0x85BAA4: push    edi
0x85BAA5: push    ecx
0x85BAA6: mov     ecx, esi
0x85BAA8: call    sub_855170
0x85BAAD: call    sub_405A80
0x85BAB2: test    al, al
0x85BAB4: jz      loc_85BBB8
0x85BABA: mov     ecx, esi
0x85BABC: call    sub_7ED1A0
0x85BAC1: mov     edi, eax
0x85BAC3: test    edi, edi
0x85BAC5: jz      loc_85BBB8
0x85BACB: mov     bl, byte ptr [esp+9Ch+var_7B]
0x85BACF: mov     ebp, [esp+9Ch+arg_0]
0x85BAD6: jmp     short loc_85BAE0
0x85BAD8: align 10h
0x85BAE0: cmp     byte ptr [edi+0F4h], 0
0x85BAE7: jz      loc_85BB70
0x85BAED: push    10h; Size
0x85BAEF: call    FormHeapAlloc
0x85BAF4: add     esp, 4
0x85BAF7: mov     dword ptr [esp+9Ch+var_38], eax
0x85BAFB: test    eax, eax
0x85BAFD: mov     [esp+9Ch+var_4], 2
0x85BB08: jz      short loc_85BB1D
0x85BB0A: push    edi
0x85BB0B: push    1
0x85BB0D: push    0
0x85BB0F: push    0
0x85BB11: push    ebp
0x85BB12: push    eax
0x85BB13: call    sub_7E2370
0x85BB18: add     esp, 18h
0x85BB1B: jmp     short loc_85BB1F
0x85BB1D: xor     eax, eax
0x85BB1F: cmp     [esp+9Ch+var_24], 0
0x85BB24: mov     [esp+9Ch+var_4], 0FFFFFFFFh
0x85BB2F: mov     dword ptr [esp+9Ch+var_38], eax
0x85BB33: jz      short loc_85BB3C
0x85BB35: mov     ecx, 178h
0x85BB3A: jmp     short loc_85BB5B
0x85BB3C: cmp     [esp+9Ch+anonymous_4], 0
0x85BB41: jz      short loc_85BB4A
0x85BB43: mov     ecx, 179h
0x85BB48: jmp     short loc_85BB5B
0x85BB4A: mov     dl, bl
0x85BB4C: neg     dl
0x85BB4E: sbb     edx, edx
0x85BB50: and     edx, 3
0x85BB53: add     edx, 177h
0x85BB59: mov     ecx, edx
0x85BB5B: mov     [eax+4], cx
0x85BB5F: mov     byte ptr [eax+7], 1
0x85BB63: lea     eax, [esp+9Ch+var_38]
0x85BB67: push    eax
0x85BB68: lea     ecx, [esi+28h]
0x85BB6B: call    sub_6AA320
0x85BB70: mov     ecx, esi
0x85BB72: call    sub_7ED3B0
0x85BB77: mov     edi, eax
0x85BB79: test    edi, edi
0x85BB7B: jnz     loc_85BAE0
0x85BB81: jmp     short loc_85BBB8
0x85BB83: mov     edx, [esi]
0x85BB85: mov     edx, [edx+98h]
0x85BB8B: push    ebx
0x85BB8C: push    edi
0x85BB8D: push    eax
0x85BB8E: mov     eax, [esp+0A8h+arg_0]
0x85BB95: push    eax
0x85BB96: mov     ecx, esi
0x85BB98: call    edx
0x85BB9A: jmp     short loc_85BBB8
0x85BB9C: mov     eax, [esp+9Ch+var_40]
0x85BBA0: mov     edx, [esp+9Ch+arg_0]
0x85BBA7: push    eax
0x85BBA8: push    ebp
0x85BBA9: lea     ecx, [esp+0A4h+var_87]
0x85BBAD: push    ecx
0x85BBAE: push    ebx
0x85BBAF: push    edi
0x85BBB0: push    edx
0x85BBB1: mov     ecx, esi
0x85BBB3: call    sub_854CD0
0x85BBB8: mov     ecx, dword ptr [esp+9Ch+var_C]
0x85BBBF: mov     large fs:0, ecx
0x85BBC6: pop     ecx
0x85BBC7: pop     edi
0x85BBC8: pop     esi
0x85BBC9: pop     ebp
0x85BBCA: pop     ebx
0x85BBCB: add     esp, 88h
0x85BBD1: retn    10h
