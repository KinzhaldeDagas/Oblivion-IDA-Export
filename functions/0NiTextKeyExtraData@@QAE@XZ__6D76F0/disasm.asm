0x6D76F0: push    0FFFFFFFFh; NiTextKeyExtraData clone factory: allocates a 0x14-byte object, initializes count +0x0C and array +0x10 to zero, then deep-copies through NiTextKeyExtraData_CopyMembers.
0x6D76F2: push    offset SEH_8C8970
0x6D76F7: mov     eax, large fs:0
0x6D76FD: push    eax
0x6D76FE: push    ecx
0x6D76FF: push    ebx
0x6D7700: push    esi
0x6D7701: mov     eax, ds:0B30AACh
0x6D7706: xor     eax, esp
0x6D7708: push    eax
0x6D7709: lea     eax, [esp+1Ch+var_C]
0x6D770D: mov     large fs:0, eax
0x6D7713: mov     ebx, ecx
0x6D7715: push    14h; Size
0x6D7717: call    FormHeapAlloc
0x6D771C: mov     esi, eax
0x6D771E: add     esp, 4
0x6D7721: mov     [esp+1Ch+var_10], esi
0x6D7725: test    esi, esi
0x6D7727: mov     [esp+1Ch+var_4], 0
0x6D772F: jz      short loc_6D774E
0x6D7731: mov     ecx, esi
0x6D7733: call    sub_721350
0x6D7738: mov     dword ptr [esi], offset ??_7NiTextKeyExtraData@@6B@; const NiTextKeyExtraData::`vftable'
0x6D773E: mov     dword ptr [esi+0Ch], 0
0x6D7745: mov     dword ptr [esi+10h], 0
0x6D774C: jmp     short loc_6D7750
0x6D774E: xor     esi, esi
0x6D7750: mov     eax, [esp+1Ch+arg_0]
0x6D7754: push    eax
0x6D7755: push    esi
0x6D7756: mov     ecx, ebx
0x6D7758: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D7760: call    NiTextKeyExtraData_CopyMembers; Deep clone of text keys. Copies count, allocates count 0x08-byte records, copies each float time, and duplicates each owned text string; refuses the specialized copy when runtime type is not exactly NiTextKeyExtraData.
0x6D7765: mov     eax, esi
0x6D7767: mov     ecx, [esp+1Ch+var_C]
0x6D776B: mov     large fs:0, ecx
0x6D7772: pop     ecx
0x6D7773: pop     esi
0x6D7774: pop     ebx
0x6D7775: add     esp, 10h
0x6D7778: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
