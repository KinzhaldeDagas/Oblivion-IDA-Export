0x770300: sub     esp, 10h
0x770303: push    ebx
0x770304: push    ebp
0x770305: push    esi
0x770306: mov     esi, [esp+1Ch+arg_0]
0x77030A: mov     edx, [esi+10h]
0x77030D: mov     ebx, [esi+24h]
0x770310: xor     ebp, ebp
0x770312: test    edx, edx
0x770314: push    edi
0x770315: mov     [esp+20h+var_C], ebp
0x770319: jnz     short loc_770357
0x77031B: xor     edi, edi
0x77031D: cmp     [esi+8], di
0x770321: jbe     loc_770410
0x770327: mov     eax, [esi+1Ch]
0x77032A: lea     ebx, [ebx+0]
0x770330: push    eax
0x770331: push    0
0x770333: push    ebx
0x770334: call    __memset
0x770339: mov     eax, [esi+1Ch]
0x77033C: add     ebx, [esi+20h]
0x77033F: add     edi, 1
0x770342: add     esp, 0Ch
0x770345: add     ebp, eax
0x770347: cmp     di, [esi+8]
0x77034B: jb      short loc_770330
0x77034D: pop     edi
0x77034E: pop     esi
0x77034F: mov     eax, ebp
0x770351: pop     ebp
0x770352: pop     ebx
0x770353: add     esp, 10h
0x770356: retn
0x770357: mov     ax, [esi+4]
0x77035B: xor     ecx, ecx
0x77035D: sub     ax, 4
0x770361: cmp     dword ptr [esi], 6
0x770364: movzx   edi, ax
0x770367: setnz   cl
0x77036A: lea     ecx, [ecx+ecx+2]
0x77036E: movzx   eax, cx
0x770371: mov     ecx, edi
0x770373: sub     ecx, eax
0x770375: test    cx, cx
0x770378: mov     [esp+20h+var_4], eax
0x77037C: jle     short loc_770387
0x77037E: movzx   eax, ax
0x770381: mov     [esp+20h+arg_0], eax
0x770385: jmp     short loc_77038E
0x770387: movzx   ecx, di
0x77038A: mov     [esp+20h+arg_0], ecx
0x77038E: cmp     [esi+8], bp
0x770392: mov     [esp+20h+var_8], ebp
0x770396: jbe     short loc_770410
0x770398: jmp     short loc_7703A0
0x77039A: align 10h
0x7703A0: mov     ecx, [esp+20h+arg_0]
0x7703A4: test    cx, cx
0x7703A7: mov     eax, edx
0x7703A9: mov     edi, ebx
0x7703AB: mov     [esp+20h+var_10], 0
0x7703B3: jbe     short loc_7703D5
0x7703B5: movzx   ecx, cx
0x7703B8: movzx   ebp, cx
0x7703BB: mov     [esp+20h+var_10], ebp
0x7703BF: nop
0x7703C0: mov     bp, [eax]
0x7703C3: mov     [edi], bp
0x7703C6: add     edi, 2
0x7703C9: add     eax, 4
0x7703CC: sub     ecx, 1
0x7703CF: jnz     short loc_7703C0
0x7703D1: mov     ebp, [esp+20h+var_C]
0x7703D5: mov     eax, [esp+20h+var_4]
0x7703D9: mov     ecx, [esp+20h+var_10]
0x7703DD: cmp     cx, ax
0x7703E0: jnb     short loc_7703F2
0x7703E2: sub     eax, ecx
0x7703E4: movzx   ecx, ax
0x7703E7: xor     eax, eax
0x7703E9: shr     ecx, 1
0x7703EB: rep stosd
0x7703ED: adc     ecx, ecx
0x7703EF: rep stosw
0x7703F2: mov     eax, [esp+20h+var_8]
0x7703F6: add     ebp, [esi+1Ch]
0x7703F9: add     edx, [esi+18h]
0x7703FC: add     ebx, [esi+20h]
0x7703FF: add     eax, 1
0x770402: cmp     ax, [esi+8]
0x770406: mov     [esp+20h+var_C], ebp
0x77040A: mov     [esp+20h+var_8], eax
0x77040E: jb      short loc_7703A0
0x770410: pop     edi
0x770411: pop     esi
0x770412: mov     eax, ebp
0x770414: pop     ebp
0x770415: pop     ebx
0x770416: add     esp, 10h
0x770419: retn
