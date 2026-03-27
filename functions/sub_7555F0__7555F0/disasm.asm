0x7555F0: sub     esp, 0Ch
0x7555F3: push    esi
0x7555F4: mov     esi, [esp+10h+arg_4]
0x7555F8: mov     eax, [esi]
0x7555FA: mov     edx, [eax+5Ch]
0x7555FD: push    edi
0x7555FE: mov     ecx, esi
0x755600: call    edx
0x755602: mov     edi, [esi+5Ch]
0x755605: xor     edx, edx
0x755607: cmp     [esi+48h], dx
0x75560B: jbe     short loc_75567E
0x75560D: fld     [esp+14h+arg_0]
0x755611: push    ebx
0x755612: fld     st
0x755614: movzx   eax, dx
0x755617: mov     ebx, [esi+1Ch]
0x75561A: lea     ecx, ds:0[eax*8]
0x755621: sub     ecx, eax
0x755623: lea     ecx, [edi+ecx*4]
0x755626: lea     eax, [eax+eax*2]
0x755629: lea     eax, [ebx+eax*4]
0x75562C: fsub    dword ptr [ecx+14h]
0x75562F: add     edx, 1
0x755632: fstp    [esp+18h+arg_4]
0x755636: fld     dword ptr [ecx]
0x755638: fld     [esp+18h+arg_4]
0x75563C: fld     st
0x75563E: fmulp   st(2), st
0x755640: fxch    st(1)
0x755642: fstp    [esp+18h+var_C]
0x755646: fld     dword ptr [ecx+4]
0x755649: fmul    st, st(1)
0x75564B: fstp    [esp+18h+var_8]
0x75564F: fmul    dword ptr [ecx+8]
0x755652: fstp    [esp+18h+var_4]
0x755656: fld     dword ptr [eax]
0x755658: fadd    [esp+18h+var_C]
0x75565C: fstp    dword ptr [eax]
0x75565E: fld     [esp+18h+var_8]
0x755662: fadd    dword ptr [eax+4]
0x755665: fstp    dword ptr [eax+4]
0x755668: fld     dword ptr [eax+8]
0x75566B: fadd    [esp+18h+var_4]
0x75566F: fstp    dword ptr [eax+8]
0x755672: fst     dword ptr [ecx+14h]
0x755675: cmp     dx, [esi+48h]
0x755679: jb      short loc_755612
0x75567B: fstp    st
0x75567D: pop     ebx
0x75567E: pop     edi
0x75567F: pop     esi
0x755680: add     esp, 0Ch
0x755683: retn    8
