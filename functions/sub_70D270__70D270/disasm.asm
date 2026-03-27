0x70D270: push    ebx
0x70D271: push    ebp
0x70D272: mov     ebp, dword ptr [esp+8+ArgList]
0x70D276: push    esi
0x70D277: mov     eax, ebp
0x70D279: push    edi
0x70D27A: mov     esi, ecx
0x70D27C: lea     edx, [eax+1]
0x70D27F: nop
0x70D280: mov     cl, [eax]
0x70D282: add     eax, 1
0x70D285: test    cl, cl
0x70D287: jnz     short loc_70D280
0x70D289: sub     eax, edx
0x70D28B: lea     edi, [eax+40h]
0x70D28E: push    edi; Size
0x70D28F: call    FormHeapAlloc
0x70D294: fld     dword ptr [esi+0Ch]
0x70D297: sub     esp, 1Ch
0x70D29A: fstp    [esp+30h+var_18]
0x70D29E: mov     ebx, eax
0x70D2A0: fld     dword ptr [esi+8]
0x70D2A3: fstp    [esp+30h+var_20]
0x70D2A7: fld     dword ptr [esi+4]
0x70D2AA: fstp    [esp+30h+var_28]
0x70D2AE: fld     dword ptr [esi]
0x70D2B0: fstp    [esp+30h+var_30]
0x70D2B3: push    ebp; ArgList
0x70D2B4: push    offset aSLGRGTGBG; "%s = (L=%g,R=%g,T=%g,B=%g)"
0x70D2B9: push    edi; SizeInBytes
0x70D2BA: push    ebx; DstBuf
0x70D2BB: call    sub_6C5D40
0x70D2C0: add     esp, 30h
0x70D2C3: pop     edi
0x70D2C4: pop     esi
0x70D2C5: pop     ebp
0x70D2C6: mov     eax, ebx
0x70D2C8: pop     ebx
0x70D2C9: retn    4
