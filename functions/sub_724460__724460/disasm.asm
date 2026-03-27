0x724460: push    esi
0x724461: mov     esi, ecx
0x724463: test    byte ptr [esi+0DCh], 1
0x72446A: jz      short loc_7244AA
0x72446C: cmp     dword ptr [esi+0E0h], 0
0x724473: jl      short loc_7244B7
0x724475: fld     [esp+4+arg_0]
0x724479: push    1; char
0x72447B: push    ecx
0x72447C: fstp    [esp+0Ch+var_C]; float
0x72447F: call    sub_47C930
0x724484: mov     eax, [esi+0E0h]
0x72448A: mov     ecx, [esi+0B0h]
0x724490: mov     ecx, [ecx+eax*4]
0x724493: test    ecx, ecx
0x724495: jz      short loc_7244B7
0x724497: mov     edx, [ecx]
0x724499: fld     [esp+4+arg_0]
0x72449D: mov     eax, [edx+4Ch]
0x7244A0: push    ecx
0x7244A1: fstp    [esp+8+var_8]
0x7244A4: call    eax
0x7244A6: pop     esi
0x7244A7: retn    4
0x7244AA: fld     [esp+4+arg_0]
0x7244AE: push    ecx
0x7244AF: fstp    [esp+8+var_8]; float
0x7244B2: call    sub_70A310
0x7244B7: pop     esi
0x7244B8: retn    4
