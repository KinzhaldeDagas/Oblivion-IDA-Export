0x8AF0E0: push    0FFFFFFFFh
0x8AF0E2: push    offset SEH_8C8970
0x8AF0E7: mov     eax, large fs:0
0x8AF0ED: push    eax
0x8AF0EE: push    ecx
0x8AF0EF: push    esi
0x8AF0F0: push    edi
0x8AF0F1: mov     eax, ds:0B30AACh
0x8AF0F6: xor     eax, esp
0x8AF0F8: push    eax
0x8AF0F9: lea     eax, [esp+1Ch+var_C]
0x8AF0FD: mov     large fs:0, eax
0x8AF103: mov     edi, ecx
0x8AF105: push    offset unk_BA7C80; lpCriticalSection
0x8AF10A: call    dword ptr ds:0A2806Ch
0x8AF110: call    dword ptr ds:0A2808Ch
0x8AF116: add     dword ptr ds:0BA7CFCh, 1
0x8AF11D: push    14h; Size
0x8AF11F: mov     ds:0BA7CF8h, eax
0x8AF124: call    FormHeapAlloc
0x8AF129: add     esp, 4
0x8AF12C: mov     [esp+1Ch+var_10], eax
0x8AF130: test    eax, eax
0x8AF132: mov     [esp+1Ch+var_4], 0
0x8AF13A: jz      short loc_8AF147
0x8AF13C: mov     ecx, eax
0x8AF13E: call    sub_8AF020
0x8AF143: mov     esi, eax
0x8AF145: jmp     short loc_8AF149
0x8AF147: xor     esi, esi
0x8AF149: mov     eax, [esp+1Ch+arg_0]
0x8AF14D: push    eax
0x8AF14E: push    esi
0x8AF14F: mov     ecx, edi
0x8AF151: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8AF159: call    sub_89F5D0
0x8AF15E: sub     dword ptr ds:0BA7CFCh, 1
0x8AF165: jnz     short loc_8AF171
0x8AF167: mov     dword ptr ds:0BA7CF8h, 0
0x8AF171: push    offset unk_BA7C80; lpCriticalSection
0x8AF176: call    dword ptr ds:0A28074h
0x8AF17C: mov     eax, esi
0x8AF17E: mov     ecx, [esp+1Ch+var_C]
0x8AF182: mov     large fs:0, ecx
0x8AF189: pop     ecx
0x8AF18A: pop     edi
0x8AF18B: pop     esi
0x8AF18C: add     esp, 10h
0x8AF18F: retn    4
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
