0x716AC0: mov     eax, [esp+arg_4]
0x716AC4: push    ebx
0x716AC5: mov     ebx, [esp+4+arg_0]
0x716AC9: push    edi
0x716ACA: push    eax
0x716ACB: push    ebx
0x716ACC: mov     edi, ecx
0x716ACE: call    sub_7214A0
0x716AD3: mov     eax, [edi+0Ch]
0x716AD6: test    eax, eax
0x716AD8: jz      short loc_716B0C
0x716ADA: lea     edx, [eax+1]
0x716ADD: lea     ecx, [ecx+0]
0x716AE0: mov     cl, [eax]
0x716AE2: add     eax, 1
0x716AE5: test    cl, cl
0x716AE7: jnz     short loc_716AE0
0x716AE9: sub     eax, edx
0x716AEB: push    esi
0x716AEC: lea     esi, [eax+1]
0x716AEF: push    esi; Size
0x716AF0: call    FormHeapAlloc
0x716AF5: mov     [ebx+0Ch], eax
0x716AF8: mov     ecx, [edi+0Ch]
0x716AFB: push    ecx; Src
0x716AFC: push    esi; SizeInBytes
0x716AFD: push    eax; Dst
0x716AFE: call    _strcpy_s
0x716B03: add     esp, 10h
0x716B06: pop     esi
0x716B07: pop     edi
0x716B08: pop     ebx
0x716B09: retn    8
0x716B0C: pop     edi
0x716B0D: mov     dword ptr [ebx+0Ch], 0
0x716B14: pop     ebx
0x716B15: retn    8
