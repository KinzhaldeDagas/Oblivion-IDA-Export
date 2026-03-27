0x77C5E0: push    ebx
0x77C5E1: mov     ebx, [esp+4+arg_0]
0x77C5E5: push    ebp
0x77C5E6: push    esi
0x77C5E7: mov     esi, ecx
0x77C5E9: mov     eax, [esi]
0x77C5EB: mov     edx, [eax+4]
0x77C5EE: push    edi
0x77C5EF: push    ebx
0x77C5F0: call    edx
0x77C5F2: mov     ebp, eax
0x77C5F4: mov     eax, [esi+8]
0x77C5F7: mov     edi, [eax+ebp*4]
0x77C5FA: test    edi, edi
0x77C5FC: jz      short loc_77C618
0x77C5FE: mov     edi, edi
0x77C600: mov     eax, [edi+4]
0x77C603: mov     edx, [esi]
0x77C605: mov     edx, [edx+8]
0x77C608: push    eax
0x77C609: push    ebx
0x77C60A: mov     ecx, esi
0x77C60C: call    edx
0x77C60E: test    al, al
0x77C610: jnz     short loc_77C67E
0x77C612: mov     edi, [edi]
0x77C614: test    edi, edi
0x77C616: jnz     short loc_77C600
0x77C618: mov     edx, [esi]
0x77C61A: mov     eax, [edx+14h]
0x77C61D: mov     ecx, esi
0x77C61F: call    eax
0x77C621: mov     ebx, [esp+0Ch+arg_8]
0x77C625: test    ebx, ebx
0x77C627: push    ecx
0x77C628: mov     edi, eax
0x77C62A: mov     eax, esp
0x77C62C: mov     [eax], ebx
0x77C62E: jz      short loc_77C63A
0x77C630: lea     ecx, [ebx+4]
0x77C633: push    ecx; lpAddend
0x77C634: call    dword ptr ds:0A28078h
0x77C63A: mov     eax, [esp+10h+arg_4]
0x77C63E: mov     edx, [esi]
0x77C640: mov     edx, [edx+0Ch]
0x77C643: push    eax
0x77C644: push    edi
0x77C645: mov     ecx, esi
0x77C647: call    edx
0x77C649: mov     eax, [esi+8]
0x77C64C: mov     ecx, [eax+ebp*4]
0x77C64F: mov     [edi], ecx
0x77C651: mov     edx, [esi+8]
0x77C654: mov     [edx+ebp*4], edi
0x77C657: add     dword ptr [esi+0Ch], 1
0x77C65B: test    ebx, ebx
0x77C65D: jz      short loc_77C677
0x77C65F: lea     eax, [ebx+4]
0x77C662: push    eax; lpAddend
0x77C663: call    dword ptr ds:0A2807Ch
0x77C669: test    eax, eax
0x77C66B: jnz     short loc_77C677
0x77C66D: mov     edx, [ebx]
0x77C66F: mov     eax, [edx]
0x77C671: mov     ecx, ebx
0x77C673: push    1
0x77C675: call    eax
0x77C677: pop     edi
0x77C678: pop     esi
0x77C679: pop     ebp
0x77C67A: pop     ebx
0x77C67B: retn    8
0x77C67E: cmp     byte ptr [esi+10h], 0
0x77C682: jnz     short loc_77C687
0x77C684: mov     [edi+4], ebx
0x77C687: lea     eax, [esp+10h+arg_4]
0x77C68B: push    eax
0x77C68C: lea     ecx, [edi+8]
0x77C68F: call    sub_55E2A0
0x77C694: mov     esi, [esp+10h+arg_4]
0x77C698: test    esi, esi
0x77C69A: jz      short loc_77C677
0x77C69C: lea     ecx, [esi+4]
0x77C69F: push    ecx; lpAddend
0x77C6A0: call    dword ptr ds:0A2807Ch
0x77C6A6: test    eax, eax
0x77C6A8: jnz     short loc_77C677
0x77C6AA: mov     edx, [esi]
0x77C6AC: mov     eax, [edx]
0x77C6AE: mov     ecx, esi
0x77C6B0: push    1
0x77C6B2: call    eax
0x77C6B4: pop     edi
0x77C6B5: pop     esi
0x77C6B6: pop     ebp
0x77C6B7: pop     ebx
0x77C6B8: retn    8
