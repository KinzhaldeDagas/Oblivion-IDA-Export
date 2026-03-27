0x68D380: push    0FFFFFFFFh
0x68D382: push    offset SEH_68D380
0x68D387: mov     eax, large fs:0
0x68D38D: push    eax
0x68D38E: sub     esp, 14h
0x68D391: push    ebx
0x68D392: push    ebp
0x68D393: push    esi
0x68D394: push    edi
0x68D395: mov     eax, ds:0B30AACh
0x68D39A: xor     eax, esp
0x68D39C: push    eax
0x68D39D: lea     eax, [esp+34h+var_C]
0x68D3A1: mov     large fs:0, eax
0x68D3A7: mov     edi, ecx
0x68D3A9: push    0DCh ; 'Ü'; Size
0x68D3AE: call    FormHeapAlloc
0x68D3B3: add     esp, 4
0x68D3B6: mov     [esp+34h+var_20], eax
0x68D3BA: xor     ebx, ebx
0x68D3BC: cmp     eax, ebx
0x68D3BE: mov     [esp+34h+var_4], ebx
0x68D3C2: jz      short loc_68D3CE
0x68D3C4: push    ebx
0x68D3C5: mov     ecx, eax; this
0x68D3C7: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x68D3CC: mov     ebx, eax
0x68D3CE: mov     esi, [edi+3Ch]
0x68D3D1: or      ebp, 0FFFFFFFFh
0x68D3D4: cmp     esi, ebx
0x68D3D6: mov     [esp+34h+var_4], ebp
0x68D3DA: jz      short loc_68D40D
0x68D3DC: test    esi, esi
0x68D3DE: jz      short loc_68D3FC
0x68D3E0: lea     eax, [esi+4]
0x68D3E3: push    eax; lpAddend
0x68D3E4: call    dword ptr ds:0A2807Ch
0x68D3EA: test    eax, eax
0x68D3EC: jnz     short loc_68D3FC
0x68D3EE: test    esi, esi
0x68D3F0: jz      short loc_68D3FC
0x68D3F2: mov     edx, [esi]
0x68D3F4: mov     eax, [edx]
0x68D3F6: push    1
0x68D3F8: mov     ecx, esi
0x68D3FA: call    eax
0x68D3FC: test    ebx, ebx
0x68D3FE: mov     [edi+3Ch], ebx
0x68D401: jz      short loc_68D40D
0x68D403: add     ebx, 4
0x68D406: push    ebx; lpAddend
0x68D407: call    dword ptr ds:0A28078h
0x68D40D: mov     ecx, [edi+3Ch]
0x68D410: push    offset dword_A7D0EC
0x68D415: call    NiObjectNET_GetExtraData
0x68D41A: mov     esi, eax
0x68D41C: test    esi, esi
0x68D41E: jnz     short loc_68D459
0x68D420: push    10h; Size
0x68D422: call    FormHeapAlloc
0x68D427: add     esp, 4
0x68D42A: mov     [esp+34h+var_20], eax
0x68D42E: test    eax, eax
0x68D430: mov     [esp+34h+var_4], 1
0x68D438: jz      short loc_68D443
0x68D43A: mov     ecx, eax
0x68D43C: call    BSXFlags_constr
0x68D441: jmp     short loc_68D445
0x68D443: xor     eax, eax
0x68D445: mov     ecx, [edi+3Ch]
0x68D448: push    eax
0x68D449: push    offset dword_A7D0EC
0x68D44E: mov     [esp+3Ch+var_4], ebp
0x68D452: mov     esi, eax
0x68D454: call    sub_6FF820
0x68D459: or      dword ptr [esi+0Ch], 1
0x68D45D: mov     ecx, [edi+20h]
0x68D460: test    ecx, ecx
0x68D462: jz      short loc_68D46F
0x68D464: mov     edx, [ecx]
0x68D466: mov     eax, [edx+4]
0x68D469: call    eax
0x68D46B: mov     ebx, eax
0x68D46D: jmp     short loc_68D471
0x68D46F: xor     ebx, ebx
0x68D471: mov     ecx, [edi+24h]
0x68D474: test    ecx, ecx
0x68D476: jz      short loc_68D485
0x68D478: mov     edx, [ecx]
0x68D47A: mov     eax, [edx+20h]
0x68D47D: call    eax
0x68D47F: mov     [esp+34h+var_20], eax
0x68D483: jmp     short loc_68D48D
0x68D485: mov     [esp+34h+var_20], 0
0x68D48D: test    ebx, ebx
0x68D48F: jz      loc_68D6DF
0x68D495: cmp     [esp+34h+var_20], 0
0x68D49A: jz      loc_68D6DF
0x68D4A0: mov     ecx, ebx; this
0x68D4A2: call    TESObjectREFR_GetParentCell
0x68D4A7: push    3
0x68D4A9: push    ebx; TESObjectREFR *
0x68D4AA: call    sub_4C9BE0
0x68D4AF: add     esp, 4
0x68D4B2: push    eax
0x68D4B3: mov     ecx, ebx; this
0x68D4B5: call    TESObjectREFR_GetParentCell
0x68D4BA: mov     ecx, eax
0x68D4BC: call    sub_441800
0x68D4C1: mov     ecx, [edi+3Ch]
0x68D4C4: mov     edx, [eax]
0x68D4C6: mov     edx, [edx+84h]
0x68D4CC: push    1
0x68D4CE: push    ecx
0x68D4CF: mov     ecx, eax
0x68D4D1: call    edx
0x68D4D3: mov     ebp, [edi+48h]
0x68D4D6: test    ebp, ebp
0x68D4D8: lea     esi, [edi+48h]
0x68D4DB: jz      short loc_68D500
0x68D4DD: lea     eax, [ebp+4]
0x68D4E0: push    eax; lpAddend
0x68D4E1: call    dword ptr ds:0A2807Ch
0x68D4E7: test    eax, eax
0x68D4E9: jnz     short loc_68D4FA
0x68D4EB: test    ebp, ebp
0x68D4ED: jz      short loc_68D4FA
0x68D4EF: mov     edx, [ebp+0]
0x68D4F2: mov     eax, [edx]
0x68D4F4: push    1
0x68D4F6: mov     ecx, ebp
0x68D4F8: call    eax
0x68D4FA: mov     dword ptr [esi], 0
0x68D500: mov     eax, [edi+3Ch]
0x68D503: push    1
0x68D505: push    eax
0x68D506: call    sub_7F4D60
0x68D50B: add     esp, 8
0x68D50E: push    eax; a2
0x68D50F: mov     ecx, esi; this
0x68D511: call    NiSmartPointer_Set??
0x68D516: mov     ebp, [esp+34h+var_20]
0x68D51A: mov     edx, [ebp+0]
0x68D51D: mov     eax, [edx+164h]
0x68D523: mov     ecx, ebp
0x68D525: call    eax
0x68D527: test    eax, eax
0x68D529: jz      short loc_68D569
0x68D52B: mov     ecx, [eax+98h]
0x68D531: mov     ecx, [ecx+7Ch]
0x68D534: mov     edx, [ecx]
0x68D536: mov     eax, [edx+4Ch]
0x68D539: push    offset aBip01Spine1; "Bip01 Spine1"
0x68D53E: lea     ebp, [edi+40h]
0x68D541: call    eax
0x68D543: push    eax; a2
0x68D544: mov     ecx, ebp; this
0x68D546: call    NiSmartPointer_Set??
0x68D54B: cmp     dword ptr [ebp+0], 0
0x68D54F: jnz     short loc_68D565
0x68D551: mov     edx, [ebx]
0x68D553: mov     eax, [edx+154h]
0x68D559: mov     ecx, ebx
0x68D55B: call    eax
0x68D55D: push    eax; a2
0x68D55E: mov     ecx, ebp; this
0x68D560: call    NiSmartPointer_Set??
0x68D565: mov     ebp, [esp+34h+var_20]
0x68D569: mov     edx, [ebx]
0x68D56B: mov     eax, [edx+164h]
0x68D571: mov     ecx, ebx
0x68D573: call    eax
0x68D575: test    eax, eax
0x68D577: jz      short loc_68D5B3
0x68D579: mov     ecx, [eax+98h]
0x68D57F: mov     ecx, [ecx+7Ch]
0x68D582: mov     edx, [ecx]
0x68D584: mov     eax, [edx+4Ch]
0x68D587: push    offset aBip01Spine1; "Bip01 Spine1"
0x68D58C: add     edi, 44h ; 'D'
0x68D58F: call    eax
0x68D591: push    eax; a2
0x68D592: mov     ecx, edi; this
0x68D594: call    NiSmartPointer_Set??
0x68D599: cmp     dword ptr [edi], 0
0x68D59C: jnz     short loc_68D5B3
0x68D59E: mov     edx, [ebp+0]
0x68D5A1: mov     eax, [edx+154h]
0x68D5A7: mov     ecx, ebp
0x68D5A9: call    eax
0x68D5AB: push    eax; a2
0x68D5AC: mov     ecx, edi; this
0x68D5AE: call    NiSmartPointer_Set??
0x68D5B3: mov     eax, [esi]
0x68D5B5: test    eax, eax
0x68D5B7: jz      loc_68D6DF
0x68D5BD: fld     dword ptr ds:0B381F8h
0x68D5C3: fstp    dword ptr [eax+13Ch]
0x68D5C9: mov     ecx, [esi]
0x68D5CB: fld     dword ptr ds:0B38200h
0x68D5D1: fstp    dword ptr [ecx+140h]
0x68D5D7: mov     edx, [esi]
0x68D5D9: fld     dword ptr ds:0B38268h
0x68D5DF: fstp    dword ptr [edx+150h]
0x68D5E5: mov     eax, [esi]
0x68D5E7: fld     dword ptr ds:0B38208h
0x68D5ED: fstp    dword ptr [eax+154h]
0x68D5F3: mov     ecx, [esi]
0x68D5F5: fld     dword ptr ds:0B38210h
0x68D5FB: fstp    dword ptr [ecx+15Ch]
0x68D601: mov     edx, [esi]
0x68D603: fld     dword ptr ds:0B38218h
0x68D609: fstp    dword ptr [edx+144h]
0x68D60F: mov     eax, [esi]
0x68D611: fld     dword ptr ds:0B38220h
0x68D617: fstp    dword ptr [eax+148h]
0x68D61D: mov     ecx, [esi]
0x68D61F: mov     edx, ds:0B38228h
0x68D625: mov     [ecx+134h], edx
0x68D62B: fld     dword ptr ds:0B38230h
0x68D631: mov     eax, [esi]
0x68D633: fstp    [esp+34h+var_1C]
0x68D637: fld     dword ptr ds:0B38238h
0x68D63D: mov     ecx, [esp+34h+var_1C]
0x68D641: fstp    [esp+34h+var_18]
0x68D645: mov     edx, [esp+34h+var_18]
0x68D649: fld     dword ptr ds:0B38240h
0x68D64F: mov     [eax+160h], ecx
0x68D655: mov     [eax+164h], edx
0x68D65B: fstp    [esp+34h+var_14]
0x68D65F: fld1
0x68D661: mov     ecx, [esp+34h+var_14]
0x68D665: mov     [eax+168h], ecx
0x68D66B: fst     [esp+34h+var_10]
0x68D66F: mov     edx, [esp+34h+var_10]
0x68D673: mov     [eax+16Ch], edx
0x68D679: fld     dword ptr ds:0B38248h
0x68D67F: add     eax, 160h
0x68D684: fstp    [esp+34h+var_1C]
0x68D688: fld     dword ptr ds:0B38250h
0x68D68E: mov     eax, [esi]
0x68D690: mov     ecx, [esp+34h+var_1C]
0x68D694: fstp    [esp+34h+var_18]
0x68D698: fld     dword ptr ds:0B38258h
0x68D69E: mov     edx, [esp+34h+var_18]
0x68D6A2: mov     [eax+170h], ecx
0x68D6A8: fstp    [esp+34h+var_14]
0x68D6AC: mov     ecx, [esp+34h+var_14]
0x68D6B0: add     eax, 170h
0x68D6B5: fstp    [esp+34h+var_10]
0x68D6B9: mov     [eax+4], edx
0x68D6BC: mov     edx, [esp+34h+var_10]
0x68D6C0: mov     [eax+8], ecx
0x68D6C3: mov     [eax+0Ch], edx
0x68D6C6: mov     eax, [esi]
0x68D6C8: mov     byte ptr [eax+181h], 0
0x68D6CF: mov     ecx, [esi]
0x68D6D1: mov     byte ptr [ecx+183h], 1
0x68D6D8: mov     ecx, [esi]
0x68D6DA: call    sub_7F2EC0
0x68D6DF: mov     ecx, dword ptr [esp+34h+var_C]
0x68D6E3: mov     large fs:0, ecx
0x68D6EA: pop     ecx
0x68D6EB: pop     edi
0x68D6EC: pop     esi
0x68D6ED: pop     ebp
0x68D6EE: pop     ebx
0x68D6EF: add     esp, 20h
0x68D6F2: retn
