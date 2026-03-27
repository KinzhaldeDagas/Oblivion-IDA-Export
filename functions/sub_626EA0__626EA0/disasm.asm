0x626EA0: push    ebx
0x626EA1: push    esi
0x626EA2: push    edi
0x626EA3: mov     esi, ecx
0x626EA5: call    sub_567D20
0x626EAA: mov     ecx, ds:0B33B00h
0x626EB0: movzx   edi, ax
0x626EB3: movzx   ebx, di
0x626EB6: call    sub_45A170
0x626EBB: test    al, al
0x626EBD: jz      short loc_626EC2
0x626EBF: add     edi, 6
0x626EC2: lea     eax, [esi+54h]
0x626EC5: xor     ecx, ecx
0x626EC7: test    eax, eax
0x626EC9: jz      short loc_626EDF
0x626ECB: jmp     short loc_626ED0
0x626ECD: align 10h
0x626ED0: cmp     dword ptr [eax], 0
0x626ED3: jz      short loc_626ED8
0x626ED5: add     ecx, 1
0x626ED8: mov     eax, [eax+4]
0x626EDB: test    eax, eax
0x626EDD: jnz     short loc_626ED0
0x626EDF: cmp     byte ptr ds:0B05BACh, 0
0x626EE6: lea     edi, [edi+ecx*4+1Fh]
0x626EEA: jz      short loc_626F61
0x626EEC: mov     eax, ds:0B33B00h
0x626EF1: mov     esi, [eax+84h]
0x626EF7: test    esi, esi
0x626EF9: jz      short loc_626F41
0x626EFB: mov     ecx, [esi]
0x626EFD: push    ecx; a1
0x626EFE: call    TESForm_LookupByFormID
0x626F03: mov     edx, [esi+5]
0x626F06: add     esp, 4
0x626F09: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x626F0E: push    1D6h
0x626F13: push    edx
0x626F14: mov     edx, [eax]
0x626F16: mov     ecx, eax
0x626F18: mov     eax, [edx+0D4h]
0x626F1E: call    eax
0x626F20: mov     ecx, [esi]
0x626F22: push    eax
0x626F23: movzx   edx, bx
0x626F26: movzx   eax, di
0x626F29: push    ecx
0x626F2A: sub     eax, edx
0x626F2C: push    eax; ArgList
0x626F2D: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x626F32: call    sub_40FEC0
0x626F37: add     esp, 1Ch
0x626F3A: mov     ax, di
0x626F3D: pop     edi
0x626F3E: pop     esi
0x626F3F: pop     ebx
0x626F40: retn
0x626F41: movzx   ecx, bx
0x626F44: push    offset a_AiFleepackage; ".\\AI\\FleePackage.cpp"
0x626F49: movzx   edx, di
0x626F4C: push    1D6h
0x626F51: sub     edx, ecx
0x626F53: push    edx; ArgList
0x626F54: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x626F59: call    sub_40FEC0
0x626F5E: add     esp, 10h
0x626F61: mov     ax, di
0x626F64: pop     edi
0x626F65: pop     esi
0x626F66: pop     ebx
0x626F67: retn
