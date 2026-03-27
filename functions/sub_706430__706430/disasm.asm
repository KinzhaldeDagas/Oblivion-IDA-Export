0x706430: push    ebx
0x706431: mov     ebx, dword ptr [esp+4+ArgList]
0x706435: push    esi
0x706436: mov     eax, ebx
0x706438: push    edi
0x706439: lea     edx, [eax+1]
0x70643C: lea     esp, [esp+0]
0x706440: mov     cl, [eax]
0x706442: add     eax, 1
0x706445: test    cl, cl
0x706447: jnz     short loc_706440
0x706449: sub     eax, edx
0x70644B: lea     esi, [eax+1Ah]
0x70644E: push    esi; Size
0x70644F: call    FormHeapAlloc
0x706454: mov     edi, eax
0x706456: mov     eax, [esp+10h+arg_4]
0x70645A: add     esp, 4
0x70645D: sub     eax, 0
0x706460: jz      short loc_70647D
0x706462: sub     eax, 1
0x706465: jnz     short loc_70648D
0x706467: push    ebx; ArgList
0x706468: push    offset aSLighting_e_a_; "%s = LIGHTING_E_A_D"
0x70646D: push    esi; SizeInBytes
0x70646E: push    edi; DstBuf
0x70646F: call    sub_6C5D40
0x706474: add     esp, 10h
0x706477: mov     eax, edi
0x706479: pop     edi
0x70647A: pop     esi
0x70647B: pop     ebx
0x70647C: retn
0x70647D: push    ebx; ArgList
0x70647E: push    offset aSLighting_e; "%s = LIGHTING_E"
0x706483: push    esi; SizeInBytes
0x706484: push    edi; DstBuf
0x706485: call    sub_6C5D40
0x70648A: add     esp, 10h
0x70648D: mov     eax, edi
0x70648F: pop     edi
0x706490: pop     esi
0x706491: pop     ebx
0x706492: retn
