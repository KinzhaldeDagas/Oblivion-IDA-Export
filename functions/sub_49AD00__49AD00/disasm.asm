0x49AD00: push    ebp
0x49AD01: mov     ebp, esp
0x49AD03: and     esp, 0FFFFFFF8h
0x49AD06: sub     esp, 0C0h
0x49AD0C: push    ebx
0x49AD0D: push    ebp
0x49AD0E: push    esi
0x49AD0F: push    edi
0x49AD10: mov     edi, ecx
0x49AD12: mov     ecx, ds:0B333C4h
0x49AD18: test    ecx, ecx
0x49AD1A: mov     [esp+0D0h+var_8C], edi
0x49AD1E: jz      short loc_49AD40
0x49AD20: mov     eax, ds:0B070B0h
0x49AD25: fild    dword ptr ds:0B070B0h
0x49AD2B: test    eax, eax
0x49AD2D: jge     short loc_49AD35
0x49AD2F: fadd    dword ptr ds:0A2FC78h
0x49AD35: push    ecx
0x49AD36: fstp    [esp+0D4h+var_D4]; float
0x49AD39: call    sub_65E5E0
0x49AD3E: jmp     short loc_49AD4B
0x49AD40: mov     ecx, ds:0B333A0h
0x49AD46: call    TES_GetCurrentCell
0x49AD4B: mov     ecx, ds:0B33398h
0x49AD51: cmp     dword ptr [ecx+24h], 0
0x49AD55: mov     ebx, eax
0x49AD57: jz      loc_49B5E7
0x49AD5D: test    ebx, ebx
0x49AD5F: jz      loc_49B5C4
0x49AD65: movzx   edx, byte ptr [ebx+24h]
0x49AD69: shr     edx, 1
0x49AD6B: test    dl, 1
0x49AD6E: jz      loc_49B5C4
0x49AD74: mov     ecx, ebx
0x49AD76: call    TESObjectCELL_GetWaterHeight
0x49AD7B: fstp    [esp+0D0h+var_B8]
0x49AD7F: mov     ecx, ds:0B3FC84h
0x49AD85: mov     eax, ds:0B3FC80h
0x49AD8A: mov     [esp+0D0h+var_B0], ecx
0x49AD8E: mov     ecx, ebx; this
0x49AD90: mov     [esp+0D0h+var_B4], eax
0x49AD94: call    TESObjectCELL_IsInterior
0x49AD99: fldz
0x49AD9B: test    al, al
0x49AD9D: jz      loc_49AE30
0x49ADA3: cmp     byte ptr ds:0B3521Ch, 0
0x49ADAA: fstp    st
0x49ADAC: mov     esi, ds:0B333C4h
0x49ADB2: fld     dword ptr ds:0B070D0h
0x49ADB8: mov     edx, [esi+2Ch]
0x49ADBB: mov     eax, [esi+30h]
0x49ADBE: mov     ecx, [esi+34h]
0x49ADC1: mov     [esp+0D0h+var_74], edx
0x49ADC5: mov     [esp+0D0h+var_70], eax
0x49ADC9: mov     [esp+0D0h+var_6C], ecx
0x49ADCD: jz      short loc_49ADDC
0x49ADCF: fstp    st
0x49ADD1: fldz
0x49ADD3: fstp    [esp+0D0h+a3]
0x49ADD7: jmp     loc_49B2DF
0x49ADDC: fld     [esp+0D0h+var_B8]
0x49ADE0: fsub    [esp+0D0h+var_6C]
0x49ADE4: fstp    [esp+0D0h+var_B8]
0x49ADE8: fld     [esp+0D0h+var_B8]
0x49ADEC: fabs
0x49ADEE: fstp    [esp+0D0h+var_B8]
0x49ADF2: fld     [esp+0D0h+var_B8]
0x49ADF6: fcom    st(1)
0x49ADF8: fnstsw  ax
0x49ADFA: test    ah, 5
0x49ADFD: jp      short loc_49AE21
0x49ADFF: fsubr   st, st(1)
0x49AE01: fdivrp  st(1), st
0x49AE03: fstp    [esp+0D0h+a3]
0x49AE07: fld1
0x49AE09: fcom    [esp+0D0h+a3]
0x49AE0D: fnstsw  ax
0x49AE0F: test    ah, 5
0x49AE12: jp      loc_49B2DD
0x49AE18: fstp    [esp+0D0h+a3]
0x49AE1C: jmp     loc_49B2DF
0x49AE21: fstp    st
0x49AE23: fstp    st
0x49AE25: fldz
0x49AE27: fstp    [esp+0D0h+a3]
0x49AE2B: jmp     loc_49B2DF
0x49AE30: mov     edx, ds:0B070B8h
0x49AE36: fild    dword ptr ds:0B070B8h
0x49AE3C: test    edx, edx
0x49AE3E: jge     short loc_49AE46
0x49AE40: fadd    dword ptr ds:0A2FC78h
0x49AE46: mov     eax, ds:0B070B0h
0x49AE4B: fstp    [esp+0D0h+var_9C]
0x49AE4F: test    eax, eax
0x49AE51: fild    dword ptr ds:0B070B0h
0x49AE57: jge     short loc_49AE5F
0x49AE59: fadd    dword ptr ds:0A2FC78h
0x49AE5F: fstp    [esp+0D0h+var_94]
0x49AE63: mov     ecx, ds:0B3F9A8h
0x49AE69: fld     dword ptr ds:0B070D8h
0x49AE6F: mov     edx, ds:0B3F9ACh
0x49AE75: fst     [esp+0D0h+var_10]
0x49AE7C: mov     eax, ds:0B3F9B0h
0x49AE81: fxch    st(1)
0x49AE83: mov     esi, ds:0B333C4h
0x49AE89: fst     [esp+0D0h+a3]
0x49AE8D: mov     [esp+0D0h+var_A0], eax
0x49AE91: fld     [esp+0D0h+var_94]
0x49AE95: mov     [esp+0D0h+a2], ecx
0x49AE99: fst     [esp+0D0h+var_68]
0x49AE9D: mov     [esp+0D0h+a2+4], edx
0x49AEA1: fld     st
0x49AEA3: mov     eax, [esi+34h]
0x49AEA6: fadd    st, st(1)
0x49AEA8: mov     ecx, [esi+2Ch]
0x49AEAB: fld     [esp+0D0h+var_9C]
0x49AEAF: mov     edx, [esi+30h]
0x49AEB2: fld     qword ptr ds:0A2F928h
0x49AEB8: mov     [esp+0D0h+var_28], eax
0x49AEBF: fsubr   st, st(1)
0x49AEC1: xor     edi, edi
0x49AEC3: xor     ebp, ebp
0x49AEC5: mov     [esp+0D0h+var_30], ecx
0x49AECC: fdivp   st(2), st
0x49AECE: mov     [esp+0D0h+var_2C], edx
0x49AED5: mov     [esp+0D0h+var_88], edi
0x49AED9: fxch    st(1)
0x49AEDB: fstp    [esp+0D0h+var_94]
0x49AEDF: fldz
0x49AEE1: fcom    st(1)
0x49AEE3: fnstsw  ax
0x49AEE5: test    ah, 5
0x49AEE8: jp      loc_49B21C
0x49AEEE: fld     st
0x49AEF0: fxch    st(1)
0x49AEF2: mov     [esp+0D0h+var_90], 0
0x49AEFA: fcom    st(2)
0x49AEFC: fnstsw  ax
0x49AEFE: test    ah, 5
0x49AF01: jp      loc_49B28F
0x49AF07: fstp    st(2)
0x49AF09: fstp    st(1)
0x49AF0B: fstp    st(3)
0x49AF0D: fmul    qword ptr ds:0A3D360h
0x49AF13: fst     [esp+0D0h+var_8]
0x49AF1A: fld     [esp+0D0h+var_94]
0x49AF1E: fmulp   st(3), st
0x49AF20: fadd    st(2), st
0x49AF22: fxch    st(2)
0x49AF24: fstp    [esp+0D0h+var_18]
0x49AF2B: fst     [esp+0D0h+var_AC]
0x49AF2F: fld     [esp+0D0h+var_AC]
0x49AF33: jmp     short loc_49AF42
0x49AF35: fstp    st
0x49AF37: fldz
0x49AF39: fld     [esp+0D0h+var_8]
0x49AF40: fxch    st(2)
0x49AF42: test    edi, edi
0x49AF44: fxch    st(1)
0x49AF46: mov     ecx, [esi+2Ch]
0x49AF49: mov     [esp+0D0h+a2], ecx
0x49AF4D: mov     edx, [esi+30h]
0x49AF50: mov     [esp+0D0h+a2+4], edx
0x49AF54: mov     eax, [esi+34h]
0x49AF57: fst     [esp+0D0h+a3]
0x49AF5B: fld     [esp+0D0h+a2]
0x49AF5F: mov     [esp+0D0h+var_A0], eax
0x49AF63: fadd    [esp+0D0h+var_18]
0x49AF6A: fstp    [esp+0D0h+a2]
0x49AF6E: fld     [esp+0D0h+var_94]
0x49AF72: fmulp   st(2), st
0x49AF74: fxch    st(1)
0x49AF76: faddp   st(2), st
0x49AF78: fld     [esp+0D0h+a2+4]
0x49AF7C: faddp   st(2), st
0x49AF7E: fxch    st(1)
0x49AF80: fstp    [esp+0D0h+a2+4]
0x49AF84: jz      short loc_49AFB8
0x49AF86: fld     [esp+0D0h+a2]
0x49AF8A: lea     ecx, [esp+0D0h+var_24]
0x49AF91: fstp    [esp+0D0h+var_24]
0x49AF98: push    ecx
0x49AF99: fld     [esp+0D4h+a2+4]
0x49AF9D: mov     ecx, edi
0x49AF9F: fstp    [esp+0D4h+var_20]
0x49AFA6: fstp    [esp+0D4h+var_1C]
0x49AFAD: call    sub_4CC540
0x49AFB2: test    al, al
0x49AFB4: jnz     short loc_49AFF1
0x49AFB6: fldz
0x49AFB8: fld     [esp+0D0h+a2]
0x49AFBC: mov     ecx, ds:0B333A0h
0x49AFC2: fstp    [esp+0D0h+var_3C]
0x49AFC9: lea     edx, [esp+0D0h+var_3C]
0x49AFD0: fld     [esp+0D0h+a2+4]
0x49AFD4: push    edx; float *
0x49AFD5: fstp    [esp+0D4h+var_38]
0x49AFDC: fstp    [esp+0D4h+var_34]
0x49AFE3: call    TES__GetCurrentWorldspace
0x49AFE8: mov     ecx, eax; this
0x49AFEA: call    TESWorldSpace__GetCellAtPos
0x49AFEF: mov     edi, eax
0x49AFF1: test    edi, edi
0x49AFF3: jz      short loc_49AFFE
0x49AFF5: mov     ecx, edi
0x49AFF7: call    TESObjectCELL_GetWaterHeight
0x49AFFC: jmp     short loc_49B004
0x49AFFE: fld     dword ptr ds:0A3B888h
0x49B004: lea     eax, [esp+0D0h+a3]
0x49B008: fstp    [esp+0D0h+var_AC]
0x49B00C: push    eax; a3
0x49B00D: lea     ecx, [esp+0D4h+a2]
0x49B011: push    ecx; a2
0x49B012: mov     ecx, ds:0B333A0h; this
0x49B018: call    GetTerrainHeight
0x49B01D: test    al, al
0x49B01F: jz      loc_49B112
0x49B025: fld     [esp+0D0h+a3]
0x49B029: fld     [esp+0D0h+var_AC]
0x49B02D: fcompp
0x49B02F: fnstsw  ax
0x49B031: test    ah, 41h
0x49B034: jnz     loc_49B112
0x49B03A: fld     [esp+0D0h+var_B4]
0x49B03E: add     ebp, 1
0x49B041: cmp     byte ptr ds:0B3522Ah, 0
0x49B048: fadd    [esp+0D0h+a2]
0x49B04C: fstp    [esp+0D0h+var_B4]
0x49B050: fld     [esp+0D0h+var_B0]
0x49B054: fadd    [esp+0D0h+a2+4]
0x49B058: fstp    [esp+0D0h+var_B0]
0x49B05C: jz      loc_49B1C5
0x49B062: fldz
0x49B064: lea     edx, [esp+0D0h+var_58]
0x49B068: fst     [esp+0D0h+var_58]
0x49B06C: push    edx; int
0x49B06D: fld1
0x49B06F: push    ecx
0x49B070: fstp    [esp+0D8h+var_54]
0x49B077: fst     [esp+0D8h+var_50]
0x49B07E: fstp    [esp+0D8h+var_4C]
0x49B085: fld     dword ptr ds:0A31C80h
0x49B08B: fstp    [esp+0D8h+var_D8]; float
0x49B08E: call    sub_47FD30
0x49B093: add     esp, 8
0x49B096: mov     esi, eax
0x49B098: call    sub_4E70B0
0x49B09D: push    eax; a2
0x49B09E: mov     ecx, esi; this
0x49B0A0: call    sub_405680
0x49B0A5: mov     ecx, ebx
0x49B0A7: call    TESObjectCELL_GetWaterHeight
0x49B0AC: fld     [esp+0D0h+a3]
0x49B0B0: fcom    st(1)
0x49B0B2: fnstsw  ax
0x49B0B4: fstp    st(1)
0x49B0B6: test    ah, 5
0x49B0B9: jp      short loc_49B0C4
0x49B0BB: mov     ecx, ebx
0x49B0BD: fstp    st
0x49B0BF: call    TESObjectCELL_GetWaterHeight
0x49B0C4: fstp    [esp+0D0h+var_AC]
0x49B0C8: fld     [esp+0D0h+a2]
0x49B0CC: fstp    [esp+0D0h+var_48]
0x49B0D3: mov     eax, [esp+0D0h+var_48]
0x49B0DA: fld     [esp+0D0h+a2+4]
0x49B0DE: mov     [esi+54h], eax
0x49B0E1: fstp    [esp+0D0h+var_44]
0x49B0E8: mov     ecx, [esp+0D0h+var_44]
0x49B0EF: fld     [esp+0D0h+var_AC]
0x49B0F3: mov     [esi+58h], ecx
0x49B0F6: fadd    qword ptr ds:0A3F3E8h
0x49B0FC: fstp    [esp+0D0h+var_40]
0x49B103: mov     edx, [esp+0D0h+var_40]
0x49B10A: mov     [esi+5Ch], edx
0x49B10D: jmp     loc_49B1AF
0x49B112: cmp     byte ptr ds:0B3522Ah, 0
0x49B119: jz      loc_49B1C5
0x49B11F: fldz
0x49B121: lea     eax, [esp+0D0h+var_84]
0x49B125: fst     [esp+0D0h+var_84]
0x49B129: push    eax; int
0x49B12A: fst     [esp+0D4h+var_80]
0x49B12E: push    ecx
0x49B12F: fld1
0x49B131: fstp    [esp+0D8h+var_7C]
0x49B135: fstp    [esp+0D8h+var_78]
0x49B139: fld     dword ptr ds:0A31C80h
0x49B13F: fstp    [esp+0D8h+var_D8]; float
0x49B142: call    sub_47FD30
0x49B147: add     esp, 8
0x49B14A: mov     esi, eax
0x49B14C: call    sub_4E70B0
0x49B151: push    eax; a2
0x49B152: mov     ecx, esi; this
0x49B154: call    sub_405680
0x49B159: mov     ecx, ebx
0x49B15B: call    TESObjectCELL_GetWaterHeight
0x49B160: fld     [esp+0D0h+a3]
0x49B164: fcom    st(1)
0x49B166: fnstsw  ax
0x49B168: fstp    st(1)
0x49B16A: test    ah, 5
0x49B16D: jp      short loc_49B178
0x49B16F: mov     ecx, ebx
0x49B171: fstp    st
0x49B173: call    TESObjectCELL_GetWaterHeight
0x49B178: fstp    [esp+0D0h+var_AC]
0x49B17C: fld     [esp+0D0h+a2]
0x49B180: fstp    [esp+0D0h+var_74]
0x49B184: mov     ecx, [esp+0D0h+var_74]
0x49B188: fld     [esp+0D0h+a2+4]
0x49B18C: mov     [esi+54h], ecx
0x49B18F: fstp    [esp+0D0h+var_70]
0x49B193: mov     edx, [esp+0D0h+var_70]
0x49B197: fld     [esp+0D0h+var_AC]
0x49B19B: mov     [esi+58h], edx
0x49B19E: fadd    qword ptr ds:0A3F3E8h
0x49B1A4: fstp    [esp+0D0h+var_6C]
0x49B1A8: mov     eax, [esp+0D0h+var_6C]
0x49B1AC: mov     [esi+5Ch], eax
0x49B1AF: fld     dword ptr ds:0A31C80h
0x49B1B5: push    ecx
0x49B1B6: mov     ecx, ds:0B333A0h
0x49B1BC: fstp    [esp+0D4h+var_D4]; float
0x49B1BF: push    esi; int
0x49B1C0: call    sub_440E60
0x49B1C5: add     [esp+0D0h+var_90], 1
0x49B1CA: fild    [esp+0D0h+var_90]
0x49B1CE: mov     esi, ds:0B333C4h
0x49B1D4: fstp    [esp+0D0h+var_AC]
0x49B1D8: fld     [esp+0D0h+var_AC]
0x49B1DC: fld     [esp+0D0h+var_9C]
0x49B1E0: fcom    st(1)
0x49B1E2: fnstsw  ax
0x49B1E4: test    ah, 41h
0x49B1E7: jz      loc_49AF35
0x49B1ED: fstp    st(1)
0x49B1EF: fldz
0x49B1F1: fld     [esp+0D0h+var_10]
0x49B1F8: fldz
0x49B1FA: fld     [esp+0D0h+var_68]
0x49B1FE: fxch    st(2)
0x49B200: fxch    st(4)
0x49B202: fxch    st(1)
0x49B204: add     [esp+0D0h+var_88], 1
0x49B209: fild    [esp+0D0h+var_88]
0x49B20D: fcom    st(2)
0x49B20F: fnstsw  ax
0x49B211: test    ah, 5
0x49B214: jnp     loc_49AEF0
0x49B21A: fstp    st(3)
0x49B21C: test    ebp, ebp
0x49B21E: fstp    st(2)
0x49B220: fstp    st(1)
0x49B222: mov     [esp+0D0h+var_9C], ebp
0x49B226: fild    [esp+0D0h+var_9C]
0x49B22A: jge     short loc_49B232
0x49B22C: fadd    dword ptr ds:0A2FC78h
0x49B232: cmp     byte ptr ds:0B3521Ch, 0
0x49B239: fstp    [esp+0D0h+var_9C]
0x49B23D: fld     [esp+0D0h+var_9C]
0x49B241: mov     edi, [esp+0D0h+var_8C]
0x49B245: fst     [esp+0D0h+var_9C]
0x49B249: fld     [esp+0D0h+var_B4]
0x49B24D: fld     [esp+0D0h+var_9C]
0x49B251: fld     st
0x49B253: fdivp   st(2), st
0x49B255: fxch    st(1)
0x49B257: fstp    [esp+0D0h+var_B4]
0x49B25B: fdivr   [esp+0D0h+var_B0]
0x49B25F: fstp    [esp+0D0h+var_B0]
0x49B263: fld     [esp+0D0h+var_B4]
0x49B267: fsub    dword ptr [esi+2Ch]
0x49B26A: fstp    [esp+0D0h+var_B4]
0x49B26E: fld     [esp+0D0h+var_B0]
0x49B272: fsub    dword ptr [esi+30h]
0x49B275: fstp    [esp+0D0h+var_B0]
0x49B279: fadd    st, st
0x49B27B: fld     st(1)
0x49B27D: fmulp   st(2), st
0x49B27F: fdivrp  st(1), st
0x49B281: fstp    [esp+0D0h+a3]
0x49B285: jz      short loc_49B296
0x49B287: fstp    st(1)
0x49B289: fstp    [esp+0D0h+a3]
0x49B28D: jmp     short loc_49B2DF
0x49B28F: fstp    st(1)
0x49B291: jmp     loc_49B204
0x49B296: fld     [esp+0D0h+var_B8]
0x49B29A: fsub    [esp+0D0h+var_28]
0x49B2A1: fstp    [esp+0D0h+var_B8]
0x49B2A5: fld     [esp+0D0h+var_B8]
0x49B2A9: fabs
0x49B2AB: fstp    [esp+0D0h+var_B8]
0x49B2AF: fld     [esp+0D0h+var_B8]
0x49B2B3: fcom    st(2)
0x49B2B5: fnstsw  ax
0x49B2B7: test    ah, 5
0x49B2BA: jp      short loc_49B2D3
0x49B2BC: fstp    st(1)
0x49B2BE: fsubr   st, st(1)
0x49B2C0: fdivrp  st(1), st
0x49B2C2: fstp    [esp+0D0h+var_B8]
0x49B2C6: fld     [esp+0D0h+var_B8]
0x49B2CA: fmul    [esp+0D0h+a3]
0x49B2CE: jmp     loc_49AE03
0x49B2D3: fstp    st
0x49B2D5: fstp    st(1)
0x49B2D7: fstp    [esp+0D0h+a3]
0x49B2DB: jmp     short loc_49B2DF
0x49B2DD: fstp    st
0x49B2DF: lea     ecx, [esp+0D0h+var_B4]
0x49B2E3: call    sub_499020
0x49B2E8: fstp    st
0x49B2EA: fld     [esp+0D0h+a3]
0x49B2EE: mov     ecx, ds:0B070B0h
0x49B2F4: test    ecx, ecx
0x49B2F6: fld1
0x49B2F8: fsubrp  st(1), st
0x49B2FA: fild    dword ptr ds:0B070B0h
0x49B300: jge     short loc_49B308
0x49B302: fadd    dword ptr ds:0A2FC78h
0x49B308: mov     edx, [esp+0D0h+var_B4]
0x49B30C: fmulp   st(1), st
0x49B30E: mov     eax, [esp+0D0h+var_B0]
0x49B312: mov     [esp+0D0h+var_9C], edx
0x49B316: fstp    [esp+0D0h+var_B8]
0x49B31A: mov     [esp+0D0h+var_98], eax
0x49B31E: fld     [esp+0D0h+var_B8]
0x49B322: xor     ebp, ebp
0x49B324: fld     st
0x49B326: fmul    [esp+0D0h+var_B4]
0x49B32A: fstp    [esp+0D0h+var_9C]
0x49B32E: mov     ecx, [esp+0D0h+var_9C]
0x49B332: mov     [esp+0D0h+var_B4], ecx
0x49B336: fmul    [esp+0D0h+var_98]
0x49B33A: mov     ecx, [edi+40h]
0x49B33D: cmp     ecx, ebp
0x49B33F: fstp    [esp+0D0h+var_98]
0x49B343: mov     edx, [esp+0D0h+var_98]
0x49B347: fld     [esp+0D0h+var_9C]
0x49B34B: mov     [esp+0D0h+var_B0], edx
0x49B34F: fadd    dword ptr [esi+2Ch]
0x49B352: fstp    [esp+0D0h+var_B4]
0x49B356: fld     dword ptr [esi+30h]
0x49B359: fadd    [esp+0D0h+var_B0]
0x49B35D: fstp    [esp+0D0h+var_B0]
0x49B361: jz      short loc_49B38C
0x49B363: call    sub_6B73A0
0x49B368: test    al, al
0x49B36A: jnz     short loc_49B386
0x49B36C: mov     esi, [edi+40h]
0x49B36F: cmp     esi, ebp
0x49B371: jz      short loc_49B383
0x49B373: mov     ecx, esi; this
0x49B375: call    sub_6B73E0
0x49B37A: push    esi
0x49B37B: call    FormHeapFree
0x49B380: add     esp, 4
0x49B383: mov     [edi+40h], ebp
0x49B386: mov     esi, ds:0B333C4h
0x49B38C: cmp     [edi+40h], ebp
0x49B38F: jz      loc_49B580
0x49B395: cmp     byte ptr ds:0B3522Ah, 0
0x49B39C: jz      loc_49B4C1
0x49B3A2: mov     eax, [esi]
0x49B3A4: mov     edx, [eax+174h]
0x49B3AA: mov     ecx, esi
0x49B3AC: call    edx
0x49B3AE: mov     ecx, [eax]
0x49B3B0: mov     dword ptr [esp+0D0h+var_68], ecx
0x49B3B4: mov     edx, [eax+4]
0x49B3B7: mov     dword ptr [esp+0D0h+var_68+4], edx
0x49B3BB: mov     eax, [eax+8]
0x49B3BE: mov     [esp+0D0h+var_60], eax
0x49B3C2: fld     [esp+0D0h+var_60]
0x49B3C6: fadd    qword ptr ds:0A3F3E8h
0x49B3CC: lea     ecx, [esp+0D0h+var_84]
0x49B3D0: push    ecx; int
0x49B3D1: push    ecx
0x49B3D2: fstp    [esp+0D8h+var_60]
0x49B3D6: fld     [esp+0D8h+var_B4]
0x49B3DA: fstp    [esp+0D8h+a2]
0x49B3DE: fld     [esp+0D8h+var_B0]
0x49B3E2: fstp    [esp+0D8h+a2+4]
0x49B3E6: fld     [esp+0D8h+var_60]
0x49B3EA: fstp    [esp+0D8h+var_A0]
0x49B3EE: fld1
0x49B3F0: fstp    [esp+0D8h+var_84]
0x49B3F4: fldz
0x49B3F6: fst     [esp+0D8h+var_80]
0x49B3FA: fst     [esp+0D8h+var_7C]
0x49B3FE: fstp    [esp+0D8h+var_78]
0x49B402: fld     dword ptr ds:0A31C80h
0x49B408: fstp    [esp+0D8h+var_D8]; float
0x49B40B: call    sub_47FD30
0x49B410: add     esp, 8
0x49B413: mov     esi, eax
0x49B415: call    sub_4E70B0
0x49B41A: push    eax; a2
0x49B41B: mov     ecx, esi; this
0x49B41D: call    sub_405680
0x49B422: fld     dword ptr ds:0A31C80h
0x49B428: mov     edx, [esp+0D0h+a2]
0x49B42C: mov     [esi+54h], edx
0x49B42F: mov     eax, [esp+0D0h+a2+4]
0x49B433: mov     [esi+58h], eax
0x49B436: mov     ecx, [esp+0D0h+var_A0]
0x49B43A: push    ecx
0x49B43B: fstp    [esp+0D4h+var_D4]; float
0x49B43E: mov     [esi+5Ch], ecx
0x49B441: mov     ecx, ds:0B333A0h
0x49B447: push    esi; int
0x49B448: call    sub_440E60
0x49B44D: fld1
0x49B44F: fst     [esp+0D0h+var_84]
0x49B453: lea     edx, [esp+0D0h+var_84]
0x49B457: fst     [esp+0D0h+var_80]
0x49B45B: push    edx
0x49B45C: fldz
0x49B45E: lea     eax, [esp+0D4h+a2]
0x49B462: fst     [esp+0D4h+var_7C]
0x49B466: push    eax
0x49B467: fst     [esp+0D8h+var_78]
0x49B46B: lea     ecx, [esp+0D8h+var_58]
0x49B472: fst     [esp+0D8h+var_50]
0x49B479: push    ecx
0x49B47A: fstp    [esp+0DCh+var_4C]
0x49B481: lea     edx, [esp+0DCh+var_68]
0x49B485: push    edx
0x49B486: fst     [esp+0E0h+var_58]
0x49B48D: fstp    [esp+0E0h+var_54]
0x49B494: call    sub_47F070
0x49B499: add     esp, 10h
0x49B49C: mov     esi, eax
0x49B49E: call    sub_4E70B0
0x49B4A3: push    eax; a2
0x49B4A4: mov     ecx, esi; this
0x49B4A6: call    sub_405680
0x49B4AB: fld     dword ptr ds:0A31C80h
0x49B4B1: push    ecx
0x49B4B2: mov     ecx, ds:0B333A0h
0x49B4B8: fstp    [esp+0D4h+var_D4]; float
0x49B4BB: push    esi; int
0x49B4BC: call    sub_440E60
0x49B4C1: mov     ecx, ebx
0x49B4C3: call    TESObjectCELL_GetWaterHeight
0x49B4C8: mov     ecx, [edi+40h]
0x49B4CB: sub     esp, 0Ch
0x49B4CE: fstp    [esp+0DCh+var_D4]; float
0x49B4D2: fld     [esp+0DCh+var_B0]
0x49B4D6: fstp    [esp+0DCh+var_D8]; float
0x49B4DA: fld     [esp+0DCh+var_B4]
0x49B4DE: fstp    [esp+0DCh+var_DC]; float
0x49B4E1: call    sub_6B7360
0x49B4E6: mov     ecx, [edi+40h]
0x49B4E9: call    sub_6B7260
0x49B4EE: test    al, al
0x49B4F0: jz      short loc_49B53F
0x49B4F2: fldz
0x49B4F4: fcomp   [esp+0D0h+a3]
0x49B4F8: fnstsw  ax
0x49B4FA: test    ah, 1
0x49B4FD: jnz     short loc_49B53F
0x49B4FF: mov     ecx, [edi+40h]
0x49B502: mov     byte ptr ds:0B35248h, 0
0x49B509: call    sub_6B7240
0x49B50E: mov     ecx, [edi+40h]
0x49B511: call    sub_6B73C0
0x49B516: mov     esi, [edi+40h]
0x49B519: cmp     esi, ebp
0x49B51B: jz      short loc_49B52D
0x49B51D: mov     ecx, esi; this
0x49B51F: call    sub_6B73E0
0x49B524: push    esi
0x49B525: call    FormHeapFree
0x49B52A: add     esp, 4
0x49B52D: mov     [edi+40h], ebp
0x49B530: mov     byte ptr ds:0B3522Ah, 0
0x49B537: pop     edi
0x49B538: pop     esi
0x49B539: pop     ebp
0x49B53A: pop     ebx
0x49B53B: mov     esp, ebp
0x49B53D: pop     ebp
0x49B53E: retn
0x49B53F: mov     ecx, [edi+40h]
0x49B542: call    sub_6B7260
0x49B547: test    al, al
0x49B549: jnz     loc_49B5E0
0x49B54F: fldz
0x49B551: fcomp   [esp+0D0h+a3]
0x49B555: fnstsw  ax
0x49B557: test    ah, 5
0x49B55A: jp      loc_49B5E0
0x49B560: mov     ecx, [edi+40h]
0x49B563: push    1
0x49B565: mov     byte ptr ds:0B35248h, 1
0x49B56C: call    sub_6B7190
0x49B571: mov     byte ptr ds:0B3522Ah, 0
0x49B578: pop     edi
0x49B579: pop     esi
0x49B57A: pop     ebp
0x49B57B: pop     ebx
0x49B57C: mov     esp, ebp
0x49B57E: pop     ebp
0x49B57F: retn
0x49B580: fldz
0x49B582: fcomp   [esp+0D0h+a3]
0x49B586: fnstsw  ax
0x49B588: test    ah, 5
0x49B58B: jp      short loc_49B5E0
0x49B58D: mov     eax, ds:0B35220h
0x49B592: cmp     eax, ebp
0x49B594: jz      short loc_49B5E0
0x49B596: mov     eax, [eax+38h]
0x49B599: cmp     eax, ebp
0x49B59B: jz      short loc_49B5E0
0x49B59D: mov     eax, [eax+0Ch]
0x49B5A0: mov     ecx, ds:0B33398h
0x49B5A6: mov     ecx, [ecx+24h]
0x49B5A9: push    ebp
0x49B5AA: push    12h
0x49B5AC: push    eax
0x49B5AD: call    OSGLobals_PlaySound
0x49B5B2: mov     [edi+40h], eax
0x49B5B5: mov     byte ptr ds:0B3522Ah, 0
0x49B5BC: pop     edi
0x49B5BD: pop     esi
0x49B5BE: pop     ebp
0x49B5BF: pop     ebx
0x49B5C0: mov     esp, ebp
0x49B5C2: pop     ebp
0x49B5C3: retn
0x49B5C4: cmp     byte ptr ds:0B35248h, 0
0x49B5CB: jz      short loc_49B5E0
0x49B5CD: mov     ecx, [edi+40h]
0x49B5D0: test    ecx, ecx
0x49B5D2: jz      short loc_49B5E0
0x49B5D4: mov     byte ptr ds:0B35248h, 0
0x49B5DB: call    sub_6B7240
0x49B5E0: mov     byte ptr ds:0B3522Ah, 0
0x49B5E7: pop     edi
0x49B5E8: pop     esi
0x49B5E9: pop     ebp
0x49B5EA: pop     ebx
0x49B5EB: mov     esp, ebp
0x49B5ED: pop     ebp
0x49B5EE: retn
