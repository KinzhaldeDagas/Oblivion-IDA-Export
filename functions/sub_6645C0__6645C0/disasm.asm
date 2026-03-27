0x6645C0: push    ebp
0x6645C1: push    0; a2
0x6645C3: mov     ebp, ecx
0x6645C5: call    Actor_GetActorBaseForm
0x6645CA: test    eax, eax
0x6645CC: jz      loc_6646BF
0x6645D2: push    ebx
0x6645D3: lea     ebx, [eax+58h]
0x6645D6: test    ebx, ebx
0x6645D8: jz      loc_6646BE
0x6645DE: push    esi
0x6645DF: push    edi
0x6645E0: call    sub_4167E0
0x6645E5: mov     esi, ebx
0x6645E7: xor     edi, edi
0x6645E9: lea     esp, [esp+0]
0x6645F0: mov     eax, [esi+4]
0x6645F3: test    eax, eax
0x6645F5: jnz     short loc_6645FB
0x6645F7: cmp     [esi], eax
0x6645F9: jz      short loc_66463D
0x6645FB: mov     ecx, [esi]
0x6645FD: test    byte ptr [ecx+40h], 4
0x664601: jz      short loc_664635
0x664603: test    edi, edi
0x664605: jz      short loc_664614
0x664607: push    ecx
0x664608: mov     ecx, edi
0x66460A: call    BSSimpleList_Remove
0x66460F: mov     esi, [edi+4]
0x664612: jmp     short loc_664639
0x664614: test    eax, eax
0x664616: jz      short loc_66462D
0x664618: mov     ecx, [eax+4]
0x66461B: mov     [esi+4], ecx
0x66461E: mov     edx, [eax]
0x664620: push    eax
0x664621: mov     [esi], edx
0x664623: call    FormHeapFree
0x664628: add     esp, 4
0x66462B: jmp     short loc_664639
0x66462D: mov     dword ptr [esi], 0
0x664633: jmp     short loc_664639
0x664635: mov     edi, esi
0x664637: mov     esi, eax
0x664639: test    esi, esi
0x66463B: jnz     short loc_6645F0
0x66463D: mov     esi, ebx
0x66463F: nop
0x664640: cmp     dword ptr [esi+4], 0
0x664644: jnz     short loc_66464B
0x664646: cmp     dword ptr [esi], 0
0x664649: jz      short loc_66465C
0x66464B: mov     eax, [esi]
0x66464D: push    eax
0x66464E: mov     ecx, ebp
0x664650: call    PlayerCharacter_SetKnownEffect
0x664655: mov     esi, [esi+4]
0x664658: test    esi, esi
0x66465A: jnz     short loc_664640
0x66465C: mov     edi, ds:0B33A98h
0x664662: add     edi, 2Ch ; ','
0x664665: jz      short loc_6646BC
0x664667: cmp     dword ptr [edi+4], 0
0x66466B: jnz     short loc_664672
0x66466D: cmp     dword ptr [edi], 0
0x664670: jz      short loc_6646BC
0x664672: mov     esi, [edi]
0x664674: test    byte ptr [esi+40h], 4
0x664678: jz      short loc_6646B5
0x66467A: mov     edx, [esi+18h]
0x66467D: mov     eax, [edx+18h]
0x664680: lea     ecx, [esi+18h]
0x664683: call    eax
0x664685: test    eax, eax
0x664687: jnz     short loc_6646B5
0x664689: lea     ecx, [esi+24h]
0x66468C: call    EffectItemList_GetSchoolAV
0x664691: mov     edx, [ebp+0]
0x664694: push    eax
0x664695: mov     eax, [edx+284h]
0x66469B: mov     ecx, ebp
0x66469D: call    eax
0x66469F: cmp     eax, ds:0B37A70h
0x6646A5: jl      short loc_6646B5
0x6646A7: mov     edx, [ebp+0]
0x6646AA: mov     eax, [edx+2DCh]
0x6646B0: push    esi
0x6646B1: mov     ecx, ebp
0x6646B3: call    eax
0x6646B5: mov     edi, [edi+4]
0x6646B8: test    edi, edi
0x6646BA: jnz     short loc_664667
0x6646BC: pop     edi
0x6646BD: pop     esi
0x6646BE: pop     ebx
0x6646BF: pop     ebp
0x6646C0: retn
