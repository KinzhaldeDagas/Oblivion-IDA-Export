0x9758C0: mov     eax, [esp+arg_4]
0x9758C4: mov     edx, [esp+arg_0]
0x9758C8: fld     dword ptr [edx+eax*4+30h]
0x9758CC: push    ebp
0x9758CD: fsub    dword ptr [ecx+eax*4]
0x9758D0: mov     ebp, [esp+4+arg_8]
0x9758D4: fdiv    dword ptr [ebp+eax*4+0]
0x9758D8: mov     ebp, [esp+4+arg_C]
0x9758DC: fstp    dword ptr [ebp+0]
0x9758DF: fld     dword ptr [edx+eax*4+30h]
0x9758E3: fstp    dword ptr [ecx+eax*4]
0x9758E6: pop     ebp
0x9758E7: fld     dword ptr [ecx+esi*4]
0x9758EA: fld     dword ptr [edx+esi*4+30h]
0x9758EE: fchs
0x9758F0: fcompp
0x9758F2: fnstsw  ax
0x9758F4: fld     dword ptr [ecx+esi*4]
0x9758F7: test    ah, 41h
0x9758FA: jnz     short loc_975916
0x9758FC: fadd    dword ptr [edx+esi*4+30h]
0x975900: fstp    [esp+arg_4]
0x975904: fld     [esp+arg_4]
0x975908: fmul    st, st
0x97590A: fadd    dword ptr [ebx]
0x97590C: fstp    dword ptr [ebx]
0x97590E: fld     dword ptr [edx+esi*4+30h]
0x975912: fchs
0x975914: jmp     short loc_97593C
0x975916: fld     dword ptr [edx+esi*4+30h]
0x97591A: fcompp
0x97591C: fnstsw  ax
0x97591E: test    ah, 5
0x975921: jp      short loc_97593F
0x975923: fld     dword ptr [ecx+esi*4]
0x975926: fsub    dword ptr [edx+esi*4+30h]
0x97592A: fstp    [esp+arg_4]
0x97592E: fld     [esp+arg_4]
0x975932: fmul    st, st
0x975934: fadd    dword ptr [ebx]
0x975936: fstp    dword ptr [ebx]
0x975938: fld     dword ptr [edx+esi*4+30h]
0x97593C: fstp    dword ptr [ecx+esi*4]
0x97593F: fld     dword ptr [ecx+edi*4]
0x975942: fld     dword ptr [edx+edi*4+30h]
0x975946: fchs
0x975948: fcompp
0x97594A: fnstsw  ax
0x97594C: test    ah, 41h
0x97594F: jnz     short loc_975970
0x975951: fld     dword ptr [edx+edi*4+30h]
0x975955: fadd    dword ptr [ecx+edi*4]
0x975958: fstp    [esp+arg_4]
0x97595C: fld     [esp+arg_4]
0x975960: fmul    st, st
0x975962: fadd    dword ptr [ebx]
0x975964: fstp    dword ptr [ebx]
0x975966: fld     dword ptr [edx+edi*4+30h]
0x97596A: fchs
0x97596C: fstp    dword ptr [ecx+edi*4]
0x97596F: retn
0x975970: fld     dword ptr [ecx+edi*4]
0x975973: fld     dword ptr [edx+edi*4+30h]
0x975977: fcompp
0x975979: fnstsw  ax
0x97597B: test    ah, 5
0x97597E: jp      short locret_97599C
0x975980: fld     dword ptr [ecx+edi*4]
0x975983: fsub    dword ptr [edx+edi*4+30h]
0x975987: fstp    [esp+arg_4]
0x97598B: fld     [esp+arg_4]
0x97598F: fmul    st, st
0x975991: fadd    dword ptr [ebx]
0x975993: fstp    dword ptr [ebx]
0x975995: fld     dword ptr [edx+edi*4+30h]
0x975999: fstp    dword ptr [ecx+edi*4]
0x97599C: retn
