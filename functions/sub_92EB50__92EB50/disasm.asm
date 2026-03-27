0x92EB50: push    ebx
0x92EB51: push    esi
0x92EB52: push    edi
0x92EB53: mov     edi, [esp+0Ch+arg_0]
0x92EB57: mov     eax, [edi+4]
0x92EB5A: mov     ecx, [edi]
0x92EB5C: lea     esi, [eax-1]
0x92EB5F: lea     eax, [esi+1]
0x92EB62: cmp     eax, 4
0x92EB65: mov     edx, ecx
0x92EB67: jl      loc_92EC07
0x92EB6D: shr     eax, 2
0x92EB70: mov     ebx, eax
0x92EB72: neg     eax
0x92EB74: lea     esi, [esi+eax*4]
0x92EB77: jmp     short loc_92EB80
0x92EB79: align 10h
0x92EB80: fld     dword ptr ds:0A2FAA8h
0x92EB86: fld     dword ptr [ecx+0Ch]
0x92EB89: fucompp
0x92EB8B: fnstsw  ax
0x92EB8D: test    ah, 44h
0x92EB90: jp      short loc_92EB9D
0x92EB92: movaps  xmm0, xmmword ptr [ecx]
0x92EB95: mov     eax, edx
0x92EB97: add     edx, 10h
0x92EB9A: movaps  xmmword ptr [eax], xmm0
0x92EB9D: fld     dword ptr ds:0A2FAA8h
0x92EBA3: add     ecx, 10h
0x92EBA6: fld     dword ptr [ecx+0Ch]
0x92EBA9: fucompp
0x92EBAB: fnstsw  ax
0x92EBAD: test    ah, 44h
0x92EBB0: jp      short loc_92EBBD
0x92EBB2: movaps  xmm0, xmmword ptr [ecx]
0x92EBB5: mov     eax, edx
0x92EBB7: add     edx, 10h
0x92EBBA: movaps  xmmword ptr [eax], xmm0
0x92EBBD: fld     dword ptr ds:0A2FAA8h
0x92EBC3: add     ecx, 10h
0x92EBC6: fld     dword ptr [ecx+0Ch]
0x92EBC9: fucompp
0x92EBCB: fnstsw  ax
0x92EBCD: test    ah, 44h
0x92EBD0: jp      short loc_92EBDD
0x92EBD2: movaps  xmm0, xmmword ptr [ecx]
0x92EBD5: mov     eax, edx
0x92EBD7: add     edx, 10h
0x92EBDA: movaps  xmmword ptr [eax], xmm0
0x92EBDD: fld     dword ptr ds:0A2FAA8h
0x92EBE3: add     ecx, 10h
0x92EBE6: fld     dword ptr [ecx+0Ch]
0x92EBE9: fucompp
0x92EBEB: fnstsw  ax
0x92EBED: test    ah, 44h
0x92EBF0: jp      short loc_92EBFD
0x92EBF2: movaps  xmm0, xmmword ptr [ecx]
0x92EBF5: mov     eax, edx
0x92EBF7: add     edx, 10h
0x92EBFA: movaps  xmmword ptr [eax], xmm0
0x92EBFD: add     ecx, 10h
0x92EC00: dec     ebx
0x92EC01: jnz     loc_92EB80
0x92EC07: test    esi, esi
0x92EC09: jl      short loc_92EC33
0x92EC0B: inc     esi
0x92EC0C: lea     esp, [esp+0]
0x92EC10: fld     dword ptr ds:0A2FAA8h
0x92EC16: fld     dword ptr [ecx+0Ch]
0x92EC19: fucompp
0x92EC1B: fnstsw  ax
0x92EC1D: test    ah, 44h
0x92EC20: jp      short loc_92EC2D
0x92EC22: movaps  xmm0, xmmword ptr [ecx]
0x92EC25: mov     eax, edx
0x92EC27: add     edx, 10h
0x92EC2A: movaps  xmmword ptr [eax], xmm0
0x92EC2D: add     ecx, 10h
0x92EC30: dec     esi
0x92EC31: jnz     short loc_92EC10
0x92EC33: mov     ebx, [edi]
0x92EC35: mov     eax, [edi+8]
0x92EC38: sub     edx, ebx
0x92EC3A: sar     edx, 4
0x92EC3D: mov     esi, edx
0x92EC3F: and     eax, 3FFFFFFFh
0x92EC44: cmp     eax, esi
0x92EC46: jge     short loc_92EC5C
0x92EC48: add     eax, eax
0x92EC4A: cmp     esi, eax
0x92EC4C: jl      short loc_92EC50
0x92EC4E: mov     eax, esi
0x92EC50: push    10h
0x92EC52: push    eax
0x92EC53: push    edi
0x92EC54: call    sub_8A6E40
0x92EC59: add     esp, 0Ch
0x92EC5C: mov     [edi+4], esi
0x92EC5F: pop     edi
0x92EC60: pop     esi
0x92EC61: pop     ebx
0x92EC62: retn
