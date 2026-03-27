0x5A95C0: sub     esp, 8
0x5A95C3: push    esi
0x5A95C4: mov     esi, [esp+0Ch+arg_0]
0x5A95C8: push    edi
0x5A95C9: xor     edi, edi
0x5A95CB: cmp     esi, edi
0x5A95CD: mov     [esp+10h+var_8], ecx
0x5A95D1: jz      loc_5A994D
0x5A95D7: mov     eax, [ecx+24h]
0x5A95DA: sub     eax, 2
0x5A95DD: jz      short loc_5A95EB
0x5A95DF: sub     eax, 2
0x5A95E2: jnz     short loc_5A95F0
0x5A95E4: call    sub_584390
0x5A95E9: jmp     short loc_5A95F0
0x5A95EB: call    sub_584820
0x5A95F0: push    ebp; a3
0x5A95F1: push    20h ; ' '; Size
0x5A95F3: call    FormHeapAlloc
0x5A95F8: add     esp, 4
0x5A95FB: cmp     eax, edi
0x5A95FD: jz      short loc_5A9623
0x5A95FF: mov     [eax], edi
0x5A9601: mov     [eax+4], di
0x5A9605: mov     [eax+6], di
0x5A9609: mov     [eax+10h], edi
0x5A960C: mov     [eax+14h], di
0x5A9610: mov     [eax+16h], di
0x5A9614: mov     [eax+18h], edi
0x5A9617: mov     [eax+1Ch], di
0x5A961B: mov     [eax+1Eh], di
0x5A961F: mov     ebp, eax
0x5A9621: jmp     short loc_5A9625
0x5A9623: xor     ebp, ebp
0x5A9625: push    edi; a3
0x5A9626: push    edi; a2
0x5A9627: mov     ecx, ebp; this
0x5A9629: call    BSStringT_Set
0x5A962E: push    esi
0x5A962F: mov     ecx, ebp
0x5A9631: call    BSStringT_Append
0x5A9636: mov     eax, esi
0x5A9638: lea     edx, [eax+1]
0x5A963B: jmp     short loc_5A9640
0x5A963D: align 10h
0x5A9640: mov     cl, [eax]
0x5A9642: add     eax, 1
0x5A9645: test    cl, cl
0x5A9647: jnz     short loc_5A9640
0x5A9649: sub     eax, edx
0x5A964B: test    eax, eax
0x5A964D: mov     [esp+14h+var_4], eax
0x5A9651: fild    [esp+14h+var_4]
0x5A9655: jge     short loc_5A965D
0x5A9657: fadd    qword ptr ds:0A30E60h
0x5A965D: fld     qword ptr ds:0A46E48h
0x5A9663: fdiv    st(1), st
0x5A9665: fld1
0x5A9667: fadd    st(2), st
0x5A9669: fld     qword ptr ds:0A30E48h
0x5A966F: fcom    st(3)
0x5A9671: fnstsw  ax
0x5A9673: fstp    st(3)
0x5A9675: test    ah, 5
0x5A9678: jp      short loc_5A96A4
0x5A967A: mov     eax, esi
0x5A967C: fstp    st(2)
0x5A967E: lea     edx, [eax+1]
0x5A9681: mov     cl, [eax]
0x5A9683: add     eax, 1
0x5A9686: test    cl, cl
0x5A9688: jnz     short loc_5A9681
0x5A968A: sub     eax, edx
0x5A968C: test    eax, eax
0x5A968E: mov     [esp+14h+var_4], eax
0x5A9692: fild    [esp+14h+var_4]
0x5A9696: jge     short loc_5A969E
0x5A9698: fadd    qword ptr ds:0A30E60h
0x5A969E: fdivrp  st(1), st
0x5A96A0: faddp   st(1), st
0x5A96A2: jmp     short loc_5A96A8
0x5A96A4: fstp    st(1)
0x5A96A6: fstp    st
0x5A96A8: mov     eax, [esp+14h+a2]
0x5A96AC: fstp    dword ptr [ebp+8]
0x5A96AF: push    ebx; a3
0x5A96B0: push    edi; a3
0x5A96B1: push    eax; a2
0x5A96B2: lea     ecx, [ebp+10h]; this
0x5A96B5: mov     byte ptr [ebp+0Ch], 0
0x5A96B9: call    BSStringT_Set
0x5A96BE: mov     ebx, [esp+18h+arg_C]
0x5A96C2: cmp     ebx, edi
0x5A96C4: push    edi; a3
0x5A96C5: lea     ecx, [ebp+18h]; this
0x5A96C8: jz      short loc_5A96CD
0x5A96CA: push    ebx
0x5A96CB: jmp     short loc_5A96CE
0x5A96CD: push    edi; a2
0x5A96CE: call    BSStringT_Set
0x5A96D3: mov     edi, [esp+18h+var_8]
0x5A96D7: add     edi, 2Ch ; ','
0x5A96DA: mov     esi, edi
0x5A96DC: jz      short loc_5A971F
0x5A96DE: mov     edi, edi
0x5A96E0: mov     eax, [esi+4]
0x5A96E3: test    eax, eax
0x5A96E5: mov     ecx, [esi]
0x5A96E7: jz      short loc_5A9718
0x5A96E9: mov     edx, [eax]
0x5A96EB: mov     eax, [edx]
0x5A96ED: test    eax, eax
0x5A96EF: jz      short loc_5A9703
0x5A96F1: mov     ecx, [ecx]
0x5A96F3: test    ecx, ecx
0x5A96F5: jz      short loc_5A9703
0x5A96F7: push    eax; Str2
0x5A96F8: push    ecx; Str1
0x5A96F9: call    __strcmp
0x5A96FE: add     esp, 8
0x5A9701: jmp     short loc_5A9710
0x5A9703: xor     ecx, ecx
0x5A9705: test    eax, eax
0x5A9707: setz    cl
0x5A970A: lea     ecx, [ecx+ecx-1]
0x5A970E: mov     eax, ecx
0x5A9710: test    eax, eax
0x5A9712: jz      loc_5A97E1
0x5A9718: mov     esi, [esi+4]
0x5A971B: test    esi, esi
0x5A971D: jnz     short loc_5A96E0
0x5A971F: cmp     dword ptr [edi+4], 0
0x5A9723: jnz     loc_5A9827
0x5A9729: cmp     dword ptr [edi], 0
0x5A972C: jnz     loc_5A9827
0x5A9732: push    ebp
0x5A9733: mov     ecx, edi
0x5A9735: call    BSSimpleList_PushBack
0x5A973A: mov     edx, [edi]
0x5A973C: mov     ebp, [esp+18h+var_8]
0x5A9740: mov     byte ptr [edx+0Ch], 1
0x5A9744: mov     eax, [edi]
0x5A9746: mov     ecx, [eax]
0x5A9748: push    ecx
0x5A9749: mov     ecx, [ebp+34h]
0x5A974C: push    0FDEh
0x5A9751: call    Tile_SetString
0x5A9756: fld     dword ptr ds:0A379B4h
0x5A975C: push    ecx
0x5A975D: mov     ecx, [ebp+34h]; this
0x5A9760: fstp    [esp+1Ch+var_1C]; a3
0x5A9763: push    0FA1h; a2
0x5A9768: call    Tile_SetFloat
0x5A976D: mov     edx, [edi]
0x5A976F: mov     eax, [edx+10h]
0x5A9772: mov     ecx, [ebp+34h]
0x5A9775: push    eax
0x5A9776: push    0FAFh
0x5A977B: call    Tile_SetString
0x5A9780: test    ebx, ebx
0x5A9782: jz      short loc_5A97AF
0x5A9784: mov     ecx, ds:0B333C4h
0x5A978A: push    0
0x5A978C: push    121h
0x5A9791: push    0
0x5A9793: push    ebx
0x5A9794: call    sub_65A970
0x5A9799: mov     esi, eax
0x5A979B: test    esi, esi
0x5A979D: jz      short loc_5A97AF
0x5A979F: mov     ecx, esi; this
0x5A97A1: call    sub_6B73E0
0x5A97A6: push    esi
0x5A97A7: call    FormHeapFree
0x5A97AC: add     esp, 4
0x5A97AF: mov     ecx, [edi]
0x5A97B1: cmp     dword ptr [ecx+10h], 0
0x5A97B5: push    ecx
0x5A97B6: mov     ecx, [ebp+34h]; this
0x5A97B9: jnz     short loc_5A97FD
0x5A97BB: fld1
0x5A97BD: fstp    [esp+1Ch+var_1C]; a3
0x5A97C0: push    0FB0h; a2
0x5A97C5: call    Tile_SetFloat
0x5A97CA: fld     [esp+18h+arg_4]
0x5A97CE: pop     ebx
0x5A97CF: fstp    dword ptr [ebp+3Ch]
0x5A97D2: mov     byte ptr [ebp+38h], 2
0x5A97D6: pop     ebp
0x5A97D7: pop     edi
0x5A97D8: mov     al, 1
0x5A97DA: pop     esi
0x5A97DB: add     esp, 8
0x5A97DE: retn    10h
0x5A97E1: mov     ecx, ebp
0x5A97E3: call    sub_5A9060
0x5A97E8: push    ebp
0x5A97E9: call    FormHeapFree
0x5A97EE: add     esp, 4
0x5A97F1: pop     ebx
0x5A97F2: pop     ebp
0x5A97F3: pop     edi
0x5A97F4: xor     al, al
0x5A97F6: pop     esi
0x5A97F7: add     esp, 8
0x5A97FA: retn    10h
0x5A97FD: fld     dword ptr ds:0A379B4h
0x5A9803: fstp    [esp+1Ch+var_1C]; a3
0x5A9806: push    0FB0h; a2
0x5A980B: call    Tile_SetFloat
0x5A9810: fld     [esp+18h+arg_4]
0x5A9814: pop     ebx
0x5A9815: fstp    dword ptr [ebp+3Ch]
0x5A9818: mov     byte ptr [ebp+38h], 2
0x5A981C: pop     ebp
0x5A981D: pop     edi
0x5A981E: mov     al, 1
0x5A9820: pop     esi
0x5A9821: add     esp, 8
0x5A9824: retn    10h
0x5A9827: xor     bl, bl
0x5A9829: cmp     edi, [edi+4]
0x5A982C: jnz     loc_5A98FF
0x5A9832: fld     qword ptr ds:0A30E48h
0x5A9838: fld1
0x5A983A: fld     qword ptr ds:0A46E48h
0x5A9840: mov     eax, [ebp+0]
0x5A9843: test    eax, eax
0x5A9845: mov     ecx, [edi]
0x5A9847: jz      short loc_5A986F
0x5A9849: mov     ecx, [ecx]
0x5A984B: test    ecx, ecx
0x5A984D: jz      short loc_5A986F
0x5A984F: fstp    st
0x5A9851: push    eax; Str2
0x5A9852: fstp    st
0x5A9854: push    ecx; Str1
0x5A9855: fstp    st
0x5A9857: call    __strcmp
0x5A985C: fld     qword ptr ds:0A30E48h
0x5A9862: add     esp, 8
0x5A9865: fld1
0x5A9867: fld     qword ptr ds:0A46E48h
0x5A986D: jmp     short loc_5A987C
0x5A986F: xor     edx, edx
0x5A9871: test    eax, eax
0x5A9873: setz    dl
0x5A9876: lea     edx, [edx+edx-1]
0x5A987A: mov     eax, edx
0x5A987C: test    eax, eax
0x5A987E: jnz     short loc_5A98EC
0x5A9880: mov     esi, [esp+18h+arg_0]
0x5A9884: mov     eax, esi
0x5A9886: lea     edx, [eax+1]
0x5A9889: mov     cl, [eax]
0x5A988B: add     eax, 1
0x5A988E: test    cl, cl
0x5A9890: jnz     short loc_5A9889
0x5A9892: sub     eax, edx
0x5A9894: test    eax, eax
0x5A9896: mov     [esp+18h+a2], eax
0x5A989A: fild    [esp+18h+a2]
0x5A989E: jge     short loc_5A98A6
0x5A98A0: fadd    qword ptr ds:0A30E60h
0x5A98A6: fdiv    st, st(1)
0x5A98A8: fadd    st, st(2)
0x5A98AA: fcomp   st(3)
0x5A98AC: fnstsw  ax
0x5A98AE: test    ah, 41h
0x5A98B1: jnz     short loc_5A98DB
0x5A98B3: mov     eax, esi
0x5A98B5: lea     edx, [eax+1]
0x5A98B8: mov     cl, [eax]
0x5A98BA: add     eax, 1
0x5A98BD: test    cl, cl
0x5A98BF: jnz     short loc_5A98B8
0x5A98C1: sub     eax, edx
0x5A98C3: test    eax, eax
0x5A98C5: mov     [esp+18h+a2], eax
0x5A98C9: fild    [esp+18h+a2]
0x5A98CD: jge     short loc_5A98D5
0x5A98CF: fadd    qword ptr ds:0A30E60h
0x5A98D5: fdiv    st, st(1)
0x5A98D7: fadd    st, st(2)
0x5A98D9: jmp     short loc_5A98DD
0x5A98DB: fld     st(2)
0x5A98DD: mov     eax, [edi]
0x5A98DF: fstp    [esp+18h+a2]
0x5A98E3: fld     [esp+18h+a2]
0x5A98E7: mov     bl, 1
0x5A98E9: fstp    dword ptr [eax+8]
0x5A98EC: cmp     edi, [edi+4]
0x5A98EF: jz      loc_5A9840
0x5A98F5: test    bl, bl
0x5A98F7: fstp    st
0x5A98F9: fstp    st
0x5A98FB: fstp    st
0x5A98FD: jnz     short loc_5A9922
0x5A98FF: push    ebp
0x5A9900: mov     ecx, edi
0x5A9902: call    BSSimpleList_PushBack
0x5A9907: fld     [esp+18h+arg_4]
0x5A990B: mov     ebp, [esp+18h+var_8]
0x5A990F: pop     ebx
0x5A9910: fstp    dword ptr [ebp+3Ch]
0x5A9913: mov     byte ptr [ebp+38h], 2
0x5A9917: pop     ebp
0x5A9918: pop     edi
0x5A9919: mov     al, 1
0x5A991B: pop     esi
0x5A991C: add     esp, 8
0x5A991F: retn    10h
0x5A9922: mov     ecx, ebp
0x5A9924: call    sub_5A9060
0x5A9929: push    ebp
0x5A992A: call    FormHeapFree
0x5A992F: fld     [esp+1Ch+arg_4]
0x5A9933: mov     ebp, [esp+1Ch+var_8]
0x5A9937: add     esp, 4
0x5A993A: fstp    dword ptr [ebp+3Ch]
0x5A993D: pop     ebx
0x5A993E: mov     byte ptr [ebp+38h], 2
0x5A9942: pop     ebp
0x5A9943: pop     edi
0x5A9944: mov     al, 1
0x5A9946: pop     esi
0x5A9947: add     esp, 8
0x5A994A: retn    10h
0x5A994D: pop     edi
0x5A994E: xor     al, al
0x5A9950: pop     esi
0x5A9951: add     esp, 8
0x5A9954: retn    10h
