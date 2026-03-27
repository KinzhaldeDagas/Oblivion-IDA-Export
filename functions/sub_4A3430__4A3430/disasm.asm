0x4A3430: push    ecx
0x4A3431: push    esi
0x4A3432: mov     esi, ecx
0x4A3434: mov     eax, [esi+8]
0x4A3437: shr     eax, 3
0x4A343A: test    al, 1
0x4A343C: jnz     short loc_4A34B3
0x4A343E: mov     ecx, [esi+20h]
0x4A3441: mov     [esp+8+a1], ecx
0x4A3445: push    0FFFFFFFFh; a2
0x4A3447: mov     ecx, esi; this
0x4A3449: call    TESForm_GetOverrideFile
0x4A344E: push    eax; a2
0x4A344F: lea     edx, [esp+0Ch+a1]
0x4A3453: push    edx; a1
0x4A3454: call    TESForm_ResolveFormID
0x4A3459: mov     eax, [esp+10h+a1]
0x4A345D: add     esp, 8
0x4A3460: push    0; int
0x4A3462: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4A3467: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4A346C: push    0; int
0x4A346E: push    eax; a1
0x4A346F: call    TESForm_LookupByFormID
0x4A3474: add     esp, 4
0x4A3477: push    eax; void *
0x4A3478: call    OblivionDynamicCast
0x4A347D: add     esp, 14h
0x4A3480: test    eax, eax
0x4A3482: jz      short loc_4A34AA
0x4A3484: mov     ecx, [esi+8]
0x4A3487: shr     ecx, 6
0x4A348A: test    cl, 1
0x4A348D: mov     [esi+20h], eax
0x4A3490: jz      short loc_4A34AA
0x4A3492: mov     edx, ds:0B33A98h
0x4A3498: cmp     byte ptr [edx+0CD7h], 0
0x4A349F: jnz     short loc_4A34AA
0x4A34A1: push    1
0x4A34A3: mov     ecx, eax
0x4A34A5: call    sub_4EF170
0x4A34AA: push    1; a2
0x4A34AC: mov     ecx, esi; this
0x4A34AE: call    TESForm_SetIsLinked
0x4A34B3: pop     esi
0x4A34B4: pop     ecx
0x4A34B5: retn
