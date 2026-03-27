0x73C630: mov     eax, [esp+arg_4]
0x73C634: push    ebx
0x73C635: mov     ebx, [esp+4+arg_0]
0x73C639: push    ebp
0x73C63A: push    eax
0x73C63B: push    ebx
0x73C63C: mov     ebp, ecx
0x73C63E: call    sub_7214A0
0x73C643: xor     ecx, ecx
0x73C645: cmp     [ebp+10h], ecx
0x73C648: jz      loc_73C6FD
0x73C64E: mov     eax, [ebp+0Ch]
0x73C651: cmp     eax, ecx
0x73C653: jbe     loc_73C6FD
0x73C659: mov     [ebx+0Ch], eax
0x73C65C: mov     eax, [ebp+14h]
0x73C65F: cmp     eax, 0FFFFFFFFh
0x73C662: jle     short loc_73C66E
0x73C664: cmp     eax, [ebp+0Ch]
0x73C667: jge     short loc_73C66E
0x73C669: mov     [ebx+14h], eax
0x73C66C: jmp     short loc_73C675
0x73C66E: mov     dword ptr [ebx+14h], 0FFFFFFFFh
0x73C675: mov     eax, [ebp+0Ch]
0x73C678: xor     ecx, ecx
0x73C67A: mov     edx, 4
0x73C67F: mul     edx
0x73C681: seto    cl
0x73C684: push    esi
0x73C685: neg     ecx
0x73C687: or      ecx, eax
0x73C689: push    ecx; Size
0x73C68A: call    FormHeapAlloc
0x73C68F: xor     esi, esi
0x73C691: add     esp, 4
0x73C694: mov     [ebx+10h], eax
0x73C697: cmp     [ebp+0Ch], esi
0x73C69A: jbe     short loc_73C6F7
0x73C69C: push    edi
0x73C69D: lea     ecx, [ecx+0]
0x73C6A0: mov     eax, [ebp+10h]
0x73C6A3: cmp     dword ptr [eax+esi*4], 0
0x73C6A7: lea     eax, [eax+esi*4]
0x73C6AA: jz      short loc_73C6E4
0x73C6AC: mov     eax, [eax]
0x73C6AE: lea     edx, [eax+1]
0x73C6B1: mov     cl, [eax]
0x73C6B3: add     eax, 1
0x73C6B6: test    cl, cl
0x73C6B8: jnz     short loc_73C6B1
0x73C6BA: sub     eax, edx
0x73C6BC: lea     edi, [eax+1]
0x73C6BF: push    edi; Size
0x73C6C0: call    FormHeapAlloc
0x73C6C5: mov     ecx, [ebx+10h]
0x73C6C8: mov     [ecx+esi*4], eax
0x73C6CB: mov     edx, [ebp+10h]
0x73C6CE: mov     eax, [edx+esi*4]
0x73C6D1: mov     ecx, [ebx+10h]
0x73C6D4: mov     edx, [ecx+esi*4]
0x73C6D7: push    eax; Src
0x73C6D8: push    edi; SizeInBytes
0x73C6D9: push    edx; Dst
0x73C6DA: call    _strcpy_s
0x73C6DF: add     esp, 10h
0x73C6E2: jmp     short loc_73C6EE
0x73C6E4: mov     eax, [ebx+10h]
0x73C6E7: mov     dword ptr [eax+esi*4], 0
0x73C6EE: add     esi, 1
0x73C6F1: cmp     esi, [ebp+0Ch]
0x73C6F4: jb      short loc_73C6A0
0x73C6F6: pop     edi
0x73C6F7: pop     esi
0x73C6F8: pop     ebp
0x73C6F9: pop     ebx
0x73C6FA: retn    8
0x73C6FD: pop     ebp
0x73C6FE: mov     [ebx+10h], ecx
0x73C701: mov     [ebx+0Ch], ecx
0x73C704: pop     ebx
0x73C705: retn    8
