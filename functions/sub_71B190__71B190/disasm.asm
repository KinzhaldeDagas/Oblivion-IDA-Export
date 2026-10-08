0x71B190: push    0FFFFFFFFh
0x71B192: push    offset SEH_8C8970
0x71B197: mov     eax, large fs:0
0x71B19D: push    eax
0x71B19E: push    ecx
0x71B19F: push    esi
0x71B1A0: push    edi
0x71B1A1: mov     eax, ds:0B30AACh
0x71B1A6: xor     eax, esp
0x71B1A8: push    eax
0x71B1A9: lea     eax, [esp+1Ch+var_C]
0x71B1AD: mov     large fs:0, eax
0x71B1B3: push    680h; Size
0x71B1B8: call    FormHeapAlloc
0x71B1BD: add     esp, 4
0x71B1C0: mov     [esp+1Ch+var_10], eax
0x71B1C4: test    eax, eax
0x71B1C6: mov     [esp+1Ch+var_4], 0
0x71B1CE: jz      short loc_71B1DB
0x71B1D0: mov     ecx, eax; this
0x71B1D2: call    ??0NiImageConverter@@QAE@XZ; NiImageConverter::NiImageConverter(void)
0x71B1D7: mov     esi, eax
0x71B1D9: jmp     short loc_71B1DD
0x71B1DB: xor     esi, esi
0x71B1DD: mov     eax, ds:0B3FD28h
0x71B1E2: cmp     eax, esi
0x71B1E4: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x71B1EC: jz      short loc_71B224
0x71B1EE: test    eax, eax
0x71B1F0: jz      short loc_71B210
0x71B1F2: mov     edi, eax
0x71B1F4: add     eax, 4
0x71B1F7: push    eax; lpAddend
0x71B1F8: call    dword ptr ds:0A2807Ch
0x71B1FE: test    eax, eax
0x71B200: jnz     short loc_71B210
0x71B202: test    edi, edi
0x71B204: jz      short loc_71B210
0x71B206: mov     eax, [edi]
0x71B208: mov     edx, [eax]
0x71B20A: push    1
0x71B20C: mov     ecx, edi
0x71B20E: call    edx
0x71B210: test    esi, esi
0x71B212: mov     ds:0B3FD28h, esi
0x71B218: jz      short loc_71B224
0x71B21A: add     esi, 4
0x71B21D: push    esi; lpAddend
0x71B21E: call    dword ptr ds:0A28078h
0x71B224: mov     ecx, dword ptr [esp+1Ch+var_C]
0x71B228: mov     large fs:0, ecx
0x71B22F: pop     ecx
0x71B230: pop     edi
0x71B231: pop     esi
0x71B232: add     esp, 10h
0x71B235: retn
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
