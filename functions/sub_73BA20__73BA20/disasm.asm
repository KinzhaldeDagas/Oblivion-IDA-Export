0x73BA20: push    ebx
0x73BA21: mov     ebx, dword ptr [esp+4+ArgList]
0x73BA25: push    esi
0x73BA26: mov     eax, ebx
0x73BA28: push    edi
0x73BA29: lea     edx, [eax+1]
0x73BA2C: lea     esp, [esp+0]
0x73BA30: mov     cl, [eax]
0x73BA32: add     eax, 1
0x73BA35: test    cl, cl
0x73BA37: jnz     short loc_73BA30
0x73BA39: sub     eax, edx
0x73BA3B: lea     esi, [eax+19h]
0x73BA3E: push    esi; Size
0x73BA3F: call    FormHeapAlloc
0x73BA44: mov     edi, eax
0x73BA46: mov     eax, [esp+10h+arg_4]
0x73BA4A: add     esp, 4
0x73BA4D: cmp     eax, 3; switch 4 cases
0x73BA50: ja      short def_73BA52
0x73BA52: jmp     ds:jpt_73BA52[eax*4]; switch jump
0x73BA59: push    ebx; jumptable 0073BA52 case 0
0x73BA5A: push    offset aSProjected_lig; "%s = PROJECTED_LIGHT"
0x73BA5F: push    esi; SizeInBytes
0x73BA60: push    edi; DstBuf
0x73BA61: call    sub_6C5D40
0x73BA66: add     esp, 10h
0x73BA69: mov     eax, edi
0x73BA6B: pop     edi
0x73BA6C: pop     esi
0x73BA6D: pop     ebx
0x73BA6E: retn
0x73BA6F: push    ebx; jumptable 0073BA52 case 1
0x73BA70: push    offset aSProjected_sha; "%s = PROJECTED_SHADOW"
0x73BA75: push    esi; SizeInBytes
0x73BA76: push    edi; DstBuf
0x73BA77: call    sub_6C5D40
0x73BA7C: add     esp, 10h
0x73BA7F: mov     eax, edi
0x73BA81: pop     edi
0x73BA82: pop     esi
0x73BA83: pop     ebx
0x73BA84: retn
0x73BA85: push    ebx; jumptable 0073BA52 case 2
0x73BA86: push    offset aSEnvironment_m; "%s = ENVIRONMENT_MAP"
0x73BA8B: push    esi; SizeInBytes
0x73BA8C: push    edi; DstBuf
0x73BA8D: call    sub_6C5D40
0x73BA92: add     esp, 10h
0x73BA95: mov     eax, edi
0x73BA97: pop     edi
0x73BA98: pop     esi
0x73BA99: pop     ebx
0x73BA9A: retn
0x73BA9B: push    ebx; jumptable 0073BA52 case 3
0x73BA9C: push    offset aSFog_map; "%s = FOG_MAP"
0x73BAA1: push    esi; SizeInBytes
0x73BAA2: push    edi; DstBuf
0x73BAA3: call    sub_6C5D40
0x73BAA8: add     esp, 10h
