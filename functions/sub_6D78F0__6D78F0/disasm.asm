0x6D78F0: sub     esp, 0Ch
0x6D78F3: push    ebx
0x6D78F4: push    ebp
0x6D78F5: push    esi
0x6D78F6: mov     esi, [esp+18h+arg_0]
0x6D78FA: push    edi
0x6D78FB: mov     edi, ecx
0x6D78FD: push    esi
0x6D78FE: mov     [esp+20h+var_8], edi
0x6D7902: call    sub_721730
0x6D7907: mov     eax, ds:0B3DA08h
0x6D790C: push    eax; ArgList
0x6D790D: call    TESOutput_PrintString
0x6D7912: movzx   ebx, word ptr [esi+0Ah]
0x6D7916: movzx   ecx, word ptr [esi+8]
0x6D791A: add     esp, 4
0x6D791D: cmp     ebx, ecx
0x6D791F: mov     [esp+1Ch+arg_0], eax
0x6D7923: jb      short loc_6D7933
0x6D7925: movzx   edx, word ptr [esi+0Eh]
0x6D7929: add     edx, ebx
0x6D792B: push    edx
0x6D792C: mov     ecx, esi
0x6D792E: call    NiTArray_SetSize
0x6D7933: lea     eax, [esp+1Ch+arg_0]
0x6D7937: push    eax
0x6D7938: push    ebx
0x6D7939: mov     ecx, esi
0x6D793B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D7940: mov     ecx, [edi+0Ch]
0x6D7943: push    ecx; int
0x6D7944: push    offset aM_uinumkeys; "m_uiNumKeys"
0x6D7949: call    TESOutput_PrintLabeledUnsignedInt
0x6D794E: movzx   ebx, word ptr [esi+0Ah]
0x6D7952: movzx   edx, word ptr [esi+8]
0x6D7956: add     esp, 8
0x6D7959: cmp     ebx, edx
0x6D795B: mov     [esp+1Ch+arg_0], eax
0x6D795F: jb      short loc_6D796F
0x6D7961: movzx   eax, word ptr [esi+0Eh]
0x6D7965: add     eax, ebx
0x6D7967: push    eax
0x6D7968: mov     ecx, esi
0x6D796A: call    NiTArray_SetSize
0x6D796F: lea     ecx, [esp+1Ch+arg_0]
0x6D7973: push    ecx
0x6D7974: push    ebx
0x6D7975: mov     ecx, esi
0x6D7977: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D797C: xor     ebp, ebp
0x6D797E: cmp     [edi+0Ch], ebp
0x6D7981: mov     [esp+1Ch+arg_0], ebp
0x6D7985: jbe     loc_6D7ABB
0x6D798B: jmp     short loc_6D7996
0x6D798D: align 10h
0x6D7990: mov     ebp, [esp+1Ch+arg_0]
0x6D7994: mov     edi, edx
0x6D7996: mov     edx, [edi+10h]
0x6D7999: fld     dword ptr [edx+ebp*8]
0x6D799C: push    ecx
0x6D799D: fstp    dword ptr [esp+20h+ArgList]
0x6D79A1: fld     dword ptr [esp+20h+ArgList]
0x6D79A5: fstp    [esp+20h+var_20]; float
0x6D79A8: push    offset aTime; "Time"
0x6D79AD: call    TESOutput_PrintLabeledFloat
0x6D79B2: mov     ebx, eax
0x6D79B4: mov     eax, [edi+10h]
0x6D79B7: mov     eax, [eax+ebp*8+4]
0x6D79BB: push    eax; int
0x6D79BC: push    offset aText_1; "Text"
0x6D79C1: mov     dword ptr [esp+2Ch+ArgList], ebx
0x6D79C5: call    TESOutput_PrintLabeledString
0x6D79CA: mov     ebp, eax
0x6D79CC: mov     eax, ebx
0x6D79CE: add     esp, 10h
0x6D79D1: mov     [esp+1Ch+var_4], ebp
0x6D79D5: lea     edx, [eax+1]
0x6D79D8: mov     cl, [eax]
0x6D79DA: add     eax, 1
0x6D79DD: test    cl, cl
0x6D79DF: jnz     short loc_6D79D8
0x6D79E1: sub     eax, edx
0x6D79E3: mov     ecx, eax
0x6D79E5: mov     eax, ebp
0x6D79E7: lea     edi, [eax+1]
0x6D79EA: lea     ebx, [ebx+0]
0x6D79F0: mov     dl, [eax]
0x6D79F2: add     eax, 1
0x6D79F5: test    dl, dl
0x6D79F7: jnz     short loc_6D79F0
0x6D79F9: sub     eax, edi
0x6D79FB: lea     edi, [eax+ecx+4]
0x6D79FF: push    edi; Size
0x6D7A00: call    FormHeapAlloc
0x6D7A05: mov     ecx, dword ptr [esp+20h+ArgList]
0x6D7A09: push    ebp
0x6D7A0A: push    ecx; ArgList
0x6D7A0B: push    offset aSS_11; "%s : %s"
0x6D7A10: mov     ebx, eax
0x6D7A12: push    edi; SizeInBytes
0x6D7A13: push    ebx; DstBuf
0x6D7A14: call    sub_6C5D40
0x6D7A19: push    ebx; int
0x6D7A1A: push    offset aTextkey; "TextKey"
0x6D7A1F: call    TESOutput_PrintLabeledString
0x6D7A24: movzx   edi, word ptr [esi+0Ah]
0x6D7A28: movzx   edx, word ptr [esi+8]
0x6D7A2C: add     esp, 20h
0x6D7A2F: cmp     edi, edx
0x6D7A31: mov     ebp, eax
0x6D7A33: jb      short loc_6D7A43
0x6D7A35: movzx   eax, word ptr [esi+0Eh]
0x6D7A39: add     eax, edi
0x6D7A3B: push    eax
0x6D7A3C: mov     ecx, esi
0x6D7A3E: call    NiTArray_SetSize
0x6D7A43: movzx   ecx, word ptr [esi+0Ah]
0x6D7A47: cmp     edi, ecx
0x6D7A49: jb      short loc_6D7A5D
0x6D7A4B: test    ebp, ebp
0x6D7A4D: lea     edx, [edi+1]
0x6D7A50: mov     [esi+0Ah], dx
0x6D7A54: jz      short loc_6D7A80
0x6D7A56: add     word ptr [esi+0Ch], 1
0x6D7A5B: jmp     short loc_6D7A80
0x6D7A5D: test    ebp, ebp
0x6D7A5F: jz      short loc_6D7A71
0x6D7A61: mov     eax, [esi+4]
0x6D7A64: cmp     dword ptr [eax+edi*4], 0
0x6D7A68: jnz     short loc_6D7A80
0x6D7A6A: add     word ptr [esi+0Ch], 1
0x6D7A6F: jmp     short loc_6D7A80
0x6D7A71: mov     ecx, [esi+4]
0x6D7A74: cmp     dword ptr [ecx+edi*4], 0
0x6D7A78: jz      short loc_6D7A80
0x6D7A7A: add     word ptr [esi+0Ch], 0FFFFh
0x6D7A80: mov     eax, dword ptr [esp+1Ch+ArgList]
0x6D7A84: mov     edx, [esi+4]
0x6D7A87: push    eax
0x6D7A88: mov     [edx+edi*4], ebp
0x6D7A8B: call    FormHeapFree
0x6D7A90: mov     ecx, [esp+20h+var_4]
0x6D7A94: push    ecx
0x6D7A95: call    FormHeapFree
0x6D7A9A: push    ebx
0x6D7A9B: call    FormHeapFree
0x6D7AA0: mov     eax, [esp+28h+arg_0]
0x6D7AA4: mov     edx, [esp+28h+var_8]
0x6D7AA8: add     eax, 1
0x6D7AAB: add     esp, 0Ch
0x6D7AAE: cmp     eax, [edx+0Ch]
0x6D7AB1: mov     [esp+1Ch+arg_0], eax
0x6D7AB5: jb      loc_6D7990
0x6D7ABB: pop     edi
0x6D7ABC: pop     esi
0x6D7ABD: pop     ebp
0x6D7ABE: pop     ebx
0x6D7ABF: add     esp, 0Ch
0x6D7AC2: retn    4
