0x7987D0: sub     esp, 30h
0x7987D3: cmp     dword ptr [ecx+4], 0
0x7987D7: jz      loc_798937
0x7987DD: mov     ax, word ptr [esp+30h+arg_0]
0x7987E2: cmp     ax, [ecx+28h]
0x7987E6: jnb     loc_798937
0x7987EC: cmp     byte ptr [ecx+1], 0
0x7987F0: jz      loc_798937
0x7987F6: mov     ecx, [ecx+2Ch]
0x7987F9: test    ecx, ecx
0x7987FB: jz      loc_798937
0x798801: movzx   eax, ax
0x798804: mov     edx, eax
0x798806: shl     edx, 4
0x798809: add     edx, eax
0x79880B: push    edi
0x79880C: lea     edi, [ecx+edx*4]
0x79880F: test    edi, edi
0x798811: jz      loc_798936
0x798817: cmp     dword ptr [edi+40h], 0
0x79881B: jz      loc_798936
0x798821: cmp     dword ptr [edi+18h], 0
0x798825: jz      loc_798936
0x79882B: fldz
0x79882D: push    ebx
0x79882E: fst     [esp+38h+var_1C]
0x798832: xor     ebx, ebx
0x798834: cmp     [edi+0Ch], bx
0x798838: fst     [esp+38h+var_20]
0x79883C: fst     [esp+38h+var_24]
0x798840: fst     [esp+38h+var_10]
0x798844: fst     [esp+38h+var_14]
0x798848: fstp    [esp+38h+var_18]
0x79884C: jbe     loc_798935
0x798852: push    ebp
0x798853: push    esi
0x798854: xor     ebp, ebp
0x798856: mov     eax, [edi+34h]
0x798859: fld     dword ptr [eax+ebx*4]
0x79885C: mov     ecx, [edi+38h]
0x79885F: movzx   eax, byte ptr [ecx+ebx]
0x798863: fstp    [esp+40h+var_30]
0x798867: mov     esi, [edi+40h]
0x79886A: add     esi, ebp
0x79886C: shl     eax, 6
0x79886F: add     eax, ds:0B42A14h
0x798875: fld     dword ptr [esi]
0x798877: lea     edx, [esp+40h+var_C]
0x79887B: fstp    [esp+40h+var_24]
0x79887F: push    eax
0x798880: fld     dword ptr [esi+4]
0x798883: push    edx
0x798884: fstp    [esp+48h+var_20]
0x798888: lea     ecx, [esp+48h+var_24]
0x79888C: fld     dword ptr [esi+8]
0x79888F: fstp    [esp+48h+var_1C]
0x798893: call    sub_786ED0
0x798898: fld     dword ptr [esi+8]
0x79889B: mov     ecx, [eax]
0x79889D: fstp    [esp+40h+var_28]
0x7988A1: mov     edx, [eax+4]
0x7988A4: fld     dword ptr [esi+4]
0x7988A7: mov     [esp+40h+var_24], ecx
0x7988AB: fstp    [esp+40h+var_2C]
0x7988AF: mov     eax, [eax+8]
0x7988B2: fld     dword ptr [esi]
0x7988B4: mov     [esp+40h+var_20], edx
0x7988B8: fstp    [esp+40h+arg_0]
0x7988BC: mov     [esp+40h+var_1C], eax
0x7988C0: fld     [esp+40h+var_24]
0x7988C4: mov     eax, [edi+18h]
0x7988C7: fld     [esp+40h+arg_0]
0x7988CB: add     eax, ebp
0x7988CD: fld     st
0x7988CF: add     ebx, 1
0x7988D2: fsubp   st(2), st
0x7988D4: add     ebp, 0Ch
0x7988D7: fld     [esp+40h+var_30]
0x7988DB: fld     st
0x7988DD: fmulp   st(3), st
0x7988DF: fxch    st(2)
0x7988E1: faddp   st(1), st
0x7988E3: fstp    [esp+40h+var_18]
0x7988E7: mov     ecx, [esp+40h+var_18]
0x7988EB: fld     [esp+40h+var_20]
0x7988EF: mov     [eax], ecx
0x7988F1: fld     [esp+40h+var_2C]
0x7988F5: fld     st
0x7988F7: fsubp   st(2), st
0x7988F9: fld     st(2)
0x7988FB: fmulp   st(2), st
0x7988FD: faddp   st(1), st
0x7988FF: fstp    [esp+40h+var_14]
0x798903: mov     edx, [esp+40h+var_14]
0x798907: fld     [esp+40h+var_1C]
0x79890B: mov     [eax+4], edx
0x79890E: fld     [esp+40h+var_28]
0x798912: fld     st
0x798914: fsubp   st(2), st
0x798916: fxch    st(1)
0x798918: fmulp   st(2), st
0x79891A: faddp   st(1), st
0x79891C: fstp    [esp+40h+var_10]
0x798920: mov     ecx, [esp+40h+var_10]
0x798924: mov     [eax+8], ecx
0x798927: movzx   edx, word ptr [edi+0Ch]
0x79892B: cmp     ebx, edx
0x79892D: jl      loc_798856
0x798933: pop     esi
0x798934: pop     ebp
0x798935: pop     ebx
0x798936: pop     edi
0x798937: add     esp, 30h
0x79893A: retn    4
