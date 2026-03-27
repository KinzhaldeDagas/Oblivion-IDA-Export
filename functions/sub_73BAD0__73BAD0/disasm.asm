0x73BAD0: push    ebx
0x73BAD1: mov     ebx, dword ptr [esp+4+ArgList]
0x73BAD5: push    esi
0x73BAD6: mov     eax, ebx
0x73BAD8: push    edi
0x73BAD9: lea     edx, [eax+1]
0x73BADC: lea     esp, [esp+0]
0x73BAE0: mov     cl, [eax]
0x73BAE2: add     eax, 1
0x73BAE5: test    cl, cl
0x73BAE7: jnz     short loc_73BAE0
0x73BAE9: sub     eax, edx
0x73BAEB: lea     esi, [eax+19h]
0x73BAEE: push    esi; Size
0x73BAEF: call    FormHeapAlloc
0x73BAF4: mov     edi, eax
0x73BAF6: mov     eax, [esp+10h+arg_4]
0x73BAFA: add     esp, 4
0x73BAFD: cmp     eax, 4; switch 5 cases
0x73BB00: ja      short def_73BB02
0x73BB02: jmp     ds:jpt_73BB02[eax*4]; switch jump
0x73BB09: push    ebx; jumptable 0073BB02 case 0
0x73BB0A: push    offset aSWorld_paralle; "%s = WORLD_PARALLEL"
0x73BB0F: push    esi; SizeInBytes
0x73BB10: push    edi; DstBuf
0x73BB11: call    sub_6C5D40
0x73BB16: add     esp, 10h
0x73BB19: mov     eax, edi
0x73BB1B: pop     edi
0x73BB1C: pop     esi
0x73BB1D: pop     ebx
0x73BB1E: retn
0x73BB1F: push    ebx; jumptable 0073BB02 case 1
0x73BB20: push    offset aSWorld_perspec; "%s = WORLD_PERSPECTIVE"
0x73BB25: push    esi; SizeInBytes
0x73BB26: push    edi; DstBuf
0x73BB27: call    sub_6C5D40
0x73BB2C: add     esp, 10h
0x73BB2F: mov     eax, edi
0x73BB31: pop     edi
0x73BB32: pop     esi
0x73BB33: pop     ebx
0x73BB34: retn
0x73BB35: push    ebx; jumptable 0073BB02 case 2
0x73BB36: push    offset aSSphere_map; "%s = SPHERE_MAP"
0x73BB3B: push    esi; SizeInBytes
0x73BB3C: push    edi; DstBuf
0x73BB3D: call    sub_6C5D40
0x73BB42: add     esp, 10h
0x73BB45: mov     eax, edi
0x73BB47: pop     edi
0x73BB48: pop     esi
0x73BB49: pop     ebx
0x73BB4A: retn
0x73BB4B: push    ebx; jumptable 0073BB02 case 3
0x73BB4C: push    offset aSSpecular_cube; "%s = SPECULAR_CUBE_MAP"
0x73BB51: push    esi; SizeInBytes
0x73BB52: push    edi; DstBuf
0x73BB53: call    sub_6C5D40
0x73BB58: add     esp, 10h
0x73BB5B: mov     eax, edi
0x73BB5D: pop     edi
0x73BB5E: pop     esi
0x73BB5F: pop     ebx
0x73BB60: retn
0x73BB61: push    ebx; jumptable 0073BB02 case 4
0x73BB62: push    offset aSDiffuse_cube_; "%s = DIFFUSE_CUBE_MAP"
0x73BB67: push    esi; SizeInBytes
0x73BB68: push    edi; DstBuf
0x73BB69: call    sub_6C5D40
0x73BB6E: add     esp, 10h
