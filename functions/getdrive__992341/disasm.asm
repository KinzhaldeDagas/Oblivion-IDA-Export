0x992341: push    ebp
0x992342: lea     ebp, [esp-94h]
0x992349: sub     esp, 114h
0x99234F: mov     eax, ___security_cookie
0x992354: xor     eax, ebp
0x992356: mov     [ebp+94h+var_4], eax
0x99235C: and     [ebp+94h+var_110], 0
0x992360: push    ebx
0x992361: push    esi
0x992362: push    edi
0x992363: mov     edi, ds:GetCurrentDirectoryA
0x992369: lea     ebx, [ebp+94h+Buffer]
0x99236C: mov     eax, ebx
0x99236E: push    eax; lpBuffer
0x99236F: push    105h; nBufferLength
0x992374: call    edi ; GetCurrentDirectoryA
0x992376: mov     esi, eax
0x992378: cmp     esi, 104h
0x99237E: jle     short loc_9923B8
0x992380: lea     eax, [esi+1]
0x992383: push    1
0x992385: push    eax
0x992386: mov     [ebp+94h+nBufferLength], eax
0x992389: call    unknown_libname_74
0x99238E: mov     ebx, eax
0x992390: test    ebx, ebx
0x992392: pop     ecx
0x992393: pop     ecx
0x992394: jnz     short loc_9923A5
0x992396: call    __errno
0x99239B: mov     dword ptr [eax], 0Ch
0x9923A1: xor     esi, esi
0x9923A3: jmp     short loc_9923B8
0x9923A5: test    esi, esi
0x9923A7: mov     [ebp+94h+var_110], 1
0x9923AE: jz      short loc_9923B8
0x9923B0: push    ebx; lpBuffer
0x9923B1: push    [ebp+94h+nBufferLength]; nBufferLength
0x9923B4: call    edi ; GetCurrentDirectoryA
0x9923B6: mov     esi, eax
0x9923B8: xor     edi, edi
0x9923BA: test    esi, esi
0x9923BC: jz      short loc_9923D5
0x9923BE: cmp     byte ptr [ebx+1], 3Ah ; ':'
0x9923C2: jnz     short loc_9923E0
0x9923C4: movzx   eax, byte ptr [ebx]
0x9923C7: push    eax; C
0x9923C8: call    _toupper
0x9923CD: mov     edi, eax
0x9923CF: pop     ecx
0x9923D0: sub     edi, 40h ; '@'
0x9923D3: jmp     short loc_9923E0
0x9923D5: call    __errno
0x9923DA: mov     dword ptr [eax], 0Ch
0x9923E0: cmp     [ebp+94h+var_110], 0
0x9923E4: jz      short loc_9923ED
0x9923E6: push    ebx; Memory
0x9923E7: call    _free
0x9923EC: pop     ecx
0x9923ED: mov     ecx, [ebp+94h+var_4]
0x9923F3: mov     eax, edi
0x9923F5: pop     edi
0x9923F6: pop     esi
0x9923F7: xor     ecx, ebp
0x9923F9: pop     ebx
0x9923FA: call    @__security_check_cookie@4
0x9923FF: add     ebp, 94h ; '”'
0x992405: leave
0x992406: retn
