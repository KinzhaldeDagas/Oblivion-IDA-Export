0x4C9B40: push    0FFFFFFFFh
0x4C9B42: push    offset SEH_6E3250
0x4C9B47: mov     eax, large fs:0
0x4C9B4D: push    eax
0x4C9B4E: push    esi
0x4C9B4F: push    edi
0x4C9B50: mov     eax, ds:0B30AACh
0x4C9B55: xor     eax, esp
0x4C9B57: push    eax
0x4C9B58: lea     eax, [esp+18h+var_C]
0x4C9B5C: mov     large fs:0, eax
0x4C9B62: test    byte ptr [ecx+24h], 1
0x4C9B66: jz      short loc_4C9B7E
0x4C9B68: xor     eax, eax
0x4C9B6A: mov     ecx, [esp+18h+var_C]
0x4C9B6E: mov     large fs:0, ecx
0x4C9B75: pop     ecx
0x4C9B76: pop     edi
0x4C9B77: pop     esi
0x4C9B78: add     esp, 0Ch
0x4C9B7B: retn    4
0x4C9B7E: lea     edi, [ecx+28h]
0x4C9B81: mov     ecx, edi
0x4C9B83: call    sub_41F9B0
0x4C9B88: mov     esi, eax
0x4C9B8A: test    esi, esi
0x4C9B8C: jnz     short loc_4C9BC8
0x4C9B8E: cmp     byte ptr [esp+18h+arg_0], al
0x4C9B92: jz      short loc_4C9BC8
0x4C9B94: push    10h; Size
0x4C9B96: call    FormHeapAlloc
0x4C9B9B: add     esp, 4
0x4C9B9E: mov     [esp+18h+arg_0], eax
0x4C9BA2: test    eax, eax
0x4C9BA4: mov     [esp+18h+var_4], esi
0x4C9BA8: jz      short loc_4C9BB4
0x4C9BAA: push    esi
0x4C9BAB: mov     ecx, eax
0x4C9BAD: call    TESRegionList_constr
0x4C9BB2: jmp     short loc_4C9BB6
0x4C9BB4: xor     eax, eax
0x4C9BB6: push    eax
0x4C9BB7: mov     ecx, edi
0x4C9BB9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4C9BC1: mov     esi, eax
0x4C9BC3: call    sub_4241E0
0x4C9BC8: mov     eax, esi
0x4C9BCA: mov     ecx, [esp+18h+var_C]
0x4C9BCE: mov     large fs:0, ecx
0x4C9BD5: pop     ecx
0x4C9BD6: pop     edi
0x4C9BD7: pop     esi
0x4C9BD8: add     esp, 0Ch
0x4C9BDB: retn    4
