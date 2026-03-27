0x70FC30: push    ebx
0x70FC31: mov     ebx, [esp+4+arg_4]
0x70FC35: test    ebx, ebx
0x70FC37: push    esi
0x70FC38: push    edi
0x70FC39: jz      short loc_70FC86
0x70FC3B: push    ebp
0x70FC3C: mov     ebp, dword ptr [esp+10h+ArgList]
0x70FC40: mov     eax, ebp
0x70FC42: lea     edx, [eax+1]
0x70FC45: mov     cl, [eax]
0x70FC47: add     eax, 1
0x70FC4A: test    cl, cl
0x70FC4C: jnz     short loc_70FC45
0x70FC4E: sub     eax, edx
0x70FC50: mov     edx, eax
0x70FC52: mov     eax, ebx
0x70FC54: lea     esi, [eax+1]
0x70FC57: mov     cl, [eax]
0x70FC59: add     eax, 1
0x70FC5C: test    cl, cl
0x70FC5E: jnz     short loc_70FC57
0x70FC60: sub     eax, esi
0x70FC62: lea     esi, [eax+edx+4]
0x70FC66: push    esi; Size
0x70FC67: call    FormHeapAlloc
0x70FC6C: push    ebx
0x70FC6D: push    ebp; ArgList
0x70FC6E: push    offset aSS_6; "%s = %s"
0x70FC73: mov     edi, eax
0x70FC75: push    esi; SizeInBytes
0x70FC76: push    edi; DstBuf
0x70FC77: call    sub_6C5D40
0x70FC7C: add     esp, 18h
0x70FC7F: pop     ebp
0x70FC80: mov     eax, edi
0x70FC82: pop     edi
0x70FC83: pop     esi
0x70FC84: pop     ebx
0x70FC85: retn
0x70FC86: mov     ebx, dword ptr [esp+0Ch+ArgList]
0x70FC8A: mov     eax, ebx
0x70FC8C: lea     edx, [eax+1]
0x70FC8F: nop
0x70FC90: mov     cl, [eax]
0x70FC92: add     eax, 1
0x70FC95: test    cl, cl
0x70FC97: jnz     short loc_70FC90
0x70FC99: sub     eax, edx
0x70FC9B: lea     esi, [eax+8]
0x70FC9E: push    esi; Size
0x70FC9F: call    FormHeapAlloc
0x70FCA4: push    ebx; ArgList
0x70FCA5: push    offset aSNull; "%s = NULL"
0x70FCAA: mov     edi, eax
0x70FCAC: push    esi; SizeInBytes
0x70FCAD: push    edi; DstBuf
0x70FCAE: call    sub_6C5D40
0x70FCB3: add     esp, 14h
0x70FCB6: mov     eax, edi
0x70FCB8: pop     edi
0x70FCB9: pop     esi
0x70FCBA: pop     ebx
0x70FCBB: retn
