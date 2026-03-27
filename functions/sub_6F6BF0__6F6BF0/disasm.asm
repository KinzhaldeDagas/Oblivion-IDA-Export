0x6F6BF0: push    0FFFFFFFFh
0x6F6BF2: push    offset SEH_6F6BF0
0x6F6BF7: mov     eax, large fs:0
0x6F6BFD: push    eax
0x6F6BFE: push    esi
0x6F6BFF: mov     eax, ds:0B30AACh
0x6F6C04: xor     eax, esp
0x6F6C06: push    eax
0x6F6C07: lea     eax, [esp+14h+var_C]
0x6F6C0B: mov     large fs:0, eax
0x6F6C11: cmp     dword ptr ds:0B3F068h, 0
0x6F6C18: mov     [esp+14h+var_4], 0
0x6F6C20: jnz     short loc_6F6C70
0x6F6C22: mov     esi, [esp+14h+Size]
0x6F6C26: cmp     esi, 100h
0x6F6C2C: mov     eax, [esp+14h+arg_0]
0x6F6C30: mov     ds:0B3F068h, eax
0x6F6C35: jb      short loc_6F6C4B
0x6F6C37: push    41h ; 'A'; int
0x6F6C39: push    offset a_Lasterror_cpp; ".\\lastError.cpp"
0x6F6C3E: call    sub_6ED6D0
0x6F6C43: add     esp, 8
0x6F6C46: mov     esi, 0FFh
0x6F6C4B: cmp     [esp+14h+arg_1C], 10h
0x6F6C50: mov     eax, [esp+14h+Src]
0x6F6C54: jnb     short loc_6F6C5A
0x6F6C56: lea     eax, [esp+14h+Src]
0x6F6C5A: push    esi; Size
0x6F6C5B: push    eax; Src
0x6F6C5C: push    offset byte_B3F06C; Dst
0x6F6C61: call    _memcpy
0x6F6C66: add     esp, 0Ch
0x6F6C69: mov     ds:byte_B3F06C[esi], 0
0x6F6C70: cmp     [esp+14h+arg_1C], 10h
0x6F6C75: jb      short loc_6F6C84
0x6F6C77: mov     ecx, [esp+14h+Src]
0x6F6C7B: push    ecx
0x6F6C7C: call    FormHeapFree
0x6F6C81: add     esp, 4
0x6F6C84: mov     ecx, [esp+14h+var_C]
0x6F6C88: mov     large fs:0, ecx
0x6F6C8F: pop     ecx
0x6F6C90: pop     esi
0x6F6C91: add     esp, 0Ch
0x6F6C94: retn
