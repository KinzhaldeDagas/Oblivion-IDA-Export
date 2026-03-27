0x7D92C0: push    esi
0x7D92C1: mov     esi, [esp+4+a1]
0x7D92C5: test    esi, esi
0x7D92C7: jz      loc_7D93D1
0x7D92CD: mov     eax, [esi]
0x7D92CF: mov     edx, [eax+10h]
0x7D92D2: mov     ecx, esi
0x7D92D4: call    edx
0x7D92D6: test    eax, eax
0x7D92D8: mov     ecx, esi
0x7D92DA: jz      loc_7D9367
0x7D92E0: push    4
0x7D92E2: call    NiNode_GetNiPropertyByID
0x7D92E7: mov     esi, eax
0x7D92E9: test    esi, esi
0x7D92EB: jz      loc_7D93D1
0x7D92F1: mov     eax, [esi]
0x7D92F3: mov     edx, [eax+54h]
0x7D92F6: mov     ecx, esi
0x7D92F8: call    edx
0x7D92FA: cmp     eax, 5
0x7D92FD: jl      loc_7D93D1
0x7D9303: mov     eax, [esi]
0x7D9305: mov     edx, [eax+54h]
0x7D9308: mov     ecx, esi
0x7D930A: call    edx
0x7D930C: cmp     eax, 0Ah
0x7D930F: jg      loc_7D93D1
0x7D9315: mov     cl, byte ptr [esp+4+a4]
0x7D9319: mov     al, cl
0x7D931B: neg     al
0x7D931D: mov     byte ptr [esi+0E4h], 0
0x7D9324: sbb     eax, eax
0x7D9326: and     eax, 8000h
0x7D932B: add     eax, 8000h
0x7D9330: cmp     byte ptr [esp+4+a2], 0
0x7D9335: jz      short loc_7D933C
0x7D9337: or      [esi+1Ch], eax
0x7D933A: jmp     short loc_7D9341
0x7D933C: not     eax
0x7D933E: and     [esi+1Ch], eax
0x7D9341: test    cl, cl
0x7D9343: fld     [esp+4+a3]
0x7D9347: fstp    dword ptr [esi+0E8h]
0x7D934D: mov     dword ptr [esi+24h], 0
0x7D9354: jz      short loc_7D93D1
0x7D9356: fld     [esp+4+a5]
0x7D935A: call    Double_To_SInt32
0x7D935F: mov     [esi+0ECh], eax
0x7D9365: pop     esi
0x7D9366: retn
0x7D9367: mov     edx, [esi]
0x7D9369: mov     eax, [edx+8]
0x7D936C: push    edi
0x7D936D: call    eax
0x7D936F: mov     edi, eax
0x7D9371: test    edi, edi
0x7D9373: jz      short loc_7D93D0
0x7D9375: push    ebp
0x7D9376: movzx   ebp, word ptr [edi+0B6h]
0x7D937D: xor     esi, esi
0x7D937F: test    ebp, ebp
0x7D9381: jbe     short loc_7D93CF
0x7D9383: push    ebx
0x7D9384: mov     ebx, [esp+10h+a4]
0x7D9388: jmp     short loc_7D9390
0x7D938A: align 10h
0x7D9390: movzx   ecx, word ptr [edi+0B6h]
0x7D9397: cmp     ecx, esi
0x7D9399: jbe     short loc_7D93C7
0x7D939B: mov     edx, [edi+0B0h]
0x7D93A1: mov     eax, [edx+esi*4]
0x7D93A4: test    eax, eax
0x7D93A6: jz      short loc_7D93C7
0x7D93A8: fld     [esp+10h+a5]
0x7D93AC: push    ecx
0x7D93AD: fstp    [esp+14h+var_14]; a5
0x7D93B0: push    ebx; a4
0x7D93B1: fld     [esp+18h+a3]
0x7D93B5: push    ecx
0x7D93B6: mov     ecx, [esp+1Ch+a2]
0x7D93BA: fstp    [esp+1Ch+var_1C]; a3
0x7D93BD: push    ecx; a2
0x7D93BE: push    eax; a1
0x7D93BF: call    sub_7D92C0
0x7D93C4: add     esp, 14h
0x7D93C7: add     esi, 1
0x7D93CA: cmp     esi, ebp
0x7D93CC: jb      short loc_7D9390
0x7D93CE: pop     ebx
0x7D93CF: pop     ebp
0x7D93D0: pop     edi
0x7D93D1: pop     esi
0x7D93D2: retn
