0x8B9A20: push    0FFFFFFFFh
0x8B9A22: push    offset SEH_8C8970
0x8B9A27: mov     eax, large fs:0
0x8B9A2D: push    eax
0x8B9A2E: push    ecx
0x8B9A2F: push    esi
0x8B9A30: push    edi
0x8B9A31: mov     eax, ds:0B30AACh
0x8B9A36: xor     eax, esp
0x8B9A38: push    eax
0x8B9A39: lea     eax, [esp+1Ch+var_C]
0x8B9A3D: mov     large fs:0, eax
0x8B9A43: mov     edi, ecx
0x8B9A45: push    offset unk_BA7C80; lpCriticalSection
0x8B9A4A: call    dword ptr ds:0A2806Ch
0x8B9A50: call    dword ptr ds:0A2808Ch
0x8B9A56: add     dword ptr ds:0BA7CFCh, 1
0x8B9A5D: push    1E0h; Size
0x8B9A62: mov     ds:0BA7CF8h, eax
0x8B9A67: call    FormHeapAlloc
0x8B9A6C: add     esp, 4
0x8B9A6F: mov     [esp+1Ch+var_10], eax
0x8B9A73: test    eax, eax
0x8B9A75: mov     [esp+1Ch+var_4], 0
0x8B9A7D: jz      short loc_8B9A8A
0x8B9A7F: mov     ecx, eax; this
0x8B9A81: call    ??0bhkCharacterProxy@@QAE@XZ; bhkCharacterProxy::bhkCharacterProxy(void)
0x8B9A86: mov     esi, eax
0x8B9A88: jmp     short loc_8B9A8C
0x8B9A8A: xor     esi, esi
0x8B9A8C: mov     eax, [esp+1Ch+arg_0]
0x8B9A90: push    eax
0x8B9A91: push    esi
0x8B9A92: mov     ecx, edi
0x8B9A94: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8B9A9C: call    sub_89D610
0x8B9AA1: sub     dword ptr ds:0BA7CFCh, 1
0x8B9AA8: jnz     short loc_8B9AB4
0x8B9AAA: mov     dword ptr ds:0BA7CF8h, 0
0x8B9AB4: push    offset unk_BA7C80; lpCriticalSection
0x8B9AB9: call    dword ptr ds:0A28074h
0x8B9ABF: mov     eax, esi
0x8B9AC1: mov     ecx, [esp+1Ch+var_C]
0x8B9AC5: mov     large fs:0, ecx
0x8B9ACC: pop     ecx
0x8B9ACD: pop     edi
0x8B9ACE: pop     esi
0x8B9ACF: add     esp, 10h
0x8B9AD2: retn    4
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
