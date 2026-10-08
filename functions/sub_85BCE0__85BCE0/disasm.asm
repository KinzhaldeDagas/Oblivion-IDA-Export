0x85BCE0: push    0FFFFFFFFh
0x85BCE2: push    offset SEH_8C8970
0x85BCE7: mov     eax, large fs:0
0x85BCED: push    eax
0x85BCEE: push    ecx
0x85BCEF: push    esi
0x85BCF0: push    edi
0x85BCF1: mov     eax, ds:0B30AACh
0x85BCF6: xor     eax, esp
0x85BCF8: push    eax
0x85BCF9: lea     eax, [esp+1Ch+var_C]
0x85BCFD: mov     large fs:0, eax
0x85BD03: mov     edi, ecx
0x85BD05: push    88h ; 'ˆ'; Size
0x85BD0A: call    FormHeapAlloc
0x85BD0F: add     esp, 4
0x85BD12: mov     [esp+1Ch+var_10], eax
0x85BD16: xor     esi, esi
0x85BD18: cmp     eax, esi
0x85BD1A: mov     [esp+1Ch+var_4], esi
0x85BD1E: jz      short loc_85BD29
0x85BD20: mov     ecx, eax
0x85BD22: call    sub_85BBE0; Pass205: WaterShaderProperty constructor; initializes pass-data block +0x6C..+0x84 with default flags and floats.
0x85BD27: mov     esi, eax
0x85BD29: mov     eax, [esp+1Ch+arg_0]
0x85BD2D: push    eax
0x85BD2E: push    esi
0x85BD2F: mov     ecx, edi
0x85BD31: mov     [esp+24h+var_4], 0FFFFFFFFh
0x85BD39: call    sub_85BC40; Pass205: WaterShaderProperty copy/clone helper copies full water pass-data block +0x6C..+0x84.
0x85BD3E: mov     eax, esi
0x85BD40: mov     ecx, [esp+1Ch+var_C]
0x85BD44: mov     large fs:0, ecx
0x85BD4B: pop     ecx
0x85BD4C: pop     edi
0x85BD4D: pop     esi
0x85BD4E: add     esp, 10h
0x85BD51: retn    4
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
