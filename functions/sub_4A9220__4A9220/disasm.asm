0x4A9220: mov     eax, [esp+arg_0]
0x4A9224: push    esi
0x4A9225: push    edi
0x4A9226: push    0; int
0x4A9228: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x4A922D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4A9232: push    0; int
0x4A9234: push    eax; void *
0x4A9235: mov     edi, ecx
0x4A9237: call    OblivionDynamicCast
0x4A923C: mov     esi, eax
0x4A923E: add     esp, 14h
0x4A9241: test    esi, esi
0x4A9243: jnz     short loc_4A924C
0x4A9245: pop     edi
0x4A9246: mov     al, 1
0x4A9248: pop     esi
0x4A9249: retn    4
0x4A924C: push    esi; a2
0x4A924D: mov     ecx, edi; this
0x4A924F: call    TESForm_CompareAllComponentsTo
0x4A9254: test    al, al
0x4A9256: jnz     short loc_4A9245
0x4A9258: mov     eax, 8
0x4A925D: lea     ecx, [esi+7Ch]
0x4A9260: lea     edx, [edi+7Ch]
0x4A9263: mov     esi, [edx]
0x4A9265: cmp     esi, [ecx]
0x4A9267: jnz     short loc_4A927B
0x4A9269: sub     eax, 4
0x4A926C: add     ecx, 4
0x4A926F: add     edx, 4
0x4A9272: cmp     eax, 4
0x4A9275: jnb     short loc_4A9263
0x4A9277: test    eax, eax
0x4A9279: jz      short loc_4A92E0
0x4A927B: movzx   esi, byte ptr [edx]
0x4A927E: movzx   edi, byte ptr [ecx]
0x4A9281: sub     esi, edi
0x4A9283: jnz     short loc_4A92CA
0x4A9285: sub     eax, 1
0x4A9288: add     ecx, 1
0x4A928B: add     edx, 1
0x4A928E: test    eax, eax
0x4A9290: jz      short loc_4A92E0
0x4A9292: movzx   esi, byte ptr [edx]
0x4A9295: movzx   edi, byte ptr [ecx]
0x4A9298: sub     esi, edi
0x4A929A: jnz     short loc_4A92CA
0x4A929C: sub     eax, 1
0x4A929F: add     ecx, 1
0x4A92A2: add     edx, 1
0x4A92A5: test    eax, eax
0x4A92A7: jz      short loc_4A92E0
0x4A92A9: movzx   esi, byte ptr [edx]
0x4A92AC: movzx   edi, byte ptr [ecx]
0x4A92AF: sub     esi, edi
0x4A92B1: jnz     short loc_4A92CA
0x4A92B3: sub     eax, 1
0x4A92B6: add     ecx, 1
0x4A92B9: add     edx, 1
0x4A92BC: test    eax, eax
0x4A92BE: jz      short loc_4A92E0
0x4A92C0: movzx   esi, byte ptr [edx]
0x4A92C3: movzx   ecx, byte ptr [ecx]
0x4A92C6: sub     esi, ecx
0x4A92C8: jz      short loc_4A92E0
0x4A92CA: test    esi, esi
0x4A92CC: mov     eax, 1
0x4A92D1: jg      short loc_4A92E2
0x4A92D3: or      eax, 0FFFFFFFFh
0x4A92D6: test    eax, eax
0x4A92D8: pop     edi
0x4A92D9: setnz   al
0x4A92DC: pop     esi
0x4A92DD: retn    4
0x4A92E0: xor     eax, eax
0x4A92E2: test    eax, eax
0x4A92E4: pop     edi
0x4A92E5: setnz   al
0x4A92E8: pop     esi
0x4A92E9: retn    4
