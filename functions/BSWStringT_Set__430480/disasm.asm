0x430480: push    ebx
0x430481: mov     ebx, [esp+4+arg_0]
0x430485: test    ebx, ebx
0x430487: push    ebp
0x430488: mov     ebp, [esp+8+arg_4]
0x43048C: push    esi
0x43048D: push    edi
0x43048E: mov     edi, ecx
0x430490: jz      short loc_4304AC
0x430492: mov     eax, ebx
0x430494: lea     edx, [eax+2]
0x430497: mov     cx, [eax]
0x43049A: add     eax, 2
0x43049D: test    cx, cx
0x4304A0: jnz     short loc_430497
0x4304A2: sub     eax, edx
0x4304A4: sar     eax, 1
0x4304A6: mov     esi, eax
0x4304A8: cmp     esi, ebp
0x4304AA: ja      short loc_4304AE
0x4304AC: mov     esi, ebp
0x4304AE: movzx   eax, word ptr [edi+6]
0x4304B2: cmp     esi, eax
0x4304B4: ja      short loc_430503
0x4304B6: test    esi, esi
0x4304B8: jz      short loc_4304DB
0x4304BA: test    ebx, ebx
0x4304BC: jz      short loc_4304CF
0x4304BE: mov     ecx, [edi]
0x4304C0: push    ebx
0x4304C1: push    ecx
0x4304C2: call    BSWStringT_Static_StrCpy
0x4304C7: add     esp, 8
0x4304CA: jmp     loc_43055D
0x4304CF: mov     edx, [edi]
0x4304D1: mov     word ptr [edx], 0
0x4304D6: jmp     loc_43055D
0x4304DB: mov     eax, [edi]
0x4304DD: push    eax
0x4304DE: call    FormHeapFree
0x4304E3: xor     esi, esi
0x4304E5: movzx   eax, si
0x4304E8: add     esp, 4
0x4304EB: mov     [edi+4], ax
0x4304EF: mov     [edi], esi
0x4304F1: mov     [edi+6], si
0x4304F5: pop     edi
0x4304F6: xor     eax, eax
0x4304F8: test    esi, esi
0x4304FA: pop     esi
0x4304FB: pop     ebp
0x4304FC: setnz   al
0x4304FF: pop     ebx
0x430500: retn    8
0x430503: mov     ebp, [edi]
0x430505: xor     ecx, ecx
0x430507: lea     eax, [esi+1]
0x43050A: mov     edx, 2
0x43050F: mul     edx
0x430511: seto    cl
0x430514: neg     ecx
0x430516: or      ecx, eax
0x430518: push    ecx; Size
0x430519: call    FormHeapAlloc
0x43051E: add     esp, 4
0x430521: test    eax, eax
0x430523: mov     [edi], eax
0x430525: jz      short loc_43053E
0x430527: test    ebx, ebx
0x430529: jz      short loc_430537
0x43052B: push    ebx
0x43052C: push    eax
0x43052D: call    BSWStringT_Static_StrCpy
0x430532: add     esp, 8
0x430535: jmp     short loc_430540
0x430537: mov     word ptr [eax], 0
0x43053C: jmp     short loc_430540
0x43053E: xor     esi, esi
0x430540: push    ebp
0x430541: call    FormHeapFree
0x430546: add     esp, 4
0x430549: cmp     esi, 0FFFFh
0x43054F: movzx   eax, si
0x430552: jbe     short loc_430559
0x430554: mov     eax, 0FFFFh
0x430559: mov     [edi+6], ax
0x43055D: cmp     esi, 0FFFFh
0x430563: ja      short loc_43057A
0x430565: movzx   eax, si
0x430568: mov     [edi+4], ax
0x43056C: pop     edi
0x43056D: xor     eax, eax
0x43056F: test    esi, esi
0x430571: pop     esi
0x430572: pop     ebp
0x430573: setnz   al
0x430576: pop     ebx
0x430577: retn    8
0x43057A: mov     eax, 0FFFFh
0x43057F: mov     [edi+4], ax
0x430583: pop     edi
0x430584: xor     eax, eax
0x430586: test    esi, esi
0x430588: pop     esi
0x430589: pop     ebp
0x43058A: setnz   al
0x43058D: pop     ebx
0x43058E: retn    8
