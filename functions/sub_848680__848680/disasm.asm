0x848680: push    0FFFFFFFFh
0x848682: push    offset SEH_852030
0x848687: mov     eax, large fs:0
0x84868D: push    eax
0x84868E: push    ecx
0x84868F: push    ebx
0x848690: push    esi
0x848691: push    edi
0x848692: mov     eax, ds:0B30AACh
0x848697: xor     eax, esp
0x848699: push    eax
0x84869A: lea     eax, [esp+20h+var_C]
0x84869E: mov     large fs:0, eax
0x8486A4: mov     esi, ecx
0x8486A6: mov     edi, ds:0B45B2Ch
0x8486AC: test    edi, edi
0x8486AE: mov     [esp+20h+var_10], edi
0x8486B2: mov     ebx, 1
0x8486B7: jz      short loc_8486BC
0x8486B9: add     [edi+60h], ebx
0x8486BC: mov     ecx, [esi+38h]
0x8486BF: lea     eax, [esp+20h+var_10]
0x8486C3: push    eax
0x8486C4: push    ecx
0x8486C5: lea     ecx, [esi+40h]
0x8486C8: mov     [esp+28h+var_4], 0
0x8486D0: call    sub_76CE40
0x8486D5: or      eax, 0FFFFFFFFh
0x8486D8: test    edi, edi
0x8486DA: mov     [esp+20h+var_4], eax
0x8486DE: jz      short loc_8486EC
0x8486E0: add     [edi+60h], eax
0x8486E3: jnz     short loc_8486EC
0x8486E5: mov     ecx, edi
0x8486E7: call    sub_7604D0
0x8486EC: add     [esi+38h], ebx
0x8486EF: mov     ecx, [esp+20h+var_C]
0x8486F3: mov     large fs:0, ecx
0x8486FA: pop     ecx
0x8486FB: pop     edi
0x8486FC: pop     esi
0x8486FD: pop     ebx
0x8486FE: add     esp, 10h
0x848701: retn    10h
