0x8014E0: push    0FFFFFFFFh
0x8014E2: push    offset CreateVertexShader_SEH
0x8014E7: mov     eax, large fs:0
0x8014ED: push    eax
0x8014EE: sub     esp, 0D8Ch
0x8014F4: mov     eax, ds:0B30AACh
0x8014F9: xor     eax, esp
0x8014FB: mov     [esp+0D98h+var_10], eax
0x801502: push    ebx
0x801503: push    ebp
0x801504: push    esi
0x801505: push    edi
0x801506: mov     eax, ds:0B30AACh
0x80150B: xor     eax, esp
0x80150D: push    eax; File
0x80150E: lea     eax, [esp+0DACh+var_C]
0x801515: mov     large fs:0, eax
0x80151B: mov     edi, [esp+0DACh+arg_C]
0x801522: mov     ebp, [esp+0DACh+lpFileName]
0x801529: mov     eax, [esp+0DACh+arg_4]
0x801530: mov     ecx, [esp+0DACh+arg_8]
0x801537: push    offset off_A8ABC0
0x80153C: xor     esi, esi
0x80153E: push    edi
0x80153F: lea     edx, [esp+0DB4h+Filename]
0x801543: push    ebp
0x801544: push    edx
0x801545: mov     [esp+0DBCh+var_D74], ebp
0x801549: mov     [esp+0DBCh+var_D84], eax
0x80154D: mov     [esp+0DBCh+var_D78], ecx
0x801551: mov     [esp+0DBCh+var_D64], edi
0x801555: mov     [esp+0DBCh+Size], esi
0x801559: mov     [esp+0DBCh+var_D90], esi
0x80155D: mov     [esp+0DBCh+var_D68], esi
0x801561: mov     [esp+0DBCh+var_D50], esi
0x801565: mov     [esp+0DBCh+var_D88], esi
0x801569: call    sub_801210
0x80156E: mov     ecx, ds:0B430B8h
0x801574: add     esp, 10h
0x801577: cmp     ecx, esi
0x801579: mov     [esp+0DACh+var_D96], 1
0x80157E: jz      short loc_801588
0x801580: push    edi
0x801581: call    NiTMap_GetAtIndex
0x801586: mov     esi, eax
0x801588: cmp     byte ptr ds:0B2DD4Ch, 0
0x80158F: jz      loc_801681
0x801595: test    esi, esi
0x801597: jnz     loc_801681
0x80159D: xor     eax, eax
0x80159F: mov     [esp+0DACh+var_D70.dwLowDateTime], eax
0x8015A3: mov     [esp+0DACh+var_D70.dwHighDateTime], eax
0x8015A7: mov     [esp+0DACh+var_D80.dwLowDateTime], eax
0x8015AB: mov     [esp+0DACh+var_D80.dwHighDateTime], eax
0x8015AF: push    20h ; ' '; int
0x8015B1: lea     eax, [esp+0DB0h+var_D80]
0x8015B5: push    eax; int
0x8015B6: lea     ecx, [esp+0DB4h+Filename]
0x8015BA: push    ecx; lpFileName
0x8015BB: call    ArciveManager__GetTimeForFileOrContainer
0x8015C0: push    20h ; ' '; int
0x8015C2: lea     edx, [esp+0DBCh+var_D70]
0x8015C6: push    edx; int
0x8015C7: push    ebp; lpFileName
0x8015C8: mov     bl, al
0x8015CA: call    ArciveManager__GetTimeForFileOrContainer
0x8015CF: add     esp, 18h
0x8015D2: test    bl, bl
0x8015D4: mov     [esp+0DACh+var_D95], al
0x8015D8: jnz     short loc_801627
0x8015DA: cmp     ds:0B430AEh, bl
0x8015E0: jz      short loc_801627
0x8015E2: xor     eax, eax
0x8015E4: cmp     eax, offset CacheOrNullString
0x8015E9: jz      short loc_8015F3
0x8015EB: cmp     ds:0B42D80h, al
0x8015F1: jnz     short loc_801611
0x8015F3: push    offset aCache; "cache:\\"
0x8015F8: call    strcpy_toB42D80
0x8015FD: push    offset off_A8ABC0
0x801602: push    edi
0x801603: lea     ecx, [esp+0DB8h+Filename]
0x801607: push    ebp
0x801608: push    ecx
0x801609: call    sub_801210
0x80160E: add     esp, 14h
0x801611: push    20h ; ' '; int
0x801613: lea     edx, [esp+0DB0h+var_D80]
0x801617: push    edx; int
0x801618: lea     eax, [esp+0DB4h+Filename]
0x80161C: push    eax; lpFileName
0x80161D: call    ArciveManager__GetTimeForFileOrContainer
0x801622: add     esp, 0Ch
0x801625: mov     bl, al
0x801627: cmp     [esp+0DACh+var_D95], 0
0x80162C: jnz     short loc_80165C
0x80162E: push    ebp
0x80162F: lea     ecx, [esp+0DB0h+var_C40]
0x801636: push    offset aShaderErrorErr; "SHADER ERROR : error opening HLSL sourc"...
0x80163B: push    ecx
0x80163C: call    __sprintf
0x801641: mov     eax, ds:0B42E8Ch
0x801646: add     esp, 0Ch
0x801649: test    eax, eax
0x80164B: jz      short loc_80165C
0x80164D: lea     edx, [esp+0DACh+var_C40]
0x801654: push    0; _DWORD
0x801656: push    edx; _DWORD
0x801657: call    eax ; dword_B42E8C
0x801659: add     esp, 8
0x80165C: test    bl, bl
0x80165E: jnz     short loc_801664
0x801660: mov     [esp+0DACh+var_D96], bl
0x801664: mov     eax, [esp+0DACh+var_D70.dwHighDateTime]
0x801668: mov     ecx, [esp+0DACh+var_D80.dwHighDateTime]
0x80166C: cmp     eax, ecx
0x80166E: ja      short loc_80167C
0x801670: jnz     short loc_801681
0x801672: mov     eax, [esp+0DACh+var_D70.dwLowDateTime]
0x801676: cmp     eax, [esp+0DACh+var_D80.dwLowDateTime]
0x80167A: jbe     short loc_801681
0x80167C: mov     [esp+0DACh+var_D96], 0
0x801681: xor     edi, edi
0x801683: cmp     esi, edi
0x801685: mov     [esp+0DACh+var_D95], 0
0x80168A: mov     [esp+0DACh+var_D8C], edi
0x80168E: jz      short loc_80169F
0x801690: add     esi, 104h
0x801696: mov     [esp+0DACh+var_D8C], esi
0x80169A: jmp     loc_801B49
0x80169F: cmp     [esp+0DACh+var_D96], 0
0x8016A4: jnz     loc_801AF0
0x8016AA: cmp     byte ptr ds:0B43070h, 0
0x8016B1: mov     [esp+0DACh+var_D60], edi
0x8016B5: jz      short loc_8016DC
0x8016B7: mov     eax, [esp+0DACh+var_D84]
0x8016BB: cmp     [eax], edi
0x8016BD: jz      short loc_8016CB
0x8016BF: lea     ecx, [eax+8]
0x8016C2: mov     eax, ecx
0x8016C4: add     ecx, 8
0x8016C7: cmp     [eax], edi
0x8016C9: jnz     short loc_8016C2
0x8016CB: mov     dword ptr [eax], offset off_A6DFC0
0x8016D1: mov     dword ptr [eax+4], offset EmptyString
0x8016D8: mov     [esp+0DACh+var_D60], eax
0x8016DC: push    20h ; ' '
0x8016DE: push    2800h
0x8016E3: push    edi
0x8016E4: push    ebp
0x8016E5: call    sub_431130
0x8016EA: mov     ebx, eax
0x8016EC: add     esp, 10h
0x8016EF: cmp     ebx, edi
0x8016F1: jz      loc_801AE5
0x8016F7: cmp     byte ptr [ebx+24h], 0
0x8016FB: mov     edx, [ebx]
0x8016FD: mov     ecx, ebx
0x8016FF: jz      loc_801ADF
0x801705: mov     eax, [edx+1Ch]
0x801708: call    eax
0x80170A: mov     esi, eax
0x80170C: push    esi; Size
0x80170D: mov     [esp+0DB0h+var_D58], esi
0x801711: call    FormHeapAlloc
0x801716: add     esp, 4
0x801719: mov     edi, eax
0x80171B: push    esi
0x80171C: push    edi
0x80171D: mov     ecx, ebx
0x80171F: mov     [esp+0DB4h+var_D70.dwLowDateTime], edi
0x801723: call    ReadFile??
0x801728: mov     ecx, ebp
0x80172A: mov     ebp, [esp+0DACh+var_D84]
0x80172E: add     ebp, 4
0x801731: mov     [esp+0DACh+var_D4C], offset ??_7ShaderIncludes@@6B@; const ShaderIncludes::`vftable'
0x801739: mov     dword ptr [esp+0DACh+Str1], ecx
0x80173D: mov     [esp+0DACh+var_B3C], 0
0x801745: mov     [esp+0DACh+var_D80.dwLowDateTime], ebp
0x801749: mov     [esp+0DACh+var_D5C], 8
0x801751: mov     eax, [ebp-4]
0x801754: test    eax, eax
0x801756: jz      loc_801825
0x80175C: mov     edx, eax
0x80175E: mov     edi, edi
0x801760: mov     cl, [eax]
0x801762: add     eax, 1
0x801765: test    cl, cl
0x801767: jnz     short loc_801760
0x801769: lea     edi, [esp+0DACh+var_B3C]
0x801770: sub     eax, edx
0x801772: add     edi, 0FFFFFFFFh
0x801775: mov     cl, [edi+1]
0x801778: add     edi, 1
0x80177B: test    cl, cl
0x80177D: jnz     short loc_801775
0x80177F: mov     ecx, eax
0x801781: shr     ecx, 2
0x801784: mov     esi, edx
0x801786: rep movsd
0x801788: mov     ecx, eax
0x80178A: mov     eax, [ebp+0]
0x80178D: and     ecx, 3
0x801790: test    eax, eax
0x801792: rep movsb
0x801794: jz      short loc_8017EF
0x801796: cmp     byte ptr [eax], 0
0x801799: jz      short loc_8017EF
0x80179B: lea     edi, [esp+0DACh+var_B3C]
0x8017A2: add     edi, 0FFFFFFFFh
0x8017A5: mov     cl, [edi+1]
0x8017A8: add     edi, 1
0x8017AB: test    cl, cl
0x8017AD: jnz     short loc_8017A5
0x8017AF: mov     dx, ds:0A61F44h
0x8017B6: mov     [edi], dx
0x8017B9: mov     ecx, eax
0x8017BB: jmp     short loc_8017C0
0x8017BD: align 10h
0x8017C0: mov     dl, [eax]
0x8017C2: add     eax, 1
0x8017C5: test    dl, dl
0x8017C7: jnz     short loc_8017C0
0x8017C9: lea     edi, [esp+0DACh+var_B3C]
0x8017D0: sub     eax, ecx
0x8017D2: mov     esi, ecx
0x8017D4: add     edi, 0FFFFFFFFh
0x8017D7: mov     cl, [edi+1]
0x8017DA: add     edi, 1
0x8017DD: test    cl, cl
0x8017DF: jnz     short loc_8017D7
0x8017E1: mov     ecx, eax
0x8017E3: shr     ecx, 2
0x8017E6: rep movsd
0x8017E8: mov     ecx, eax
0x8017EA: and     ecx, 3
0x8017ED: rep movsb
0x8017EF: lea     eax, [esp+0DACh+var_B3C]
0x8017F6: add     eax, 0FFFFFFFFh
0x8017F9: lea     esp, [esp+0]
0x801800: mov     cl, [eax+1]
0x801803: add     eax, 1
0x801806: test    cl, cl
0x801808: jnz     short loc_801800
0x80180A: mov     cx, ds:0A36130h
0x801811: mov     dl, ds:0A36132h
0x801817: mov     esi, [esp+0DACh+var_D58]
0x80181B: mov     edi, [esp+0DACh+var_D70.dwLowDateTime]
0x80181F: mov     [eax], cx
0x801822: mov     [eax+2], dl
0x801825: add     ebp, 8
0x801828: sub     [esp+0DACh+var_D5C], 1
0x80182D: jnz     loc_801751
0x801833: mov     ebp, [esp+0DACh+var_D78]
0x801837: mov     ecx, [esp+0DACh+var_D74]
0x80183B: lea     eax, [esp+0DACh+var_B3C]
0x801842: push    eax
0x801843: push    ebp
0x801844: push    ecx
0x801845: lea     edx, [esp+0DB8h+var_524]
0x80184C: push    offset aCompilingSSS; "compiling : %s\n %s %s"
0x801851: push    edx
0x801852: call    __sprintf
0x801857: mov     eax, ds:0B42E8Ch
0x80185C: add     esp, 14h
0x80185F: test    eax, eax
0x801861: jz      short loc_801872
0x801863: lea     ecx, [esp+0DACh+var_524]
0x80186A: push    0; _DWORD
0x80186C: push    ecx; _DWORD
0x80186D: call    eax ; dword_B42E8C
0x80186F: add     esp, 8
0x801872: lea     edx, [esp+0DACh+var_D50]
0x801876: push    edx
0x801877: lea     eax, [esp+0DB0h+var_D90]
0x80187B: push    eax
0x80187C: mov     eax, [esp+0DB4h+var_D84]
0x801880: lea     ecx, [esp+0DB4h+Size]
0x801884: push    ecx
0x801885: push    0
0x801887: push    ebp
0x801888: push    offset aMain; "main"
0x80188D: lea     edx, [esp+0DC4h+var_D4C]
0x801891: push    edx
0x801892: push    eax
0x801893: push    esi
0x801894: push    edi
0x801895: call    D3DXCompileShader_0
0x80189A: mov     edx, [ebx]
0x80189C: mov     [esp+0DACh+var_D78], eax
0x8018A0: mov     eax, [edx]
0x8018A2: push    1
0x8018A4: mov     ecx, ebx
0x8018A6: call    eax
0x8018A8: push    edi
0x8018A9: call    FormHeapFree
0x8018AE: add     esp, 4
0x8018B1: cmp     [esp+0DACh+var_D90], 0
0x8018B6: jz      loc_801A07
0x8018BC: cmp     [esp+0DACh+Size], 0
0x8018C1: jnz     loc_801A07
0x8018C7: mov     ebx, [esp+0DACh+var_D80.dwLowDateTime]
0x8018CB: mov     [esp+0DACh+var_B3C], 0
0x8018D3: xor     ebp, ebp
0x8018D5: mov     eax, [ebx-4]
0x8018D8: test    eax, eax
0x8018DA: jz      loc_8019AC
0x8018E0: mov     edx, eax
0x8018E2: mov     cl, [eax]
0x8018E4: add     eax, 1
0x8018E7: test    cl, cl
0x8018E9: jnz     short loc_8018E2
0x8018EB: lea     edi, [esp+0DACh+var_B3C]
0x8018F2: sub     eax, edx
0x8018F4: add     edi, 0FFFFFFFFh
0x8018F7: mov     cl, [edi+1]
0x8018FA: add     edi, 1
0x8018FD: test    cl, cl
0x8018FF: jnz     short loc_8018F7
0x801901: mov     ecx, eax
0x801903: shr     ecx, 2
0x801906: mov     esi, edx
0x801908: rep movsd
0x80190A: mov     ecx, eax
0x80190C: mov     eax, [ebx]
0x80190E: and     ecx, 3
0x801911: test    eax, eax
0x801913: rep movsb
0x801915: jz      short loc_80196F
0x801917: cmp     byte ptr [eax], 0
0x80191A: jz      short loc_80196F
0x80191C: lea     edi, [esp+0DACh+var_B3C]
0x801923: add     edi, 0FFFFFFFFh
0x801926: mov     cl, [edi+1]
0x801929: add     edi, 1
0x80192C: test    cl, cl
0x80192E: jnz     short loc_801926
0x801930: mov     cx, ds:0A61F44h
0x801937: mov     [edi], cx
0x80193A: mov     ecx, eax
0x80193C: lea     esp, [esp+0]
0x801940: mov     dl, [eax]
0x801942: add     eax, 1
0x801945: test    dl, dl
0x801947: jnz     short loc_801940
0x801949: lea     edi, [esp+0DACh+var_B3C]
0x801950: sub     eax, ecx
0x801952: mov     esi, ecx
0x801954: add     edi, 0FFFFFFFFh
0x801957: mov     cl, [edi+1]
0x80195A: add     edi, 1
0x80195D: test    cl, cl
0x80195F: jnz     short loc_801957
0x801961: mov     ecx, eax
0x801963: shr     ecx, 2
0x801966: rep movsd
0x801968: mov     ecx, eax
0x80196A: and     ecx, 3
0x80196D: rep movsb
0x80196F: lea     eax, [esp+0DACh+var_B3C]
0x801976: add     eax, 0FFFFFFFFh
0x801979: lea     esp, [esp+0]
0x801980: mov     cl, [eax+1]
0x801983: add     eax, 1
0x801986: test    cl, cl
0x801988: jnz     short loc_801980
0x80198A: mov     dx, ds:0A36130h
0x801991: mov     cl, ds:0A36132h
0x801997: add     ebp, 1
0x80199A: add     ebx, 8
0x80199D: cmp     ebp, 8
0x8019A0: mov     [eax], dx
0x8019A3: mov     [eax+2], cl
0x8019A6: jl      loc_8018D5
0x8019AC: mov     eax, [esp+0DACh+var_D90]
0x8019B0: mov     edx, [eax]
0x8019B2: push    eax
0x8019B3: mov     eax, [edx+0Ch]
0x8019B6: call    eax
0x8019B8: mov     edx, [esp+0DACh+var_D74]
0x8019BC: push    eax
0x8019BD: lea     ecx, [esp+0DB0h+var_B3C]
0x8019C4: push    ecx
0x8019C5: push    edx
0x8019C6: lea     eax, [esp+0DB8h+var_524]
0x8019CD: push    offset aSSS_4; "%s\n %s\n %s"
0x8019D2: push    eax
0x8019D3: call    __sprintf
0x8019D8: mov     eax, ds:0B42E8Ch
0x8019DD: add     esp, 14h
0x8019E0: test    eax, eax
0x8019E2: jz      short loc_8019F3
0x8019E4: lea     ecx, [esp+0DACh+var_524]
0x8019EB: push    0; _DWORD
0x8019ED: push    ecx; _DWORD
0x8019EE: call    eax ; dword_B42E8C
0x8019F0: add     esp, 8
0x8019F3: mov     eax, [esp+0DACh+var_D90]
0x8019F7: mov     edx, [eax]
0x8019F9: push    eax
0x8019FA: mov     eax, [edx+8]
0x8019FD: call    eax
0x8019FF: mov     [esp+0DACh+var_D90], 0
0x801A07: cmp     [esp+0DACh+var_D78], 0
0x801A0C: jnz     loc_801C5D
0x801A12: cmp     [esp+0DACh+Size], 0
0x801A17: jz      loc_801AC0
0x801A1D: lea     ecx, [esp+0DACh+Filename]
0x801A21: push    offset aWb; "wb"
0x801A26: push    ecx; Filename
0x801A27: call    _fopen
0x801A2C: mov     esi, eax
0x801A2E: add     esp, 8
0x801A31: test    esi, esi
0x801A33: jz      short loc_801A7E
0x801A35: mov     eax, [esp+0DACh+Size]
0x801A39: mov     edx, [eax]
0x801A3B: push    eax
0x801A3C: mov     eax, [edx+10h]
0x801A3F: call    eax
0x801A41: push    esi
0x801A42: push    1; Count
0x801A44: push    eax; Count
0x801A45: mov     [esp+0DB8h+var_D88], eax
0x801A49: mov     eax, [esp+0DB8h+Size]
0x801A4D: mov     ecx, [eax]
0x801A4F: mov     edx, [ecx+0Ch]
0x801A52: push    eax; Size
0x801A53: call    edx
0x801A55: push    eax; Str
0x801A56: call    _fwrite
0x801A5B: push    esi; File
0x801A5C: call    _fclose
0x801A61: lea     eax, [esp+0DC4h+Str1]
0x801A65: push    eax; Str1
0x801A66: call    sub_42E800
0x801A6B: mov     eax, [esp+30h]
0x801A6F: mov     edx, [eax]
0x801A71: add     esp, 18h
0x801A74: push    eax
0x801A75: mov     eax, [edx+0Ch]
0x801A78: call    eax
0x801A7A: mov     esi, eax
0x801A7C: jmp     short loc_801AC4
0x801A7E: lea     ecx, [esp+0DACh+Filename]
0x801A82: push    ecx
0x801A83: lea     edx, [esp+0DB0h+var_C40]
0x801A8A: push    offset aInvalidCacheFi; "invalid cache file : %s"
0x801A8F: push    edx
0x801A90: call    __sprintf
0x801A95: mov     eax, ds:0B42E8Ch
0x801A9A: add     esp, 0Ch
0x801A9D: test    eax, eax
0x801A9F: jz      short loc_801AB0
0x801AA1: lea     ecx, [esp+0DACh+var_C40]
0x801AA8: push    0; _DWORD
0x801AAA: push    ecx; _DWORD
0x801AAB: call    eax ; dword_B42E8C
0x801AAD: add     esp, 8
0x801AB0: mov     eax, [esp+0DACh+Size]
0x801AB4: mov     edx, [eax]
0x801AB6: push    eax
0x801AB7: mov     eax, [edx+0Ch]
0x801ABA: call    eax
0x801ABC: mov     esi, eax
0x801ABE: jmp     short loc_801AC4
0x801AC0: mov     esi, [esp+0DACh+var_D8C]
0x801AC4: mov     eax, [esp+0DACh+var_D60]
0x801AC8: test    eax, eax
0x801ACA: jz      loc_801B4D
0x801AD0: mov     dword ptr [eax], 0
0x801AD6: mov     dword ptr [eax+4], 0
0x801ADD: jmp     short loc_801B4D
0x801ADF: mov     eax, [edx]
0x801AE1: push    1
0x801AE3: call    eax
0x801AE5: push    ebp
0x801AE6: push    offset aShaderErrorE_0; "SHADER ERROR : error opening hlsl file "...
0x801AEB: jmp     loc_801C36
0x801AF0: push    20h ; ' '
0x801AF2: push    2800h
0x801AF7: lea     eax, [esp+0DB4h+Filename]
0x801AFB: push    edi
0x801AFC: push    eax
0x801AFD: call    sub_431130
0x801B02: mov     esi, eax
0x801B04: add     esp, 10h
0x801B07: cmp     esi, edi
0x801B09: jz      loc_801C2C
0x801B0F: cmp     byte ptr [esi+24h], 0
0x801B13: jz      short loc_801B3F
0x801B15: mov     edx, [esi]
0x801B17: mov     eax, [edx+1Ch]
0x801B1A: mov     ecx, esi
0x801B1C: call    eax
0x801B1E: mov     edi, eax
0x801B20: push    edi; Size
0x801B21: mov     [esp+0DB0h+var_D88], edi
0x801B25: call    FormHeapAlloc
0x801B2A: add     esp, 4
0x801B2D: push    edi
0x801B2E: push    eax
0x801B2F: mov     ecx, esi
0x801B31: mov     [esp+0DB4h+var_D8C], eax
0x801B35: mov     [esp+0DB4h+var_D95], 1
0x801B3A: call    ReadFile??
0x801B3F: mov     edx, [esi]
0x801B41: mov     eax, [edx]
0x801B43: push    1
0x801B45: mov     ecx, esi
0x801B47: call    eax
0x801B49: mov     esi, [esp+0DACh+var_D8C]
0x801B4D: test    esi, esi
0x801B4F: jz      loc_801C16
0x801B55: mov     ecx, ds:0B430B4h
0x801B5B: test    ecx, ecx
0x801B5D: jz      short loc_801B74
0x801B5F: mov     edx, [esp+0DACh+var_D88]
0x801B63: mov     eax, [esp+0DACh+var_D64]
0x801B67: push    edx; Size
0x801B68: push    esi; Src
0x801B69: push    eax; int
0x801B6A: call    sub_7DAF50
0x801B6F: jmp     loc_801C16
0x801B74: mov     ecx, ds:0B43104h
0x801B7A: mov     eax, [ecx+280h]
0x801B80: mov     edx, [eax]
0x801B82: mov     edx, [edx+16Ch]
0x801B88: lea     ecx, [esp+0DACh+var_D54]
0x801B8C: push    ecx
0x801B8D: push    esi
0x801B8E: push    eax
0x801B8F: call    edx
0x801B91: test    eax, eax
0x801B93: jz      short loc_801BCA
0x801B95: lea     eax, [esp+0DACh+Filename]
0x801B99: push    eax
0x801B9A: lea     ecx, [esp+0DB0h+var_628]
0x801BA1: push    offset aShaderErrorFai; "SHADER ERROR : failed to create vertex "...
0x801BA6: push    ecx
0x801BA7: call    __sprintf
0x801BAC: mov     eax, ds:0B42E8Ch
0x801BB1: add     esp, 0Ch
0x801BB4: test    eax, eax
0x801BB6: jz      loc_801C5D
0x801BBC: push    0
0x801BBE: lea     edx, [esp+0DB0h+var_628]
0x801BC5: jmp     loc_801C57
0x801BCA: push    38h ; '8'; Size
0x801BCC: call    FormHeapAlloc
0x801BD1: add     esp, 4
0x801BD4: mov     [esp+0DACh+var_D64], eax
0x801BD8: test    eax, eax
0x801BDA: mov     [esp+0DACh+var_4], 0
0x801BE5: jz      short loc_801BF7
0x801BE7: mov     ecx, ds:0B43104h
0x801BED: push    ecx
0x801BEE: mov     ecx, eax
0x801BF0: call    sub_780D80
0x801BF5: jmp     short loc_801BF9
0x801BF7: xor     eax, eax
0x801BF9: mov     ecx, [esp+0DACh+var_D54]
0x801BFD: mov     edx, [eax]
0x801BFF: mov     edx, [edx+44h]
0x801C02: push    ecx
0x801C03: mov     ecx, eax
0x801C05: mov     [esp+0DB0h+var_4], 0FFFFFFFFh
0x801C10: mov     [esp+0DB0h+var_D68], eax
0x801C14: call    edx
0x801C16: cmp     [esp+0DACh+var_D95], 0
0x801C1B: jz      short loc_801C26
0x801C1D: push    esi
0x801C1E: call    FormHeapFree
0x801C23: add     esp, 4
0x801C26: mov     eax, [esp+0DACh+var_D68]
0x801C2A: jmp     short loc_801C5F
0x801C2C: lea     eax, [esp+0DACh+Filename]
0x801C30: push    eax
0x801C31: push    offset aShaderErrorE_1; "SHADER ERROR : error opening cache file"...
0x801C36: lea     ecx, [esp+0DB4h+var_C40]
0x801C3D: push    ecx
0x801C3E: call    __sprintf
0x801C43: mov     eax, ds:0B42E8Ch
0x801C48: add     esp, 0Ch
0x801C4B: cmp     eax, edi
0x801C4D: jz      short loc_801C5D
0x801C4F: push    edi; _DWORD
0x801C50: lea     edx, [esp+0DB0h+var_C40]
0x801C57: push    edx; _DWORD
0x801C58: call    eax ; dword_B42E8C
0x801C5A: add     esp, 8
0x801C5D: xor     eax, eax
0x801C5F: mov     ecx, [esp+0DACh+var_C]
0x801C66: mov     large fs:0, ecx
0x801C6D: pop     ecx
0x801C6E: pop     edi
0x801C6F: pop     esi
0x801C70: pop     ebp
0x801C71: pop     ebx
0x801C72: mov     ecx, [esp+0D98h+var_10]
0x801C79: xor     ecx, esp
0x801C7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x801C80: add     esp, 0D98h
0x801C86: retn    18h
