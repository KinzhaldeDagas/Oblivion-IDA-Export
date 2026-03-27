0x70FB90: push    ebx
0x70FB91: mov     ebx, dword ptr [esp+4+ArgList]
0x70FB95: push    esi
0x70FB96: mov     eax, ebx
0x70FB98: push    edi
0x70FB99: lea     edx, [eax+1]
0x70FB9C: lea     esp, [esp+0]
0x70FBA0: mov     cl, [eax]
0x70FBA2: add     eax, 1
0x70FBA5: test    cl, cl
0x70FBA7: jnz     short loc_70FBA0
0x70FBA9: sub     eax, edx
0x70FBAB: lea     esi, [eax+14h]
0x70FBAE: push    esi; Size
0x70FBAF: call    FormHeapAlloc
0x70FBB4: fld     [esp+10h+arg_4]
0x70FBB8: push    ecx
0x70FBB9: fstp    [esp+14h+var_14]
0x70FBBC: push    ebx; ArgList
0x70FBBD: push    offset aSG; "%s = %g"
0x70FBC2: mov     edi, eax
0x70FBC4: push    esi; SizeInBytes
0x70FBC5: push    edi; DstBuf
0x70FBC6: call    sub_6C5D40
0x70FBCB: add     esp, 18h
0x70FBCE: mov     eax, edi
0x70FBD0: pop     edi
0x70FBD1: pop     esi
0x70FBD2: pop     ebx
0x70FBD3: retn
