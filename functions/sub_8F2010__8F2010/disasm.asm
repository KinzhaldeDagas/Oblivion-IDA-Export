0x8F2010: sub     esp, 44Ch
0x8F2016: push    ebx
0x8F2017: push    esi
0x8F2018: mov     esi, large fs:2Ch
0x8F201F: push    edi
0x8F2020: mov     edi, ds:0BA9DE4h
0x8F2026: mov     eax, [esi+edi*4]
0x8F2029: mov     ecx, [eax+1A4h]
0x8F202F: cmp     ecx, [eax+1A8h]
0x8F2035: jnb     short loc_8F2062
0x8F2037: mov     ebx, eax
0x8F2039: mov     ecx, [ebx+1A4h]
0x8F203F: mov     dword ptr [ecx], offset aLtcreateconvex; "LtCreateConvex"
0x8F2045: mov     dword ptr [ecx+0Ch], offset aHull; "Hull"
0x8F204C: rdtsc
0x8F204E: mov     [esp+458h+var_44C], eax
0x8F2052: mov     edx, [esp+458h+var_44C]
0x8F2056: mov     [ecx+4], edx
0x8F2059: add     ecx, 10h
0x8F205C: mov     [ebx+1A4h], ecx
0x8F2062: push    ebp
0x8F2063: lea     ecx, [esp+45Ch+var_410]
0x8F2067: call    sub_933D80
0x8F206C: mov     eax, [esp+45Ch+arg_C]
0x8F2073: mov     ebx, [esp+45Ch+arg_4]
0x8F207A: mov     edx, [esp+45Ch+arg_0]
0x8F2081: push    eax
0x8F2082: push    ebx
0x8F2083: lea     ecx, [esp+464h+var_410]
0x8F2087: push    ecx
0x8F2088: push    edx
0x8F2089: call    sub_8F1ED0
0x8F208E: lea     eax, [esp+46Ch+var_410]
0x8F2092: push    ebx
0x8F2093: push    eax
0x8F2094: call    sub_931A30
0x8F2099: mov     eax, [esi+edi*4]
0x8F209C: mov     ecx, [eax+1A4h]
0x8F20A2: mov     edx, [eax+1A8h]
0x8F20A8: add     esp, 18h
0x8F20AB: cmp     ecx, edx
0x8F20AD: jnb     short loc_8F20D3
0x8F20AF: mov     ebp, eax
0x8F20B1: mov     ecx, [ebp+1A4h]
0x8F20B7: mov     dword ptr [ecx], offset aStplanes; "Stplanes"
0x8F20BD: rdtsc
0x8F20BF: mov     [esp+45Ch+var_44C], eax
0x8F20C3: mov     edx, [esp+45Ch+var_44C]
0x8F20C7: mov     [ecx+4], edx
0x8F20CA: add     ecx, 0Ch
0x8F20CD: mov     [ebp+1A4h], ecx
0x8F20D3: mov     ebp, [esp+45Ch+arg_C]
0x8F20DA: mov     ecx, [esp+45Ch+arg_8]
0x8F20E1: push    ecx
0x8F20E2: cmp     ebp, 2
0x8F20E5: setz    al
0x8F20E8: push    ebx
0x8F20E9: lea     edx, [esp+464h+var_410]
0x8F20ED: mov     [esp+464h+var_442], al
0x8F20F1: push    edx
0x8F20F2: lea     eax, [esp+468h+var_444]
0x8F20F6: push    eax
0x8F20F7: lea     ecx, [esp+46Ch+var_445]
0x8F20FB: push    ecx
0x8F20FC: mov     [esp+470h+var_444], 1
0x8F2101: mov     [esp+470h+var_440], 37A7C5ACh
0x8F2109: mov     [esp+470h+var_43C], 368637BDh
0x8F2111: mov     [esp+470h+var_438], 358637BDh
0x8F2119: mov     [esp+470h+var_434], 3727C5ACh
0x8F2121: mov     [esp+470h+var_430], 3D4CCCCDh
0x8F2129: mov     [esp+470h+var_42C], 358637BDh
0x8F2131: mov     [esp+470h+var_428], 358637BDh
0x8F2139: mov     [esp+470h+var_424], 322BCC77h
0x8F2141: mov     [esp+470h+var_420], 358637BDh
0x8F2149: mov     [esp+470h+var_41C], 38D1B717h
0x8F2151: mov     [esp+470h+var_418], 3727C5ACh
0x8F2159: mov     [esp+470h+var_414], 37A7C5ACh
0x8F2161: call    sub_931AF0
0x8F2166: mov     eax, [esi+edi*4]
0x8F2169: mov     edx, [eax+1A4h]
0x8F216F: mov     ecx, [eax+1A8h]
0x8F2175: add     esp, 14h
0x8F2178: cmp     edx, ecx
0x8F217A: pop     ebp
0x8F217B: jnb     short loc_8F21A1
0x8F217D: mov     ebx, eax
0x8F217F: mov     ecx, [ebx+1A4h]
0x8F2185: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8F218B: rdtsc
0x8F218D: mov     [esp+458h+var_44C], eax
0x8F2191: mov     eax, [esp+458h+var_44C]
0x8F2195: mov     [ecx+4], eax
0x8F2198: add     ecx, 0Ch
0x8F219B: mov     [ebx+1A4h], ecx
0x8F21A1: mov     eax, [esp+458h+var_404]
0x8F21A5: test    eax, eax
0x8F21A7: js      short loc_8F21C7
0x8F21A9: mov     ecx, [esp+458h+var_40C]
0x8F21AD: mov     edx, [esi+edi*4]
0x8F21B0: and     eax, 3FFFFFFFh
0x8F21B5: push    14h
0x8F21B7: shl     eax, 3
0x8F21BA: push    eax
0x8F21BB: push    ecx
0x8F21BC: mov     ecx, [edx+19Ch]
0x8F21C2: call    sub_8A75D0
0x8F21C7: pop     edi
0x8F21C8: pop     esi
0x8F21C9: pop     ebx
0x8F21CA: add     esp, 44Ch
0x8F21D0: retn
