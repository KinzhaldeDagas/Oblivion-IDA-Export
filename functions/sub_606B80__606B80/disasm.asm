0x606B80: push    ebx
0x606B81: push    esi
0x606B82: push    edi
0x606B83: mov     esi, ecx
0x606B85: call    sub_567D20
0x606B8A: mov     ecx, ds:0B33B00h
0x606B90: movzx   edi, ax
0x606B93: movzx   ebx, di
0x606B96: call    sub_45A170
0x606B9B: test    al, al
0x606B9D: jz      short loc_606BA2
0x606B9F: add     edi, 6
0x606BA2: mov     eax, [esi+3Ch]
0x606BA5: xor     ecx, ecx
0x606BA7: test    eax, eax
0x606BA9: jz      short loc_606BBF
0x606BAB: jmp     short loc_606BB0
0x606BAD: align 10h
0x606BB0: cmp     dword ptr [eax], 0
0x606BB3: jz      short loc_606BB8
0x606BB5: add     ecx, 1
0x606BB8: mov     eax, [eax+4]
0x606BBB: test    eax, eax
0x606BBD: jnz     short loc_606BB0
0x606BBF: cmp     byte ptr ds:0B05BACh, 0
0x606BC6: lea     eax, [ecx+edi]
0x606BC9: lea     edi, [eax+ecx*2+2]
0x606BCD: jz      short loc_606C45
0x606BCF: mov     ecx, ds:0B33B00h
0x606BD5: mov     esi, [ecx+84h]
0x606BDB: test    esi, esi
0x606BDD: jz      short loc_606C25
0x606BDF: mov     edx, [esi]
0x606BE1: push    edx; a1
0x606BE2: call    TESForm_LookupByFormID
0x606BE7: mov     ecx, [esi+5]
0x606BEA: mov     edx, [eax]
0x606BEC: add     esp, 4
0x606BEF: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606BF4: push    1F3h
0x606BF9: push    ecx
0x606BFA: mov     ecx, eax
0x606BFC: mov     eax, [edx+0D4h]
0x606C02: call    eax
0x606C04: mov     ecx, [esi]
0x606C06: push    eax
0x606C07: movzx   edx, bx
0x606C0A: movzx   eax, di
0x606C0D: push    ecx
0x606C0E: sub     eax, edx
0x606C10: push    eax; ArgList
0x606C11: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x606C16: call    sub_40FEC0
0x606C1B: add     esp, 1Ch
0x606C1E: mov     ax, di
0x606C21: pop     edi
0x606C22: pop     esi
0x606C23: pop     ebx
0x606C24: retn
0x606C25: movzx   ecx, bx
0x606C28: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606C2D: movzx   edx, di
0x606C30: push    1F3h
0x606C35: sub     edx, ecx
0x606C37: push    edx; ArgList
0x606C38: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x606C3D: call    sub_40FEC0
0x606C42: add     esp, 10h
0x606C45: mov     ax, di
0x606C48: pop     edi
0x606C49: pop     esi
0x606C4A: pop     ebx
0x606C4B: retn
