0x76E910: sub     esp, 0Ch
0x76E913: push    ebx
0x76E914: push    ebp
0x76E915: push    esi
0x76E916: mov     esi, [esp+18h+arg_0]
0x76E91A: mov     ebp, [esi+10h]
0x76E91D: mov     ebx, [esi+24h]
0x76E920: push    edi
0x76E921: xor     edi, edi
0x76E923: cmp     ebp, edi
0x76E925: mov     [esp+1Ch+var_C], edi
0x76E929: jnz     short loc_76E963
0x76E92B: cmp     [esi+8], di
0x76E92F: jbe     loc_76EA02
0x76E935: mov     eax, [esi+1Ch]
0x76E938: push    eax
0x76E939: push    0
0x76E93B: push    ebx
0x76E93C: call    __memset
0x76E941: mov     eax, [esi+1Ch]
0x76E944: add     ebx, [esi+20h]
0x76E947: add     [esp+28h+var_C], eax
0x76E94B: add     edi, 1
0x76E94E: add     esp, 0Ch
0x76E951: cmp     di, [esi+8]
0x76E955: jb      short loc_76E938
0x76E957: mov     eax, [esp+1Ch+var_C]
0x76E95B: pop     edi
0x76E95C: pop     esi
0x76E95D: pop     ebp
0x76E95E: pop     ebx
0x76E95F: add     esp, 0Ch
0x76E962: retn
0x76E963: mov     ax, [esi+4]
0x76E967: mov     dx, [esi]
0x76E96A: sub     ax, 8
0x76E96E: add     dx, 1
0x76E972: movzx   ecx, ax
0x76E975: movzx   eax, dx
0x76E978: mov     edx, ecx
0x76E97A: sub     edx, eax
0x76E97C: test    dx, dx
0x76E97F: mov     [esp+1Ch+var_8], eax
0x76E983: jle     short loc_76E98E
0x76E985: movzx   ecx, ax
0x76E988: mov     [esp+1Ch+arg_0], ecx
0x76E98C: jmp     short loc_76E995
0x76E98E: movzx   edx, cx
0x76E991: mov     [esp+1Ch+arg_0], edx
0x76E995: cmp     [esi+8], di
0x76E999: mov     [esp+1Ch+var_4], edi
0x76E99D: jbe     short loc_76EA02
0x76E99F: fld     qword ptr ds:0A89C58h
0x76E9A5: xor     edx, edx
0x76E9A7: cmp     word ptr [esp+1Ch+arg_0], dx
0x76E9AC: mov     edi, ebx
0x76E9AE: jbe     short loc_76E9D0
0x76E9B0: movzx   eax, word ptr [esp+1Ch+arg_0]
0x76E9B5: mov     ecx, ebp
0x76E9B7: sub     ecx, ebx
0x76E9B9: movzx   edx, ax
0x76E9BC: fild    dword ptr [ecx+edi]
0x76E9BF: add     edi, 4
0x76E9C2: sub     eax, 1
0x76E9C5: fmul    st, st(1)
0x76E9C7: fstp    dword ptr [edi-4]
0x76E9CA: jnz     short loc_76E9BC
0x76E9CC: mov     eax, [esp+1Ch+var_8]
0x76E9D0: cmp     dx, ax
0x76E9D3: jnb     short loc_76E9E2
0x76E9D5: sub     eax, edx
0x76E9D7: movzx   ecx, ax
0x76E9DA: xor     eax, eax
0x76E9DC: rep stosd
0x76E9DE: mov     eax, [esp+1Ch+var_8]
0x76E9E2: mov     ecx, [esi+1Ch]
0x76E9E5: add     [esp+1Ch+var_C], ecx
0x76E9E9: mov     ecx, [esp+1Ch+var_4]
0x76E9ED: add     ebp, [esi+18h]
0x76E9F0: add     ebx, [esi+20h]
0x76E9F3: add     ecx, 1
0x76E9F6: cmp     cx, [esi+8]
0x76E9FA: mov     [esp+1Ch+var_4], ecx
0x76E9FE: jb      short loc_76E9A5
0x76EA00: fstp    st
0x76EA02: mov     eax, [esp+1Ch+var_C]
0x76EA06: pop     edi
0x76EA07: pop     esi
0x76EA08: pop     ebp
0x76EA09: pop     ebx
0x76EA0A: add     esp, 0Ch
0x76EA0D: retn
