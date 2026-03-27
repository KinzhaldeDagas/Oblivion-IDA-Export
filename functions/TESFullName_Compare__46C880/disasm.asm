0x46C880: mov     eax, [esp+arg_0]
0x46C884: push    ebx
0x46C885: push    0; int
0x46C887: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x46C88C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46C891: push    0; int
0x46C893: push    eax; void *
0x46C894: mov     ebx, ecx
0x46C896: call    OblivionDynamicCast
0x46C89B: add     esp, 14h
0x46C89E: test    eax, eax
0x46C8A0: jnz     short TESFullName_Compare___CheckThisTextLength
0x46C8A2: mov     al, 1
0x46C8A4: pop     ebx
0x46C8A5: retn    4
0x46C8A8: movzx   ecx, word ptr [ebx+8]
0x46C8AC: cmp     cx, 0FFFFh
0x46C8B1: push    esi
0x46C8B2: jnz     short loc_46C8CD
0x46C8B4: mov     ecx, [ebx+4]
0x46C8B7: lea     esi, [ecx+1]
0x46C8BA: lea     ebx, [ebx+0]
0x46C8C0: mov     dl, [ecx]
0x46C8C2: add     ecx, 1
0x46C8C5: test    dl, dl
0x46C8C7: jnz     short TESFullName_Compare___ThisTextLoop
0x46C8C9: sub     ecx, esi
0x46C8CB: jmp     short TESFullName_Compare___CheckArgTextLength
0x46C8CD: movzx   ecx, cx
0x46C8D0: test    ecx, ecx
0x46C8D2: jnz     short loc_46C8FD
0x46C8D4: movzx   ecx, word ptr [eax+8]
0x46C8D8: cmp     cx, 0FFFFh
0x46C8DD: jnz     short loc_46C8F2
0x46C8DF: mov     ecx, [eax+4]
0x46C8E2: lea     esi, [ecx+1]
0x46C8E5: mov     dl, [ecx]
0x46C8E7: add     ecx, 1
0x46C8EA: test    dl, dl
0x46C8EC: jnz     short TESFullName_Compare___ArgTextLoop
0x46C8EE: sub     ecx, esi
0x46C8F0: jmp     short loc_46C8F5
0x46C8F2: movzx   ecx, cx
0x46C8F5: test    ecx, ecx
0x46C8F7: jz      TESFullName_Compare___Return_0
0x46C8FD: movzx   ecx, word ptr [ebx+8]
0x46C901: cmp     cx, 0FFFFh
0x46C906: push    edi
0x46C907: jnz     short loc_46C91F
0x46C909: mov     ecx, [ebx+4]
0x46C90C: lea     esi, [ecx+1]
0x46C90F: nop
0x46C910: mov     dl, [ecx]
0x46C912: add     ecx, 1
0x46C915: test    dl, dl
0x46C917: jnz     short loc_46C910
0x46C919: sub     ecx, esi
0x46C91B: mov     edi, ecx
0x46C91D: jmp     short loc_46C922
0x46C91F: movzx   edi, cx
0x46C922: movzx   ecx, word ptr [eax+8]
0x46C926: cmp     cx, 0FFFFh
0x46C92B: jnz     short loc_46C940
0x46C92D: mov     ecx, [eax+4]
0x46C930: lea     esi, [ecx+1]
0x46C933: mov     dl, [ecx]
0x46C935: add     ecx, 1
0x46C938: test    dl, dl
0x46C93A: jnz     short loc_46C933
0x46C93C: sub     ecx, esi
0x46C93E: jmp     short loc_46C943
0x46C940: movzx   ecx, cx
0x46C943: cmp     edi, ecx
0x46C945: pop     edi
0x46C946: jnz     short loc_46C996
0x46C948: mov     ecx, [eax+4]
0x46C94B: test    ecx, ecx
0x46C94D: jnz     short loc_46C958
0x46C94F: mov     ecx, offset EmptyString
0x46C954: test    ecx, ecx
0x46C956: jz      short loc_46C987
0x46C958: mov     eax, [ebx+4]
0x46C95B: test    eax, eax
0x46C95D: jz      short loc_46C987
0x46C95F: nop
0x46C960: mov     dl, [eax]
0x46C962: cmp     dl, [ecx]
0x46C964: jnz     short loc_46C980
0x46C966: test    dl, dl
0x46C968: jz      short loc_46C97C
0x46C96A: mov     dl, [eax+1]
0x46C96D: cmp     dl, [ecx+1]
0x46C970: jnz     short loc_46C980
0x46C972: add     eax, 2
0x46C975: add     ecx, 2
0x46C978: test    dl, dl
0x46C97A: jnz     short loc_46C960
0x46C97C: xor     eax, eax
0x46C97E: jmp     short loc_46C992
0x46C980: sbb     eax, eax
0x46C982: sbb     eax, 0FFFFFFFFh
0x46C985: jmp     short loc_46C992
0x46C987: xor     eax, eax
0x46C989: test    ecx, ecx
0x46C98B: setz    al
0x46C98E: lea     eax, [eax+eax-1]
0x46C992: test    eax, eax
0x46C994: jz      short TESFullName_Compare___Return_0
0x46C996: pop     esi
0x46C997: mov     al, 1
0x46C999: pop     ebx
0x46C99A: retn    4
0x46C99D: pop     esi
0x46C99E: xor     al, al
0x46C9A0: pop     ebx
0x46C9A1: retn    4
