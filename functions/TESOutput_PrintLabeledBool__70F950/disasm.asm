0x70F950: push    ebx
0x70F951: mov     ebx, dword ptr [esp+4+ArgList]
0x70F955: push    esi
0x70F956: mov     eax, ebx
0x70F958: push    edi
0x70F959: lea     edx, [eax+1]
0x70F95C: lea     esp, [esp+0]
0x70F960: mov     cl, [eax]
0x70F962: add     eax, 1
0x70F965: test    cl, cl
0x70F967: jnz     short loc_70F960
0x70F969: sub     eax, edx
0x70F96B: lea     esi, [eax+9]
0x70F96E: push    esi; Size
0x70F96F: call    FormHeapAlloc
0x70F974: add     esp, 4
0x70F977: cmp     [esp+0Ch+arg_4], 0
0x70F97C: mov     edi, eax
0x70F97E: push    ebx; ArgList
0x70F97F: jz      short loc_70F996
0x70F981: push    offset aSTrue; "%s = true"
0x70F986: push    esi; SizeInBytes
0x70F987: push    edi; DstBuf
0x70F988: call    sub_6C5D40
0x70F98D: add     esp, 10h
0x70F990: mov     eax, edi
0x70F992: pop     edi
0x70F993: pop     esi
0x70F994: pop     ebx
0x70F995: retn
0x70F996: push    offset aSFalse; "%s = false"
0x70F99B: push    esi; SizeInBytes
0x70F99C: push    edi; DstBuf
0x70F99D: call    sub_6C5D40
0x70F9A2: add     esp, 10h
0x70F9A5: mov     eax, edi
0x70F9A7: pop     edi
0x70F9A8: pop     esi
0x70F9A9: pop     ebx
0x70F9AA: retn
