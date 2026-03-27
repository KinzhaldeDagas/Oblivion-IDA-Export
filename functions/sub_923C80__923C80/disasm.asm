0x923C80: mov     eax, [esp+arg_8]
0x923C84: push    esi
0x923C85: mov     esi, [esp+4+arg_4]
0x923C89: push    edi
0x923C8A: lea     edi, [esi+eax*4]
0x923C8D: cmp     esi, edi
0x923C8F: jnb     short loc_923CD0
0x923C91: push    ebx
0x923C92: mov     ebx, [esp+0Ch+arg_C]
0x923C96: push    ebp
0x923C97: mov     ebp, [esp+10h+arg_0]
0x923C9B: jmp     short loc_923CA0
0x923C9D: align 10h
0x923CA0: mov     ecx, [esi]
0x923CA2: mov     ecx, [ecx+50h]
0x923CA5: mov     eax, [ecx+8]
0x923CA8: movaps  xmm0, xmmword ptr [eax+ebx+10h]
0x923CAD: add     eax, ebx
0x923CAF: push    eax
0x923CB0: movaps  xmmword ptr [eax+40h], xmm0
0x923CB4: movaps  xmm0, xmmword ptr [eax+20h]
0x923CB8: push    3F800000h
0x923CBD: movaps  xmmword ptr [eax+50h], xmm0
0x923CC1: mov     edx, [ecx]
0x923CC3: push    ebp
0x923CC4: call    dword ptr [edx+18h]
0x923CC7: add     esi, 4
0x923CCA: cmp     esi, edi
0x923CCC: jb      short loc_923CA0
0x923CCE: pop     ebp
0x923CCF: pop     ebx
0x923CD0: pop     edi
0x923CD1: pop     esi
0x923CD2: retn
