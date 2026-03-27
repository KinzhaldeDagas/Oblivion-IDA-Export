0x478290: mov     eax, [esp+arg_0]
0x478294: cmp     eax, 6
0x478297: push    ebx
0x478298: jl      short loc_4782F4
0x47829A: cmp     eax, 7
0x47829D: jle     short loc_4782AB
0x47829F: cmp     eax, 8
0x4782A2: jnz     short loc_4782F4
0x4782A4: mov     ebx, 2
0x4782A9: jmp     short loc_4782B0
0x4782AB: mov     ebx, 1
0x4782B0: push    esi
0x4782B1: push    edi
0x4782B2: xor     edi, edi
0x4782B4: lea     esi, [ecx+4Ch]
0x4782B7: mov     eax, [esi]
0x4782B9: push    0; int
0x4782BB: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x4782C0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4782C5: push    0; int
0x4782C7: push    eax; void *
0x4782C8: call    OblivionDynamicCast
0x4782CD: add     esp, 14h
0x4782D0: test    eax, eax
0x4782D2: jz      short loc_4782D9
0x4782D4: test    [eax+6], bl
0x4782D7: jnz     short loc_4782EC
0x4782D9: add     edi, 1
0x4782DC: add     esi, 10h
0x4782DF: cmp     edi, 10h
0x4782E2: jl      short loc_4782B7
0x4782E4: pop     edi
0x4782E5: pop     esi
0x4782E6: xor     al, al
0x4782E8: pop     ebx
0x4782E9: retn    4
0x4782EC: pop     edi
0x4782ED: pop     esi
0x4782EE: mov     al, 1
0x4782F0: pop     ebx
0x4782F1: retn    4
0x4782F4: xor     al, al
0x4782F6: pop     ebx
0x4782F7: retn    4
