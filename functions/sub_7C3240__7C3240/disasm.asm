0x7C3240: push    0FFFFFFFFh
0x7C3242: push    offset SEH_7C3240
0x7C3247: mov     eax, large fs:0
0x7C324D: push    eax
0x7C324E: push    ecx
0x7C324F: push    ebx
0x7C3250: push    ebp
0x7C3251: push    esi
0x7C3252: push    edi
0x7C3253: mov     eax, ds:0B30AACh
0x7C3258: xor     eax, esp
0x7C325A: push    eax
0x7C325B: lea     eax, [esp+24h+var_C]
0x7C325F: mov     large fs:0, eax
0x7C3265: mov     ebp, ecx
0x7C3267: mov     eax, [esp+24h+arg_4]
0x7C326B: cmp     [ebp+24h], eax
0x7C326E: jz      loc_7C34AD
0x7C3274: call    sub_7E24C0
0x7C3279: cmp     byte ptr ds:0B43344h, 0
0x7C3280: jz      short loc_7C328E
0x7C3282: mov     ecx, ebp
0x7C3284: call    sub_7ED600
0x7C3289: movzx   eax, ax
0x7C328C: jmp     short loc_7C3290
0x7C328E: xor     eax, eax
0x7C3290: mov     edi, 2
0x7C3295: cmp     ds:0B42F48h, edi
0x7C329B: jl      loc_7C333A
0x7C32A1: cmp     byte ptr ds:0B43070h, 0
0x7C32A8: jnz     loc_7C333A
0x7C32AE: test    ax, ax
0x7C32B1: jbe     short loc_7C32F4
0x7C32B3: mov     ecx, ebp
0x7C32B5: call    sub_7ED2A0
0x7C32BA: push    10h; Size
0x7C32BC: mov     esi, eax
0x7C32BE: call    FormHeapAlloc
0x7C32C3: add     esp, 4
0x7C32C6: mov     [esp+24h+var_10], eax
0x7C32CA: test    eax, eax
0x7C32CC: mov     ebx, [esp+24h+arg_0]
0x7C32D0: mov     [esp+24h+var_4], 0
0x7C32D8: jz      loc_7C33C3
0x7C32DE: push    esi
0x7C32DF: push    1
0x7C32E1: push    1
0x7C32E3: push    0Dh
0x7C32E5: push    ebx
0x7C32E6: push    eax
0x7C32E7: call    sub_7E2370
0x7C32EC: add     esp, 18h
0x7C32EF: jmp     loc_7C33C5
0x7C32F4: push    10h; Size
0x7C32F6: call    FormHeapAlloc
0x7C32FB: add     esp, 4
0x7C32FE: mov     [esp+24h+var_10], eax
0x7C3302: test    eax, eax
0x7C3304: mov     ebx, [esp+24h+arg_0]
0x7C3308: mov     [esp+24h+var_4], 1
0x7C3310: jz      short loc_7C332E
0x7C3312: push    0
0x7C3314: push    0
0x7C3316: push    1
0x7C3318: push    0Ch
0x7C331A: push    ebx
0x7C331B: push    eax
0x7C331C: call    sub_7E2370
0x7C3321: add     esp, 18h
0x7C3324: lea     edx, [esp+24h+arg_0]
0x7C3328: push    edx
0x7C3329: jmp     loc_7C33CA
0x7C332E: lea     edx, [esp+24h+arg_0]
0x7C3332: xor     eax, eax
0x7C3334: push    edx
0x7C3335: jmp     loc_7C33CA
0x7C333A: test    ax, ax
0x7C333D: jbe     short loc_7C338E
0x7C333F: mov     ecx, ebp
0x7C3341: call    sub_7ED2A0
0x7C3346: push    10h; Size
0x7C3348: mov     esi, eax
0x7C334A: call    FormHeapAlloc
0x7C334F: add     esp, 4
0x7C3352: mov     [esp+24h+var_10], eax
0x7C3356: test    eax, eax
0x7C3358: mov     ebx, [esp+24h+arg_0]
0x7C335C: mov     [esp+24h+var_4], edi
0x7C3360: jz      short loc_7C3381
0x7C3362: push    esi
0x7C3363: push    1
0x7C3365: push    1
0x7C3367: push    196h
0x7C336C: push    ebx
0x7C336D: push    eax
0x7C336E: call    sub_7E2370
0x7C3373: mov     [esp+3Ch+arg_0], eax
0x7C3377: add     esp, 18h
0x7C337A: lea     eax, [esp+24h+arg_0]
0x7C337E: push    eax
0x7C337F: jmp     short loc_7C33CE
0x7C3381: xor     eax, eax
0x7C3383: mov     [esp+24h+arg_0], eax
0x7C3387: lea     eax, [esp+24h+arg_0]
0x7C338B: push    eax
0x7C338C: jmp     short loc_7C33CE
0x7C338E: push    10h; Size
0x7C3390: call    FormHeapAlloc
0x7C3395: add     esp, 4
0x7C3398: mov     [esp+24h+var_10], eax
0x7C339C: test    eax, eax
0x7C339E: mov     ebx, [esp+24h+arg_0]
0x7C33A2: mov     [esp+24h+var_4], 3
0x7C33AA: jz      short loc_7C33C3
0x7C33AC: push    0
0x7C33AE: push    0
0x7C33B0: push    1
0x7C33B2: push    195h
0x7C33B7: push    ebx
0x7C33B8: push    eax
0x7C33B9: call    sub_7E2370
0x7C33BE: add     esp, 18h
0x7C33C1: jmp     short loc_7C33C5
0x7C33C3: xor     eax, eax
0x7C33C5: lea     ecx, [esp+24h+arg_0]
0x7C33C9: push    ecx
0x7C33CA: mov     [esp+28h+arg_0], eax
0x7C33CE: lea     esi, [ebp+28h]
0x7C33D1: mov     ecx, esi
0x7C33D3: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7C33DB: call    sub_6AA320
0x7C33E0: cmp     dword ptr ds:0B42F48h, 3
0x7C33E7: jl      loc_7C349C
0x7C33ED: test    byte ptr ds:0B42F40h, 10h
0x7C33F4: mov     eax, 0
0x7C33F9: setnle  al
0x7C33FC: test    al, al
0x7C33FE: jz      loc_7C349C
0x7C3404: mov     ecx, ebp
0x7C3406: call    sub_7ED1A0
0x7C340B: mov     edi, eax
0x7C340D: test    edi, edi
0x7C340F: jz      loc_7C349C
0x7C3415: cmp     byte ptr [edi+0F4h], 0
0x7C341C: jz      short loc_7C348B
0x7C341E: push    10h; Size
0x7C3420: call    FormHeapAlloc
0x7C3425: add     esp, 4
0x7C3428: mov     [esp+24h+arg_0], eax
0x7C342C: test    eax, eax
0x7C342E: mov     [esp+24h+var_4], 4
0x7C3436: jz      short loc_7C344D
0x7C3438: push    edi
0x7C3439: push    1
0x7C343B: push    0
0x7C343D: push    0
0x7C343F: push    ebx
0x7C3440: push    eax
0x7C3441: call    sub_7E2370
0x7C3446: add     esp, 18h
0x7C3449: mov     edi, eax
0x7C344B: jmp     short loc_7C344F
0x7C344D: xor     edi, edi
0x7C344F: mov     word ptr [edi+4], 197h
0x7C3455: mov     edx, [esi]
0x7C3457: mov     eax, [edx+4]
0x7C345A: mov     ecx, esi
0x7C345C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7C3464: call    eax
0x7C3466: mov     [eax+8], edi
0x7C3469: mov     dword ptr [eax+4], 0
0x7C3470: mov     ecx, [esi+4]
0x7C3473: mov     [eax], ecx
0x7C3475: mov     ecx, [esi+4]
0x7C3478: test    ecx, ecx
0x7C347A: jz      short loc_7C3481
0x7C347C: mov     [ecx+4], eax
0x7C347F: jmp     short loc_7C3484
0x7C3481: mov     [esi+8], eax
0x7C3484: add     dword ptr [esi+0Ch], 1
0x7C3488: mov     [esi+4], eax
0x7C348B: mov     ecx, ebp
0x7C348D: call    sub_7ED3B0
0x7C3492: mov     edi, eax
0x7C3494: test    edi, edi
0x7C3496: jnz     loc_7C3415
0x7C349C: movzx   edx, word ptr ds:0B42EACh
0x7C34A3: shl     edx, 8
0x7C34A6: or      edx, [esp+24h+arg_4]
0x7C34AA: mov     [ebp+24h], edx
0x7C34AD: lea     eax, [ebp+28h]
0x7C34B0: mov     ecx, [esp+24h+var_C]
0x7C34B4: mov     large fs:0, ecx
0x7C34BB: pop     ecx
0x7C34BC: pop     edi
0x7C34BD: pop     esi
0x7C34BE: pop     ebp
0x7C34BF: pop     ebx
0x7C34C0: add     esp, 10h
0x7C34C3: retn    10h
