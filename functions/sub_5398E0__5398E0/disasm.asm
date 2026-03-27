0x5398E0: push    ebp
0x5398E1: mov     ebp, esp
0x5398E3: and     esp, 0FFFFFFF0h
0x5398E6: sub     esp, 28h
0x5398E9: mov     eax, ds:0B30AACh
0x5398EE: xor     eax, esp
0x5398F0: mov     [esp+28h+var_4], eax
0x5398F4: push    esi
0x5398F5: mov     esi, [ebp+arg_0]
0x5398F8: push    edi
0x5398F9: mov     edi, [ebp+arg_4]
0x5398FC: push    edi
0x5398FD: push    esi
0x5398FE: call    sub_539850
0x539903: fld     dword ptr [edi+24h]
0x539906: fld     qword ptr ds:0A39088h
0x53990C: mov     ecx, [esp+38h+var_4]
0x539910: fmul    st(1), st
0x539912: add     esp, 8
0x539915: fxch    st(1)
0x539917: mov     eax, esi
0x539919: fstp    [esp+30h+var_20]
0x53991D: fld     dword ptr [edi+28h]
0x539920: fmul    st, st(1)
0x539922: fstp    [esp+30h+var_20+4]
0x539926: fmul    dword ptr [edi+2Ch]
0x539929: pop     edi
0x53992A: fstp    [esp+2Ch+var_20+8]
0x53992E: movaps  xmm0, xmmword ptr [esp+2Ch+var_20]
0x539933: movaps  xmmword ptr [esi+30h], xmm0
0x539937: pop     esi
0x539938: xor     ecx, esp
0x53993A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53993F: mov     esp, ebp
0x539941: pop     ebp
0x539942: retn
