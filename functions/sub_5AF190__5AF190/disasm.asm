0x5AF190: push    ecx
0x5AF191: fild    dword ptr [ecx+0C0h]
0x5AF197: push    esi
0x5AF198: push    edi
0x5AF199: lea     edi, [ecx+98h]
0x5AF19F: fisub   dword ptr [edi]
0x5AF1A1: xor     esi, esi
0x5AF1A3: fstp    [esp+0Ch+var_4]
0x5AF1A7: fld     [esp+0Ch+var_4]
0x5AF1AB: fmul    qword ptr ds:0A2FAA0h
0x5AF1B1: fstp    [esp+0Ch+var_4]
0x5AF1B5: fld     [esp+0Ch+var_4]
0x5AF1B9: call    Double_To_SInt32
0x5AF1BE: mov     edx, [esp+0Ch+arg_0]
0x5AF1C2: mov     ecx, edi
0x5AF1C4: mov     edi, [ecx]
0x5AF1C6: add     edi, eax
0x5AF1C8: cmp     edx, edi
0x5AF1CA: jl      short loc_5AF1E2
0x5AF1CC: add     esi, 1
0x5AF1CF: add     ecx, 28h ; '('
0x5AF1D2: cmp     esi, 5
0x5AF1D5: jl      short loc_5AF1C4
0x5AF1D7: pop     edi
0x5AF1D8: mov     eax, 4
0x5AF1DD: pop     esi
0x5AF1DE: pop     ecx
0x5AF1DF: retn    4
0x5AF1E2: cmp     esi, 0FFFFFFFFh
0x5AF1E5: jnz     short loc_5AF1F2
0x5AF1E7: pop     edi
0x5AF1E8: mov     eax, 4
0x5AF1ED: pop     esi
0x5AF1EE: pop     ecx
0x5AF1EF: retn    4
0x5AF1F2: pop     edi
0x5AF1F3: mov     eax, esi
0x5AF1F5: pop     esi
0x5AF1F6: pop     ecx
0x5AF1F7: retn    4
