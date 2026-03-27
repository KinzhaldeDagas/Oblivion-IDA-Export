0x4C6F70: push    0FFFFFFFFh
0x4C6F72: push    offset ??1TESObjectLAND@@UAE@XZ_SEH
0x4C6F77: mov     eax, large fs:0
0x4C6F7D: push    eax
0x4C6F7E: push    ecx
0x4C6F7F: push    ebx
0x4C6F80: push    esi
0x4C6F81: push    edi
0x4C6F82: mov     eax, ds:0B30AACh
0x4C6F87: xor     eax, esp
0x4C6F89: push    eax
0x4C6F8A: lea     eax, [esp+20h+var_C]
0x4C6F8E: mov     large fs:0, eax
0x4C6F94: mov     edi, ecx
0x4C6F96: mov     [esp+20h+var_10], edi
0x4C6F9A: mov     dword ptr [edi], offset ??_7TESObjectLAND@@6BTESObjectLAND@@@; const TESObjectLAND::`vftable'{for `TESObjectLAND'}
0x4C6FA0: mov     dword ptr [edi+18h], offset ??_7TESObjectLAND@@6BTESChildCell@@@; const TESObjectLAND::`vftable'{for `TESChildCell'}
0x4C6FA7: xor     ebx, ebx
0x4C6FA9: mov     [esp+20h+var_4], ebx
0x4C6FAD: call    sub_4C6280
0x4C6FB2: sub     dword ptr ds:0B35BE0h, 1
0x4C6FB9: jnz     loc_4C7062
0x4C6FBF: mov     eax, ds:0B35BC8h
0x4C6FC4: push    eax
0x4C6FC5: call    FormHeapFree
0x4C6FCA: mov     ecx, ds:0B35BCCh
0x4C6FD0: push    ecx
0x4C6FD1: call    FormHeapFree
0x4C6FD6: mov     edx, ds:0B35BD0h
0x4C6FDC: push    edx
0x4C6FDD: call    FormHeapFree
0x4C6FE2: mov     eax, ds:0B35BD4h
0x4C6FE7: push    eax
0x4C6FE8: call    FormHeapFree
0x4C6FED: mov     ecx, ds:0B35BD8h
0x4C6FF3: push    ecx
0x4C6FF4: call    FormHeapFree
0x4C6FF9: add     esp, 14h
0x4C6FFC: mov     esi, offset dword_B35BB8
0x4C7001: mov     eax, [esi]
0x4C7003: push    eax
0x4C7004: call    FormHeapFree
0x4C7009: add     esi, 4
0x4C700C: add     esp, 4
0x4C700F: cmp     esi, offset dword_B35BC8
0x4C7015: jl      short loc_4C7001
0x4C7017: mov     ecx, ds:0B35BE4h
0x4C701D: cmp     ecx, ebx
0x4C701F: mov     ds:0B35BDCh, bl
0x4C7025: jz      short loc_4C7030
0x4C7027: mov     edx, [ecx]
0x4C7029: mov     eax, [edx+10h]
0x4C702C: push    1
0x4C702E: call    eax
0x4C7030: mov     esi, ds:0B35BECh
0x4C7036: cmp     esi, ebx
0x4C7038: mov     ds:0B35BE4h, ebx
0x4C703E: jz      short loc_4C7062
0x4C7040: lea     ecx, [esi+4]
0x4C7043: push    ecx; lpAddend
0x4C7044: call    dword ptr ds:0A2807Ch
0x4C704A: test    eax, eax
0x4C704C: jnz     short loc_4C705C
0x4C704E: cmp     esi, ebx
0x4C7050: jz      short loc_4C705C
0x4C7052: mov     edx, [esi]
0x4C7054: mov     eax, [edx]
0x4C7056: push    1
0x4C7058: mov     ecx, esi
0x4C705A: call    eax
0x4C705C: mov     ds:0B35BECh, ebx
0x4C7062: mov     ecx, edi
0x4C7064: call    j_TESForm_ClearComponentReferences
0x4C7069: mov     ecx, edi; this
0x4C706B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4C7073: call    TESForm_destr
0x4C7078: mov     ecx, [esp+20h+var_C]
0x4C707C: mov     large fs:0, ecx
0x4C7083: pop     ecx
0x4C7084: pop     edi
0x4C7085: pop     esi
0x4C7086: pop     ebx
0x4C7087: add     esp, 10h
0x4C708A: retn
