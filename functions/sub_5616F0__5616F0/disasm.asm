0x5616F0: push    ebp
0x5616F1: mov     ebp, esp
0x5616F3: and     esp, 0FFFFFFC0h
0x5616F6: push    0FFFFFFFFh
0x5616F8: push    offset SEH_5616F0
0x5616FD: mov     eax, large fs:0
0x561703: push    eax
0x561704: sub     esp, 224h
0x56170A: push    ebx
0x56170B: push    ebp
0x56170C: push    esi
0x56170D: push    edi
0x56170E: mov     eax, ds:0B30AACh
0x561713: xor     eax, esp
0x561715: push    eax
0x561716: lea     eax, [esp+244h+var_C]
0x56171D: mov     large fs:0, eax
0x561723: mov     esi, ecx
0x561725: mov     [esp+244h+var_1F0], esi
0x561729: lea     ecx, [esp+244h+Src]
0x561730: call    sub_7879A0
0x561735: xor     ebp, ebp
0x561737: cmp     [esi+0Ch], ebp
0x56173A: mov     [esp+244h+var_4], ebp
0x561741: jz      loc_562277
0x561747: cmp     dword ptr [esi+8], 2
0x56174B: jz      loc_562277
0x561751: mov     eax, [esi+14h]
0x561754: cmp     eax, ebp
0x561756: jz      short loc_561778
0x561758: mov     ecx, [eax-4]
0x56175B: lea     edi, [eax-4]
0x56175E: push    offset sub_7016A0; void (__thiscall *)(void *)
0x561763: push    ecx; int
0x561764: push    4; unsigned int
0x561766: push    eax; void *
0x561767: call    $LN21
0x56176C: push    edi
0x56176D: call    FormHeapFree
0x561772: add     esp, 4
0x561775: mov     [esi+14h], ebp
0x561778: mov     eax, [esi+24h]
0x56177B: cmp     eax, ebp
0x56177D: jz      short loc_56179F
0x56177F: mov     edx, [eax-4]
0x561782: lea     edi, [eax-4]
0x561785: push    offset sub_7016A0; void (__thiscall *)(void *)
0x56178A: push    edx; int
0x56178B: push    4; unsigned int
0x56178D: push    eax; void *
0x56178E: call    $LN21
0x561793: push    edi
0x561794: call    FormHeapFree
0x561799: add     esp, 4
0x56179C: mov     [esi+24h], ebp
0x56179F: mov     ecx, [esi+0Ch]
0x5617A2: cmp     ecx, ebp
0x5617A4: jz      loc_562277
0x5617AA: call    sub_7871F0
0x5617AF: movzx   edi, ax
0x5617B2: cmp     di, bp
0x5617B5: mov     [esp+244h+var_1EC], edi
0x5617B9: jbe     loc_562277
0x5617BF: mov     ecx, [esi+0Ch]
0x5617C2: or      ebx, 0FFFFFFFFh
0x5617C5: push    ebx; int
0x5617C6: push    ebx; rsize_t
0x5617C7: push    ebx; MaxCount
0x5617C8: push    1; int
0x5617CA: lea     eax, [esp+254h+Src]
0x5617D1: push    eax; Src
0x5617D2: call    sub_78C6F0
0x5617D7: cmp     [esp+244h+var_14C], ebp
0x5617DE: jz      short loc_561821
0x5617E0: cmp     [esp+244h+var_158], ebp
0x5617E7: jz      short loc_561821
0x5617E9: cmp     [esp+244h+var_148], ebp
0x5617F0: jz      short loc_561821
0x5617F2: cmp     [esp+244h+var_15C], ebp
0x5617F9: jz      short loc_561821
0x5617FB: cmp     [esp+244h+var_140], ebp
0x561802: jz      short loc_561821
0x561804: cmp     [esp+244h+var_13C], ebp
0x56180B: jz      short loc_561821
0x56180D: mov     ax, [esp+244h+var_160]
0x561815: cmp     ax, bp
0x561818: movzx   ecx, ax
0x56181B: mov     [esp+244h+var_1FC], ecx
0x56181F: ja      short loc_56182D
0x561821: mov     [esp+244h+var_4], ebx
0x561828: jmp     loc_562282
0x56182D: movzx   edi, di
0x561830: xor     ecx, ecx
0x561832: mov     eax, edi
0x561834: mov     edx, 4
0x561839: mul     edx
0x56183B: seto    cl
0x56183E: neg     ecx
0x561840: or      ecx, eax
0x561842: xor     eax, eax
0x561844: add     ecx, 4
0x561847: setb    al
0x56184A: neg     eax
0x56184C: or      eax, ecx
0x56184E: push    eax; Size
0x56184F: call    FormHeapAlloc
0x561854: add     esp, 4
0x561857: mov     [esp+244h+var_1F8], eax
0x56185B: cmp     eax, ebp
0x56185D: mov     byte ptr [esp+244h+var_4], 1
0x561865: jz      short loc_561881
0x561867: push    offset sub_7016A0; a5
0x56186C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x561871: push    edi; size
0x561872: lea     ebx, [eax+4]
0x561875: push    4; a2
0x561877: push    ebx; a1
0x561878: mov     [eax], edi
0x56187A: call    ArrayConstructor
0x56187F: jmp     short loc_561883
0x561881: xor     ebx, ebx
0x561883: xor     ecx, ecx
0x561885: mov     eax, edi
0x561887: mov     edx, 4
0x56188C: mul     edx
0x56188E: seto    cl
0x561891: mov     byte ptr [esp+244h+var_4], 0
0x561899: mov     [esi+14h], ebx
0x56189C: neg     ecx
0x56189E: or      ecx, eax
0x5618A0: xor     eax, eax
0x5618A2: add     ecx, 4
0x5618A5: setb    al
0x5618A8: neg     eax
0x5618AA: or      eax, ecx
0x5618AC: push    eax; Size
0x5618AD: call    FormHeapAlloc
0x5618B2: add     esp, 4
0x5618B5: mov     [esp+244h+var_1F8], eax
0x5618B9: cmp     eax, ebp
0x5618BB: mov     byte ptr [esp+244h+var_4], 2
0x5618C3: jz      short loc_5618DF
0x5618C5: push    offset sub_7016A0; a5
0x5618CA: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x5618CF: push    edi; size
0x5618D0: lea     ebx, [eax+4]
0x5618D3: push    4; a2
0x5618D5: push    ebx; a1
0x5618D6: mov     [eax], edi
0x5618D8: call    ArrayConstructor
0x5618DD: jmp     short loc_5618E1
0x5618DF: xor     ebx, ebx
0x5618E1: xor     ecx, ecx
0x5618E3: mov     eax, edi
0x5618E5: mov     edx, 4
0x5618EA: mul     edx
0x5618EC: seto    cl
0x5618EF: mov     byte ptr [esp+244h+var_4], 0
0x5618F7: mov     [esi+24h], ebx
0x5618FA: neg     ecx
0x5618FC: or      ecx, eax
0x5618FE: xor     eax, eax
0x561900: add     ecx, 4
0x561903: setb    al
0x561906: neg     eax
0x561908: or      eax, ecx
0x56190A: push    eax; Size
0x56190B: call    FormHeapAlloc
0x561910: add     esp, 4
0x561913: mov     [esp+244h+var_1F8], eax
0x561917: cmp     eax, ebp
0x561919: mov     byte ptr [esp+244h+var_4], 3
0x561921: jz      short loc_56193D
0x561923: push    offset sub_7016A0; a5
0x561928: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x56192D: push    edi; size
0x56192E: lea     ebx, [eax+4]
0x561931: push    4; a2
0x561933: push    ebx; a1
0x561934: mov     [eax], edi
0x561936: call    ArrayConstructor
0x56193B: jmp     short loc_56193F
0x56193D: xor     ebx, ebx
0x56193F: cmp     word ptr [esp+244h+var_1EC], bp
0x561944: mov     byte ptr [esp+244h+var_4], 0
0x56194C: mov     [esi+2Ch], ebx
0x56194F: jbe     short loc_56197C
0x561951: xor     ebx, ebx
0x561953: mov     ecx, [esi+14h]
0x561956: push    ebp; a2
0x561957: add     ecx, ebx; this
0x561959: call    NiSmartPointer_Set??
0x56195E: mov     ecx, [esi+24h]
0x561961: push    ebp; a2
0x561962: add     ecx, ebx; this
0x561964: call    NiSmartPointer_Set??
0x561969: mov     ecx, [esi+2Ch]
0x56196C: push    ebp; a2
0x56196D: add     ecx, ebx; this
0x56196F: call    NiSmartPointer_Set??
0x561974: add     ebx, 4
0x561977: sub     edi, 1
0x56197A: jnz     short loc_561953
0x56197C: cmp     [esp+244h+var_150], ebp
0x561983: jz      loc_561A2D
0x561989: cmp     [esp+244h+var_154], ebp
0x561990: jz      loc_561A2D
0x561996: movzx   ebx, word ptr [esp+244h+var_1FC]
0x56199B: cmp     ebx, ebp
0x56199D: jle     loc_561A2D
0x5619A3: mov     edi, [esp+244h+var_158]
0x5619AA: lea     ebx, [ebx+0]
0x5619B0: mov     ecx, [edi]
0x5619B2: mov     edx, [edi+4]
0x5619B5: mov     eax, [edi+8]
0x5619B8: mov     [esp+244h+var_1D0], ecx
0x5619BC: fld     [esp+244h+var_1D0]
0x5619C0: sub     esp, 8
0x5619C3: fstp    [esp+24Ch+X]; X
0x5619C6: mov     [esp+24Ch+var_1CC], edx
0x5619CD: mov     [esp+24Ch+var_1C8], eax
0x5619D4: call    __isnan
0x5619D9: add     esp, 8
0x5619DC: test    eax, eax
0x5619DE: jnz     short loc_561A0C
0x5619E0: fld     [esp+244h+var_1CC]
0x5619E4: sub     esp, 8
0x5619E7: fstp    [esp+24Ch+X]; X
0x5619EA: call    __isnan
0x5619EF: add     esp, 8
0x5619F2: test    eax, eax
0x5619F4: jnz     short loc_561A0C
0x5619F6: fld     [esp+244h+var_1C8]
0x5619FA: sub     esp, 8
0x5619FD: fstp    [esp+24Ch+X]; X
0x561A00: call    __isnan
0x561A05: add     esp, 8
0x561A08: test    eax, eax
0x561A0A: jz      short loc_561A25
0x561A0C: mov     ecx, ds:0B258E8h
0x561A12: mov     [edi], ecx
0x561A14: mov     edx, ds:0B258ECh
0x561A1A: mov     [edi+4], edx
0x561A1D: mov     eax, ds:0B258F0h
0x561A22: mov     [edi+8], eax
0x561A25: add     edi, 0Ch
0x561A28: sub     ebx, 1
0x561A2B: jnz     short loc_5619B0
0x561A2D: xor     edi, edi
0x561A2F: cmp     word ptr [esp+244h+var_1EC], bp
0x561A34: mov     [esp+244h+var_1E4], edi
0x561A38: jbe     loc_562252
0x561A3E: mov     edi, edi
0x561A40: push    0FFFFFFFFh; int
0x561A42: push    0FFFFFFFFh; rsize_t
0x561A44: push    edi; MaxCount
0x561A45: push    1; int
0x561A47: lea     ecx, [esp+254h+Src]
0x561A4E: push    ecx; Src
0x561A4F: mov     ecx, [esi+0Ch]
0x561A52: call    sub_78C6F0
0x561A57: cmp     [esp+244h+var_160], bp
0x561A5F: jbe     loc_562240
0x561A65: cmp     [esp+244h+var_168], ebp
0x561A6C: jz      loc_562240
0x561A72: cmp     [esp+244h+var_164], ebp
0x561A79: jz      loc_562240
0x561A7F: push    2; Size
0x561A81: call    FormHeapAlloc
0x561A86: mov     edx, [esp+248h+var_168]
0x561A8D: mov     esi, eax
0x561A8F: movzx   eax, word ptr [edx]
0x561A92: mov     [esi], ax
0x561A95: movzx   eax, ax
0x561A98: xor     ecx, ecx
0x561A9A: mov     edx, 2
0x561A9F: mul     edx
0x561AA1: seto    cl
0x561AA4: mov     [esp+248h+var_1F8], esi
0x561AA8: neg     ecx
0x561AAA: or      ecx, eax
0x561AAC: push    ecx; Size
0x561AAD: call    FormHeapAlloc
0x561AB2: mov     ecx, [esp+24Ch+var_164]
0x561AB9: mov     edx, [ecx]
0x561ABB: mov     edi, eax
0x561ABD: movzx   eax, word ptr [esi]
0x561AC0: add     eax, eax
0x561AC2: push    eax; Size
0x561AC3: push    edx; Src
0x561AC4: push    edi; Dst
0x561AC5: mov     [esp+258h+var_1B4], edi
0x561ACC: call    _memcpy
0x561AD1: movzx   eax, [esp+258h+var_160]
0x561AD9: push    eax; Size
0x561ADA: call    FormHeapAlloc
0x561ADF: movzx   ecx, [esp+25Ch+var_160]
0x561AE7: push    ecx
0x561AE8: mov     ebx, eax
0x561AEA: push    ebp
0x561AEB: push    ebx
0x561AEC: call    __memset
0x561AF1: add     esp, 24h
0x561AF4: xor     eax, eax
0x561AF6: cmp     [esi], bp
0x561AF9: jbe     short loc_561B12
0x561AFB: jmp     short loc_561B00
0x561AFD: align 10h
0x561B00: movzx   edx, word ptr [edi+eax*2]
0x561B04: mov     byte ptr [edx+ebx], 1
0x561B08: movzx   ecx, word ptr [esi]
0x561B0B: add     eax, 1
0x561B0E: cmp     eax, ecx
0x561B10: jb      short loc_561B00
0x561B12: xor     edi, edi
0x561B14: xor     bp, bp
0x561B17: mov     [esp+244h+var_1E0], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x561B1F: mov     [esp+244h+var_1D8], di
0x561B24: mov     [esp+244h+var_1D2], 1
0x561B2B: mov     [esp+244h+var_1D6], bp
0x561B30: mov     [esp+244h+var_1D4], di
0x561B35: mov     [esp+244h+var_1DC], edi
0x561B39: cmp     [esp+244h+var_160], di
0x561B41: mov     byte ptr [esp+244h+var_4], 4
0x561B49: jbe     short loc_561B7D
0x561B4B: jmp     short loc_561B50
0x561B4D: align 10h
0x561B50: movzx   eax, di
0x561B53: cmp     byte ptr [eax+ebx], 0
0x561B57: jz      short loc_561B6B
0x561B59: lea     edx, [esp+244h+var_1FC]
0x561B5D: push    edx
0x561B5E: lea     ecx, [esp+248h+var_1E0]
0x561B62: mov     [esp+248h+var_1FC], eax
0x561B66: call    NiTArray_Add
0x561B6B: add     edi, 1
0x561B6E: cmp     di, [esp+244h+var_160]
0x561B76: jb      short loc_561B50
0x561B78: mov     bp, [esp+244h+var_1D6]
0x561B7D: push    ebx
0x561B7E: call    FormHeapFree
0x561B83: add     esp, 4
0x561B86: xor     ecx, ecx
0x561B88: test    bp, bp
0x561B8B: jbe     short loc_561BD1
0x561B8D: mov     edi, [esp+244h+var_1DC]
0x561B91: mov     edx, [edi]
0x561B93: xor     eax, eax
0x561B95: cmp     [esi], ax
0x561B98: jbe     short loc_561BC6
0x561B9A: lea     ebx, [ebx+0]
0x561BA0: mov     ebx, [esp+244h+var_164]
0x561BA7: mov     ebx, [ebx]
0x561BA9: movzx   ebx, word ptr [ebx+eax*2]
0x561BAD: cmp     ebx, edx
0x561BAF: jnz     short loc_561BBC
0x561BB1: mov     ebx, [esp+244h+var_1B4]
0x561BB8: mov     [ebx+eax*2], cx
0x561BBC: movzx   ebx, word ptr [esi]
0x561BBF: add     eax, 1
0x561BC2: cmp     eax, ebx
0x561BC4: jb      short loc_561BA0
0x561BC6: add     ecx, 1
0x561BC9: add     edi, 4
0x561BCC: cmp     cx, bp
0x561BCF: jb      short loc_561B91
0x561BD1: movzx   ebx, bp
0x561BD4: xor     ecx, ecx
0x561BD6: mov     eax, ebx
0x561BD8: mov     edx, 0Ch
0x561BDD: mul     edx
0x561BDF: seto    cl
0x561BE2: neg     ecx
0x561BE4: or      ecx, eax
0x561BE6: push    ecx; Size
0x561BE7: call    FormHeapAlloc
0x561BEC: mov     [esp+248h+var_1B8], eax
0x561BF3: xor     ecx, ecx
0x561BF5: mov     eax, ebx
0x561BF7: mov     edx, 0Ch
0x561BFC: mul     edx
0x561BFE: seto    cl
0x561C01: neg     ecx
0x561C03: or      ecx, eax
0x561C05: push    ecx; Size
0x561C06: call    FormHeapAlloc
0x561C0B: mov     [esp+24Ch+var_1C0], eax
0x561C12: xor     ecx, ecx
0x561C14: mov     eax, ebx
0x561C16: mov     edx, 8
0x561C1B: mul     edx
0x561C1D: seto    cl
0x561C20: neg     ecx
0x561C22: or      ecx, eax
0x561C24: push    ecx; Size
0x561C25: call    FormHeapAlloc
0x561C2A: xor     edi, edi
0x561C2C: add     esp, 0Ch
0x561C2F: cmp     [esp+244h+var_150], edi
0x561C36: mov     [esp+244h+var_1C4], eax
0x561C3D: mov     [esp+244h+var_208], edi
0x561C41: mov     [esp+244h+var_1E8], edi
0x561C45: mov     [esp+244h+var_1FC], edi
0x561C49: jz      loc_561CCF
0x561C4F: cmp     [esp+244h+var_154], edi
0x561C56: jz      short loc_561CCF
0x561C58: xor     ecx, ecx
0x561C5A: mov     eax, ebx
0x561C5C: mov     edx, 0Ch
0x561C61: mul     edx
0x561C63: seto    cl
0x561C66: neg     ecx
0x561C68: or      ecx, eax
0x561C6A: push    ecx; Size
0x561C6B: call    FormHeapAlloc
0x561C70: mov     [esp+248h+var_208], eax
0x561C74: xor     ecx, ecx
0x561C76: mov     eax, ebx
0x561C78: mov     edx, 0Ch
0x561C7D: mul     edx
0x561C7F: seto    cl
0x561C82: neg     ecx
0x561C84: or      ecx, eax
0x561C86: push    ecx; Size
0x561C87: call    FormHeapAlloc
0x561C8C: mov     esi, eax
0x561C8E: push    14h; Size
0x561C90: mov     [esp+250h+var_1E8], esi
0x561C94: call    FormHeapAlloc
0x561C99: add     esp, 0Ch
0x561C9C: mov     [esp+244h+var_20C], eax
0x561CA0: cmp     eax, edi
0x561CA2: mov     byte ptr [esp+244h+var_4], 5
0x561CAA: jz      short loc_561CB7
0x561CAC: push    1
0x561CAE: mov     ecx, eax; this
0x561CB0: call    ??0TangentSpaceData@BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(void)
0x561CB5: jmp     short loc_561CB9
0x561CB7: xor     eax, eax
0x561CB9: mov     ecx, [esp+244h+var_208]
0x561CBD: mov     byte ptr [esp+244h+var_4], 4
0x561CC5: mov     [esp+244h+var_1FC], eax
0x561CC9: mov     [eax+0Ch], ecx
0x561CCC: mov     [eax+10h], esi
0x561CCF: cmp     [esp+244h+var_1D6], di
0x561CD4: jbe     loc_561F0F
0x561CDA: mov     eax, [esp+244h+var_1C0]
0x561CE1: mov     ecx, [esp+244h+var_208]
0x561CE5: mov     esi, [esp+244h+var_1B8]
0x561CEC: mov     edx, [esp+244h+var_1DC]
0x561CF0: mov     ebp, [esp+244h+var_1C4]
0x561CF7: sub     ecx, eax
0x561CF9: mov     [esp+244h+var_1F4], ecx
0x561CFD: mov     ecx, [esp+244h+var_1E8]
0x561D01: sub     esi, eax
0x561D03: sub     ecx, eax
0x561D05: mov     [esp+244h+var_200], edx
0x561D09: mov     [esp+244h+var_20C], ecx
0x561D0D: mov     [esp+244h+var_1BC], ebx
0x561D14: jmp     short loc_561D20
0x561D16: align 10h
0x561D20: mov     edi, [esp+244h+var_14C]
0x561D27: mov     ecx, [esp+244h+var_200]
0x561D2B: mov     edx, [ecx]
0x561D2D: lea     ecx, [edx+edx*2]
0x561D30: fld     dword ptr [edi+ecx*4]
0x561D33: add     edx, edx
0x561D35: cmp     [esp+244h+var_208], 0
0x561D3A: fstp    [esp+244h+var_204]
0x561D3E: fld     dword ptr [edi+ecx*4+4]
0x561D42: fstp    [esp+244h+var_214]
0x561D46: fld     dword ptr [edi+ecx*4+8]
0x561D4A: fstp    [esp+244h+var_210]
0x561D4E: fld     [esp+244h+var_204]
0x561D52: fstp    [esp+244h+var_1A4]
0x561D59: mov     edi, [esp+244h+var_1A4]
0x561D60: fld     [esp+244h+var_214]
0x561D64: mov     [esi+eax], edi
0x561D67: fstp    [esp+244h+var_1A0]
0x561D6E: mov     edi, [esp+244h+var_1A0]
0x561D75: fld     [esp+244h+var_210]
0x561D79: mov     [esi+eax+4], edi
0x561D7D: fstp    [esp+244h+var_19C]
0x561D84: mov     edi, [esp+244h+var_19C]
0x561D8B: mov     [esi+eax+8], edi
0x561D8F: mov     edi, [esp+244h+var_158]
0x561D96: fld     dword ptr [edi+ecx*4]
0x561D99: fstp    [esp+244h+var_210]
0x561D9D: fld     dword ptr [edi+ecx*4+4]
0x561DA1: fstp    [esp+244h+var_214]
0x561DA5: fld     dword ptr [edi+ecx*4+8]
0x561DA9: fstp    [esp+244h+var_204]
0x561DAD: fld     [esp+244h+var_210]
0x561DB1: fstp    [esp+244h+var_1B0]
0x561DB8: mov     edi, [esp+244h+var_1B0]
0x561DBF: fld     [esp+244h+var_214]
0x561DC3: mov     [eax], edi
0x561DC5: fstp    [esp+244h+var_1AC]
0x561DCC: mov     edi, [esp+244h+var_1AC]
0x561DD3: fld     [esp+244h+var_204]
0x561DD7: mov     [eax+4], edi
0x561DDA: fstp    [esp+244h+var_1A8]
0x561DE1: mov     edi, [esp+244h+var_1A8]
0x561DE8: mov     [eax+8], edi
0x561DEB: mov     edi, [esp+244h+var_148]
0x561DF2: fld     dword ptr [edi+edx*4]
0x561DF5: fstp    [esp+244h+var_210]
0x561DF9: fld     dword ptr [edi+edx*4+4]
0x561DFD: fstp    [esp+244h+var_214]
0x561E01: fld     [esp+244h+var_210]
0x561E05: fstp    [esp+244h+var_1D0]
0x561E09: mov     edx, [esp+244h+var_1D0]
0x561E0D: fld     [esp+244h+var_214]
0x561E11: mov     [ebp+0], edx
0x561E14: fstp    [esp+244h+var_1CC]
0x561E18: mov     edx, [esp+244h+var_1CC]
0x561E1C: mov     [ebp+4], edx
0x561E1F: jz      loc_561EF6
0x561E25: cmp     [esp+244h+var_1E8], 0
0x561E2A: jz      loc_561EF6
0x561E30: mov     edx, [esp+244h+var_150]
0x561E37: fld     dword ptr [edx+ecx*4]
0x561E3A: fstp    [esp+244h+var_210]
0x561E3E: fld     dword ptr [edx+ecx*4+4]
0x561E42: fstp    [esp+244h+var_214]
0x561E46: fld     dword ptr [edx+ecx*4+8]
0x561E4A: mov     edx, [esp+244h+var_1F4]
0x561E4E: fstp    [esp+244h+var_204]
0x561E52: fld     [esp+244h+var_210]
0x561E56: fstp    [esp+244h+var_198]
0x561E5D: mov     edi, [esp+244h+var_198]
0x561E64: fld     [esp+244h+var_214]
0x561E68: mov     [edx+eax], edi
0x561E6B: fstp    [esp+244h+var_194]
0x561E72: mov     edi, [esp+244h+var_194]
0x561E79: fld     [esp+244h+var_204]
0x561E7D: mov     [edx+eax+4], edi
0x561E81: fstp    [esp+244h+var_190]
0x561E88: mov     edi, [esp+244h+var_190]
0x561E8F: mov     [edx+eax+8], edi
0x561E93: mov     edx, [esp+244h+var_154]
0x561E9A: fld     dword ptr [edx+ecx*4]
0x561E9D: fstp    [esp+244h+var_210]
0x561EA1: fld     dword ptr [edx+ecx*4+4]
0x561EA5: fstp    [esp+244h+var_214]
0x561EA9: fld     dword ptr [edx+ecx*4+8]
0x561EAD: mov     ecx, [esp+244h+var_20C]
0x561EB1: fstp    [esp+244h+var_204]
0x561EB5: fld     [esp+244h+var_210]
0x561EB9: fstp    [esp+244h+var_17C]
0x561EC0: mov     edx, [esp+244h+var_17C]
0x561EC7: fld     [esp+244h+var_214]
0x561ECB: mov     [ecx+eax], edx
0x561ECE: fstp    [esp+244h+var_178]
0x561ED5: mov     edx, [esp+244h+var_178]
0x561EDC: fld     [esp+244h+var_204]
0x561EE0: mov     [ecx+eax+4], edx
0x561EE4: fstp    [esp+244h+var_174]
0x561EEB: mov     edx, [esp+244h+var_174]
0x561EF2: mov     [ecx+eax+8], edx
0x561EF6: add     [esp+244h+var_200], 4
0x561EFB: add     ebp, 8
0x561EFE: add     eax, 0Ch
0x561F01: sub     [esp+244h+var_1BC], 1
0x561F09: jnz     loc_561D20
0x561F0F: xor     ecx, ecx
0x561F11: mov     eax, ebx
0x561F13: mov     edx, 10h
0x561F18: mul     edx
0x561F1A: seto    cl
0x561F1D: neg     ecx
0x561F1F: or      ecx, eax
0x561F21: push    ecx; Size
0x561F22: call    FormHeapAlloc
0x561F27: add     esp, 4
0x561F2A: cmp     [esp+244h+var_1D6], 0
0x561F30: mov     edi, eax
0x561F32: mov     [esp+244h+var_214], edi
0x561F36: jbe     loc_561FF5
0x561F3C: fldz
0x561F3E: mov     edx, [esp+244h+var_1DC]
0x561F42: fstp    [esp+244h+var_180]
0x561F49: mov     esi, ebx
0x561F4B: mov     edi, [esp+244h+var_180]
0x561F52: fld     qword ptr ds:0A3DDD8h
0x561F58: mov     ecx, [edx]
0x561F5A: mov     ebp, [esp+244h+var_15C]
0x561F61: movzx   ebp, byte ptr [ebp+ecx*4+1]
0x561F66: mov     [esp+244h+var_20C], ebp
0x561F6A: mov     ebp, [esp+244h+var_140]
0x561F71: fild    [esp+244h+var_20C]
0x561F75: add     edx, 4
0x561F78: add     eax, 10h
0x561F7B: fdiv    st, st(1)
0x561F7D: fstp    [esp+244h+var_210]
0x561F81: fld     dword ptr [ebp+ecx*4+0]
0x561F85: fstp    [esp+244h+var_1F4]
0x561F89: mov     ebp, [esp+244h+var_13C]
0x561F90: movzx   ecx, byte ptr [ecx+ebp]
0x561F94: add     ecx, ecx
0x561F96: add     ecx, ecx
0x561F98: sub     esi, 1
0x561F9B: mov     [esp+244h+var_20C], ecx
0x561F9F: fild    [esp+244h+var_20C]
0x561FA3: fstp    [esp+244h+var_20C]
0x561FA7: fld     [esp+244h+var_1F4]
0x561FAB: fstp    [esp+244h+var_18C]
0x561FB2: mov     ecx, [esp+244h+var_18C]
0x561FB9: fld     [esp+244h+var_20C]
0x561FBD: mov     [eax-10h], ecx
0x561FC0: fstp    [esp+244h+var_188]
0x561FC7: mov     ecx, [esp+244h+var_188]
0x561FCE: fld     [esp+244h+var_210]
0x561FD2: mov     [eax-0Ch], ecx
0x561FD5: fstp    [esp+244h+var_184]
0x561FDC: mov     ecx, [esp+244h+var_184]
0x561FE3: mov     [eax-8], ecx
0x561FE6: mov     [eax-4], edi
0x561FE9: jnz     loc_561F58
0x561FEF: mov     edi, [esp+244h+var_214]
0x561FF3: fstp    st
0x561FF5: push    10h; Size
0x561FF7: call    FormHeapAlloc
0x561FFC: add     esp, 4
0x561FFF: mov     [esp+244h+var_20C], eax
0x562003: test    eax, eax
0x562005: mov     byte ptr [esp+244h+var_4], 6
0x56200D: jz      short loc_56201E
0x56200F: mov     ecx, eax
0x562011: call    sub_7F2360
0x562016: mov     esi, eax
0x562018: mov     [esp+244h+var_200], eax
0x56201C: jmp     short loc_562024
0x56201E: xor     esi, esi
0x562020: mov     [esp+244h+var_200], esi
0x562024: test    esi, esi
0x562026: mov     [esp+244h+var_20C], esi
0x56202A: jz      short loc_562036
0x56202C: lea     edx, [esi+4]
0x56202F: push    edx; lpAddend
0x562030: call    dword ptr ds:0A28078h
0x562036: push    50h ; 'P'; Size
0x562038: mov     byte ptr [esp+248h+var_4], 7
0x562040: mov     [esi+8], edi
0x562043: mov     [esi+0Ch], bx
0x562047: call    FormHeapAlloc
0x56204C: add     esp, 4
0x56204F: mov     [esp+244h+var_1F4], eax
0x562053: test    eax, eax
0x562055: mov     byte ptr [esp+244h+var_4], 8
0x56205D: jz      short loc_5620A7
0x56205F: mov     ecx, [esp+244h+var_1B4]
0x562066: mov     edx, [esp+244h+var_1F8]
0x56206A: push    ecx
0x56206B: mov     ecx, [esp+248h+var_168]
0x562072: push    edx
0x562073: movzx   edx, word ptr [ecx]
0x562076: mov     ecx, [esp+24Ch+var_1C4]
0x56207D: push    1
0x56207F: sub     dx, 2
0x562083: push    edx
0x562084: mov     edx, [esp+254h+var_1C0]
0x56208B: push    0
0x56208D: push    1
0x56208F: push    ecx
0x562090: mov     ecx, [esp+260h+var_1B8]
0x562097: push    0
0x562099: push    edx
0x56209A: push    ecx
0x56209B: push    ebx
0x56209C: mov     ecx, eax
0x56209E: call    sub_719CB0
0x5620A3: mov     ebp, eax
0x5620A5: jmp     short loc_5620A9
0x5620A7: xor     ebp, ebp
0x5620A9: movzx   esi, word ptr [esp+244h+var_1E4]
0x5620AE: mov     edx, [esp+244h+var_1F0]
0x5620B2: mov     edi, [edx+14h]
0x5620B5: add     esi, esi
0x5620B7: add     esi, esi
0x5620B9: mov     ebx, [edi+esi]
0x5620BC: add     edi, esi
0x5620BE: cmp     ebx, ebp
0x5620C0: mov     byte ptr [esp+244h+var_4], 7
0x5620C8: jz      short loc_5620FA
0x5620CA: test    ebx, ebx
0x5620CC: jz      short loc_5620EA
0x5620CE: lea     eax, [ebx+4]
0x5620D1: push    eax; lpAddend
0x5620D2: call    dword ptr ds:0A2807Ch
0x5620D8: test    eax, eax
0x5620DA: jnz     short loc_5620EA
0x5620DC: test    ebx, ebx
0x5620DE: jz      short loc_5620EA
0x5620E0: mov     edx, [ebx]
0x5620E2: mov     eax, [edx]
0x5620E4: push    1
0x5620E6: mov     ecx, ebx
0x5620E8: call    eax
0x5620EA: test    ebp, ebp
0x5620EC: mov     [edi], ebp
0x5620EE: jz      short loc_5620FA
0x5620F0: add     ebp, 4
0x5620F3: push    ebp; lpAddend
0x5620F4: call    dword ptr ds:0A28078h
0x5620FA: mov     ebp, [esp+244h+var_1F0]
0x5620FE: mov     ecx, [ebp+14h]
0x562101: mov     eax, [esi+ecx]
0x562104: mov     dx, [eax+2Eh]
0x562108: and     dx, 0FFFh
0x56210D: or      dx, 4000h
0x562112: mov     [eax+2Eh], dx
0x562116: mov     eax, [ebp+14h]
0x562119: mov     eax, [esi+eax]
0x56211C: mov     byte ptr [eax+30h], 11h
0x562120: mov     ecx, [ebp+14h]
0x562123: mov     eax, [esi+ecx]
0x562126: push    0F4h ; 'ô'; Size
0x56212B: mov     byte ptr [eax+31h], 1Fh
0x56212F: call    FormHeapAlloc
0x562134: add     esp, 4
0x562137: mov     [esp+244h+var_1F8], eax
0x56213B: test    eax, eax
0x56213D: mov     byte ptr [esp+244h+var_4], 9
0x562145: jz      short loc_562159
0x562147: mov     edx, [esp+244h+var_200]
0x56214B: push    edx
0x56214C: mov     ecx, eax
0x56214E: call    sub_7F2030
0x562153: mov     [esp+244h+var_208], eax
0x562157: jmp     short loc_562161
0x562159: mov     [esp+244h+var_208], 0
0x562161: mov     edi, [ebp+24h]
0x562164: mov     ebx, [edi+esi]
0x562167: add     edi, esi
0x562169: cmp     ebx, [esp+244h+var_208]
0x56216D: mov     byte ptr [esp+244h+var_4], 7
0x562175: jz      short loc_5621AD
0x562177: test    ebx, ebx
0x562179: jz      short loc_562197
0x56217B: lea     eax, [ebx+4]
0x56217E: push    eax; lpAddend
0x56217F: call    dword ptr ds:0A2807Ch
0x562185: test    eax, eax
0x562187: jnz     short loc_562197
0x562189: test    ebx, ebx
0x56218B: jz      short loc_562197
0x56218D: mov     edx, [ebx]
0x56218F: mov     eax, [edx]
0x562191: push    1
0x562193: mov     ecx, ebx
0x562195: call    eax
0x562197: mov     eax, [esp+244h+var_208]
0x56219B: test    eax, eax
0x56219D: mov     [edi], eax
0x56219F: jz      short loc_5621AD
0x5621A1: mov     ecx, eax
0x5621A3: add     ecx, 4
0x5621A6: push    ecx; lpAddend
0x5621A7: call    dword ptr ds:0A28078h
0x5621AD: mov     ebx, [esp+244h+var_1FC]
0x5621B1: test    ebx, ebx
0x5621B3: jz      short loc_5621F5
0x5621B5: mov     edx, [ebp+24h]
0x5621B8: mov     esi, [esi+edx]
0x5621BB: mov     edi, [esi+0D4h]
0x5621C1: cmp     edi, ebx
0x5621C3: jz      short loc_5621F5
0x5621C5: test    edi, edi
0x5621C7: jz      short loc_5621E5
0x5621C9: lea     eax, [edi+4]
0x5621CC: push    eax; lpAddend
0x5621CD: call    dword ptr ds:0A2807Ch
0x5621D3: test    eax, eax
0x5621D5: jnz     short loc_5621E5
0x5621D7: test    edi, edi
0x5621D9: jz      short loc_5621E5
0x5621DB: mov     edx, [edi]
0x5621DD: mov     eax, [edx]
0x5621DF: push    1
0x5621E1: mov     ecx, edi
0x5621E3: call    eax
0x5621E5: mov     [esi+0D4h], ebx
0x5621EB: add     ebx, 4
0x5621EE: push    ebx; lpAddend
0x5621EF: call    dword ptr ds:0A28078h
0x5621F5: mov     esi, [esp+244h+var_200]
0x5621F9: lea     ecx, [esi+4]
0x5621FC: push    ecx; lpAddend
0x5621FD: mov     byte ptr [esp+248h+var_4], 4
0x562205: call    dword ptr ds:0A2807Ch
0x56220B: test    eax, eax
0x56220D: jnz     short loc_562219
0x56220F: mov     edx, [esi]
0x562211: mov     eax, [edx]
0x562213: push    1
0x562215: mov     ecx, esi
0x562217: call    eax
0x562219: mov     ecx, [esp+244h+var_1DC]
0x56221D: push    ecx
0x56221E: mov     byte ptr [esp+248h+var_4], 0
0x562226: mov     [esp+248h+var_1E0], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x56222E: call    FormHeapFree
0x562233: mov     edi, [esp+248h+var_1E4]
0x562237: mov     esi, [esp+248h+var_1F0]
0x56223B: add     esp, 4
0x56223E: xor     ebp, ebp
0x562240: add     edi, 1
0x562243: cmp     di, word ptr [esp+244h+var_1EC]
0x562248: mov     [esp+244h+var_1E4], edi
0x56224C: jb      loc_561A40
0x562252: mov     ecx, [esi+0Ch]
0x562255: call    sub_788FD0
0x56225A: mov     ecx, [esi+0Ch]
0x56225D: mov     [esp+244h+var_15C], ebp
0x562264: call    unknown_libname_13_0
0x562269: mov     [esp+244h+var_140], ebp
0x562270: mov     [esp+244h+var_13C], ebp
0x562277: mov     [esp+244h+var_4], 0FFFFFFFFh
0x562282: lea     ecx, [esp+244h+Src]
0x562289: call    sub_787B20
0x56228E: mov     ecx, dword ptr [esp+244h+var_C]
0x562295: mov     large fs:0, ecx
0x56229C: pop     ecx
0x56229D: pop     edi
0x56229E: pop     esi
0x56229F: pop     ebp
0x5622A0: pop     ebx
0x5622A1: mov     esp, ebp
0x5622A3: pop     ebp
0x5622A4: retn
