0x74A390: sub     esp, 190h
0x74A396: mov     eax, [esp+190h+arg_C]
0x74A39D: push    ebx
0x74A39E: mov     ebx, [eax+8]
0x74A3A1: push    ebp
0x74A3A2: push    esi
0x74A3A3: push    edi
0x74A3A4: lea     ecx, [esp+1A0h+var_9C]
0x74A3AB: push    ecx
0x74A3AC: mov     ecx, [eax+10h]
0x74A3AF: add     ecx, 64h ; 'd'
0x74A3B2: call    sub_718A80
0x74A3B7: lea     edx, [esp+1A0h+var_9C]
0x74A3BE: push    edx
0x74A3BF: lea     eax, [esp+1A4h+var_128]
0x74A3C3: push    eax
0x74A3C4: lea     ecx, [ebx+0Ch]
0x74A3C7: call    sub_53D7A0
0x74A3CC: mov     edx, ds:0B3F9B0h
0x74A3D2: mov     esi, eax
0x74A3D4: mov     eax, ds:0B3F9A8h
0x74A3D9: mov     ecx, 0Dh
0x74A3DE: lea     edi, [esp+1A0h+var_D0]
0x74A3E5: rep movsd
0x74A3E7: mov     ecx, [ebx+44h]
0x74A3EA: mov     ebx, [esp+1A0h+arg_10]
0x74A3F1: mov     esi, [esp+1A0h+arg_14]
0x74A3F8: mov     dword ptr [esp+1A0h+var_180], eax
0x74A3FC: mov     dword ptr [esp+1A0h+var_18C], eax
0x74A400: mov     [esp+1A0h+var_144], ecx
0x74A404: mov     ecx, ds:0B3F9ACh
0x74A40A: mov     [esp+1A0h+var_178], edx
0x74A40E: mov     [esp+1A0h+var_184], edx
0x74A412: mov     edx, [esp+1A0h+arg_8]
0x74A419: mov     eax, [edx+0B4h]
0x74A41F: mov     edx, [eax+20h]
0x74A422: mov     dword ptr [esp+1A0h+var_180+4], ecx
0x74A426: mov     dword ptr [esp+1A0h+var_18C+4], ecx
0x74A42A: mov     ecx, [eax+1Ch]
0x74A42D: mov     eax, [ebx+0Ch]
0x74A430: movzx   eax, word ptr [eax+esi*2]
0x74A434: lea     eax, [eax+eax*2]
0x74A437: add     eax, eax
0x74A439: add     eax, eax
0x74A43B: test    edx, edx
0x74A43D: mov     edi, [eax+ecx]
0x74A440: mov     [esp+1A0h+var_140], edi
0x74A444: mov     edi, [eax+ecx+4]
0x74A448: mov     ecx, [eax+ecx+8]
0x74A44C: mov     [esp+1A0h+var_13C], edi
0x74A450: mov     [esp+1A0h+var_138], ecx
0x74A454: jz      short loc_74A467
0x74A456: mov     ecx, [eax+edx]
0x74A459: mov     [esp+1A0h+var_168], ecx
0x74A45D: mov     ecx, [eax+edx+4]
0x74A461: mov     edx, [eax+edx+8]
0x74A465: jmp     short loc_74A487
0x74A467: fld1
0x74A469: fstp    [esp+1A0h+var_174]
0x74A46D: fldz
0x74A46F: mov     eax, [esp+1A0h+var_174]
0x74A473: fst     [esp+1A0h+var_170]
0x74A477: mov     [esp+1A0h+var_168], eax
0x74A47B: fstp    [esp+1A0h+var_16C]
0x74A47F: mov     ecx, [esp+1A0h+var_170]
0x74A483: mov     edx, [esp+1A0h+var_16C]
0x74A487: movzx   eax, word ptr [ebx+24h]
0x74A48B: xor     ebp, ebp
0x74A48D: test    eax, eax
0x74A48F: mov     [esp+1A0h+var_160], edx
0x74A493: mov     [esp+1A0h+var_164], ecx
0x74A497: jbe     loc_74A6FA
0x74A49D: mov     ecx, esi
0x74A49F: shl     ecx, 4
0x74A4A2: mov     [esp+1A0h+var_190], ecx
0x74A4A6: jmp     short loc_74A4B7
0x74A4A8: jmp     short loc_74A4B0
0x74A4AA: align 10h
0x74A4B0: mov     esi, [esp+1A0h+arg_14]
0x74A4B7: mov     ecx, [ebx+10h]
0x74A4BA: test    ecx, ecx
0x74A4BC: jz      short loc_74A4D0
0x74A4BE: imul    eax, esi
0x74A4C1: add     eax, ecx
0x74A4C3: movzx   eax, byte ptr [eax+ebp]
0x74A4C7: mov     ecx, [ebx+4]
0x74A4CA: movzx   eax, word ptr [ecx+eax*2]
0x74A4CE: jmp     short loc_74A4D7
0x74A4D0: mov     edx, [ebx+4]
0x74A4D3: movzx   eax, word ptr [edx+ebp*2]
0x74A4D7: mov     ecx, [esp+1A0h+arg_C]
0x74A4DE: mov     edx, [ecx+14h]
0x74A4E1: movzx   eax, ax
0x74A4E4: mov     ecx, [edx+eax*4]
0x74A4E7: imul    eax, 4Ch ; 'L'
0x74A4EA: add     eax, [esp+1A0h+var_144]
0x74A4EE: add     ecx, 64h ; 'd'
0x74A4F1: push    eax
0x74A4F2: lea     eax, [esp+1A4h+var_68]
0x74A4F9: push    eax
0x74A4FA: push    ecx
0x74A4FB: lea     ecx, [esp+1ACh+var_34]
0x74A502: push    ecx
0x74A503: lea     ecx, [esp+1B0h+var_D0]
0x74A50A: call    sub_53D7A0
0x74A50F: mov     ecx, eax
0x74A511: call    sub_53D7A0
0x74A516: mov     esi, eax
0x74A518: mov     ecx, 0Dh
0x74A51D: lea     edi, [esp+1A0h+var_128]
0x74A521: rep movsd
0x74A523: fld     [esp+1A0h+var_F8]
0x74A52A: push    ecx
0x74A52B: lea     edx, [esp+1A4h+var_F4]
0x74A532: lea     ecx, [esp+1A4h+var_128]
0x74A536: fstp    [esp+1A4h+var_1A4]; float
0x74A539: push    edx; int
0x74A53A: call    sub_710190
0x74A53F: mov     eax, [esp+1A0h+var_190]
0x74A543: mov     ecx, [ebx+8]
0x74A546: fld     dword ptr [eax+ecx]
0x74A549: fstp    [esp+1A0h+var_190]
0x74A54D: fld     [esp+1A0h+var_F0]
0x74A554: fld     [esp+1A0h+var_13C]
0x74A558: fld     st
0x74A55A: fmulp   st(2), st
0x74A55C: fld     [esp+1A0h+var_F4]
0x74A563: fld     [esp+1A0h+var_140]
0x74A567: fld     st
0x74A569: fmulp   st(2), st
0x74A56B: fxch    st(3)
0x74A56D: faddp   st(1), st
0x74A56F: fld     [esp+1A0h+var_EC]
0x74A576: fld     [esp+1A0h+var_138]
0x74A57A: fld     st
0x74A57C: fmulp   st(2), st
0x74A57E: fxch    st(2)
0x74A580: faddp   st(1), st
0x74A582: fadd    [esp+1A0h+var_104]
0x74A589: fstp    [esp+1A0h+var_174]
0x74A58D: fld     [esp+1A0h+var_E4]
0x74A594: fmul    st, st(2)
0x74A596: fld     [esp+1A0h+var_E8]
0x74A59D: fmul    st, st(4)
0x74A59F: faddp   st(1), st
0x74A5A1: fld     [esp+1A0h+var_E0]
0x74A5A8: fmul    st, st(2)
0x74A5AA: faddp   st(1), st
0x74A5AC: fadd    [esp+1A0h+var_100]
0x74A5B3: fstp    [esp+1A0h+var_170]
0x74A5B7: fld     [esp+1A0h+var_D8]
0x74A5BE: fmulp   st(2), st
0x74A5C0: fld     [esp+1A0h+var_DC]
0x74A5C7: fmulp   st(3), st
0x74A5C9: fxch    st(1)
0x74A5CB: faddp   st(2), st
0x74A5CD: fmul    [esp+1A0h+var_D4]
0x74A5D4: faddp   st(1), st
0x74A5D6: fadd    [esp+1A0h+var_FC]
0x74A5DD: fstp    [esp+1A0h+var_16C]
0x74A5E1: fld     [esp+1A0h+var_124]
0x74A5E5: fld     [esp+1A0h+var_164]
0x74A5E9: fld     st
0x74A5EB: fmulp   st(2), st
0x74A5ED: fld     [esp+1A0h+var_128]
0x74A5F1: fld     [esp+1A0h+var_168]
0x74A5F5: fld     st
0x74A5F7: fmulp   st(2), st
0x74A5F9: fxch    st(3)
0x74A5FB: faddp   st(1), st
0x74A5FD: fld     [esp+1A0h+var_120]
0x74A604: fld     [esp+1A0h+var_160]
0x74A608: add     eax, 4
0x74A60B: fld     st
0x74A60D: add     ebp, 1
0x74A610: fmulp   st(2), st
0x74A612: fxch    st(2)
0x74A614: faddp   st(1), st
0x74A616: fstp    [esp+1A0h+var_150]
0x74A61A: fld     [esp+1A0h+var_118]
0x74A621: fmul    st, st(2)
0x74A623: fld     [esp+1A0h+var_11C]
0x74A62A: fmul    st, st(4)
0x74A62C: faddp   st(1), st
0x74A62E: fld     [esp+1A0h+var_114]
0x74A635: fmul    st, st(2)
0x74A637: faddp   st(1), st
0x74A639: fstp    [esp+1A0h+var_14C]
0x74A63D: fld     [esp+1A0h+var_10C]
0x74A644: fmulp   st(2), st
0x74A646: fld     [esp+1A0h+var_110]
0x74A64D: fmulp   st(3), st
0x74A64F: fxch    st(1)
0x74A651: faddp   st(2), st
0x74A653: fmul    [esp+1A0h+var_108]
0x74A65A: faddp   st(1), st
0x74A65C: fstp    [esp+1A0h+var_148]
0x74A660: fld     [esp+1A0h+var_174]
0x74A664: fld     [esp+1A0h+var_190]
0x74A668: mov     [esp+1A0h+var_190], eax
0x74A66C: fld     st
0x74A66E: movzx   eax, word ptr [ebx+24h]
0x74A672: cmp     ebp, eax
0x74A674: fmulp   st(2), st
0x74A676: fxch    st(1)
0x74A678: fstp    [esp+1A0h+var_15C]
0x74A67C: fld     [esp+1A0h+var_170]
0x74A680: fmul    st, st(1)
0x74A682: fstp    [esp+1A0h+var_158]
0x74A686: fld     [esp+1A0h+var_16C]
0x74A68A: fmul    st, st(1)
0x74A68C: fstp    [esp+1A0h+var_154]
0x74A690: fld     [esp+1A0h+var_15C]
0x74A694: fadd    dword ptr [esp+1A0h+var_180]
0x74A698: fstp    dword ptr [esp+1A0h+var_180]
0x74A69C: fld     dword ptr [esp+1A0h+var_180+4]
0x74A6A0: fadd    [esp+1A0h+var_158]
0x74A6A4: fstp    dword ptr [esp+1A0h+var_180+4]
0x74A6A8: fld     [esp+1A0h+var_178]
0x74A6AC: fadd    [esp+1A0h+var_154]
0x74A6B0: fstp    [esp+1A0h+var_178]
0x74A6B4: fld     [esp+1A0h+var_150]
0x74A6B8: fmul    st, st(1)
0x74A6BA: fstp    [esp+1A0h+var_134]
0x74A6BE: fld     [esp+1A0h+var_14C]
0x74A6C2: fmul    st, st(1)
0x74A6C4: fstp    [esp+1A0h+var_130]
0x74A6C8: fmul    [esp+1A0h+var_148]
0x74A6CC: fstp    [esp+1A0h+var_12C]
0x74A6D0: fld     [esp+1A0h+var_134]
0x74A6D4: fadd    dword ptr [esp+1A0h+var_18C]
0x74A6D8: fstp    dword ptr [esp+1A0h+var_18C]
0x74A6DC: fld     dword ptr [esp+1A0h+var_18C+4]
0x74A6E0: fadd    [esp+1A0h+var_130]
0x74A6E4: fstp    dword ptr [esp+1A0h+var_18C+4]
0x74A6E8: fld     [esp+1A0h+var_184]
0x74A6EC: fadd    [esp+1A0h+var_12C]
0x74A6F0: fstp    [esp+1A0h+var_184]
0x74A6F4: jb      loc_74A4B0
0x74A6FA: lea     ecx, [esp+1A0h+var_18C]
0x74A6FE: call    sub_43F350
0x74A703: fstp    st
0x74A705: mov     eax, [esp+1A0h+arg_0]
0x74A70C: mov     edx, dword ptr [esp+1A0h+var_180]
0x74A710: mov     ecx, dword ptr [esp+1A0h+var_180+4]
0x74A714: mov     [eax], edx
0x74A716: mov     edx, [esp+1A0h+var_178]
0x74A71A: mov     [eax+4], ecx
0x74A71D: mov     ecx, dword ptr [esp+1A0h+var_18C]
0x74A721: mov     [eax+8], edx
0x74A724: mov     eax, [esp+1A0h+arg_4]
0x74A72B: mov     edx, dword ptr [esp+1A0h+var_18C+4]
0x74A72F: pop     edi
0x74A730: mov     [eax], ecx
0x74A732: mov     ecx, [esp+19Ch+var_184]
0x74A736: pop     esi
0x74A737: pop     ebp
0x74A738: mov     [eax+4], edx
0x74A73B: mov     [eax+8], ecx
0x74A73E: pop     ebx
0x74A73F: add     esp, 190h
0x74A745: retn    18h
