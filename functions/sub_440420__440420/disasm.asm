0x440420: push    0FFFFFFFFh
0x440422: push    offset SEH_7C77C0
0x440427: mov     eax, large fs:0
0x44042D: push    eax
0x44042E: push    ebx
0x44042F: push    esi
0x440430: push    edi
0x440431: mov     eax, ds:0B30AACh
0x440436: xor     eax, esp
0x440438: push    eax
0x440439: lea     eax, [esp+1Ch+var_C]
0x44043D: mov     large fs:0, eax
0x440443: mov     ecx, ds:0B35300h
0x440449: mov     eax, [ecx]
0x44044B: mov     ebx, [esp+1Ch+Str1]
0x44044F: mov     edx, [eax+4]
0x440452: push    0
0x440454: push    ebx
0x440455: call    edx
0x440457: mov     esi, eax
0x440459: test    esi, esi
0x44045B: mov     [esp+1Ch+Str1], esi
0x44045F: jz      short loc_44046B
0x440461: lea     eax, [esi+4]
0x440464: push    eax; lpAddend
0x440465: call    dword ptr ds:0A28078h
0x44046B: test    esi, esi
0x44046D: mov     [esp+1Ch+var_4], 0
0x440475: jz      short loc_4404C8
0x440477: mov     ecx, [esp+1Ch+arg_4]
0x44047B: mov     eax, [esi+4]
0x44047E: lea     edi, [esi+4]
0x440481: add     ecx, 2
0x440484: cmp     eax, ecx
0x440486: ja      short loc_4404C8
0x440488: mov     ecx, ds:0B35300h
0x44048E: push    ebx; Str1
0x44048F: call    sub_4A1A10
0x440494: push    edi; lpAddend
0x440495: mov     [esp+20h+var_4], 0FFFFFFFFh
0x44049D: call    dword ptr ds:0A2807Ch
0x4404A3: test    eax, eax
0x4404A5: jnz     short loc_4404B1
0x4404A7: mov     edx, [esi]
0x4404A9: mov     eax, [edx]
0x4404AB: push    1
0x4404AD: mov     ecx, esi
0x4404AF: call    eax
0x4404B1: mov     al, 1
0x4404B3: mov     ecx, [esp+1Ch+var_C]
0x4404B7: mov     large fs:0, ecx
0x4404BE: pop     ecx
0x4404BF: pop     edi
0x4404C0: pop     esi
0x4404C1: pop     ebx
0x4404C2: add     esp, 0Ch
0x4404C5: retn    8
0x4404C8: test    esi, esi
0x4404CA: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4404D2: jz      short loc_4404EC
0x4404D4: lea     ecx, [esi+4]
0x4404D7: push    ecx; lpAddend
0x4404D8: call    dword ptr ds:0A2807Ch
0x4404DE: test    eax, eax
0x4404E0: jnz     short loc_4404EC
0x4404E2: mov     edx, [esi]
0x4404E4: mov     eax, [edx]
0x4404E6: push    1
0x4404E8: mov     ecx, esi
0x4404EA: call    eax
0x4404EC: xor     al, al
0x4404EE: mov     ecx, [esp+1Ch+var_C]
0x4404F2: mov     large fs:0, ecx
0x4404F9: pop     ecx
0x4404FA: pop     edi
0x4404FB: pop     esi
0x4404FC: pop     ebx
0x4404FD: add     esp, 0Ch
0x440500: retn    8
