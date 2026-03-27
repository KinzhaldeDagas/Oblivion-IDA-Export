0x8BA920: push    ebp
0x8BA921: mov     ebp, esp
0x8BA923: and     esp, 0FFFFFFF0h
0x8BA926: sub     esp, 8
0x8BA929: push    esi
0x8BA92A: mov     esi, ecx
0x8BA92C: cmp     dword ptr [esi+0Ch], 0
0x8BA930: push    edi
0x8BA931: mov     edi, [ebp+arg_0]
0x8BA934: jnz     short loc_8BA9A5
0x8BA936: push    1
0x8BA938: push    50h ; 'P'
0x8BA93A: mov     ecx, offset FormHeap
0x8BA93F: call    j_MemoryHeap_Alloc
0x8BA944: mov     dl, al
0x8BA946: and     dl, 0Fh
0x8BA949: mov     cl, 10h
0x8BA94B: sub     cl, dl
0x8BA94D: movzx   edx, cl
0x8BA950: add     eax, edx
0x8BA952: mov     [eax-1], cl
0x8BA955: mov     dword ptr [eax+0Ch], 0
0x8BA95C: mov     dword ptr [eax+10h], 0
0x8BA963: mov     dword ptr [eax+14h], 80000000h
0x8BA96A: xorps   xmm0, xmm0
0x8BA96D: mov     dword ptr [eax], 0
0x8BA973: mov     dword ptr [eax+4], 0
0x8BA97A: mov     byte ptr [eax+8], 2
0x8BA97E: movaps  xmmword ptr [eax+20h], xmm0
0x8BA982: movaps  xmmword ptr [eax+30h], xmm0
0x8BA986: cmp     dword ptr [esi+8], 0
0x8BA98A: mov     [esi+0Ch], eax
0x8BA98D: jz      short loc_8BA997
0x8BA98F: push    eax
0x8BA990: mov     ecx, esi
0x8BA992: call    sub_8BA6F0
0x8BA997: mov     byte ptr [edi], 1
0x8BA99A: mov     eax, [esi+0Ch]
0x8BA99D: pop     edi
0x8BA99E: pop     esi
0x8BA99F: mov     esp, ebp
0x8BA9A1: pop     ebp
0x8BA9A2: retn    4
0x8BA9A5: mov     byte ptr [edi], 0
0x8BA9A8: mov     eax, [esi+0Ch]
0x8BA9AB: pop     edi
0x8BA9AC: pop     esi
0x8BA9AD: mov     esp, ebp
0x8BA9AF: pop     ebp
0x8BA9B0: retn    4
