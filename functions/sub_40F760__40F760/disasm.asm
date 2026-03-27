0x40F760: sub     esp, 60h
0x40F763: fld     [esp+60h+arg_0]
0x40F767: push    ebx
0x40F768: fst     [esp+64h+var_60]
0x40F76C: mov     eax, [esp+64h+var_60]
0x40F770: fld     [esp+64h+arg_4]
0x40F774: push    ebp
0x40F775: fst     [esp+68h+var_5C]
0x40F779: mov     ecx, [esp+68h+var_5C]
0x40F77D: fldz
0x40F77F: mov     [esp+68h+var_44], ecx
0x40F783: fst     [esp+68h+var_58]
0x40F787: mov     [esp+68h+var_30], eax
0x40F78B: fld1
0x40F78D: mov     edx, [esp+68h+var_58]
0x40F791: fst     [esp+68h+var_54]
0x40F795: push    edi
0x40F796: fxch    st(1)
0x40F798: mov     [esp+6Ch+var_48], eax
0x40F79C: fst     [esp+6Ch+var_50]
0x40F7A0: mov     edi, [esp+6Ch+var_54]
0x40F7A4: fstp    [esp+6Ch+var_4C]
0x40F7A8: mov     [esp+6Ch+var_14], ecx
0x40F7AC: fild    [esp+6Ch+arg_14]
0x40F7B3: mov     ebx, [esp+6Ch+var_50]
0x40F7B7: mov     ebp, [esp+6Ch+var_4C]
0x40F7BB: mov     [esp+6Ch+var_34], ebp
0x40F7BF: mov     [esp+6Ch+var_20], ebx
0x40F7C3: mov     [esp+6Ch+var_40], edx
0x40F7C7: fmul    [esp+6Ch+arg_C]
0x40F7CB: mov     [esp+6Ch+var_28], edx
0x40F7CF: mov     [esp+6Ch+var_10], edx
0x40F7D3: mov     edx, [esi]
0x40F7D5: faddp   st(2), st
0x40F7D7: mov     [esp+6Ch+var_2C], ecx
0x40F7DB: fxch    st(1)
0x40F7DD: push    0
0x40F7DF: mov     [esp+70h+var_4], ebp
0x40F7E3: fstp    [esp+70h+var_44]
0x40F7E7: push    esi
0x40F7E8: mov     [esp+74h+var_3C], edi
0x40F7EC: fst     [esp+74h+var_34]
0x40F7F0: mov     [esp+74h+var_38], ebx
0x40F7F4: fild    [esp+74h+arg_10]
0x40F7FB: mov     [esp+74h+var_24], edi
0x40F7FF: mov     [esp+74h+var_1C], ebp
0x40F803: mov     [esp+74h+var_C], edi
0x40F807: fmul    [esp+74h+arg_8]
0x40F80E: faddp   st(2), st
0x40F810: fxch    st(1)
0x40F812: fstp    [esp+74h+var_30]
0x40F816: mov     eax, [esp+74h+var_30]
0x40F81A: mov     [esp+74h+var_18], eax
0x40F81E: mov     eax, [edx+170h]
0x40F824: fst     [esp+74h+var_20]
0x40F828: fld     [esp+74h+var_44]
0x40F82C: mov     ecx, [esp+74h+var_20]
0x40F830: fstp    [esp+74h+var_14]
0x40F834: mov     [esp+74h+var_8], ecx
0x40F838: fstp    [esp+74h+var_4]
0x40F83C: call    eax
0x40F83E: mov     ecx, [esi]
0x40F840: mov     edx, [ecx+1ACh]
0x40F846: push    0
0x40F848: push    esi
0x40F849: call    edx
0x40F84B: mov     eax, [esi]
0x40F84D: mov     ecx, [eax+164h]
0x40F853: push    104h
0x40F858: push    esi
0x40F859: call    ecx
0x40F85B: mov     edx, [esi]
0x40F85D: mov     ecx, [edx+14Ch]
0x40F863: push    18h
0x40F865: lea     eax, [esp+70h+var_60]
0x40F869: push    eax
0x40F86A: push    2
0x40F86C: push    5
0x40F86E: push    esi
0x40F86F: call    ecx
0x40F871: pop     edi
0x40F872: pop     ebp
0x40F873: pop     ebx
0x40F874: add     esp, 60h
0x40F877: retn
