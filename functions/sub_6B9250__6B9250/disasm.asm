0x6B9250: cmp     [esp+arg_0], 0
0x6B9255: push    esi
0x6B9256: mov     dword ptr [ecx], 0
0x6B925C: lea     esi, [ecx+4]
0x6B925F: jnz     short loc_6B9268
0x6B9261: test    esi, esi
0x6B9263: jz      short loc_6B92BB
0x6B9265: mov     esi, [esi+4]
0x6B9268: test    esi, esi
0x6B926A: jz      short loc_6B92BB
0x6B926C: push    edi
0x6B926D: lea     ecx, [ecx+0]
0x6B9270: mov     ecx, esi
0x6B9272: call    BSSimpleList_IsEmpty
0x6B9277: test    al, al
0x6B9279: jnz     short loc_6B92BA
0x6B927B: mov     edi, [esi]
0x6B927D: cmp     [edi+20h], al
0x6B9280: jnz     short loc_6B9296
0x6B9282: test    edi, edi
0x6B9284: jz      short loc_6B9296
0x6B9286: mov     ecx, edi
0x6B9288: call    sub_6B8F50
0x6B928D: push    edi
0x6B928E: call    FormHeapFree
0x6B9293: add     esp, 4
0x6B9296: mov     eax, [esi+4]
0x6B9299: test    eax, eax
0x6B929B: jz      short loc_6B92B2
0x6B929D: mov     ecx, [eax+4]
0x6B92A0: mov     [esi+4], ecx
0x6B92A3: mov     edx, [eax]
0x6B92A5: push    eax
0x6B92A6: mov     [esi], edx
0x6B92A8: call    FormHeapFree
0x6B92AD: add     esp, 4
0x6B92B0: jmp     short loc_6B9270
0x6B92B2: mov     dword ptr [esi], 0
0x6B92B8: jmp     short loc_6B9270
0x6B92BA: pop     edi
0x6B92BB: pop     esi
0x6B92BC: retn    4
