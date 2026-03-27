0x95F620: sub     esp, 10h
0x95F623: push    esi
0x95F624: mov     esi, ecx
0x95F626: push    edi
0x95F627: lea     ecx, [esi+4]; this
0x95F62A: mov     dword ptr [esi], offset ??_7NiHalfSpaceBV@@6B@; const NiHalfSpaceBV::`vftable'
0x95F630: call    sub_716DB0
0x95F635: mov     edi, [esp+18h+arg_0]
0x95F639: mov     eax, [edi]
0x95F63B: mov     [esi+14h], eax
0x95F63E: mov     ecx, [edi+4]
0x95F641: mov     [esi+18h], ecx
0x95F644: mov     edx, [edi+8]
0x95F647: lea     ecx, [esp+18h+var_10]; this
0x95F64B: mov     [esi+1Ch], edx
0x95F64E: call    sub_716DB0
0x95F653: fld     dword ptr [edi+4]
0x95F656: mov     eax, [esp+18h+arg_4]
0x95F65A: fmul    dword ptr [eax+4]
0x95F65D: mov     ecx, [eax]
0x95F65F: fld     dword ptr [edi]
0x95F661: mov     edx, [eax+4]
0x95F664: fmul    dword ptr [eax]
0x95F666: mov     [esp+18h+var_10], ecx
0x95F66A: mov     ecx, [eax+8]
0x95F66D: mov     [esp+18h+var_C], edx
0x95F671: faddp   st(1), st
0x95F673: lea     edx, [esp+18h+var_10]
0x95F677: fld     dword ptr [edi+8]
0x95F67A: mov     [esp+18h+var_8], ecx
0x95F67E: fmul    dword ptr [eax+8]
0x95F681: push    edx
0x95F682: mov     ecx, esi
0x95F684: faddp   st(1), st
0x95F686: fstp    [esp+1Ch+var_4]
0x95F68A: call    sub_95DB70
0x95F68F: pop     edi
0x95F690: mov     eax, esi
0x95F692: pop     esi
0x95F693: add     esp, 10h
0x95F696: retn    8
