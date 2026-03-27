0x716830: sub     esp, 8
0x716833: push    ebx
0x716834: push    esi
0x716835: mov     esi, [esp+10h+arg_0]
0x716839: push    edi
0x71683A: push    esi
0x71683B: mov     edi, ecx
0x71683D: call    sub_72FD30
0x716842: mov     eax, ds:0B3FCB8h
0x716847: push    eax; ArgList
0x716848: call    TESOutput_PrintString
0x71684D: movzx   ebx, word ptr [esi+0Ah]
0x716851: movzx   ecx, word ptr [esi+8]
0x716855: add     esp, 4
0x716858: cmp     ebx, ecx
0x71685A: mov     [esp+14h+arg_0], eax
0x71685E: jb      short loc_71686E
0x716860: movzx   edx, word ptr [esi+0Eh]
0x716864: add     edx, ebx
0x716866: push    edx
0x716867: mov     ecx, esi
0x716869: call    NiTArray_SetSize
0x71686E: lea     eax, [esp+14h+arg_0]
0x716872: push    eax
0x716873: push    ebx
0x716874: mov     ecx, esi
0x716876: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x71687B: push    60h ; '`'; Size
0x71687D: call    FormHeapAlloc
0x716882: mov     ecx, [edi+1Ch]
0x716885: mov     ecx, [ecx+8]
0x716888: add     esp, 4
0x71688B: test    ecx, ecx
0x71688D: mov     [esp+14h+arg_0], eax
0x716891: jnz     short loc_716898
0x716893: mov     ecx, offset aUnknown; "UNKNOWN"
0x716898: push    ecx
0x716899: push    offset aM_pksceneS; "m_pkScene = %s"
0x71689E: push    eax
0x71689F: call    __sprintf
0x7168A4: movzx   ebx, word ptr [esi+0Ah]
0x7168A8: movzx   edx, word ptr [esi+8]
0x7168AC: add     esp, 0Ch
0x7168AF: cmp     ebx, edx
0x7168B1: jb      short loc_7168C1
0x7168B3: movzx   eax, word ptr [esi+0Eh]
0x7168B7: add     eax, ebx
0x7168B9: push    eax
0x7168BA: mov     ecx, esi
0x7168BC: call    NiTArray_SetSize
0x7168C1: lea     ecx, [esp+14h+arg_0]
0x7168C5: push    ecx
0x7168C6: push    ebx
0x7168C7: mov     ecx, esi
0x7168C9: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7168CE: cmp     dword ptr [edi+14h], 0
0x7168D2: jz      loc_7169B1
0x7168D8: mov     ecx, [edi+0Ch]
0x7168DB: push    ebp
0x7168DC: lea     ebp, [edi+8]
0x7168DF: xor     eax, eax
0x7168E1: test    ecx, ecx
0x7168E3: jbe     short loc_716903
0x7168E5: mov     edi, [ebp+8]
0x7168E8: mov     edx, edi
0x7168EA: lea     ebx, [ebx+0]
0x7168F0: cmp     dword ptr [edx], 0
0x7168F3: jnz     loc_716977
0x7168F9: add     eax, 1
0x7168FC: add     edx, 4
0x7168FF: cmp     eax, ecx
0x716901: jb      short loc_7168F0
0x716903: xor     eax, eax
0x716905: test    eax, eax
0x716907: mov     [esp+18h+arg_0], eax
0x71690B: jz      loc_7169B0
0x716911: lea     edx, [esp+18h+var_4]
0x716915: push    edx
0x716916: lea     eax, [esp+1Ch+var_8]
0x71691A: push    eax
0x71691B: lea     ecx, [esp+20h+arg_0]
0x71691F: push    ecx
0x716920: mov     ecx, ebp
0x716922: call    sub_452600
0x716927: push    60h ; '`'; Size
0x716929: call    FormHeapAlloc
0x71692E: mov     edx, [esp+1Ch+var_8]
0x716932: push    edx
0x716933: mov     ebx, eax
0x716935: push    offset aS; "%s"
0x71693A: push    ebx
0x71693B: call    __sprintf
0x716940: movzx   edi, word ptr [esi+0Ah]
0x716944: movzx   eax, word ptr [esi+8]
0x716948: add     esp, 10h
0x71694B: cmp     edi, eax
0x71694D: jb      short loc_71695D
0x71694F: movzx   ecx, word ptr [esi+0Eh]
0x716953: add     ecx, edi
0x716955: push    ecx
0x716956: mov     ecx, esi
0x716958: call    NiTArray_SetSize
0x71695D: movzx   edx, word ptr [esi+0Ah]
0x716961: cmp     edi, edx
0x716963: jb      short loc_71697C
0x716965: test    ebx, ebx
0x716967: lea     eax, [edi+1]
0x71696A: mov     [esi+0Ah], ax
0x71696E: jz      short loc_71699F
0x716970: add     word ptr [esi+0Ch], 1
0x716975: jmp     short loc_71699F
0x716977: mov     eax, [edi+eax*4]
0x71697A: jmp     short loc_716905
0x71697C: test    ebx, ebx
0x71697E: jz      short loc_716990
0x716980: mov     ecx, [esi+4]
0x716983: cmp     dword ptr [ecx+edi*4], 0
0x716987: jnz     short loc_71699F
0x716989: add     word ptr [esi+0Ch], 1
0x71698E: jmp     short loc_71699F
0x716990: mov     edx, [esi+4]
0x716993: cmp     dword ptr [edx+edi*4], 0
0x716997: jz      short loc_71699F
0x716999: add     word ptr [esi+0Ch], 0FFFFh
0x71699F: cmp     [esp+18h+arg_0], 0
0x7169A4: mov     eax, [esi+4]
0x7169A7: mov     [eax+edi*4], ebx
0x7169AA: jnz     loc_716911
0x7169B0: pop     ebp
0x7169B1: pop     edi
0x7169B2: pop     esi
0x7169B3: pop     ebx
0x7169B4: add     esp, 8
0x7169B7: retn    4
