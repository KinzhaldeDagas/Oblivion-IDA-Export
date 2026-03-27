0x91CC30: push    ebx
0x91CC31: mov     ebx, ecx
0x91CC33: test    ebx, ebx
0x91CC35: push    esi
0x91CC36: push    edi
0x91CC37: jz      short loc_91CC3E
0x91CC39: lea     eax, [ebx+28h]
0x91CC3C: jmp     short loc_91CC40
0x91CC3E: xor     eax, eax
0x91CC40: mov     edi, [esp+0Ch+arg_0]
0x91CC44: push    eax
0x91CC45: mov     ecx, edi
0x91CC47: call    sub_898A30
0x91CC4C: test    ebx, ebx
0x91CC4E: jz      short loc_91CC55
0x91CC50: lea     eax, [ebx+2Ch]
0x91CC53: jmp     short loc_91CC57
0x91CC55: xor     eax, eax
0x91CC57: push    eax
0x91CC58: mov     ecx, edi
0x91CC5A: call    sub_898A80
0x91CC5F: mov     eax, [edi+0BCh]
0x91CC65: xor     esi, esi
0x91CC67: test    eax, eax
0x91CC69: jle     short loc_91CC8C
0x91CC6B: add     ebx, 28h ; '('
0x91CC6E: mov     edi, edi
0x91CC70: mov     ecx, [edi+0B8h]
0x91CC76: mov     edx, [ecx+esi*4]
0x91CC79: mov     eax, [ebx]
0x91CC7B: push    edx
0x91CC7C: mov     ecx, ebx
0x91CC7E: call    dword ptr [eax+8]
0x91CC81: mov     eax, [edi+0BCh]
0x91CC87: inc     esi
0x91CC88: cmp     esi, eax
0x91CC8A: jl      short loc_91CC70
0x91CC8C: pop     edi
0x91CC8D: pop     esi
0x91CC8E: pop     ebx
0x91CC8F: retn    4
