0x547F80: mov     eax, [esp+arg_4]
0x547F84: mov     ecx, [esp+arg_0]
0x547F88: add     ecx, eax
0x547F8A: mov     [esp+arg_4], ecx
0x547F8E: fild    [esp+arg_4]
0x547F92: fmul    dword ptr ds:0B37BE8h
0x547F98: call    Double_To_SInt32
0x547F9D: cmp     byte ptr [esp+arg_C], 0
0x547FA2: mov     ecx, ds:0B37BE0h
0x547FA8: jz      short loc_547FAD
0x547FAA: add     ecx, 1
0x547FAD: mov     edx, [esp+arg_10]
0x547FB1: sub     edx, 0
0x547FB4: jz      short loc_547FC0
0x547FB6: sub     edx, 1
0x547FB9: jnz     short loc_547FC3
0x547FBB: sub     ecx, 1
0x547FBE: jmp     short loc_547FC3
0x547FC0: add     ecx, 1
0x547FC3: mov     edx, [esp+arg_8]
0x547FC7: fld1
0x547FC9: imul    ecx, edx
0x547FCC: fstp    [esp+arg_C]
0x547FD0: add     eax, ecx
0x547FD2: cmp     edx, ds:0B37BD8h
0x547FD8: mov     [esp+arg_4], eax
0x547FDC: jge     short loc_54800C
0x547FDE: fild    [esp+arg_8]
0x547FE2: fidiv   dword ptr ds:0B37BD8h
0x547FE8: fstp    [esp+arg_C]
0x547FEC: fld     [esp+arg_C]
0x547FF0: fld     dword ptr ds:0B37BD0h
0x547FF6: fld     st
0x547FF8: fld1
0x547FFA: fsubrp  st(1), st
0x547FFC: fmulp   st(2), st
0x547FFE: fxch    st(1)
0x548000: fstp    [esp+arg_C]
0x548004: fadd    [esp+arg_C]
0x548008: fstp    [esp+arg_C]
0x54800C: fild    [esp+arg_4]
0x548010: fmul    [esp+arg_C]
0x548014: jmp     Double_To_SInt32
