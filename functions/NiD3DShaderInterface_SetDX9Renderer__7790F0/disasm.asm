0x7790F0: mov     eax, [esp+arg_0]
0x7790F4: test    eax, eax
0x7790F6: push    esi
0x7790F7: mov     esi, ecx
0x7790F9: mov     [esi+14h], eax
0x7790FC: jz      short loc_779134
0x7790FE: push    edi
0x7790FF: mov     edi, [eax+280h]
0x779105: mov     eax, [esi+10h]
0x779108: test    eax, eax
0x77910A: jz      short loc_779114
0x77910C: mov     ecx, [eax]
0x77910E: mov     edx, [ecx+8]
0x779111: push    eax
0x779112: call    edx
0x779114: test    edi, edi
0x779116: mov     [esi+10h], edi
0x779119: jz      short loc_779123
0x77911B: mov     eax, [edi]
0x77911D: mov     ecx, [eax+4]
0x779120: push    edi
0x779121: call    ecx
0x779123: mov     edx, [esi+14h]
0x779126: mov     eax, [edx+8ACh]
0x77912C: pop     edi
0x77912D: mov     [esi+18h], eax
0x779130: pop     esi
0x779131: retn    4
0x779134: mov     eax, [esi+10h]
0x779137: test    eax, eax
0x779139: mov     dword ptr [esi+18h], 0
0x779140: jz      short loc_77914A
0x779142: mov     ecx, [eax]
0x779144: mov     edx, [ecx+8]
0x779147: push    eax
0x779148: call    edx
0x77914A: mov     dword ptr [esi+10h], 0
0x779151: pop     esi
0x779152: retn    4
