0x4E61C0: sub     esp, 14h
0x4E61C3: push    esi
0x4E61C4: mov     esi, ecx
0x4E61C6: mov     ecx, [esi+24h]
0x4E61C9: push    edi
0x4E61CA: xor     edi, edi
0x4E61CC: cmp     ecx, edi
0x4E61CE: mov     [esp+1Ch+var_10], esi
0x4E61D2: jz      loc_4E65A2
0x4E61D8: call    sub_521BE0
0x4E61DD: mov     eax, [esi+24h]
0x4E61E0: cmp     [eax+0Ah], di
0x4E61E4: jz      loc_4E65A2
0x4E61EA: push    ebx
0x4E61EB: push    ebp
0x4E61EC: mov     ecx, esi; this
0x4E61EE: call    TESForm_InitializeFormRecord
0x4E61F3: mov     ecx, [esi+24h]
0x4E61F6: mov     dx, [ecx+0Ah]
0x4E61FA: push    2; Size
0x4E61FC: lea     eax, [esp+28h+Src]
0x4E6200: push    eax; Src
0x4E6201: push    41544144h; int
0x4E6206: mov     word ptr [esp+30h+Src], dx
0x4E620B: call    TESForm_PutFormRecordChunkData
0x4E6210: movzx   eax, word ptr [esp+30h+Src]
0x4E6215: xor     ecx, ecx
0x4E6217: mov     edx, 10h
0x4E621C: mul     edx
0x4E621E: seto    cl
0x4E6221: neg     ecx
0x4E6223: or      ecx, eax
0x4E6225: push    ecx; Size
0x4E6226: call    FormHeapAlloc
0x4E622B: mov     [esp+34h+Size], eax
0x4E622F: mov     ax, word ptr [esp+34h+Src]
0x4E6234: add     esp, 10h
0x4E6237: cmp     ax, di
0x4E623A: mov     [esp+24h+var_C], edi
0x4E623E: jbe     short loc_4E62A2
0x4E6240: mov     esi, [esp+24h+Size]
0x4E6244: mov     eax, [esp+24h+var_10]
0x4E6248: mov     ecx, [eax+24h]
0x4E624B: mov     edx, [ecx+4]
0x4E624E: mov     ebp, [edx+edi*4]
0x4E6251: mov     ecx, ebp
0x4E6253: xor     ebx, ebx
0x4E6255: call    sub_4E7DE0
0x4E625A: test    eax, eax
0x4E625C: jz      short loc_4E626F
0x4E625E: mov     edi, edi
0x4E6260: cmp     dword ptr [eax], 0
0x4E6263: jz      short loc_4E6268
0x4E6265: add     ebx, 1
0x4E6268: mov     eax, [eax+4]
0x4E626B: test    eax, eax
0x4E626D: jnz     short loc_4E6260
0x4E626F: movzx   eax, bl
0x4E6272: add     [esp+24h+var_C], eax
0x4E6276: mov     ecx, ebp
0x4E6278: mov     [esi+0Ch], bl
0x4E627B: call    sub_4BEF40
0x4E6280: mov     ecx, [eax]
0x4E6282: mov     [esi], ecx
0x4E6284: mov     edx, [eax+4]
0x4E6287: mov     [esi+4], edx
0x4E628A: mov     eax, [eax+8]
0x4E628D: mov     [esi+8], eax
0x4E6290: mov     ax, word ptr [esp+24h+Src]
0x4E6295: movzx   ecx, ax
0x4E6298: add     edi, 1
0x4E629B: add     esi, 10h
0x4E629E: cmp     edi, ecx
0x4E62A0: jl      short loc_4E6244
0x4E62A2: mov     esi, [esp+24h+Size]
0x4E62A6: movzx   edx, ax
0x4E62A9: shl     edx, 4
0x4E62AC: push    edx; Size
0x4E62AD: push    esi; Src
0x4E62AE: push    50524750h; int
0x4E62B3: call    TESForm_PutFormRecordChunkData
0x4E62B8: push    esi
0x4E62B9: call    FormHeapFree
0x4E62BE: mov     esi, [esp+34h+var_C]
0x4E62C2: add     esp, 10h
0x4E62C5: test    esi, esi
0x4E62C7: jz      loc_4E63B6
0x4E62CD: xor     ecx, ecx
0x4E62CF: mov     eax, esi
0x4E62D1: mov     edx, 2
0x4E62D6: mul     edx
0x4E62D8: seto    cl
0x4E62DB: neg     ecx
0x4E62DD: or      ecx, eax
0x4E62DF: push    ecx; Size
0x4E62E0: call    FormHeapAlloc
0x4E62E5: mov     edi, eax
0x4E62E7: xor     eax, eax
0x4E62E9: add     esp, 4
0x4E62EC: xor     ebp, ebp
0x4E62EE: cmp     word ptr [esp+24h+Src], ax
0x4E62F3: mov     [esp+24h+var_4], edi
0x4E62F7: mov     [esp+24h+Size], eax
0x4E62FB: jbe     loc_4E639E
0x4E6301: mov     ecx, [esp+24h+var_10]
0x4E6305: mov     edx, [ecx+24h]
0x4E6308: mov     ecx, [edx+4]
0x4E630B: mov     ecx, [ecx+eax*4]
0x4E630E: call    sub_4E7DE0
0x4E6313: test    eax, eax
0x4E6315: jz      short loc_4E637E
0x4E6317: cmp     dword ptr [eax+4], 0
0x4E631B: jnz     short loc_4E6322
0x4E631D: cmp     dword ptr [eax], 0
0x4E6320: jz      short loc_4E637E
0x4E6322: mov     edx, [esp+24h+var_10]
0x4E6326: mov     edx, [edx+24h]
0x4E6329: mov     ebx, [eax]
0x4E632B: or      edi, 0FFFFFFFFh
0x4E632E: test    edx, edx
0x4E6330: jz      short loc_4E6359
0x4E6332: test    ebx, ebx
0x4E6334: jz      short loc_4E6359
0x4E6336: mov     esi, [esp+24h+var_10]
0x4E633A: movzx   esi, word ptr [esi+30h]
0x4E633E: xor     ecx, ecx
0x4E6340: test    esi, esi
0x4E6342: jle     short loc_4E6359
0x4E6344: mov     edx, [edx+4]
0x4E6347: cmp     [edx], ebx
0x4E6349: jz      short loc_4E6357
0x4E634B: add     ecx, 1
0x4E634E: add     edx, 4
0x4E6351: cmp     ecx, esi
0x4E6353: jl      short loc_4E6347
0x4E6355: jmp     short loc_4E6359
0x4E6357: mov     edi, ecx
0x4E6359: test    edi, edi
0x4E635B: mov     ecx, edi
0x4E635D: jl      short loc_4E6367
0x4E635F: cmp     edi, 0FFFFh
0x4E6365: jle     short loc_4E636C
0x4E6367: mov     ecx, 0FFFFh
0x4E636C: mov     edx, [esp+24h+var_4]
0x4E6370: mov     [edx+ebp*2], cx
0x4E6374: mov     eax, [eax+4]
0x4E6377: add     ebp, 1
0x4E637A: test    eax, eax
0x4E637C: jnz     short loc_4E6317
0x4E637E: mov     eax, [esp+24h+Size]
0x4E6382: movzx   ecx, word ptr [esp+24h+Src]
0x4E6387: add     eax, 1
0x4E638A: cmp     eax, ecx
0x4E638C: mov     [esp+24h+Size], eax
0x4E6390: jl      loc_4E6301
0x4E6396: mov     edi, [esp+24h+var_4]
0x4E639A: mov     esi, [esp+24h+var_C]
0x4E639E: lea     edx, [esi+esi]
0x4E63A1: push    edx; Size
0x4E63A2: push    edi; Src
0x4E63A3: push    52524750h; int
0x4E63A8: call    TESForm_PutFormRecordChunkData
0x4E63AD: push    edi
0x4E63AE: call    FormHeapFree
0x4E63B3: add     esp, 10h
0x4E63B6: mov     esi, [esp+24h+var_10]
0x4E63BA: xor     edi, edi
0x4E63BC: add     esi, 28h ; '('
0x4E63BF: mov     eax, esi
0x4E63C1: jz      loc_4E6433
0x4E63C7: cmp     dword ptr [eax], 0
0x4E63CA: jz      short loc_4E63CF
0x4E63CC: add     edi, 1
0x4E63CF: mov     eax, [eax+4]
0x4E63D2: test    eax, eax
0x4E63D4: jnz     short loc_4E63C7
0x4E63D6: test    edi, edi
0x4E63D8: jz      short loc_4E6433
0x4E63DA: mov     ebx, edi
0x4E63DC: push    1
0x4E63DE: shl     ebx, 4
0x4E63E1: push    ebx
0x4E63E2: mov     ecx, offset FormHeap
0x4E63E7: call    j_MemoryHeap_Alloc
0x4E63EC: test    edi, edi
0x4E63EE: mov     ebp, eax
0x4E63F0: jle     short loc_4E6419
0x4E63F2: test    esi, esi
0x4E63F4: jz      short loc_4E640E
0x4E63F6: mov     ecx, [esi]
0x4E63F8: mov     edx, [ecx]
0x4E63FA: mov     [eax], edx
0x4E63FC: mov     edx, [ecx+4]
0x4E63FF: mov     [eax+4], edx
0x4E6402: mov     edx, [ecx+8]
0x4E6405: mov     [eax+8], edx
0x4E6408: mov     ecx, [ecx+0Ch]
0x4E640B: mov     [eax+0Ch], ecx
0x4E640E: mov     esi, [esi+4]
0x4E6411: add     eax, 10h
0x4E6414: sub     edi, 1
0x4E6417: jnz     short loc_4E63F2
0x4E6419: push    ebx; Size
0x4E641A: push    ebp; Src
0x4E641B: push    49524750h; int
0x4E6420: call    TESForm_PutFormRecordChunkData
0x4E6425: add     esp, 0Ch
0x4E6428: push    ebp; void *
0x4E6429: mov     ecx, offset FormHeap
0x4E642E: call    MemoryHeap_Free_checked
0x4E6433: mov     ecx, [esp+24h+var_10]
0x4E6437: mov     edx, [ecx+38h]
0x4E643A: add     ecx, 34h ; '4'
0x4E643D: xor     eax, eax
0x4E643F: test    edx, edx
0x4E6441: jbe     short loc_4E6457
0x4E6443: mov     esi, [ecx+8]
0x4E6446: mov     ecx, esi
0x4E6448: cmp     dword ptr [ecx], 0
0x4E644B: jnz     short loc_4E6477
0x4E644D: add     eax, 1
0x4E6450: add     ecx, 4
0x4E6453: cmp     eax, edx
0x4E6455: jb      short loc_4E6448
0x4E6457: xor     eax, eax
0x4E6459: test    eax, eax
0x4E645B: mov     edi, eax
0x4E645D: jz      loc_4E6592
0x4E6463: mov     eax, [edi]
0x4E6465: test    eax, eax
0x4E6467: mov     ebx, [edi+4]
0x4E646A: mov     esi, [edi+8]
0x4E646D: jz      short loc_4E647C
0x4E646F: mov     edi, eax
0x4E6471: mov     [esp+24h+var_C], eax
0x4E6475: jmp     short loc_4E64B6
0x4E6477: mov     eax, [esi+eax*4]
0x4E647A: jmp     short loc_4E6459
0x4E647C: mov     edi, [esp+24h+var_10]
0x4E6480: mov     edx, [edi+34h]
0x4E6483: mov     eax, [edx+4]
0x4E6486: add     edi, 34h ; '4'
0x4E6489: push    ebx
0x4E648A: mov     ecx, edi
0x4E648C: call    eax
0x4E648E: mov     edx, [edi+4]
0x4E6491: add     eax, 1
0x4E6494: cmp     eax, edx
0x4E6496: jnb     short loc_4E64B0
0x4E6498: mov     ecx, [edi+8]
0x4E649B: lea     ecx, [ecx+eax*4]
0x4E649E: mov     edi, edi
0x4E64A0: mov     edi, [ecx]
0x4E64A2: test    edi, edi
0x4E64A4: jnz     short loc_4E64B2
0x4E64A6: add     eax, 1
0x4E64A9: add     ecx, 4
0x4E64AC: cmp     eax, edx
0x4E64AE: jb      short loc_4E64A0
0x4E64B0: xor     edi, edi
0x4E64B2: mov     [esp+24h+var_C], edi
0x4E64B6: test    ebx, ebx
0x4E64B8: jz      loc_4E658A
0x4E64BE: test    esi, esi
0x4E64C0: jz      loc_4E658A
0x4E64C6: cmp     dword ptr [esi+4], 0
0x4E64CA: jnz     short loc_4E64D5
0x4E64CC: cmp     dword ptr [esi], 0
0x4E64CF: jz      loc_4E658A
0x4E64D5: xor     ecx, ecx
0x4E64D7: mov     eax, esi
0x4E64D9: lea     esp, [esp+0]
0x4E64E0: cmp     dword ptr [eax], 0
0x4E64E3: jz      short loc_4E64E8
0x4E64E5: add     ecx, 1
0x4E64E8: mov     eax, [eax+4]
0x4E64EB: test    eax, eax
0x4E64ED: jnz     short loc_4E64E0
0x4E64EF: lea     ecx, ds:4[ecx*4]
0x4E64F6: push    1
0x4E64F8: mov     [esp+28h+Size], ecx
0x4E64FC: push    ecx
0x4E64FD: mov     ecx, offset FormHeap
0x4E6502: call    j_MemoryHeap_Alloc
0x4E6507: mov     edx, [ebx+0Ch]
0x4E650A: mov     edi, eax
0x4E650C: mov     [esp+24h+var_4], edi
0x4E6510: mov     [edi], edx
0x4E6512: lea     ebp, [edi+4]
0x4E6515: cmp     dword ptr [esi+4], 0
0x4E6519: jnz     short loc_4E6520
0x4E651B: cmp     dword ptr [esi], 0
0x4E651E: jz      short loc_4E6568
0x4E6520: mov     eax, [esp+24h+var_10]
0x4E6524: mov     ecx, [eax+24h]
0x4E6527: mov     ebx, [esi]
0x4E6529: or      edi, 0FFFFFFFFh
0x4E652C: test    ecx, ecx
0x4E652E: jz      short loc_4E6557
0x4E6530: test    ebx, ebx
0x4E6532: jz      short loc_4E6557
0x4E6534: mov     edx, [esp+24h+var_10]
0x4E6538: movzx   edx, word ptr [edx+30h]
0x4E653C: xor     eax, eax
0x4E653E: test    edx, edx
0x4E6540: jle     short loc_4E6557
0x4E6542: mov     ecx, [ecx+4]
0x4E6545: cmp     [ecx], ebx
0x4E6547: jz      short loc_4E6555
0x4E6549: add     eax, 1
0x4E654C: add     ecx, 4
0x4E654F: cmp     eax, edx
0x4E6551: jl      short loc_4E6545
0x4E6553: jmp     short loc_4E6557
0x4E6555: mov     edi, eax
0x4E6557: mov     [ebp+0], edi
0x4E655A: mov     esi, [esi+4]
0x4E655D: mov     edi, [esp+24h+var_4]
0x4E6561: add     ebp, 4
0x4E6564: test    esi, esi
0x4E6566: jnz     short loc_4E6515
0x4E6568: mov     eax, [esp+24h+Size]
0x4E656C: push    eax; Size
0x4E656D: push    edi; Src
0x4E656E: push    4C524750h; int
0x4E6573: call    TESForm_PutFormRecordChunkData
0x4E6578: add     esp, 0Ch
0x4E657B: push    edi; void *
0x4E657C: mov     ecx, offset FormHeap
0x4E6581: call    MemoryHeap_Free_checked
0x4E6586: mov     edi, [esp+24h+var_C]
0x4E658A: test    edi, edi
0x4E658C: jnz     loc_4E6463
0x4E6592: mov     ecx, [esp+24h+var_10]; this
0x4E6596: call    TESForm_FinalizeFormRecord
0x4E659B: call    sub_46B370
0x4E65A0: pop     ebp
0x4E65A1: pop     ebx
0x4E65A2: pop     edi
0x4E65A3: pop     esi
0x4E65A4: add     esp, 14h
0x4E65A7: retn
