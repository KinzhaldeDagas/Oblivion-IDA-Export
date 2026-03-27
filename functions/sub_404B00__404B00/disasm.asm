0x404B00: sub     esp, 30Ch
0x404B06: mov     eax, ___security_cookie
0x404B0B: xor     eax, esp
0x404B0D: mov     [esp+30Ch+var_4], eax
0x404B14: mov     eax, [esp+30Ch+arg_0]
0x404B1B: push    ebx
0x404B1C: xor     bl, bl
0x404B1E: lea     edx, [esp+310h+Filename]
0x404B22: push    esi
0x404B23: mov     esi, [esp+314h+arg_4]
0x404B2A: mov     [esp+314h+var_309], bl
0x404B2E: sub     edx, eax
0x404B30: mov     cl, [eax]
0x404B32: mov     [edx+eax], cl
0x404B35: add     eax, 1
0x404B38: test    cl, cl
0x404B3A: jnz     short loc_404B30
0x404B3C: mov     eax, esi
0x404B3E: mov     edx, esi
0x404B40: mov     cl, [eax]
0x404B42: add     eax, 1
0x404B45: test    cl, cl
0x404B47: jnz     short loc_404B40
0x404B49: push    edi
0x404B4A: lea     edi, [esp+318h+Filename]
0x404B4E: sub     eax, edx
0x404B50: add     edi, 0FFFFFFFFh
0x404B53: mov     cl, [edi+1]
0x404B56: add     edi, 1
0x404B59: test    cl, cl
0x404B5B: jnz     short loc_404B53
0x404B5D: mov     ecx, eax
0x404B5F: shr     ecx, 2
0x404B62: rep movsd
0x404B64: mov     ecx, eax
0x404B66: lea     eax, [esp+318h+Filename]
0x404B6A: and     ecx, 3
0x404B6D: push    offset Mode; "r"
0x404B72: push    eax; Filename
0x404B73: rep movsb
0x404B75: call    _fopen
0x404B7A: add     esp, 8
0x404B7D: mov     esi, eax
0x404B7F: test    esi, esi
0x404B81: pop     edi
0x404B82: jz      loc_404C38
0x404B88: push    esi; File
0x404B89: lea     ecx, [esp+318h+Buf]
0x404B90: push    200h; MaxCount
0x404B95: push    ecx; Buf
0x404B96: call    _fgets
0x404B9B: add     esp, 0Ch
0x404B9E: test    eax, eax
0x404BA0: jz      loc_404C2F
0x404BA6: mov     bl, 23h ; '#'
0x404BA8: jmp     short loc_404BB0
0x404BAA: align 10h
0x404BB0: lea     eax, [esp+314h+Buf]
0x404BB7: lea     edx, [eax+1]
0x404BBA: lea     ebx, [ebx+0]
0x404BC0: mov     cl, [eax]
0x404BC2: add     eax, 1
0x404BC5: test    cl, cl
0x404BC7: jnz     short loc_404BC0
0x404BC9: sub     eax, edx
0x404BCB: cmp     [esp+314h+Buf], bl
0x404BD2: jz      short loc_404C11
0x404BD4: cmp     eax, 1
0x404BD7: jbe     short loc_404C11
0x404BD9: cmp     [esp+eax+314h+var_205], 0Ah
0x404BE1: lea     eax, [esp+eax+314h+var_205]
0x404BE8: jnz     short loc_404BEC
0x404BEA: mov     [eax], cl
0x404BEC: mov     ecx, TESDataHandler
0x404BF2: lea     edx, [esp+314h+Buf]
0x404BF9: push    edx
0x404BFA: call    sub_447C50
0x404BFF: test    eax, eax
0x404C01: jz      short loc_404C11
0x404C03: push    1
0x404C05: mov     ecx, eax
0x404C07: call    TESFile_SetIsLoaded
0x404C0C: mov     [esp+314h+var_309], 1
0x404C11: push    esi; File
0x404C12: lea     eax, [esp+318h+Buf]
0x404C19: push    200h; MaxCount
0x404C1E: push    eax; Buf
0x404C1F: call    _fgets
0x404C24: add     esp, 0Ch
0x404C27: test    eax, eax
0x404C29: jnz     short loc_404BB0
0x404C2B: mov     bl, [esp+314h+var_309]
0x404C2F: push    esi; File
0x404C30: call    _fclose
0x404C35: add     esp, 4
0x404C38: mov     ecx, [esp+314h+var_4]
0x404C3F: pop     esi
0x404C40: mov     al, bl
0x404C42: pop     ebx
0x404C43: xor     ecx, esp
0x404C45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x404C4A: add     esp, 30Ch
0x404C50: retn    8
