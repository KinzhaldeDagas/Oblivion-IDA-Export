0x412FA0: push    ebx
0x412FA1: push    ebp
0x412FA2: mov     ebp, [esp+8+a2]
0x412FA6: test    ebp, ebp
0x412FA8: mov     ebx, ecx
0x412FAA: jz      loc_413063
0x412FB0: push    edi
0x412FB1: mov     edi, [ebx]
0x412FB3: test    edi, edi
0x412FB5: jz      loc_413053
0x412FBB: mov     eax, ebp
0x412FBD: lea     edx, [eax+1]
0x412FC0: mov     cl, [eax]
0x412FC2: add     eax, 1
0x412FC5: test    cl, cl
0x412FC7: jnz     short loc_412FC0
0x412FC9: movzx   ecx, word ptr [ebx+4]
0x412FCD: sub     eax, edx
0x412FCF: cmp     cx, 0FFFFh
0x412FD4: push    esi
0x412FD5: jnz     short loc_412FED
0x412FD7: mov     ecx, edi
0x412FD9: lea     esi, [ecx+1]
0x412FDC: lea     esp, [esp+0]
0x412FE0: mov     dl, [ecx]
0x412FE2: add     ecx, 1
0x412FE5: test    dl, dl
0x412FE7: jnz     short loc_412FE0
0x412FE9: sub     ecx, esi
0x412FEB: jmp     short loc_412FF0
0x412FED: movzx   ecx, cx
0x412FF0: add     eax, ecx
0x412FF2: movzx   ecx, word ptr [ebx+6]
0x412FF6: cmp     eax, ecx
0x412FF8: jbe     short loc_413005
0x412FFA: push    eax; a3
0x412FFB: push    edi; a2
0x412FFC: mov     ecx, ebx; this
0x412FFE: call    BSStringT_Set
0x413003: jmp     short loc_413018
0x413005: cmp     eax, 0FFFFh
0x41300A: movzx   eax, ax
0x41300D: jbe     short loc_413014
0x41300F: mov     eax, 0FFFFh
0x413014: mov     [ebx+4], ax
0x413018: mov     eax, ebp
0x41301A: mov     edx, ebp
0x41301C: lea     esp, [esp+0]
0x413020: mov     cl, [eax]
0x413022: add     eax, 1
0x413025: test    cl, cl
0x413027: jnz     short loc_413020
0x413029: mov     edi, [ebx]
0x41302B: sub     eax, edx
0x41302D: add     edi, 0FFFFFFFFh
0x413030: mov     cl, [edi+1]
0x413033: add     edi, 1
0x413036: test    cl, cl
0x413038: jnz     short loc_413030
0x41303A: mov     ecx, eax
0x41303C: shr     ecx, 2
0x41303F: mov     esi, edx
0x413041: rep movsd
0x413043: mov     ecx, eax
0x413045: and     ecx, 3; this
0x413048: rep movsb
0x41304A: pop     esi
0x41304B: pop     edi
0x41304C: pop     ebp
0x41304D: mov     eax, ebx
0x41304F: pop     ebx
0x413050: retn    4
0x413053: push    0; a3
0x413055: push    ebp; a2
0x413056: call    BSStringT_Set
0x41305B: pop     edi
0x41305C: pop     ebp
0x41305D: mov     eax, ebx
0x41305F: pop     ebx
0x413060: retn    4
0x413063: pop     ebp
0x413064: mov     eax, ebx
0x413066: pop     ebx
0x413067: retn    4
