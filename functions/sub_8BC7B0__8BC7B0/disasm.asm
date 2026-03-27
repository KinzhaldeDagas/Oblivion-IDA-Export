0x8BC7B0: sub     esp, 10h
0x8BC7B3: push    ebx
0x8BC7B4: push    ebp
0x8BC7B5: push    esi
0x8BC7B6: mov     esi, [ecx+48h]
0x8BC7B9: xor     eax, eax
0x8BC7BB: test    esi, esi
0x8BC7BD: push    edi
0x8BC7BE: jle     short loc_8BC7DC
0x8BC7C0: mov     edi, [ecx+44h]
0x8BC7C3: mov     ebx, [esp+20h+arg_4]
0x8BC7C7: mov     edx, edi
0x8BC7C9: lea     esp, [esp+0]
0x8BC7D0: cmp     [edx], ebx
0x8BC7D2: jz      short loc_8BC7F7
0x8BC7D4: inc     eax
0x8BC7D5: add     edx, 10h
0x8BC7D8: cmp     eax, esi
0x8BC7DA: jl      short loc_8BC7D0
0x8BC7DC: mov     eax, [esp+20h+arg_0]
0x8BC7E0: pop     edi
0x8BC7E1: pop     esi
0x8BC7E2: pop     ebp
0x8BC7E3: mov     dword ptr [eax], 0
0x8BC7E9: mov     dword ptr [eax+4], 0
0x8BC7F0: pop     ebx
0x8BC7F1: add     esp, 10h
0x8BC7F4: retn    8
0x8BC7F7: mov     edx, eax
0x8BC7F9: shl     edx, 4
0x8BC7FC: add     edi, edx
0x8BC7FE: mov     esi, [edi]
0x8BC800: mov     [esp+20h+var_10], esi
0x8BC804: mov     esi, [edi+4]
0x8BC807: mov     ebx, [edi+8]
0x8BC80A: mov     [esp+20h+var_C], esi
0x8BC80E: mov     esi, [edi+0Ch]
0x8BC811: mov     [esp+20h+var_4], esi
0x8BC815: mov     esi, [ecx+48h]
0x8BC818: dec     esi
0x8BC819: mov     edi, esi
0x8BC81B: cmp     eax, edi
0x8BC81D: mov     [ecx+48h], esi
0x8BC820: mov     esi, eax
0x8BC822: jge     short loc_8BC84D
0x8BC824: mov     eax, [ecx+44h]
0x8BC827: add     eax, edx
0x8BC829: lea     edi, [eax+10h]
0x8BC82C: mov     ebp, [edi]
0x8BC82E: mov     [eax], ebp
0x8BC830: mov     ebp, [edi+4]
0x8BC833: mov     [eax+4], ebp
0x8BC836: mov     ebp, [edi+8]
0x8BC839: mov     [eax+8], ebp
0x8BC83C: mov     edi, [edi+0Ch]
0x8BC83F: mov     [eax+0Ch], edi
0x8BC842: mov     eax, [ecx+48h]
0x8BC845: inc     esi
0x8BC846: add     edx, 10h
0x8BC849: cmp     esi, eax
0x8BC84B: jl      short loc_8BC824
0x8BC84D: mov     eax, [esp+20h+arg_0]
0x8BC851: mov     ecx, [esp+20h+var_4]
0x8BC855: pop     edi
0x8BC856: pop     esi
0x8BC857: pop     ebp
0x8BC858: mov     [eax], ebx
0x8BC85A: mov     [eax+4], ecx
0x8BC85D: pop     ebx
0x8BC85E: add     esp, 10h
0x8BC861: retn    8
