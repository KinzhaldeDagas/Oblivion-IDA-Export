0x677060: sub     esp, 8
0x677063: push    ebx
0x677064: push    esi
0x677065: push    edi
0x677066: push    4; Size
0x677068: mov     esi, ecx
0x67706A: mov     ecx, ds:0B33B00h
0x677070: push    offset flt_B3BCF0; Src
0x677075: call    SaveLoad_SaveData
0x67707A: lea     edi, [esi+28h]
0x67707D: mov     [esp+14h+var_4], 6
0x677085: jmp     short loc_677090
0x677087: align 10h
0x677090: mov     ecx, ds:0B33B00h
0x677096: push    2; Size
0x677098: lea     eax, [esp+18h+Src]
0x67709C: mov     [esp+18h+Src], 0
0x6770A4: mov     ebx, [ecx+14h]
0x6770A7: push    eax; Src
0x6770A8: call    SaveLoad_SaveData
0x6770AD: mov     esi, [edi]
0x6770AF: test    esi, esi
0x6770B1: jz      short loc_6770D1
0x6770B3: cmp     dword ptr [esi+4], 0
0x6770B7: jnz     short loc_6770BE
0x6770B9: cmp     dword ptr [esi], 0
0x6770BC: jz      short loc_6770D1
0x6770BE: mov     ecx, [esi]
0x6770C0: call    sub_6062B0
0x6770C5: add     [esp+14h+Src], 1
0x6770CA: mov     esi, [esi+4]
0x6770CD: test    esi, esi
0x6770CF: jnz     short loc_6770B3
0x6770D1: mov     cx, word ptr [esp+14h+Src]
0x6770D6: add     edi, 4
0x6770D9: sub     [esp+14h+var_4], 1
0x6770DE: mov     [ebx], cx
0x6770E1: jnz     short loc_677090
0x6770E3: pop     edi
0x6770E4: pop     esi
0x6770E5: pop     ebx
0x6770E6: add     esp, 8
0x6770E9: retn
