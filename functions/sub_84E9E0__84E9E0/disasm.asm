0x84E9E0: push    0FFFFFFFFh
0x84E9E2: push    offset SEH_879360
0x84E9E7: mov     eax, large fs:0
0x84E9ED: push    eax
0x84E9EE: push    ecx
0x84E9EF: push    ebx
0x84E9F0: push    ebp
0x84E9F1: push    esi
0x84E9F2: push    edi
0x84E9F3: mov     eax, ds:0B30AACh
0x84E9F8: xor     eax, esp
0x84E9FA: push    eax
0x84E9FB: lea     eax, [esp+24h+var_C]
0x84E9FF: mov     large fs:0, eax
0x84EA05: mov     edi, ecx
0x84EA07: mov     eax, ds:0B46538h
0x84EA0C: mov     ecx, ds:0B4653Ch
0x84EA12: mov     edx, ds:0B46540h
0x84EA18: mov     esi, ds:0B45668h
0x84EA1E: mov     ds:0B46528h, eax
0x84EA23: mov     eax, ds:0B46544h
0x84EA28: mov     ds:0B4652Ch, ecx
0x84EA2E: mov     ecx, [esp+24h+arg_8]
0x84EA32: mov     ds:0B46530h, edx
0x84EA38: mov     ds:0B46534h, eax
0x84EA3D: mov     eax, [ecx+10h]
0x84EA40: push    eax
0x84EA41: mov     ecx, edi
0x84EA43: call    sub_848C40
0x84EA48: mov     edx, [esi+24h]
0x84EA4B: mov     ebp, [esp+24h+arg_C]
0x84EA4F: mov     ebx, [edx]
0x84EA51: mov     eax, [ebp+0]
0x84EA54: mov     edx, [eax+8Ch]
0x84EA5A: push    0
0x84EA5C: mov     ecx, ebp
0x84EA5E: mov     [esp+28h+var_10], ebx
0x84EA62: call    edx
0x84EA64: test    eax, eax
0x84EA66: jz      short loc_84EA7D
0x84EA68: mov     eax, [ebp+0]
0x84EA6B: mov     edx, [eax+8Ch]
0x84EA71: push    0
0x84EA73: mov     ecx, ebp
0x84EA75: call    edx
0x84EA77: mov     [esp+24h+arg_8], eax
0x84EA7B: jmp     short loc_84EA9B
0x84EA7D: test    dword ptr [ebp+1Ch], 80h
0x84EA84: jbe     short loc_84EA91
0x84EA86: mov     eax, ds:0B430F0h
0x84EA8B: mov     [esp+24h+arg_8], eax
0x84EA8F: jmp     short loc_84EA9B
0x84EA91: mov     ecx, ds:0B430DCh
0x84EA97: mov     [esp+24h+arg_8], ecx
0x84EA9B: mov     ebx, [ebx+4]
0x84EA9E: cmp     ebx, [esp+24h+arg_8]
0x84EAA2: jz      short loc_84EADF
0x84EAA4: test    ebx, ebx
0x84EAA6: jz      short loc_84EAC4
0x84EAA8: lea     edx, [ebx+4]
0x84EAAB: push    edx; lpAddend
0x84EAAC: call    dword ptr ds:0A2807Ch
0x84EAB2: test    eax, eax
0x84EAB4: jnz     short loc_84EAC4
0x84EAB6: test    ebx, ebx
0x84EAB8: jz      short loc_84EAC4
0x84EABA: mov     eax, [ebx]
0x84EABC: mov     edx, [eax]
0x84EABE: push    1
0x84EAC0: mov     ecx, ebx
0x84EAC2: call    edx
0x84EAC4: mov     eax, [esp+24h+arg_8]
0x84EAC8: test    eax, eax
0x84EACA: mov     ebx, [esp+24h+var_10]
0x84EACE: mov     [ebx+4], eax
0x84EAD1: jz      short loc_84EAE3
0x84EAD3: add     eax, 4
0x84EAD6: push    eax; lpAddend
0x84EAD7: call    dword ptr ds:0A28078h
0x84EADD: jmp     short loc_84EAE3
0x84EADF: mov     ebx, [esp+24h+var_10]
0x84EAE3: test    ebx, ebx
0x84EAE5: jz      short loc_84EB02
0x84EAE7: cmp     byte ptr ds:0B42CDDh, 0
0x84EAEE: jz      short loc_84EB02
0x84EAF0: mov     eax, [ebp+0]
0x84EAF3: mov     edx, [eax+78h]
0x84EAF6: mov     ecx, ebp
0x84EAF8: call    edx
0x84EAFA: push    eax
0x84EAFB: mov     ecx, ebx
0x84EAFD: call    sub_7715E0
0x84EB02: mov     ebx, 1
0x84EB07: add     [esi+60h], ebx
0x84EB0A: mov     [esp+24h+arg_8], esi
0x84EB0E: mov     ecx, [edi+38h]
0x84EB11: lea     eax, [esp+24h+arg_8]
0x84EB15: push    eax
0x84EB16: push    ecx
0x84EB17: lea     ecx, [edi+40h]
0x84EB1A: mov     [esp+2Ch+var_4], 0
0x84EB22: call    sub_76CE40
0x84EB27: or      eax, 0FFFFFFFFh
0x84EB2A: add     [esi+60h], eax
0x84EB2D: mov     [esp+24h+var_4], eax
0x84EB31: jnz     short loc_84EB3A
0x84EB33: mov     ecx, esi
0x84EB35: call    sub_7604D0
0x84EB3A: add     [edi+38h], ebx
0x84EB3D: mov     ecx, dword ptr [esp+24h+var_C]
0x84EB41: mov     large fs:0, ecx
0x84EB48: pop     ecx
0x84EB49: pop     edi
0x84EB4A: pop     esi
0x84EB4B: pop     ebp
0x84EB4C: pop     ebx
0x84EB4D: add     esp, 10h
0x84EB50: retn    10h
