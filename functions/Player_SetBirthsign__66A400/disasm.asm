0x66A400: push    esi
0x66A401: mov     esi, ecx
0x66A403: mov     eax, [esi+644h]
0x66A409: test    eax, eax
0x66A40B: push    edi
0x66A40C: jz      short loc_66A42F
0x66A40E: lea     edi, [eax+3Ch]
0x66A411: test    edi, edi
0x66A413: jz      short loc_66A42F
0x66A415: mov     eax, [edi]
0x66A417: test    eax, eax
0x66A419: jz      short loc_66A42F
0x66A41B: mov     edx, [esi]
0x66A41D: push    eax
0x66A41E: mov     eax, [edx+2E0h]
0x66A424: mov     ecx, esi
0x66A426: call    eax
0x66A428: mov     edi, [edi+4]
0x66A42B: test    edi, edi
0x66A42D: jnz     short loc_66A415
0x66A42F: fldz
0x66A431: push    ecx
0x66A432: lea     ecx, [esi+68h]; this
0x66A435: fstp    [esp+0Ch+var_C]
0x66A438: call    MagicTarget_ProcessEffects
0x66A43D: mov     eax, [esp+8+arg_0]
0x66A441: test    eax, eax
0x66A443: mov     [esi+644h], eax
0x66A449: jz      short loc_66A46C
0x66A44B: lea     edi, [eax+3Ch]
0x66A44E: test    edi, edi
0x66A450: jz      short loc_66A46C
0x66A452: mov     eax, [edi]
0x66A454: test    eax, eax
0x66A456: jz      short loc_66A46C
0x66A458: mov     edx, [esi]
0x66A45A: push    eax
0x66A45B: mov     eax, [edx+2DCh]
0x66A461: mov     ecx, esi
0x66A463: call    eax
0x66A465: mov     edi, [edi+4]
0x66A468: test    edi, edi
0x66A46A: jnz     short loc_66A452
0x66A46C: xor     edi, edi
0x66A46E: mov     edi, edi
0x66A470: push    edi
0x66A471: push    2
0x66A473: call    ActorValue_GetAVFromGroupOffset
0x66A478: add     esp, 8
0x66A47B: push    eax; float
0x66A47C: mov     ecx, esi
0x66A47E: call    sub_663C50
0x66A483: add     edi, 1
0x66A486: cmp     edi, 15h
0x66A489: jl      short loc_66A470
0x66A48B: pop     edi
0x66A48C: pop     esi
0x66A48D: retn    4
