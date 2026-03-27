0x4305A0: push    ebx
0x4305A1: push    ebp
0x4305A2: mov     ebp, [esp+8+arg_0]
0x4305A6: test    ebp, ebp
0x4305A8: mov     ebx, ecx
0x4305AA: jz      loc_430667
0x4305B0: push    edi
0x4305B1: mov     edi, [ebx]
0x4305B3: test    edi, edi
0x4305B5: jz      loc_430657
0x4305BB: mov     eax, ebp
0x4305BD: lea     edx, [eax+2]
0x4305C0: mov     cx, [eax]
0x4305C3: add     eax, 2
0x4305C6: test    cx, cx
0x4305C9: jnz     short loc_4305C0
0x4305CB: movzx   ecx, word ptr [ebx+4]
0x4305CF: sub     eax, edx
0x4305D1: sar     eax, 1
0x4305D3: cmp     cx, 0FFFFh
0x4305D8: push    esi
0x4305D9: jnz     short loc_4305F1
0x4305DB: mov     ecx, edi
0x4305DD: lea     esi, [ecx+2]
0x4305E0: mov     dx, [ecx]
0x4305E3: add     ecx, 2
0x4305E6: test    dx, dx
0x4305E9: jnz     short loc_4305E0
0x4305EB: sub     ecx, esi
0x4305ED: sar     ecx, 1
0x4305EF: jmp     short loc_4305F4
0x4305F1: movzx   ecx, cx
0x4305F4: add     eax, ecx
0x4305F6: movzx   ecx, word ptr [ebx+6]
0x4305FA: cmp     eax, ecx
0x4305FC: jbe     short loc_430609
0x4305FE: push    eax
0x4305FF: push    edi
0x430600: mov     ecx, ebx
0x430602: call    BSWStringT_Set
0x430607: jmp     short loc_43061C
0x430609: cmp     eax, 0FFFFh
0x43060E: movzx   eax, ax
0x430611: jbe     short loc_430618
0x430613: mov     eax, 0FFFFh
0x430618: mov     [ebx+4], ax
0x43061C: mov     eax, ebp
0x43061E: mov     edx, ebp
0x430620: mov     cx, [eax]
0x430623: add     eax, 2
0x430626: test    cx, cx
0x430629: jnz     short loc_430620
0x43062B: mov     edi, [ebx]
0x43062D: sub     eax, edx
0x43062F: add     edi, 0FFFFFFFEh
0x430632: mov     cx, [edi+2]
0x430636: add     edi, 2
0x430639: test    cx, cx
0x43063C: jnz     short loc_430632
0x43063E: mov     ecx, eax
0x430640: shr     ecx, 2
0x430643: mov     esi, edx
0x430645: rep movsd
0x430647: mov     ecx, eax
0x430649: and     ecx, 3
0x43064C: rep movsb
0x43064E: pop     esi
0x43064F: pop     edi
0x430650: pop     ebp
0x430651: mov     eax, ebx
0x430653: pop     ebx
0x430654: retn    4
0x430657: push    0
0x430659: push    ebp
0x43065A: call    BSWStringT_Set
0x43065F: pop     edi
0x430660: pop     ebp
0x430661: mov     eax, ebx
0x430663: pop     ebx
0x430664: retn    4
0x430667: pop     ebp
0x430668: mov     eax, ebx
0x43066A: pop     ebx
0x43066B: retn    4
