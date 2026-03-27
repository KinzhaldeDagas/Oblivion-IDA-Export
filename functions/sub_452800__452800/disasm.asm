0x452800: mov     edx, [esp+arg_4]
0x452804: push    esi
0x452805: push    edi
0x452806: mov     edi, [esp+8+arg_0]
0x45280A: mov     eax, [edi]
0x45280C: mov     esi, ecx
0x45280E: mov     cl, [eax+4]
0x452811: mov     [edx], cl
0x452813: mov     ecx, [eax+8]
0x452816: mov     edx, [esp+8+arg_8]
0x45281A: mov     [edx], ecx
0x45281C: mov     ecx, [eax]
0x45281E: test    ecx, ecx
0x452820: jz      short loc_452829
0x452822: mov     [edi], ecx
0x452824: pop     edi
0x452825: pop     esi
0x452826: retn    0Ch
0x452829: movzx   eax, byte ptr [eax+4]
0x45282D: mov     edx, [esi]
0x45282F: mov     edx, [edx+4]
0x452832: push    eax
0x452833: mov     ecx, esi
0x452835: call    edx
0x452837: mov     edx, [esi+4]
0x45283A: add     eax, 1
0x45283D: cmp     eax, edx
0x45283F: jnb     short loc_452857
0x452841: mov     ecx, [esi+8]
0x452844: lea     ecx, [ecx+eax*4]
0x452847: mov     esi, [ecx]
0x452849: test    esi, esi
0x45284B: jnz     short loc_452862
0x45284D: add     eax, 1
0x452850: add     ecx, 4
0x452853: cmp     eax, edx
0x452855: jb      short loc_452847
0x452857: mov     dword ptr [edi], 0
0x45285D: pop     edi
0x45285E: pop     esi
0x45285F: retn    0Ch
0x452862: mov     [edi], esi
0x452864: pop     edi
0x452865: pop     esi
0x452866: retn    0Ch
