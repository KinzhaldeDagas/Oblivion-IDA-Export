0x96C3B0: push    esi
0x96C3B1: push    edi
0x96C3B2: mov     edi, dword ptr [esp+8+ArgList]
0x96C3B6: mov     eax, edi
0x96C3B8: lea     edx, [eax+1]
0x96C3BB: jmp     short loc_96C3C0
0x96C3BD: align 10h
0x96C3C0: mov     cl, [eax]
0x96C3C2: add     eax, 1
0x96C3C5: test    cl, cl
0x96C3C7: jnz     short loc_96C3C0
0x96C3C9: sub     eax, edx
0x96C3CB: lea     esi, [eax+0Ah]
0x96C3CE: push    esi; Size
0x96C3CF: call    FormHeapAlloc
0x96C3D4: push    edi; ArgList
0x96C3D5: push    offset aSBox_bv; "%s = BOX_BV"
0x96C3DA: push    esi; SizeInBytes
0x96C3DB: push    eax; DstBuf
0x96C3DC: mov     dword ptr [esp+1Ch+ArgList], eax
0x96C3E0: call    sub_6C5D40
0x96C3E5: mov     esi, [esp+1Ch+arg_4]
0x96C3E9: movzx   edi, word ptr [esi+0Ah]
0x96C3ED: movzx   eax, word ptr [esi+8]
0x96C3F1: add     esp, 14h
0x96C3F4: cmp     edi, eax
0x96C3F6: jb      short loc_96C406
0x96C3F8: movzx   ecx, word ptr [esi+0Eh]
0x96C3FC: add     ecx, edi
0x96C3FE: push    ecx
0x96C3FF: mov     ecx, esi
0x96C401: call    NiTArray_SetSize
0x96C406: lea     edx, [esp+8+ArgList]
0x96C40A: push    edx
0x96C40B: push    edi
0x96C40C: mov     ecx, esi
0x96C40E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x96C413: pop     edi
0x96C414: pop     esi
0x96C415: retn    8
