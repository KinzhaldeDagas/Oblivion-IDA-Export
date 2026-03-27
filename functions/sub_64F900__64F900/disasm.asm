0x64F900: push    ebx
0x64F901: push    esi
0x64F902: mov     esi, ecx
0x64F904: mov     eax, [esi]
0x64F906: mov     edx, [eax+184h]
0x64F90C: call    edx
0x64F90E: mov     ebx, eax
0x64F910: test    ebx, ebx
0x64F912: jz      loc_64FBE0
0x64F918: mov     ecx, [ebx+28h]
0x64F91B: test    ecx, ecx
0x64F91D: push    ebp
0x64F91E: mov     ebp, 1
0x64F923: jz      short loc_64F938
0x64F925: call    sub_452A60
0x64F92A: test    eax, eax
0x64F92C: jz      short loc_64F938
0x64F92E: mov     ecx, [ebx+28h]
0x64F931: call    sub_452A60
0x64F936: mov     ebp, eax
0x64F938: cmp     byte ptr [ebx+20h], 0
0x64F93C: push    edi
0x64F93D: mov     edi, [ebx+28h]
0x64F940: jnz     loc_64FA50
0x64F946: test    edi, edi
0x64F948: jz      loc_64FA50
0x64F94E: mov     ecx, edi
0x64F950: call    sub_569E80
0x64F955: cmp     eax, 15h
0x64F958: jz      short loc_64F96A
0x64F95A: mov     ecx, edi
0x64F95C: call    sub_569E80
0x64F961: cmp     eax, 16h
0x64F964: jnz     loc_64FA50
0x64F96A: mov     eax, [esi]
0x64F96C: mov     edi, [esp+10h+arg_0]
0x64F970: mov     edx, [eax+51Ch]
0x64F976: push    1
0x64F978: push    edi
0x64F979: mov     ecx, esi
0x64F97B: call    edx
0x64F97D: cmp     dword ptr [esi+4], 1
0x64F981: jle     loc_64FBDE
0x64F987: cmp     dword ptr [esi+40h], 0
0x64F98B: lea     ebx, [esi+3Ch]
0x64F98E: jnz     short loc_64F995
0x64F990: cmp     dword ptr [ebx], 0
0x64F993: jz      short loc_64F9C0
0x64F995: mov     eax, [esi]
0x64F997: mov     edx, [eax+188h]
0x64F99D: push    0FFFFFFFFh
0x64F99F: push    edi
0x64F9A0: mov     ecx, esi
0x64F9A2: call    edx
0x64F9A4: mov     eax, [ebx]
0x64F9A6: push    eax
0x64F9A7: mov     ecx, ebx
0x64F9A9: mov     [esi+44h], eax
0x64F9AC: call    BSSimpleList_Remove
0x64F9B1: mov     eax, [esi+44h]
0x64F9B4: mov     ecx, [eax]
0x64F9B6: pop     edi
0x64F9B7: pop     ebp
0x64F9B8: mov     [esi+2Ch], ecx
0x64F9BB: pop     esi
0x64F9BC: pop     ebx
0x64F9BD: retn    4
0x64F9C0: mov     edx, [esi]
0x64F9C2: mov     eax, [edx+188h]
0x64F9C8: push    1
0x64F9CA: push    edi
0x64F9CB: mov     ecx, esi
0x64F9CD: call    eax
0x64F9CF: mov     ecx, edi
0x64F9D1: call    sub_5E32D0
0x64F9D6: mov     edx, [edi]
0x64F9D8: test    al, al
0x64F9DA: mov     eax, [edx+170h]
0x64F9E0: push    0; int
0x64F9E2: mov     ecx, edi
0x64F9E4: jz      short loc_64FA1C
0x64F9E6: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64F9EB: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64F9F0: push    0; int
0x64F9F2: call    eax
0x64F9F4: push    eax; void *
0x64F9F5: call    OblivionDynamicCast
0x64F9FA: add     esp, 14h
0x64F9FD: test    eax, eax
0x64F9FF: jz      loc_64FBDE
0x64FA05: push    1; char
0x64FA07: push    0; int
0x64FA09: push    1; int
0x64FA0B: push    1; int
0x64FA0D: push    edi; int
0x64FA0E: mov     ecx, eax; int
0x64FA10: call    sub_5227A0
0x64FA15: pop     edi
0x64FA16: pop     ebp
0x64FA17: pop     esi
0x64FA18: pop     ebx
0x64FA19: retn    4
0x64FA1C: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x64FA21: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64FA26: push    0; int
0x64FA28: call    eax
0x64FA2A: push    eax; void *
0x64FA2B: call    OblivionDynamicCast
0x64FA30: add     esp, 14h
0x64FA33: test    eax, eax
0x64FA35: jz      loc_64FBDE
0x64FA3B: push    1
0x64FA3D: push    1
0x64FA3F: push    1
0x64FA41: push    edi
0x64FA42: mov     ecx, eax
0x64FA44: call    sub_51E240
0x64FA49: pop     edi
0x64FA4A: pop     ebp
0x64FA4B: pop     esi
0x64FA4C: pop     ebx
0x64FA4D: retn    4
0x64FA50: mov     edx, [esi]
0x64FA52: mov     edi, [esp+10h+arg_0]
0x64FA56: mov     eax, [edx+554h]
0x64FA5C: push    ebp
0x64FA5D: push    edi
0x64FA5E: mov     ecx, esi
0x64FA60: call    eax
0x64FA62: test    al, al
0x64FA64: jz      short loc_64FAA0
0x64FA66: mov     edx, [esi]
0x64FA68: mov     eax, [edx+194h]
0x64FA6E: push    edi
0x64FA6F: mov     ecx, esi
0x64FA71: call    eax
0x64FA73: cmp     dword ptr [esi+0C0h], 0
0x64FA7A: jz      loc_64FB94
0x64FA80: cmp     dword ptr [ebx+18h], 1Ah
0x64FA84: mov     edx, [esi]
0x64FA86: mov     eax, [edx+188h]
0x64FA8C: mov     ecx, esi
0x64FA8E: jnz     loc_64FBD9
0x64FA94: push    2
0x64FA96: push    edi
0x64FA97: call    eax
0x64FA99: pop     edi
0x64FA9A: pop     ebp
0x64FA9B: pop     esi
0x64FA9C: pop     ebx
0x64FA9D: retn    4
0x64FAA0: mov     eax, [esi+2Ch]
0x64FAA3: test    eax, eax
0x64FAA5: jz      short loc_64FABB
0x64FAA7: mov     eax, [eax+8]
0x64FAAA: mov     ecx, eax
0x64FAAC: shr     ecx, 5
0x64FAAF: test    cl, 1
0x64FAB2: jnz     short loc_64FABB
0x64FAB4: shr     eax, 0Bh
0x64FAB7: test    al, 1
0x64FAB9: jz      short loc_64FAC8
0x64FABB: mov     edx, [esi]
0x64FABD: mov     eax, [edx+558h]
0x64FAC3: push    edi
0x64FAC4: mov     ecx, esi
0x64FAC6: call    eax
0x64FAC8: mov     ecx, [esi+2Ch]
0x64FACB: test    ecx, ecx
0x64FACD: jz      loc_64FBCF
0x64FAD3: mov     edx, [ecx]
0x64FAD5: mov     eax, [edx+190h]
0x64FADB: call    eax
0x64FADD: test    al, al
0x64FADF: mov     eax, [esi+44h]
0x64FAE2: jz      short loc_64FB07
0x64FAE4: test    eax, eax
0x64FAE6: jz      short loc_64FB4C
0x64FAE8: cmp     dword ptr [eax+1Ch], 4
0x64FAEC: mov     edx, [esi]
0x64FAEE: push    edi
0x64FAEF: mov     ecx, esi
0x64FAF1: jnz     short loc_64FAFD
0x64FAF3: mov     eax, [edx+580h]
0x64FAF9: call    eax
0x64FAFB: jmp     short loc_64FB4C
0x64FAFD: mov     eax, [edx+578h]
0x64FB03: call    eax
0x64FB05: jmp     short loc_64FB4C
0x64FB07: test    eax, eax
0x64FB09: jz      short loc_64FB24
0x64FB0B: cmp     dword ptr [eax+1Ch], 3
0x64FB0F: mov     edx, [esi]
0x64FB11: mov     ecx, esi
0x64FB13: jnz     short loc_64FB20
0x64FB15: mov     eax, [edx+57Ch]
0x64FB1B: push    edi
0x64FB1C: call    eax
0x64FB1E: jmp     short loc_64FB4C
0x64FB20: push    0
0x64FB22: jmp     short loc_64FB43
0x64FB24: mov     ecx, [ebx+28h]
0x64FB27: test    ecx, ecx
0x64FB29: jz      loc_64FBCF
0x64FB2F: call    sub_569E60
0x64FB34: cmp     eax, [esi+2Ch]
0x64FB37: jnz     loc_64FBCF
0x64FB3D: mov     edx, [esi]
0x64FB3F: push    1
0x64FB41: mov     ecx, esi
0x64FB43: mov     eax, [edx+51Ch]
0x64FB49: push    edi
0x64FB4A: call    eax
0x64FB4C: mov     ecx, edi; this
0x64FB4E: call    Actor__GetProcessLevel
0x64FB53: cmp     eax, 1
0x64FB56: jnz     loc_64FBDE
0x64FB5C: mov     ecx, edi
0x64FB5E: call    MobileObject_GetProcessLevel
0x64FB63: cmp     eax, 1
0x64FB66: jnz     short loc_64FBDE
0x64FB68: mov     edx, [esi]
0x64FB6A: mov     eax, [edx+554h]
0x64FB70: push    ebp
0x64FB71: push    edi
0x64FB72: mov     ecx, esi
0x64FB74: call    eax
0x64FB76: test    al, al
0x64FB78: jz      short loc_64FBDE
0x64FB7A: mov     edx, [esi]
0x64FB7C: mov     eax, [edx+194h]
0x64FB82: push    edi
0x64FB83: mov     ecx, esi
0x64FB85: call    eax
0x64FB87: cmp     dword ptr [esi+0C0h], 0
0x64FB8E: jnz     loc_64FA80
0x64FB94: fld     dword ptr ds:0A30634h
0x64FB9A: push    ecx
0x64FB9B: fstp    [esp+14h+var_14]; float
0x64FB9E: push    0; char
0x64FBA0: push    edi; int
0x64FBA1: mov     ecx, ebx
0x64FBA3: call    sub_566DC0
0x64FBA8: test    al, al
0x64FBAA: jnz     loc_64FA80
0x64FBB0: cmp     byte ptr [ebx+20h], 2
0x64FBB4: jz      loc_64FA80
0x64FBBA: mov     edx, [esi]
0x64FBBC: mov     eax, [edx+17Ch]
0x64FBC2: push    0
0x64FBC4: mov     ecx, esi
0x64FBC6: call    eax
0x64FBC8: pop     edi
0x64FBC9: pop     ebp
0x64FBCA: pop     esi
0x64FBCB: pop     ebx
0x64FBCC: retn    4
0x64FBCF: mov     edx, [esi]
0x64FBD1: mov     eax, [edx+188h]
0x64FBD7: mov     ecx, esi
0x64FBD9: push    1
0x64FBDB: push    edi
0x64FBDC: call    eax
0x64FBDE: pop     edi
0x64FBDF: pop     ebp
0x64FBE0: pop     esi
0x64FBE1: pop     ebx
0x64FBE2: retn    4
