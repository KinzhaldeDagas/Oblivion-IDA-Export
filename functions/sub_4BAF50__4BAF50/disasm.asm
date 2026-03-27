0x4BAF50: push    ecx
0x4BAF51: push    ebx
0x4BAF52: push    ebp
0x4BAF53: mov     ebp, [esp+0Ch+a2]
0x4BAF57: push    esi
0x4BAF58: push    edi
0x4BAF59: xor     edi, edi
0x4BAF5B: push    edi; int
0x4BAF5C: push    offset ??_R0?AVTESObjectTREE@@@8; struct TypeDescriptor *
0x4BAF61: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BAF66: mov     esi, ecx
0x4BAF68: push    edi; int
0x4BAF69: push    ebp; void *
0x4BAF6A: mov     [esp+28h+var_4], esi
0x4BAF6E: call    OblivionDynamicCast
0x4BAF73: mov     ebx, eax
0x4BAF75: add     esp, 14h
0x4BAF78: cmp     ebx, edi
0x4BAF7A: jz      short loc_4BAFEE
0x4BAF7C: push    ebp; a2
0x4BAF7D: mov     ecx, esi; this
0x4BAF7F: call    TESForm_CopyAllComponentsFrom
0x4BAF84: movzx   ebp, word ptr [ebx+52h]
0x4BAF88: add     esi, 48h ; 'H'
0x4BAF8B: xor     eax, eax
0x4BAF8D: cmp     [esi+0Ah], di
0x4BAF91: jbe     short loc_4BAFA5
0x4BAF93: mov     edx, [esi+4]
0x4BAF96: movzx   ecx, ax
0x4BAF99: add     eax, 1
0x4BAF9C: mov     [edx+ecx*4], edi
0x4BAF9F: cmp     ax, [esi+0Ah]
0x4BAFA3: jb      short loc_4BAF93
0x4BAFA5: cmp     ebp, edi
0x4BAFA7: mov     [esi+0Ah], di
0x4BAFAB: mov     [esi+0Ch], di
0x4BAFAF: jbe     short loc_4BAFC6
0x4BAFB1: mov     eax, [ebx+4Ch]
0x4BAFB4: lea     ecx, [eax+edi*4]
0x4BAFB7: push    ecx
0x4BAFB8: mov     ecx, esi
0x4BAFBA: call    sub_4BACA0
0x4BAFBF: add     edi, 1
0x4BAFC2: cmp     edi, ebp
0x4BAFC4: jb      short loc_4BAFB1
0x4BAFC6: mov     edx, [ebx]
0x4BAFC8: mov     eax, [edx+12Ch]
0x4BAFCE: mov     ecx, ebx
0x4BAFD0: call    eax
0x4BAFD2: mov     edx, [esp+14h+var_4]
0x4BAFD6: mov     esi, eax
0x4BAFD8: lea     edi, [edx+58h]
0x4BAFDB: mov     ecx, 8
0x4BAFE0: rep movsd
0x4BAFE2: mov     ecx, [ebx+78h]
0x4BAFE5: mov     [edx+78h], ecx
0x4BAFE8: mov     eax, [ebx+7Ch]
0x4BAFEB: mov     [edx+7Ch], eax
0x4BAFEE: pop     edi
0x4BAFEF: pop     esi
0x4BAFF0: pop     ebp
0x4BAFF1: pop     ebx
0x4BAFF2: pop     ecx
0x4BAFF3: retn    4
