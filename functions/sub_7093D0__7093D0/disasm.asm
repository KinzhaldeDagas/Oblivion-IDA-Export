0x7093D0: push    ebx
0x7093D1: push    ebp
0x7093D2: mov     ebp, dword ptr [esp+8+ArgList]
0x7093D6: push    esi
0x7093D7: mov     eax, ebp
0x7093D9: push    edi
0x7093DA: mov     esi, ecx
0x7093DC: lea     edx, [eax+1]
0x7093DF: nop
0x7093E0: mov     cl, [eax]
0x7093E2: add     eax, 1
0x7093E5: test    cl, cl
0x7093E7: jnz     short loc_7093E0
0x7093E9: sub     eax, edx
0x7093EB: lea     edi, [eax+24h]
0x7093EE: push    edi; Size
0x7093EF: call    FormHeapAlloc
0x7093F4: fld     dword ptr [esi+0Ch]
0x7093F7: sub     esp, 1Ch
0x7093FA: fstp    [esp+30h+var_18]
0x7093FE: mov     ebx, eax
0x709400: fld     dword ptr [esi+8]
0x709403: fstp    [esp+30h+var_20]
0x709407: fld     dword ptr [esi+4]
0x70940A: fstp    [esp+30h+var_28]
0x70940E: fld     dword ptr [esi]
0x709410: fstp    [esp+30h+var_30]
0x709413: push    ebp; ArgList
0x709414: push    offset aS5_3f5_3f5_3f5; "%s = (%5.3f,%5.3f,%5.3f,%5.3f)"
0x709419: push    edi; SizeInBytes
0x70941A: push    ebx; DstBuf
0x70941B: call    sub_6C5D40
0x709420: add     esp, 30h
0x709423: pop     edi
0x709424: pop     esi
0x709425: pop     ebp
0x709426: mov     eax, ebx
0x709428: pop     ebx
0x709429: retn    4
