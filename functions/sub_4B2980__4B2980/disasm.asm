0x4B2980: push    esi
0x4B2981: push    edi
0x4B2982: mov     edi, ecx
0x4B2984: xor     esi, esi
0x4B2986: cmp     byte ptr [edi+4], 1Eh
0x4B298A: jz      short loc_4B2993
0x4B298C: pop     edi
0x4B298D: xor     eax, eax
0x4B298F: pop     esi
0x4B2990: retn    8
0x4B2993: push    ebx
0x4B2994: push    1
0x4B2996: call    sub_55F7E0
0x4B299B: mov     ebx, [esp+10h+arg_0]
0x4B299F: add     esp, 4
0x4B29A2: test    eax, eax
0x4B29A4: jz      short loc_4B29BB
0x4B29A6: push    edi
0x4B29A7: push    ebx
0x4B29A8: push    1
0x4B29AA: call    sub_55F7E0
0x4B29AF: add     esp, 4
0x4B29B2: mov     ecx, eax
0x4B29B4: call    sub_55F800
0x4B29B9: mov     esi, eax
0x4B29BB: mov     eax, [edi]
0x4B29BD: mov     edx, [eax+120h]
0x4B29C3: push    esi
0x4B29C4: mov     ecx, edi
0x4B29C6: call    edx
0x4B29C8: test    esi, esi
0x4B29CA: jz      short loc_4B29F7
0x4B29CC: mov     eax, [esi]
0x4B29CE: mov     edx, [eax+9Ch]
0x4B29D4: mov     ecx, esi
0x4B29D6: call    edx
0x4B29D8: test    eax, eax
0x4B29DA: jz      short loc_4B29F7
0x4B29DC: test    ebx, ebx
0x4B29DE: jz      short loc_4B29F7
0x4B29E0: mov     eax, [esi]
0x4B29E2: mov     edx, [eax+9Ch]
0x4B29E8: mov     ecx, esi
0x4B29EA: call    edx
0x4B29EC: mov     eax, [eax+48h]
0x4B29EF: push    eax
0x4B29F0: mov     ecx, ebx
0x4B29F2: call    sub_4D7880
0x4B29F7: pop     ebx
0x4B29F8: pop     edi
0x4B29F9: mov     eax, esi
0x4B29FB: pop     esi
0x4B29FC: retn    8
