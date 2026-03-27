0x711A50: mov     eax, dword ptr [esp+ArgList]
0x711A54: push    ebx
0x711A55: push    esi
0x711A56: push    edi
0x711A57: mov     esi, ecx
0x711A59: lea     edx, [eax+1]
0x711A5C: lea     esp, [esp+0]
0x711A60: mov     cl, [eax]
0x711A62: add     eax, 1
0x711A65: test    cl, cl
0x711A67: jnz     short loc_711A60
0x711A69: sub     eax, edx
0x711A6B: lea     edi, [eax+80h]
0x711A71: push    edi; Size
0x711A72: call    FormHeapAlloc
0x711A77: fld     dword ptr [esi+20h]
0x711A7A: sub     esp, 44h
0x711A7D: fstp    [esp+54h+var_14]
0x711A81: mov     ebx, eax
0x711A83: fld     dword ptr [esi+1Ch]
0x711A86: mov     eax, dword ptr [esp+54h+ArgList]
0x711A8A: fstp    [esp+54h+var_1C]
0x711A8E: fld     dword ptr [esi+18h]
0x711A91: fstp    [esp+54h+var_24]
0x711A95: fld     dword ptr [esi+14h]
0x711A98: fstp    [esp+54h+var_2C]
0x711A9C: fld     dword ptr [esi+10h]
0x711A9F: fstp    [esp+54h+var_34]
0x711AA3: fld     dword ptr [esi+0Ch]
0x711AA6: fstp    [esp+54h+var_3C]
0x711AAA: fld     dword ptr [esi+8]
0x711AAD: fstp    [esp+54h+var_44]
0x711AB1: fld     dword ptr [esi+4]
0x711AB4: fstp    [esp+54h+var_4C]
0x711AB8: fld     dword ptr [esi]
0x711ABA: fstp    [esp+54h+var_54]
0x711ABD: push    eax; ArgList
0x711ABE: push    offset aSGGGGGGGGG; "%s = ((%g,%g,%g),(%g,%g,%g),(%g,%g,%g))"
0x711AC3: push    edi; SizeInBytes
0x711AC4: push    ebx; DstBuf
0x711AC5: call    sub_6C5D40
0x711ACA: add     esp, 58h
0x711ACD: pop     edi
0x711ACE: pop     esi
0x711ACF: mov     eax, ebx
0x711AD1: pop     ebx
0x711AD2: retn    4
