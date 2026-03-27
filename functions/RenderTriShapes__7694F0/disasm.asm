0x7694F0: sub     esp, 14h
0x7694F3: push    ebp
0x7694F4: mov     ebp, ecx
0x7694F6: cmp     byte ptr [ebp+6F0h], 0
0x7694FD: mov     [esp+18h+var_14], ebp
0x769501: jnz     loc_7696F3
0x769507: push    esi
0x769508: mov     esi, [esp+1Ch+arg_0]
0x76950C: mov     ecx, [esi+0B4h]
0x769512: mov     eax, [ecx]
0x769514: mov     edx, [eax+50h]
0x769517: mov     [esp+1Ch+var_4], ecx
0x76951B: call    edx
0x76951D: test    ax, ax
0x769520: jz      loc_7696F2
0x769526: mov     eax, [esi+0B8h]
0x76952C: push    ebx
0x76952D: push    edi
0x76952E: push    0
0x769530: push    esi
0x769531: mov     ecx, ebp
0x769533: mov     [esp+2Ch+arg_0], eax
0x769537: call    sub_768890
0x76953C: mov     ecx, [esi+0B4h]
0x769542: mov     esi, [esi+0BCh]
0x769548: mov     edi, [ecx+38h]
0x76954B: push    esi
0x76954C: push    offset NiD3DShaderInterfaceString
0x769551: mov     bl, al
0x769553: call    NiRTTI_Cast
0x769558: mov     edx, [eax]
0x76955A: mov     [esp+2Ch+var_C], eax
0x76955E: mov     ecx, eax
0x769560: mov     eax, [edx+48h]
0x769563: add     esp, 8
0x769566: call    eax
0x769568: mov     ecx, [ebp+8ACh]
0x76956E: mov     ecx, [ecx+0FF0h]
0x769574: mov     edx, [ecx]
0x769576: mov     eax, [edx+4]
0x769579: call    eax
0x76957B: test    bl, bl
0x76957D: jz      loc_76965E
0x769583: mov     ecx, [esp+24h+arg_0]
0x769587: mov     eax, [ecx+0Ch]
0x76958A: mov     ecx, [eax+8]; void *
0x76958D: mov     eax, [eax+0Ch]
0x769590: xor     edx, edx
0x769592: cmp     [eax+22h], dx
0x769596: setnz   dl
0x769599: add     edx, 4
0x76959C: test    ecx, ecx
0x76959E: mov     [esp+24h+var_8], edx
0x7695A2: jbe     loc_7696E6
0x7695A8: lea     esi, [eax+20h]
0x7695AB: mov     [esp+24h+arg_0], esi
0x7695AF: mov     [esp+24h+var_10], ecx
0x7695B3: mov     eax, [esp+24h+var_C]
0x7695B7: cmp     eax, [ebp+0A94h]
0x7695BD: jnz     short loc_7695DA
0x7695BF: movzx   eax, word ptr [esi]
0x7695C2: cmp     eax, [ebp+6D8h]
0x7695C8: jbe     short loc_7695DA
0x7695CA: push    eax
0x7695CB: push    offset aDrawskinnedpri; "DrawSkinnedPrimitive> Cannot render par"...
0x7695D0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7695D5: add     esp, 8
0x7695D8: jmp     short loc_769638
0x7695DA: mov     ebx, [esi+8]
0x7695DD: xor     ebp, ebp
0x7695DF: xor     edi, edi
0x7695E1: cmp     [ebx+44h], ebp
0x7695E4: jbe     short loc_769634
0x7695E6: mov     eax, [ebx+48h]
0x7695E9: test    eax, eax
0x7695EB: jz      short loc_7695F6
0x7695ED: movzx   esi, word ptr [eax+ebp*2]
0x7695F1: sub     esi, 2
0x7695F4: jmp     short loc_7695F9
0x7695F6: mov     esi, [ebx+3Ch]
0x7695F9: mov     ecx, [esp+24h+var_14]
0x7695FD: mov     eax, [ecx+280h]
0x769603: mov     ecx, [esp+24h+arg_0]
0x769607: movzx   ecx, word ptr [ecx-4]
0x76960B: mov     edx, [eax]
0x76960D: mov     edx, [edx+148h]
0x769613: push    esi
0x769614: push    edi
0x769615: push    ecx
0x769616: mov     ecx, [ebx+34h]
0x769619: push    0
0x76961B: push    ecx
0x76961C: mov     ecx, [esp+38h+var_8]
0x769620: push    ecx
0x769621: push    eax
0x769622: call    edx
0x769624: add     ebp, 1
0x769627: cmp     ebp, [ebx+44h]
0x76962A: lea     edi, [edi+esi+2]
0x76962E: jb      short loc_7695E6
0x769630: mov     esi, [esp+24h+arg_0]
0x769634: mov     ebp, [esp+24h+var_14]
0x769638: add     esi, 2Ch ; ','
0x76963B: sub     [esp+24h+var_10], 1
0x769640: mov     [esp+24h+arg_0], esi
0x769644: jnz     loc_7695B3
0x76964A: mov     eax, [esp+24h+var_4]
0x76964E: and     word ptr [eax+2Eh], 0F000h
0x769654: pop     edi
0x769655: pop     ebx
0x769656: pop     esi
0x769657: pop     ebp
0x769658: add     esp, 14h
0x76965B: retn    4
0x76965E: cmp     dword ptr [edi+30h], 0
0x769662: jz      short loc_7696C8
0x769664: xor     esi, esi
0x769666: xor     ebp, ebp
0x769668: cmp     [edi+44h], esi
0x76966B: jbe     short loc_7696E6
0x76966D: lea     ecx, [ecx+0]
0x769670: mov     eax, [edi+48h]
0x769673: test    eax, eax
0x769675: jz      short loc_769680
0x769677: movzx   ebx, word ptr [eax+esi*2]
0x76967B: sub     ebx, 2
0x76967E: jmp     short loc_769683
0x769680: mov     ebx, [edi+3Ch]
0x769683: mov     edx, [edi+14h]
0x769686: mov     eax, [esp+24h+var_14]
0x76968A: mov     eax, [eax+280h]
0x769690: mov     ecx, [eax]
0x769692: push    ebx
0x769693: push    ebp
0x769694: push    edx
0x769695: mov     edx, [edi+34h]
0x769698: push    0
0x76969A: push    edx
0x76969B: mov     edx, [edi+38h]
0x76969E: push    edx
0x76969F: push    eax
0x7696A0: mov     eax, [ecx+148h]
0x7696A6: call    eax
0x7696A8: add     esi, 1
0x7696AB: cmp     esi, [edi+44h]
0x7696AE: lea     ebp, [ebx+ebp+2]
0x7696B2: jb      short loc_769670
0x7696B4: mov     eax, [esp+24h+var_4]
0x7696B8: and     word ptr [eax+2Eh], 0F000h
0x7696BE: pop     edi
0x7696BF: pop     ebx
0x7696C0: pop     esi
0x7696C1: pop     ebp
0x7696C2: add     esp, 14h
0x7696C5: retn    4
0x7696C8: mov     edx, [edi+3Ch]
0x7696CB: mov     eax, [edi+34h]
0x7696CE: mov     ebp, [ebp+280h]
0x7696D4: mov     ecx, [ebp+0]
0x7696D7: push    edx
0x7696D8: mov     edx, [edi+38h]
0x7696DB: push    eax
0x7696DC: mov     eax, [ecx+144h]
0x7696E2: push    edx
0x7696E3: push    ebp
0x7696E4: call    eax
0x7696E6: mov     eax, [esp+24h+var_4]
0x7696EA: and     word ptr [eax+2Eh], 0F000h
0x7696F0: pop     edi
0x7696F1: pop     ebx
0x7696F2: pop     esi
0x7696F3: pop     ebp
0x7696F4: add     esp, 14h
0x7696F7: retn    4
