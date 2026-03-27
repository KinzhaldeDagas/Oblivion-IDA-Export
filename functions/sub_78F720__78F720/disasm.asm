0x78F720: cmp     dword ptr [ecx+18h], 0
0x78F724: jz      short locret_78F78E
0x78F726: cmp     dword ptr [ecx+1Ch], 2
0x78F72A: jl      short locret_78F78E
0x78F72C: fld     [esp+arg_4]
0x78F730: push    ebx
0x78F731: mov     ebx, [esp+4+arg_0]
0x78F735: push    esi
0x78F736: mov     dword ptr [ebx], 0
0x78F73C: mov     esi, [ecx+1Ch]
0x78F73F: mov     edx, 1
0x78F744: cmp     esi, edx
0x78F746: jle     short loc_78F76F
0x78F748: push    edi
0x78F749: mov     edi, [ecx+18h]
0x78F74C: add     edi, 88h ; 'ˆ'
0x78F752: fld     dword ptr [edi]
0x78F754: fcomp   st(1)
0x78F756: fnstsw  ax
0x78F758: test    ah, 41h
0x78F75B: jz      short loc_78F769
0x78F75D: add     edx, 1
0x78F760: add     edi, 48h ; 'H'
0x78F763: cmp     edx, esi
0x78F765: jl      short loc_78F752
0x78F767: jmp     short loc_78F76E
0x78F769: add     edx, 0FFFFFFFFh
0x78F76C: mov     [ebx], edx
0x78F76E: pop     edi
0x78F76F: mov     eax, [ebx]
0x78F771: mov     ecx, [ecx+18h]
0x78F774: lea     eax, [eax+eax*8]
0x78F777: fsub    dword ptr [ecx+eax*8+40h]
0x78F77B: lea     eax, [ecx+eax*8]
0x78F77E: fld     dword ptr [eax+88h]
0x78F784: pop     esi
0x78F785: fsub    dword ptr [eax+40h]
0x78F788: fdivp   st(1), st
0x78F78A: fstp    dword ptr [ebx+4]
0x78F78D: pop     ebx
0x78F78E: retn    8
