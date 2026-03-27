0x7153C0: push    ebx
0x7153C1: push    ebp
0x7153C2: mov     ebp, dword ptr [esp+8+ArgList]
0x7153C6: push    esi
0x7153C7: mov     eax, ebp
0x7153C9: push    edi
0x7153CA: mov     esi, ecx
0x7153CC: lea     edx, [eax+1]
0x7153CF: nop
0x7153D0: mov     cl, [eax]
0x7153D2: add     eax, 1
0x7153D5: test    cl, cl
0x7153D7: jnz     short loc_7153D0
0x7153D9: sub     eax, edx
0x7153DB: lea     edi, [eax+80h]
0x7153E1: push    edi; Size
0x7153E2: call    FormHeapAlloc
0x7153E7: fld     dword ptr [esi+0Ch]
0x7153EA: sub     esp, 1Ch
0x7153ED: fstp    [esp+30h+var_18]
0x7153F1: mov     ebx, eax
0x7153F3: fld     dword ptr [esi+8]
0x7153F6: fstp    [esp+30h+var_20]
0x7153FA: fld     dword ptr [esi+4]
0x7153FD: fstp    [esp+30h+var_28]
0x715401: fld     dword ptr [esi]
0x715403: fstp    [esp+30h+var_30]
0x715406: push    ebp; ArgList
0x715407: push    offset aSWGXGYGZG; "%s: (w=%g,x=%g,y=%g,z=%g)"
0x71540C: push    edi; SizeInBytes
0x71540D: push    ebx; DstBuf
0x71540E: call    sub_6C5D40
0x715413: add     esp, 30h
0x715416: pop     edi
0x715417: pop     esi
0x715418: pop     ebp
0x715419: mov     eax, ebx
0x71541B: pop     ebx
0x71541C: retn    4
