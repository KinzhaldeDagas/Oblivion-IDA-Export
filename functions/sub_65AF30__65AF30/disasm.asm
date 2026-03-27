0x65AF30: push    ebp
0x65AF31: mov     ebp, esp
0x65AF33: and     esp, 0FFFFFFC0h
0x65AF36: sub     esp, 0B4h
0x65AF3C: push    ebx
0x65AF3D: push    esi
0x65AF3E: push    edi
0x65AF3F: mov     edi, ecx
0x65AF41: call    MobileObject_GetCharProxy
0x65AF46: mov     ebx, eax
0x65AF48: mov     eax, [edi]
0x65AF4A: mov     edx, [eax+0E8h]
0x65AF50: mov     ecx, edi
0x65AF52: call    edx
0x65AF54: fld     dword ptr [edi+20h]
0x65AF57: fstp    [esp+0C0h+var_70]
0x65AF5B: mov     [esp+0C0h+var_A1], al
0x65AF5F: fld     dword ptr [edi+24h]
0x65AF62: fstp    [esp+0C0h+var_AC]
0x65AF66: fld     dword ptr [edi+28h]
0x65AF69: fstp    [esp+0C0h+var_A8]
0x65AF6D: fld     [esp+0C0h+var_70]
0x65AF71: fcom    qword ptr ds:0A3A5B0h
0x65AF77: fnstsw  ax
0x65AF79: test    ah, 44h
0x65AF7C: jnp     loc_65B022
0x65AF82: sub     esp, 8
0x65AF85: fstp    [esp+0C8h+X]; X
0x65AF88: call    __isnan
0x65AF8D: add     esp, 8
0x65AF90: test    eax, eax
0x65AF92: jnz     loc_65B024
0x65AF98: fld     [esp+0C0h+var_70]
0x65AF9C: sub     esp, 8
0x65AF9F: fstp    [esp+0C8h+X]; X
0x65AFA2: call    __finite
0x65AFA7: add     esp, 8
0x65AFAA: test    eax, eax
0x65AFAC: jz      short loc_65B024
0x65AFAE: fld     [esp+0C0h+var_AC]
0x65AFB2: fcom    qword ptr ds:0A3A5B0h
0x65AFB8: fnstsw  ax
0x65AFBA: test    ah, 44h
0x65AFBD: jnp     short loc_65B022
0x65AFBF: sub     esp, 8
0x65AFC2: fstp    [esp+0C8h+X]; X
0x65AFC5: call    __isnan
0x65AFCA: add     esp, 8
0x65AFCD: test    eax, eax
0x65AFCF: jnz     short loc_65B024
0x65AFD1: fld     [esp+0C0h+var_AC]
0x65AFD5: sub     esp, 8
0x65AFD8: fstp    [esp+0C8h+X]; X
0x65AFDB: call    __finite
0x65AFE0: add     esp, 8
0x65AFE3: test    eax, eax
0x65AFE5: jz      short loc_65B024
0x65AFE7: fld     [esp+0C0h+var_A8]
0x65AFEB: fcom    qword ptr ds:0A3A5B0h
0x65AFF1: fnstsw  ax
0x65AFF3: test    ah, 44h
0x65AFF6: jnp     short loc_65B022
0x65AFF8: sub     esp, 8
0x65AFFB: fstp    [esp+0C8h+X]; X
0x65AFFE: call    __isnan
0x65B003: add     esp, 8
0x65B006: test    eax, eax
0x65B008: jnz     short loc_65B024
0x65B00A: fld     [esp+0C0h+var_A8]
0x65B00E: sub     esp, 8
0x65B011: fstp    [esp+0C8h+X]; X
0x65B014: call    __finite
0x65B019: add     esp, 8
0x65B01C: test    eax, eax
0x65B01E: jnz     short loc_65B06A
0x65B020: jmp     short loc_65B024
0x65B022: fstp    st
0x65B024: mov     eax, [edi+0Ch]
0x65B027: push    eax
0x65B028: mov     eax, [edi]
0x65B02A: mov     edx, [eax+0D4h]
0x65B030: mov     ecx, edi
0x65B032: call    edx
0x65B034: push    eax; ArgList
0x65B035: push    offset aMobileobjectMo; "MobileObject::Move called on '%s' (%08X"...
0x65B03A: call    PrintError
0x65B03F: fldz
0x65B041: fst     [esp+0CCh+var_A0]
0x65B045: mov     eax, esp
0x65B047: mov     ecx, [esp+0CCh+var_A0]
0x65B04B: fst     [esp+0CCh+var_9C]
0x65B04F: mov     edx, [esp+0CCh+var_9C]
0x65B053: fstp    [esp+0CCh+var_98]
0x65B057: mov     [eax], ecx
0x65B059: mov     ecx, [esp+0CCh+var_98]
0x65B05D: mov     [eax+4], edx
0x65B060: mov     [eax+8], ecx
0x65B063: mov     ecx, edi
0x65B065: call    sub_4D89A0
0x65B06A: mov     ecx, ds:0B14E44h
0x65B070: test    ecx, ecx
0x65B072: mov     esi, [ebp+a4]
0x65B075: jz      loc_65B1E4
0x65B07B: mov     eax, ds:0B02C54h
0x65B080: cmp     ds:0B3BAA4h, eax
0x65B086: jz      short loc_65B0A2
0x65B088: add     ecx, 1
0x65B08B: xor     edx, edx
0x65B08D: div     ecx
0x65B08F: mov     eax, ds:0B02C54h
0x65B094: mov     ds:0B3BAA4h, eax
0x65B099: test    edx, edx
0x65B09B: setnz   byte ptr ds:0B3BAA8h
0x65B0A2: cmp     byte ptr ds:0B3BAA8h, 0
0x65B0A9: jz      loc_65B14D
0x65B0AF: mov     edx, [ebx+1F4h]
0x65B0B5: shr     edx, 8
0x65B0B8: test    dl, 1
0x65B0BB: jz      loc_65B14D
0x65B0C1: fld     dword ptr [edi+28h]
0x65B0C4: push    ecx
0x65B0C5: lea     ecx, [esp+0C4h+var_48]
0x65B0C9: fstp    dword ptr [esp+0C4h+X+4]; float
0x65B0CC: call    NiMatrix33_InitRotationTransform
0x65B0D1: push    esi
0x65B0D2: lea     eax, [esp+0C4h+a3]
0x65B0D6: push    eax
0x65B0D7: lea     ecx, [esp+0C8h+var_48]
0x65B0DE: call    sub_7101F0
0x65B0E3: mov     ecx, [eax]
0x65B0E5: mov     [esi], ecx
0x65B0E7: mov     edx, [eax+4]
0x65B0EA: mov     [esi+4], edx
0x65B0ED: mov     eax, [eax+8]
0x65B0F0: mov     [esi+8], eax
0x65B0F3: mov     edx, [edi]
0x65B0F5: mov     eax, [edx+154h]
0x65B0FB: mov     ecx, edi
0x65B0FD: call    eax
0x65B0FF: fld     dword ptr [esi]
0x65B101: fadd    dword ptr [eax+54h]
0x65B104: mov     edx, [edi]
0x65B106: add     eax, 54h ; 'T'
0x65B109: mov     ecx, edi
0x65B10B: fstp    [esp+0C0h+var_A0]
0x65B10F: fld     dword ptr [eax+4]
0x65B112: fadd    dword ptr [esi+4]
0x65B115: fstp    [esp+0C0h+var_9C]
0x65B119: fld     dword ptr [eax+8]
0x65B11C: mov     eax, [edx+154h]
0x65B122: fadd    dword ptr [esi+8]
0x65B125: fstp    [esp+0C0h+var_98]
0x65B129: call    eax
0x65B12B: mov     ecx, [esp+0C0h+var_A0]
0x65B12F: mov     edx, [esp+0C0h+var_9C]
0x65B133: add     eax, 54h ; 'T'
0x65B136: mov     [eax], ecx
0x65B138: mov     ecx, [esp+0C0h+var_98]
0x65B13C: mov     [eax+4], edx
0x65B13F: mov     [eax+8], ecx
0x65B142: mov     eax, ebx
0x65B144: pop     edi
0x65B145: pop     esi
0x65B146: pop     ebx
0x65B147: mov     esp, ebp
0x65B149: pop     ebp
0x65B14A: retn    0Ch
0x65B14D: mov     edx, [edi]
0x65B14F: mov     eax, [edx+154h]
0x65B155: mov     ecx, edi
0x65B157: call    eax
0x65B159: mov     edx, [edi]
0x65B15B: mov     [esp+0C0h+var_A8], eax
0x65B15F: mov     eax, [edx+174h]
0x65B165: mov     ecx, edi
0x65B167: call    eax
0x65B169: mov     ecx, [esp+0C0h+var_A8]
0x65B16D: fld     dword ptr [ecx+58h]
0x65B170: push    ecx
0x65B171: fsub    dword ptr [eax+4]
0x65B174: fstp    [esp+0C4h+var_A8]
0x65B178: fld     dword ptr [ecx+5Ch]
0x65B17B: fsub    dword ptr [eax+8]
0x65B17E: fstp    [esp+0C4h+var_AC]
0x65B182: fld     dword ptr [ecx+54h]
0x65B185: lea     ecx, [esp+0C4h+var_48]
0x65B189: fsub    dword ptr [eax]
0x65B18B: fstp    [esp+0C4h+var_94]
0x65B18F: fld     [esp+0C4h+var_A8]
0x65B193: fstp    [esp+0C4h+var_90]
0x65B197: fld     [esp+0C4h+var_AC]
0x65B19B: fstp    [esp+0C4h+var_8C]
0x65B19F: fld     dword ptr [edi+28h]
0x65B1A2: fstp    dword ptr [esp+0C4h+X+4]; float
0x65B1A5: call    NiMatrix33_InitRotationTransform
0x65B1AA: lea     ecx, [esp+0C0h+var_94]
0x65B1AE: push    ecx
0x65B1AF: lea     edx, [esp+0C4h+a3]
0x65B1B3: push    edx
0x65B1B4: lea     eax, [esp+0C8h+var_6C]
0x65B1B8: push    eax; a2
0x65B1B9: lea     ecx, [esp+0CCh+var_48]
0x65B1C0: call    sub_7103C0
0x65B1C5: mov     ecx, eax
0x65B1C7: call    sub_7101F0
0x65B1CC: fld     dword ptr [eax]
0x65B1CE: fadd    dword ptr [esi]
0x65B1D0: fstp    dword ptr [esi]
0x65B1D2: fld     dword ptr [eax+4]
0x65B1D5: fadd    dword ptr [esi+4]
0x65B1D8: fstp    dword ptr [esi+4]
0x65B1DB: fld     dword ptr [eax+8]
0x65B1DE: fadd    dword ptr [esi+8]
0x65B1E1: fstp    dword ptr [esi+8]
0x65B1E4: test    ebx, ebx
0x65B1E6: jz      loc_65B523
0x65B1EC: mov     edx, [edi]
0x65B1EE: mov     eax, [edx+198h]
0x65B1F4: push    1
0x65B1F6: mov     ecx, edi
0x65B1F8: call    eax
0x65B1FA: test    al, al
0x65B1FC: jnz     loc_65B523
0x65B202: cmp     [esp+0C0h+var_A1], al
0x65B206: fldz
0x65B208: fstp    [esp+0C0h+var_A8]
0x65B20C: mov     [esp+0C0h+var_AD], al
0x65B210: jnz     short loc_65B25B
0x65B212: mov     edx, [edi]
0x65B214: mov     eax, [edx+1F4h]
0x65B21A: mov     ecx, edi
0x65B21C: call    eax
0x65B21E: fstp    dword ptr [ebx+310h]
0x65B224: mov     ecx, edi
0x65B226: call    sub_4D74D0
0x65B22B: test    al, al
0x65B22D: jz      short loc_65B25B
0x65B22F: mov     ecx, edi
0x65B231: call    sub_5E13A0
0x65B236: test    al, al
0x65B238: jz      short loc_65B25B
0x65B23A: fld     dword ptr [ebx+328h]
0x65B240: mov     ecx, offset unk_B14E3C
0x65B245: fstp    [esp+0C0h+var_A8]
0x65B249: mov     [esp+0C0h+var_AD], 1
0x65B24E: call    GameSetting_GetSafeFloatPointer
0x65B253: fld     dword ptr [eax]
0x65B255: fstp    dword ptr [ebx+328h]
0x65B25B: mov     edx, [edi+24h]
0x65B25E: fld     [ebp+arg_0]
0x65B261: mov     ecx, [edi+20h]
0x65B264: fstp    [esp+0C0h+var_6C]
0x65B268: mov     eax, [edi+28h]
0x65B26B: mov     [esp+0C0h+var_64], edx
0x65B26F: mov     edx, [esi+4]
0x65B272: mov     [esp+0C0h+var_68], ecx
0x65B276: mov     ecx, [esi]
0x65B278: mov     [esp+0C0h+var_58], edx
0x65B27C: mov     edx, [ebx+1F4h]
0x65B282: mov     [esp+0C0h+var_60], eax
0x65B286: mov     eax, [esi+8]
0x65B289: mov     [esp+0C0h+var_5C], ecx
0x65B28D: mov     ecx, [ebp+arg_8]
0x65B290: shr     edx, 0Bh
0x65B293: test    dl, 1
0x65B296: mov     [esp+0C0h+var_54], eax
0x65B29A: mov     [esp+0C0h+var_50], ecx
0x65B29E: jz      loc_65B41A
0x65B2A4: mov     eax, [edi]
0x65B2A6: mov     edx, [eax+190h]
0x65B2AC: mov     ecx, edi
0x65B2AE: call    edx
0x65B2B0: test    al, al
0x65B2B2: jz      loc_65B33A
0x65B2B8: mov     eax, [edi]
0x65B2BA: mov     edx, [eax+380h]
0x65B2C0: mov     ecx, edi
0x65B2C2: call    edx
0x65B2C4: test    eax, eax
0x65B2C6: jz      short loc_65B33A
0x65B2C8: mov     ecx, [edi+58h]
0x65B2CB: test    ecx, ecx
0x65B2CD: jz      short loc_65B33A
0x65B2CF: mov     eax, [ecx]
0x65B2D1: mov     edx, [eax+36Ch]
0x65B2D7: call    edx
0x65B2D9: cmp     eax, 4
0x65B2DC: jnz     short loc_65B33A
0x65B2DE: mov     eax, [edi]
0x65B2E0: mov     edx, [eax+380h]
0x65B2E6: mov     ecx, edi
0x65B2E8: call    edx
0x65B2EA: mov     ecx, [eax+2Ch]
0x65B2ED: mov     edx, [eax+30h]
0x65B2F0: mov     eax, [eax+34h]
0x65B2F3: mov     [esp+0C0h+a2], ecx
0x65B2F7: lea     ecx, [esp+0C0h+a2]
0x65B2FB: push    ecx; a2
0x65B2FC: mov     ecx, ebx; this
0x65B2FE: mov     dword ptr [esp+0C4h+var_84], edx
0x65B302: mov     dword ptr [esp+0C4h+var_84+4], eax
0x65B306: call    sub_452A10
0x65B30B: mov     edx, ds:0B3F9A8h
0x65B311: mov     [esi], edx
0x65B313: mov     eax, ds:0B3F9ACh
0x65B318: mov     [esi+4], eax
0x65B31B: mov     ecx, ds:0B3F9B0h
0x65B321: mov     [esi+8], ecx
0x65B324: mov     edx, [esi]
0x65B326: mov     eax, [esi+4]
0x65B329: mov     [esp+0C0h+var_5C], edx
0x65B32D: mov     [esp+0C0h+var_58], eax
0x65B331: mov     [esp+0C0h+var_54], ecx
0x65B335: jmp     loc_65B41A
0x65B33A: fld     dword ptr [edi+28h]
0x65B33D: push    ecx
0x65B33E: lea     ecx, [esp+0C4h+var_48]
0x65B342: fstp    dword ptr [esp+0C4h+X+4]; float
0x65B345: call    NiMatrix33_InitRotationTransform
0x65B34A: push    esi
0x65B34B: lea     edx, [esp+0C4h+a3]
0x65B34F: push    edx
0x65B350: lea     ecx, [esp+0C8h+var_48]
0x65B357: call    sub_7101F0
0x65B35C: mov     ecx, [eax]
0x65B35E: mov     [esi], ecx
0x65B360: mov     edx, [eax+4]
0x65B363: mov     [esi+4], edx
0x65B366: mov     eax, [eax+8]
0x65B369: mov     [esi+8], eax
0x65B36C: fld     dword ptr [esi]
0x65B36E: fadd    dword ptr [edi+2Ch]
0x65B371: fstp    [esp+0C0h+var_A0]
0x65B375: mov     ecx, [esp+0C0h+var_A0]
0x65B379: fld     dword ptr [edi+30h]
0x65B37C: mov     [esp+0C0h+a2], ecx
0x65B380: fadd    dword ptr [esi+4]
0x65B383: lea     ecx, [esp+0C0h+a3]
0x65B387: push    ecx
0x65B388: mov     ecx, ebx
0x65B38A: fstp    [esp+0C4h+var_9C]
0x65B38E: mov     edx, [esp+0C4h+var_9C]
0x65B392: fld     dword ptr [edi+34h]
0x65B395: mov     dword ptr [esp+0C4h+var_84], edx
0x65B399: fadd    dword ptr [esi+8]
0x65B39C: fstp    [esp+0C4h+var_98]
0x65B3A0: mov     eax, [esp+0C4h+var_98]
0x65B3A4: mov     dword ptr [esp+0C4h+var_84+4], eax
0x65B3A8: call    sub_5E1500
0x65B3AD: fld     [esp+0C0h+var_A0]
0x65B3B1: fsub    [esp+0C0h+a3]
0x65B3B5: push    esi
0x65B3B6: fstp    [esp+0C4h+var_94]
0x65B3BA: mov     edx, [esp+0C4h+var_94]
0x65B3BE: fld     [esp+0C4h+var_9C]
0x65B3C2: mov     [esi], edx
0x65B3C4: fsub    [esp+0C4h+var_78]
0x65B3C8: lea     edx, [esp+0C4h+a3]
0x65B3CC: push    edx
0x65B3CD: fstp    [esp+0C8h+var_90]
0x65B3D1: mov     eax, [esp+0C8h+var_90]
0x65B3D5: fld     [esp+0C8h+var_98]
0x65B3D9: mov     [esi+4], eax
0x65B3DC: fsub    [esp+0C8h+var_74]
0x65B3E0: lea     eax, [esp+0C8h+var_24]
0x65B3E7: push    eax
0x65B3E8: fstp    [esp+0CCh+var_8C]
0x65B3EC: mov     ecx, [esp+0CCh+var_8C]
0x65B3F0: mov     [esi+8], ecx
0x65B3F3: lea     ecx, [esp+0CCh+var_48]
0x65B3FA: call    sub_7103C0
0x65B3FF: mov     ecx, eax
0x65B401: call    sub_7101F0
0x65B406: mov     ecx, [eax]
0x65B408: mov     [esp+0C0h+var_5C], ecx
0x65B40C: mov     edx, [eax+4]
0x65B40F: mov     [esp+0C0h+var_58], edx
0x65B413: mov     eax, [eax+8]
0x65B416: mov     [esp+0C0h+var_54], eax
0x65B41A: test    byte ptr [ebx+1F4h], 1
0x65B421: jz      short loc_65B43C
0x65B423: and     dword ptr [ebx+1F4h], 0FFFFFFFDh
0x65B42A: fld     dword ptr ds:0B14E34h
0x65B430: fmul    dword ptr ds:0B33E9Ch
0x65B436: fstp    dword ptr [ebx+330h]
0x65B43C: mov     edx, [ebx]
0x65B43E: mov     edx, [edx+80h]
0x65B444: lea     eax, [esp+0C0h+var_6C]
0x65B448: push    eax
0x65B449: mov     ecx, ebx
0x65B44B: call    edx
0x65B44D: mov     eax, [ebx+1F4h]
0x65B453: shr     eax, 1
0x65B455: test    al, 1
0x65B457: jz      short loc_65B4A5
0x65B459: lea     ecx, [esp+0C0h+a3]
0x65B45D: push    ecx
0x65B45E: mov     ecx, ebx
0x65B460: call    sub_5E1500
0x65B465: mov     ecx, ebx
0x65B467: call    sub_8913C0
0x65B46C: fstp    [esp+0C0h+var_AC]
0x65B470: fld     [esp+0C0h+var_AC]
0x65B474: mov     edx, [edi]
0x65B476: fmul    qword ptr ds:0A372E0h
0x65B47C: mov     edx, [edx+1CCh]
0x65B482: lea     eax, [esp+0C0h+a3]
0x65B486: push    eax
0x65B487: fstp    [esp+0C4h+var_AC]
0x65B48B: mov     ecx, edi
0x65B48D: fld     [esp+0C4h+var_AC]
0x65B491: fadd    st, st
0x65B493: fstp    [esp+0C4h+var_AC]
0x65B497: fld     [esp+0C4h+var_AC]
0x65B49B: fadd    [esp+0C4h+var_74]
0x65B49F: fstp    [esp+0C4h+var_74]
0x65B4A3: call    edx
0x65B4A5: cmp     [esp+0C0h+var_AD], 0
0x65B4AA: jz      short loc_65B4B6
0x65B4AC: fld     [esp+0C0h+var_A8]
0x65B4B0: fstp    dword ptr [ebx+328h]
0x65B4B6: mov     eax, [ebx+1F4h]
0x65B4BC: shr     eax, 0Bh
0x65B4BF: test    al, 1
0x65B4C1: jnz     loc_65B58A
0x65B4C7: lea     ecx, [esp+0C0h+a2]
0x65B4CB: push    ecx
0x65B4CC: mov     ecx, ebx
0x65B4CE: call    sub_5E1500
0x65B4D3: test    byte ptr [ebx+1F4h], 1
0x65B4DA: jz      loc_65B58A
0x65B4E0: mov     edx, [edi]
0x65B4E2: mov     eax, [edx+388h]
0x65B4E8: mov     ecx, edi
0x65B4EA: call    eax
0x65B4EC: test    eax, eax
0x65B4EE: jz      short loc_65B50D
0x65B4F0: mov     edx, [edi]
0x65B4F2: mov     eax, [edx+388h]
0x65B4F8: mov     ecx, edi
0x65B4FA: call    eax
0x65B4FC: mov     edx, [eax]
0x65B4FE: mov     ecx, eax
0x65B500: mov     eax, [edx+18Ch]
0x65B506: call    eax
0x65B508: cmp     eax, 4
0x65B50B: jnz     short loc_65B58A
0x65B50D: mov     edx, [edi]
0x65B50F: fld     [esp+0C0h+var_60]
0x65B513: mov     eax, [edx+1E8h]
0x65B519: push    ecx
0x65B51A: mov     ecx, edi
0x65B51C: fstp    dword ptr [esp+0C4h+X+4]
0x65B51F: call    eax
0x65B521: jmp     short loc_65B58A
0x65B523: fld     dword ptr [edi+28h]
0x65B526: push    ecx
0x65B527: lea     ecx, [esp+0C4h+var_48]
0x65B52B: fstp    dword ptr [esp+0C4h+X+4]; float
0x65B52E: call    NiMatrix33_InitRotationTransform
0x65B533: push    esi; a4
0x65B534: lea     ecx, [esp+0C4h+a3]
0x65B538: push    ecx; a3
0x65B539: lea     ecx, [esp+0C8h+var_48]
0x65B540: call    sub_7101F0
0x65B545: mov     edx, [eax]
0x65B547: mov     [esi], edx
0x65B549: mov     ecx, [eax+4]
0x65B54C: mov     [esi+4], ecx
0x65B54F: mov     edx, [eax+8]
0x65B552: mov     [esi+8], edx
0x65B555: fld     dword ptr [esi]
0x65B557: fadd    dword ptr [edi+2Ch]
0x65B55A: fstp    [esp+0C0h+var_94]
0x65B55E: mov     eax, [esp+0C0h+var_94]
0x65B562: fld     dword ptr [edi+30h]
0x65B565: mov     [esp+0C0h+a2], eax
0x65B569: fadd    dword ptr [esi+4]
0x65B56C: fstp    [esp+0C0h+var_90]
0x65B570: mov     ecx, [esp+0C0h+var_90]
0x65B574: fld     dword ptr [edi+34h]
0x65B577: mov     dword ptr [esp+0C0h+var_84], ecx
0x65B57B: fadd    dword ptr [esi+8]
0x65B57E: fstp    [esp+0C0h+var_8C]
0x65B582: mov     edx, [esp+0C0h+var_8C]
0x65B586: mov     dword ptr [esp+0C0h+var_84+4], edx
0x65B58A: mov     ecx, [esp+0C0h+a2]
0x65B58E: mov     edx, dword ptr [esp+0C0h+var_84]
0x65B592: sub     esp, 0Ch
0x65B595: mov     eax, esp
0x65B597: mov     [eax], ecx
0x65B599: mov     ecx, dword ptr [esp+0CCh+var_84+4]
0x65B59D: mov     [eax+4], edx
0x65B5A0: mov     [eax+8], ecx
0x65B5A3: mov     ecx, edi; this
0x65B5A5: call    TESObjectREFR_SetPosition
0x65B5AA: pop     edi
0x65B5AB: pop     esi
0x65B5AC: mov     eax, ebx
0x65B5AE: pop     ebx
0x65B5AF: mov     esp, ebp
0x65B5B1: pop     ebp
0x65B5B2: retn    0Ch
