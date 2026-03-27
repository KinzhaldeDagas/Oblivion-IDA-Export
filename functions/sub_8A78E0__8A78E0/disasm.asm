0x8A78E0: push    esi
0x8A78E1: push    edi
0x8A78E2: mov     edi, ecx
0x8A78E4: mov     ecx, [edi+14h]; lpCriticalSection
0x8A78E7: call    sub_8A7720
0x8A78EC: mov     eax, [edi+0Ch]
0x8A78EF: xor     esi, esi
0x8A78F1: test    eax, eax
0x8A78F3: jle     short loc_8A7921
0x8A78F5: push    ebx
0x8A78F6: mov     ebx, [esp+0Ch+arg_C]
0x8A78FA: push    ebp
0x8A78FB: mov     ebp, [esp+10h+arg_8]
0x8A78FF: nop
0x8A7900: mov     eax, [edi+8]
0x8A7903: mov     ecx, [eax+esi*4]
0x8A7906: mov     eax, [esp+10h+arg_4]
0x8A790A: mov     edx, [ecx]
0x8A790C: push    ebx
0x8A790D: push    ebp
0x8A790E: push    eax
0x8A790F: mov     eax, [esp+1Ch+arg_0]
0x8A7913: push    eax
0x8A7914: call    dword ptr [edx+1Ch]
0x8A7917: mov     eax, [edi+0Ch]
0x8A791A: inc     esi
0x8A791B: cmp     esi, eax
0x8A791D: jl      short loc_8A7900
0x8A791F: pop     ebp
0x8A7920: pop     ebx
0x8A7921: mov     ecx, [edi+14h]
0x8A7924: push    ecx; lpCriticalSection
0x8A7925: call    dword ptr ds:0A28074h
0x8A792B: pop     edi
0x8A792C: pop     esi
0x8A792D: retn    10h
