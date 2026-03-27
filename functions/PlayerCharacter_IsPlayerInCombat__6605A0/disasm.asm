0x6605A0: push    edi
0x6605A1: mov     edi, ecx
0x6605A3: mov     eax, [edi+5ACh]
0x6605A9: xor     cl, cl
0x6605AB: test    eax, eax
0x6605AD: jz      loc_660691
0x6605B3: mov     eax, [eax]
0x6605B5: test    eax, eax
0x6605B7: jz      loc_660691
0x6605BD: push    esi
0x6605BE: mov     esi, eax
0x6605C0: mov     eax, [esi]
0x6605C2: mov     edx, [eax+190h]
0x6605C8: mov     ecx, esi
0x6605CA: call    edx
0x6605CC: test    al, al
0x6605CE: jz      loc_660679
0x6605D4: push    ebx
0x6605D5: mov     bl, [esp+0Ch+arg_0]
0x6605D9: lea     esp, [esp+0]
0x6605E0: mov     eax, [esi]
0x6605E2: mov     edx, [eax+334h]
0x6605E8: push    0
0x6605EA: mov     ecx, esi
0x6605EC: call    edx
0x6605EE: test    al, al
0x6605F0: jnz     loc_660678
0x6605F6: push    0
0x6605F8: mov     ecx, esi
0x6605FA: call    sub_5E6CD0
0x6605FF: test    al, al
0x660601: jz      short loc_660630
0x660603: mov     eax, ds:0B333C4h
0x660608: push    0
0x66060A: push    eax
0x66060B: mov     ecx, esi
0x66060D: call    TesObjectREF_GetDistance
0x660612: fcomp   dword ptr ds:0A5739Ch
0x660618: fnstsw  ax
0x66061A: test    ah, 41h
0x66061D: jz      short loc_660630
0x66061F: test    bl, bl
0x660621: jz      short loc_660678
0x660623: push    0
0x660625: mov     ecx, esi
0x660627: call    sub_5E6CD0
0x66062C: test    al, al
0x66062E: jz      short loc_660678
0x660630: mov     eax, [edi+5ACh]
0x660636: mov     ecx, [eax+4]
0x660639: test    ecx, ecx
0x66063B: jz      short loc_660652
0x66063D: mov     edx, [ecx+4]
0x660640: mov     [eax+4], edx
0x660643: mov     edx, [ecx]
0x660645: push    ecx
0x660646: mov     [eax], edx
0x660648: call    FormHeapFree
0x66064D: add     esp, 4
0x660650: jmp     short loc_660658
0x660652: mov     dword ptr [eax], 0
0x660658: mov     eax, [edi+5ACh]
0x66065E: mov     esi, [eax]
0x660660: test    esi, esi
0x660662: jz      short loc_660678
0x660664: mov     edx, [esi]
0x660666: mov     eax, [edx+190h]
0x66066C: mov     ecx, esi
0x66066E: call    eax
0x660670: test    al, al
0x660672: jnz     loc_6605E0
0x660678: pop     ebx
0x660679: mov     eax, [edi+5ACh]
0x66067F: cmp     dword ptr [eax+4], 0
0x660683: pop     esi
0x660684: jnz     short loc_66068B
0x660686: cmp     dword ptr [eax], 0
0x660689: jz      short loc_660697
0x66068B: mov     al, 1
0x66068D: pop     edi
0x66068E: retn    4
0x660691: mov     al, cl
0x660693: pop     edi
0x660694: retn    4
0x660697: xor     al, al
0x660699: pop     edi
0x66069A: retn    4
