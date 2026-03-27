0x7AB1D0: push    0FFFFFFFFh
0x7AB1D2: push    offset SEH_7AB1D0
0x7AB1D7: mov     eax, large fs:0
0x7AB1DD: push    eax
0x7AB1DE: sub     esp, 40h
0x7AB1E1: push    ebx
0x7AB1E2: push    ebp
0x7AB1E3: push    esi
0x7AB1E4: push    edi
0x7AB1E5: mov     eax, ds:0B30AACh
0x7AB1EA: xor     eax, esp
0x7AB1EC: push    eax
0x7AB1ED: lea     eax, [esp+60h+var_C]
0x7AB1F1: mov     large fs:0, eax
0x7AB1F7: cmp     byte ptr [esp+60h+arg_0], 0
0x7AB1FC: jz      loc_7AB68E
0x7AB202: push    1Ch; Size
0x7AB204: call    FormHeapAlloc
0x7AB209: mov     esi, eax
0x7AB20B: add     esp, 4
0x7AB20E: mov     [esp+60h+arg_0], esi
0x7AB212: xor     ebp, ebp
0x7AB214: cmp     esi, ebp
0x7AB216: mov     [esp+60h+var_4], ebp
0x7AB21A: jz      short loc_7AB235
0x7AB21C: mov     ecx, esi; this
0x7AB21E: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7AB223: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x7AB229: mov     word ptr [esi+18h], 8
0x7AB22F: mov     [esp+60h+a2], esi
0x7AB233: jmp     short loc_7AB23B
0x7AB235: mov     [esp+60h+a2], ebp
0x7AB239: mov     esi, ebp
0x7AB23B: cmp     esi, ebp
0x7AB23D: mov     ebx, ds:0A28078h
0x7AB243: mov     [esp+60h+var_30], esi
0x7AB247: jz      short loc_7AB24F
0x7AB249: lea     eax, [esi+4]
0x7AB24C: push    eax; lpAddend
0x7AB24D: call    ebx ; InterlockedIncrement
0x7AB24F: and     word ptr [esi+18h], 0FFC7h
0x7AB255: push    1Ch; Size
0x7AB257: mov     [esp+64h+var_4], 1
0x7AB25F: call    FormHeapAlloc
0x7AB264: mov     esi, eax
0x7AB266: add     esp, 4
0x7AB269: mov     [esp+60h+arg_0], esi
0x7AB26D: cmp     esi, ebp
0x7AB26F: mov     byte ptr [esp+60h+var_4], 2
0x7AB274: jz      short loc_7AB28F
0x7AB276: mov     ecx, esi; this
0x7AB278: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7AB27D: mov     dword ptr [esi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x7AB283: mov     word ptr [esi+18h], 0Fh
0x7AB289: mov     [esp+60h+var_48], esi
0x7AB28D: jmp     short loc_7AB295
0x7AB28F: mov     [esp+60h+var_48], ebp
0x7AB293: mov     esi, ebp
0x7AB295: cmp     esi, ebp
0x7AB297: mov     [esp+60h+var_2C], esi
0x7AB29B: jz      short loc_7AB2A3
0x7AB29D: lea     ecx, [esi+4]
0x7AB2A0: push    ecx; lpAddend
0x7AB2A1: call    ebx ; InterlockedIncrement
0x7AB2A3: mov     edi, 0FFFEh
0x7AB2A8: and     [esi+18h], di
0x7AB2AC: and     word ptr [esi+18h], 0FFFDh
0x7AB2B2: push    1Ch; Size
0x7AB2B4: mov     byte ptr [esp+64h+var_4], 3
0x7AB2B9: call    FormHeapAlloc
0x7AB2BE: mov     esi, eax
0x7AB2C0: add     esp, 4
0x7AB2C3: mov     [esp+60h+arg_0], esi
0x7AB2C7: cmp     esi, ebp
0x7AB2C9: mov     byte ptr [esp+60h+var_4], 4
0x7AB2CE: jz      short loc_7AB2ED
0x7AB2D0: mov     ecx, esi; this
0x7AB2D2: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7AB2D7: mov     dword ptr [esi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x7AB2DD: mov     word ptr [esi+18h], 0ECh ; 'ì'
0x7AB2E3: mov     byte ptr [esi+1Ah], 0
0x7AB2E7: mov     [esp+60h+var_4C], esi
0x7AB2EB: jmp     short loc_7AB2F3
0x7AB2ED: mov     [esp+60h+var_4C], ebp
0x7AB2F1: mov     esi, ebp
0x7AB2F3: cmp     esi, ebp
0x7AB2F5: mov     [esp+60h+var_28], esi
0x7AB2F9: jz      short loc_7AB301
0x7AB2FB: lea     edx, [esi+4]
0x7AB2FE: push    edx; lpAddend
0x7AB2FF: call    ebx ; InterlockedIncrement
0x7AB301: and     [esi+18h], di
0x7AB305: mov     ebx, offset unk_B2DE04
0x7AB30A: mov     byte ptr [esp+60h+var_4], 5
0x7AB30F: mov     [esp+60h+arg_0], ebp
0x7AB313: mov     [esp+60h+var_40], ebx
0x7AB317: jmp     short loc_7AB326
0x7AB319: align 10h
0x7AB320: mov     ebx, [esp+60h+var_40]
0x7AB324: xor     ebp, ebp
0x7AB326: push    0C0h ; 'À'; Size
0x7AB32B: call    FormHeapAlloc
0x7AB330: mov     esi, eax
0x7AB332: add     esp, 4
0x7AB335: mov     [esp+60h+var_34], esi
0x7AB339: cmp     esi, ebp
0x7AB33B: mov     byte ptr [esp+60h+var_4], 6
0x7AB340: jz      short loc_7AB394
0x7AB342: push    70h ; 'p'; Size
0x7AB344: call    FormHeapAlloc
0x7AB349: add     esp, 4
0x7AB34C: mov     [esp+60h+var_38], eax
0x7AB350: cmp     eax, ebp
0x7AB352: mov     byte ptr [esp+60h+var_4], 7
0x7AB357: jz      short loc_7AB381
0x7AB359: push    1; a10
0x7AB35B: push    2; a9
0x7AB35D: push    1; a8
0x7AB35F: push    4; a7
0x7AB361: push    1; a6
0x7AB363: push    1; a5
0x7AB365: push    1; a4
0x7AB367: push    ebp; a3
0x7AB368: push    ebp; a2
0x7AB369: mov     ecx, eax; this
0x7AB36B: call    NiScreenElementsData__Construct
0x7AB370: push    eax; a2
0x7AB371: mov     ecx, esi; this
0x7AB373: mov     byte ptr [esp+64h+var_4], 6
0x7AB378: call    NiScreenElements__NiScreenElements
0x7AB37D: mov     esi, eax
0x7AB37F: jmp     short loc_7AB396
0x7AB381: xor     eax, eax
0x7AB383: push    eax; a2
0x7AB384: mov     ecx, esi; this
0x7AB386: mov     byte ptr [esp+64h+var_4], 6
0x7AB38B: call    NiScreenElements__NiScreenElements
0x7AB390: mov     esi, eax
0x7AB392: jmp     short loc_7AB396
0x7AB394: xor     esi, esi
0x7AB396: cmp     esi, ebp
0x7AB398: mov     [esp+60h+var_24], esi
0x7AB39C: jz      short loc_7AB3A8
0x7AB39E: lea     eax, [esi+4]
0x7AB3A1: push    eax; lpAddend
0x7AB3A2: call    dword ptr ds:0A28078h
0x7AB3A8: mov     ecx, [esi+0B4h]; this
0x7AB3AE: push    ebp; Src
0x7AB3AF: push    ebp; a3
0x7AB3B0: push    4; a2
0x7AB3B2: mov     byte ptr [esp+6Ch+var_4], 8
0x7AB3B7: call    sub_702970
0x7AB3BC: fld1
0x7AB3BE: mov     ecx, [esi+0B4h]; this
0x7AB3C4: sub     esp, 10h
0x7AB3C7: fst     [esp+70h+a6]; a6
0x7AB3CB: fstp    [esp+70h+a5]; a5
0x7AB3CF: fldz
0x7AB3D1: fst     [esp+70h+a4]; a4
0x7AB3D5: fstp    [esp+70h+a3]; a3
0x7AB3D8: push    ebp; a2
0x7AB3D9: call    sub_702EC0
0x7AB3DE: mov     ecx, [esi+0B4h]; this
0x7AB3E4: call    sub_703050
0x7AB3E9: fld1
0x7AB3EB: mov     ecx, [esi+0B4h]; this
0x7AB3F1: sub     esp, 10h
0x7AB3F4: fst     [esp+70h+a6]; a7
0x7AB3F8: fstp    [esp+70h+a5]; a6
0x7AB3FC: fldz
0x7AB3FE: fst     [esp+70h+a4]; a5
0x7AB402: fstp    [esp+70h+a3]; a4
0x7AB405: push    ebp; a3
0x7AB406: push    ebp; a2
0x7AB407: call    sub_702FC0
0x7AB40C: push    24h ; '$'; Size
0x7AB40E: call    FormHeapAlloc
0x7AB413: mov     edi, eax
0x7AB415: add     esp, 4
0x7AB418: mov     [esp+60h+var_34], edi
0x7AB41C: cmp     edi, ebp
0x7AB41E: mov     byte ptr [esp+60h+var_4], 9
0x7AB423: jz      short loc_7AB444
0x7AB425: mov     ecx, edi; this
0x7AB427: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7AB42C: mov     dword ptr [edi], offset ??_7NiStencilProperty@@6B@; const NiStencilProperty::`vftable'
0x7AB432: mov     [edi+1Ch], ebp
0x7AB435: mov     dword ptr [edi+20h], 0FFFFFFFFh
0x7AB43C: mov     word ptr [edi+18h], 4180h
0x7AB442: jmp     short loc_7AB446
0x7AB444: xor     edi, edi
0x7AB446: cmp     edi, ebp
0x7AB448: mov     [esp+60h+var_20], edi
0x7AB44C: jz      short loc_7AB458
0x7AB44E: lea     ecx, [edi+4]
0x7AB451: push    ecx; lpAddend
0x7AB452: call    dword ptr ds:0A28078h
0x7AB458: mov     eax, [esp+60h+arg_0]
0x7AB45C: or      word ptr [edi+18h], 1
0x7AB461: cmp     eax, 10h
0x7AB464: mov     byte ptr [esp+60h+var_4], 0Ah
0x7AB469: jge     short loc_7AB47F
0x7AB46B: mov     dx, [edi+18h]
0x7AB46F: and     dx, 0FFFh
0x7AB474: or      dx, 2000h
0x7AB479: mov     [edi+18h], dx
0x7AB47D: jmp     short loc_7AB491
0x7AB47F: mov     cx, [edi+18h]
0x7AB483: and     cx, 0FFFh
0x7AB488: or      cx, 3000h
0x7AB48D: mov     [edi+18h], cx
0x7AB491: and     word ptr [edi+18h], 0FC01h
0x7AB497: add     eax, 1
0x7AB49A: movzx   eax, ax
0x7AB49D: movzx   edx, ax
0x7AB4A0: push    5Ch ; '\'; Size
0x7AB4A2: mov     [edi+1Ch], edx
0x7AB4A5: call    FormHeapAlloc
0x7AB4AA: add     esp, 4
0x7AB4AD: mov     [esp+60h+var_34], eax
0x7AB4B1: cmp     eax, ebp
0x7AB4B3: mov     byte ptr [esp+60h+var_4], 0Bh
0x7AB4B8: jz      short loc_7AB4C3
0x7AB4BA: mov     ecx, eax; this
0x7AB4BC: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x7AB4C1: mov     ebp, eax
0x7AB4C3: test    ebp, ebp
0x7AB4C5: mov     [esp+60h+var_1C], ebp
0x7AB4C9: jz      short loc_7AB4D5
0x7AB4CB: lea     eax, [ebp+4]
0x7AB4CE: push    eax; lpAddend
0x7AB4CF: call    dword ptr ds:0A28078h
0x7AB4D5: fld     dword ptr [ebx-4]
0x7AB4D8: fstp    [esp+60h+var_3C]
0x7AB4DC: push    edi; a2
0x7AB4DD: fld     dword ptr [ebx]
0x7AB4DF: mov     byte ptr [esp+64h+var_4], 0Ch
0x7AB4E4: fstp    [esp+64h+var_38]
0x7AB4E8: fld     dword ptr [ebx+4]
0x7AB4EB: add     dword ptr [ebp+54h], 1
0x7AB4EF: fstp    [esp+64h+var_34]
0x7AB4F3: fld     [esp+64h+var_3C]
0x7AB4F7: fstp    [esp+64h+var_18]
0x7AB4FB: mov     ecx, [esp+64h+var_18]
0x7AB4FF: fld     [esp+64h+var_38]
0x7AB503: mov     [ebp+40h], ecx
0x7AB506: fstp    [esp+64h+var_14]
0x7AB50A: mov     edx, [esp+64h+var_14]
0x7AB50E: fld     [esp+64h+var_34]
0x7AB512: mov     [ebp+44h], edx
0x7AB515: fstp    [esp+64h+var_10]
0x7AB519: mov     eax, [esp+64h+var_10]
0x7AB51D: mov     ecx, esi; this
0x7AB51F: mov     [ebp+48h], eax
0x7AB522: call    sub_405680
0x7AB527: push    ebp; a2
0x7AB528: mov     ecx, esi; this
0x7AB52A: call    sub_405680
0x7AB52F: mov     ecx, [esp+60h+a2]
0x7AB533: push    ecx; a2
0x7AB534: mov     ecx, esi; this
0x7AB536: call    sub_405680
0x7AB53B: mov     edx, [esp+60h+var_48]
0x7AB53F: push    edx; a2
0x7AB540: mov     ecx, esi; this
0x7AB542: call    sub_405680
0x7AB547: mov     eax, [esp+60h+var_4C]
0x7AB54B: push    eax; a2
0x7AB54C: mov     ecx, esi; this
0x7AB54E: call    sub_405680
0x7AB553: mov     ecx, esi; this
0x7AB555: call    NiAVObject_InitializePropertyState
0x7AB55A: fldz
0x7AB55C: push    1; a3
0x7AB55E: push    ecx
0x7AB55F: mov     ecx, esi; this
0x7AB561: fstp    [esp+68h+a5]; a2
0x7AB564: call    NiAVObject_UpdateNiAVObject
0x7AB569: mov     ecx, [esp+60h+arg_0]
0x7AB56D: mov     ebx, ds:0B42CF8h[ecx*4]
0x7AB574: cmp     ebx, esi
0x7AB576: jz      short loc_7AB5AD
0x7AB578: test    ebx, ebx
0x7AB57A: jz      short loc_7AB598
0x7AB57C: lea     edx, [ebx+4]
0x7AB57F: push    edx; lpAddend
0x7AB580: call    dword ptr ds:0A2807Ch
0x7AB586: test    eax, eax
0x7AB588: jnz     short loc_7AB598
0x7AB58A: test    ebx, ebx
0x7AB58C: jz      short loc_7AB598
0x7AB58E: mov     eax, [ebx]
0x7AB590: mov     edx, [eax]
0x7AB592: push    1
0x7AB594: mov     ecx, ebx
0x7AB596: call    edx
0x7AB598: mov     eax, [esp+60h+arg_0]
0x7AB59C: lea     ecx, [esi+4]
0x7AB59F: push    ecx; lpAddend
0x7AB5A0: mov     ds:0B42CF8h[eax*4], esi
0x7AB5A7: call    dword ptr ds:0A28078h
0x7AB5AD: mov     ebx, ds:0A2807Ch
0x7AB5B3: lea     edx, [ebp+4]
0x7AB5B6: push    edx; lpAddend
0x7AB5B7: mov     byte ptr [esp+64h+var_4], 0Ah
0x7AB5BC: call    ebx ; InterlockedDecrement
0x7AB5BE: test    eax, eax
0x7AB5C0: jnz     short loc_7AB5CD
0x7AB5C2: mov     eax, [ebp+0]
0x7AB5C5: mov     edx, [eax]
0x7AB5C7: push    1
0x7AB5C9: mov     ecx, ebp
0x7AB5CB: call    edx
0x7AB5CD: lea     eax, [edi+4]
0x7AB5D0: push    eax; lpAddend
0x7AB5D1: mov     byte ptr [esp+64h+var_4], 8
0x7AB5D6: call    ebx ; InterlockedDecrement
0x7AB5D8: test    eax, eax
0x7AB5DA: jnz     short loc_7AB5E6
0x7AB5DC: mov     edx, [edi]
0x7AB5DE: mov     eax, [edx]
0x7AB5E0: push    1
0x7AB5E2: mov     ecx, edi
0x7AB5E4: call    eax
0x7AB5E6: lea     ecx, [esi+4]
0x7AB5E9: push    ecx; lpAddend
0x7AB5EA: mov     byte ptr [esp+64h+var_4], 5
0x7AB5EF: call    ebx ; InterlockedDecrement
0x7AB5F1: test    eax, eax
0x7AB5F3: jnz     short loc_7AB5FF
0x7AB5F5: mov     edx, [esi]
0x7AB5F7: mov     eax, [edx]
0x7AB5F9: push    1
0x7AB5FB: mov     ecx, esi
0x7AB5FD: call    eax
0x7AB5FF: mov     eax, [esp+60h+var_40]
0x7AB603: add     [esp+60h+arg_0], 1
0x7AB608: add     eax, 10h
0x7AB60B: cmp     eax, offset dword_B2DF14
0x7AB610: mov     [esp+60h+var_40], eax
0x7AB614: jl      loc_7AB320
0x7AB61A: mov     esi, [esp+60h+var_4C]
0x7AB61E: mov     edi, ds:0A2807Ch
0x7AB624: lea     ecx, [esi+4]
0x7AB627: push    ecx; lpAddend
0x7AB628: mov     byte ptr [esp+64h+var_4], 3
0x7AB62D: call    edi ; InterlockedDecrement
0x7AB62F: test    eax, eax
0x7AB631: jnz     short loc_7AB63D
0x7AB633: mov     edx, [esi]
0x7AB635: mov     eax, [edx]
0x7AB637: push    1
0x7AB639: mov     ecx, esi
0x7AB63B: call    eax
0x7AB63D: mov     esi, [esp+60h+var_48]
0x7AB641: lea     ecx, [esi+4]
0x7AB644: push    ecx; lpAddend
0x7AB645: mov     byte ptr [esp+64h+var_4], 1
0x7AB64A: call    edi ; InterlockedDecrement
0x7AB64C: test    eax, eax
0x7AB64E: jnz     short loc_7AB65A
0x7AB650: mov     edx, [esi]
0x7AB652: mov     eax, [edx]
0x7AB654: push    1
0x7AB656: mov     ecx, esi
0x7AB658: call    eax
0x7AB65A: mov     esi, [esp+60h+a2]
0x7AB65E: lea     ecx, [esi+4]
0x7AB661: push    ecx; lpAddend
0x7AB662: mov     [esp+64h+var_4], 0FFFFFFFFh
0x7AB66A: call    edi ; InterlockedDecrement
0x7AB66C: test    eax, eax
0x7AB66E: jnz     short loc_7AB6CF
0x7AB670: mov     edx, [esi]
0x7AB672: mov     eax, [edx]
0x7AB674: push    1
0x7AB676: mov     ecx, esi
0x7AB678: call    eax
0x7AB67A: mov     ecx, [esp+60h+var_C]
0x7AB67E: mov     large fs:0, ecx
0x7AB685: pop     ecx
0x7AB686: pop     edi
0x7AB687: pop     esi
0x7AB688: pop     ebp
0x7AB689: pop     ebx
0x7AB68A: add     esp, 4Ch
0x7AB68D: retn
0x7AB68E: mov     ebx, ds:0A2807Ch
0x7AB694: mov     edi, offset dword_B42CF8
0x7AB699: lea     esp, [esp+0]
0x7AB6A0: mov     esi, [edi]
0x7AB6A2: test    esi, esi
0x7AB6A4: jz      short loc_7AB6C4
0x7AB6A6: lea     ecx, [esi+4]
0x7AB6A9: push    ecx; lpAddend
0x7AB6AA: call    ebx ; InterlockedDecrement
0x7AB6AC: test    eax, eax
0x7AB6AE: jnz     short loc_7AB6BE
0x7AB6B0: test    esi, esi
0x7AB6B2: jz      short loc_7AB6BE
0x7AB6B4: mov     edx, [esi]
0x7AB6B6: mov     eax, [edx]
0x7AB6B8: push    1
0x7AB6BA: mov     ecx, esi
0x7AB6BC: call    eax
0x7AB6BE: mov     dword ptr [edi], 0
0x7AB6C4: add     edi, 4
0x7AB6C7: cmp     edi, offset unk_B42D3C
0x7AB6CD: jl      short loc_7AB6A0
0x7AB6CF: mov     ecx, [esp+60h+var_C]
0x7AB6D3: mov     large fs:0, ecx
0x7AB6DA: pop     ecx
0x7AB6DB: pop     edi
0x7AB6DC: pop     esi
0x7AB6DD: pop     ebp
0x7AB6DE: pop     ebx
0x7AB6DF: add     esp, 4Ch
0x7AB6E2: retn
