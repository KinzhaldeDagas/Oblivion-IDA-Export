0x4BE8A0: push    0FFFFFFFFh
0x4BE8A2: push    offset SEH_8C62B0
0x4BE8A7: mov     eax, large fs:0
0x4BE8AD: push    eax
0x4BE8AE: push    ecx
0x4BE8AF: push    esi
0x4BE8B0: mov     eax, ds:0B30AACh
0x4BE8B5: xor     eax, esp
0x4BE8B7: push    eax
0x4BE8B8: lea     eax, [esp+18h+var_C]
0x4BE8BC: mov     large fs:0, eax
0x4BE8C2: cmp     dword ptr ds:0B35B90h, 0
0x4BE8C9: jnz     short loc_4BE8FE
0x4BE8CB: push    1Ch; Size
0x4BE8CD: call    FormHeapAlloc
0x4BE8D2: mov     esi, eax
0x4BE8D4: add     esp, 4
0x4BE8D7: mov     [esp+18h+var_10], esi
0x4BE8DB: test    esi, esi
0x4BE8DD: mov     [esp+18h+var_4], 0
0x4BE8E5: jz      short loc_4BE8F6
0x4BE8E7: push    0Ch
0x4BE8E9: push    25h ; '%'
0x4BE8EB: push    2
0x4BE8ED: mov     ecx, esi
0x4BE8EF: call    sub_4BE200
0x4BE8F4: jmp     short loc_4BE8F8
0x4BE8F6: xor     esi, esi
0x4BE8F8: mov     ds:0B35B90h, esi
0x4BE8FE: mov     ecx, [esp+18h+var_C]
0x4BE902: mov     large fs:0, ecx
0x4BE909: pop     ecx
0x4BE90A: pop     esi
0x4BE90B: add     esp, 10h
0x4BE90E: retn
