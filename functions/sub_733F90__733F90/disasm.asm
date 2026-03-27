0x733F90: sub     esp, 10h
0x733F93: mov     eax, ds:0B30AACh
0x733F98: xor     eax, esp
0x733F9A: mov     [esp+10h+var_4], eax
0x733F9E: push    ebx
0x733F9F: push    ebp
0x733FA0: push    esi
0x733FA1: mov     esi, ecx
0x733FA3: push    edi
0x733FA4: mov     edi, [esi+8]
0x733FA7: movzx   ax, byte ptr [edi+1]
0x733FAC: movzx   edx, byte ptr [edi]
0x733FAF: shl     ax, 8
0x733FB3: add     ax, dx
0x733FB6: movzx   eax, ax
0x733FB9: add     edi, 2
0x733FBC: mov     [esi+8], edi
0x733FBF: movzx   edx, byte ptr [edi+1]
0x733FC3: movzx   bx, byte ptr [edi]
0x733FC7: shl     dx, 8
0x733FCB: add     dx, bx
0x733FCE: mov     bl, ah
0x733FD0: movzx   edx, dx
0x733FD3: and     bl, 0F8h
0x733FD6: mov     [esp+20h+var_10], bl
0x733FDA: mov     ebx, eax
0x733FDC: add     al, al
0x733FDE: add     al, al
0x733FE0: add     al, al
0x733FE2: mov     [esp+20h+var_E], al
0x733FE6: mov     al, dh
0x733FE8: and     al, 0F8h
0x733FEA: mov     [esp+20h+var_D], al
0x733FEE: movzx   ebp, [esp+20h+var_D]
0x733FF3: mov     eax, edx
0x733FF5: add     dl, dl
0x733FF7: add     dl, dl
0x733FF9: add     dl, dl
0x733FFB: shr     eax, 3
0x733FFE: and     al, 0FEh
0x734000: mov     [esp+20h+var_B], dl
0x734004: mov     [esp+20h+var_C], al
0x734008: add     edi, 2
0x73400B: mov     [esi+8], edi
0x73400E: movzx   edi, [esp+20h+var_10]
0x734013: lea     edx, [ebp+edi*2+0]
0x734017: mov     eax, 0AAAAAAABh
0x73401C: mul     edx
0x73401E: movzx   eax, [esp+20h+var_C]
0x734023: shr     edx, 1
0x734025: mov     [esp+20h+var_A], dl
0x734029: shr     ebx, 3
0x73402C: and     bl, 0FEh
0x73402F: mov     [esp+20h+var_F], bl
0x734033: movzx   ebx, bl
0x734036: lea     edx, [eax+ebx*2]
0x734039: mov     eax, 0AAAAAAABh
0x73403E: mul     edx
0x734040: movzx   eax, [esp+20h+var_E]
0x734045: shr     edx, 1
0x734047: mov     [esp+20h+var_9], dl
0x73404B: movzx   edx, [esp+20h+var_B]
0x734050: lea     edx, [edx+eax*2]
0x734053: mov     eax, 0AAAAAAABh
0x734058: mul     edx
0x73405A: shr     edx, 1
0x73405C: mov     [esp+20h+var_8], dl
0x734060: lea     edx, [edi+ebp*2]
0x734063: mov     eax, 0AAAAAAABh
0x734068: mul     edx
0x73406A: movzx   eax, [esp+20h+var_C]
0x73406F: shr     edx, 1
0x734071: mov     [esp+20h+var_7], dl
0x734075: lea     edx, [ebx+eax*2]
0x734078: mov     eax, 0AAAAAAABh
0x73407D: mul     edx
0x73407F: movzx   eax, [esp+20h+var_E]
0x734084: mov     ecx, [esp+20h+arg_0]
0x734088: shr     edx, 1
0x73408A: mov     [esp+20h+var_6], dl
0x73408E: movzx   edx, [esp+20h+var_B]
0x734093: lea     edx, [eax+edx*2]
0x734096: mov     eax, 0AAAAAAABh
0x73409B: mul     edx
0x73409D: shr     edx, 1
0x73409F: mov     [esp+20h+var_5], dl
0x7340A3: mov     ebp, 4
0x7340A8: mov     ebx, 1
0x7340AD: lea     ecx, [ecx+0]
0x7340B0: mov     eax, [esi+8]
0x7340B3: mov     al, [eax]
0x7340B5: movzx   edx, al
0x7340B8: and     edx, 3
0x7340BB: lea     edi, [esp+edx+20h+var_10]
0x7340BF: lea     edi, [edi+edx*2]
0x7340C2: movzx   edx, byte ptr [edi]
0x7340C5: mov     [ecx], dl
0x7340C7: movzx   edx, byte ptr [edi+ebx]
0x7340CB: mov     [ecx+1], dl
0x7340CE: movzx   edx, byte ptr [edi+ebx+1]
0x7340D3: add     edi, ebx
0x7340D5: mov     [ecx+2], dl
0x7340D8: shr     al, 2
0x7340DB: movzx   edx, al
0x7340DE: and     edx, 3
0x7340E1: lea     edi, [esp+edx+20h+var_10]
0x7340E5: lea     edi, [edi+edx*2]
0x7340E8: movzx   edx, byte ptr [edi]
0x7340EB: mov     [ecx+4], dl
0x7340EE: movzx   edx, byte ptr [edi+ebx]
0x7340F2: add     edi, ebx
0x7340F4: mov     [ecx+5], dl
0x7340F7: movzx   edx, byte ptr [edi+1]
0x7340FB: shr     al, 2
0x7340FE: mov     [ecx+6], dl
0x734101: movzx   eax, al
0x734104: mov     edx, eax
0x734106: and     edx, 3
0x734109: lea     edi, [esp+edx+20h+var_10]
0x73410D: lea     edi, [edi+edx*2]
0x734110: movzx   edx, byte ptr [edi]
0x734113: mov     [ecx+8], dl
0x734116: movzx   edx, byte ptr [edi+ebx]
0x73411A: add     edi, ebx
0x73411C: mov     [ecx+9], dl
0x73411F: movzx   edx, byte ptr [edi+1]
0x734123: shr     eax, 2
0x734126: and     eax, 3
0x734129: mov     [ecx+0Ah], dl
0x73412C: lea     edx, [esp+eax+20h+var_10]
0x734130: lea     eax, [edx+eax*2]
0x734133: movzx   edx, byte ptr [eax]
0x734136: add     eax, ebx
0x734138: mov     [ecx+0Ch], dl
0x73413B: movzx   edx, byte ptr [eax]
0x73413E: movzx   eax, byte ptr [eax+1]
0x734142: mov     [ecx+0Dh], dl
0x734145: mov     [ecx+0Eh], al
0x734148: add     [esi+8], ebx
0x73414B: add     ecx, 10h
0x73414E: sub     ebp, ebx
0x734150: jnz     loc_7340B0
0x734156: mov     ecx, [esp+20h+var_4]
0x73415A: pop     edi
0x73415B: pop     esi
0x73415C: pop     ebp
0x73415D: pop     ebx
0x73415E: xor     ecx, esp
0x734160: call    @__security_check_cookie@4; __security_check_cookie(x)
0x734165: add     esp, 10h
0x734168: retn    4
