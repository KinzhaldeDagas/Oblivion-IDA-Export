0x95F770: push    esi
0x95F771: push    edi
0x95F772: mov     edi, dword ptr [esp+8+ArgList]
0x95F776: mov     eax, edi
0x95F778: lea     edx, [eax+1]
0x95F77B: jmp     short loc_95F780
0x95F77D: align 10h
0x95F780: mov     cl, [eax]
0x95F782: add     eax, 1
0x95F785: test    cl, cl
0x95F787: jnz     short loc_95F780
0x95F789: sub     eax, edx
0x95F78B: lea     esi, [eax+10h]
0x95F78E: push    esi; Size
0x95F78F: call    FormHeapAlloc
0x95F794: push    edi; ArgList
0x95F795: push    offset aSHalfspace_bv; "%s = HALFSPACE_BV"
0x95F79A: push    esi; SizeInBytes
0x95F79B: push    eax; DstBuf
0x95F79C: mov     dword ptr [esp+1Ch+ArgList], eax
0x95F7A0: call    sub_6C5D40
0x95F7A5: mov     esi, [esp+1Ch+arg_4]
0x95F7A9: movzx   edi, word ptr [esi+0Ah]
0x95F7AD: movzx   eax, word ptr [esi+8]
0x95F7B1: add     esp, 14h
0x95F7B4: cmp     edi, eax
0x95F7B6: jb      short loc_95F7C6
0x95F7B8: movzx   ecx, word ptr [esi+0Eh]
0x95F7BC: add     ecx, edi
0x95F7BE: push    ecx
0x95F7BF: mov     ecx, esi
0x95F7C1: call    NiTArray_SetSize
0x95F7C6: lea     edx, [esp+8+ArgList]
0x95F7CA: push    edx
0x95F7CB: push    edi
0x95F7CC: mov     ecx, esi
0x95F7CE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x95F7D3: pop     edi
0x95F7D4: pop     esi
0x95F7D5: retn    8
