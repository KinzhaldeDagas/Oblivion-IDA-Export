0x6ED710: push    0FFFFFFFFh
0x6ED712: push    offset ??1FutBinaryFileC@@UAE@XZ_SEH
0x6ED717: mov     eax, large fs:0
0x6ED71D: push    eax
0x6ED71E: push    ecx
0x6ED71F: push    ebx
0x6ED720: push    esi
0x6ED721: mov     eax, ds:0B30AACh
0x6ED726: xor     eax, esp
0x6ED728: push    eax
0x6ED729: lea     eax, [esp+1Ch+var_C]
0x6ED72D: mov     large fs:0, eax
0x6ED733: mov     esi, ecx
0x6ED735: mov     [esp+1Ch+var_10], esi
0x6ED739: mov     dword ptr [esi], offset ??_7FutBinaryFileC@@6B@; const FutBinaryFileC::`vftable'
0x6ED73F: mov     [esp+1Ch+var_4], 1
0x6ED747: call    sub_6F5FA0
0x6ED74C: cmp     dword ptr [esi+38h], 10h
0x6ED750: jb      short loc_6ED75E
0x6ED752: mov     eax, [esi+24h]
0x6ED755: push    eax
0x6ED756: call    FormHeapFree
0x6ED75B: add     esp, 4
0x6ED75E: xor     ebx, ebx
0x6ED760: mov     dword ptr [esi+38h], 0Fh
0x6ED767: mov     [esi+34h], ebx
0x6ED76A: mov     [esi+24h], bl
0x6ED76D: cmp     dword ptr [esi+1Ch], 10h
0x6ED771: jb      short loc_6ED77F
0x6ED773: mov     ecx, [esi+8]
0x6ED776: push    ecx
0x6ED777: call    FormHeapFree
0x6ED77C: add     esp, 4
0x6ED77F: mov     dword ptr [esi+1Ch], 0Fh
0x6ED786: mov     [esi+18h], ebx
0x6ED789: mov     [esi+8], bl
0x6ED78C: mov     ecx, [esp+1Ch+var_C]
0x6ED790: mov     large fs:0, ecx
0x6ED797: pop     ecx
0x6ED798: pop     esi
0x6ED799: pop     ebx
0x6ED79A: add     esp, 10h
0x6ED79D: retn
