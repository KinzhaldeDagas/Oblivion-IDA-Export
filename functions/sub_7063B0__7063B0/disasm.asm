0x7063B0: push    ebx
0x7063B1: mov     ebx, dword ptr [esp+4+ArgList]
0x7063B5: push    esi
0x7063B6: mov     eax, ebx
0x7063B8: push    edi
0x7063B9: lea     edx, [eax+1]
0x7063BC: lea     esp, [esp+0]
0x7063C0: mov     cl, [eax]
0x7063C2: add     eax, 1
0x7063C5: test    cl, cl
0x7063C7: jnz     short loc_7063C0
0x7063C9: sub     eax, edx
0x7063CB: lea     edi, [eax+1Ah]
0x7063CE: push    edi; Size
0x7063CF: call    FormHeapAlloc
0x7063D4: mov     esi, eax
0x7063D6: mov     eax, [esp+10h+arg_4]
0x7063DA: add     esp, 4
0x7063DD: sub     eax, 0
0x7063E0: jz      short loc_706418
0x7063E2: sub     eax, 1
0x7063E5: jz      short loc_706402
0x7063E7: sub     eax, 1
0x7063EA: jnz     short loc_706428
0x7063EC: push    ebx; ArgList
0x7063ED: push    offset aSSource_amb_di; "%s = SOURCE_AMB_DIFF"
0x7063F2: push    edi; SizeInBytes
0x7063F3: push    esi; DstBuf
0x7063F4: call    sub_6C5D40
0x7063F9: add     esp, 10h
0x7063FC: pop     edi
0x7063FD: mov     eax, esi
0x7063FF: pop     esi
0x706400: pop     ebx
0x706401: retn
0x706402: push    ebx; ArgList
0x706403: push    offset aSSource_emissi; "%s = SOURCE_EMISSIVE"
0x706408: push    edi; SizeInBytes
0x706409: push    esi; DstBuf
0x70640A: call    sub_6C5D40
0x70640F: add     esp, 10h
0x706412: pop     edi
0x706413: mov     eax, esi
0x706415: pop     esi
0x706416: pop     ebx
0x706417: retn
0x706418: push    ebx; ArgList
0x706419: push    offset aSSource_ignore; "%s = SOURCE_IGNORE"
0x70641E: push    edi; SizeInBytes
0x70641F: push    esi; DstBuf
0x706420: call    sub_6C5D40
0x706425: add     esp, 10h
0x706428: pop     edi
0x706429: mov     eax, esi
0x70642B: pop     esi
0x70642C: pop     ebx
0x70642D: retn
