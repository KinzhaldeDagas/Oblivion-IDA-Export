0x70F9B0: push    ebx
0x70F9B1: mov     ebx, dword ptr [esp+4+ArgList]
0x70F9B5: push    esi
0x70F9B6: mov     eax, ebx
0x70F9B8: push    edi
0x70F9B9: lea     edx, [eax+1]
0x70F9BC: lea     esp, [esp+0]
0x70F9C0: mov     cl, [eax]
0x70F9C2: add     eax, 1
0x70F9C5: test    cl, cl
0x70F9C7: jnz     short loc_70F9C0
0x70F9C9: sub     eax, edx
0x70F9CB: lea     esi, [eax+5]
0x70F9CE: push    esi; Size
0x70F9CF: call    FormHeapAlloc
0x70F9D4: mov     edi, eax
0x70F9D6: movsx   eax, [esp+10h+arg_4]
0x70F9DB: push    eax
0x70F9DC: push    ebx; ArgList
0x70F9DD: push    offset aSC; "%s = %c"
0x70F9E2: push    esi; SizeInBytes
0x70F9E3: push    edi; DstBuf
0x70F9E4: call    sub_6C5D40
0x70F9E9: add     esp, 18h
0x70F9EC: mov     eax, edi
0x70F9EE: pop     edi
0x70F9EF: pop     esi
0x70F9F0: pop     ebx
0x70F9F1: retn
