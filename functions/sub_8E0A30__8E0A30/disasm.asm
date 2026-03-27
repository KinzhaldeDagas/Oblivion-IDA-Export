0x8E0A30: push    ebp
0x8E0A31: mov     ebp, esp
0x8E0A33: and     esp, 0FFFFFFF0h
0x8E0A36: sub     esp, 30h
0x8E0A39: mov     eax, [ebp+arg_8]
0x8E0A3C: mov     cx, [eax+8]
0x8E0A40: dec     cx
0x8E0A42: mov     word ptr [esp+30h+var_18], cx
0x8E0A47: mov     word ptr [esp+30h+var_18+2], cx
0x8E0A4C: mov     cx, [eax]
0x8E0A4F: dec     cx
0x8E0A51: mov     word ptr [esp+30h+var_20], cx
0x8E0A56: mov     word ptr [esp+30h+var_20+4], cx
0x8E0A5B: mov     cx, [eax+2]
0x8E0A5F: dec     cx
0x8E0A61: mov     word ptr [esp+30h+var_20+2], cx
0x8E0A66: mov     word ptr [esp+30h+var_20+6], cx
0x8E0A6B: mov     cx, [eax+0Ah]
0x8E0A6F: sub     cx, 2
0x8E0A73: mov     word ptr [esp+30h+var_8], cx
0x8E0A78: mov     word ptr [esp+30h+var_8+2], cx
0x8E0A7D: mov     cx, [eax+4]
0x8E0A81: mov     ax, [eax+6]
0x8E0A85: sub     ax, 2
0x8E0A89: sub     cx, 2
0x8E0A8D: mov     word ptr [esp+30h+var_10+2], ax
0x8E0A92: mov     word ptr [esp+30h+var_10+6], ax
0x8E0A97: mov     eax, [ebp+arg_4]
0x8E0A9A: mov     word ptr [esp+30h+var_10], cx
0x8E0A9F: mov     word ptr [esp+30h+var_10+4], cx
0x8E0AA4: mov     ecx, [ebp+arg_0]
0x8E0AA7: shl     eax, 4
0x8E0AAA: add     eax, ecx
0x8E0AAC: cmp     ecx, eax
0x8E0AAE: jnb     short loc_8E0B21
0x8E0AB0: movq    mm2, [esp+30h+var_18]
0x8E0AB5: movq    mm3, [esp+30h+var_20]
0x8E0ABA: movq    mm4, [esp+30h+var_8]
0x8E0ABF: movq    mm5, [esp+30h+var_10]
0x8E0AC4: mov     edx, 0FFFFh
0x8E0AC9: mov     word ptr [esp+30h+var_30], dx
0x8E0ACD: mov     word ptr [esp+30h+var_30+2], dx
0x8E0AD2: xor     edx, edx
0x8E0AD4: mov     word ptr [esp+30h+var_30+4], dx
0x8E0AD9: mov     word ptr [esp+30h+var_30+6], dx
0x8E0ADE: mov     edi, edi
0x8E0AE0: movq    mm0, qword ptr [ecx+8]
0x8E0AE4: movq    mm1, mm0
0x8E0AE7: pcmpgtw mm1, mm4
0x8E0AEA: pcmpgtw mm0, mm2
0x8E0AED: paddw   mm0, mm1
0x8E0AF0: movq    mm1, mm0
0x8E0AF3: pand    mm1, [esp+30h+var_30]
0x8E0AF7: movq    mm0, qword ptr [ecx]
0x8E0AFA: movq    mm6, mm0
0x8E0AFD: movq    mm7, mm0
0x8E0B00: pcmpgtw mm6, mm5
0x8E0B03: pcmpgtw mm7, mm3
0x8E0B06: paddw   mm7, mm6
0x8E0B09: psubw   mm0, mm7
0x8E0B0C: movq    qword ptr [ecx], mm0
0x8E0B0F: movq    mm0, qword ptr [ecx+8]
0x8E0B13: psubw   mm0, mm1
0x8E0B16: movq    qword ptr [ecx+8], mm0
0x8E0B1A: add     ecx, 10h
0x8E0B1D: cmp     ecx, eax
0x8E0B1F: jb      short loc_8E0AE0
0x8E0B21: emms
0x8E0B23: mov     esp, ebp
0x8E0B25: pop     ebp
0x8E0B26: retn    0Ch
