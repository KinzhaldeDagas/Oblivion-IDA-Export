0x80D110: push    0FFFFFFFFh
0x80D112: push    offset SEH_80D110
0x80D117: mov     eax, large fs:0
0x80D11D: push    eax
0x80D11E: sub     esp, 30h
0x80D121: push    ebx
0x80D122: push    ebp
0x80D123: push    esi
0x80D124: push    edi
0x80D125: mov     eax, ds:0B30AACh
0x80D12A: xor     eax, esp
0x80D12C: push    eax
0x80D12D: lea     eax, [esp+50h+var_C]
0x80D131: mov     large fs:0, eax
0x80D137: mov     ebp, ecx
0x80D139: mov     [esp+50h+var_34], ebp
0x80D13D: mov     eax, [ebp+0]
0x80D140: mov     edx, [eax+80h]
0x80D146: call    edx
0x80D148: mov     eax, ds:0B42E90h
0x80D14D: cmp     eax, 160h
0x80D152: mov     [esp+50h+var_30], eax
0x80D156: jl      short loc_80D15F
0x80D158: cmp     eax, 162h
0x80D15D: jle     short loc_80D170
0x80D15F: cmp     eax, 6
0x80D162: jl      short loc_80D169
0x80D164: cmp     eax, 9
0x80D167: jle     short loc_80D170
0x80D169: cmp     eax, 165h
0x80D16E: jnz     short loc_80D1A9
0x80D170: push    1; a1
0x80D172: call    GetShaderDefinition
0x80D177: mov     eax, [esp+54h+arg_18]
0x80D17B: mov     ecx, [esp+54h+arg_14]
0x80D17F: mov     edx, [esp+54h+arg_10]
0x80D183: add     esp, 4
0x80D186: push    eax
0x80D187: mov     eax, [esp+54h+arg_C]
0x80D18B: push    ecx
0x80D18C: mov     ecx, [esp+58h+arg_8]
0x80D190: push    edx
0x80D191: mov     edx, [esp+5Ch+arg_4]
0x80D195: push    eax
0x80D196: mov     eax, [esp+60h+arg_0]
0x80D19A: push    ecx
0x80D19B: push    edx
0x80D19C: push    eax
0x80D19D: mov     ecx, ebp
0x80D19F: call    sub_7C9F30
0x80D1A4: jmp     loc_80D850
0x80D1A9: mov     ecx, [esp+50h+arg_C]
0x80D1AD: mov     edi, [ecx+18h]
0x80D1B0: test    edi, edi
0x80D1B2: mov     byte ptr [esp+50h+arg_10], 0
0x80D1B7: mov     byte ptr [esp+50h+arg_8], 0
0x80D1BC: mov     byte ptr [esp+50h+arg_14], 0
0x80D1C1: mov     byte ptr [esp+50h+arg_18], 1
0x80D1C6: jz      loc_80D2BF
0x80D1CC: mov     eax, [edi+1Ch]
0x80D1CF: test    eax, 400h
0x80D1D4: setnbe  byte ptr [esp+50h+arg_10]
0x80D1D9: test    eax, 800h
0x80D1DE: setnbe  byte ptr [esp+50h+arg_8]
0x80D1E3: test    eax, 1000h
0x80D1E8: setnbe  byte ptr [esp+50h+arg_14]
0x80D1ED: shr     eax, 1Ch
0x80D1F0: movzx   edx, al
0x80D1F3: push    edx
0x80D1F4: call    GetShadowSceneNode
0x80D1F9: mov     eax, [eax+118h]
0x80D1FF: add     esp, 4
0x80D202: lea     ecx, [esp+50h+var_38]
0x80D206: push    ecx
0x80D207: mov     ecx, eax
0x80D209: call    sub_405AD0
0x80D20E: mov     eax, [eax]
0x80D210: push    offset dword_B3FA90
0x80D215: lea     ecx, [eax+0F8h]
0x80D21B: call    sub_8AA390
0x80D220: mov     byte ptr [esp+50h+arg_18], al
0x80D224: mov     eax, [esp+50h+var_38]
0x80D228: test    eax, eax
0x80D22A: jz      short loc_80D24A
0x80D22C: mov     esi, eax
0x80D22E: add     eax, 4
0x80D231: push    eax; lpAddend
0x80D232: call    dword ptr ds:0A2807Ch
0x80D238: test    eax, eax
0x80D23A: jnz     short loc_80D24A
0x80D23C: test    esi, esi
0x80D23E: jz      short loc_80D24A
0x80D240: mov     edx, [esi]
0x80D242: mov     eax, [edx]
0x80D244: push    1
0x80D246: mov     ecx, esi
0x80D248: call    eax
0x80D24A: fld     dword ptr [edi+20h]
0x80D24D: mov     ecx, ds:0B46498h
0x80D253: mov     edx, ds:0B4649Ch
0x80D259: fstp    [esp+50h+var_38]
0x80D25D: mov     eax, ds:0B464A0h
0x80D262: mov     [esp+50h+var_1C], ecx
0x80D266: fld     [esp+50h+var_1C]
0x80D26A: mov     ecx, ds:0B464A4h
0x80D270: fstp    [esp+50h+var_2C]
0x80D274: mov     [esp+50h+var_18], edx
0x80D278: fld     [esp+50h+var_18]
0x80D27C: mov     edx, [esp+50h+var_2C]
0x80D280: fstp    [esp+50h+var_28]
0x80D284: mov     [esp+50h+var_14], eax
0x80D288: fld     [esp+50h+var_14]
0x80D28C: mov     eax, [esp+50h+var_28]
0x80D290: fstp    [esp+50h+var_24]
0x80D294: fld     [esp+50h+var_38]
0x80D298: mov     [esp+50h+var_10], ecx
0x80D29C: mov     ecx, [esp+50h+var_24]
0x80D2A0: fstp    [esp+50h+var_20]
0x80D2A4: mov     ds:0B46498h, edx
0x80D2AA: mov     edx, [esp+50h+var_20]
0x80D2AE: mov     ds:0B4649Ch, eax
0x80D2B3: mov     ds:0B464A0h, ecx
0x80D2B9: mov     ds:0B464A4h, edx
0x80D2BF: cmp     word ptr ds:0B42EACh, 4
0x80D2C7: mov     ebx, [ebp+9Ch]
0x80D2CD: lea     esi, [ebp+9Ch]
0x80D2D3: jnz     loc_80D367
0x80D2D9: cmp     dword ptr [ebx+30h], 0
0x80D2DD: jnz     short loc_80D2E7
0x80D2DF: call    sub_772DF0
0x80D2E4: mov     [ebx+30h], eax
0x80D2E7: mov     ecx, [ebx+30h]
0x80D2EA: push    0
0x80D2EC: push    1
0x80D2EE: push    34h ; '4'
0x80D2F0: call    sub_772CD0
0x80D2F5: mov     ebx, [esi]
0x80D2F7: cmp     dword ptr [ebx+30h], 0
0x80D2FB: jnz     short loc_80D305
0x80D2FD: call    sub_772DF0
0x80D302: mov     [ebx+30h], eax
0x80D305: mov     ecx, [ebx+30h]
0x80D308: push    0
0x80D30A: push    8
0x80D30C: push    38h ; '8'
0x80D30E: call    sub_772CD0
0x80D313: mov     ebx, [esi]
0x80D315: cmp     dword ptr [ebx+30h], 0
0x80D319: jnz     short loc_80D323
0x80D31B: call    sub_772DF0
0x80D320: mov     [ebx+30h], eax
0x80D323: mov     ecx, [ebx+30h]
0x80D326: push    0
0x80D328: push    7
0x80D32A: push    37h ; '7'
0x80D32C: call    sub_772CD0
0x80D331: mov     ebx, [esi]
0x80D333: cmp     dword ptr [ebx+30h], 0
0x80D337: jnz     short loc_80D341
0x80D339: call    sub_772DF0
0x80D33E: mov     [ebx+30h], eax
0x80D341: mov     ecx, [ebx+30h]
0x80D344: push    0
0x80D346: push    1
0x80D348: push    35h ; '5'
0x80D34A: call    sub_772CD0
0x80D34F: mov     ebx, [esi]
0x80D351: cmp     dword ptr [ebx+30h], 0
0x80D355: jnz     short loc_80D35F
0x80D357: call    sub_772DF0
0x80D35C: mov     [ebx+30h], eax
0x80D35F: push    0
0x80D361: push    1
0x80D363: push    36h ; '6'
0x80D365: jmp     short loc_80D37B
0x80D367: cmp     dword ptr [ebx+30h], 0
0x80D36B: jnz     short loc_80D375
0x80D36D: call    sub_772DF0
0x80D372: mov     [ebx+30h], eax
0x80D375: push    0
0x80D377: push    0
0x80D379: push    34h ; '4'
0x80D37B: mov     ecx, [ebx+30h]
0x80D37E: call    sub_772CD0
0x80D383: cmp     byte ptr ds:0B42F32h, 0
0x80D38A: mov     ebx, ds:0B42F48h
0x80D390: jnz     short loc_80D399
0x80D392: mov     ebx, 1
0x80D397: jmp     short loc_80D39E
0x80D399: cmp     ebx, 1
0x80D39C: jnz     short loc_80D3E3
0x80D39E: mov     edx, [edi+158h]
0x80D3A4: lea     eax, [ebp+0A4h]
0x80D3AA: mov     ds:0B46688h, edx
0x80D3B0: mov     [esp+50h+var_3C], eax
0x80D3B4: mov     eax, [edi+15Ch]
0x80D3BA: lea     ecx, [ebp+0C0h]
0x80D3C0: mov     ds:0B4668Ch, eax
0x80D3C5: mov     [esp+50h+var_38], ecx
0x80D3C9: mov     ecx, [edi+160h]
0x80D3CF: mov     ds:0B46690h, ecx
0x80D3D5: mov     edx, [edi+164h]
0x80D3DB: mov     ds:0B46694h, edx
0x80D3E1: jmp     short loc_80D426
0x80D3E3: mov     edx, [edi+158h]
0x80D3E9: lea     eax, [ebp+0CCh]
0x80D3EF: mov     ds:0B4616Ch, edx
0x80D3F5: mov     [esp+50h+var_3C], eax
0x80D3F9: mov     eax, [edi+15Ch]
0x80D3FF: lea     ecx, [ebp+0E8h]
0x80D405: mov     ds:0B46170h, eax
0x80D40A: mov     [esp+50h+var_38], ecx
0x80D40E: mov     ecx, [edi+160h]
0x80D414: mov     ds:0B46174h, ecx
0x80D41A: mov     edx, [edi+164h]
0x80D420: mov     ds:0B46178h, edx
0x80D426: cmp     [esp+50h+arg_4], 0
0x80D42B: lea     ecx, [ebp+24h]; this
0x80D42E: jz      short loc_80D438
0x80D430: mov     eax, [ebp+0F8h]
0x80D436: jmp     short loc_80D43E
0x80D438: mov     eax, [ebp+0F4h]
0x80D43E: push    eax; a2
0x80D43F: call    NiSmartPointer_Set??
0x80D444: mov     eax, [esp+50h+var_30]
0x80D448: add     eax, 0FFFFFF20h; switch 176 cases
0x80D44D: cmp     eax, 0AFh
0x80D452: ja      def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D458: movzx   eax, ds:byte_80D884[eax]
0x80D45F: jmp     ds:jpt_80D45F[eax*4]; switch jump
0x80D466: mov     ecx, [esp+50h+arg_C]; jumptable 0080D45F case 396
0x80D46A: mov     edx, [esp+50h+arg_4]
0x80D46E: mov     eax, [esp+50h+arg_0]
0x80D472: push    edi
0x80D473: push    ecx
0x80D474: push    edx
0x80D475: push    eax
0x80D476: mov     ecx, ebp
0x80D478: call    sub_851CA0
0x80D47D: jmp     def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D482: mov     ecx, [esp+50h+arg_C]; jumptable 0080D45F case 397
0x80D486: mov     edx, [esp+50h+arg_4]
0x80D48A: mov     eax, [esp+50h+arg_0]
0x80D48E: push    edi
0x80D48F: push    ecx
0x80D490: push    edx
0x80D491: push    eax
0x80D492: mov     ecx, ebp
0x80D494: call    sub_851E70
0x80D499: jmp     def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D49E: mov     ecx, [esp+50h+arg_C]; jumptable 0080D45F case 398
0x80D4A2: mov     edx, [esp+50h+arg_4]
0x80D4A6: mov     eax, [esp+50h+arg_0]
0x80D4AA: push    edi
0x80D4AB: push    ecx
0x80D4AC: push    edx
0x80D4AD: push    eax
0x80D4AE: mov     ecx, ebp
0x80D4B0: call    sub_848950
0x80D4B5: jmp     def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D4BA: mov     ecx, [esp+50h+arg_C]; jumptable 0080D45F case 399
0x80D4BE: mov     edx, [esp+50h+arg_4]
0x80D4C2: mov     eax, [esp+50h+arg_0]
0x80D4C6: push    edi
0x80D4C7: push    ecx
0x80D4C8: push    edx
0x80D4C9: push    eax
0x80D4CA: mov     ecx, ebp
0x80D4CC: call    sub_848AD0
0x80D4D1: jmp     def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D4D6: mov     eax, [esi]; jumptable 0080D45F case 224
0x80D4D8: mov     ecx, [eax+24h]
0x80D4DB: mov     ebp, [ecx]
0x80D4DD: test    ebp, ebp
0x80D4DF: mov     [esp+50h+arg_C], ebp
0x80D4E3: jz      short loc_80D4E9
0x80D4E5: add     dword ptr [ebp+5Ch], 1
0x80D4E9: mov     edx, [edi]
0x80D4EB: mov     eax, [edx+88h]
0x80D4F1: push    0
0x80D4F3: mov     ecx, edi
0x80D4F5: mov     [esp+54h+var_4], 0
0x80D4FD: call    eax
0x80D4FF: push    eax; a2
0x80D500: mov     ecx, ebp; this
0x80D502: call    sub_76C910
0x80D507: mov     eax, [esi]
0x80D509: mov     ecx, [eax+24h]
0x80D50C: mov     eax, [ecx+4]
0x80D50F: push    eax
0x80D510: lea     ecx, [esp+54h+arg_C]
0x80D514: call    sub_7AEC20
0x80D519: mov     edx, [edi]
0x80D51B: mov     eax, [edx+8Ch]
0x80D521: push    0
0x80D523: mov     ecx, edi
0x80D525: call    eax
0x80D527: mov     ecx, [esp+50h+arg_C]; this
0x80D52B: push    eax; a2
0x80D52C: call    sub_76C910
0x80D531: mov     eax, [esi]
0x80D533: mov     ecx, [eax+24h]
0x80D536: mov     eax, [ecx+8]
0x80D539: push    eax
0x80D53A: lea     ecx, [esp+54h+arg_C]
0x80D53E: call    sub_7AEC20
0x80D543: mov     eax, [edi+168h]
0x80D549: mov     ecx, [esp+50h+arg_C]; this
0x80D54D: push    eax; a2
0x80D54E: call    sub_76C910
0x80D553: mov     eax, [esi]
0x80D555: mov     edx, [eax+24h]
0x80D558: mov     eax, [edx+0Ch]
0x80D55B: push    eax
0x80D55C: lea     ecx, [esp+54h+arg_C]
0x80D560: call    sub_7AEC20
0x80D565: mov     eax, ds:0B430F8h
0x80D56A: mov     ebp, [esp+50h+arg_C]
0x80D56E: push    eax; a2
0x80D56F: mov     ecx, ebp; this
0x80D571: call    sub_76C910
0x80D576: cmp     ebx, 2
0x80D579: jl      short loc_80D59F
0x80D57B: mov     eax, [esi]
0x80D57D: mov     ecx, [eax+24h]
0x80D580: mov     eax, [ecx+14h]
0x80D583: push    eax
0x80D584: lea     ecx, [esp+54h+arg_C]
0x80D588: call    sub_7AEC20
0x80D58D: mov     edi, [edi+16Ch]
0x80D593: mov     ebp, [esp+50h+arg_C]
0x80D597: push    edi; a2
0x80D598: mov     ecx, ebp; this
0x80D59A: call    sub_76C910
0x80D59F: mov     ecx, [esi]
0x80D5A1: push    0
0x80D5A3: push    0
0x80D5A5: push    1Ch
0x80D5A7: call    sub_76C730
0x80D5AC: mov     ecx, [esi]
0x80D5AE: push    0
0x80D5B0: push    7
0x80D5B2: push    0A8h ; '¨'
0x80D5B7: call    sub_76C730
0x80D5BC: mov     ecx, [esi]
0x80D5BE: push    0
0x80D5C0: push    1
0x80D5C2: push    1Bh
0x80D5C4: call    sub_76C730
0x80D5C9: mov     ecx, [esi]
0x80D5CB: push    0
0x80D5CD: push    5
0x80D5CF: push    13h
0x80D5D1: call    sub_76C730
0x80D5D6: mov     ecx, [esi]
0x80D5D8: push    0
0x80D5DA: push    6
0x80D5DC: push    14h
0x80D5DE: call    sub_76C730
0x80D5E3: mov     ecx, [esi]
0x80D5E5: push    0
0x80D5E7: push    1
0x80D5E9: push    7
0x80D5EB: call    sub_76C730
0x80D5F0: mov     ecx, [esi]
0x80D5F2: push    0
0x80D5F4: push    4
0x80D5F6: push    17h
0x80D5F8: call    sub_76C730
0x80D5FD: mov     ecx, [esi]
0x80D5FF: push    0
0x80D601: push    1
0x80D603: push    0Eh
0x80D605: call    sub_76C730
0x80D60A: mov     edx, [esp+50h+var_3C]
0x80D60E: mov     eax, [edx]
0x80D610: mov     ecx, [esi]; this
0x80D612: push    eax; a2
0x80D613: call    sub_7AECB0
0x80D618: cmp     byte ptr [esp+50h+arg_18], 0
0x80D61D: jz      short loc_80D627
0x80D61F: mov     eax, [esp+50h+var_38]
0x80D623: mov     eax, [eax]
0x80D625: jmp     short loc_80D62E
0x80D627: mov     ecx, [esp+50h+var_38]
0x80D62B: mov     eax, [ecx+8]
0x80D62E: mov     ecx, [esi]; this
0x80D630: push    eax; a2
0x80D631: call    sub_7AEC60
0x80D636: push    esi
0x80D637: mov     esi, [esp+54h+var_34]
0x80D63B: mov     edx, [esi+38h]
0x80D63E: push    edx
0x80D63F: jmp     loc_80D82B
0x80D644: mov     eax, [esi]; jumptable 0080D45F case 225
0x80D646: mov     eax, [eax+24h]
0x80D649: mov     ebp, [eax]
0x80D64B: test    ebp, ebp
0x80D64D: mov     [esp+50h+arg_C], ebp
0x80D651: jz      short loc_80D657
0x80D653: add     dword ptr [ebp+5Ch], 1
0x80D657: mov     edx, [edi]
0x80D659: mov     eax, [edx+88h]
0x80D65F: push    0
0x80D661: mov     ecx, edi
0x80D663: mov     [esp+54h+var_4], 1
0x80D66B: call    eax
0x80D66D: push    eax; a2
0x80D66E: mov     ecx, ebp; this
0x80D670: call    sub_76C910
0x80D675: mov     eax, [esi]
0x80D677: mov     ecx, [eax+24h]
0x80D67A: mov     eax, [ecx+4]
0x80D67D: push    eax
0x80D67E: lea     ecx, [esp+54h+arg_C]
0x80D682: call    sub_7AEC20
0x80D687: mov     edx, [edi]
0x80D689: mov     eax, [edx+8Ch]
0x80D68F: push    0
0x80D691: mov     ecx, edi
0x80D693: call    eax
0x80D695: mov     ecx, [esp+50h+arg_C]; this
0x80D699: push    eax; a2
0x80D69A: call    sub_76C910
0x80D69F: mov     eax, [esi]
0x80D6A1: mov     ecx, [eax+24h]
0x80D6A4: mov     eax, [ecx+8]
0x80D6A7: push    eax
0x80D6A8: lea     ecx, [esp+54h+arg_C]
0x80D6AC: call    sub_7AEC20
0x80D6B1: mov     eax, [edi+168h]
0x80D6B7: mov     ecx, [esp+50h+arg_C]; this
0x80D6BB: push    eax; a2
0x80D6BC: call    sub_76C910
0x80D6C1: mov     eax, [esi]
0x80D6C3: mov     edx, [eax+24h]
0x80D6C6: mov     eax, [edx+0Ch]
0x80D6C9: push    eax
0x80D6CA: lea     ecx, [esp+54h+arg_C]
0x80D6CE: call    sub_7AEC20
0x80D6D3: mov     eax, ds:0B430F8h
0x80D6D8: mov     ebp, [esp+50h+arg_C]
0x80D6DC: push    eax; a2
0x80D6DD: mov     ecx, ebp; this
0x80D6DF: call    sub_76C910
0x80D6E4: cmp     ebx, 2
0x80D6E7: jl      short loc_80D70D
0x80D6E9: mov     eax, [esi]
0x80D6EB: mov     ecx, [eax+24h]
0x80D6EE: mov     eax, [ecx+14h]
0x80D6F1: push    eax
0x80D6F2: lea     ecx, [esp+54h+arg_C]
0x80D6F6: call    sub_7AEC20
0x80D6FB: mov     edi, [edi+16Ch]
0x80D701: mov     ebp, [esp+50h+arg_C]
0x80D705: push    edi; a2
0x80D706: mov     ecx, ebp; this
0x80D708: call    sub_76C910
0x80D70D: mov     ecx, [esi]
0x80D70F: push    0
0x80D711: push    0
0x80D713: push    1Ch
0x80D715: call    sub_76C730
0x80D71A: mov     ecx, [esi]
0x80D71C: push    0
0x80D71E: push    7
0x80D720: push    0A8h ; '¨'
0x80D725: call    sub_76C730
0x80D72A: mov     ecx, [esi]
0x80D72C: push    0
0x80D72E: push    1
0x80D730: push    1Bh
0x80D732: call    sub_76C730
0x80D737: mov     ecx, [esi]
0x80D739: push    0
0x80D73B: push    5
0x80D73D: push    13h
0x80D73F: call    sub_76C730
0x80D744: mov     ecx, [esi]
0x80D746: push    0
0x80D748: push    6
0x80D74A: push    14h
0x80D74C: call    sub_76C730
0x80D751: mov     ecx, [esi]
0x80D753: push    0
0x80D755: push    1
0x80D757: push    7
0x80D759: call    sub_76C730
0x80D75E: mov     ecx, [esi]
0x80D760: push    0
0x80D762: push    4
0x80D764: push    17h
0x80D766: call    sub_76C730
0x80D76B: mov     ecx, [esi]
0x80D76D: push    0
0x80D76F: push    1
0x80D771: push    0Eh
0x80D773: call    sub_76C730
0x80D778: cmp     byte ptr [esp+50h+arg_10], 0
0x80D77D: jnz     short loc_80D7F4
0x80D77F: cmp     byte ptr [esp+50h+arg_18], 0
0x80D784: jnz     short loc_80D7F4
0x80D786: mov     ecx, [esi]; this
0x80D788: mov     edi, 2
0x80D78D: cmp     ds:0B42F48h, edi
0x80D793: jl      short loc_80D79E
0x80D795: mov     edx, [esp+50h+var_38]
0x80D799: mov     eax, [edx+4]
0x80D79C: jmp     short loc_80D7A4
0x80D79E: mov     eax, [esp+50h+var_38]
0x80D7A2: mov     eax, [eax]
0x80D7A4: push    eax; a2
0x80D7A5: call    sub_7AEC60
0x80D7AA: cmp     byte ptr [esp+50h+arg_8], 0
0x80D7AF: jz      short loc_80D7EC
0x80D7B1: cmp     byte ptr [esp+50h+arg_14], 0
0x80D7B6: jz      short loc_80D7D2
0x80D7B8: cmp     ds:0B42F48h, edi
0x80D7BE: jl      short loc_80D7C9
0x80D7C0: mov     ecx, [esp+50h+var_3C]
0x80D7C4: mov     eax, [ecx+18h]
0x80D7C7: jmp     short loc_80D81A
0x80D7C9: mov     edx, [esp+50h+var_3C]
0x80D7CD: mov     eax, [edx+0Ch]
0x80D7D0: jmp     short loc_80D81A
0x80D7D2: cmp     ds:0B42F48h, edi
0x80D7D8: jl      short loc_80D7E3
0x80D7DA: mov     eax, [esp+50h+var_3C]
0x80D7DE: mov     eax, [eax+14h]
0x80D7E1: jmp     short loc_80D81A
0x80D7E3: mov     ecx, [esp+50h+var_3C]
0x80D7E7: mov     eax, [ecx+4]
0x80D7EA: jmp     short loc_80D81A
0x80D7EC: mov     edx, [esp+50h+var_3C]
0x80D7F0: mov     eax, [edx]
0x80D7F2: jmp     short loc_80D81A
0x80D7F4: mov     eax, [esp+50h+var_38]
0x80D7F8: mov     eax, [eax+4]
0x80D7FB: mov     ecx, [esi]; this
0x80D7FD: push    eax; a2
0x80D7FE: call    sub_7AEC60
0x80D803: cmp     byte ptr [esp+50h+arg_14], 0
0x80D808: jz      short loc_80D813
0x80D80A: mov     ecx, [esp+50h+var_3C]
0x80D80E: mov     eax, [ecx+10h]
0x80D811: jmp     short loc_80D81A
0x80D813: mov     edx, [esp+50h+var_3C]
0x80D817: mov     eax, [edx+8]
0x80D81A: mov     ecx, [esi]; this
0x80D81C: push    eax; a2
0x80D81D: call    sub_7AECB0
0x80D822: push    esi
0x80D823: mov     esi, [esp+54h+var_34]
0x80D827: mov     eax, [esi+38h]
0x80D82A: push    eax
0x80D82B: lea     ecx, [esi+40h]
0x80D82E: call    sub_76CE40
0x80D833: add     dword ptr [esi+38h], 1
0x80D837: or      eax, 0FFFFFFFFh
0x80D83A: test    ebp, ebp
0x80D83C: mov     [esp+50h+var_4], eax
0x80D840: jz      short def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D842: add     [ebp+5Ch], eax
0x80D845: jnz     short def_80D45F; jumptable 0080D45F default case, cases 226-395
0x80D847: mov     ecx, ebp
0x80D849: call    sub_772560
0x80D84E: xor     eax, eax; jumptable 0080D45F default case, cases 226-395
0x80D850: mov     ecx, dword ptr [esp+50h+var_C]
0x80D854: mov     large fs:0, ecx
0x80D85B: pop     ecx
0x80D85C: pop     edi
0x80D85D: pop     esi
0x80D85E: pop     ebp
0x80D85F: pop     ebx
0x80D860: add     esp, 3Ch
0x80D863: retn    1Ch
