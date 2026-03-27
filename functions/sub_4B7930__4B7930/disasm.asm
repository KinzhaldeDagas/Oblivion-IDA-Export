0x4B7930: mov     eax, [esp+arg_0]
0x4B7934: push    ebx
0x4B7935: xor     bl, bl
0x4B7937: test    eax, eax
0x4B7939: jz      short loc_4B7975
0x4B793B: movzx   ecx, byte ptr [eax+4]
0x4B793F: cmp     ecx, 30h ; '0'
0x4B7942: jz      short loc_4B794D
0x4B7944: cmp     ecx, 35h ; '5'
0x4B7947: jnz     short loc_4B7975
0x4B7949: mov     al, 1
0x4B794B: pop     ebx
0x4B794C: retn
0x4B794D: push    0; int
0x4B794F: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4B7954: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B7959: push    0; int
0x4B795B: push    eax; void *
0x4B795C: call    OblivionDynamicCast
0x4B7961: add     esp, 14h
0x4B7964: test    eax, eax
0x4B7966: jz      short loc_4B7975
0x4B7968: mov     ecx, eax; this
0x4B796A: call    TESObjectCELL_IsInterior
0x4B796F: test    al, al
0x4B7971: mov     al, 1
0x4B7973: jnz     short loc_4B7977
0x4B7975: mov     al, bl
0x4B7977: pop     ebx
0x4B7978: retn
