0x961510: push    esi
0x961511: push    edi
0x961512: mov     edi, dword ptr [esp+8+ArgList]
0x961516: mov     eax, edi
0x961518: lea     edx, [eax+1]
0x96151B: jmp     short loc_961520
0x96151D: align 10h
0x961520: mov     cl, [eax]
0x961522: add     eax, 1
0x961525: test    cl, cl
0x961527: jnz     short loc_961520
0x961529: sub     eax, edx
0x96152B: lea     esi, [eax+0Eh]
0x96152E: push    esi; Size
0x96152F: call    FormHeapAlloc
0x961534: push    edi; ArgList
0x961535: push    offset aSCapsule_bv; "%s = CAPSULE_BV"
0x96153A: push    esi; SizeInBytes
0x96153B: push    eax; DstBuf
0x96153C: mov     dword ptr [esp+1Ch+ArgList], eax
0x961540: call    sub_6C5D40
0x961545: mov     esi, [esp+1Ch+arg_4]
0x961549: movzx   edi, word ptr [esi+0Ah]
0x96154D: movzx   eax, word ptr [esi+8]
0x961551: add     esp, 14h
0x961554: cmp     edi, eax
0x961556: jb      short loc_961566
0x961558: movzx   ecx, word ptr [esi+0Eh]
0x96155C: add     ecx, edi
0x96155E: push    ecx
0x96155F: mov     ecx, esi
0x961561: call    NiTArray_SetSize
0x961566: lea     edx, [esp+8+ArgList]
0x96156A: push    edx
0x96156B: push    edi
0x96156C: mov     ecx, esi
0x96156E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x961573: pop     edi
0x961574: pop     esi
0x961575: retn    8
