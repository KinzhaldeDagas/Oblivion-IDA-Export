0x4B3310: sub     esp, 10Ch
0x4B3316: mov     eax, ds:0B30AACh
0x4B331B: xor     eax, esp
0x4B331D: mov     [esp+10Ch+var_4], eax
0x4B3324: push    ebx
0x4B3325: push    esi
0x4B3326: mov     esi, [esp+114h+arg_0]
0x4B332D: push    edi
0x4B332E: mov     edi, ecx
0x4B3330: push    esi
0x4B3331: push    edi
0x4B3332: call    sub_4693E0
0x4B3337: mov     ebx, eax
0x4B3339: add     esp, 8
0x4B333C: test    ebx, ebx
0x4B333E: jnz     short loc_4B334B
0x4B3340: push    edi
0x4B3341: call    GetFormModelPAth
0x4B3346: add     esp, 4
0x4B3349: mov     ebx, eax
0x4B334B: test    esi, esi
0x4B334D: mov     byte ptr [esp+118h+var_10C], 0
0x4B3352: jz      short loc_4B33C2
0x4B3354: mov     ecx, [esi+1Ch]
0x4B3357: test    ecx, ecx
0x4B3359: jz      short loc_4B336E
0x4B335B: mov     eax, [ecx]
0x4B335D: mov     edx, [eax+0F4h]
0x4B3363: call    edx
0x4B3365: test    al, al
0x4B3367: jz      short loc_4B336E
0x4B3369: mov     byte ptr [esp+118h+var_10C], 1
0x4B336E: mov     eax, [esi]
0x4B3370: mov     edx, [eax+0ECh]
0x4B3376: mov     ecx, esi
0x4B3378: call    edx
0x4B337A: fcomp   dword ptr ds:0A2F948h
0x4B3380: fnstsw  ax
0x4B3382: test    ah, 44h
0x4B3385: jnp     short loc_4B33C2
0x4B3387: lea     eax, [esp+118h+var_108]
0x4B338B: push    eax
0x4B338C: push    esi
0x4B338D: mov     ecx, edi
0x4B338F: call    sub_4B2B00
0x4B3394: lea     ecx, [esp+118h+var_108]
0x4B3398: push    ecx
0x4B3399: mov     ecx, ds:0B33A1Ch
0x4B339F: call    ModelLoader_IsModelLoaded??
0x4B33A4: mov     esi, eax
0x4B33A6: test    esi, esi
0x4B33A8: jz      short loc_4B33C2
0x4B33AA: lea     edx, [esi+4]
0x4B33AD: push    edx; lpAddend
0x4B33AE: call    dword ptr ds:0A28078h
0x4B33B4: mov     eax, [esi+8]
0x4B33B7: add     dword ptr ds:0B35AC8h, 1
0x4B33BE: test    eax, eax
0x4B33C0: jnz     short loc_4B33DF
0x4B33C2: push    1
0x4B33C4: push    edi
0x4B33C5: call    sub_4A2A30
0x4B33CA: mov     ecx, ds:0B33A1Ch
0x4B33D0: add     esp, 4
0x4B33D3: push    eax
0x4B33D4: mov     eax, [esp+120h+var_10C]
0x4B33D8: push    eax
0x4B33D9: push    ebx
0x4B33DA: call    sub_439EB0
0x4B33DF: mov     ecx, [esp+118h+var_4]
0x4B33E6: pop     edi
0x4B33E7: pop     esi
0x4B33E8: pop     ebx
0x4B33E9: xor     ecx, esp
0x4B33EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B33F0: add     esp, 10Ch
0x4B33F6: retn    4
