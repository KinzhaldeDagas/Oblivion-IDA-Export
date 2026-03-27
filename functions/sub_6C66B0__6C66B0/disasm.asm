0x6C66B0: mov     eax, [esp+arg_0]
0x6C66B4: mov     edx, [ecx+14h]
0x6C66B7: shl     eax, 4
0x6C66BA: cmp     dword ptr [eax+edx], 0
0x6C66BE: jnz     short loc_6C66CD
0x6C66C0: mov     eax, [esp+arg_4]
0x6C66C4: mov     dword ptr [eax], 0
0x6C66CA: retn    8
0x6C66CD: push    esi
0x6C66CE: mov     esi, [ecx+18h]
0x6C66D1: add     esi, eax
0x6C66D3: movzx   eax, word ptr [esi+4]
0x6C66D7: cmp     ax, 0FFFFh
0x6C66DB: jz      short loc_6C66E7
0x6C66DD: mov     ecx, [esi]
0x6C66DF: movzx   eax, ax
0x6C66E2: add     eax, [ecx+8]
0x6C66E5: jmp     short loc_6C66E9
0x6C66E7: xor     eax, eax
0x6C66E9: lea     edx, [eax+1]
0x6C66EC: lea     esp, [esp+0]
0x6C66F0: mov     cl, [eax]
0x6C66F2: add     eax, 1
0x6C66F5: test    cl, cl
0x6C66F7: jnz     short loc_6C66F0
0x6C66F9: sub     eax, edx
0x6C66FB: push    ebx; Src
0x6C66FC: lea     ebx, [eax+1]
0x6C66FF: movzx   eax, word ptr [esi+6]
0x6C6703: cmp     ax, 0FFFFh
0x6C6707: jz      loc_6C679E
0x6C670D: mov     edx, [esi]
0x6C670F: mov     ecx, [edx+8]
0x6C6712: movzx   eax, ax
0x6C6715: add     eax, ecx
0x6C6717: jz      loc_6C679E
0x6C671D: mov     ecx, offset aProp; "PROP\n"
0x6C6722: push    edi
0x6C6723: lea     edi, [ecx+1]
0x6C6726: mov     dl, [ecx]
0x6C6728: add     ecx, 1
0x6C672B: test    dl, dl
0x6C672D: jnz     short loc_6C6726
0x6C672F: sub     ecx, edi
0x6C6731: lea     edi, [eax+1]
0x6C6734: mov     dl, [eax]
0x6C6736: add     eax, 1
0x6C6739: test    dl, dl
0x6C673B: jnz     short loc_6C6734
0x6C673D: sub     eax, edi
0x6C673F: add     eax, ecx
0x6C6741: lea     edi, [ebx+eax+1]
0x6C6745: push    edi; Size
0x6C6746: call    FormHeapAlloc
0x6C674B: mov     edx, [esp+10h+arg_4]
0x6C674F: mov     [edx], eax
0x6C6751: movzx   ecx, word ptr [esi+6]
0x6C6755: add     esp, 4
0x6C6758: cmp     cx, 0FFFFh
0x6C675D: jz      short loc_6C6769
0x6C675F: mov     ebx, [esi]
0x6C6761: movzx   edx, cx
0x6C6764: add     edx, [ebx+8]
0x6C6767: jmp     short loc_6C676B
0x6C6769: xor     edx, edx
0x6C676B: movzx   ecx, word ptr [esi+4]
0x6C676F: cmp     cx, 0FFFFh
0x6C6774: jz      short loc_6C6780
0x6C6776: mov     esi, [esi]
0x6C6778: movzx   ecx, cx
0x6C677B: add     ecx, [esi+8]
0x6C677E: jmp     short loc_6C6782
0x6C6780: xor     ecx, ecx
0x6C6782: push    edx
0x6C6783: push    offset aProp; "PROP\n"
0x6C6788: push    ecx; ArgList
0x6C6789: push    offset aSSS_3; "%s\n%s%s"
0x6C678E: push    edi; SizeInBytes
0x6C678F: push    eax; DstBuf
0x6C6790: call    sub_6C5D40
0x6C6795: add     esp, 18h
0x6C6798: pop     edi
0x6C6799: pop     ebx
0x6C679A: pop     esi
0x6C679B: retn    8
0x6C679E: push    ebx; Size
0x6C679F: call    FormHeapAlloc
0x6C67A4: mov     ecx, [esp+0Ch+arg_4]
0x6C67A8: mov     [ecx], eax
0x6C67AA: movzx   ecx, word ptr [esi+4]
0x6C67AE: add     esp, 4
0x6C67B1: cmp     cx, 0FFFFh
0x6C67B6: jz      short loc_6C67D0
0x6C67B8: mov     edx, [esi]
0x6C67BA: movzx   ecx, cx
0x6C67BD: add     ecx, [edx+8]
0x6C67C0: push    ecx; Src
0x6C67C1: push    ebx; SizeInBytes
0x6C67C2: push    eax; Dst
0x6C67C3: call    _strcpy_s
0x6C67C8: add     esp, 0Ch
0x6C67CB: pop     ebx
0x6C67CC: pop     esi
0x6C67CD: retn    8
0x6C67D0: xor     ecx, ecx
0x6C67D2: push    ecx; Src
0x6C67D3: push    ebx; SizeInBytes
0x6C67D4: push    eax; Dst
0x6C67D5: call    _strcpy_s
0x6C67DA: add     esp, 0Ch
0x6C67DD: pop     ebx
0x6C67DE: pop     esi
0x6C67DF: retn    8
