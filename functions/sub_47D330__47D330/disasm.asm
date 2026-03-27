0x47D330: mov     dx, [esp+arg_0]
0x47D335: sub     esp, 8
0x47D338: push    esi
0x47D339: mov     esi, ds:0B067B8h
0x47D33F: cmp     dx, si
0x47D342: movzx   ecx, dx
0x47D345: mov     eax, 1
0x47D34A: jbe     short loc_47D352
0x47D34C: add     esi, 0FFFFFFFFh
0x47D34F: movzx   ecx, si
0x47D352: pop     esi
0x47D353: movzx   edx, ax
0x47D356: cmp     cx, ds:0B06728h[edx*2]
0x47D35E: jb      short loc_47D369
0x47D360: add     eax, 1
0x47D363: cmp     ax, 0Ch
0x47D367: jb      short loc_47D353
0x47D369: add     eax, 0FFFFh
0x47D36E: movzx   eax, ax
0x47D371: sub     cx, ds:0B06728h[eax*2]
0x47D379: mov     word ptr [esp+8+var_4], cx
0x47D37E: mov     edx, [esp+8+var_4]
0x47D382: add     esp, 8
0x47D385: retn
