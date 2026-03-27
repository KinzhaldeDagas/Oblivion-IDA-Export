0x6B75B0: push    ecx
0x6B75B1: push    esi
0x6B75B2: mov     esi, ecx
0x6B75B4: mov     ecx, ds:0B33B00h
0x6B75BA: push    edi
0x6B75BB: xor     edi, edi
0x6B75BD: call    sub_45A170
0x6B75C2: test    al, al
0x6B75C4: jz      short loc_6B75CB
0x6B75C6: mov     edi, 6
0x6B75CB: add     edi, 2
0x6B75CE: test    esi, esi
0x6B75D0: mov     [esp+0Ch+var_4], edi
0x6B75D4: jz      short loc_6B75F4
0x6B75D6: cmp     dword ptr [esi+4], 0
0x6B75DA: jnz     short loc_6B75E1
0x6B75DC: cmp     dword ptr [esi], 0
0x6B75DF: jz      short loc_6B75F4
0x6B75E1: mov     ecx, [esi]
0x6B75E3: call    sub_6B7CF0
0x6B75E8: mov     esi, [esi+4]
0x6B75EB: add     word ptr [esp+0Ch+var_4], ax
0x6B75F0: test    esi, esi
0x6B75F2: jnz     short loc_6B75D6
0x6B75F4: add     [esp+0Ch+var_4], 2
0x6B75F9: cmp     byte ptr ds:0B05BACh, 0
0x6B7600: jz      short loc_6B767E
0x6B7602: mov     eax, ds:0B33B00h
0x6B7607: mov     esi, [eax+84h]
0x6B760D: test    esi, esi
0x6B760F: jz      short loc_6B7657
0x6B7611: mov     ecx, [esi]
0x6B7613: push    ecx; a1
0x6B7614: call    TESForm_LookupByFormID
0x6B7619: mov     edx, [esi+5]
0x6B761C: add     esp, 4
0x6B761F: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B7624: push    0BEh ; '¾'
0x6B7629: push    edx
0x6B762A: mov     edx, [eax]
0x6B762C: mov     ecx, eax
0x6B762E: mov     eax, [edx+0D4h]
0x6B7634: call    eax
0x6B7636: mov     ecx, [esi]
0x6B7638: mov     si, word ptr [esp+18h+var_4]
0x6B763D: push    eax
0x6B763E: movzx   edx, si
0x6B7641: push    ecx
0x6B7642: push    edx; ArgList
0x6B7643: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x6B7648: call    sub_40FEC0
0x6B764D: add     esp, 1Ch
0x6B7650: pop     edi
0x6B7651: mov     ax, si
0x6B7654: pop     esi
0x6B7655: pop     ecx
0x6B7656: retn
0x6B7657: mov     si, word ptr [esp+0Ch+var_4]
0x6B765C: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B7661: movzx   eax, si
0x6B7664: push    0BEh ; '¾'
0x6B7669: push    eax; ArgList
0x6B766A: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x6B766F: call    sub_40FEC0
0x6B7674: add     esp, 10h
0x6B7677: pop     edi
0x6B7678: mov     ax, si
0x6B767B: pop     esi
0x6B767C: pop     ecx
0x6B767D: retn
0x6B767E: mov     ax, word ptr [esp+0Ch+var_4]
0x6B7683: pop     edi
0x6B7684: pop     esi
0x6B7685: pop     ecx
0x6B7686: retn
