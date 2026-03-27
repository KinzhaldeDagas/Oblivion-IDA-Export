0x529BE0: push    ecx
0x529BE1: push    ebx
0x529BE2: mov     ebx, [esp+8+arg_0]
0x529BE6: push    ebp
0x529BE7: push    esi
0x529BE8: push    edi
0x529BE9: push    ebx
0x529BEA: mov     ebp, ecx
0x529BEC: call    TESForm_ModifiedFormSize
0x529BF1: mov     ecx, ds:0B33B00h
0x529BF7: movzx   esi, ax
0x529BFA: mov     di, si
0x529BFD: movzx   eax, di
0x529C00: mov     [esp+14h+arg_0], esi
0x529C04: mov     [esp+14h+var_4], eax
0x529C08: call    sub_45A170
0x529C0D: test    al, al
0x529C0F: jz      short loc_529C1B
0x529C11: add     esi, 6
0x529C14: mov     [esp+14h+arg_0], esi
0x529C18: mov     di, si
0x529C1B: test    bl, 4
0x529C1E: jz      short loc_529C2A
0x529C20: add     esi, 1
0x529C23: mov     [esp+14h+arg_0], esi
0x529C27: mov     di, si
0x529C2A: test    ebx, 10000000h
0x529C30: jz      short loc_529C76
0x529C32: lea     edx, [ebp+40h]
0x529C35: add     esi, 1
0x529C38: test    edx, edx
0x529C3A: mov     [esp+14h+arg_0], esi
0x529C3E: jz      short loc_529C71
0x529C40: mov     eax, [edx]
0x529C42: test    eax, eax
0x529C44: jz      short loc_529C66
0x529C46: add     esi, 2
0x529C49: xor     ecx, ecx
0x529C4B: add     eax, 4
0x529C4E: jz      short loc_529C5F
0x529C50: cmp     dword ptr [eax], 0
0x529C53: jz      short loc_529C58
0x529C55: add     ecx, 1
0x529C58: mov     eax, [eax+4]
0x529C5B: test    eax, eax
0x529C5D: jnz     short loc_529C50
0x529C5F: lea     eax, [ecx+esi]
0x529C62: lea     esi, [eax+ecx*4+1]
0x529C66: mov     edx, [edx+4]
0x529C69: test    edx, edx
0x529C6B: jnz     short loc_529C40
0x529C6D: mov     [esp+14h+arg_0], esi
0x529C71: mov     di, word ptr [esp+14h+arg_0]
0x529C76: test    ebx, 8000000h
0x529C7C: jz      short loc_529C89
0x529C7E: mov     ecx, [ebp+58h]
0x529C81: call    ScriptEventList_GetSaveSize?
0x529C86: add     di, ax
0x529C89: cmp     byte ptr ds:0B05BACh, 0
0x529C90: jz      short loc_529D10
0x529C92: mov     ecx, ds:0B33B00h
0x529C98: mov     esi, [ecx+84h]
0x529C9E: test    esi, esi
0x529CA0: jz      short loc_529CEE
0x529CA2: mov     edx, [esi]
0x529CA4: push    edx; a1
0x529CA5: call    TESForm_LookupByFormID
0x529CAA: mov     ecx, [esi+5]
0x529CAD: mov     edx, [eax]
0x529CAF: add     esp, 4
0x529CB2: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x529CB7: push    0C07h
0x529CBC: push    ecx
0x529CBD: mov     ecx, eax
0x529CBF: mov     eax, [edx+0D4h]
0x529CC5: call    eax
0x529CC7: movzx   edx, word ptr [esp+20h+var_4]
0x529CCC: mov     ecx, [esi]
0x529CCE: push    eax
0x529CCF: movzx   eax, di
0x529CD2: push    ecx
0x529CD3: sub     eax, edx
0x529CD5: push    eax; ArgList
0x529CD6: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x529CDB: call    sub_40FEC0
0x529CE0: add     esp, 1Ch
0x529CE3: mov     ax, di
0x529CE6: pop     edi
0x529CE7: pop     esi
0x529CE8: pop     ebp
0x529CE9: pop     ebx
0x529CEA: pop     ecx
0x529CEB: retn    4
0x529CEE: movzx   ecx, word ptr [esp+14h+var_4]
0x529CF3: push    offset a__TesSharedT_9; "..\\TES Shared\\TESQuest.cpp"
0x529CF8: movzx   edx, di
0x529CFB: push    0C07h
0x529D00: sub     edx, ecx
0x529D02: push    edx; ArgList
0x529D03: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x529D08: call    sub_40FEC0
0x529D0D: add     esp, 10h
0x529D10: mov     ax, di
0x529D13: pop     edi
0x529D14: pop     esi
0x529D15: pop     ebp
0x529D16: pop     ebx
0x529D17: pop     ecx
0x529D18: retn    4
