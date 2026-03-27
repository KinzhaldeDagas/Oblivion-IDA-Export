0x8033D0: push    0FFFFFFFFh
0x8033D2: push    offset SEH_8033D0
0x8033D7: mov     eax, large fs:0
0x8033DD: push    eax
0x8033DE: sub     esp, 8
0x8033E1: push    ebp
0x8033E2: push    esi
0x8033E3: push    edi
0x8033E4: mov     eax, ds:0B30AACh
0x8033E9: xor     eax, esp
0x8033EB: push    eax
0x8033EC: lea     eax, [esp+24h+var_C]
0x8033F0: mov     large fs:0, eax
0x8033F6: mov     esi, ecx
0x8033F8: push    0C0h ; 'À'; Size
0x8033FD: call    FormHeapAlloc
0x803402: mov     edi, eax
0x803404: add     esp, 4
0x803407: mov     [esp+24h+var_14], edi
0x80340B: test    edi, edi
0x80340D: mov     [esp+24h+var_4], 0
0x803415: jz      short loc_80346A
0x803417: push    70h ; 'p'; Size
0x803419: call    FormHeapAlloc
0x80341E: add     esp, 4
0x803421: mov     [esp+24h+var_10], eax
0x803425: test    eax, eax
0x803427: mov     byte ptr [esp+24h+var_4], 1
0x80342C: jz      short loc_803458
0x80342E: push    1; a10
0x803430: push    2; a9
0x803432: push    1; a8
0x803434: push    4; a7
0x803436: push    1; a6
0x803438: push    1; a5
0x80343A: push    1; a4
0x80343C: push    0; a3
0x80343E: push    0; a2
0x803440: mov     ecx, eax; this
0x803442: call    NiScreenElementsData__Construct
0x803447: push    eax; a2
0x803448: mov     ecx, edi; this
0x80344A: mov     byte ptr [esp+28h+var_4], 0
0x80344F: call    NiScreenElements__NiScreenElements
0x803454: mov     ebp, eax
0x803456: jmp     short loc_80346C
0x803458: xor     eax, eax
0x80345A: push    eax; a2
0x80345B: mov     ecx, edi; this
0x80345D: mov     byte ptr [esp+28h+var_4], al
0x803461: call    NiScreenElements__NiScreenElements
0x803466: mov     ebp, eax
0x803468: jmp     short loc_80346C
0x80346A: xor     ebp, ebp
0x80346C: mov     edi, [esi+10h]
0x80346F: cmp     edi, ebp
0x803471: mov     [esp+24h+var_4], 0FFFFFFFFh
0x803479: jz      short loc_8034AC
0x80347B: test    edi, edi
0x80347D: jz      short loc_80349B
0x80347F: lea     eax, [edi+4]
0x803482: push    eax; lpAddend
0x803483: call    dword ptr ds:0A2807Ch
0x803489: test    eax, eax
0x80348B: jnz     short loc_80349B
0x80348D: test    edi, edi
0x80348F: jz      short loc_80349B
0x803491: mov     edx, [edi]
0x803493: mov     eax, [edx]
0x803495: push    1
0x803497: mov     ecx, edi
0x803499: call    eax
0x80349B: test    ebp, ebp
0x80349D: mov     [esi+10h], ebp
0x8034A0: jz      short loc_8034AC
0x8034A2: add     ebp, 4
0x8034A5: push    ebp; lpAddend
0x8034A6: call    dword ptr ds:0A28078h
0x8034AC: mov     ecx, [esi+10h]
0x8034AF: mov     ecx, [ecx+0B4h]; this
0x8034B5: push    0; Src
0x8034B7: push    0; a3
0x8034B9: push    4; a2
0x8034BB: call    sub_702970
0x8034C0: fld     dword ptr ds:0A53954h
0x8034C6: mov     edx, [esi+10h]
0x8034C9: mov     ecx, [edx+0B4h]; this
0x8034CF: sub     esp, 10h
0x8034D2: fstp    [esp+34h+a6]; a6
0x8034D6: fld     dword ptr ds:0A379B4h
0x8034DC: fstp    [esp+34h+a2]; a5
0x8034E0: fld1
0x8034E2: fstp    [esp+34h+a4]; a4
0x8034E6: fld     dword ptr ds:0A30634h
0x8034EC: fstp    [esp+34h+a3]; a3
0x8034EF: push    0; a2
0x8034F1: call    sub_702EC0
0x8034F6: mov     eax, [esi+10h]
0x8034F9: mov     ecx, [eax+0B4h]; this
0x8034FF: call    sub_703050
0x803504: fld1
0x803506: mov     ecx, [esi+10h]
0x803509: mov     ecx, [ecx+0B4h]; this
0x80350F: sub     esp, 10h
0x803512: fst     [esp+34h+a6]; a7
0x803516: fstp    [esp+34h+a2]; a6
0x80351A: fldz
0x80351C: fst     [esp+34h+a4]; a5
0x803520: fstp    [esp+34h+a3]; a4
0x803523: push    0; a3
0x803525: push    0; a2
0x803527: call    sub_702FC0
0x80352C: mov     ecx, [esi+10h]; this
0x80352F: call    NiAVObject_InitializePropertyState
0x803534: fldz
0x803536: push    1; a3
0x803538: push    ecx
0x803539: mov     ecx, [esi+10h]; this
0x80353C: fstp    [esp+2Ch+a2]; a2
0x80353F: call    NiAVObject_UpdateNiAVObject
0x803544: mov     ecx, dword ptr [esp+24h+var_C]
0x803548: mov     large fs:0, ecx
0x80354F: pop     ecx
0x803550: pop     edi
0x803551: pop     esi
0x803552: pop     ebp
0x803553: add     esp, 14h
0x803556: retn
