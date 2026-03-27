0x716E40: mov     eax, [esp+arg_0]
0x716E44: push    ebx
0x716E45: push    esi
0x716E46: push    edi
0x716E47: mov     esi, ecx
0x716E49: lea     edx, [eax+1]
0x716E4C: lea     esp, [esp+0]
0x716E50: mov     cl, [eax]
0x716E52: add     eax, 1
0x716E55: test    cl, cl
0x716E57: jnz     short loc_716E50
0x716E59: sub     eax, edx
0x716E5B: lea     edi, [eax+38h]
0x716E5E: push    edi; Size
0x716E5F: call    FormHeapAlloc
0x716E64: fld     dword ptr [esi+0Ch]
0x716E67: sub     esp, 1Ch
0x716E6A: fstp    [esp+2Ch+var_14]
0x716E6E: mov     ebx, eax
0x716E70: fld     dword ptr [esi+8]
0x716E73: fstp    [esp+2Ch+var_1C]
0x716E77: fld     dword ptr [esi+4]
0x716E7A: fstp    [esp+2Ch+var_24]
0x716E7E: fld     dword ptr [esi]
0x716E80: fstp    qword ptr [esp+2Ch+ArgList]; ArgList
0x716E83: push    offset aGGGG; "(%g,%g,%g), %g"
0x716E88: push    edi; SizeInBytes
0x716E89: push    ebx; DstBuf
0x716E8A: call    sub_6C5D40
0x716E8F: add     esp, 2Ch
0x716E92: pop     edi
0x716E93: pop     esi
0x716E94: mov     eax, ebx
0x716E96: pop     ebx
0x716E97: retn    4
