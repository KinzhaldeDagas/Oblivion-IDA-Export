0x4F9900: mov     eax, [esp+arg_0]
0x4F9904: push    ebp
0x4F9905: push    0; int
0x4F9907: push    offset ??_R0?AVTESLoadScreen@@@8; struct TypeDescriptor *
0x4F990C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F9911: push    0; int
0x4F9913: push    eax; void *
0x4F9914: mov     ebp, ecx
0x4F9916: call    OblivionDynamicCast
0x4F991B: add     esp, 14h
0x4F991E: test    eax, eax
0x4F9920: jnz     short loc_4F9928
0x4F9922: mov     al, 1
0x4F9924: pop     ebp
0x4F9925: retn    4
0x4F9928: push    ebx
0x4F9929: lea     ebx, [ebp+2Ch]
0x4F992C: push    edi
0x4F992D: mov     edx, ebx
0x4F992F: xor     edi, edi
0x4F9931: test    edx, edx
0x4F9933: lea     ecx, [eax+2Ch]
0x4F9936: jz      short loc_4F9947
0x4F9938: cmp     dword ptr [edx], 0
0x4F993B: jz      short loc_4F9940
0x4F993D: add     edi, 1
0x4F9940: mov     edx, [edx+4]
0x4F9943: test    edx, edx
0x4F9945: jnz     short loc_4F9938
0x4F9947: push    esi
0x4F9948: xor     esi, esi
0x4F994A: test    ecx, ecx
0x4F994C: mov     edx, ecx
0x4F994E: jz      short loc_4F995F
0x4F9950: cmp     dword ptr [edx], 0
0x4F9953: jz      short loc_4F9958
0x4F9955: add     esi, 1
0x4F9958: mov     edx, [edx+4]
0x4F995B: test    edx, edx
0x4F995D: jnz     short loc_4F9950
0x4F995F: cmp     edi, esi
0x4F9961: jnz     short loc_4F998B
0x4F9963: test    ecx, ecx
0x4F9965: jz      short loc_4F999A
0x4F9967: mov     esi, [ecx+4]
0x4F996A: test    esi, esi
0x4F996C: jnz     short loc_4F9972
0x4F996E: cmp     [ecx], esi
0x4F9970: jz      short loc_4F999A
0x4F9972: mov     edx, [ecx]
0x4F9974: mov     ecx, ebx
0x4F9976: test    ecx, ecx
0x4F9978: jz      short loc_4F998B
0x4F997A: lea     ebx, [ebx+0]
0x4F9980: cmp     [ecx], edx
0x4F9982: jz      short loc_4F9994
0x4F9984: mov     ecx, [ecx+4]
0x4F9987: test    ecx, ecx
0x4F9989: jnz     short loc_4F9980
0x4F998B: pop     esi
0x4F998C: pop     edi
0x4F998D: pop     ebx
0x4F998E: mov     al, 1
0x4F9990: pop     ebp
0x4F9991: retn    4
0x4F9994: mov     ecx, esi
0x4F9996: test    ecx, ecx
0x4F9998: jnz     short loc_4F9967
0x4F999A: push    eax; a2
0x4F999B: mov     ecx, ebp; this
0x4F999D: call    TESForm_CompareAllComponentsTo
0x4F99A2: pop     esi
0x4F99A3: pop     edi
0x4F99A4: test    al, al
0x4F99A6: pop     ebx
0x4F99A7: setnz   al
0x4F99AA: pop     ebp
0x4F99AB: retn    4
