0x8060D8: mov     eax, ds:0B42E8Ch; jumptable 00805FF1 default case
0x8060DD: test    eax, eax
0x8060DF: jz      short loc_8060ED
0x8060E1: push    0; _DWORD
0x8060E3: push    offset aInvalidSubText; "Invalid sub texture in decal"
0x8060E8: call    eax ; dword_B42E8C
0x8060EA: add     esp, 8
0x8060ED: fld1
0x8060EF: mov     eax, 0Ah
0x8060F4: fst     dword ptr ds:0B4615Ch
0x8060FA: fld     dword ptr [edi+40h]
0x8060FD: fstp    [esp+arg_10]
0x806101: fstp    [esp+arg_40]
0x806105: test    al, 1
0x806107: fld     [esp+arg_10]
0x80610B: jz      short loc_806117
0x80610D: fld     [esp+arg_40]
0x806111: fmul    st, st(1)
0x806113: fstp    [esp+arg_40]
0x806117: shr     eax, 1
0x806119: jz      short loc_806123
0x80611B: fmul    st, st
0x80611D: fstp    [esp+arg_10]
0x806121: jmp     short loc_806105
0x806123: cmp     [esp+arg_38], 0
0x806128: fstp    st
0x80612A: fld     [esp+arg_40]
0x80612E: lea     ecx, [esi+24h]; this
0x806131: fstp    [esp+arg_40]
0x806135: fld     [esp+arg_40]
0x806139: fld1
0x80613B: fsubrp  st(1), st
0x80613D: fstp    dword ptr ds:0B46218h
0x806143: jz      short loc_80614E
0x806145: mov     edx, ds:0B47608h
0x80614B: push    edx
0x80614C: jmp     short loc_806154
0x80614E: mov     eax, ds:0B47604h
0x806153: push    eax; a2
0x806154: call    NiSmartPointer_Set??
0x806159: mov     ecx, ebx
0x80615B: call    sub_7EE1D0
0x806160: mov     ebx, [eax]
0x806162: mov     ecx, [ebp+24h]
0x806165: mov     eax, [ecx+4]
0x806168: mov     edi, [eax+4]
0x80616B: cmp     edi, ebx
0x80616D: mov     [esp+arg_38], eax
0x806171: jz      short loc_8061A8
0x806173: test    edi, edi
0x806175: jz      short loc_806193
0x806177: lea     edx, [edi+4]
0x80617A: push    edx; lpAddend
0x80617B: call    dword ptr ds:0A2807Ch
0x806181: test    eax, eax
0x806183: jnz     short loc_806193
0x806185: test    edi, edi
0x806187: jz      short loc_806193
0x806189: mov     eax, [edi]
0x80618B: mov     edx, [eax]
0x80618D: push    1
0x80618F: mov     ecx, edi
0x806191: call    edx
0x806193: test    ebx, ebx
0x806195: mov     eax, [esp+4+arg_34]
0x806199: mov     [eax+4], ebx
0x80619C: jz      short loc_8061A8
0x80619E: add     ebx, 4
0x8061A1: push    ebx; lpAddend
0x8061A2: call    dword ptr ds:0A28078h
0x8061A8: mov     edi, 1
0x8061AD: add     [ebp+60h], edi
0x8061B0: mov     [esp+4+arg_34], ebp
0x8061B4: mov     edx, [esi+38h]
0x8061B7: lea     ecx, [esp+4+arg_34]
0x8061BB: push    ecx
0x8061BC: push    edx
0x8061BD: lea     ecx, [esi+40h]
0x8061C0: mov     [esp+0Ch+arg_28], 0
0x8061C8: call    sub_76CE40
0x8061CD: or      eax, 0FFFFFFFFh
0x8061D0: add     [ebp+60h], eax
0x8061D3: mov     [esp+4+arg_28], eax
0x8061D7: jnz     short loc_8061E0
0x8061D9: mov     ecx, ebp
0x8061DB: call    sub_7604D0
0x8061E0: add     [esi+38h], edi
0x8061E3: xor     eax, eax
0x8061E5: mov     ecx, [esp+4+arg_20]
0x8061E9: mov     large fs:0, ecx
0x8061F0: pop     ecx
0x8061F1: pop     edi
0x8061F2: pop     esi
0x8061F3: pop     ebp
0x8061F4: pop     ebx
0x8061F5: add     esp, 20h
0x8061F8: retn    1Ch
