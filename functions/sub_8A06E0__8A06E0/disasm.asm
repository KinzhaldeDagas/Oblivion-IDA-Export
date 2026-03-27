0x8A06E0: push    ebx
0x8A06E1: push    ebp
0x8A06E2: push    esi
0x8A06E3: mov     esi, ecx
0x8A06E5: test    esi, esi
0x8A06E7: jz      short loc_8A06EE
0x8A06E9: mov     ebp, [esi+8]
0x8A06EC: jmp     short loc_8A06F0
0x8A06EE: xor     ebp, ebp
0x8A06F0: xor     bl, bl
0x8A06F2: test    ebp, ebp
0x8A06F4: jz      short loc_8A074C
0x8A06F6: mov     eax, [esi]
0x8A06F8: push    edi
0x8A06F9: mov     edi, [esp+10h+arg_0]
0x8A06FD: test    edi, edi
0x8A06FF: jz      short loc_8A073E
0x8A0701: mov     edx, [eax+58h]
0x8A0704: call    edx
0x8A0706: mov     ebx, eax
0x8A0708: mov     eax, [edi]
0x8A070A: mov     edx, [eax+58h]
0x8A070D: mov     ecx, edi
0x8A070F: call    edx
0x8A0711: cmp     ebx, eax
0x8A0713: jz      short loc_8A0754
0x8A0715: mov     eax, [esi]
0x8A0717: mov     edx, [eax+60h]
0x8A071A: mov     ecx, esi
0x8A071C: call    edx
0x8A071E: mov     eax, [esi]
0x8A0720: mov     edx, [eax+90h]
0x8A0726: push    1
0x8A0728: push    edi
0x8A0729: mov     ecx, esi
0x8A072B: call    edx
0x8A072D: push    ebp
0x8A072E: mov     ecx, edi
0x8A0730: call    sub_88C330
0x8A0735: pop     edi
0x8A0736: pop     esi
0x8A0737: pop     ebp
0x8A0738: mov     al, 1
0x8A073A: pop     ebx
0x8A073B: retn    4
0x8A073E: mov     edx, [eax+60h]
0x8A0741: call    edx
0x8A0743: pop     edi
0x8A0744: pop     esi
0x8A0745: pop     ebp
0x8A0746: mov     al, bl
0x8A0748: pop     ebx
0x8A0749: retn    4
0x8A074C: pop     esi
0x8A074D: pop     ebp
0x8A074E: mov     al, bl
0x8A0750: pop     ebx
0x8A0751: retn    4
0x8A0754: pop     edi
0x8A0755: pop     esi
0x8A0756: pop     ebp
0x8A0757: xor     al, al
0x8A0759: pop     ebx
0x8A075A: retn    4
