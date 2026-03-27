0x6FD1D0: push    0FFFFFFFFh
0x6FD1D2: push    offset SEH_6FD1D0
0x6FD1D7: mov     eax, large fs:0
0x6FD1DD: push    eax
0x6FD1DE: sub     esp, 0Ch
0x6FD1E1: push    ebx
0x6FD1E2: push    ebp
0x6FD1E3: push    esi
0x6FD1E4: push    edi
0x6FD1E5: mov     eax, ds:0B30AACh
0x6FD1EA: xor     eax, esp
0x6FD1EC: push    eax
0x6FD1ED: lea     eax, [esp+2Ch+var_C]
0x6FD1F1: mov     large fs:0, eax
0x6FD1F7: push    48h ; 'H'; Size
0x6FD1F9: call    FormHeapAlloc
0x6FD1FE: fldz
0x6FD200: mov     edi, eax
0x6FD202: fst     [esp+30h+var_18]
0x6FD206: mov     eax, [esp+30h+var_18]
0x6FD20A: fst     [esp+30h+var_14]
0x6FD20E: mov     ecx, [esp+30h+var_14]
0x6FD212: fst     [esp+30h+var_10]
0x6FD216: mov     edx, [esp+30h+var_10]
0x6FD21A: fld     [esp+30h+arg_0]
0x6FD21E: fst     [esp+30h+var_18]
0x6FD222: mov     [edi], eax
0x6FD224: mov     eax, [esp+30h+var_18]
0x6FD228: fxch    st(1)
0x6FD22A: fst     [esp+30h+var_14]
0x6FD22E: mov     [edi+4], ecx
0x6FD231: mov     ecx, [esp+30h+var_14]
0x6FD235: fst     [esp+30h+var_10]
0x6FD239: fst     [esp+30h+var_18]
0x6FD23D: mov     [edi+8], edx
0x6FD240: mov     edx, [esp+30h+var_10]
0x6FD244: fst     [esp+30h+var_14]
0x6FD248: mov     [edi+0Ch], eax
0x6FD24B: fst     [esp+30h+var_10]
0x6FD24F: mov     eax, [esp+30h+var_18]
0x6FD253: fst     [esp+30h+var_18]
0x6FD257: mov     [edi+10h], ecx
0x6FD25A: mov     ecx, [esp+30h+var_14]
0x6FD25E: mov     [edi+14h], edx
0x6FD261: mov     edx, [esp+30h+var_10]
0x6FD265: fst     [esp+30h+var_10]
0x6FD269: mov     [edi+18h], eax
0x6FD26C: fxch    st(1)
0x6FD26E: mov     eax, [esp+30h+var_18]
0x6FD272: fst     [esp+30h+var_14]
0x6FD276: fxch    st(1)
0x6FD278: mov     [edi+1Ch], ecx
0x6FD27B: mov     ecx, [esp+30h+var_14]
0x6FD27F: fst     [esp+30h+var_18]
0x6FD283: mov     [edi+20h], edx
0x6FD286: fst     [esp+30h+var_14]
0x6FD28A: mov     edx, [esp+30h+var_10]
0x6FD28E: fst     [esp+30h+var_10]
0x6FD292: mov     [edi+24h], eax
0x6FD295: mov     eax, [esp+30h+var_18]
0x6FD299: fst     [esp+30h+var_18]
0x6FD29D: mov     [edi+28h], ecx
0x6FD2A0: mov     ecx, [esp+30h+var_14]
0x6FD2A4: fstp    [esp+30h+var_14]
0x6FD2A8: mov     [edi+2Ch], edx
0x6FD2AB: mov     edx, [esp+30h+var_10]
0x6FD2AF: fstp    [esp+30h+var_10]
0x6FD2B3: mov     [edi+30h], eax
0x6FD2B6: mov     eax, [esp+30h+var_18]
0x6FD2BA: mov     [edi+34h], ecx
0x6FD2BD: mov     ecx, [esp+30h+var_14]
0x6FD2C1: mov     [edi+38h], edx
0x6FD2C4: mov     edx, [esp+30h+var_10]
0x6FD2C8: mov     [edi+3Ch], eax
0x6FD2CB: mov     [edi+40h], ecx
0x6FD2CE: push    60h ; '`'; Size
0x6FD2D0: mov     [edi+44h], edx
0x6FD2D3: call    FormHeapAlloc
0x6FD2D8: mov     esi, eax
0x6FD2DA: add     esp, 8
0x6FD2DD: mov     [esp+2Ch+arg_0], esi
0x6FD2E1: xor     ebx, ebx
0x6FD2E3: cmp     esi, ebx
0x6FD2E5: mov     [esp+2Ch+var_4], ebx
0x6FD2E9: jz      short loc_6FD2FC
0x6FD2EB: push    offset sub_47EA50
0x6FD2F0: push    6
0x6FD2F2: push    10h
0x6FD2F4: push    esi
0x6FD2F5: call    sub_401080
0x6FD2FA: jmp     short loc_6FD2FE
0x6FD2FC: xor     esi, esi
0x6FD2FE: mov     eax, ds:0B25550h
0x6FD303: mov     [esi], eax
0x6FD305: mov     ecx, ds:0B25554h
0x6FD30B: mov     [esi+4], ecx
0x6FD30E: mov     edx, ds:0B25558h
0x6FD314: mov     [esi+8], edx
0x6FD317: mov     eax, ds:0B2555Ch
0x6FD31C: mov     [esi+0Ch], eax
0x6FD31F: mov     ecx, ds:0B25550h
0x6FD325: mov     [esi+10h], ecx
0x6FD328: mov     edx, ds:0B25554h
0x6FD32E: mov     [esi+14h], edx
0x6FD331: mov     eax, ds:0B25558h
0x6FD336: mov     [esi+18h], eax
0x6FD339: mov     ecx, ds:0B2555Ch
0x6FD33F: mov     [esi+1Ch], ecx
0x6FD342: mov     edx, ds:0B25560h
0x6FD348: mov     [esi+20h], edx
0x6FD34B: mov     eax, ds:0B25564h
0x6FD350: mov     [esi+24h], eax
0x6FD353: mov     ecx, ds:0B25568h
0x6FD359: mov     [esi+28h], ecx
0x6FD35C: mov     edx, ds:0B2556Ch
0x6FD362: mov     [esi+2Ch], edx
0x6FD365: mov     eax, ds:0B25560h
0x6FD36A: mov     [esi+30h], eax
0x6FD36D: mov     ecx, ds:0B25564h
0x6FD373: mov     [esi+34h], ecx
0x6FD376: mov     edx, ds:0B25568h
0x6FD37C: mov     [esi+38h], edx
0x6FD37F: mov     eax, ds:0B2556Ch
0x6FD384: mov     [esi+3Ch], eax
0x6FD387: mov     ecx, ds:0B25570h
0x6FD38D: mov     [esi+40h], ecx
0x6FD390: mov     edx, ds:0B25574h
0x6FD396: mov     [esi+44h], edx
0x6FD399: mov     eax, ds:0B25578h
0x6FD39E: mov     [esi+48h], eax
0x6FD3A1: mov     ecx, ds:0B2557Ch
0x6FD3A7: mov     [esi+4Ch], ecx
0x6FD3AA: mov     edx, ds:0B25570h
0x6FD3B0: mov     [esi+50h], edx
0x6FD3B3: mov     eax, ds:0B25574h
0x6FD3B8: mov     [esi+54h], eax
0x6FD3BB: mov     ecx, ds:0B25578h
0x6FD3C1: mov     [esi+58h], ecx
0x6FD3C4: mov     edx, ds:0B2557Ch
0x6FD3CA: push    6; Size
0x6FD3CC: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6FD3D4: mov     [esi+5Ch], edx
0x6FD3D7: call    FormHeapAlloc
0x6FD3DC: mov     ebp, eax
0x6FD3DE: push    0C0h ; 'À'; Size
0x6FD3E3: mov     byte ptr [ebp+0], 1
0x6FD3E7: mov     [ebp+1], bl
0x6FD3EA: mov     byte ptr [ebp+2], 1
0x6FD3EE: mov     [ebp+3], bl
0x6FD3F1: mov     byte ptr [ebp+4], 1
0x6FD3F5: mov     [ebp+5], bl
0x6FD3F8: call    FormHeapAlloc
0x6FD3FD: add     esp, 8
0x6FD400: mov     [esp+2Ch+arg_0], eax
0x6FD404: cmp     eax, ebx
0x6FD406: mov     [esp+2Ch+var_4], 1
0x6FD40E: jz      short loc_6FD423
0x6FD410: push    ebp
0x6FD411: push    ebx
0x6FD412: push    ebx
0x6FD413: push    ebx
0x6FD414: push    esi
0x6FD415: push    edi
0x6FD416: push    6
0x6FD418: mov     ecx, eax
0x6FD41A: call    sub_7177E0
0x6FD41F: mov     ebp, eax
0x6FD421: jmp     short loc_6FD425
0x6FD423: xor     ebp, ebp
0x6FD425: mov     eax, ds:0B3F9A8h
0x6FD42A: mov     [ebp+54h], eax
0x6FD42D: mov     ecx, ds:0B3F9ACh
0x6FD433: mov     [ebp+58h], ecx
0x6FD436: mov     edx, ds:0B3F9B0h
0x6FD43C: mov     [ebp+5Ch], edx
0x6FD43F: lea     edi, [ebp+30h]
0x6FD442: mov     ecx, 9
0x6FD447: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6FD44C: rep movsd
0x6FD44E: push    offset aBstestobjectsC; "BSTestObjects Coordinate Jack"
0x6FD453: mov     ecx, ebp
0x6FD455: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6FD45D: call    NiObjectNET_SetName
0x6FD462: push    1Ch; Size
0x6FD464: call    FormHeapAlloc
0x6FD469: mov     esi, eax
0x6FD46B: add     esp, 4
0x6FD46E: mov     [esp+2Ch+arg_0], esi
0x6FD472: cmp     esi, ebx
0x6FD474: mov     [esp+2Ch+var_4], 2
0x6FD47C: jz      short loc_6FD493
0x6FD47E: mov     ecx, esi; this
0x6FD480: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x6FD485: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x6FD48B: mov     word ptr [esi+18h], 8
0x6FD491: jmp     short loc_6FD495
0x6FD493: xor     esi, esi
0x6FD495: cmp     esi, ebx
0x6FD497: mov     [esp+2Ch+arg_0], esi
0x6FD49B: jz      short loc_6FD4A7
0x6FD49D: lea     eax, [esi+4]
0x6FD4A0: push    eax; lpAddend
0x6FD4A1: call    dword ptr ds:0A28078h
0x6FD4A7: mov     cx, [esi+18h]
0x6FD4AB: and     cx, 0FFDFh
0x6FD4B0: or      cx, 10h
0x6FD4B4: mov     [esi+18h], cx
0x6FD4B8: and     word ptr [esi+18h], 0FFF7h
0x6FD4BE: push    esi; a2
0x6FD4BF: mov     ecx, ebp; this
0x6FD4C1: mov     [esp+30h+var_4], 3
0x6FD4C9: call    sub_405680
0x6FD4CE: lea     edx, [esi+4]
0x6FD4D1: push    edx; lpAddend
0x6FD4D2: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6FD4DA: call    dword ptr ds:0A2807Ch
0x6FD4E0: test    eax, eax
0x6FD4E2: jnz     short loc_6FD4EE
0x6FD4E4: mov     eax, [esi]
0x6FD4E6: mov     edx, [eax]
0x6FD4E8: push    1
0x6FD4EA: mov     ecx, esi
0x6FD4EC: call    edx
0x6FD4EE: mov     eax, ebp
0x6FD4F0: mov     ecx, dword ptr [esp+2Ch+var_C]
0x6FD4F4: mov     large fs:0, ecx
0x6FD4FB: pop     ecx
0x6FD4FC: pop     edi
0x6FD4FD: pop     esi
0x6FD4FE: pop     ebp
0x6FD4FF: pop     ebx
0x6FD500: add     esp, 18h
0x6FD503: retn
