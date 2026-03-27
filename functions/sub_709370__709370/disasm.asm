0x709370: push    ebx
0x709371: push    ebp
0x709372: mov     ebp, dword ptr [esp+8+ArgList]
0x709376: push    esi
0x709377: mov     eax, ebp
0x709379: push    edi
0x70937A: mov     esi, ecx
0x70937C: lea     edx, [eax+1]
0x70937F: nop
0x709380: mov     cl, [eax]
0x709382: add     eax, 1
0x709385: test    cl, cl
0x709387: jnz     short loc_709380
0x709389: sub     eax, edx
0x70938B: lea     edi, [eax+64h]
0x70938E: push    edi; Size
0x70938F: call    FormHeapAlloc
0x709394: fld     dword ptr [esi+8]
0x709397: sub     esp, 14h
0x70939A: fstp    [esp+28h+var_18]
0x70939E: mov     ebx, eax
0x7093A0: fld     dword ptr [esi+4]
0x7093A3: fstp    [esp+28h+var_20]
0x7093A7: fld     dword ptr [esi]
0x7093A9: fstp    [esp+28h+var_28]
0x7093AC: push    ebp; ArgList
0x7093AD: push    offset aS5_3f5_3f5_3f; "%s = (%5.3f,%5.3f,%5.3f)"
0x7093B2: push    edi; SizeInBytes
0x7093B3: push    ebx; DstBuf
0x7093B4: call    sub_6C5D40
0x7093B9: add     esp, 28h
0x7093BC: pop     edi
0x7093BD: pop     esi
0x7093BE: pop     ebp
0x7093BF: mov     eax, ebx
0x7093C1: pop     ebx
0x7093C2: retn    4
