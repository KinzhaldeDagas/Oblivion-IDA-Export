0x92A590: push    ebp
0x92A591: mov     ebp, esp
0x92A593: and     esp, 0FFFFFFF0h
0x92A596: push    ecx
0x92A597: mov     edx, [ecx+24h]
0x92A59A: mov     eax, [edx+14h]
0x92A59D: imul    eax, [ebp+arg_0]
0x92A5A1: push    ebx
0x92A5A2: mov     ebx, [edx]
0x92A5A4: push    esi
0x92A5A5: push    edi
0x92A5A6: mov     edi, [edx+0Ch]
0x92A5A9: movzx   esi, word ptr [eax+edi+2]
0x92A5AE: add     eax, edi
0x92A5B0: movzx   edi, word ptr [eax+4]
0x92A5B4: mov     [esp+10h+var_4], ecx
0x92A5B8: mov     ecx, [edx+4]
0x92A5BB: movzx   edx, word ptr [eax]
0x92A5BE: imul    esi, ecx
0x92A5C1: imul    edi, ecx
0x92A5C4: mov     eax, [ebp+arg_4]
0x92A5C7: imul    edx, ecx
0x92A5CA: mov     ecx, [esp+10h+var_4]
0x92A5CE: add     edx, ebx
0x92A5D0: add     esi, ebx
0x92A5D2: add     edi, ebx
0x92A5D4: test    eax, eax
0x92A5D6: jz      short loc_92A5F3
0x92A5D8: fld     dword ptr [ecx+30h]
0x92A5DB: mov     word ptr [eax+6], 1
0x92A5E1: fstp    dword ptr [eax+0Ch]
0x92A5E4: mov     dword ptr [eax+8], 0
0x92A5EB: mov     dword ptr [eax], offset ??_7hkTriangleShape@@6B@; const hkTriangleShape::`vftable'
0x92A5F1: jmp     short loc_92A5F5
0x92A5F3: xor     eax, eax
0x92A5F5: movaps  xmm0, xmmword ptr [ecx+10h]
0x92A5F9: movaps  xmm1, xmmword ptr [edx]
0x92A5FC: mulps   xmm1, xmm0
0x92A5FF: movaps  xmmword ptr [eax+10h], xmm1
0x92A603: movaps  xmm0, xmmword ptr [ecx+10h]
0x92A607: movaps  xmm1, xmmword ptr [esi]
0x92A60A: mulps   xmm1, xmm0
0x92A60D: movaps  xmmword ptr [eax+20h], xmm1
0x92A611: movaps  xmm1, xmmword ptr [edi]
0x92A614: movaps  xmm0, xmmword ptr [ecx+10h]
0x92A618: pop     edi
0x92A619: pop     esi
0x92A61A: mulps   xmm1, xmm0
0x92A61D: movaps  xmmword ptr [eax+30h], xmm1
0x92A621: pop     ebx
0x92A622: mov     esp, ebp
0x92A624: pop     ebp
0x92A625: retn    8
