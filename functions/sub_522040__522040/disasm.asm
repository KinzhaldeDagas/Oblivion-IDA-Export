0x522040: mov     eax, [esp+arg_0]
0x522044: push    ebx
0x522045: push    edi
0x522046: push    0; int
0x522048: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x52204D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x522052: push    0; int
0x522054: push    eax; void *
0x522055: mov     ebx, ecx
0x522057: call    OblivionDynamicCast
0x52205C: mov     edi, eax
0x52205E: add     esp, 14h
0x522061: test    edi, edi
0x522063: jnz     short loc_52206C
0x522065: pop     edi
0x522066: mov     al, 1
0x522068: pop     ebx
0x522069: retn    4
0x52206C: push    edi; a2
0x52206D: mov     ecx, ebx; this
0x52206F: call    TESForm_CompareAllComponentsTo
0x522074: test    al, al
0x522076: jnz     short loc_522065
0x522078: push    ebp
0x522079: mov     eax, 15h
0x52207E: lea     ecx, [edi+0ECh]
0x522084: lea     edx, [ebx+0ECh]
0x52208A: push    esi
0x52208B: jmp     short loc_522090
0x52208D: align 10h
0x522090: mov     esi, [edx]
0x522092: cmp     esi, [ecx]
0x522094: jnz     short loc_5220A8
0x522096: sub     eax, 4
0x522099: add     ecx, 4
0x52209C: add     edx, 4
0x52209F: cmp     eax, 4
0x5220A2: jnb     short loc_522090
0x5220A4: test    eax, eax
0x5220A6: jz      short loc_522105
0x5220A8: movzx   ebp, byte ptr [ecx]
0x5220AB: movzx   esi, byte ptr [edx]
0x5220AE: sub     esi, ebp
0x5220B0: jnz     short loc_5220F7
0x5220B2: sub     eax, 1
0x5220B5: add     ecx, 1
0x5220B8: add     edx, 1
0x5220BB: test    eax, eax
0x5220BD: jz      short loc_522105
0x5220BF: movzx   ebp, byte ptr [ecx]
0x5220C2: movzx   esi, byte ptr [edx]
0x5220C5: sub     esi, ebp
0x5220C7: jnz     short loc_5220F7
0x5220C9: sub     eax, 1
0x5220CC: add     ecx, 1
0x5220CF: add     edx, 1
0x5220D2: test    eax, eax
0x5220D4: jz      short loc_522105
0x5220D6: movzx   ebp, byte ptr [ecx]
0x5220D9: movzx   esi, byte ptr [edx]
0x5220DC: sub     esi, ebp
0x5220DE: jnz     short loc_5220F7
0x5220E0: sub     eax, 1
0x5220E3: add     ecx, 1
0x5220E6: add     edx, 1
0x5220E9: test    eax, eax
0x5220EB: jz      short loc_522105
0x5220ED: movzx   ecx, byte ptr [ecx]
0x5220F0: movzx   esi, byte ptr [edx]
0x5220F3: sub     esi, ecx
0x5220F5: jz      short loc_522105
0x5220F7: test    esi, esi
0x5220F9: mov     eax, 1
0x5220FE: jg      short loc_522107
0x522100: or      eax, 0FFFFFFFFh
0x522103: jmp     short loc_522107
0x522105: xor     eax, eax
0x522107: test    eax, eax
0x522109: jnz     short loc_522184
0x52210B: mov     edx, [ebx+104h]
0x522111: cmp     edx, [edi+104h]
0x522117: jnz     short loc_522184
0x522119: mov     eax, [ebx+1C8h]
0x52211F: cmp     eax, [edi+1C8h]
0x522125: jnz     short loc_522184
0x522127: fld     dword ptr [ebx+1CCh]
0x52212D: fld     dword ptr [edi+1CCh]
0x522133: fucompp
0x522135: fnstsw  ax
0x522137: test    ah, 44h
0x52213A: jp      short loc_522184
0x52213C: mov     ecx, [ebx+1D0h]
0x522142: cmp     ecx, [edi+1D0h]
0x522148: jnz     short loc_522184
0x52214A: mov     edx, [ebx+1E8h]
0x522150: cmp     edx, [edi+1E8h]
0x522156: jnz     short loc_522184
0x522158: mov     ecx, edi
0x52215A: call    sub_521A10
0x52215F: push    eax
0x522160: mov     ecx, ebx
0x522162: call    sub_521A10
0x522167: push    eax
0x522168: call    sub_551990
0x52216D: add     esp, 8
0x522170: test    al, al
0x522172: jnz     short loc_522184
0x522174: mov     ax, [ebx+1E0h]
0x52217B: cmp     ax, [edi+1E0h]
0x522182: jz      short loc_52218D
0x522184: pop     esi
0x522185: pop     ebp
0x522186: pop     edi
0x522187: mov     al, 1
0x522189: pop     ebx
0x52218A: retn    4
0x52218D: mov     edx, [edi]
0x52218F: mov     eax, [edx+120h]
0x522195: mov     ecx, edi
0x522197: call    eax
0x522199: mov     edx, [ebx]
0x52219B: mov     esi, eax
0x52219D: mov     eax, [edx+120h]
0x5221A3: mov     ecx, ebx
0x5221A5: call    eax
0x5221A7: cmp     eax, esi
0x5221A9: pop     esi
0x5221AA: pop     ebp
0x5221AB: pop     edi
0x5221AC: setnz   al
0x5221AF: pop     ebx
0x5221B0: retn    4
