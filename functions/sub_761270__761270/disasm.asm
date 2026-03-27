0x761270: sub     esp, 14h
0x761273: push    esi
0x761274: push    edi
0x761275: mov     edi, [esp+1Ch+arg_0]
0x761279: xor     esi, esi
0x76127B: cmp     edi, esi
0x76127D: jz      short loc_76129E
0x76127F: mov     eax, [edi]
0x761281: mov     edx, [eax+4]
0x761284: mov     ecx, edi
0x761286: call    edx
0x761288: cmp     eax, esi
0x76128A: jz      short loc_76129E
0x76128C: lea     esp, [esp+0]
0x761290: cmp     eax, offset dword_B3FD34
0x761295: jz      short loc_7612DE
0x761297: mov     eax, [eax+4]
0x76129A: cmp     eax, esi
0x76129C: jnz     short loc_761290
0x76129E: push    ebx
0x76129F: push    7Ch ; '|'; Size
0x7612A1: call    FormHeapAlloc
0x7612A6: mov     ebx, eax
0x7612A8: add     esp, 4
0x7612AB: cmp     ebx, esi
0x7612AD: jz      short loc_7612F2
0x7612AF: mov     ecx, [esp+20h+a5]
0x7612B3: push    ecx; a3
0x7612B4: push    edi; a2
0x7612B5: mov     ecx, ebx; this
0x7612B7: call    NiDX9TextureData__NiDX9TextureData
0x7612BC: mov     dword ptr [ebx], offset ??_7NiDX9SourceTextureData@@6B@; const NiDX9SourceTextureData::`vftable'
0x7612C2: mov     byte ptr [ebx+64h], 0
0x7612C6: mov     byte ptr [ebx+65h], 0
0x7612CA: mov     [ebx+68h], esi
0x7612CD: mov     [ebx+6Ch], esi
0x7612D0: mov     [ebx+70h], esi
0x7612D3: mov     [ebx+74h], esi
0x7612D6: mov     [ebx+78h], esi
0x7612D9: mov     [ebx+60h], esi
0x7612DC: jmp     short loc_7612F4
0x7612DE: mov     eax, [esp+1Ch+a5]
0x7612E2: push    eax
0x7612E3: push    edi
0x7612E4: call    sub_774550
0x7612E9: add     esp, 8
0x7612EC: pop     edi
0x7612ED: pop     esi
0x7612EE: add     esp, 14h
0x7612F1: retn
0x7612F2: xor     ebx, ebx
0x7612F4: push    ebp
0x7612F5: mov     ebp, [edi+3Ch]
0x7612F8: cmp     ebp, esi
0x7612FA: lea     ecx, [edi+18h]
0x7612FD: mov     [esp+24h+var_14], ecx
0x761301: jnz     short loc_761369
0x761303: mov     ebp, [edi+38h]
0x761306: cmp     ebp, esi
0x761308: jnz     short loc_761322
0x76130A: cmp     ebx, esi
0x76130C: jz      short loc_761318
0x76130E: mov     edx, [ebx]
0x761310: mov     eax, [edx]
0x761312: push    1
0x761314: mov     ecx, ebx
0x761316: call    eax
0x761318: pop     ebp
0x761319: pop     ebx
0x76131A: pop     edi
0x76131B: xor     eax, eax
0x76131D: pop     esi
0x76131E: add     esp, 14h
0x761321: retn
0x761322: cmp     byte ptr ds:0B3F709h, 0
0x761329: jz      short loc_761357
0x76132B: cmp     byte ptr [edi+41h], 0
0x76132F: jz      short loc_761357
0x761331: mov     eax, [esp+24h+a5]
0x761335: cmp     eax, esi
0x761337: jz      short loc_761357
0x761339: push    ecx; a6
0x76133A: push    eax; a5
0x76133B: push    ebp; Src
0x76133C: mov     ecx, ebx; this
0x76133E: call    NiDX9SourceTextureData_LoadTextureFile
0x761343: test    al, al
0x761345: jz      short loc_761357
0x761347: mov     ecx, [ebx+4]
0x76134A: pop     ebp
0x76134B: mov     [ecx+24h], ebx
0x76134E: mov     eax, ebx
0x761350: pop     ebx
0x761351: pop     edi
0x761352: pop     esi
0x761353: add     esp, 14h
0x761356: retn
0x761357: call    sub_71B280
0x76135C: mov     edx, [eax]
0x76135E: push    esi
0x76135F: mov     ecx, eax
0x761361: mov     eax, [edx+8]
0x761364: push    ebp
0x761365: call    eax
0x761367: mov     ebp, eax
0x761369: cmp     ebp, esi
0x76136B: mov     [esp+24h+var_10], ebp
0x76136F: jz      short loc_76137B
0x761371: lea     ecx, [ebp+4]
0x761374: push    ecx; lpAddend
0x761375: call    dword ptr ds:0A28078h
0x76137B: mov     esi, [esp+24h+a5]
0x76137F: add     esi, 6F4h
0x761385: test    ebp, ebp
0x761387: jnz     short loc_7613BF
0x761389: push    1
0x76138B: push    80000005h
0x761390: push    edi
0x761391: call    sub_701400
0x761396: mov     edx, [esp+30h+a5]
0x76139A: mov     ebp, eax
0x76139C: mov     eax, [edx+874h]
0x7613A2: mov     edx, [edi+38h]
0x7613A5: mov     ecx, [esi+eax*4]; void *
0x7613A8: push    edx
0x7613A9: push    offset aFailedToFindTe; "Failed to find texture %s\n"
0x7613AE: mov     [esp+38h+arg_0], ecx
0x7613B2: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7613B7: add     esp, 14h
0x7613BA: jmp     loc_7614D8
0x7613BF: mov     eax, [ebp+54h]
0x7613C2: mov     eax, [eax]
0x7613C4: test    eax, eax
0x7613C6: jz      short loc_7613ED
0x7613C8: lea     ecx, [eax-1]
0x7613CB: test    eax, ecx
0x7613CD: setz    al
0x7613D0: test    al, al
0x7613D2: jz      short loc_7613ED
0x7613D4: mov     edx, [ebp+58h]
0x7613D7: mov     eax, [edx]
0x7613D9: test    eax, eax
0x7613DB: jz      short loc_7613ED
0x7613DD: lea     ecx, [eax-1]
0x7613E0: test    eax, ecx
0x7613E2: setz    al
0x7613E5: test    al, al
0x7613E7: jnz     loc_76149C
0x7613ED: mov     ecx, [esp+24h+a5]
0x7613F1: mov     edx, [ecx]
0x7613F3: mov     eax, [edx+54h]
0x7613F6: call    eax
0x7613F8: test    al, 8
0x7613FA: jnz     loc_76149C
0x761400: mov     ecx, [esp+24h+a5]
0x761404: mov     edx, [ecx]
0x761406: mov     eax, [edx+54h]
0x761409: call    eax
0x76140B: test    al, 4
0x76140D: jz      short loc_76147A
0x76140F: mov     eax, [esp+24h+var_14]
0x761413: cmp     dword ptr [eax], 3
0x761416: push    esi
0x761417: jnz     short loc_761440
0x761419: mov     ecx, [eax]
0x76141B: mov     edx, [eax+4]
0x76141E: mov     eax, [eax+8]
0x761421: mov     [esp+28h+var_C], ecx
0x761425: lea     ecx, [esp+28h+var_C]
0x761429: mov     [esp+28h+var_8], edx
0x76142D: push    ecx
0x76142E: lea     edx, [ebp+8]
0x761431: mov     [esp+2Ch+var_4], eax
0x761435: mov     [esp+2Ch+var_C], 2
0x76143D: push    edx
0x76143E: jmp     short loc_761445
0x761440: push    eax
0x761441: lea     eax, [ebp+8]
0x761444: push    eax
0x761445: mov     ecx, ebx
0x761447: call    sub_773BA0
0x76144C: test    eax, eax
0x76144E: mov     [esp+24h+arg_0], eax
0x761452: jnz     loc_7614DC
0x761458: push    1
0x76145A: push    80000004h
0x76145F: push    edi
0x761460: call    sub_701400
0x761465: mov     ecx, [esp+30h+a5]
0x761469: mov     edx, [ecx+874h]
0x76146F: mov     ebp, eax
0x761471: mov     eax, [esi+edx*4]
0x761474: mov     [esp+30h+arg_0], eax
0x761478: jmp     short loc_7614D5
0x76147A: push    1
0x76147C: push    80000006h
0x761481: push    edi
0x761482: call    sub_701400
0x761487: mov     ecx, [esp+30h+a5]
0x76148B: mov     edx, [ecx+874h]
0x761491: mov     ebp, eax
0x761493: mov     eax, [esi+edx*4]
0x761496: mov     [esp+30h+arg_0], eax
0x76149A: jmp     short loc_7614D5
0x76149C: mov     ecx, [esp+24h+var_14]
0x7614A0: push    esi
0x7614A1: push    ecx
0x7614A2: lea     edx, [ebp+8]
0x7614A5: push    edx
0x7614A6: mov     ecx, ebx
0x7614A8: call    sub_773BA0
0x7614AD: test    eax, eax
0x7614AF: mov     [esp+24h+arg_0], eax
0x7614B3: jnz     short loc_7614DC
0x7614B5: push    1
0x7614B7: push    80000004h
0x7614BC: push    edi
0x7614BD: call    sub_701400
0x7614C2: mov     ebp, eax
0x7614C4: mov     eax, [esp+30h+a5]
0x7614C8: mov     ecx, [eax+874h]
0x7614CE: mov     edx, [esi+ecx*4]
0x7614D1: mov     [esp+30h+arg_0], edx
0x7614D5: add     esp, 0Ch
0x7614D8: mov     byte ptr [ebx+64h], 1
0x7614DC: mov     eax, [ebp+68h]
0x7614DF: mov     esi, [esp+24h+arg_0]
0x7614E3: mov     [ebx+74h], eax
0x7614E6: lea     edi, [ebx+0Ch]
0x7614E9: mov     ecx, 11h
0x7614EE: rep movsd
0x7614F0: mov     ecx, [ebp+54h]
0x7614F3: mov     edx, [ecx]
0x7614F5: mov     [ebx+54h], edx
0x7614F8: mov     eax, [ebp+58h]
0x7614FB: mov     ecx, [eax]
0x7614FD: mov     al, [ebx+64h]
0x761500: test    al, al
0x761502: mov     [ebx+58h], ecx
0x761505: jnz     short loc_761524
0x761507: mov     edx, [esp+24h+var_14]
0x76150B: mov     ecx, [edx+8]
0x76150E: cmp     ecx, 1
0x761511: jz      short loc_761520
0x761513: cmp     ecx, 2
0x761516: jnz     short loc_761524
0x761518: cmp     ds:0B3F708h, al
0x76151E: jz      short loc_761524
0x761520: mov     cl, 1
0x761522: jmp     short loc_761526
0x761524: xor     cl, cl
0x761526: test    al, al
0x761528: mov     [ebx+65h], cl
0x76152B: jz      short loc_761531
0x76152D: mov     esi, ebp
0x76152F: jmp     short loc_76154D
0x761531: call    sub_71B280
0x761536: movzx   ecx, byte ptr [ebx+65h]
0x76153A: mov     edx, [eax]
0x76153C: mov     edx, [edx+10h]
0x76153F: push    ecx
0x761540: mov     ecx, [esp+28h+arg_0]
0x761544: push    ebp
0x761545: push    ecx
0x761546: push    ebp
0x761547: mov     ecx, eax
0x761549: call    edx
0x76154B: mov     esi, eax
0x76154D: cmp     dword ptr [ebx+50h], 0
0x761551: jnz     short loc_761561
0x761553: push    esi
0x761554: mov     ecx, ebx
0x761556: call    sub_760700
0x76155B: cmp     dword ptr [ebx+50h], 0
0x76155F: jz      short loc_761569
0x761561: push    esi
0x761562: mov     ecx, ebx
0x761564: call    sub_760CC0
0x761569: mov     ebp, [ebp+4Ch]
0x76156C: test    ebp, ebp
0x76156E: jz      short loc_761584
0x761570: cmp     [ebx+6Ch], ebp
0x761573: mov     eax, [ebp+10h]
0x761576: lea     ecx, [ebx+6Ch]; this
0x761579: mov     [ebx+78h], eax
0x76157C: jz      short loc_761584
0x76157E: push    ebp; a2
0x76157F: call    NiSmartPointer_Set??
0x761584: mov     ecx, [esi+60h]
0x761587: mov     edx, [esi+5Ch]
0x76158A: mov     eax, [edx+ecx*4]
0x76158D: imul    eax, [esi+6Ch]
0x761591: lea     edi, [esi+4]
0x761594: push    edi; lpAddend
0x761595: mov     [ebx+68h], eax
0x761598: call    dword ptr ds:0A28078h
0x76159E: mov     ecx, [ebx+4]
0x7615A1: push    edi; lpAddend
0x7615A2: mov     edi, ds:0A2807Ch
0x7615A8: mov     [ecx+24h], ebx
0x7615AB: call    edi ; InterlockedDecrement
0x7615AD: test    eax, eax
0x7615AF: jnz     short loc_7615BB
0x7615B1: mov     edx, [esi]
0x7615B3: mov     eax, [edx]
0x7615B5: push    1
0x7615B7: mov     ecx, esi
0x7615B9: call    eax
0x7615BB: mov     esi, [esp+24h+var_10]
0x7615BF: test    esi, esi
0x7615C1: jz      short loc_7615D7
0x7615C3: lea     ecx, [esi+4]
0x7615C6: push    ecx; lpAddend
0x7615C7: call    edi ; InterlockedDecrement
0x7615C9: test    eax, eax
0x7615CB: jnz     short loc_7615D7
0x7615CD: mov     edx, [esi]
0x7615CF: mov     eax, [edx]
0x7615D1: push    1
0x7615D3: mov     ecx, esi
0x7615D5: call    eax
0x7615D7: pop     ebp
0x7615D8: mov     eax, ebx
0x7615DA: pop     ebx
0x7615DB: pop     edi
0x7615DC: pop     esi
0x7615DD: add     esp, 14h
0x7615E0: retn
