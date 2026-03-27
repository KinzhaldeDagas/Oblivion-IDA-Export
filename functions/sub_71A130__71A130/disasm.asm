0x71A130: push    ecx
0x71A131: push    ebx
0x71A132: mov     ebx, [esp+8+arg_0]
0x71A136: push    esi
0x71A137: push    edi
0x71A138: push    ebx
0x71A139: mov     esi, ecx
0x71A13B: call    sub_732E70
0x71A140: mov     eax, [ebx+21Ch]
0x71A146: mov     edx, [eax+4]
0x71A149: push    1
0x71A14B: lea     ecx, [esp+14h+arg_0]
0x71A14F: push    ecx
0x71A150: push    2
0x71A152: lea     edi, [esi+44h]
0x71A155: push    edi
0x71A156: push    eax
0x71A157: mov     [esp+24h+arg_0], 2
0x71A15F: call    edx
0x71A161: add     esp, 14h
0x71A164: cmp     word ptr [edi], 0
0x71A168: jbe     loc_71A299
0x71A16E: mov     eax, [esi]
0x71A170: mov     edx, [eax+44h]
0x71A173: push    ebp
0x71A174: mov     ecx, esi
0x71A176: call    edx
0x71A178: test    eax, eax
0x71A17A: jz      short loc_71A19C
0x71A17C: movzx   ebp, word ptr [edi]
0x71A17F: mov     eax, [esi]
0x71A181: mov     edx, [eax+44h]
0x71A184: mov     ecx, esi
0x71A186: add     ebp, ebp
0x71A188: call    edx
0x71A18A: mov     ecx, [eax+8]
0x71A18D: add     dword ptr [eax+0Ch], 1
0x71A191: lea     edx, [ecx+ebp]
0x71A194: mov     [eax+8], edx
0x71A197: mov     [esi+48h], ecx
0x71A19A: jmp     short loc_71A1BB
0x71A19C: movzx   eax, word ptr [edi]
0x71A19F: xor     ecx, ecx
0x71A1A1: mov     edx, 2
0x71A1A6: mul     edx
0x71A1A8: seto    cl
0x71A1AB: neg     ecx
0x71A1AD: or      ecx, eax
0x71A1AF: push    ecx; Size
0x71A1B0: call    FormHeapAlloc
0x71A1B5: add     esp, 4
0x71A1B8: mov     [esi+48h], eax
0x71A1BB: movzx   edx, word ptr [edi]
0x71A1BE: mov     eax, [ebx+21Ch]
0x71A1C4: mov     ebp, 1
0x71A1C9: push    ebp
0x71A1CA: lea     ecx, [esp+18h+var_4]
0x71A1CE: push    ecx
0x71A1CF: mov     ecx, [esi+48h]
0x71A1D2: add     edx, edx
0x71A1D4: push    edx
0x71A1D5: mov     edx, [eax+4]
0x71A1D8: push    ecx
0x71A1D9: push    eax
0x71A1DA: mov     [esp+28h+var_4], 2
0x71A1E2: call    edx
0x71A1E4: add     esp, 14h
0x71A1E7: cmp     dword ptr [ebx+0D8h], 0A000111h
0x71A1F1: jb      short loc_71A24D
0x71A1F3: mov     eax, [ebx+21Ch]
0x71A1F9: push    ebp
0x71A1FA: lea     ecx, [esp+18h+var_4]
0x71A1FE: push    ecx
0x71A1FF: push    ebp
0x71A200: lea     edx, [esp+20h+arg_0]
0x71A204: push    edx
0x71A205: push    eax
0x71A206: mov     eax, [eax+4]
0x71A209: mov     [esp+28h+var_4], ebp
0x71A20D: call    eax
0x71A20F: add     esp, 14h
0x71A212: cmp     byte ptr [esp+14h+arg_0], 0
0x71A217: jz      short loc_71A298
0x71A219: mov     cx, [edi]
0x71A21C: mov     edx, [esi]
0x71A21E: mov     eax, [edx+44h]
0x71A221: add     cx, cx
0x71A224: add     cx, [esi+40h]
0x71A228: movzx   edi, cx
0x71A22B: mov     ecx, esi
0x71A22D: call    eax
0x71A22F: test    eax, eax
0x71A231: jz      short loc_71A254
0x71A233: mov     edx, [esi]
0x71A235: mov     eax, [edx+44h]
0x71A238: mov     ecx, esi
0x71A23A: call    eax
0x71A23C: mov     ecx, [eax+8]
0x71A23F: add     [eax+0Ch], ebp
0x71A242: lea     edx, [ecx+edi*2]
0x71A245: mov     [eax+8], edx
0x71A248: mov     [esi+4Ch], ecx
0x71A24B: jmp     short loc_71A272
0x71A24D: mov     byte ptr [esp+14h+arg_0], 1
0x71A252: jmp     short loc_71A219
0x71A254: xor     ecx, ecx
0x71A256: mov     eax, edi
0x71A258: mov     edx, 2
0x71A25D: mul     edx
0x71A25F: seto    cl
0x71A262: neg     ecx
0x71A264: or      ecx, eax
0x71A266: push    ecx; Size
0x71A267: call    FormHeapAlloc
0x71A26C: add     esp, 4
0x71A26F: mov     [esi+4Ch], eax
0x71A272: mov     edx, [esi+4Ch]
0x71A275: mov     ebx, [ebx+21Ch]
0x71A27B: push    1
0x71A27D: lea     eax, [esp+18h+var_4]
0x71A281: push    eax
0x71A282: mov     eax, [ebx+4]
0x71A285: lea     ecx, [edi+edi]
0x71A288: push    ecx
0x71A289: push    edx
0x71A28A: push    ebx
0x71A28B: mov     [esp+28h+var_4], 2
0x71A293: call    eax
0x71A295: add     esp, 14h
0x71A298: pop     ebp
0x71A299: pop     edi
0x71A29A: pop     esi
0x71A29B: pop     ebx
0x71A29C: pop     ecx
0x71A29D: retn    4
