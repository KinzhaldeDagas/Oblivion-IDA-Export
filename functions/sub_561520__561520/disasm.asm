0x561520: push    ebx
0x561521: push    ebp
0x561522: push    esi
0x561523: mov     esi, ecx
0x561525: mov     eax, [esi+14h]
0x561528: xor     ebx, ebx
0x56152A: cmp     eax, ebx
0x56152C: push    edi
0x56152D: jz      short loc_56154F
0x56152F: mov     ecx, [eax-4]
0x561532: lea     edi, [eax-4]
0x561535: push    offset sub_7016A0; void (__thiscall *)(void *)
0x56153A: push    ecx; int
0x56153B: push    4; unsigned int
0x56153D: push    eax; void *
0x56153E: call    $LN21
0x561543: push    edi
0x561544: call    FormHeapFree
0x561549: add     esp, 4
0x56154C: mov     [esi+14h], ebx
0x56154F: mov     eax, [esi+18h]
0x561552: cmp     eax, ebx
0x561554: jz      short loc_561576
0x561556: mov     edx, [eax-4]
0x561559: lea     edi, [eax-4]
0x56155C: push    offset sub_7016A0; void (__thiscall *)(void *)
0x561561: push    edx; int
0x561562: push    4; unsigned int
0x561564: push    eax; void *
0x561565: call    $LN21
0x56156A: push    edi
0x56156B: call    FormHeapFree
0x561570: add     esp, 4
0x561573: mov     [esi+18h], ebx
0x561576: mov     edi, [esi+1Ch]
0x561579: cmp     edi, ebx
0x56157B: mov     ebp, ds:0A2807Ch
0x561581: jz      short loc_56159E
0x561583: lea     eax, [edi+4]
0x561586: push    eax; lpAddend
0x561587: call    ebp ; InterlockedDecrement
0x561589: test    eax, eax
0x56158B: jnz     short loc_56159B
0x56158D: cmp     edi, ebx
0x56158F: jz      short loc_56159B
0x561591: mov     edx, [edi]
0x561593: mov     eax, [edx]
0x561595: push    1
0x561597: mov     ecx, edi
0x561599: call    eax
0x56159B: mov     [esi+1Ch], ebx
0x56159E: mov     edi, [esi+20h]
0x5615A1: cmp     edi, ebx
0x5615A3: jz      short loc_5615C0
0x5615A5: lea     ecx, [edi+4]
0x5615A8: push    ecx; lpAddend
0x5615A9: call    ebp ; InterlockedDecrement
0x5615AB: test    eax, eax
0x5615AD: jnz     short loc_5615BD
0x5615AF: cmp     edi, ebx
0x5615B1: jz      short loc_5615BD
0x5615B3: mov     edx, [edi]
0x5615B5: mov     eax, [edx]
0x5615B7: push    1
0x5615B9: mov     ecx, edi
0x5615BB: call    eax
0x5615BD: mov     [esi+20h], ebx
0x5615C0: mov     eax, [esi+24h]
0x5615C3: cmp     eax, ebx
0x5615C5: jz      short loc_5615E7
0x5615C7: mov     ecx, [eax-4]
0x5615CA: lea     edi, [eax-4]
0x5615CD: push    offset sub_7016A0; void (__thiscall *)(void *)
0x5615D2: push    ecx; int
0x5615D3: push    4; unsigned int
0x5615D5: push    eax; void *
0x5615D6: call    $LN21
0x5615DB: push    edi
0x5615DC: call    FormHeapFree
0x5615E1: add     esp, 4
0x5615E4: mov     [esi+24h], ebx
0x5615E7: mov     eax, [esi+28h]
0x5615EA: cmp     eax, ebx
0x5615EC: jz      short loc_56160E
0x5615EE: mov     edx, [eax-4]
0x5615F1: lea     edi, [eax-4]
0x5615F4: push    offset sub_7016A0; void (__thiscall *)(void *)
0x5615F9: push    edx; int
0x5615FA: push    4; unsigned int
0x5615FC: push    eax; void *
0x5615FD: call    $LN21
0x561602: push    edi
0x561603: call    FormHeapFree
0x561608: add     esp, 4
0x56160B: mov     [esi+28h], ebx
0x56160E: mov     eax, [esi+2Ch]
0x561611: cmp     eax, ebx
0x561613: jz      short loc_561635
0x561615: mov     ecx, [eax-4]
0x561618: lea     edi, [eax-4]
0x56161B: push    offset sub_7016A0; void (__thiscall *)(void *)
0x561620: push    ecx; int
0x561621: push    4; unsigned int
0x561623: push    eax; void *
0x561624: call    $LN21
0x561629: push    edi
0x56162A: call    FormHeapFree
0x56162F: add     esp, 4
0x561632: mov     [esi+2Ch], ebx
0x561635: mov     eax, [esi+30h]
0x561638: cmp     eax, ebx
0x56163A: jz      short loc_56165C
0x56163C: mov     edx, [eax-4]
0x56163F: lea     edi, [eax-4]
0x561642: push    offset sub_7016A0; void (__thiscall *)(void *)
0x561647: push    edx; int
0x561648: push    4; unsigned int
0x56164A: push    eax; void *
0x56164B: call    $LN21
0x561650: push    edi
0x561651: call    FormHeapFree
0x561656: add     esp, 4
0x561659: mov     [esi+30h], ebx
0x56165C: mov     edi, [esi+34h]
0x56165F: cmp     edi, ebx
0x561661: jz      short loc_56167E
0x561663: lea     eax, [edi+4]
0x561666: push    eax; lpAddend
0x561667: call    ebp ; InterlockedDecrement
0x561669: test    eax, eax
0x56166B: jnz     short loc_56167B
0x56166D: cmp     edi, ebx
0x56166F: jz      short loc_56167B
0x561671: mov     edx, [edi]
0x561673: mov     eax, [edx]
0x561675: push    1
0x561677: mov     ecx, edi
0x561679: call    eax
0x56167B: mov     [esi+34h], ebx
0x56167E: mov     edi, [esi+38h]
0x561681: cmp     edi, ebx
0x561683: jz      short loc_5616A0
0x561685: lea     ecx, [edi+4]
0x561688: push    ecx; lpAddend
0x561689: call    ebp ; InterlockedDecrement
0x56168B: test    eax, eax
0x56168D: jnz     short loc_56169D
0x56168F: cmp     edi, ebx
0x561691: jz      short loc_56169D
0x561693: mov     edx, [edi]
0x561695: mov     eax, [edx]
0x561697: push    1
0x561699: mov     ecx, edi
0x56169B: call    eax
0x56169D: mov     [esi+38h], ebx
0x5616A0: mov     edi, [esi+3Ch]
0x5616A3: cmp     edi, ebx
0x5616A5: jz      short loc_5616C2
0x5616A7: lea     ecx, [edi+4]
0x5616AA: push    ecx; lpAddend
0x5616AB: call    ebp ; InterlockedDecrement
0x5616AD: test    eax, eax
0x5616AF: jnz     short loc_5616BF
0x5616B1: cmp     edi, ebx
0x5616B3: jz      short loc_5616BF
0x5616B5: mov     edx, [edi]
0x5616B7: mov     eax, [edx]
0x5616B9: push    1
0x5616BB: mov     ecx, edi
0x5616BD: call    eax
0x5616BF: mov     [esi+3Ch], ebx
0x5616C2: mov     edi, [esi+40h]
0x5616C5: cmp     edi, ebx
0x5616C7: jz      short loc_5616E4
0x5616C9: lea     ecx, [edi+4]
0x5616CC: push    ecx; lpAddend
0x5616CD: call    ebp ; InterlockedDecrement
0x5616CF: test    eax, eax
0x5616D1: jnz     short loc_5616E1
0x5616D3: cmp     edi, ebx
0x5616D5: jz      short loc_5616E1
0x5616D7: mov     edx, [edi]
0x5616D9: mov     eax, [edx]
0x5616DB: push    1
0x5616DD: mov     ecx, edi
0x5616DF: call    eax
0x5616E1: mov     [esi+40h], ebx
0x5616E4: pop     edi
0x5616E5: pop     esi
0x5616E6: pop     ebp
0x5616E7: pop     ebx
0x5616E8: retn
