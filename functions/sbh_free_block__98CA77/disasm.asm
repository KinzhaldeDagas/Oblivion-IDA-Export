0x98CA77: push    ebp
0x98CA78: mov     ebp, esp
0x98CA7A: sub     esp, 10h
0x98CA7D: mov     ecx, [ebp+arg_0]
0x98CA80: mov     eax, [ecx+10h]
0x98CA83: push    esi
0x98CA84: mov     esi, [ebp+arg_4]
0x98CA87: push    edi
0x98CA88: mov     edi, esi
0x98CA8A: sub     edi, [ecx+0Ch]
0x98CA8D: add     esi, 0FFFFFFFCh
0x98CA90: shr     edi, 0Fh
0x98CA93: mov     ecx, edi
0x98CA95: imul    ecx, 204h
0x98CA9B: lea     ecx, [ecx+eax+144h]
0x98CAA2: mov     [ebp+var_10], ecx
0x98CAA5: mov     ecx, [esi]
0x98CAA7: dec     ecx
0x98CAA8: test    cl, 1
0x98CAAB: mov     [ebp+var_4], ecx
0x98CAAE: jnz     loc_98CD87
0x98CAB4: push    ebx; dwFreeType
0x98CAB5: lea     ebx, [ecx+esi]
0x98CAB8: mov     edx, [ebx]
0x98CABA: mov     [ebp+var_C], edx
0x98CABD: mov     edx, [esi-4]
0x98CAC0: mov     [ebp+var_8], edx
0x98CAC3: mov     edx, [ebp+var_C]
0x98CAC6: test    dl, 1
0x98CAC9: mov     [ebp+arg_4], ebx
0x98CACC: jnz     short loc_98CB42
0x98CACE: sar     edx, 4
0x98CAD1: dec     edx
0x98CAD2: cmp     edx, 3Fh ; '?'
0x98CAD5: jbe     short loc_98CADA
0x98CAD7: push    3Fh ; '?'
0x98CAD9: pop     edx
0x98CADA: mov     ecx, [ebx+4]
0x98CADD: cmp     ecx, [ebx+8]
0x98CAE0: jnz     short loc_98CB24
0x98CAE2: cmp     edx, 20h ; ' '
0x98CAE5: mov     ebx, 80000000h
0x98CAEA: jnb     short loc_98CB05
0x98CAEC: mov     ecx, edx
0x98CAEE: shr     ebx, cl
0x98CAF0: lea     ecx, [edx+eax+4]
0x98CAF4: not     ebx
0x98CAF6: and     [eax+edi*4+44h], ebx
0x98CAFA: dec     byte ptr [ecx]
0x98CAFC: jnz     short loc_98CB21
0x98CAFE: mov     ecx, [ebp+arg_0]
0x98CB01: and     [ecx], ebx
0x98CB03: jmp     short loc_98CB21
0x98CB05: lea     ecx, [edx-20h]
0x98CB08: shr     ebx, cl
0x98CB0A: lea     ecx, [edx+eax+4]
0x98CB0E: not     ebx
0x98CB10: and     [eax+edi*4+0C4h], ebx
0x98CB17: dec     byte ptr [ecx]
0x98CB19: jnz     short loc_98CB21
0x98CB1B: mov     ecx, [ebp+arg_0]
0x98CB1E: and     [ecx+4], ebx
0x98CB21: mov     ebx, [ebp+arg_4]
0x98CB24: mov     edx, [ebx+8]
0x98CB27: mov     ebx, [ebx+4]
0x98CB2A: mov     ecx, [ebp+var_4]
0x98CB2D: add     ecx, [ebp+var_C]
0x98CB30: mov     [edx+4], ebx
0x98CB33: mov     edx, [ebp+arg_4]
0x98CB36: mov     ebx, [edx+4]
0x98CB39: mov     edx, [edx+8]
0x98CB3C: mov     [ebx+8], edx
0x98CB3F: mov     [ebp+var_4], ecx
0x98CB42: mov     edx, ecx
0x98CB44: sar     edx, 4
0x98CB47: dec     edx
0x98CB48: cmp     edx, 3Fh ; '?'
0x98CB4B: jbe     short loc_98CB50
0x98CB4D: push    3Fh ; '?'
0x98CB4F: pop     edx
0x98CB50: mov     ebx, [ebp+var_8]
0x98CB53: and     ebx, 1
0x98CB56: mov     [ebp+var_C], ebx
0x98CB59: jnz     loc_98CBEE
0x98CB5F: sub     esi, [ebp+var_8]
0x98CB62: mov     ebx, [ebp+var_8]
0x98CB65: sar     ebx, 4
0x98CB68: push    3Fh ; '?'
0x98CB6A: mov     [ebp+arg_4], esi
0x98CB6D: dec     ebx
0x98CB6E: pop     esi
0x98CB6F: cmp     ebx, esi
0x98CB71: jbe     short loc_98CB75
0x98CB73: mov     ebx, esi
0x98CB75: add     ecx, [ebp+var_8]
0x98CB78: mov     edx, ecx
0x98CB7A: sar     edx, 4
0x98CB7D: dec     edx
0x98CB7E: cmp     edx, esi
0x98CB80: mov     [ebp+var_4], ecx
0x98CB83: jbe     short loc_98CB87
0x98CB85: mov     edx, esi
0x98CB87: cmp     ebx, edx
0x98CB89: jz      short loc_98CBE9
0x98CB8B: mov     ecx, [ebp+arg_4]
0x98CB8E: mov     esi, [ecx+4]
0x98CB91: cmp     esi, [ecx+8]
0x98CB94: jnz     short loc_98CBD1
0x98CB96: cmp     ebx, 20h ; ' '
0x98CB99: mov     esi, 80000000h
0x98CB9E: jnb     short loc_98CBB7
0x98CBA0: mov     ecx, ebx
0x98CBA2: shr     esi, cl
0x98CBA4: not     esi
0x98CBA6: and     [eax+edi*4+44h], esi
0x98CBAA: dec     byte ptr [ebx+eax+4]
0x98CBAE: jnz     short loc_98CBD1
0x98CBB0: mov     ecx, [ebp+arg_0]
0x98CBB3: and     [ecx], esi
0x98CBB5: jmp     short loc_98CBD1
0x98CBB7: lea     ecx, [ebx-20h]
0x98CBBA: shr     esi, cl
0x98CBBC: not     esi
0x98CBBE: and     [eax+edi*4+0C4h], esi
0x98CBC5: dec     byte ptr [ebx+eax+4]
0x98CBC9: jnz     short loc_98CBD1
0x98CBCB: mov     ecx, [ebp+arg_0]
0x98CBCE: and     [ecx+4], esi
0x98CBD1: mov     ecx, [ebp+arg_4]
0x98CBD4: mov     esi, [ecx+8]
0x98CBD7: mov     ecx, [ecx+4]
0x98CBDA: mov     [esi+4], ecx
0x98CBDD: mov     ecx, [ebp+arg_4]
0x98CBE0: mov     esi, [ecx+4]
0x98CBE3: mov     ecx, [ecx+8]
0x98CBE6: mov     [esi+8], ecx
0x98CBE9: mov     esi, [ebp+arg_4]
0x98CBEC: jmp     short loc_98CBF1
0x98CBEE: mov     ebx, [ebp+arg_0]
0x98CBF1: cmp     [ebp+var_C], 0
0x98CBF5: jnz     short loc_98CBFF
0x98CBF7: cmp     ebx, edx
0x98CBF9: jz      loc_98CC7F
0x98CBFF: mov     ecx, [ebp+var_10]
0x98CC02: lea     ecx, [ecx+edx*8]
0x98CC05: mov     ebx, [ecx+4]
0x98CC08: mov     [esi+8], ecx
0x98CC0B: mov     [esi+4], ebx
0x98CC0E: mov     [ecx+4], esi
0x98CC11: mov     ecx, [esi+4]
0x98CC14: mov     [ecx+8], esi
0x98CC17: mov     ecx, [esi+4]
0x98CC1A: cmp     ecx, [esi+8]
0x98CC1D: jnz     short loc_98CC7F
0x98CC1F: mov     cl, [edx+eax+4]
0x98CC23: mov     byte ptr [ebp+arg_4+3], cl
0x98CC26: inc     cl
0x98CC28: cmp     edx, 20h ; ' '
0x98CC2B: mov     [edx+eax+4], cl
0x98CC2F: jnb     short loc_98CC56
0x98CC31: cmp     byte ptr [ebp+arg_4+3], 0
0x98CC35: jnz     short loc_98CC45
0x98CC37: mov     ecx, edx
0x98CC39: mov     ebx, 80000000h
0x98CC3E: shr     ebx, cl
0x98CC40: mov     ecx, [ebp+arg_0]
0x98CC43: or      [ecx], ebx
0x98CC45: mov     ebx, 80000000h
0x98CC4A: mov     ecx, edx
0x98CC4C: shr     ebx, cl
0x98CC4E: lea     eax, [eax+edi*4+44h]
0x98CC52: or      [eax], ebx
0x98CC54: jmp     short loc_98CC7F
0x98CC56: cmp     byte ptr [ebp+arg_4+3], 0
0x98CC5A: jnz     short loc_98CC6C
0x98CC5C: lea     ecx, [edx-20h]
0x98CC5F: mov     ebx, 80000000h
0x98CC64: shr     ebx, cl
0x98CC66: mov     ecx, [ebp+arg_0]
0x98CC69: or      [ecx+4], ebx
0x98CC6C: lea     ecx, [edx-20h]
0x98CC6F: mov     edx, 80000000h
0x98CC74: shr     edx, cl
0x98CC76: lea     eax, [eax+edi*4+0C4h]
0x98CC7D: or      [eax], edx
0x98CC7F: mov     eax, [ebp+var_4]
0x98CC82: mov     [esi], eax
0x98CC84: mov     [eax+esi-4], eax
0x98CC88: mov     eax, [ebp+var_10]
0x98CC8B: dec     dword ptr [eax]
0x98CC8D: jnz     loc_98CD86
0x98CC93: mov     eax, dword_BAA2A8
0x98CC98: test    eax, eax
0x98CC9A: jz      loc_98CD78
0x98CCA0: mov     ecx, dword_BAABD8
0x98CCA6: mov     esi, ds:VirtualFree
0x98CCAC: push    4000h; dwFreeType
0x98CCB1: shl     ecx, 0Fh
0x98CCB4: add     ecx, [eax+0Ch]
0x98CCB7: mov     ebx, 8000h
0x98CCBC: push    ebx; dwSize
0x98CCBD: push    ecx; lpAddress
0x98CCBE: call    esi ; VirtualFree
0x98CCC0: mov     ecx, dword_BAABD8
0x98CCC6: mov     eax, dword_BAA2A8
0x98CCCB: mov     edx, 80000000h
0x98CCD0: shr     edx, cl
0x98CCD2: or      [eax+8], edx
0x98CCD5: mov     eax, dword_BAA2A8
0x98CCDA: mov     eax, [eax+10h]
0x98CCDD: mov     ecx, dword_BAABD8
0x98CCE3: and     dword ptr [eax+ecx*4+0C4h], 0
0x98CCEB: mov     eax, dword_BAA2A8
0x98CCF0: mov     eax, [eax+10h]
0x98CCF3: dec     byte ptr [eax+43h]
0x98CCF6: mov     eax, dword_BAA2A8
0x98CCFB: mov     ecx, [eax+10h]
0x98CCFE: cmp     byte ptr [ecx+43h], 0
0x98CD02: jnz     short loc_98CD0D
0x98CD04: and     dword ptr [eax+4], 0FFFFFFFEh
0x98CD08: mov     eax, dword_BAA2A8
0x98CD0D: cmp     dword ptr [eax+8], 0FFFFFFFFh
0x98CD11: jnz     short loc_98CD78
0x98CD13: push    ebx; dwFreeType
0x98CD14: push    0; dwSize
0x98CD16: push    dword ptr [eax+0Ch]; lpAddress
0x98CD19: call    esi ; VirtualFree
0x98CD1B: mov     eax, dword_BAA2A8
0x98CD20: push    dword ptr [eax+10h]; lpMem
0x98CD23: push    0; dwFlags
0x98CD25: push    hHeap; hHeap
0x98CD2B: call    ds:HeapFree
0x98CD31: mov     ecx, dword_BAABC4
0x98CD37: mov     eax, dword_BAA2A8
0x98CD3C: imul    ecx, 14h
0x98CD3F: mov     edx, lpMem
0x98CD45: sub     ecx, eax
0x98CD47: lea     ecx, [ecx+edx-14h]
0x98CD4B: push    ecx
0x98CD4C: lea     ecx, [eax+14h]
0x98CD4F: push    ecx
0x98CD50: push    eax
0x98CD51: call    unknown_libname_16
0x98CD56: mov     eax, [ebp+arg_0]
0x98CD59: add     esp, 0Ch
0x98CD5C: dec     dword_BAABC4
0x98CD62: cmp     eax, dword_BAA2A8
0x98CD68: jbe     short loc_98CD6E
0x98CD6A: sub     [ebp+arg_0], 14h
0x98CD6E: mov     eax, lpMem
0x98CD73: mov     dword_BAABD0, eax
0x98CD78: mov     eax, [ebp+arg_0]
0x98CD7B: mov     dword_BAA2A8, eax
0x98CD80: mov     dword_BAABD8, edi
0x98CD86: pop     ebx
0x98CD87: pop     edi
0x98CD88: pop     esi
0x98CD89: leave
0x98CD8A: retn
