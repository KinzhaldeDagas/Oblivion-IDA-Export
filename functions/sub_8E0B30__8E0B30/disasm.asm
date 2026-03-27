0x8E0B30: push    ebp
0x8E0B31: mov     ebp, esp
0x8E0B33: and     esp, 0FFFFFFF0h
0x8E0B36: sub     esp, 30h
0x8E0B39: mov     eax, [ebp+arg_8]
0x8E0B3C: mov     cx, [eax+8]
0x8E0B40: mov     word ptr [esp+30h+var_18], cx
0x8E0B45: mov     word ptr [esp+30h+var_18+2], cx
0x8E0B4A: mov     cx, [eax]
0x8E0B4D: mov     word ptr [esp+30h+var_20], cx
0x8E0B52: mov     word ptr [esp+30h+var_20+4], cx
0x8E0B57: mov     cx, [eax+2]
0x8E0B5B: mov     word ptr [esp+30h+var_20+2], cx
0x8E0B60: mov     word ptr [esp+30h+var_20+6], cx
0x8E0B65: mov     cx, [eax+0Ah]
0x8E0B69: mov     word ptr [esp+30h+var_8], cx
0x8E0B6E: mov     word ptr [esp+30h+var_8+2], cx
0x8E0B73: mov     cx, [eax+4]
0x8E0B77: mov     ax, [eax+6]
0x8E0B7B: mov     word ptr [esp+30h+var_10+2], ax
0x8E0B80: mov     word ptr [esp+30h+var_10+6], ax
0x8E0B85: mov     eax, [ebp+arg_4]
0x8E0B88: mov     word ptr [esp+30h+var_10], cx
0x8E0B8D: mov     word ptr [esp+30h+var_10+4], cx
0x8E0B92: mov     ecx, [ebp+arg_0]
0x8E0B95: shl     eax, 4
0x8E0B98: or      edx, 0FFFFFFFFh
0x8E0B9B: add     eax, ecx
0x8E0B9D: cmp     ecx, eax
0x8E0B9F: mov     dword ptr [esp+30h+var_18+4], edx
0x8E0BA3: mov     dword ptr [esp+30h+var_8+4], edx
0x8E0BA7: jnb     short loc_8E0C21
0x8E0BA9: movq    mm2, [esp+30h+var_18]
0x8E0BAE: movq    mm3, [esp+30h+var_20]
0x8E0BB3: movq    mm4, [esp+30h+var_8]
0x8E0BB8: movq    mm5, [esp+30h+var_10]
0x8E0BBD: mov     edx, 0FFFFh
0x8E0BC2: mov     word ptr [esp+30h+var_30], dx
0x8E0BC6: mov     word ptr [esp+30h+var_30+2], dx
0x8E0BCB: xor     edx, edx
0x8E0BCD: mov     word ptr [esp+30h+var_30+4], dx
0x8E0BD2: mov     word ptr [esp+30h+var_30+6], dx
0x8E0BD7: jmp     short loc_8E0BE0
0x8E0BD9: align 10h
0x8E0BE0: movq    mm0, qword ptr [ecx+8]
0x8E0BE4: movq    mm1, mm0
0x8E0BE7: pcmpgtw mm1, mm4
0x8E0BEA: pcmpgtw mm0, mm2
0x8E0BED: paddw   mm0, mm1
0x8E0BF0: movq    mm1, mm0
0x8E0BF3: pand    mm1, [esp+30h+var_30]
0x8E0BF7: movq    mm0, qword ptr [ecx]
0x8E0BFA: movq    mm6, mm0
0x8E0BFD: movq    mm7, mm0
0x8E0C00: pcmpgtw mm6, mm5
0x8E0C03: pcmpgtw mm7, mm3
0x8E0C06: paddw   mm7, mm6
0x8E0C09: paddw   mm0, mm7
0x8E0C0C: movq    qword ptr [ecx], mm0
0x8E0C0F: movq    mm0, qword ptr [ecx+8]
0x8E0C13: paddw   mm0, mm1
0x8E0C16: movq    qword ptr [ecx+8], mm0
0x8E0C1A: add     ecx, 10h
0x8E0C1D: cmp     ecx, eax
0x8E0C1F: jb      short loc_8E0BE0
0x8E0C21: emms
0x8E0C23: mov     esp, ebp
0x8E0C25: pop     ebp
0x8E0C26: retn    0Ch
