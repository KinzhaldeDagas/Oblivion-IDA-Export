0x429490: push    ebx
0x429491: mov     ebx, [esp+4+arg_0]
0x429495: push    esi
0x429496: push    edi
0x429497: push    0; int
0x429499: push    offset ??_R0?AVExtraPackageStartLocation@@@8; struct TypeDescriptor *
0x42949E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4294A3: push    0; int
0x4294A5: push    ebx; void *
0x4294A6: mov     edi, ecx
0x4294A8: call    OblivionDynamicCast
0x4294AD: mov     esi, eax
0x4294AF: add     esp, 14h
0x4294B2: test    esi, esi
0x4294B4: jnz     short loc_4294BE
0x4294B6: pop     edi
0x4294B7: pop     esi
0x4294B8: mov     al, 1
0x4294BA: pop     ebx
0x4294BB: retn    4
0x4294BE: push    ebx
0x4294BF: mov     ecx, edi
0x4294C1: call    BSExtraData_CompareTo
0x4294C6: test    al, al
0x4294C8: jnz     short loc_4294B6
0x4294CA: mov     eax, 14h
0x4294CF: lea     ecx, [esi+0Ch]
0x4294D2: lea     edx, [edi+0Ch]
0x4294D5: mov     esi, [edx]
0x4294D7: cmp     esi, [ecx]
0x4294D9: jnz     short loc_4294ED
0x4294DB: sub     eax, 4
0x4294DE: add     ecx, 4
0x4294E1: add     edx, 4
0x4294E4: cmp     eax, 4
0x4294E7: jnb     short loc_4294D5
0x4294E9: test    eax, eax
0x4294EB: jz      short loc_429553
0x4294ED: movzx   esi, byte ptr [edx]
0x4294F0: movzx   edi, byte ptr [ecx]
0x4294F3: sub     esi, edi
0x4294F5: jnz     short loc_42953C
0x4294F7: sub     eax, 1
0x4294FA: add     ecx, 1
0x4294FD: add     edx, 1
0x429500: test    eax, eax
0x429502: jz      short loc_429553
0x429504: movzx   esi, byte ptr [edx]
0x429507: movzx   edi, byte ptr [ecx]
0x42950A: sub     esi, edi
0x42950C: jnz     short loc_42953C
0x42950E: sub     eax, 1
0x429511: add     ecx, 1
0x429514: add     edx, 1
0x429517: test    eax, eax
0x429519: jz      short loc_429553
0x42951B: movzx   esi, byte ptr [edx]
0x42951E: movzx   edi, byte ptr [ecx]
0x429521: sub     esi, edi
0x429523: jnz     short loc_42953C
0x429525: sub     eax, 1
0x429528: add     ecx, 1
0x42952B: add     edx, 1
0x42952E: test    eax, eax
0x429530: jz      short loc_429553
0x429532: movzx   esi, byte ptr [edx]
0x429535: movzx   eax, byte ptr [ecx]
0x429538: sub     esi, eax
0x42953A: jz      short loc_429553
0x42953C: test    esi, esi
0x42953E: mov     eax, 1
0x429543: jg      short loc_429555
0x429545: or      eax, 0FFFFFFFFh
0x429548: pop     edi
0x429549: test    eax, eax
0x42954B: pop     esi
0x42954C: setnz   al
0x42954F: pop     ebx
0x429550: retn    4
0x429553: xor     eax, eax
0x429555: pop     edi
0x429556: test    eax, eax
0x429558: pop     esi
0x429559: setnz   al
0x42955C: pop     ebx
0x42955D: retn    4
