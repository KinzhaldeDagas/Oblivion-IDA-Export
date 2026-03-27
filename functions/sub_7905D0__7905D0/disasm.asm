0x7905D0: push    ecx
0x7905D1: push    ebx
0x7905D2: mov     ebx, [esp+8+arg_8]
0x7905D6: push    ebp
0x7905D7: mov     ebp, [esp+0Ch+arg_4]
0x7905DB: mov     eax, ebx
0x7905DD: sub     eax, ebp
0x7905DF: sar     eax, 2
0x7905E2: cdq
0x7905E3: push    esi
0x7905E4: sub     eax, edx
0x7905E6: push    edi
0x7905E7: sar     eax, 1
0x7905E9: lea     edi, [ebp+eax*4+0]
0x7905ED: mov     eax, [esp+14h+arg_C]
0x7905F1: push    eax
0x7905F2: lea     ecx, [ebx-4]
0x7905F5: push    ecx
0x7905F6: push    edi
0x7905F7: push    ebp
0x7905F8: call    sub_7904B0
0x7905FD: add     esp, 10h
0x790600: cmp     ebp, edi
0x790602: lea     esi, [edi+4]
0x790605: jnb     short loc_790631
0x790607: mov     edx, [edi-4]
0x79060A: mov     eax, [edi]
0x79060C: fld     dword ptr [edx+2Ch]
0x79060F: fld     dword ptr [eax+2Ch]
0x790612: fcom    st(1)
0x790614: fnstsw  ax
0x790616: test    ah, 5
0x790619: jnp     short loc_79062D
0x79061B: fcompp
0x79061D: fnstsw  ax
0x79061F: test    ah, 41h
0x790622: jz      short loc_790631
0x790624: add     edi, 0FFFFFFFCh
0x790627: cmp     ebp, edi
0x790629: jb      short loc_790607
0x79062B: jmp     short loc_790631
0x79062D: fstp    st(1)
0x79062F: fstp    st
0x790631: mov     eax, ebx
0x790633: sub     eax, esi
0x790635: add     eax, 3
0x790638: cdq
0x790639: and     edx, 3
0x79063C: add     eax, edx
0x79063E: sar     eax, 2
0x790641: cmp     eax, 4
0x790644: jl      short loc_7906BE
0x790646: mov     ecx, [edi]
0x790648: fld     dword ptr [ecx+2Ch]
0x79064B: mov     edx, [esi]
0x79064D: fld     dword ptr [edx+2Ch]
0x790650: fcom    st(1)
0x790652: fnstsw  ax
0x790654: test    ah, 41h
0x790657: jz      loc_7906FC
0x79065D: fcomp   st(1)
0x79065F: fnstsw  ax
0x790661: test    ah, 5
0x790664: jnp     loc_790702
0x79066A: mov     eax, [esi+4]
0x79066D: fld     dword ptr [eax+2Ch]
0x790670: fcom    st(1)
0x790672: fnstsw  ax
0x790674: test    ah, 41h
0x790677: jz      short loc_7906E7
0x790679: fcomp   st(1)
0x79067B: fnstsw  ax
0x79067D: test    ah, 5
0x790680: jnp     short loc_7906E9
0x790682: mov     ecx, [esi+8]
0x790685: fld     dword ptr [ecx+2Ch]
0x790688: fcom    st(1)
0x79068A: fnstsw  ax
0x79068C: test    ah, 41h
0x79068F: jz      short loc_7906EE
0x790691: fcomp   st(1)
0x790693: fnstsw  ax
0x790695: test    ah, 5
0x790698: jnp     short loc_7906F0
0x79069A: mov     edx, [esi+0Ch]
0x79069D: fld     dword ptr [edx+2Ch]
0x7906A0: fcom    st(1)
0x7906A2: fnstsw  ax
0x7906A4: test    ah, 41h
0x7906A7: jz      short loc_7906F5
0x7906A9: fcomp   st(1)
0x7906AB: fnstsw  ax
0x7906AD: test    ah, 5
0x7906B0: jnp     short loc_7906F7
0x7906B2: add     esi, 10h
0x7906B5: lea     eax, [ebx-0Ch]
0x7906B8: cmp     esi, eax
0x7906BA: jl      short loc_79064B
0x7906BC: fstp    st
0x7906BE: cmp     esi, ebx
0x7906C0: jnb     short loc_790704
0x7906C2: mov     ecx, [edi]
0x7906C4: fld     dword ptr [ecx+2Ch]
0x7906C7: mov     edx, [esi]
0x7906C9: fld     dword ptr [edx+2Ch]
0x7906CC: fcom    st(1)
0x7906CE: fnstsw  ax
0x7906D0: test    ah, 41h
0x7906D3: jz      short loc_790700
0x7906D5: fcomp   st(1)
0x7906D7: fnstsw  ax
0x7906D9: test    ah, 5
0x7906DC: jnp     short loc_790702
0x7906DE: add     esi, 4
0x7906E1: cmp     esi, ebx
0x7906E3: jnb     short loc_790702
0x7906E5: jmp     short loc_7906C7
0x7906E7: fstp    st(1)
0x7906E9: add     esi, 4
0x7906EC: jmp     short loc_790702
0x7906EE: fstp    st(1)
0x7906F0: add     esi, 8
0x7906F3: jmp     short loc_790702
0x7906F5: fstp    st(1)
0x7906F7: add     esi, 0Ch
0x7906FA: jmp     short loc_790702
0x7906FC: fstp    st(1)
0x7906FE: jmp     short loc_790702
0x790700: fstp    st
0x790702: fstp    st
0x790704: mov     ebp, edi
0x790706: mov     ecx, esi
0x790708: mov     [esp+14h+var_4], ebp
0x79070C: lea     esp, [esp+0]
0x790710: mov     eax, ebx
0x790712: sub     eax, ecx
0x790714: add     eax, 3
0x790717: cdq
0x790718: and     edx, 3
0x79071B: add     eax, edx
0x79071D: sar     eax, 2
0x790720: cmp     eax, 4
0x790723: jl      loc_79080C
0x790729: lea     esp, [esp+0]
0x790730: mov     eax, [edi]
0x790732: fld     dword ptr [eax+2Ch]
0x790735: mov     ebx, [ecx]
0x790737: fld     dword ptr [ebx+2Ch]
0x79073A: fcom    st(1)
0x79073C: fnstsw  ax
0x79073E: test    ah, 5
0x790741: jnp     short loc_79075D
0x790743: fcompp
0x790745: fnstsw  ax
0x790747: test    ah, 41h
0x79074A: jz      loc_790855
0x790750: mov     eax, esi
0x790752: mov     edx, [eax]
0x790754: mov     [eax], ebx
0x790756: add     esi, 4
0x790759: mov     [ecx], edx
0x79075B: jmp     short loc_790761
0x79075D: fstp    st(1)
0x79075F: fstp    st
0x790761: mov     edx, [edi]
0x790763: fld     dword ptr [edx+2Ch]
0x790766: mov     ebx, [ecx+4]
0x790769: fld     dword ptr [ebx+2Ch]
0x79076C: fcom    st(1)
0x79076E: fnstsw  ax
0x790770: test    ah, 5
0x790773: jnp     short loc_790790
0x790775: fcompp
0x790777: fnstsw  ax
0x790779: test    ah, 41h
0x79077C: jz      loc_790848
0x790782: mov     eax, esi
0x790784: mov     edx, [eax]
0x790786: mov     [eax], ebx
0x790788: add     esi, 4
0x79078B: mov     [ecx+4], edx
0x79078E: jmp     short loc_790794
0x790790: fstp    st(1)
0x790792: fstp    st
0x790794: mov     eax, [edi]
0x790796: fld     dword ptr [eax+2Ch]
0x790799: mov     ebx, [ecx+8]
0x79079C: fld     dword ptr [ebx+2Ch]
0x79079F: fcom    st(1)
0x7907A1: fnstsw  ax
0x7907A3: test    ah, 5
0x7907A6: jnp     short loc_7907C3
0x7907A8: fcompp
0x7907AA: fnstsw  ax
0x7907AC: test    ah, 41h
0x7907AF: jz      loc_79084D
0x7907B5: mov     eax, esi
0x7907B7: mov     edx, [eax]
0x7907B9: mov     [eax], ebx
0x7907BB: add     esi, 4
0x7907BE: mov     [ecx+8], edx
0x7907C1: jmp     short loc_7907C7
0x7907C3: fstp    st(1)
0x7907C5: fstp    st
0x7907C7: mov     edx, [edi]
0x7907C9: fld     dword ptr [edx+2Ch]
0x7907CC: mov     ebx, [ecx+0Ch]
0x7907CF: fld     dword ptr [ebx+2Ch]
0x7907D2: fcom    st(1)
0x7907D4: fnstsw  ax
0x7907D6: test    ah, 5
0x7907D9: jnp     short loc_7907F2
0x7907DB: fcompp
0x7907DD: fnstsw  ax
0x7907DF: test    ah, 41h
0x7907E2: jz      short loc_790852
0x7907E4: mov     eax, esi
0x7907E6: mov     edx, [eax]
0x7907E8: mov     [eax], ebx
0x7907EA: add     esi, 4
0x7907ED: mov     [ecx+0Ch], edx
0x7907F0: jmp     short loc_7907F6
0x7907F2: fstp    st(1)
0x7907F4: fstp    st
0x7907F6: mov     eax, [esp+14h+arg_8]
0x7907FA: add     ecx, 10h
0x7907FD: add     eax, 0FFFFFFF4h
0x790800: cmp     ecx, eax
0x790802: jl      loc_790730
0x790808: mov     ebx, [esp+14h+arg_8]
0x79080C: cmp     ecx, ebx
0x79080E: jnb     short loc_790859
0x790810: mov     edx, [edi]
0x790812: fld     dword ptr [edx+2Ch]
0x790815: mov     ebx, [ecx]
0x790817: fld     dword ptr [ebx+2Ch]
0x79081A: fcom    st(1)
0x79081C: fnstsw  ax
0x79081E: test    ah, 5
0x790821: jnp     short loc_790839
0x790823: fcompp
0x790825: fnstsw  ax
0x790827: test    ah, 41h
0x79082A: jz      short loc_790855
0x79082C: mov     eax, esi
0x79082E: mov     edx, [eax]
0x790830: mov     [eax], ebx
0x790832: add     esi, 4
0x790835: mov     [ecx], edx
0x790837: jmp     short loc_79083D
0x790839: fstp    st(1)
0x79083B: fstp    st
0x79083D: add     ecx, 4
0x790840: cmp     ecx, [esp+14h+arg_8]
0x790844: jb      short loc_790810
0x790846: jmp     short loc_790855
0x790848: add     ecx, 4
0x79084B: jmp     short loc_790855
0x79084D: add     ecx, 8
0x790850: jmp     short loc_790855
0x790852: add     ecx, 0Ch
0x790855: mov     ebx, [esp+14h+arg_8]
0x790859: mov     edx, [esp+14h+arg_4]
0x79085D: cmp     ebp, edx
0x79085F: jbe     short loc_7908A3
0x790861: mov     eax, [ebp-4]
0x790864: fld     dword ptr [eax+2Ch]
0x790867: mov     eax, [edi]
0x790869: fld     dword ptr [eax+2Ch]
0x79086C: fcom    st(1)
0x79086E: fnstsw  ax
0x790870: test    ah, 5
0x790873: jnp     short loc_790892
0x790875: fcompp
0x790877: fnstsw  ax
0x790879: test    ah, 41h
0x79087C: jz      short loc_79089D
0x79087E: mov     edx, [ebp-4]
0x790881: mov     eax, [edi-4]
0x790884: sub     edi, 4
0x790887: mov     [edi], edx
0x790889: mov     edx, [esp+14h+arg_4]
0x79088D: mov     [ebp-4], eax
0x790890: jmp     short loc_790896
0x790892: fstp    st(1)
0x790894: fstp    st
0x790896: add     ebp, 0FFFFFFFCh
0x790899: cmp     edx, ebp
0x79089B: jb      short loc_790861
0x79089D: mov     [esp+14h+var_4], ebp
0x7908A1: cmp     ebp, edx
0x7908A3: jnz     short loc_7908D7
0x7908A5: cmp     ecx, ebx
0x7908A7: jz      short loc_790916
0x7908A9: cmp     esi, ecx
0x7908AB: jz      short loc_7908B5
0x7908AD: mov     edx, [esi]
0x7908AF: mov     eax, [edi]
0x7908B1: mov     [edi], edx
0x7908B3: mov     [esi], eax
0x7908B5: mov     eax, ecx
0x7908B7: mov     ebp, [eax]
0x7908B9: mov     edx, edi
0x7908BB: mov     ebx, [edx]
0x7908BD: mov     [edx], ebp
0x7908BF: mov     ebp, [esp+14h+var_4]
0x7908C3: add     esi, 4
0x7908C6: add     edi, 4
0x7908C9: mov     [eax], ebx
0x7908CB: mov     ebx, [esp+14h+arg_8]
0x7908CF: add     ecx, 4
0x7908D2: jmp     loc_790710
0x7908D7: sub     ebp, 4
0x7908DA: cmp     ecx, ebx
0x7908DC: mov     [esp+14h+var_4], ebp
0x7908E0: jnz     short loc_790904
0x7908E2: sub     edi, 4
0x7908E5: cmp     ebp, edi
0x7908E7: jz      short loc_7908F3
0x7908E9: mov     edx, [edi]
0x7908EB: mov     eax, [ebp+0]
0x7908EE: mov     [ebp+0], edx
0x7908F1: mov     [edi], eax
0x7908F3: mov     edx, [esi-4]
0x7908F6: mov     eax, [edi]
0x7908F8: sub     esi, 4
0x7908FB: mov     [edi], edx
0x7908FD: mov     [esi], eax
0x7908FF: jmp     loc_790710
0x790904: mov     eax, [ecx]
0x790906: mov     edx, [ebp+0]
0x790909: mov     [ecx], edx
0x79090B: mov     [ebp+0], eax
0x79090E: add     ecx, 4
0x790911: jmp     loc_790710
0x790916: mov     eax, [esp+14h+arg_0]
0x79091A: mov     [eax], edi
0x79091C: pop     edi
0x79091D: mov     [eax+4], esi
0x790920: pop     esi
0x790921: pop     ebp
0x790922: pop     ebx
0x790923: pop     ecx
0x790924: retn
