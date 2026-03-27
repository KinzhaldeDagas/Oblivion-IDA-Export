0x658BC0: mov     eax, [esp+arg_4]
0x658BC4: push    ebx
0x658BC5: mov     ebx, [esp+4+arg_0]
0x658BC9: push    ebp
0x658BCA: push    esi
0x658BCB: push    edi
0x658BCC: push    eax
0x658BCD: push    ebx
0x658BCE: mov     esi, ecx
0x658BD0: call    sub_647060
0x658BD5: mov     ecx, ds:0B33B00h
0x658BDB: movzx   edi, ax
0x658BDE: mov     [esp+10h+arg_4], edi
0x658BE2: movzx   ebp, di
0x658BE5: call    sub_45A170
0x658BEA: test    al, al
0x658BEC: jz      short loc_658BF1
0x658BEE: add     edi, 6
0x658BF1: add     edi, 4
0x658BF4: test    ebx, 100000h
0x658BFA: mov     [esp+10h+arg_4], edi
0x658BFE: jz      short loc_658C10
0x658C00: lea     ecx, [esi+94h]
0x658C06: call    AVCollection_GetSaveSize
0x658C0B: add     di, ax
0x658C0E: jmp     short loc_658C15
0x658C10: mov     di, word ptr [esp+10h+arg_4]
0x658C15: cmp     byte ptr ds:0B05BACh, 0
0x658C1C: jz      short loc_658C97
0x658C1E: mov     ecx, ds:0B33B00h
0x658C24: mov     esi, [ecx+84h]
0x658C2A: test    esi, esi
0x658C2C: jz      short loc_658C77
0x658C2E: mov     edx, [esi]
0x658C30: push    edx; a1
0x658C31: call    TESForm_LookupByFormID
0x658C36: mov     ecx, [esi+5]
0x658C39: mov     edx, [eax]
0x658C3B: add     esp, 4
0x658C3E: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658C43: push    230h
0x658C48: push    ecx
0x658C49: mov     ecx, eax
0x658C4B: mov     eax, [edx+0D4h]
0x658C51: call    eax
0x658C53: mov     ecx, [esi]
0x658C55: push    eax
0x658C56: movzx   edx, bp
0x658C59: movzx   eax, di
0x658C5C: push    ecx
0x658C5D: sub     eax, edx
0x658C5F: push    eax; ArgList
0x658C60: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x658C65: call    sub_40FEC0
0x658C6A: add     esp, 1Ch
0x658C6D: mov     ax, di
0x658C70: pop     edi
0x658C71: pop     esi
0x658C72: pop     ebp
0x658C73: pop     ebx
0x658C74: retn    8
0x658C77: movzx   ecx, bp
0x658C7A: push    offset a_AiMiddlelowpr; ".\\AI\\MiddleLowProcess.cpp"
0x658C7F: movzx   edx, di
0x658C82: push    230h
0x658C87: sub     edx, ecx
0x658C89: push    edx; ArgList
0x658C8A: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x658C8F: call    sub_40FEC0
0x658C94: add     esp, 10h
0x658C97: mov     ax, di
0x658C9A: pop     edi
0x658C9B: pop     esi
0x658C9C: pop     ebp
0x658C9D: pop     ebx
0x658C9E: retn    8
