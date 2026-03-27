0x68FCE0: mov     eax, [esp+arg_0]
0x68FCE4: push    ebx
0x68FCE5: push    esi
0x68FCE6: push    edi
0x68FCE7: push    eax
0x68FCE8: mov     esi, ecx
0x68FCEA: call    AssociatedItemEffect_GetSaveSize
0x68FCEF: mov     ecx, ds:0B33B00h
0x68FCF5: movzx   edi, ax
0x68FCF8: mov     [esp+0Ch+arg_0], edi
0x68FCFC: movzx   ebx, di
0x68FCFF: call    sub_45A170
0x68FD04: test    al, al
0x68FD06: jz      short loc_68FD0B
0x68FD08: add     edi, 6
0x68FD0B: mov     ecx, [esi+3Ch]
0x68FD0E: add     edi, 1
0x68FD11: test    ecx, ecx
0x68FD13: mov     [esp+0Ch+arg_0], edi
0x68FD17: jz      short loc_68FD23
0x68FD19: call    sub_485660
0x68FD1E: add     word ptr [esp+0Ch+arg_0], ax
0x68FD23: add     esi, 40h ; '@'
0x68FD26: mov     edi, 10h
0x68FD2B: jmp     short loc_68FD30
0x68FD2D: align 10h
0x68FD30: mov     ecx, [esi]
0x68FD32: add     [esp+0Ch+arg_0], 1
0x68FD37: test    ecx, ecx
0x68FD39: jz      short loc_68FD45
0x68FD3B: call    sub_485660
0x68FD40: add     word ptr [esp+0Ch+arg_0], ax
0x68FD45: add     esi, 4
0x68FD48: sub     edi, 1
0x68FD4B: jnz     short loc_68FD30
0x68FD4D: cmp     byte ptr ds:0B05BACh, 0
0x68FD54: jz      short loc_68FDCB
0x68FD56: mov     ecx, ds:0B33B00h
0x68FD5C: mov     esi, [ecx+84h]
0x68FD62: test    esi, esi
0x68FD64: jz      short loc_68FDA9
0x68FD66: mov     edx, [esi]
0x68FD68: push    edx; a1
0x68FD69: call    TESForm_LookupByFormID
0x68FD6E: mov     ecx, [esi+5]
0x68FD71: mov     edx, [eax]
0x68FD73: add     esp, 4
0x68FD76: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x68FD7B: push    2A5h
0x68FD80: push    ecx
0x68FD81: mov     ecx, eax
0x68FD83: mov     eax, [edx+0D4h]
0x68FD89: call    eax
0x68FD8B: mov     ecx, [esi]
0x68FD8D: push    eax
0x68FD8E: movzx   eax, word ptr [esp+1Ch+arg_0]
0x68FD93: movzx   edx, bx
0x68FD96: push    ecx
0x68FD97: sub     eax, edx
0x68FD99: push    eax; ArgList
0x68FD9A: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x68FD9F: call    sub_40FEC0
0x68FDA4: add     esp, 1Ch
0x68FDA7: jmp     short loc_68FDCB
0x68FDA9: movzx   edx, word ptr [esp+0Ch+arg_0]
0x68FDAE: movzx   ecx, bx
0x68FDB1: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x68FDB6: push    2A5h
0x68FDBB: sub     edx, ecx
0x68FDBD: push    edx; ArgList
0x68FDBE: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x68FDC3: call    sub_40FEC0
0x68FDC8: add     esp, 10h
0x68FDCB: mov     eax, ds:0B33B00h
0x68FDD0: mov     al, [eax+7Ch]
0x68FDD3: cmp     al, 41h ; 'A'
0x68FDD5: pop     edi
0x68FDD6: pop     esi
0x68FDD7: pop     ebx
0x68FDD8: jb      short loc_68FDDF
0x68FDDA: add     [esp+arg_0], 5
0x68FDDF: cmp     al, 6Bh ; 'k'
0x68FDE1: jb      short loc_68FDE8
0x68FDE3: add     [esp+arg_0], 1
0x68FDE8: mov     ax, word ptr [esp+arg_0]
0x68FDED: retn    4
