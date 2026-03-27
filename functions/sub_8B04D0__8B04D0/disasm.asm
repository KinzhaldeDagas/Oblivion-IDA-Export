0x8B04D0: push    ebx
0x8B04D1: push    esi
0x8B04D2: mov     esi, [esp+8+arg_0]
0x8B04D6: push    edi
0x8B04D7: push    esi
0x8B04D8: mov     edi, ecx
0x8B04DA: call    sub_8A2A50
0x8B04DF: mov     eax, ds:0BA7F9Ch
0x8B04E4: push    eax; ArgList
0x8B04E5: call    TESOutput_PrintString
0x8B04EA: movzx   ebx, word ptr [esi+0Ah]
0x8B04EE: movzx   ecx, word ptr [esi+8]
0x8B04F2: add     esp, 4
0x8B04F5: cmp     ebx, ecx
0x8B04F7: mov     [esp+0Ch+arg_0], eax
0x8B04FB: jb      short loc_8B050B
0x8B04FD: movzx   edx, word ptr [esi+0Eh]
0x8B0501: add     edx, ebx
0x8B0503: push    edx
0x8B0504: mov     ecx, esi
0x8B0506: call    NiTArray_SetSize
0x8B050B: lea     eax, [esp+0Ch+arg_0]
0x8B050F: push    eax
0x8B0510: push    ebx
0x8B0511: mov     ecx, esi
0x8B0513: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B0518: test    edi, edi
0x8B051A: jz      short loc_8B0528
0x8B051C: mov     edi, [edi+8]
0x8B051F: test    edi, edi
0x8B0521: jz      short loc_8B0528
0x8B0523: mov     eax, [edi+0Ch]
0x8B0526: jmp     short loc_8B052A
0x8B0528: xor     eax, eax
0x8B052A: test    eax, eax
0x8B052C: jz      short loc_8B053D
0x8B052E: mov     ecx, [eax+8]
0x8B0531: test    ecx, ecx
0x8B0533: jz      short loc_8B053D
0x8B0535: mov     edx, [ecx]
0x8B0537: mov     eax, [edx+30h]
0x8B053A: push    esi
0x8B053B: call    eax
0x8B053D: pop     edi
0x8B053E: pop     esi
0x8B053F: pop     ebx
0x8B0540: retn    4
