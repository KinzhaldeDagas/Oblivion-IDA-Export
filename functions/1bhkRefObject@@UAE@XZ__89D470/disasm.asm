0x89D470: push    0FFFFFFFFh
0x89D472: push    offset SEH_7F1810
0x89D477: mov     eax, large fs:0
0x89D47D: push    eax
0x89D47E: push    ecx
0x89D47F: push    esi
0x89D480: mov     eax, ds:0B30AACh
0x89D485: xor     eax, esp
0x89D487: push    eax
0x89D488: lea     eax, [esp+18h+var_C]
0x89D48C: mov     large fs:0, eax
0x89D492: mov     esi, ecx
0x89D494: mov     [esp+18h+var_10], esi
0x89D498: mov     dword ptr [esi], offset ??_7bhkRefObject@@6B@; const bhkRefObject::`vftable'
0x89D49E: mov     ecx, [esi+8]
0x89D4A1: test    ecx, ecx
0x89D4A3: mov     [esp+18h+var_4], 0
0x89D4AB: jz      short loc_89D4CA
0x89D4AD: cmp     word ptr [ecx+4], 0
0x89D4B2: jz      short loc_89D4CA
0x89D4B4: add     word ptr [ecx+6], 0FFFFh
0x89D4B9: movzx   eax, word ptr [ecx+6]
0x89D4BD: test    ax, ax
0x89D4C0: jnz     short loc_89D4CA
0x89D4C2: mov     eax, [ecx]
0x89D4C4: mov     edx, [eax]
0x89D4C6: push    1
0x89D4C8: call    edx
0x89D4CA: mov     ecx, esi
0x89D4CC: mov     [esp+18h+var_4], 0FFFFFFFFh
0x89D4D4: call    NiRefObject_destr
0x89D4D9: mov     ecx, dword ptr [esp+18h+var_C]
0x89D4DD: mov     large fs:0, ecx
0x89D4E4: pop     ecx
0x89D4E5: pop     esi
0x89D4E6: add     esp, 10h
0x89D4E9: retn
