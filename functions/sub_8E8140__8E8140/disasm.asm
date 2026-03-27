0x8E8140: push    ebp
0x8E8141: mov     ebp, esp
0x8E8143: and     esp, 0FFFFFFF0h
0x8E8146: push    ecx
0x8E8147: push    ebx
0x8E8148: mov     ebx, [ebp+arg_4]
0x8E814B: push    esi
0x8E814C: push    edi
0x8E814D: mov     edi, [ebp+arg_0]
0x8E8150: mov     esi, [edi+4]
0x8E8153: cmp     esi, [ebx+4]
0x8E8156: setz    al
0x8E8159: test    al, al
0x8E815B: jz      short loc_8E81A8
0x8E815D: xor     edx, edx
0x8E815F: test    esi, esi
0x8E8161: jle     short loc_8E81A8
0x8E8163: movaps  xmm1, xmmword ptr ds:0A372D0h
0x8E816A: movss   xmm2, dword ptr ds:0A37080h
0x8E8172: xor     ecx, ecx
0x8E8174: test    al, al
0x8E8176: jz      short loc_8E81A8
0x8E8178: mov     eax, [edi]
0x8E817A: movaps  xmm3, xmmword ptr [eax+ecx]
0x8E817E: mov     eax, [ebx]
0x8E8180: movaps  xmm0, xmmword ptr [eax+ecx]
0x8E8184: subps   xmm3, xmm0
0x8E8187: movss   xmm0, xmm2
0x8E818B: andps   xmm3, xmm1
0x8E818E: shufps  xmm0, xmm0, 0
0x8E8192: cmpltps xmm0, xmm3
0x8E8196: movmskps eax, xmm0
0x8E8199: test    eax, eax
0x8E819B: setz    al
0x8E819E: add     edx, 1
0x8E81A1: add     ecx, 10h
0x8E81A4: cmp     edx, esi
0x8E81A6: jl      short loc_8E8174
0x8E81A8: pop     edi
0x8E81A9: pop     esi
0x8E81AA: pop     ebx
0x8E81AB: mov     esp, ebp
0x8E81AD: pop     ebp
0x8E81AE: retn
