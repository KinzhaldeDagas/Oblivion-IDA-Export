0x89D670: push    ecx
0x89D671: push    esi
0x89D672: mov     esi, ecx
0x89D674: mov     eax, [esi]
0x89D676: mov     edx, [eax+74h]
0x89D679: push    edi
0x89D67A: lea     ecx, [esp+0Ch+var_1]
0x89D67E: push    ecx
0x89D67F: mov     ecx, esi
0x89D681: call    edx
0x89D683: mov     edi, eax
0x89D685: xor     eax, eax
0x89D687: test    edi, edi
0x89D689: jz      short loc_89D6B1
0x89D68B: mov     eax, [esi]
0x89D68D: mov     edx, [eax+68h]
0x89D690: mov     ecx, esi
0x89D692: call    edx
0x89D694: push    0
0x89D696: mov     esi, eax
0x89D698: mov     eax, [esp+10h+arg_0]
0x89D69C: mov     eax, [eax+21Ch]
0x89D6A2: mov     ecx, [eax+4]
0x89D6A5: push    0
0x89D6A7: push    esi
0x89D6A8: push    edi
0x89D6A9: push    eax
0x89D6AA: call    ecx
0x89D6AC: add     esp, 14h
0x89D6AF: mov     eax, esi
0x89D6B1: pop     edi
0x89D6B2: pop     esi
0x89D6B3: pop     ecx
0x89D6B4: retn    4
