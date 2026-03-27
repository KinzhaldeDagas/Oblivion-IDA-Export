0x8E77F0: push    ebx
0x8E77F1: mov     ebx, [esp+4+arg_0]
0x8E77F5: mov     eax, [ebx+48h]
0x8E77F8: push    ebp
0x8E77F9: xor     ebp, ebp
0x8E77FB: test    eax, eax
0x8E77FD: jle     short loc_8E784B
0x8E77FF: push    esi
0x8E7800: push    edi
0x8E7801: mov     ecx, [ebx+44h]
0x8E7804: mov     esi, [ecx+ebp*4]
0x8E7807: inc     ebp
0x8E7808: cmp     ebp, eax
0x8E780A: jnz     short loc_8E7811
0x8E780C: mov     edi, [ebx+54h]
0x8E780F: jmp     short loc_8E7815
0x8E7811: movzx   edi, word ptr [ebx+5Ah]
0x8E7815: add     edi, esi
0x8E7817: cmp     esi, edi
0x8E7819: jnb     short loc_8E7842
0x8E781B: jmp     short loc_8E7820
0x8E781D: align 10h
0x8E7820: mov     edx, [esp+10h+arg_C]
0x8E7824: mov     eax, [esp+10h+arg_8]
0x8E7828: mov     ecx, [esp+10h+arg_4]
0x8E782C: push    edx
0x8E782D: push    eax
0x8E782E: push    ecx
0x8E782F: push    esi
0x8E7830: call    sub_8E6630
0x8E7835: movzx   edx, byte ptr [esi+3]
0x8E7839: add     esi, edx
0x8E783B: add     esp, 10h
0x8E783E: cmp     esi, edi
0x8E7840: jb      short loc_8E7820
0x8E7842: mov     eax, [ebx+48h]
0x8E7845: cmp     ebp, eax
0x8E7847: jl      short loc_8E7801
0x8E7849: pop     edi
0x8E784A: pop     esi
0x8E784B: pop     ebp
0x8E784C: pop     ebx
0x8E784D: retn
