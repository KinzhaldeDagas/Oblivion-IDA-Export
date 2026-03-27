0x76E800: sub     esp, 0Ch
0x76E803: push    ebx
0x76E804: push    ebp
0x76E805: push    esi
0x76E806: mov     esi, [esp+18h+arg_0]
0x76E80A: mov     ebp, [esi+10h]
0x76E80D: mov     ebx, [esi+24h]
0x76E810: push    edi
0x76E811: xor     edi, edi
0x76E813: cmp     ebp, edi
0x76E815: mov     [esp+1Ch+var_C], edi
0x76E819: jnz     short loc_76E853
0x76E81B: cmp     [esi+8], di
0x76E81F: jbe     loc_76E8F8
0x76E825: mov     eax, [esi+1Ch]
0x76E828: push    eax
0x76E829: push    0
0x76E82B: push    ebx
0x76E82C: call    __memset
0x76E831: mov     eax, [esi+1Ch]
0x76E834: add     ebx, [esi+20h]
0x76E837: add     [esp+28h+var_C], eax
0x76E83B: add     edi, 1
0x76E83E: add     esp, 0Ch
0x76E841: cmp     di, [esi+8]
0x76E845: jb      short loc_76E828
0x76E847: mov     eax, [esp+1Ch+var_C]
0x76E84B: pop     edi
0x76E84C: pop     esi
0x76E84D: pop     ebp
0x76E84E: pop     ebx
0x76E84F: add     esp, 0Ch
0x76E852: retn
0x76E853: mov     ax, [esi+4]
0x76E857: mov     dx, [esi]
0x76E85A: sub     ax, 4
0x76E85E: add     dx, 1
0x76E862: movzx   ecx, ax
0x76E865: movzx   eax, dx
0x76E868: mov     edx, ecx
0x76E86A: sub     edx, eax
0x76E86C: test    dx, dx
0x76E86F: mov     [esp+1Ch+var_8], eax
0x76E873: jle     short loc_76E87E
0x76E875: movzx   ecx, ax
0x76E878: mov     [esp+1Ch+arg_0], ecx
0x76E87C: jmp     short loc_76E885
0x76E87E: movzx   edx, cx
0x76E881: mov     [esp+1Ch+arg_0], edx
0x76E885: cmp     [esi+8], di
0x76E889: mov     [esp+1Ch+var_4], edi
0x76E88D: jbe     short loc_76E8F8
0x76E88F: fld     qword ptr ds:0A89C50h
0x76E895: fld1
0x76E897: xor     edx, edx
0x76E899: cmp     word ptr [esp+1Ch+arg_0], dx
0x76E89E: mov     edi, ebx
0x76E8A0: jbe     short loc_76E8C4
0x76E8A2: movzx   eax, word ptr [esp+1Ch+arg_0]
0x76E8A7: mov     ecx, ebp
0x76E8A9: sub     ecx, ebx
0x76E8AB: movzx   edx, ax
0x76E8AE: fild    dword ptr [ecx+edi]
0x76E8B1: add     edi, 4
0x76E8B4: sub     eax, 1
0x76E8B7: fmul    st, st(2)
0x76E8B9: fsub    st, st(1)
0x76E8BB: fstp    dword ptr [edi-4]
0x76E8BE: jnz     short loc_76E8AE
0x76E8C0: mov     eax, [esp+1Ch+var_8]
0x76E8C4: cmp     dx, ax
0x76E8C7: jnb     short loc_76E8D6
0x76E8C9: sub     eax, edx
0x76E8CB: movzx   ecx, ax
0x76E8CE: xor     eax, eax
0x76E8D0: rep stosd
0x76E8D2: mov     eax, [esp+1Ch+var_8]
0x76E8D6: mov     ecx, [esi+1Ch]
0x76E8D9: add     [esp+1Ch+var_C], ecx
0x76E8DD: mov     ecx, [esp+1Ch+var_4]
0x76E8E1: add     ebp, [esi+18h]
0x76E8E4: add     ebx, [esi+20h]
0x76E8E7: add     ecx, 1
0x76E8EA: cmp     cx, [esi+8]
0x76E8EE: mov     [esp+1Ch+var_4], ecx
0x76E8F2: jb      short loc_76E897
0x76E8F4: fstp    st(1)
0x76E8F6: fstp    st
0x76E8F8: mov     eax, [esp+1Ch+var_C]
0x76E8FC: pop     edi
0x76E8FD: pop     esi
0x76E8FE: pop     ebp
0x76E8FF: pop     ebx
0x76E900: add     esp, 0Ch
0x76E903: retn
