0x8E6630: mov     ecx, [esp+arg_0]
0x8E6634: movzx   eax, byte ptr [ecx]
0x8E6637: sub     eax, 2
0x8E663A: push    esi
0x8E663B: jz      short loc_8E6647
0x8E663D: sub     eax, 2
0x8E6640: jz      short loc_8E6676
0x8E6642: sub     eax, 2
0x8E6645: jnz     short loc_8E6674
0x8E6647: movzx   eax, byte ptr [ecx+1]
0x8E664B: mov     edx, [esp+4+arg_C]
0x8E664F: imul    eax, 34h ; '4'
0x8E6652: mov     esi, [edx]
0x8E6654: mov     eax, [eax+esi+16B4h]
0x8E665B: test    eax, eax
0x8E665D: jz      short loc_8E6674
0x8E665F: push    edx
0x8E6660: mov     edx, [esp+8+arg_8]
0x8E6664: push    edx
0x8E6665: mov     edx, [esp+0Ch+arg_4]
0x8E6669: push    edx
0x8E666A: lea     edx, [ecx+20h]
0x8E666D: push    edx
0x8E666E: push    ecx
0x8E666F: call    eax
0x8E6671: add     esp, 14h
0x8E6674: pop     esi
0x8E6675: retn
0x8E6676: fld     [esp+4+arg_4]
0x8E667A: lea     esi, [ecx+30h]
0x8E667D: fld     dword ptr [ecx+1Ch]
0x8E6680: fucompp
0x8E6682: fnstsw  ax
0x8E6684: test    ah, 44h
0x8E6687: jp      short loc_8E6692
0x8E6689: mov     eax, [esp+4+arg_8]
0x8E668D: mov     [ecx+1Ch], eax
0x8E6690: jmp     short loc_8E6699
0x8E6692: mov     dword ptr [ecx+1Ch], 0BF800000h
0x8E6699: movzx   eax, byte ptr [ecx+1]
0x8E669D: mov     edx, [esp+4+arg_C]
0x8E66A1: imul    eax, 34h ; '4'
0x8E66A4: push    edi
0x8E66A5: mov     edi, [edx]
0x8E66A7: mov     eax, [eax+edi+16B4h]
0x8E66AE: test    eax, eax
0x8E66B0: pop     edi
0x8E66B1: jz      short loc_8E6674
0x8E66B3: push    edx
0x8E66B4: mov     edx, [esp+8+arg_8]
0x8E66B8: push    edx
0x8E66B9: mov     edx, [esp+0Ch+arg_4]
0x8E66BD: push    edx
0x8E66BE: push    esi
0x8E66BF: push    ecx
0x8E66C0: call    eax
0x8E66C2: add     esp, 14h
0x8E66C5: pop     esi
0x8E66C6: retn
