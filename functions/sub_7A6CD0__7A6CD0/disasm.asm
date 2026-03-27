0x7A6CD0: push    ecx
0x7A6CD1: fld     qword ptr ds:0B42C90h
0x7A6CD7: call    Double_To_SInt32
0x7A6CDC: mov     ecx, eax
0x7A6CDE: mov     eax, 834E0B5Fh
0x7A6CE3: imul    ecx
0x7A6CE5: add     edx, ecx
0x7A6CE7: imul    ecx, 41A7h
0x7A6CED: sar     edx, 10h
0x7A6CF0: mov     eax, edx
0x7A6CF2: shr     eax, 1Fh
0x7A6CF5: add     eax, edx
0x7A6CF7: imul    eax, 7FFFFFFFh
0x7A6CFD: sub     ecx, eax
0x7A6CFF: test    ecx, ecx
0x7A6D01: mov     [esp+4+var_4], ecx
0x7A6D04: jg      short loc_7A6D0F
0x7A6D06: add     ecx, 7FFFFFFFh
0x7A6D0C: mov     [esp+4+var_4], ecx
0x7A6D0F: fild    [esp+4+var_4]
0x7A6D12: fst     qword ptr ds:0B42C90h
0x7A6D18: fstp    [esp+4+var_4]
0x7A6D1B: fld     [esp+4+var_4]
0x7A6D1E: fmul    qword ptr ds:0A89C50h
0x7A6D24: fstp    [esp+4+var_4]
0x7A6D27: fld     [esp+4+var_4]
0x7A6D2A: pop     ecx
0x7A6D2B: retn
