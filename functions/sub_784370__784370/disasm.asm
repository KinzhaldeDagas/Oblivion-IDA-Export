0x784370: push    0FFFFFFFFh
0x784372: push    offset SEH_784370
0x784377: mov     eax, large fs:0
0x78437D: push    eax
0x78437E: push    ecx
0x78437F: push    esi
0x784380: push    edi
0x784381: mov     eax, ds:0B30AACh
0x784386: xor     eax, esp
0x784388: push    eax
0x784389: lea     eax, [esp+1Ch+var_C]
0x78438D: mov     large fs:0, eax
0x784393: mov     esi, ecx
0x784395: fldz
0x784397: mov     eax, [esi+40h]
0x78439A: test    eax, eax
0x78439C: fstp    [esp+1Ch+var_10]
0x7843A0: jz      loc_784488
0x7843A6: mov     ecx, [esi+44h]
0x7843A9: sub     ecx, eax
0x7843AB: mov     eax, 2AAAAAABh
0x7843B0: imul    ecx
0x7843B2: sar     edx, 2
0x7843B5: mov     eax, edx
0x7843B7: shr     eax, 1Fh
0x7843BA: add     eax, edx
0x7843BC: cmp     eax, 1F4h
0x7843C1: jnz     loc_784488
0x7843C7: fld     [esp+1Ch+arg_0]
0x7843CB: fmul    qword ptr ds:0A8BA00h
0x7843D1: fadd    qword ptr ds:0A2FAA0h
0x7843D7: call    Double_To_SInt32
0x7843DC: mov     edi, eax
0x7843DE: mov     eax, [esi+40h]
0x7843E1: test    eax, eax
0x7843E3: jz      short loc_7843FF
0x7843E5: mov     ecx, [esi+44h]
0x7843E8: sub     ecx, eax
0x7843EA: mov     eax, 2AAAAAABh
0x7843EF: imul    ecx
0x7843F1: sar     edx, 2
0x7843F4: mov     eax, edx
0x7843F6: shr     eax, 1Fh
0x7843F9: add     eax, edx
0x7843FB: cmp     edi, eax
0x7843FD: jb      short loc_784404
0x7843FF: call    __invalid_parameter_noinfo
0x784404: mov     ecx, [esi+40h]
0x784407: lea     eax, [edi+edi*2]
0x78440A: fld     dword ptr [ecx+eax*8+4]
0x78440E: mov     eax, 1
0x784413: test    ds:0B42968h, al
0x784419: fstp    [esp+1Ch+var_10]
0x78441D: jnz     short loc_78444C
0x78441F: or      ds:0B42968h, eax
0x784425: mov     ecx, offset unk_B42964
0x78442A: mov     [esp+1Ch+var_4], 0
0x784432: call    sub_78EAF0
0x784437: push    offset sub_A26E20; void (__cdecl *)()
0x78443C: call    _atexit
0x784441: add     esp, 4
0x784444: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x78444C: fld     dword ptr [esi+8]
0x78444F: sub     esp, 8
0x784452: fld     [esp+24h+var_10]
0x784456: mov     ecx, offset unk_B42964
0x78445B: fld     st
0x78445D: fmulp   st(2), st
0x78445F: fxch    st(1)
0x784461: fstp    [esp+24h+arg_0]
0x784465: fld     [esp+24h+arg_0]
0x784469: fstp    [esp+24h+var_20]; float
0x78446D: fld     dword ptr [esi+8]
0x784470: fchs
0x784472: fmulp   st(1), st
0x784474: fstp    [esp+24h+arg_0]
0x784478: fld     [esp+24h+arg_0]
0x78447C: fstp    [esp+24h+var_24]; float
0x78447F: call    sub_78EA00
0x784484: fstp    [esp+1Ch+var_10]
0x784488: fld     [esp+1Ch+var_10]
0x78448C: mov     ecx, [esp+1Ch+var_C]
0x784490: mov     large fs:0, ecx
0x784497: pop     ecx
0x784498: pop     edi
0x784499: pop     esi
0x78449A: add     esp, 10h
0x78449D: retn    4
