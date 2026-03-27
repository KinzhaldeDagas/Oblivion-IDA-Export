0x480340: push    esi
0x480341: mov     esi, [esp+4+arg_0]
0x480345: xor     eax, eax
0x480347: test    esi, esi
0x480349: jz      short loc_4803AF
0x48034B: push    ebx
0x48034C: push    esi
0x48034D: call    sub_47FAC0
0x480352: mov     ebx, eax
0x480354: add     esp, 4
0x480357: test    ebx, ebx
0x480359: jnz     short loc_4803AE
0x48035B: mov     eax, [esi]
0x48035D: mov     edx, [eax+8]
0x480360: push    edi
0x480361: mov     ecx, esi
0x480363: call    edx
0x480365: mov     edi, eax
0x480367: test    edi, edi
0x480369: jz      short loc_4803B8
0x48036B: push    ebp
0x48036C: movzx   ebp, word ptr [edi+0B6h]
0x480373: xor     esi, esi
0x480375: test    ebp, ebp
0x480377: jbe     short loc_4803B1
0x480379: lea     esp, [esp+0]
0x480380: movzx   eax, word ptr [edi+0B6h]
0x480387: cmp     eax, esi
0x480389: ja      short loc_48038F
0x48038B: xor     eax, eax
0x48038D: jmp     short loc_480398
0x48038F: mov     ecx, [edi+0B0h]
0x480395: mov     eax, [ecx+esi*4]
0x480398: push    eax
0x480399: call    sub_480340
0x48039E: add     esp, 4
0x4803A1: test    eax, eax
0x4803A3: jnz     short loc_4803AC
0x4803A5: add     esi, 1
0x4803A8: cmp     esi, ebp
0x4803AA: jb      short loc_480380
0x4803AC: pop     ebp
0x4803AD: pop     edi
0x4803AE: pop     ebx
0x4803AF: pop     esi
0x4803B0: retn
0x4803B1: pop     ebp
0x4803B2: pop     edi
0x4803B3: mov     eax, ebx
0x4803B5: pop     ebx
0x4803B6: pop     esi
0x4803B7: retn
0x4803B8: pop     edi
0x4803B9: mov     eax, ebx
0x4803BB: pop     ebx
0x4803BC: pop     esi
0x4803BD: retn
