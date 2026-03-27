0x9411E0: sub     esp, 60h
0x9411E3: push    ebx
0x9411E4: push    ebp
0x9411E5: mov     ebp, [esp+68h+arg_0]
0x9411E9: push    esi
0x9411EA: mov     esi, ecx
0x9411EC: mov     ecx, [esp+6Ch+arg_C]
0x9411F0: push    edi
0x9411F1: mov     edi, [esp+70h+arg_4]
0x9411F5: xor     ebx, ebx
0x9411F7: cmp     ecx, ebx
0x9411F9: mov     eax, ebp
0x9411FB: mov     [esp+70h+var_60], eax
0x9411FF: mov     [esp+70h+arg_0], edi
0x941203: jz      short loc_941218
0x941205: mov     eax, [ecx]
0x941207: lea     edx, [esp+70h+arg_0]
0x94120B: push    edx
0x94120C: lea     edx, [esp+74h+var_60]
0x941210: push    edx
0x941211: call    dword ptr [eax+4]
0x941214: mov     eax, [esp+70h+var_60]
0x941218: cmp     eax, ebx
0x94121A: jz      loc_9413E3
0x941220: mov     ecx, [esp+70h+arg_10]
0x941227: push    ecx
0x941228: mov     [esp+74h+var_4C], eax
0x94122C: mov     eax, [esp+74h+arg_0]
0x941230: push    edi
0x941231: push    ebp
0x941232: mov     ecx, esi
0x941234: mov     [esp+7Ch+var_48], eax
0x941238: call    sub_940F60
0x94123D: mov     edx, [esi+0Ch]
0x941240: push    edx
0x941241: push    ebp
0x941242: lea     ecx, [esi+14h]
0x941245: mov     [esp+78h+var_3C], eax
0x941249: call    sub_8B0E80
0x94124E: mov     eax, [esi+10h]
0x941251: mov     ecx, [esi+0Ch]
0x941254: lea     edi, [esi+8]
0x941257: and     eax, 3FFFFFFFh
0x94125C: cmp     ecx, eax
0x94125E: jnz     short loc_94126B
0x941260: push    18h
0x941262: push    edi
0x941263: call    sub_8A6EE0
0x941268: add     esp, 8
0x94126B: mov     eax, [edi+4]
0x94126E: mov     edx, [edi]
0x941270: lea     ecx, [eax+eax*2]
0x941273: lea     eax, [edx+ecx*8]
0x941276: mov     edx, [esp+70h+var_4C]
0x94127A: mov     ecx, eax
0x94127C: mov     eax, [esp+70h+var_48]
0x941280: mov     [ecx], edx
0x941282: mov     edx, [esp+70h+arg_4]
0x941286: mov     [ecx+4], eax
0x941289: mov     eax, [esp+70h+var_3C]
0x94128D: mov     [ecx+8], ebp
0x941290: mov     [ecx+0Ch], edx
0x941293: mov     [ecx+10h], eax
0x941296: or      eax, 0FFFFFFFFh
0x941299: mov     [ecx+14h], eax
0x94129C: mov     ebp, [edi+4]
0x94129F: mov     eax, [esp+70h+arg_0]
0x9412A3: xor     ecx, ecx
0x9412A5: inc     ebp
0x9412A6: cmp     eax, offset unk_BA8788
0x9412AB: setz    cl
0x9412AE: mov     [edi+4], ebp
0x9412B1: mov     edx, [esi+50h]
0x9412B4: mov     edi, [esi+4Ch]
0x9412B7: add     edx, ecx
0x9412B9: mov     [esi+50h], edx
0x9412BC: xor     edx, edx
0x9412BE: cmp     eax, offset unk_BA8788
0x9412C3: setnz   dl
0x9412C6: lea     ecx, [esp+70h+arg_4]
0x9412CA: add     edi, edx
0x9412CC: mov     [esi+4Ch], edi
0x9412CF: call    sub_90BB90
0x9412D4: lea     eax, [esp+70h+arg_4]
0x9412D8: push    eax
0x9412D9: lea     ecx, [esp+74h+var_4C]
0x9412DD: call    sub_942D70
0x9412E2: mov     eax, 80000000h
0x9412E7: lea     ecx, [esp+70h+var_5C]
0x9412EB: mov     [esp+70h+var_34], ebx
0x9412EF: mov     [esp+70h+var_30], ebx
0x9412F3: mov     [esp+70h+var_2C], eax
0x9412F7: mov     [esp+70h+var_28], ebx
0x9412FB: mov     [esp+70h+var_24], ebx
0x9412FF: mov     [esp+70h+var_20], eax
0x941303: mov     [esp+70h+var_1C], ebx
0x941307: mov     [esp+70h+var_18], ebx
0x94130B: mov     [esp+70h+var_14], eax
0x94130F: mov     [esp+70h+var_10], ebx
0x941313: mov     [esp+70h+var_C], ebx
0x941317: mov     [esp+70h+var_8], eax
0x94131B: mov     [esp+70h+var_4], ebx
0x94131F: call    sub_953140
0x941324: mov     edx, [esp+70h+arg_0]
0x941328: mov     eax, [esp+70h+var_60]
0x94132C: lea     ecx, [esp+70h+var_34]
0x941330: push    ecx
0x941331: push    edx
0x941332: push    eax
0x941333: lea     ecx, [esp+7Ch+var_5C]
0x941337: push    ecx
0x941338: lea     ecx, [esp+80h+var_4C]
0x94133C: call    sub_942D10
0x941341: mov     eax, [esp+70h+var_24]
0x941345: xor     ebp, ebp
0x941347: cmp     eax, ebx
0x941349: jle     short loc_94138E
0x94134B: mov     ecx, [esp+70h+var_28]
0x94134F: xor     edi, edi
0x941351: mov     eax, [edi+ecx+8]
0x941355: cmp     eax, ebx
0x941357: jz      short loc_941382
0x941359: mov     edx, [esp+70h+arg_10]
0x941360: push    edx
0x941361: mov     edx, [esp+74h+arg_C]
0x941368: push    edx
0x941369: mov     edx, [esp+78h+arg_8]
0x941370: push    edx
0x941371: push    eax
0x941372: mov     eax, [edi+ecx+4]
0x941376: push    eax
0x941377: mov     ecx, esi
0x941379: call    sub_941070
0x94137E: mov     ecx, [esp+70h+var_28]
0x941382: mov     eax, [esp+70h+var_24]
0x941386: inc     ebp
0x941387: add     edi, 0Ch
0x94138A: cmp     ebp, eax
0x94138C: jl      short loc_941351
0x94138E: mov     eax, [esp+70h+var_18]
0x941392: xor     edi, edi
0x941394: cmp     eax, ebx
0x941396: jle     short loc_9413BB
0x941398: add     esi, 38h ; '8'
0x94139B: jmp     short loc_9413A0
0x94139D: align 10h
0x9413A0: mov     ecx, [esp+70h+var_1C]
0x9413A4: mov     edx, [ecx+edi*8+4]
0x9413A8: push    0FFFFFFFFh
0x9413AA: push    edx
0x9413AB: mov     ecx, esi
0x9413AD: call    sub_9429D0
0x9413B2: mov     eax, [esp+70h+var_18]
0x9413B6: inc     edi
0x9413B7: cmp     edi, eax
0x9413B9: jl      short loc_9413A0
0x9413BB: lea     ecx, [esp+70h+var_34]
0x9413BF: mov     [esp+70h+var_5C], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9413C7: call    sub_941400
0x9413CC: lea     ecx, [esp+70h+var_4C]
0x9413D0: call    sub_942E10
0x9413D5: mov     eax, [esp+70h+arg_0]
0x9413D9: pop     edi
0x9413DA: pop     esi
0x9413DB: pop     ebp
0x9413DC: pop     ebx
0x9413DD: add     esp, 60h
0x9413E0: retn    14h
0x9413E3: push    0FFFFFFFFh
0x9413E5: push    ebp
0x9413E6: lea     ecx, [esi+14h]
0x9413E9: call    sub_8B0E80
0x9413EE: mov     eax, [esp+70h+arg_0]
0x9413F2: pop     edi
0x9413F3: pop     esi
0x9413F4: pop     ebp
0x9413F5: pop     ebx
0x9413F6: add     esp, 60h
0x9413F9: retn    14h
