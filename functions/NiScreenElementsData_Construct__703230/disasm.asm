0x703230: push    0FFFFFFFFh
0x703232: push    offset SEH_703230
0x703237: mov     eax, large fs:0
0x70323D: push    eax
0x70323E: sub     esp, 10h
0x703241: push    ebx
0x703242: push    ebp
0x703243: push    esi
0x703244: push    edi
0x703245: mov     eax, ds:0B30AACh
0x70324A: xor     eax, esp
0x70324C: push    eax
0x70324D: lea     eax, [esp+30h+var_C]
0x703251: mov     large fs:0, eax
0x703257: mov     esi, ecx
0x703259: mov     [esp+30h+var_1C], esi
0x70325D: call    sub_71FBB0
0x703262: mov     eax, [esp+30h+arg_C]
0x703266: xor     ebp, ebp
0x703268: cmp     eax, ebp
0x70326A: mov     [esp+30h+var_4], ebp
0x70326E: mov     dword ptr [esi], offset ??_7NiScreenElementsData@@6B@; const NiScreenElementsData::`vftable'
0x703274: jg      short loc_70327B
0x703276: mov     eax, 1
0x70327B: mov     ecx, [esp+30h+arg_10]
0x70327F: cmp     ecx, ebp
0x703281: mov     [esi+60h], ax
0x703285: jg      short loc_70328C
0x703287: mov     ecx, 1
0x70328C: mov     [esi+62h], cx
0x703290: movzx   eax, ax
0x703293: xor     ecx, ecx
0x703295: mov     edx, 8
0x70329A: mul     edx
0x70329C: seto    cl
0x70329F: mov     [esi+64h], bp
0x7032A3: neg     ecx
0x7032A5: or      ecx, eax
0x7032A7: push    ecx; Size
0x7032A8: call    FormHeapAlloc
0x7032AD: mov     [esi+58h], eax
0x7032B0: movzx   eax, word ptr [esi+60h]
0x7032B4: xor     ecx, ecx
0x7032B6: mov     edx, 2
0x7032BB: mul     edx
0x7032BD: seto    cl
0x7032C0: neg     ecx
0x7032C2: or      ecx, eax
0x7032C4: push    ecx; Size
0x7032C5: call    FormHeapAlloc
0x7032CA: movzx   ecx, word ptr [esi+60h]
0x7032CE: add     ecx, ecx
0x7032D0: push    ecx
0x7032D1: push    0FFh
0x7032D6: push    eax
0x7032D7: mov     [esi+5Ch], eax
0x7032DA: call    __memset
0x7032DF: mov     eax, [esp+44h+arg_14]
0x7032E3: add     esp, 14h
0x7032E6: cmp     eax, ebp
0x7032E8: jg      short loc_7032EF
0x7032EA: mov     eax, 1
0x7032EF: mov     ecx, [esp+30h+arg_18]
0x7032F3: cmp     ecx, ebp
0x7032F5: mov     [esi+66h], ax
0x7032F9: jg      short loc_703300
0x7032FB: mov     ecx, 1
0x703300: mov     [esi+68h], cx
0x703304: movzx   eax, ax
0x703307: xor     ecx, ecx
0x703309: mov     edx, 0Ch
0x70330E: mul     edx
0x703310: seto    cl
0x703313: mov     [esi+8], bp
0x703317: neg     ecx
0x703319: or      ecx, eax
0x70331B: push    ecx; Size
0x70331C: call    FormHeapAlloc
0x703321: add     esp, 4
0x703324: cmp     [esp+30h+arg_0], 0
0x703329: mov     [esi+1Ch], eax
0x70332C: jz      loc_7033AF
0x703332: movzx   eax, word ptr [esi+66h]
0x703336: xor     ecx, ecx
0x703338: mov     edx, 0Ch
0x70333D: mul     edx
0x70333F: seto    cl
0x703342: neg     ecx
0x703344: or      ecx, eax
0x703346: push    ecx; Size
0x703347: call    FormHeapAlloc
0x70334C: add     esp, 4
0x70334F: xor     ecx, ecx
0x703351: cmp     [esi+66h], bp
0x703355: mov     [esi+20h], eax
0x703358: jbe     short loc_7033B2
0x70335A: lea     ebx, [ebx+0]
0x703360: fld     dword ptr ds:0B258E8h
0x703366: mov     edx, [esi+20h]
0x703369: fchs
0x70336B: movzx   eax, cx
0x70336E: fstp    [esp+30h+var_18]
0x703372: lea     eax, [eax+eax*2]
0x703375: fld     dword ptr ds:0B258ECh
0x70337B: lea     eax, [edx+eax*4]
0x70337E: mov     edx, [esp+30h+var_18]
0x703382: fchs
0x703384: fstp    [esp+30h+var_14]
0x703388: add     ecx, 1
0x70338B: fld     dword ptr ds:0B258F0h
0x703391: mov     [eax], edx
0x703393: mov     edx, [esp+30h+var_14]
0x703397: fchs
0x703399: mov     [eax+4], edx
0x70339C: fstp    [esp+30h+var_10]
0x7033A0: mov     edx, [esp+30h+var_10]
0x7033A4: mov     [eax+8], edx
0x7033A7: cmp     cx, [esi+66h]
0x7033AB: jb      short loc_703360
0x7033AD: jmp     short loc_7033B2
0x7033AF: mov     [esi+20h], ebp
0x7033B2: cmp     byte ptr [esp+30h+arg_4], 0
0x7033B7: jz      short loc_703400
0x7033B9: movzx   edi, word ptr [esi+66h]
0x7033BD: xor     ecx, ecx
0x7033BF: mov     eax, edi
0x7033C1: mov     edx, 10h
0x7033C6: mul     edx
0x7033C8: seto    cl
0x7033CB: neg     ecx
0x7033CD: or      ecx, eax
0x7033CF: push    ecx; Size
0x7033D0: call    FormHeapAlloc
0x7033D5: add     esp, 4
0x7033D8: cmp     eax, ebp
0x7033DA: jz      short loc_703400
0x7033DC: lea     edx, [edi-1]
0x7033DF: cmp     edx, ebp
0x7033E1: jl      short loc_703402
0x7033E3: fldz
0x7033E5: lea     ecx, [eax+8]
0x7033E8: fst     dword ptr [ecx-8]
0x7033EB: add     ecx, 10h
0x7033EE: sub     edx, 1
0x7033F1: fst     dword ptr [ecx-14h]
0x7033F4: fst     dword ptr [ecx-10h]
0x7033F7: fst     dword ptr [ecx-0Ch]
0x7033FA: jns     short loc_7033E8
0x7033FC: fstp    st
0x7033FE: jmp     short loc_703402
0x703400: xor     eax, eax
0x703402: mov     bx, [esp+30h+arg_8]
0x703407: cmp     bx, bp
0x70340A: mov     [esi+24h], eax
0x70340D: jbe     short loc_703446
0x70340F: movzx   eax, word ptr [esi+66h]
0x703413: movzx   ecx, bx
0x703416: imul    eax, ecx
0x703419: xor     ecx, ecx
0x70341B: mov     edx, 8
0x703420: mul     edx
0x703422: seto    cl
0x703425: neg     ecx
0x703427: or      ecx, eax
0x703429: push    ecx; Size
0x70342A: call    FormHeapAlloc
0x70342F: mov     [esi+28h], eax
0x703432: movzx   eax, byte ptr [esi+2Ch]
0x703436: xor     al, bl
0x703438: add     esp, 4
0x70343B: and     eax, 3Fh
0x70343E: xor     [esi+2Ch], ax
0x703442: xor     ebp, ebp
0x703444: jmp     short loc_703449
0x703446: mov     [esi+28h], ebp
0x703449: mov     eax, [esp+30h+arg_1C]
0x70344D: cmp     eax, ebp
0x70344F: lea     eax, [eax+eax*2]
0x703452: jg      short loc_703459
0x703454: mov     eax, 3
0x703459: mov     ecx, [esp+30h+arg_20]
0x70345D: cmp     ecx, ebp
0x70345F: mov     [esi+6Ah], ax
0x703463: lea     ecx, [ecx+ecx*2]
0x703466: jg      short loc_70346D
0x703468: mov     ecx, 3
0x70346D: mov     [esi+6Ch], cx
0x703471: movzx   eax, ax
0x703474: xor     ecx, ecx
0x703476: mov     edx, 2
0x70347B: mul     edx
0x70347D: seto    cl
0x703480: mov     [esi+40h], bp
0x703484: mov     [esi+44h], ebp
0x703487: neg     ecx
0x703489: or      ecx, eax
0x70348B: push    ecx; Size
0x70348C: call    FormHeapAlloc
0x703491: mov     [esi+48h], eax
0x703494: add     esp, 4
0x703497: mov     byte ptr [esi+6Eh], 0
0x70349B: mov     eax, esi
0x70349D: mov     ecx, [esp+30h+var_C]
0x7034A1: mov     large fs:0, ecx
0x7034A8: pop     ecx
0x7034A9: pop     edi
0x7034AA: pop     esi
0x7034AB: pop     ebp
0x7034AC: pop     ebx
0x7034AD: add     esp, 1Ch
0x7034B0: retn    24h ; '$'
