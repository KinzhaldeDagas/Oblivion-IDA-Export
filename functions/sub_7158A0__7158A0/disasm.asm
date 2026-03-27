0x7158A0: push    ebx
0x7158A1: mov     ebx, dword ptr [esp+4+ArgList]
0x7158A5: push    esi
0x7158A6: mov     eax, ebx
0x7158A8: push    edi
0x7158A9: lea     edx, [eax+1]
0x7158AC: lea     esp, [esp+0]
0x7158B0: mov     cl, [eax]
0x7158B2: add     eax, 1
0x7158B5: test    cl, cl
0x7158B7: jnz     short loc_7158B0
0x7158B9: sub     eax, edx
0x7158BB: lea     esi, [eax+0Ch]
0x7158BE: push    esi; Size
0x7158BF: call    FormHeapAlloc
0x7158C4: mov     edi, eax
0x7158C6: mov     eax, [esp+10h+arg_4]
0x7158CA: add     esp, 4
0x7158CD: sub     eax, 0
0x7158D0: jz      short loc_7158ED
0x7158D2: sub     eax, 1
0x7158D5: jnz     short loc_7158FD
0x7158D7: push    ebx; ArgList
0x7158D8: push    offset aSApp_init; "%s = APP_INIT"
0x7158DD: push    esi; SizeInBytes
0x7158DE: push    edi; DstBuf
0x7158DF: call    sub_6C5D40
0x7158E4: add     esp, 10h
0x7158E7: mov     eax, edi
0x7158E9: pop     edi
0x7158EA: pop     esi
0x7158EB: pop     ebx
0x7158EC: retn
0x7158ED: push    ebx; ArgList
0x7158EE: push    offset aSApp_time; "%s = APP_TIME"
0x7158F3: push    esi; SizeInBytes
0x7158F4: push    edi; DstBuf
0x7158F5: call    sub_6C5D40
0x7158FA: add     esp, 10h
0x7158FD: mov     eax, edi
0x7158FF: pop     edi
0x715900: pop     esi
0x715901: pop     ebx
0x715902: retn
