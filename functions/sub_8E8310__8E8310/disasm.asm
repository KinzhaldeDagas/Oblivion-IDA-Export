0x8E8310: sub     esp, 8
0x8E8313: push    ebx
0x8E8314: mov     ebx, [esp+0Ch+arg_0]
0x8E8318: push    esi
0x8E8319: push    edi
0x8E831A: mov     edi, [esp+14h+arg_4]
0x8E831E: mov     eax, [edi+4]
0x8E8321: push    1
0x8E8323: lea     ecx, [esp+18h+arg_0]
0x8E8327: push    ecx
0x8E8328: mov     [esp+1Ch+arg_4], eax
0x8E832C: mov     eax, [ebx+220h]
0x8E8332: push    4
0x8E8334: lea     edx, [esp+20h+arg_4]
0x8E8338: push    edx
0x8E8339: push    eax
0x8E833A: mov     eax, [eax+8]
0x8E833D: mov     [esp+28h+arg_0], 4
0x8E8345: call    eax
0x8E8347: mov     eax, [esp+28h+arg_4]
0x8E834B: add     esp, 14h
0x8E834E: lea     ecx, ds:0[eax*4]
0x8E8355: xor     esi, esi
0x8E8357: test    eax, eax
0x8E8359: mov     [esp+14h+var_4], ecx
0x8E835D: jle     short loc_8E83A2
0x8E835F: nop
0x8E8360: mov     ecx, [edi]
0x8E8362: mov     edx, [ecx+esi*4]
0x8E8365: mov     eax, [ebx+220h]
0x8E836B: push    1
0x8E836D: lea     ecx, [esp+18h+arg_0]
0x8E8371: push    ecx
0x8E8372: mov     [esp+1Ch+var_8], edx
0x8E8376: push    4
0x8E8378: lea     edx, [esp+20h+var_8]
0x8E837C: push    edx
0x8E837D: push    eax
0x8E837E: mov     eax, [eax+8]
0x8E8381: mov     [esp+28h+arg_0], 4
0x8E8389: call    eax
0x8E838B: add     esi, 1
0x8E838E: add     esp, 14h
0x8E8391: cmp     esi, [esp+14h+arg_4]
0x8E8395: jl      short loc_8E8360
0x8E8397: mov     eax, [esp+14h+var_4]
0x8E839B: pop     edi
0x8E839C: pop     esi
0x8E839D: pop     ebx
0x8E839E: add     esp, 8
0x8E83A1: retn
0x8E83A2: pop     edi
0x8E83A3: pop     esi
0x8E83A4: mov     eax, ecx
0x8E83A6: pop     ebx
0x8E83A7: add     esp, 8
0x8E83AA: retn
