0x4D9960: push    ebp
0x4D9961: mov     ebp, esp
0x4D9963: and     esp, 0FFFFFFF0h
0x4D9966: sub     esp, 28h
0x4D9969: mov     eax, ds:0B30AACh
0x4D996E: xor     eax, esp
0x4D9970: mov     [esp+28h+var_4], eax
0x4D9974: mov     eax, [ebp+arg_0]
0x4D9977: fld     dword ptr [eax]
0x4D9979: push    esi
0x4D997A: fld     qword ptr ds:0A39088h
0x4D9980: mov     esi, ecx
0x4D9982: test    esi, esi
0x4D9984: fmul    st(1), st
0x4D9986: fxch    st(1)
0x4D9988: push    edi
0x4D9989: fstp    [esp+30h+var_20]
0x4D998D: fld     dword ptr [eax+4]
0x4D9990: fmul    st, st(1)
0x4D9992: fstp    [esp+30h+var_1C]
0x4D9996: fmul    dword ptr [eax+8]
0x4D9999: fstp    [esp+30h+var_18]
0x4D999D: jz      short loc_4D99C8
0x4D999F: mov     edi, [esi+8]
0x4D99A2: test    edi, edi
0x4D99A4: jz      short loc_4D99C8
0x4D99A6: call    sub_89F570
0x4D99AB: mov     ecx, edi
0x4D99AD: call    sub_8A6410
0x4D99B2: mov     ecx, [edi+50h]
0x4D99B5: mov     eax, [ecx]
0x4D99B7: mov     eax, [eax+54h]
0x4D99BA: lea     edx, [esp+30h+var_20]
0x4D99BE: push    edx
0x4D99BF: call    eax
0x4D99C1: mov     ecx, esi
0x4D99C3: call    sub_89F570
0x4D99C8: mov     ecx, [esp+30h+var_4]
0x4D99CC: pop     edi
0x4D99CD: pop     esi
0x4D99CE: xor     ecx, esp
0x4D99D0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4D99D5: mov     esp, ebp
0x4D99D7: pop     ebp
0x4D99D8: retn    4
