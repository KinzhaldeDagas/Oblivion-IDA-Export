0x56CFF0: push    0FFFFFFFFh
0x56CFF2: push    offset SEH_56CFF0
0x56CFF7: mov     eax, large fs:0
0x56CFFD: push    eax
0x56CFFE: sub     esp, 8
0x56D001: push    ebx
0x56D002: push    ebp
0x56D003: push    esi
0x56D004: push    edi
0x56D005: mov     eax, ds:0B30AACh
0x56D00A: xor     eax, esp
0x56D00C: push    eax
0x56D00D: lea     eax, [esp+28h+var_C]
0x56D011: mov     large fs:0, eax
0x56D017: mov     ebx, ecx
0x56D019: mov     [esp+28h+var_14], ebx
0x56D01D: push    0C0h ; 'À'; Size
0x56D022: call    FormHeapAlloc
0x56D027: mov     ecx, eax
0x56D029: add     esp, 4
0x56D02C: mov     [esp+28h+var_10], ecx
0x56D030: xor     ebp, ebp
0x56D032: cmp     ecx, ebp
0x56D034: mov     [esp+28h+var_4], ebp
0x56D038: jz      short loc_56D06D
0x56D03A: mov     eax, [esp+28h+arg_14]
0x56D03E: movzx   edx, word ptr [esp+28h+arg_8]
0x56D043: push    eax
0x56D044: mov     eax, 55555556h
0x56D049: imul    edx
0x56D04B: mov     eax, edx
0x56D04D: shr     eax, 1Fh
0x56D050: add     eax, edx
0x56D052: mov     edx, [esp+2Ch+arg_10]
0x56D056: push    eax
0x56D057: mov     eax, [esp+30h+arg_C]
0x56D05B: push    ebp
0x56D05C: push    ebp
0x56D05D: push    ebp
0x56D05E: push    ebp
0x56D05F: push    edx
0x56D060: mov     edx, [esp+44h+arg_4]
0x56D064: push    eax
0x56D065: push    edx
0x56D066: call    sub_7174B0
0x56D06B: mov     ebp, eax
0x56D06D: mov     eax, [ebx+2Ch]
0x56D070: mov     eax, [eax+8]
0x56D073: mov     [esp+28h+var_4], 0FFFFFFFFh
0x56D07B: lea     esi, [eax+1]
0x56D07E: mov     edi, edi
0x56D080: mov     cl, [eax]
0x56D082: add     eax, 1
0x56D085: test    cl, cl
0x56D087: jnz     short loc_56D080
0x56D089: sub     eax, esi
0x56D08B: add     eax, 7
0x56D08E: push    eax; Size
0x56D08F: call    FormHeapAlloc
0x56D094: mov     esi, eax
0x56D096: mov     eax, [ebx+2Ch]
0x56D099: mov     eax, [eax+8]
0x56D09C: push    eax
0x56D09D: push    offset aDecal; "Decal"
0x56D0A2: push    offset aSS_3; "%s:%s"
0x56D0A7: push    esi
0x56D0A8: call    __sprintf
0x56D0AD: add     esp, 14h
0x56D0B0: push    esi; Src
0x56D0B1: mov     ecx, ebp
0x56D0B3: call    NiObjectNET_SetName
0x56D0B8: push    esi
0x56D0B9: call    FormHeapFree
0x56D0BE: push    10h; a1
0x56D0C0: call    GetShaderDefinition
0x56D0C5: mov     esi, [eax+4]
0x56D0C8: mov     edi, [ebp+0BCh]
0x56D0CE: add     eax, 4
0x56D0D1: add     esp, 8
0x56D0D4: cmp     edi, esi
0x56D0D6: jz      short loc_56D10C
0x56D0D8: test    edi, edi
0x56D0DA: jz      short loc_56D0F8
0x56D0DC: lea     eax, [edi+4]
0x56D0DF: push    eax; lpAddend
0x56D0E0: call    dword ptr ds:0A2807Ch
0x56D0E6: test    eax, eax
0x56D0E8: jnz     short loc_56D0F8
0x56D0EA: test    edi, edi
0x56D0EC: jz      short loc_56D0F8
0x56D0EE: mov     edx, [edi]
0x56D0F0: mov     eax, [edx]
0x56D0F2: push    1
0x56D0F4: mov     ecx, edi
0x56D0F6: call    eax
0x56D0F8: test    esi, esi
0x56D0FA: mov     [ebp+0BCh], esi
0x56D100: jz      short loc_56D10C
0x56D102: lea     ecx, [esi+4]
0x56D105: push    ecx; lpAddend
0x56D106: call    dword ptr ds:0A28078h
0x56D10C: mov     edx, [esi]
0x56D10E: mov     eax, [edx+18h]
0x56D111: push    ebp
0x56D112: mov     ecx, esi
0x56D114: call    eax
0x56D116: push    4
0x56D118: mov     ecx, ebp
0x56D11A: call    NiNode_GetNiPropertyByID
0x56D11F: mov     ecx, [ebx+18h]
0x56D122: mov     edi, eax
0x56D124: push    ecx
0x56D125: mov     ecx, edi
0x56D127: call    sub_7EE3E0
0x56D12C: mov     esi, [ebx+18h]
0x56D12F: mov     ebx, [esi+48h]
0x56D132: add     esi, 48h ; 'H'
0x56D135: cmp     ebx, edi
0x56D137: jz      short loc_56D169
0x56D139: test    ebx, ebx
0x56D13B: jz      short loc_56D159
0x56D13D: lea     edx, [ebx+4]
0x56D140: push    edx; lpAddend
0x56D141: call    dword ptr ds:0A2807Ch
0x56D147: test    eax, eax
0x56D149: jnz     short loc_56D159
0x56D14B: test    ebx, ebx
0x56D14D: jz      short loc_56D159
0x56D14F: mov     eax, [ebx]
0x56D151: mov     edx, [eax]
0x56D153: push    1
0x56D155: mov     ecx, ebx
0x56D157: call    edx
0x56D159: test    edi, edi
0x56D15B: mov     [esi], edi
0x56D15D: jz      short loc_56D169
0x56D15F: add     edi, 4
0x56D162: push    edi; lpAddend
0x56D163: call    dword ptr ds:0A28078h
0x56D169: mov     eax, [esp+28h+arg_0]
0x56D16D: mov     edi, [eax+0B8h]
0x56D173: mov     eax, [edi+8]
0x56D176: mov     esi, [eax+40h]
0x56D179: push    48h ; 'H'; Size
0x56D17B: call    FormHeapAlloc
0x56D180: add     esp, 4
0x56D183: mov     [esp+28h+arg_8], eax
0x56D187: test    eax, eax
0x56D189: mov     [esp+28h+var_4], 1
0x56D191: jz      short loc_56D1B2
0x56D193: mov     ecx, [edi+8]
0x56D196: mov     edx, [esp+28h+arg_C]
0x56D19A: push    edx
0x56D19B: add     ecx, 0Ch
0x56D19E: push    ecx
0x56D19F: mov     ecx, [esp+30h+arg_18]
0x56D1A3: push    ecx
0x56D1A4: push    esi
0x56D1A5: mov     ecx, eax; this
0x56D1A7: call    ??0NiSkinData@@QAE@XZ; NiSkinData::NiSkinData(void)
0x56D1AC: mov     [esp+28h+arg_8], eax
0x56D1B0: jmp     short loc_56D1BA
0x56D1B2: mov     [esp+28h+arg_8], 0
0x56D1BA: mov     edx, [edi+14h]
0x56D1BD: mov     [esp+28h+arg_C], edx
0x56D1C1: xor     ecx, ecx
0x56D1C3: mov     eax, esi
0x56D1C5: mov     edx, 4
0x56D1CA: mul     edx
0x56D1CC: seto    cl
0x56D1CF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x56D1D7: neg     ecx
0x56D1D9: or      ecx, eax
0x56D1DB: push    ecx; Size
0x56D1DC: call    FormHeapAlloc
0x56D1E1: add     esp, 4
0x56D1E4: test    esi, esi
0x56D1E6: mov     ebx, eax
0x56D1E8: jle     short loc_56D1FD
0x56D1EA: mov     ecx, [esp+28h+arg_C]
0x56D1EE: sub     ecx, ebx
0x56D1F0: mov     edx, [ecx+eax]
0x56D1F3: mov     [eax], edx
0x56D1F5: add     eax, 4
0x56D1F8: sub     esi, 1
0x56D1FB: jnz     short loc_56D1F0
0x56D1FD: push    2Ch ; ','; Size
0x56D1FF: call    FormHeapAlloc
0x56D204: mov     esi, eax
0x56D206: add     esp, 4
0x56D209: mov     [esp+28h+arg_14], esi
0x56D20D: test    esi, esi
0x56D20F: mov     [esp+28h+var_4], 2
0x56D217: jz      short loc_56D268
0x56D219: mov     eax, [edi+10h]
0x56D21C: mov     ecx, esi
0x56D21E: mov     [esp+28h+arg_C], eax
0x56D222: call    NiObject_constr
0x56D227: mov     eax, [esp+28h+arg_8]
0x56D22B: xor     edi, edi
0x56D22D: cmp     eax, edi
0x56D22F: mov     dword ptr [esi], offset ??_7NiSkinInstance@@6B@; const NiSkinInstance::`vftable'
0x56D235: mov     [esi+8], eax
0x56D238: jz      short loc_56D244
0x56D23A: add     eax, 4
0x56D23D: push    eax; lpAddend
0x56D23E: call    dword ptr ds:0A28078h
0x56D244: mov     ecx, [esp+28h+arg_C]
0x56D248: mov     [esi+0Ch], edi
0x56D24B: mov     [esi+14h], ebx
0x56D24E: mov     [esi+10h], ecx
0x56D251: mov     dword ptr [esi+18h], 0FFFFFFFFh
0x56D258: mov     [esi+1Ch], edi
0x56D25B: mov     [esi+20h], edi
0x56D25E: mov     [esi+24h], edi
0x56D261: mov     [esi+28h], edi
0x56D264: mov     ebx, esi
0x56D266: jmp     short loc_56D26A
0x56D268: xor     ebx, ebx
0x56D26A: push    10h; Size
0x56D26C: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x56D274: call    FormHeapAlloc
0x56D279: add     esp, 4
0x56D27C: mov     [esp+28h+arg_C], eax
0x56D280: test    eax, eax
0x56D282: mov     [esp+28h+var_4], 3
0x56D28A: jz      short loc_56D297
0x56D28C: mov     ecx, eax; this
0x56D28E: call    ??0NiSkinPartition@@QAE@XZ; NiSkinPartition::NiSkinPartition(void)
0x56D293: mov     edi, eax
0x56D295: jmp     short loc_56D299
0x56D297: xor     edi, edi
0x56D299: mov     edx, [esp+28h+arg_8]
0x56D29D: mov     eax, [ebp+0B4h]
0x56D2A3: push    1
0x56D2A5: push    4
0x56D2A7: push    12h
0x56D2A9: push    edx
0x56D2AA: push    eax
0x56D2AB: mov     ecx, edi
0x56D2AD: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x56D2B5: call    sub_72ED50
0x56D2BA: test    al, al
0x56D2BC: jz      short loc_56D336
0x56D2BE: mov     esi, [ebx+0Ch]
0x56D2C1: cmp     esi, edi
0x56D2C3: jz      short loc_56D2F6
0x56D2C5: test    esi, esi
0x56D2C7: jz      short loc_56D2E5
0x56D2C9: lea     eax, [esi+4]
0x56D2CC: push    eax; lpAddend
0x56D2CD: call    dword ptr ds:0A2807Ch
0x56D2D3: test    eax, eax
0x56D2D5: jnz     short loc_56D2E5
0x56D2D7: test    esi, esi
0x56D2D9: jz      short loc_56D2E5
0x56D2DB: mov     edx, [esi]
0x56D2DD: mov     eax, [edx]
0x56D2DF: push    1
0x56D2E1: mov     ecx, esi
0x56D2E3: call    eax
0x56D2E5: test    edi, edi
0x56D2E7: mov     [ebx+0Ch], edi
0x56D2EA: jz      short loc_56D2F6
0x56D2EC: add     edi, 4
0x56D2EF: push    edi; lpAddend
0x56D2F0: call    dword ptr ds:0A28078h
0x56D2F6: mov     edi, [ebp+0B8h]
0x56D2FC: cmp     edi, ebx
0x56D2FE: jz      short loc_56D352
0x56D300: test    edi, edi
0x56D302: jz      short loc_56D320
0x56D304: lea     ecx, [edi+4]
0x56D307: push    ecx; lpAddend
0x56D308: call    dword ptr ds:0A2807Ch
0x56D30E: test    eax, eax
0x56D310: jnz     short loc_56D320
0x56D312: test    edi, edi
0x56D314: jz      short loc_56D320
0x56D316: mov     edx, [edi]
0x56D318: mov     eax, [edx]
0x56D31A: push    1
0x56D31C: mov     ecx, edi
0x56D31E: call    eax
0x56D320: test    ebx, ebx
0x56D322: mov     [ebp+0B8h], ebx
0x56D328: jz      short loc_56D352
0x56D32A: add     ebx, 4
0x56D32D: push    ebx; lpAddend
0x56D32E: call    dword ptr ds:0A28078h
0x56D334: jmp     short loc_56D352
0x56D336: test    edi, edi
0x56D338: jz      short loc_56D344
0x56D33A: mov     edx, [edi]
0x56D33C: mov     eax, [edx]
0x56D33E: push    1
0x56D340: mov     ecx, edi
0x56D342: call    eax
0x56D344: test    ebx, ebx
0x56D346: jz      short loc_56D352
0x56D348: mov     edx, [ebx]
0x56D34A: mov     eax, [edx]
0x56D34C: push    1
0x56D34E: mov     ecx, ebx
0x56D350: call    eax
0x56D352: push    1Ch; Size
0x56D354: call    FormHeapAlloc
0x56D359: mov     esi, eax
0x56D35B: add     esp, 4
0x56D35E: mov     [esp+28h+arg_8], esi
0x56D362: test    esi, esi
0x56D364: mov     [esp+28h+var_4], 4
0x56D36C: jz      short loc_56D385
0x56D36E: mov     ecx, esi; this
0x56D370: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x56D375: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x56D37B: mov     word ptr [esi+18h], 0
0x56D381: mov     eax, esi
0x56D383: jmp     short loc_56D387
0x56D385: xor     eax, eax
0x56D387: and     word ptr [eax+18h], 0FFFEh
0x56D38D: push    eax; a2
0x56D38E: mov     ecx, ebp; this
0x56D390: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x56D398: call    sub_405680
0x56D39D: mov     ebx, [esp+28h+var_14]
0x56D3A1: mov     eax, [ebx+2Ch]
0x56D3A4: mov     ecx, [eax+54h]
0x56D3A7: mov     [ebp+54h], ecx
0x56D3AA: mov     edx, [eax+58h]
0x56D3AD: add     eax, 54h ; 'T'
0x56D3B0: mov     [ebp+58h], edx
0x56D3B3: mov     eax, [eax+8]
0x56D3B6: mov     [ebp+5Ch], eax
0x56D3B9: mov     esi, [ebx+2Ch]
0x56D3BC: add     esi, 30h ; '0'
0x56D3BF: lea     edi, [ebp+30h]
0x56D3C2: mov     ecx, 9
0x56D3C7: rep movsd
0x56D3C9: mov     ecx, [ebx+2Ch]
0x56D3CC: push    1
0x56D3CE: push    ebp
0x56D3CF: fld     dword ptr [ecx+60h]
0x56D3D2: fabs
0x56D3D4: fstp    [esp+30h+arg_8]
0x56D3D8: fld     [esp+30h+arg_8]
0x56D3DC: fstp    dword ptr [ebp+60h]
0x56D3DF: mov     ecx, [ebx+30h]
0x56D3E2: mov     edx, [ecx]
0x56D3E4: mov     eax, [edx+84h]
0x56D3EA: call    eax
0x56D3EC: fild    dword ptr ds:0B33EA0h
0x56D3F2: mov     ecx, ds:0B33EA0h
0x56D3F8: test    ecx, ecx
0x56D3FA: push    0; a3
0x56D3FC: jge     short loc_56D404
0x56D3FE: fadd    dword ptr ds:0A2FC78h
0x56D404: fdiv    qword ptr ds:0A2FC70h
0x56D40A: push    ecx
0x56D40B: mov     ecx, ebp; this
0x56D40D: fstp    [esp+30h+arg_8]
0x56D411: fld     [esp+30h+arg_8]
0x56D415: fstp    [esp+30h+a2]; a2
0x56D418: call    NiAVObject_UpdateNiAVObject
0x56D41D: mov     ecx, ebp; this
0x56D41F: call    NiAVObject_InitializePropertyState
0x56D424: mov     esi, [ebx+1Ch]
0x56D427: cmp     esi, ebp
0x56D429: jz      short loc_56D460
0x56D42B: test    esi, esi
0x56D42D: jz      short loc_56D44B
0x56D42F: lea     edx, [esi+4]
0x56D432: push    edx; lpAddend
0x56D433: call    dword ptr ds:0A2807Ch
0x56D439: test    eax, eax
0x56D43B: jnz     short loc_56D44B
0x56D43D: test    esi, esi
0x56D43F: jz      short loc_56D44B
0x56D441: mov     eax, [esi]
0x56D443: mov     edx, [eax]
0x56D445: push    1
0x56D447: mov     ecx, esi
0x56D449: call    edx
0x56D44B: mov     [ebx+1Ch], ebp
0x56D44E: add     ebp, 4
0x56D451: push    ebp; lpAddend
0x56D452: call    dword ptr ds:0A28078h
0x56D458: mov     eax, [ebx+2Ch]
0x56D45B: mov     [ebx+20h], eax
0x56D45E: jmp     short loc_56D466
0x56D460: mov     ecx, [ebx+2Ch]
0x56D463: mov     [ebx+20h], ecx
0x56D466: mov     ecx, dword ptr [esp+28h+var_C]
0x56D46A: mov     large fs:0, ecx
0x56D471: pop     ecx
0x56D472: pop     edi
0x56D473: pop     esi
0x56D474: pop     ebp
0x56D475: pop     ebx
0x56D476: add     esp, 14h
0x56D479: retn    1Ch
