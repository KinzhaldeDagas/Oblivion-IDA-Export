0x51F210: push    esi
0x51F211: mov     esi, [esp+4+arg_4]
0x51F215: test    esi, esi
0x51F217: mov     eax, offset aDummy; "DUMMY"
0x51F21C: jz      short loc_51F287
0x51F21E: mov     ecx, [esp+4+arg_0]
0x51F222: sub     ecx, 0
0x51F225: push    edi
0x51F226: jz      short loc_51F25C
0x51F228: sub     ecx, 1
0x51F22B: jnz     short loc_51F286
0x51F22D: movzx   ecx, word ptr [esi+0Ch]
0x51F231: cmp     cx, 0FFFFh
0x51F236: jnz     short loc_51F24D
0x51F238: mov     ecx, [esi+8]
0x51F23B: lea     edi, [ecx+1]
0x51F23E: mov     edi, edi
0x51F240: mov     dl, [ecx]
0x51F242: add     ecx, 1
0x51F245: test    dl, dl
0x51F247: jnz     short loc_51F240
0x51F249: sub     ecx, edi
0x51F24B: jmp     short loc_51F250
0x51F24D: movzx   ecx, cx
0x51F250: test    ecx, ecx
0x51F252: jz      short loc_51F25C
0x51F254: mov     eax, [esi+8]
0x51F257: pop     edi
0x51F258: pop     esi
0x51F259: retn    8
0x51F25C: movzx   ecx, word ptr [esi+4]
0x51F260: cmp     cx, 0FFFFh
0x51F265: jnz     short loc_51F27D
0x51F267: mov     ecx, [esi]
0x51F269: lea     edi, [ecx+1]
0x51F26C: lea     esp, [esp+0]
0x51F270: mov     dl, [ecx]
0x51F272: add     ecx, 1
0x51F275: test    dl, dl
0x51F277: jnz     short loc_51F270
0x51F279: sub     ecx, edi
0x51F27B: jmp     short loc_51F280
0x51F27D: movzx   ecx, cx
0x51F280: test    ecx, ecx
0x51F282: jz      short loc_51F286
0x51F284: mov     eax, [esi]
0x51F286: pop     edi
0x51F287: pop     esi
0x51F288: retn    8
