0x6AE370: push    0FFFFFFFFh
0x6AE372: push    offset SEH_6AE370
0x6AE377: mov     eax, large fs:0
0x6AE37D: push    eax
0x6AE37E: push    ebp
0x6AE37F: push    esi
0x6AE380: push    edi
0x6AE381: mov     eax, ds:0B30AACh
0x6AE386: xor     eax, esp
0x6AE388: push    eax
0x6AE389: lea     eax, [esp+1Ch+var_C]
0x6AE38D: mov     large fs:0, eax
0x6AE393: mov     ebp, ecx
0x6AE395: cmp     byte ptr ds:0B16178h, 0
0x6AE39C: jnz     short loc_6AE3DA
0x6AE39E: push    4; Size
0x6AE3A0: call    FormHeapAlloc
0x6AE3A5: add     esp, 4
0x6AE3A8: mov     [esp+1Ch+arg_0], eax
0x6AE3AC: test    eax, eax
0x6AE3AE: mov     [esp+1Ch+var_4], 0
0x6AE3B6: jz      loc_6AE48D
0x6AE3BC: push    0
0x6AE3BE: mov     ecx, eax
0x6AE3C0: call    unknown_libname_1
0x6AE3C5: mov     ecx, [esp+1Ch+var_C]
0x6AE3C9: mov     large fs:0, ecx
0x6AE3D0: pop     ecx
0x6AE3D1: pop     edi
0x6AE3D2: pop     esi
0x6AE3D3: pop     ebp
0x6AE3D4: add     esp, 0Ch
0x6AE3D7: retn    10h
0x6AE3DA: mov     edx, [esp+1Ch+arg_0]
0x6AE3DE: test    edx, edx
0x6AE3E0: jz      loc_6AE48D
0x6AE3E6: mov     edi, offset EmptyString
0x6AE3EB: mov     esi, edx
0x6AE3ED: mov     ecx, 1
0x6AE3F2: xor     eax, eax
0x6AE3F4: repe cmpsb
0x6AE3F6: jz      loc_6AE48D
0x6AE3FC: mov     [esp+1Ch+arg_0], eax
0x6AE400: mov     eax, [ebp+0B4h]
0x6AE406: push    eax
0x6AE407: lea     ecx, [eax+1]
0x6AE40A: mov     eax, [esp+20h+arg_4]
0x6AE40E: push    eax
0x6AE40F: mov     [ebp+0B4h], ecx
0x6AE415: push    edx
0x6AE416: lea     ecx, [esp+28h+arg_0]
0x6AE41A: push    ecx
0x6AE41B: mov     ecx, ebp
0x6AE41D: call    sub_6AC610
0x6AE422: test    eax, eax
0x6AE424: jnz     short loc_6AE48D
0x6AE426: mov     esi, [esp+1Ch+arg_0]
0x6AE42A: mov     eax, [esi+0Ch]
0x6AE42D: push    eax; ArgList
0x6AE42E: push    esi; int
0x6AE42F: mov     ecx, ebp
0x6AE431: call    sub_6ACCA0
0x6AE436: push    4; Size
0x6AE438: call    FormHeapAlloc
0x6AE43D: add     esp, 4
0x6AE440: mov     [esp+1Ch+arg_0], eax
0x6AE444: test    eax, eax
0x6AE446: mov     [esp+1Ch+var_4], 1
0x6AE44E: jz      short loc_6AE45F
0x6AE450: mov     ecx, [esi+0Ch]
0x6AE453: push    ecx
0x6AE454: mov     ecx, eax
0x6AE456: call    unknown_libname_1
0x6AE45B: mov     edi, eax
0x6AE45D: jmp     short loc_6AE461
0x6AE45F: xor     edi, edi
0x6AE461: fld1
0x6AE463: push    ecx
0x6AE464: mov     ecx, esi
0x6AE466: fstp    [esp+20h+var_20]; float
0x6AE469: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6AE471: call    sub_6B6F20
0x6AE476: mov     eax, edi
0x6AE478: mov     ecx, [esp+1Ch+var_C]
0x6AE47C: mov     large fs:0, ecx
0x6AE483: pop     ecx
0x6AE484: pop     edi
0x6AE485: pop     esi
0x6AE486: pop     ebp
0x6AE487: add     esp, 0Ch
0x6AE48A: retn    10h
0x6AE48D: xor     eax, eax
0x6AE48F: mov     ecx, [esp+1Ch+var_C]
0x6AE493: mov     large fs:0, ecx
0x6AE49A: pop     ecx
0x6AE49B: pop     edi
0x6AE49C: pop     esi
0x6AE49D: pop     ebp
0x6AE49E: add     esp, 0Ch
0x6AE4A1: retn    10h
