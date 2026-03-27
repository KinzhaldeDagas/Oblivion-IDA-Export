0x41D7F0: push    0FFFFFFFFh
0x41D7F2: push    offset ??1ExtraCell3D@@UAE@XZ_SEH
0x41D7F7: mov     eax, large fs:0
0x41D7FD: push    eax
0x41D7FE: push    ecx
0x41D7FF: push    ebx
0x41D800: push    esi
0x41D801: push    edi
0x41D802: mov     eax, ___security_cookie
0x41D807: xor     eax, esp
0x41D809: push    eax
0x41D80A: lea     eax, [esp+20h+var_C]
0x41D80E: mov     large fs:0, eax
0x41D814: mov     esi, ecx
0x41D816: mov     [esp+20h+var_10], esi
0x41D81A: xor     ebx, ebx
0x41D81C: mov     byte ptr [esi+4], 3
0x41D820: mov     [esi+8], ebx
0x41D823: mov     dword ptr [esi], offset ??_7ExtraCell3D@@6B@; const ExtraCell3D::`vftable'
0x41D829: mov     [esp+20h+var_4], ebx
0x41D82D: mov     [esi+0Ch], ebx
0x41D830: mov     edi, ebx
0x41D832: cmp     edi, ebx
0x41D834: mov     byte ptr [esp+20h+var_4], 1
0x41D839: jz      short loc_41D85A
0x41D83B: lea     eax, [edi+4]
0x41D83E: push    eax; lpAddend
0x41D83F: call    ds:InterlockedDecrement
0x41D845: test    eax, eax
0x41D847: jnz     short loc_41D857
0x41D849: cmp     edi, ebx
0x41D84B: jz      short loc_41D857
0x41D84D: mov     edx, [edi]
0x41D84F: mov     eax, [edx]
0x41D851: push    1
0x41D853: mov     ecx, edi
0x41D855: call    eax
0x41D857: mov     [esi+0Ch], ebx
0x41D85A: mov     eax, esi
0x41D85C: mov     ecx, dword ptr [esp+20h+var_C]
0x41D860: mov     large fs:0, ecx
0x41D867: pop     ecx
0x41D868: pop     edi
0x41D869: pop     esi
0x41D86A: pop     ebx
0x41D86B: add     esp, 10h
0x41D86E: retn
