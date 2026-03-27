0x91CCA0: push    ebx
0x91CCA1: mov     ebx, ecx
0x91CCA3: test    ebx, ebx
0x91CCA5: push    esi
0x91CCA6: push    edi
0x91CCA7: jz      short loc_91CCAE
0x91CCA9: lea     eax, [ebx+28h]
0x91CCAC: jmp     short loc_91CCB0
0x91CCAE: xor     eax, eax
0x91CCB0: mov     edi, [esp+0Ch+arg_0]
0x91CCB4: push    eax
0x91CCB5: mov     ecx, edi
0x91CCB7: call    sub_899CE0
0x91CCBC: test    ebx, ebx
0x91CCBE: jz      short loc_91CCC5
0x91CCC0: lea     eax, [ebx+2Ch]
0x91CCC3: jmp     short loc_91CCC7
0x91CCC5: xor     eax, eax
0x91CCC7: push    eax
0x91CCC8: mov     ecx, edi
0x91CCCA: call    sub_899D20
0x91CCCF: mov     eax, [edi+0BCh]
0x91CCD5: xor     esi, esi
0x91CCD7: test    eax, eax
0x91CCD9: jle     short loc_91CCFC
0x91CCDB: add     ebx, 28h ; '('
0x91CCDE: mov     edi, edi
0x91CCE0: mov     ecx, [edi+0B8h]
0x91CCE6: mov     edx, [ecx+esi*4]
0x91CCE9: mov     eax, [ebx]
0x91CCEB: push    edx
0x91CCEC: mov     ecx, ebx
0x91CCEE: call    dword ptr [eax+4]
0x91CCF1: mov     eax, [edi+0BCh]
0x91CCF7: inc     esi
0x91CCF8: cmp     esi, eax
0x91CCFA: jl      short loc_91CCE0
0x91CCFC: pop     edi
0x91CCFD: pop     esi
0x91CCFE: pop     ebx
0x91CCFF: retn    4
