0x73CC70: mov     eax, [esp+arg_4]
0x73CC74: push    ebx
0x73CC75: mov     ebx, [esp+4+arg_0]
0x73CC79: push    ebp
0x73CC7A: push    eax
0x73CC7B: push    ebx
0x73CC7C: mov     ebp, ecx
0x73CC7E: call    sub_7214A0
0x73CC83: xor     eax, eax
0x73CC85: cmp     [ebp+10h], eax
0x73CC88: jz      loc_73CD22
0x73CC8E: cmp     [ebp+0Ch], eax
0x73CC91: jbe     loc_73CD22
0x73CC97: mov     ecx, [ebp+0Ch]
0x73CC9A: mov     [ebx+0Ch], ecx
0x73CC9D: mov     eax, [ebp+0Ch]
0x73CCA0: xor     ecx, ecx
0x73CCA2: mov     edx, 4
0x73CCA7: mul     edx
0x73CCA9: seto    cl
0x73CCAC: push    esi
0x73CCAD: neg     ecx
0x73CCAF: or      ecx, eax
0x73CCB1: push    ecx; Size
0x73CCB2: call    FormHeapAlloc
0x73CCB7: xor     esi, esi
0x73CCB9: add     esp, 4
0x73CCBC: mov     [ebx+10h], eax
0x73CCBF: cmp     [ebp+0Ch], esi
0x73CCC2: jbe     short loc_73CD1C
0x73CCC4: push    edi
0x73CCC5: mov     eax, [ebp+10h]
0x73CCC8: cmp     dword ptr [eax+esi*4], 0
0x73CCCC: lea     eax, [eax+esi*4]
0x73CCCF: jz      short loc_73CD09
0x73CCD1: mov     eax, [eax]
0x73CCD3: lea     edx, [eax+1]
0x73CCD6: mov     cl, [eax]
0x73CCD8: add     eax, 1
0x73CCDB: test    cl, cl
0x73CCDD: jnz     short loc_73CCD6
0x73CCDF: sub     eax, edx
0x73CCE1: lea     edi, [eax+1]
0x73CCE4: push    edi; Size
0x73CCE5: call    FormHeapAlloc
0x73CCEA: mov     ecx, [ebx+10h]
0x73CCED: mov     [ecx+esi*4], eax
0x73CCF0: mov     edx, [ebp+10h]
0x73CCF3: mov     eax, [edx+esi*4]
0x73CCF6: mov     ecx, [ebx+10h]
0x73CCF9: mov     edx, [ecx+esi*4]
0x73CCFC: push    eax; Src
0x73CCFD: push    edi; SizeInBytes
0x73CCFE: push    edx; Dst
0x73CCFF: call    _strcpy_s
0x73CD04: add     esp, 10h
0x73CD07: jmp     short loc_73CD13
0x73CD09: mov     eax, [ebx+10h]
0x73CD0C: mov     dword ptr [eax+esi*4], 0
0x73CD13: add     esi, 1
0x73CD16: cmp     esi, [ebp+0Ch]
0x73CD19: jb      short loc_73CCC5
0x73CD1B: pop     edi
0x73CD1C: pop     esi
0x73CD1D: pop     ebp
0x73CD1E: pop     ebx
0x73CD1F: retn    8
0x73CD22: pop     ebp
0x73CD23: mov     [ebx+10h], eax
0x73CD26: mov     [ebx+0Ch], eax
0x73CD29: pop     ebx
0x73CD2A: retn    8
