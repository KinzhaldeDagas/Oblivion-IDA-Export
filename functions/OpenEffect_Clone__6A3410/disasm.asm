0x6A3410: push    0FFFFFFFFh
0x6A3412: push    offset SEH_8C8970
0x6A3417: mov     eax, large fs:0
0x6A341D: push    eax
0x6A341E: push    ecx
0x6A341F: push    esi
0x6A3420: push    edi
0x6A3421: mov     eax, ds:0B30AACh
0x6A3426: xor     eax, esp
0x6A3428: push    eax
0x6A3429: lea     eax, [esp+1Ch+var_C]
0x6A342D: mov     large fs:0, eax
0x6A3433: mov     esi, ecx
0x6A3435: push    38h ; '8'; Size
0x6A3437: call    FormHeapAlloc
0x6A343C: mov     edi, eax
0x6A343E: add     esp, 4
0x6A3441: mov     [esp+1Ch+var_10], edi
0x6A3445: test    edi, edi
0x6A3447: mov     [esp+1Ch+var_4], 0
0x6A344F: jz      short loc_6A346C
0x6A3451: mov     eax, [esi+0Ch]
0x6A3454: mov     ecx, [esi+8]
0x6A3457: mov     edx, [esi+24h]
0x6A345A: push    eax
0x6A345B: push    ecx
0x6A345C: push    edx
0x6A345D: mov     ecx, edi; this
0x6A345F: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A3464: mov     dword ptr [edi], offset ??_7OpenEffect@@6B@; const OpenEffect::`vftable'
0x6A346A: jmp     short loc_6A346E
0x6A346C: xor     edi, edi
0x6A346E: mov     eax, [esi]
0x6A3470: mov     edx, [eax+2Ch]
0x6A3473: push    edi
0x6A3474: mov     ecx, esi
0x6A3476: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A347E: call    edx
0x6A3480: mov     eax, edi
0x6A3482: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A3486: mov     large fs:0, ecx
0x6A348D: pop     ecx
0x6A348E: pop     edi
0x6A348F: pop     esi
0x6A3490: add     esp, 10h
0x6A3493: retn
