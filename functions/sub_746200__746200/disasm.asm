0x746200: sub     esp, 18h
0x746203: push    ebx
0x746204: push    ebp
0x746205: movzx   ebp, word ptr [edx+2]
0x746209: push    esi
0x74620A: xor     esi, esi
0x74620C: test    ebp, ebp
0x74620E: push    edi
0x74620F: mov     ebx, ecx
0x746211: mov     [esp+28h+var_C], 0FFFFFFFFh
0x746219: mov     [esp+28h+var_14], ebp
0x74621D: mov     ecx, 7
0x746222: mov     edi, 4
0x746227: jnz     short loc_746233
0x746229: mov     ecx, 8Ah ; 'Š'
0x74622E: mov     edi, 3
0x746233: test    ebx, ebx
0x746235: jl      loc_746709
0x74623B: add     edx, 6
0x74623E: add     ebx, 1
0x746241: mov     [esp+28h+var_10], edx
0x746245: mov     [esp+28h+var_8], ebx
0x746249: mov     ebp, 1
0x74624E: mov     edi, edi
0x746250: mov     ebx, [esp+28h+var_10]
0x746254: movzx   ebx, word ptr [ebx]
0x746257: mov     edx, [esp+28h+var_14]
0x74625B: add     esi, ebp
0x74625D: cmp     esi, ecx
0x74625F: mov     [esp+28h+var_4], edx
0x746263: mov     [esp+28h+var_14], ebx
0x746267: mov     [esp+28h+var_18], esi
0x74626B: jge     short loc_746275
0x74626D: cmp     edx, ebx
0x74626F: jz      loc_7466FA
0x746275: cmp     esi, edi
0x746277: jge     loc_74631F
0x74627D: lea     ecx, [ecx+0]
0x746280: movzx   edi, word ptr [eax+edx*4+0A76h]
0x746288: mov     ecx, [eax+16B4h]
0x74628E: mov     ebx, 10h
0x746293: sub     ebx, edi
0x746295: cmp     ecx, ebx
0x746297: jle     short loc_7462F4
0x746299: movzx   esi, word ptr [eax+edx*4+0A74h]
0x7462A1: mov     edx, esi
0x7462A3: shl     edx, cl
0x7462A5: mov     ecx, [eax+8]
0x7462A8: or      [eax+16B0h], dx
0x7462AF: movzx   ebx, byte ptr [eax+16B0h]
0x7462B6: mov     edx, [eax+14h]
0x7462B9: mov     [ecx+edx], bl
0x7462BC: add     [eax+14h], ebp
0x7462BF: mov     ecx, [eax+14h]
0x7462C2: movzx   ebx, byte ptr [eax+16B1h]
0x7462C9: mov     edx, [eax+8]
0x7462CC: mov     [ecx+edx], bl
0x7462CF: mov     edx, [eax+16B4h]
0x7462D5: add     [eax+14h], ebp
0x7462D8: mov     cl, 10h
0x7462DA: sub     cl, dl
0x7462DC: shr     si, cl
0x7462DF: lea     ecx, [edx+edi-10h]
0x7462E3: mov     edx, [esp+28h+var_4]
0x7462E7: mov     [eax+16B0h], si
0x7462EE: mov     esi, [esp+28h+var_18]
0x7462F2: jmp     short loc_746308
0x7462F4: mov     bx, [eax+edx*4+0A74h]
0x7462FC: shl     bx, cl
0x7462FF: or      [eax+16B0h], bx
0x746306: add     ecx, edi
0x746308: sub     esi, ebp
0x74630A: mov     [eax+16B4h], ecx
0x746310: mov     [esp+28h+var_18], esi
0x746314: jnz     loc_746280
0x74631A: jmp     loc_7466C6
0x74631F: test    edx, edx
0x746321: jz      loc_7464CC
0x746327: cmp     edx, [esp+28h+var_C]
0x74632B: jz      loc_7463CD
0x746331: movzx   edi, word ptr [eax+edx*4+0A76h]
0x746339: mov     ecx, [eax+16B4h]
0x74633F: mov     ebx, 10h
0x746344: sub     ebx, edi
0x746346: cmp     ecx, ebx
0x746348: mov     [esp+28h+var_C], edi
0x74634C: jle     short loc_7463A9
0x74634E: movzx   esi, word ptr [eax+edx*4+0A74h]
0x746356: mov     edi, esi
0x746358: shl     edi, cl
0x74635A: mov     ecx, [eax+8]
0x74635D: or      [eax+16B0h], di
0x746364: movzx   ebx, byte ptr [eax+16B0h]
0x74636B: mov     edi, [eax+14h]
0x74636E: mov     [ecx+edi], bl
0x746371: add     [eax+14h], ebp
0x746374: movzx   ebx, byte ptr [eax+16B1h]
0x74637B: mov     ecx, [eax+8]
0x74637E: mov     edi, [eax+14h]
0x746381: mov     [edi+ecx], bl
0x746384: mov     ebx, [eax+16B4h]
0x74638A: add     [eax+14h], ebp
0x74638D: mov     cl, 10h
0x74638F: sub     cl, bl
0x746391: shr     si, cl
0x746394: mov     ecx, [esp+28h+var_C]
0x746398: lea     ecx, [ebx+ecx-10h]
0x74639C: mov     [eax+16B0h], si
0x7463A3: mov     esi, [esp+28h+var_18]
0x7463A7: jmp     short loc_7463C1
0x7463A9: mov     di, [eax+edx*4+0A74h]
0x7463B1: shl     di, cl
0x7463B4: or      [eax+16B0h], di
0x7463BB: mov     edi, [esp+28h+var_C]
0x7463BF: add     ecx, edi
0x7463C1: sub     esi, ebp
0x7463C3: mov     [eax+16B4h], ecx
0x7463C9: mov     [esp+28h+var_18], esi
0x7463CD: movzx   edi, word ptr [eax+0AB6h]
0x7463D4: mov     ecx, [eax+16B4h]
0x7463DA: mov     ebx, 10h
0x7463DF: sub     ebx, edi
0x7463E1: cmp     ecx, ebx
0x7463E3: mov     [esp+28h+var_C], edi
0x7463E7: jle     short loc_746443
0x7463E9: movzx   esi, word ptr [eax+0AB4h]
0x7463F0: mov     edi, esi
0x7463F2: shl     edi, cl
0x7463F4: mov     ecx, [eax+8]
0x7463F7: or      [eax+16B0h], di
0x7463FE: movzx   ebx, byte ptr [eax+16B0h]
0x746405: mov     edi, [eax+14h]
0x746408: mov     [ecx+edi], bl
0x74640B: add     [eax+14h], ebp
0x74640E: movzx   ebx, byte ptr [eax+16B1h]
0x746415: mov     ecx, [eax+8]
0x746418: mov     edi, [eax+14h]
0x74641B: mov     [edi+ecx], bl
0x74641E: mov     ebx, [eax+16B4h]
0x746424: add     [eax+14h], ebp
0x746427: mov     cl, 10h
0x746429: sub     cl, bl
0x74642B: shr     si, cl
0x74642E: mov     ecx, [esp+28h+var_C]
0x746432: lea     ecx, [ebx+ecx-10h]
0x746436: mov     [eax+16B0h], si
0x74643D: mov     esi, [esp+28h+var_18]
0x746441: jmp     short loc_74645A
0x746443: mov     di, [eax+0AB4h]
0x74644A: shl     di, cl
0x74644D: or      [eax+16B0h], di
0x746454: mov     edi, [esp+28h+var_C]
0x746458: add     ecx, edi
0x74645A: add     esi, 0FFFFFFFDh
0x74645D: cmp     ecx, 0Eh
0x746460: mov     [eax+16B4h], ecx
0x746466: jle     short loc_7464BB
0x746468: mov     edi, esi
0x74646A: shl     edi, cl
0x74646C: mov     ecx, [eax+8]
0x74646F: or      [eax+16B0h], di
0x746476: movzx   ebx, byte ptr [eax+16B0h]
0x74647D: mov     edi, [eax+14h]
0x746480: mov     [ecx+edi], bl
0x746483: add     [eax+14h], ebp
0x746486: movzx   ebx, byte ptr [eax+16B1h]
0x74648D: mov     edi, [eax+14h]
0x746490: mov     ecx, [eax+8]
0x746493: mov     [edi+ecx], bl
0x746496: mov     ebx, [eax+16B4h]
0x74649C: add     [eax+14h], ebp
0x74649F: mov     cl, 10h
0x7464A1: sub     cl, bl
0x7464A3: shr     si, cl
0x7464A6: add     ebx, 0FFFFFFF2h
0x7464A9: mov     [eax+16B4h], ebx
0x7464AF: mov     [eax+16B0h], si
0x7464B6: jmp     loc_7466C6
0x7464BB: shl     esi, cl
0x7464BD: or      [eax+16B0h], si
0x7464C4: add     ecx, 2
0x7464C7: jmp     loc_7466C0
0x7464CC: cmp     esi, 0Ah
0x7464CF: mov     ecx, [eax+16B4h]
0x7464D5: mov     ebx, 10h
0x7464DA: jg      loc_7465D4
0x7464E0: movzx   edi, word ptr [eax+0ABAh]
0x7464E7: sub     ebx, edi
0x7464E9: cmp     ecx, ebx
0x7464EB: mov     [esp+28h+var_C], edi
0x7464EF: jle     short loc_74654B
0x7464F1: movzx   esi, word ptr [eax+0AB8h]
0x7464F8: mov     edi, esi
0x7464FA: shl     edi, cl
0x7464FC: mov     ecx, [eax+8]
0x7464FF: or      [eax+16B0h], di
0x746506: movzx   ebx, byte ptr [eax+16B0h]
0x74650D: mov     edi, [eax+14h]
0x746510: mov     [ecx+edi], bl
0x746513: add     [eax+14h], ebp
0x746516: movzx   ebx, byte ptr [eax+16B1h]
0x74651D: mov     ecx, [eax+8]
0x746520: mov     edi, [eax+14h]
0x746523: mov     [edi+ecx], bl
0x746526: mov     ebx, [eax+16B4h]
0x74652C: add     [eax+14h], ebp
0x74652F: mov     cl, 10h
0x746531: sub     cl, bl
0x746533: shr     si, cl
0x746536: mov     ecx, [esp+28h+var_C]
0x74653A: lea     ecx, [ebx+ecx-10h]
0x74653E: mov     [eax+16B0h], si
0x746545: mov     esi, [esp+28h+var_18]
0x746549: jmp     short loc_746562
0x74654B: mov     di, [eax+0AB8h]
0x746552: shl     di, cl
0x746555: or      [eax+16B0h], di
0x74655C: mov     edi, [esp+28h+var_C]
0x746560: add     ecx, edi
0x746562: add     esi, 0FFFFFFFDh
0x746565: cmp     ecx, 0Dh
0x746568: mov     [eax+16B4h], ecx
0x74656E: jle     short loc_7465C3
0x746570: mov     edi, esi
0x746572: shl     edi, cl
0x746574: mov     ecx, [eax+8]
0x746577: or      [eax+16B0h], di
0x74657E: movzx   ebx, byte ptr [eax+16B0h]
0x746585: mov     edi, [eax+14h]
0x746588: mov     [ecx+edi], bl
0x74658B: add     [eax+14h], ebp
0x74658E: movzx   ebx, byte ptr [eax+16B1h]
0x746595: mov     edi, [eax+14h]
0x746598: mov     ecx, [eax+8]
0x74659B: mov     [edi+ecx], bl
0x74659E: mov     ebx, [eax+16B4h]
0x7465A4: add     [eax+14h], ebp
0x7465A7: mov     cl, 10h
0x7465A9: sub     cl, bl
0x7465AB: shr     si, cl
0x7465AE: add     ebx, 0FFFFFFF3h
0x7465B1: mov     [eax+16B4h], ebx
0x7465B7: mov     [eax+16B0h], si
0x7465BE: jmp     loc_7466C6
0x7465C3: shl     esi, cl
0x7465C5: or      [eax+16B0h], si
0x7465CC: add     ecx, 3
0x7465CF: jmp     loc_7466C0
0x7465D4: movzx   edi, word ptr [eax+0ABEh]
0x7465DB: sub     ebx, edi
0x7465DD: cmp     ecx, ebx
0x7465DF: mov     [esp+28h+var_C], edi
0x7465E3: jle     short loc_74663F
0x7465E5: movzx   esi, word ptr [eax+0ABCh]
0x7465EC: mov     edi, esi
0x7465EE: shl     edi, cl
0x7465F0: mov     ecx, [eax+8]
0x7465F3: or      [eax+16B0h], di
0x7465FA: movzx   ebx, byte ptr [eax+16B0h]
0x746601: mov     edi, [eax+14h]
0x746604: mov     [ecx+edi], bl
0x746607: add     [eax+14h], ebp
0x74660A: movzx   ebx, byte ptr [eax+16B1h]
0x746611: mov     ecx, [eax+8]
0x746614: mov     edi, [eax+14h]
0x746617: mov     [edi+ecx], bl
0x74661A: mov     ebx, [eax+16B4h]
0x746620: add     [eax+14h], ebp
0x746623: mov     cl, 10h
0x746625: sub     cl, bl
0x746627: shr     si, cl
0x74662A: mov     ecx, [esp+28h+var_C]
0x74662E: lea     ecx, [ebx+ecx-10h]
0x746632: mov     [eax+16B0h], si
0x746639: mov     esi, [esp+28h+var_18]
0x74663D: jmp     short loc_746656
0x74663F: mov     di, [eax+0ABCh]
0x746646: shl     di, cl
0x746649: or      [eax+16B0h], di
0x746650: mov     edi, [esp+28h+var_C]
0x746654: add     ecx, edi
0x746656: add     esi, 0FFFFFFF5h
0x746659: cmp     ecx, 9
0x74665C: mov     [eax+16B4h], ecx
0x746662: jle     short loc_7466B4
0x746664: mov     edi, esi
0x746666: shl     edi, cl
0x746668: mov     ecx, [eax+8]
0x74666B: or      [eax+16B0h], di
0x746672: movzx   ebx, byte ptr [eax+16B0h]
0x746679: mov     edi, [eax+14h]
0x74667C: mov     [ecx+edi], bl
0x74667F: add     [eax+14h], ebp
0x746682: movzx   ebx, byte ptr [eax+16B1h]
0x746689: mov     edi, [eax+14h]
0x74668C: mov     ecx, [eax+8]
0x74668F: mov     [edi+ecx], bl
0x746692: mov     ebx, [eax+16B4h]
0x746698: add     [eax+14h], ebp
0x74669B: mov     cl, 10h
0x74669D: sub     cl, bl
0x74669F: shr     si, cl
0x7466A2: add     ebx, 0FFFFFFF7h
0x7466A5: mov     [eax+16B4h], ebx
0x7466AB: mov     [eax+16B0h], si
0x7466B2: jmp     short loc_7466C6
0x7466B4: shl     esi, cl
0x7466B6: or      [eax+16B0h], si
0x7466BD: add     ecx, 7
0x7466C0: mov     [eax+16B4h], ecx
0x7466C6: mov     ecx, [esp+28h+var_14]
0x7466CA: xor     esi, esi
0x7466CC: test    ecx, ecx
0x7466CE: mov     [esp+28h+var_C], edx
0x7466D2: jnz     short loc_7466E0
0x7466D4: mov     ecx, 8Ah ; 'Š'
0x7466D9: mov     edi, 3
0x7466DE: jmp     short loc_7466FA
0x7466E0: cmp     edx, ecx
0x7466E2: jnz     short loc_7466F0
0x7466E4: mov     ecx, 6
0x7466E9: mov     edi, 3
0x7466EE: jmp     short loc_7466FA
0x7466F0: mov     ecx, 7
0x7466F5: mov     edi, 4
0x7466FA: add     [esp+28h+var_10], 4
0x7466FF: sub     [esp+28h+var_8], ebp
0x746703: jnz     loc_746250
0x746709: pop     edi
0x74670A: pop     esi
0x74670B: pop     ebp
0x74670C: pop     ebx
0x74670D: add     esp, 18h
0x746710: retn
