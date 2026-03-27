0x5E5520: mov     eax, [esp+arg_0]
0x5E5524: push    ebx
0x5E5525: push    ebp
0x5E5526: push    esi
0x5E5527: push    edi
0x5E5528: push    0; int
0x5E552A: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5E552F: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x5E5534: push    0; int
0x5E5536: push    eax; void *
0x5E5537: mov     ebp, ecx
0x5E5539: call    OblivionDynamicCast
0x5E553E: mov     edi, eax
0x5E5540: add     esp, 14h
0x5E5543: test    edi, edi
0x5E5545: jz      loc_5E561D
0x5E554B: lea     ebx, [ebp-68h]
0x5E554E: cmp     edi, ebx
0x5E5550: jz      loc_5E561D
0x5E5556: push    0; Seed
0x5E5558: call    GetRandomLargeInteger?
0x5E555D: cdq
0x5E555E: mov     ecx, 64h ; 'd'
0x5E5563: idiv    ecx
0x5E5565: lea     ecx, [ebp-68h]
0x5E5568: add     esp, 4
0x5E556B: push    35h ; '5'
0x5E556D: mov     esi, edx
0x5E556F: mov     edx, [ecx]
0x5E5571: mov     eax, [edx+284h]
0x5E5577: call    eax
0x5E5579: cmp     esi, eax
0x5E557B: jge     loc_5E561D
0x5E5581: test    ebx, ebx
0x5E5583: jz      short loc_5E558A
0x5E5585: lea     eax, [ebp-0Ch]
0x5E5588: jmp     short loc_5E558C
0x5E558A: xor     eax, eax
0x5E558C: mov     ebx, [esp+10h+arg_8]
0x5E5590: mov     [ebx+24h], eax
0x5E5593: lea     eax, [ebp-68h]
0x5E5596: test    eax, eax
0x5E5598: jz      short loc_5E559F
0x5E559A: lea     eax, [ebp-0Ch]
0x5E559D: jmp     short loc_5E55A1
0x5E559F: xor     eax, eax
0x5E55A1: mov     ecx, [esp+10h+arg_4]
0x5E55A5: mov     edx, [edi+68h]
0x5E55A8: mov     edx, [edx+24h]
0x5E55AB: push    1
0x5E55AD: push    ebx
0x5E55AE: lea     esi, [edi+68h]
0x5E55B1: push    ecx
0x5E55B2: push    eax
0x5E55B3: mov     ecx, esi
0x5E55B5: call    edx
0x5E55B7: test    al, al
0x5E55B9: lea     eax, [ebp-68h]
0x5E55BC: jz      short loc_5E55EF
0x5E55BE: test    eax, eax
0x5E55C0: jz      short loc_5E55D9
0x5E55C2: mov     edx, [esi]
0x5E55C4: lea     eax, [ebp-0Ch]
0x5E55C7: push    ebx
0x5E55C8: push    eax
0x5E55C9: mov     eax, [edx+1Ch]
0x5E55CC: mov     ecx, esi
0x5E55CE: call    eax
0x5E55D0: pop     edi
0x5E55D1: pop     esi
0x5E55D2: pop     ebp
0x5E55D3: mov     al, 1
0x5E55D5: pop     ebx
0x5E55D6: retn    0Ch
0x5E55D9: mov     edx, [esi]
0x5E55DB: xor     eax, eax
0x5E55DD: push    ebx
0x5E55DE: push    eax
0x5E55DF: mov     eax, [edx+1Ch]
0x5E55E2: mov     ecx, esi
0x5E55E4: call    eax
0x5E55E6: pop     edi
0x5E55E7: pop     esi
0x5E55E8: pop     ebp
0x5E55E9: mov     al, 1
0x5E55EB: pop     ebx
0x5E55EC: retn    0Ch
0x5E55EF: test    eax, eax
0x5E55F1: jz      short loc_5E55F8
0x5E55F3: lea     eax, [ebp-0Ch]
0x5E55F6: jmp     short loc_5E55FA
0x5E55F8: xor     eax, eax
0x5E55FA: mov     ecx, [esp+10h+arg_4]
0x5E55FE: mov     edx, [edi]
0x5E5600: push    ebx
0x5E5601: push    ecx
0x5E5602: push    eax
0x5E5603: mov     eax, [edx+124h]
0x5E5609: mov     ecx, edi
0x5E560B: call    eax
0x5E560D: mov     ecx, eax
0x5E560F: call    MagicTarget_AddEffect
0x5E5614: pop     edi
0x5E5615: pop     esi
0x5E5616: pop     ebp
0x5E5617: mov     al, 1
0x5E5619: pop     ebx
0x5E561A: retn    0Ch
0x5E561D: pop     edi
0x5E561E: pop     esi
0x5E561F: pop     ebp
0x5E5620: xor     al, al
0x5E5622: pop     ebx
0x5E5623: retn    0Ch
