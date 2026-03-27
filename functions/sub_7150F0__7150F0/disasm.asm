0x7150F0: sub     esp, 10h
0x7150F3: push    esi
0x7150F4: mov     esi, [esp+14h+arg_0]
0x7150F8: fld     dword ptr [esi]
0x7150FA: push    edi
0x7150FB: fadd    dword ptr [esi+10h]
0x7150FE: mov     edi, ecx
0x715100: mov     [esp+18h+var_10], edi
0x715104: fadd    dword ptr [esi+20h]
0x715107: fstp    [esp+18h+arg_0]
0x71510B: fldz
0x71510D: fld     [esp+18h+arg_0]
0x715111: fcom    st(1)
0x715113: fnstsw  ax
0x715115: fstp    st(1)
0x715117: test    ah, 41h
0x71511A: jnz     short loc_715184
0x71511C: fadd    qword ptr ds:0A2F928h
0x715122: fstp    [esp+18h+arg_0]
0x715126: fld     [esp+18h+arg_0]
0x71512A: call    __CIsqrt
0x71512F: fstp    [esp+18h+arg_0]
0x715133: fld     [esp+18h+arg_0]
0x715137: fstp    [esp+18h+arg_0]
0x71513B: fld     [esp+18h+arg_0]
0x71513F: fld     st
0x715141: fld     qword ptr ds:0A2FAA0h
0x715147: fmul    st(1), st
0x715149: fxch    st(1)
0x71514B: fstp    dword ptr [edi]
0x71514D: fdivrp  st(1), st
0x71514F: fstp    [esp+18h+arg_0]
0x715153: fld     dword ptr [esi+1Ch]
0x715156: fsub    dword ptr [esi+14h]
0x715159: fld     [esp+18h+arg_0]
0x71515D: fld     st
0x71515F: fmulp   st(2), st
0x715161: fxch    st(1)
0x715163: fstp    dword ptr [edi+4]
0x715166: fld     dword ptr [esi+8]
0x715169: fsub    dword ptr [esi+18h]
0x71516C: fmul    st, st(1)
0x71516E: fstp    dword ptr [edi+8]
0x715171: fld     dword ptr [esi+0Ch]
0x715174: fsub    dword ptr [esi+4]
0x715177: fmulp   st(1), st
0x715179: fstp    dword ptr [edi+0Ch]
0x71517C: pop     edi
0x71517D: pop     esi
0x71517E: add     esp, 10h
0x715181: retn    4
0x715184: fstp    st
0x715186: push    ebx
0x715187: fld     dword ptr [esi+10h]
0x71518A: xor     ebx, ebx
0x71518C: fld     dword ptr [esi]
0x71518E: push    ebp
0x71518F: fcompp
0x715191: fnstsw  ax
0x715193: test    ah, 5
0x715196: jp      short loc_71519D
0x715198: mov     ebx, 1
0x71519D: fld     dword ptr [esi+20h]
0x7151A0: mov     eax, ebx
0x7151A2: shl     eax, 4
0x7151A5: fld     dword ptr [eax+esi]
0x7151A8: fcompp
0x7151AA: fnstsw  ax
0x7151AC: test    ah, 5
0x7151AF: jp      short loc_7151B6
0x7151B1: mov     ebx, 2
0x7151B6: mov     edi, ds:0B27120h[ebx*4]
0x7151BD: mov     ebp, ds:0B27120h[edi*4]
0x7151C4: mov     ecx, ebx
0x7151C6: shl     ecx, 4
0x7151C9: fld     dword ptr [ecx+esi]
0x7151CC: mov     edx, edi
0x7151CE: shl     edx, 4
0x7151D1: fsub    dword ptr [edx+esi]
0x7151D4: mov     eax, ebp
0x7151D6: shl     eax, 4
0x7151D9: fsub    dword ptr [eax+esi]
0x7151DC: fadd    qword ptr ds:0A2F928h
0x7151E2: fstp    [esp+20h+arg_0]
0x7151E6: fld     [esp+20h+arg_0]
0x7151EA: call    __CIsqrt
0x7151EF: fstp    [esp+20h+arg_0]
0x7151F3: fld     [esp+20h+arg_0]
0x7151F7: mov     eax, [esp+20h+var_10]
0x7151FB: fstp    [esp+20h+arg_0]
0x7151FF: lea     ecx, [eax+4]
0x715202: fld     [esp+20h+arg_0]
0x715206: mov     [esp+20h+var_C], ecx
0x71520A: fld     st
0x71520C: lea     edx, [eax+8]
0x71520F: fld     qword ptr ds:0A2FAA0h
0x715215: mov     [esp+20h+var_8], edx
0x715219: fmul    st(1), st
0x71521B: lea     ecx, [eax+0Ch]
0x71521E: fxch    st(1)
0x715220: mov     [esp+20h+var_4], ecx
0x715224: mov     edx, [esp+ebx*4+20h+var_C]
0x715228: fstp    [esp+20h+arg_0]
0x71522C: lea     ecx, [ebp+ebp*2+0]
0x715230: fld     [esp+20h+arg_0]
0x715234: fstp    dword ptr [edx]
0x715236: lea     edx, [ecx+edi]
0x715239: fdivrp  st(1), st
0x71523B: fstp    [esp+20h+arg_0]
0x71523F: fld     dword ptr [esi+edx*4]
0x715242: lea     edx, [edi+edi*2]
0x715245: add     edx, ebp
0x715247: fsub    dword ptr [esi+edx*4]
0x71524A: fld     [esp+20h+arg_0]
0x71524E: fld     st
0x715250: fmulp   st(2), st
0x715252: fxch    st(1)
0x715254: fstp    dword ptr [eax]
0x715256: lea     eax, [ebx+ebx*2]
0x715259: lea     edx, [eax+edi]
0x71525C: fld     dword ptr [esi+edx*4]
0x71525F: lea     edx, [edi+edi*2]
0x715262: add     edx, ebx
0x715264: fadd    dword ptr [esi+edx*4]
0x715267: mov     edx, [esp+edi*4+20h+var_C]
0x71526B: add     eax, ebp
0x71526D: add     ecx, ebx
0x71526F: fmul    st, st(1)
0x715271: fstp    [esp+20h+arg_0]
0x715275: fld     [esp+20h+arg_0]
0x715279: fstp    dword ptr [edx]
0x71527B: fld     dword ptr [esi+eax*4]
0x71527E: mov     eax, [esp+ebp*4+20h+var_C]
0x715282: fadd    dword ptr [esi+ecx*4]
0x715285: pop     ebp
0x715286: pop     ebx
0x715287: pop     edi
0x715288: fmulp   st(1), st
0x71528A: pop     esi
0x71528B: fstp    [esp+10h+arg_0]
0x71528F: fld     [esp+10h+arg_0]
0x715293: fstp    dword ptr [eax]
0x715295: add     esp, 10h
0x715298: retn    4
