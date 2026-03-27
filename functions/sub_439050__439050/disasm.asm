0x439050: push    ebp
0x439051: mov     ebp, [esp+4+arg_4]
0x439055: test    ebp, ebp
0x439057: push    esi
0x439058: push    edi
0x439059: mov     edi, ecx
0x43905B: jz      short loc_439063
0x43905D: cmp     ebp, [esp+0Ch+arg_C]
0x439061: jz      short loc_439068
0x439063: call    __invalid_parameter_noinfo
0x439068: mov     esi, [esp+0Ch+Dst]
0x43906C: mov     edx, [esp+0Ch+Src]
0x439070: cmp     esi, edx
0x439072: jz      short loc_43909B
0x439074: mov     eax, [edi+8]
0x439077: sub     eax, edx
0x439079: sar     eax, 2
0x43907C: test    eax, eax
0x43907E: lea     ecx, ds:0[eax*4]
0x439085: push    ebx; MaxCount
0x439086: lea     ebx, [ecx+esi]
0x439089: jle     short loc_439097
0x43908B: push    ecx; Src
0x43908C: push    edx; Src
0x43908D: push    ecx; DstSize
0x43908E: push    esi; Dst
0x43908F: call    _memmove_s
0x439094: add     esp, 10h
0x439097: mov     [edi+8], ebx
0x43909A: pop     ebx
0x43909B: mov     eax, [esp+0Ch+arg_0]
0x43909F: pop     edi
0x4390A0: mov     [eax+4], esi
0x4390A3: pop     esi
0x4390A4: mov     [eax], ebp
0x4390A6: pop     ebp
0x4390A7: retn    14h
