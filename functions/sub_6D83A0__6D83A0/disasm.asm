0x6D83A0: push    0FFFFFFFFh
0x6D83A2: push    offset SEH_7E5B50
0x6D83A7: mov     eax, large fs:0
0x6D83AD: push    eax
0x6D83AE: push    ebx
0x6D83AF: push    ebp
0x6D83B0: push    esi
0x6D83B1: push    edi
0x6D83B2: mov     eax, ds:0B30AACh
0x6D83B7: xor     eax, esp
0x6D83B9: push    eax
0x6D83BA: lea     eax, [esp+20h+var_C]
0x6D83BE: mov     large fs:0, eax
0x6D83C4: mov     ebx, ecx
0x6D83C6: mov     ebp, [esp+20h+Src]
0x6D83CA: movzx   esi, word ptr [ebx+16h]
0x6D83CE: mov     eax, ebp
0x6D83D0: lea     edx, [eax+1]
0x6D83D3: mov     cl, [eax]
0x6D83D5: add     eax, 1
0x6D83D8: test    cl, cl
0x6D83DA: jnz     short loc_6D83D3
0x6D83DC: sub     eax, edx
0x6D83DE: lea     edi, [eax+1]
0x6D83E1: push    edi; Size
0x6D83E2: call    FormHeapAlloc
0x6D83E7: push    ebp; Src
0x6D83E8: push    edi; SizeInBytes
0x6D83E9: push    eax; Dst
0x6D83EA: mov     [esp+30h+Src], eax
0x6D83EE: call    _strcpy_s
0x6D83F3: movzx   eax, word ptr [ebx+14h]
0x6D83F7: lea     edi, [ebx+0Ch]
0x6D83FA: add     esp, 10h
0x6D83FD: cmp     esi, eax
0x6D83FF: jb      short loc_6D840F
0x6D8401: movzx   ecx, word ptr [edi+0Eh]
0x6D8405: add     ecx, esi
0x6D8407: push    ecx
0x6D8408: mov     ecx, edi
0x6D840A: call    NiTArray_SetSize
0x6D840F: lea     edx, [esp+20h+Src]
0x6D8413: push    edx
0x6D8414: push    esi
0x6D8415: mov     ecx, edi
0x6D8417: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D841C: mov     ebp, [esp+20h+arg_4]
0x6D8420: test    ebp, ebp
0x6D8422: mov     [esp+20h+Src], ebp
0x6D8426: jz      short loc_6D8432
0x6D8428: lea     eax, [ebp+4]
0x6D842B: push    eax; lpAddend
0x6D842C: call    dword ptr ds:0A28078h
0x6D8432: movzx   ecx, word ptr [ebx+24h]
0x6D8436: cmp     esi, ecx
0x6D8438: lea     edi, [ebx+1Ch]
0x6D843B: mov     [esp+20h+var_4], 0
0x6D8443: jb      short loc_6D8453
0x6D8445: movzx   edx, word ptr [edi+0Eh]
0x6D8449: add     edx, esi
0x6D844B: push    edx
0x6D844C: mov     ecx, edi
0x6D844E: call    sub_6C4510
0x6D8453: lea     eax, [esp+20h+Src]
0x6D8457: push    eax
0x6D8458: push    esi
0x6D8459: mov     ecx, edi
0x6D845B: call    sub_6D7E90
0x6D8460: test    ebp, ebp
0x6D8462: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6D846A: jz      short loc_6D8485
0x6D846C: lea     ecx, [ebp+4]
0x6D846F: push    ecx; lpAddend
0x6D8470: call    dword ptr ds:0A2807Ch
0x6D8476: test    eax, eax
0x6D8478: jnz     short loc_6D8485
0x6D847A: mov     edx, [ebp+0]
0x6D847D: mov     eax, [edx]
0x6D847F: push    1
0x6D8481: mov     ecx, ebp
0x6D8483: call    eax
0x6D8485: mov     eax, esi
0x6D8487: mov     ecx, dword ptr [esp+20h+var_C]
0x6D848B: mov     large fs:0, ecx
0x6D8492: pop     ecx
0x6D8493: pop     edi
0x6D8494: pop     esi
0x6D8495: pop     ebp
0x6D8496: pop     ebx
0x6D8497: add     esp, 0Ch
0x6D849A: retn    8
