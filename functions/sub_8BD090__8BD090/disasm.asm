0x8BD090: push    0FFFFFFFFh
0x8BD092: push    offset SEH_7E5B50
0x8BD097: mov     eax, large fs:0
0x8BD09D: push    eax
0x8BD09E: push    ebx
0x8BD09F: push    ebp
0x8BD0A0: push    esi
0x8BD0A1: push    edi
0x8BD0A2: mov     eax, ds:0B30AACh
0x8BD0A7: xor     eax, esp
0x8BD0A9: push    eax
0x8BD0AA: lea     eax, [esp+20h+var_C]
0x8BD0AE: mov     large fs:0, eax
0x8BD0B4: mov     esi, ecx
0x8BD0B6: mov     ebx, [esp+20h+arg_0]
0x8BD0BA: test    ebx, ebx
0x8BD0BC: jz      short loc_8BD116
0x8BD0BE: lea     ebp, [ebx+4]
0x8BD0C1: push    ebp; lpAddend
0x8BD0C2: mov     [esp+24h+arg_0], ebx
0x8BD0C6: call    dword ptr ds:0A28078h
0x8BD0CC: mov     edi, [esi+18h]
0x8BD0CF: add     esi, 0Ch
0x8BD0D2: cmp     edi, [esi+8]
0x8BD0D5: mov     [esp+20h+var_4], 0
0x8BD0DD: jb      short loc_8BD0EC
0x8BD0DF: mov     eax, [esi+14h]
0x8BD0E2: add     eax, edi
0x8BD0E4: push    eax
0x8BD0E5: mov     ecx, esi
0x8BD0E7: call    sub_8BCA30
0x8BD0EC: lea     ecx, [esp+20h+arg_0]
0x8BD0F0: push    ecx
0x8BD0F1: push    edi
0x8BD0F2: mov     ecx, esi
0x8BD0F4: call    sub_8BCD40
0x8BD0F9: push    ebp; lpAddend
0x8BD0FA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8BD102: call    dword ptr ds:0A2807Ch
0x8BD108: test    eax, eax
0x8BD10A: jnz     short loc_8BD116
0x8BD10C: mov     edx, [ebx]
0x8BD10E: mov     eax, [edx]
0x8BD110: push    1
0x8BD112: mov     ecx, ebx
0x8BD114: call    eax
0x8BD116: mov     ecx, dword ptr [esp+20h+var_C]
0x8BD11A: mov     large fs:0, ecx
0x8BD121: pop     ecx
0x8BD122: pop     edi
0x8BD123: pop     esi
0x8BD124: pop     ebp
0x8BD125: pop     ebx
0x8BD126: add     esp, 0Ch
0x8BD129: retn    4
