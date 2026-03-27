0x8D72F0: push    ebp
0x8D72F1: mov     ebp, esp
0x8D72F3: and     esp, 0FFFFFFF0h
0x8D72F6: mov     eax, 3084h
0x8D72FB: call    __alloca_probe
0x8D7300: mov     eax, ds:0B30AACh
0x8D7305: push    ebx
0x8D7306: push    esi
0x8D7307: mov     [esp+308Ch+var_3064], ecx
0x8D730B: push    edi
0x8D730C: lea     ecx, [esp+3090h+var_3070]
0x8D7310: mov     [esp+3090h+var_4], eax
0x8D7317: call    sub_8B0E10
0x8D731C: mov     esi, [ebp+arg_4]
0x8D731F: push    esi
0x8D7320: lea     ecx, [esp+3094h+var_3070]
0x8D7324: call    sub_8B15C0
0x8D7329: xor     edi, edi
0x8D732B: test    esi, esi
0x8D732D: mov     [esp+3090h+var_2C], 7F7FFFFFh
0x8D7338: mov     [esp+3090h+var_3074], edi
0x8D733C: jle     loc_8D73BE
0x8D7342: mov     eax, [ebp+arg_0]
0x8D7345: mov     esi, [eax+edi*4]
0x8D7348: push    0
0x8D734A: add     esi, 14h
0x8D734D: push    esi
0x8D734E: lea     ecx, [esp+3098h+var_3070]
0x8D7352: call    sub_8B0E80
0x8D7357: mov     eax, [esi+28h]
0x8D735A: xor     ebx, ebx
0x8D735C: test    eax, eax
0x8D735E: jle     short loc_8D73B2
0x8D7360: mov     ecx, [esi+24h]
0x8D7363: mov     eax, [ecx+ebx*8+4]
0x8D7367: lea     edi, [ecx+ebx*8]
0x8D736A: push    eax
0x8D736B: lea     ecx, [esp+3094h+var_3070]
0x8D736F: call    sub_8B0F00
0x8D7374: push    eax
0x8D7375: lea     edx, [esp+3094h+var_3075]
0x8D7379: push    edx
0x8D737A: lea     ecx, [esp+3098h+var_3070]
0x8D737E: call    sub_8B0D80
0x8D7383: cmp     byte ptr [eax], 0
0x8D7386: jnz     short loc_8D73A6
0x8D7388: mov     ecx, [ebp+arg_8]
0x8D738B: mov     edx, [edi]
0x8D738D: lea     eax, [esp+3090h+var_3060]
0x8D7391: push    eax
0x8D7392: push    ecx
0x8D7393: mov     ecx, [esp+3098h+var_3064]
0x8D7397: push    edx
0x8D7398: call    [ebp+arg_C]
0x8D739B: mov     eax, ds:0BA7D98h
0x8D73A0: cmp     dword ptr [eax+4], 1
0x8D73A4: jz      short loc_8D73BE
0x8D73A6: mov     eax, [esi+28h]
0x8D73A9: inc     ebx
0x8D73AA: cmp     ebx, eax
0x8D73AC: jl      short loc_8D7360
0x8D73AE: mov     edi, [esp+3090h+var_3074]
0x8D73B2: mov     eax, [ebp+arg_4]
0x8D73B5: inc     edi
0x8D73B6: cmp     edi, eax
0x8D73B8: mov     [esp+3090h+var_3074], edi
0x8D73BC: jl      short loc_8D7342
0x8D73BE: lea     ecx, [esp+3090h+var_3070]
0x8D73C2: call    sub_8B0E60
0x8D73C7: mov     ecx, [esp+3090h+var_4]
0x8D73CE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8D73D3: pop     edi
0x8D73D4: pop     esi
0x8D73D5: pop     ebx
0x8D73D6: mov     esp, ebp
0x8D73D8: pop     ebp
0x8D73D9: retn    10h
