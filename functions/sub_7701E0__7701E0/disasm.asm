0x7701E0: sub     esp, 18h
0x7701E3: push    ebx
0x7701E4: push    ebp
0x7701E5: push    esi
0x7701E6: mov     esi, [esp+24h+arg_0]
0x7701EA: mov     ebx, [esi+10h]
0x7701ED: mov     ebp, [esi+24h]
0x7701F0: push    edi
0x7701F1: xor     edi, edi
0x7701F3: test    ebx, ebx
0x7701F5: mov     [esp+28h+var_18], edi
0x7701F9: mov     [esp+28h+var_C], ebx
0x7701FD: jnz     short loc_770237
0x7701FF: cmp     [esi+8], bx
0x770203: jbe     loc_7702F6
0x770209: mov     eax, [esi+1Ch]
0x77020C: lea     esp, [esp+0]
0x770210: push    eax
0x770211: push    0
0x770213: push    ebp
0x770214: call    __memset
0x770219: mov     eax, [esi+1Ch]
0x77021C: add     ebp, [esi+20h]
0x77021F: add     ebx, 1
0x770222: add     esp, 0Ch
0x770225: add     edi, eax
0x770227: cmp     bx, [esi+8]
0x77022B: jb      short loc_770210
0x77022D: mov     eax, edi
0x77022F: pop     edi
0x770230: pop     esi
0x770231: pop     ebp
0x770232: pop     ebx
0x770233: add     esp, 18h
0x770236: retn
0x770237: movzx   eax, word ptr [esi+4]
0x77023B: xor     ecx, ecx
0x77023D: cmp     dword ptr [esi], 6
0x770240: mov     edx, eax
0x770242: setnz   cl
0x770245: lea     ecx, [ecx+ecx+2]
0x770249: movzx   ecx, cx
0x77024C: sub     edx, ecx
0x77024E: test    dx, dx
0x770251: mov     [esp+28h+var_10], ecx
0x770255: jle     short loc_770260
0x770257: movzx   edx, cx
0x77025A: mov     [esp+28h+arg_0], edx
0x77025E: jmp     short loc_770269
0x770260: movzx   eax, ax
0x770263: mov     [esp+28h+arg_0], eax
0x770267: mov     edx, eax
0x770269: cmp     [esi+8], di
0x77026D: mov     [esp+28h+var_8], edi
0x770271: jbe     loc_7702F6
0x770277: xor     eax, eax
0x770279: test    dx, dx
0x77027C: mov     edi, ebp
0x77027E: jbe     short loc_7702B7
0x770280: movzx   eax, dx
0x770283: movzx   ecx, ax
0x770286: mov     [esp+28h+var_14], eax
0x77028A: mov     [esp+28h+var_4], ecx
0x77028E: mov     edi, edi
0x770290: fld     dword ptr [ebx]
0x770292: call    Double_To_SInt32
0x770297: mov     [edi], ax
0x77029A: add     edi, 2
0x77029D: add     ebx, 4
0x7702A0: sub     [esp+28h+var_14], 1
0x7702A5: jnz     short loc_770290
0x7702A7: mov     eax, [esp+28h+var_4]
0x7702AB: mov     edx, [esp+28h+arg_0]
0x7702AF: mov     ebx, [esp+28h+var_C]
0x7702B3: mov     ecx, [esp+28h+var_10]
0x7702B7: cmp     ax, cx
0x7702BA: jnb     short loc_7702D0
0x7702BC: sub     ecx, eax
0x7702BE: movzx   ecx, cx
0x7702C1: xor     eax, eax
0x7702C3: shr     ecx, 1
0x7702C5: rep stosd
0x7702C7: adc     ecx, ecx
0x7702C9: rep stosw
0x7702CC: mov     ecx, [esp+28h+var_10]
0x7702D0: mov     eax, [esi+1Ch]
0x7702D3: add     [esp+28h+var_18], eax
0x7702D7: mov     eax, [esp+28h+var_8]
0x7702DB: add     ebx, [esi+18h]
0x7702DE: add     ebp, [esi+20h]
0x7702E1: add     eax, 1
0x7702E4: cmp     ax, [esi+8]
0x7702E8: mov     [esp+28h+var_C], ebx
0x7702EC: mov     [esp+28h+var_8], eax
0x7702F0: jb      short loc_770277
0x7702F2: mov     edi, [esp+28h+var_18]
0x7702F6: mov     eax, edi
0x7702F8: pop     edi
0x7702F9: pop     esi
0x7702FA: pop     ebp
0x7702FB: pop     ebx
0x7702FC: add     esp, 18h
0x7702FF: retn
