0x72D330: sub     esp, 18h
0x72D333: mov     eax, ds:0B30AACh
0x72D338: xor     eax, esp
0x72D33A: mov     [esp+18h+var_4], eax
0x72D33E: mov     eax, [esp+18h+arg_0]
0x72D342: push    ebx
0x72D343: push    ebp
0x72D344: push    esi
0x72D345: mov     esi, ecx
0x72D347: mov     ecx, [esi]
0x72D349: movzx   edx, word ptr [ecx]
0x72D34C: mov     ecx, [eax]
0x72D34E: mov     [esp+24h+var_10], dx
0x72D353: movzx   edx, word ptr [ecx]
0x72D356: push    edi
0x72D357: mov     edi, [eax+8]
0x72D35A: add     edi, [esi+8]
0x72D35D: mov     [esp+28h+var_8], eax
0x72D361: mov     [esp+28h+var_E], dx
0x72D366: xor     ecx, ecx
0x72D368: xor     ebp, ebp
0x72D36A: mov     eax, edi
0x72D36C: mov     edx, 2
0x72D371: mul     edx
0x72D373: seto    cl
0x72D376: mov     [esp+28h+var_C], esi
0x72D37A: mov     [esp+28h+var_14], ebp
0x72D37E: mov     [esp+28h+var_18], ebp
0x72D382: neg     ecx
0x72D384: or      ecx, eax
0x72D386: push    ecx; Size
0x72D387: call    FormHeapAlloc
0x72D38C: add     esp, 4
0x72D38F: mov     ebx, eax
0x72D391: mov     eax, 0FFFFh
0x72D396: cmp     [esp+28h+var_10], ax
0x72D39B: jnz     short loc_72D3A4
0x72D39D: cmp     [esp+28h+var_E], ax
0x72D3A2: jz      short loc_72D3B6
0x72D3A4: lea     ecx, [esp+28h+var_18]
0x72D3A8: call    sub_72CEC0
0x72D3AD: mov     [ebx+ebp*2], ax
0x72D3B1: add     ebp, 1
0x72D3B4: jmp     short loc_72D391
0x72D3B6: mov     eax, [esi]
0x72D3B8: push    eax
0x72D3B9: call    FormHeapFree
0x72D3BE: mov     ecx, [esp+2Ch+var_4]
0x72D3C2: add     esp, 4
0x72D3C5: mov     [esi+4], edi
0x72D3C8: pop     edi
0x72D3C9: mov     [esi], ebx
0x72D3CB: mov     [esi+8], ebp
0x72D3CE: pop     esi
0x72D3CF: pop     ebp
0x72D3D0: pop     ebx
0x72D3D1: xor     ecx, esp
0x72D3D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x72D3D8: add     esp, 18h
0x72D3DB: retn    4
