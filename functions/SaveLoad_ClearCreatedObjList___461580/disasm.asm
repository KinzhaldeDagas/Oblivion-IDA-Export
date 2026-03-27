0x461580: sub     esp, 0Ch
0x461583: push    ebx
0x461584: push    ebp
0x461585: push    esi
0x461586: push    edi
0x461587: mov     edi, ecx
0x461589: lea     ebx, [edi+28h]
0x46158C: mov     ebp, ebx
0x46158E: test    ebp, ebp
0x461590: mov     [esp+1Ch+var_4], edi
0x461594: mov     [esp+1Ch+var_8], ebx
0x461598: jz      loc_461648
0x46159E: jmp     short loc_4615A4
0x4615A0: mov     edi, [esp+1Ch+var_4]
0x4615A4: cmp     dword ptr [ebp+4], 0
0x4615A8: jnz     short loc_4615B4
0x4615AA: cmp     dword ptr [ebp+0], 0
0x4615AE: jz      loc_461648
0x4615B4: mov     esi, [ebp+0]
0x4615B7: push    esi; a1
0x4615B8: call    TESForm_LookupByFormID
0x4615BD: add     esp, 4
0x4615C0: test    eax, eax
0x4615C2: jz      short loc_4615D0
0x4615C4: mov     ecx, ds:0B33A98h
0x4615CA: push    eax
0x4615CB: call    sub_449D20
0x4615D0: push    esi; a1
0x4615D1: call    TESForm_LookupByFormID
0x4615D6: add     esp, 4
0x4615D9: test    eax, eax
0x4615DB: jz      short loc_4615E7
0x4615DD: push    eax
0x4615DE: mov     ecx, edi
0x4615E0: call    sub_45C7A0
0x4615E5: jmp     short loc_46163D
0x4615E7: mov     eax, ds:0B33B00h
0x4615EC: mov     ecx, [eax+18h]
0x4615EF: mov     edi, [edi]
0x4615F1: shr     ecx, 0Ch
0x4615F4: test    cl, 1
0x4615F7: jnz     short loc_46163D
0x4615F9: lea     edx, [esp+1Ch+var_C]
0x4615FD: push    edx
0x4615FE: push    esi
0x4615FF: mov     ecx, edi
0x461601: mov     [esp+24h+var_C], 0
0x461609: call    NiTMap_GetAt
0x46160E: mov     ebx, [esp+1Ch+var_C]
0x461612: test    ebx, ebx
0x461614: jz      short loc_461639
0x461616: push    esi
0x461617: mov     ecx, edi
0x461619: call    NiTMap_RemoveAt
0x46161E: mov     eax, [ebx+4]
0x461621: test    eax, eax
0x461623: jz      short loc_461630
0x461625: push    eax; void *
0x461626: mov     ecx, offset FormHeap
0x46162B: call    MemoryHeap_Free_checked
0x461630: push    ebx
0x461631: call    FormHeapFree
0x461636: add     esp, 4
0x461639: mov     ebx, [esp+1Ch+var_8]
0x46163D: mov     ebp, [ebp+4]
0x461640: test    ebp, ebp
0x461642: jnz     loc_4615A0
0x461648: cmp     dword ptr [ebx+4], 0
0x46164C: jz      short loc_461666
0x46164E: mov     edi, edi
0x461650: mov     eax, [ebx+4]
0x461653: mov     esi, [eax+4]
0x461656: push    eax
0x461657: call    FormHeapFree
0x46165C: add     esp, 4
0x46165F: test    esi, esi
0x461661: mov     [ebx+4], esi
0x461664: jnz     short loc_461650
0x461666: pop     edi
0x461667: pop     esi
0x461668: pop     ebp
0x461669: mov     dword ptr [ebx], 0
0x46166F: pop     ebx
0x461670: add     esp, 0Ch
0x461673: retn
