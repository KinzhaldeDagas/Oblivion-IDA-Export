0x68BDA0: push    ebp
0x68BDA1: push    esi
0x68BDA2: mov     esi, [esp+8+arg_0]
0x68BDA6: test    esi, esi
0x68BDA8: mov     ebp, ecx
0x68BDAA: jz      short loc_68BE06
0x68BDAC: push    ebx
0x68BDAD: mov     ebx, [esp+0Ch+arg_4]
0x68BDB1: test    ebx, ebx
0x68BDB3: jz      short loc_68BE05
0x68BDB5: mov     ecx, ebx
0x68BDB7: call    NiDX92DBufferData__GetSurfaceData
0x68BDBC: mov     [esp+0Ch+arg_4], eax
0x68BDC0: push    edi
0x68BDC1: mov     ecx, esi
0x68BDC3: call    NiDX92DBufferData__GetSurfaceData
0x68BDC8: test    esi, esi
0x68BDCA: mov     edi, eax
0x68BDCC: jz      short loc_68BDDE
0x68BDCE: mov     ecx, esi; void *
0x68BDD0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68BDD5: push    esi
0x68BDD6: call    FormHeapFree
0x68BDDB: add     esp, 4
0x68BDDE: cmp     esi, ebx
0x68BDE0: jz      short loc_68BDE8
0x68BDE2: test    edi, edi
0x68BDE4: mov     esi, edi
0x68BDE6: jnz     short loc_68BDC1
0x68BDE8: mov     eax, [esp+10h+arg_0]
0x68BDEC: cmp     eax, [ebp+0]
0x68BDEF: pop     edi
0x68BDF0: jnz     short loc_68BDF9
0x68BDF2: mov     ecx, [esp+0Ch+arg_4]
0x68BDF6: mov     [ebp+0], ecx
0x68BDF9: cmp     ebx, [ebp+4]
0x68BDFC: jnz     short loc_68BE05
0x68BDFE: mov     dword ptr [ebp+4], 0
0x68BE05: pop     ebx
0x68BE06: pop     esi
0x68BE07: pop     ebp
0x68BE08: retn    8
