0x8B8F50: push    ebp
0x8B8F51: mov     ebp, esp
0x8B8F53: and     esp, 0FFFFFFF0h
0x8B8F56: push    ecx
0x8B8F57: push    ebx
0x8B8F58: mov     ebx, [ebp+arg_0]
0x8B8F5B: test    ebx, ebx
0x8B8F5D: push    esi
0x8B8F5E: push    edi
0x8B8F5F: mov     esi, ecx
0x8B8F61: jz      short loc_8B8F9C
0x8B8F63: movaps  xmm0, xmmword ptr [ebx+30h]
0x8B8F67: fld1
0x8B8F69: lea     eax, [ebx+30h]
0x8B8F6C: movaps  xmmword ptr [esi+30h], xmm0
0x8B8F70: movaps  xmm0, xmmword ptr [ebx+40h]
0x8B8F74: lea     edi, [ebx+40h]
0x8B8F77: movaps  xmmword ptr [esi+20h], xmm0
0x8B8F7B: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8B8F82: movaps  xmmword ptr [eax], xmm0
0x8B8F85: xorps   xmm0, xmm0
0x8B8F88: movaps  xmmword ptr [edi], xmm0
0x8B8F8B: fstp    dword ptr [edi+0Ch]
0x8B8F8E: push    eax
0x8B8F8F: call    sub_8A2F50
0x8B8F94: push    edi
0x8B8F95: mov     ecx, esi
0x8B8F97: call    sub_8A2F80
0x8B8F9C: push    ebx
0x8B8F9D: mov     ecx, esi
0x8B8F9F: call    sub_89D720
0x8B8FA4: pop     edi
0x8B8FA5: pop     esi
0x8B8FA6: pop     ebx
0x8B8FA7: mov     esp, ebp
0x8B8FA9: pop     ebp
0x8B8FAA: retn    4
