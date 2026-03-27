0x557470: push    ebx
0x557471: mov     ebx, [esp+4+arg_0]
0x557475: push    esi
0x557476: mov     esi, ecx
0x557478: cmp     esi, ebx
0x55747A: jz      loc_5575B2
0x557480: push    ebp
0x557481: mov     ebp, [ebx+4]
0x557484: test    ebp, ebp
0x557486: jz      short loc_55749D
0x557488: mov     ecx, [ebx+8]
0x55748B: sub     ecx, ebp
0x55748D: mov     eax, 2AAAAAABh
0x557492: imul    ecx
0x557494: mov     ecx, edx
0x557496: shr     ecx, 1Fh
0x557499: add     ecx, edx
0x55749B: jnz     short loc_5574AC
0x55749D: mov     ecx, esi
0x55749F: call    sub_556E30
0x5574A4: pop     ebp
0x5574A5: mov     eax, esi
0x5574A7: pop     esi
0x5574A8: pop     ebx
0x5574A9: retn    4
0x5574AC: push    edi
0x5574AD: mov     edi, [esi+4]
0x5574B0: test    edi, edi
0x5574B2: jnz     short loc_5574B8
0x5574B4: xor     eax, eax
0x5574B6: jmp     short loc_5574CB
0x5574B8: mov     edx, [esi+8]
0x5574BB: sub     edx, edi
0x5574BD: mov     eax, 2AAAAAABh
0x5574C2: imul    edx
0x5574C4: mov     eax, edx
0x5574C6: shr     eax, 1Fh
0x5574C9: add     eax, edx
0x5574CB: cmp     ecx, eax
0x5574CD: ja      short loc_557535
0x5574CF: mov     byte ptr [esp+10h+arg_0], 0
0x5574D4: mov     eax, [esp+10h+arg_0]
0x5574D8: mov     ecx, [esp+10h+arg_0]
0x5574DC: mov     edx, [esp+10h+arg_0]
0x5574E0: push    eax
0x5574E1: mov     eax, [ebx+8]
0x5574E4: push    ecx
0x5574E5: push    edx
0x5574E6: push    edi
0x5574E7: push    eax
0x5574E8: push    ebp
0x5574E9: call    sub_556780
0x5574EE: mov     eax, [ebx+4]
0x5574F1: add     esp, 18h
0x5574F4: test    eax, eax
0x5574F6: jnz     short loc_55750D
0x5574F8: mov     ecx, [esi+4]
0x5574FB: lea     eax, [eax+eax*2]
0x5574FE: pop     edi
0x5574FF: lea     edx, [ecx+eax*2]
0x557502: pop     ebp
0x557503: mov     [esi+8], edx
0x557506: mov     eax, esi
0x557508: pop     esi
0x557509: pop     ebx
0x55750A: retn    4
0x55750D: mov     ecx, [ebx+8]
0x557510: sub     ecx, eax
0x557512: mov     eax, 2AAAAAABh
0x557517: imul    ecx
0x557519: mov     ecx, [esi+4]
0x55751C: mov     eax, edx
0x55751E: shr     eax, 1Fh
0x557521: add     eax, edx
0x557523: lea     eax, [eax+eax*2]
0x557526: pop     edi
0x557527: lea     edx, [ecx+eax*2]
0x55752A: pop     ebp
0x55752B: mov     [esi+8], edx
0x55752E: mov     eax, esi
0x557530: pop     esi
0x557531: pop     ebx
0x557532: retn    4
0x557535: test    edi, edi
0x557537: jnz     short loc_55753D
0x557539: xor     eax, eax
0x55753B: jmp     short loc_557550
0x55753D: mov     edx, [esi+0Ch]
0x557540: sub     edx, edi
0x557542: mov     eax, 2AAAAAABh
0x557547: imul    edx
0x557549: mov     eax, edx
0x55754B: shr     eax, 1Fh
0x55754E: add     eax, edx
0x557550: cmp     ecx, eax
0x557552: ja      short loc_55757A
0x557554: mov     ecx, esi
0x557556: call    sub_54F700
0x55755B: lea     eax, [eax+eax*2]
0x55755E: lea     eax, [ebp+eax*2+0]
0x557562: push    edi
0x557563: push    eax
0x557564: push    ebp
0x557565: mov     [esp+1Ch+arg_0], eax
0x557569: call    sub_556C70
0x55756E: mov     ecx, [esi+8]
0x557571: mov     eax, [esp+1Ch+arg_0]
0x557575: add     esp, 0Ch
0x557578: jmp     short loc_5575A0
0x55757A: test    edi, edi
0x55757C: jz      short loc_557587
0x55757E: push    edi
0x55757F: call    FormHeapFree
0x557584: add     esp, 4
0x557587: mov     ecx, ebx
0x557589: call    sub_54F700
0x55758E: push    eax
0x55758F: mov     ecx, esi
0x557591: call    sub_5571B0
0x557596: test    al, al
0x557598: jz      short loc_5575B0
0x55759A: mov     ecx, [esi+4]
0x55759D: mov     eax, [ebx+4]
0x5575A0: mov     edx, [ebx+8]
0x5575A3: push    ecx
0x5575A4: push    edx
0x5575A5: push    eax
0x5575A6: mov     ecx, esi
0x5575A8: call    sub_6F0130
0x5575AD: mov     [esi+8], eax
0x5575B0: pop     edi
0x5575B1: pop     ebp
0x5575B2: mov     eax, esi
0x5575B4: pop     esi
0x5575B5: pop     ebx
0x5575B6: retn    4
