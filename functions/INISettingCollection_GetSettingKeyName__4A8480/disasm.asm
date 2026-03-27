0x4A8480: push    ebx
0x4A8481: mov     ebx, [esp+4+Dest]
0x4A8485: test    ebx, ebx
0x4A8487: jz      short loc_4A84CF
0x4A8489: mov     eax, [esp+4+arg_0]
0x4A848D: push    esi
0x4A848E: mov     byte ptr [ebx], 0
0x4A8491: mov     esi, [eax+4]
0x4A8494: test    esi, esi
0x4A8496: jz      short loc_4A84CE
0x4A8498: push    edi
0x4A8499: push    3Ah ; ':'; Val
0x4A849B: push    esi; Str
0x4A849C: call    _strchr
0x4A84A1: add     esp, 8
0x4A84A4: test    eax, eax
0x4A84A6: jz      short loc_4A84AC
0x4A84A8: sub     eax, esi
0x4A84AA: jmp     short loc_4A84BC
0x4A84AC: mov     eax, esi
0x4A84AE: lea     edx, [eax+1]
0x4A84B1: mov     cl, [eax]
0x4A84B3: add     eax, 1
0x4A84B6: test    cl, cl
0x4A84B8: jnz     short loc_4A84B1
0x4A84BA: sub     eax, edx
0x4A84BC: mov     edi, eax
0x4A84BE: push    edi; Count
0x4A84BF: push    esi; Source
0x4A84C0: push    ebx; Dest
0x4A84C1: call    _strncpy
0x4A84C6: add     esp, 0Ch
0x4A84C9: mov     byte ptr [edi+ebx], 0
0x4A84CD: pop     edi
0x4A84CE: pop     esi
0x4A84CF: pop     ebx
0x4A84D0: retn
