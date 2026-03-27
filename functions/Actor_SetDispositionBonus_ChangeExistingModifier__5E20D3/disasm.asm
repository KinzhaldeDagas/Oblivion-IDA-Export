0x5E20D3: mov     edx, [ebx]
0x5E20D5: push    eax
0x5E20D6: mov     eax, [edx+224h]
0x5E20DC: mov     ecx, ebx
0x5E20DE: call    eax
0x5E20E0: mov     [esp+4+arg_C], eax
0x5E20E4: fild    [esp+4+arg_C]
0x5E20E8: fld     [esp+4+arg_10]
0x5E20EC: fld     st
0x5E20EE: faddp   st(2), st
0x5E20F0: fldz
0x5E20F2: fcomp   st(2)
0x5E20F4: fnstsw  ax
0x5E20F6: test    ah, 41h
0x5E20F9: jnz     short loc_5E2115
0x5E20FB: fsubrp  st(1), st
0x5E20FD: fstp    [esp+4+arg_10]
0x5E2101: fld     [esp+4+arg_10]
0x5E2105: fiadd   dword ptr [edi]
0x5E2107: call    Double_To_SInt32
0x5E210C: mov     [edi], eax
0x5E210E: pop     edi
0x5E210F: pop     esi
0x5E2110: pop     ebp
0x5E2111: pop     ebx
0x5E2112: retn    8
0x5E2115: fld     qword ptr ds:0A309F0h
0x5E211B: fcomp   st(2)
0x5E211D: fnstsw  ax
0x5E211F: test    ah, 5
0x5E2122: jp      short loc_5E217F
0x5E2124: fxch    st(1)
0x5E2126: call    Double_To_SInt32
0x5E212B: sub     eax, 64h ; 'd'
0x5E212E: mov     [esp+4+arg_10], eax
0x5E2132: fild    [esp+4+arg_10]
0x5E2136: fstp    [esp+4+arg_10]
0x5E213A: fld     [esp+4+arg_10]
0x5E213E: fcom    st(1)
0x5E2140: fnstsw  ax
0x5E2142: test    ah, 5
0x5E2145: jp      short loc_5E2161
0x5E2147: fsubp   st(1), st
0x5E2149: fstp    [esp+4+arg_10]
0x5E214D: fld     [esp+4+arg_10]
0x5E2151: fiadd   dword ptr [edi]
0x5E2153: call    Double_To_SInt32
0x5E2158: mov     [edi], eax
0x5E215A: pop     edi
0x5E215B: pop     esi
0x5E215C: pop     ebp
0x5E215D: pop     ebx
0x5E215E: retn    8
0x5E2161: fstp    st
0x5E2163: fstp    st
0x5E2165: fldz
0x5E2167: fstp    [esp+4+arg_10]
0x5E216B: fld     [esp+4+arg_10]
0x5E216F: fiadd   dword ptr [edi]
0x5E2171: call    Double_To_SInt32
0x5E2176: mov     [edi], eax
0x5E2178: pop     edi
0x5E2179: pop     esi
0x5E217A: pop     ebp
0x5E217B: pop     ebx
0x5E217C: retn    8
0x5E217F: fstp    st(1)
0x5E2181: fiadd   dword ptr [edi]
0x5E2183: call    Double_To_SInt32
0x5E2188: mov     [edi], eax
0x5E218A: pop     edi
0x5E218B: pop     esi
0x5E218C: pop     ebp
0x5E218D: pop     ebx
0x5E218E: retn    8
