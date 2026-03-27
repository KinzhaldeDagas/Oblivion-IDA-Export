0x70DEB0: mov     eax, dword ptr [esp+ArgList]
0x70DEB4: push    ebx
0x70DEB5: push    esi
0x70DEB6: push    edi
0x70DEB7: mov     esi, ecx
0x70DEB9: lea     edx, [eax+1]
0x70DEBC: lea     esp, [esp+0]
0x70DEC0: mov     cl, [eax]
0x70DEC2: add     eax, 1
0x70DEC5: test    cl, cl
0x70DEC7: jnz     short loc_70DEC0
0x70DEC9: sub     eax, edx
0x70DECB: lea     edi, [eax+50h]
0x70DECE: push    edi; Size
0x70DECF: call    FormHeapAlloc
0x70DED4: fld     dword ptr [esi+0Ch]
0x70DED7: mov     ecx, dword ptr [esp+10h+ArgList]
0x70DEDB: add     esp, 4
0x70DEDE: mov     ebx, eax
0x70DEE0: movzx   eax, byte ptr [esi+18h]
0x70DEE4: push    eax
0x70DEE5: sub     esp, 30h
0x70DEE8: fstp    [esp+40h+var_18]
0x70DEEC: fld     dword ptr [esi+8]
0x70DEEF: fstp    [esp+40h+var_20]
0x70DEF3: fld     dword ptr [esi+4]
0x70DEF6: fstp    [esp+40h+var_28]
0x70DEFA: fld     dword ptr [esi]
0x70DEFC: fstp    [esp+40h+var_30]
0x70DF00: fld     dword ptr [esi+14h]
0x70DF03: fstp    [esp+40h+var_38]
0x70DF07: fld     dword ptr [esi+10h]
0x70DF0A: fstp    [esp+40h+var_40]
0x70DF0D: push    ecx; ArgList
0x70DF0E: push    offset aSNGFGLGRGTGBGO; "%s = (N=%g,F=%g,L=%g,R=%g,T=%g,B=%g,O=%"...
0x70DF13: push    edi; SizeInBytes
0x70DF14: push    ebx; DstBuf
0x70DF15: call    sub_6C5D40
0x70DF1A: add     esp, 44h
0x70DF1D: pop     edi
0x70DF1E: pop     esi
0x70DF1F: mov     eax, ebx
0x70DF21: pop     ebx
0x70DF22: retn    4
