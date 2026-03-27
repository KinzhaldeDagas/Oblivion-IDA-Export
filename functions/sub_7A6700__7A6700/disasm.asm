0x7A6700: push    ebp
0x7A6701: mov     ebp, esp
0x7A6703: and     esp, 0FFFFFFF8h
0x7A6706: sub     esp, 68h
0x7A6709: mov     eax, [ebp+arg_0]
0x7A670C: fld     dword ptr [eax]
0x7A670E: fstp    [esp+68h+var_30]
0x7A6712: fld     dword ptr [eax+4]
0x7A6715: fstp    [esp+68h+var_2C]
0x7A6719: fld     [esp+68h+var_2C]
0x7A671D: fld     [esp+68h+var_30]
0x7A6721: call    sub_98598A
0x7A6726: fstp    dword ptr [esp+68h+var_68]
0x7A6729: fld     dword ptr [esp+68h+var_68]
0x7A672C: mov     eax, ds:0B42A80h
0x7A6731: test    al, 1
0x7A6733: fmul    qword ptr ds:0A8BA48h
0x7A6739: fstp    dword ptr [esp+68h+var_68]
0x7A673C: fldz
0x7A673E: fld     dword ptr ds:0A3D65Ch
0x7A6744: fld1
0x7A6746: jnz     short loc_7A676E
0x7A6748: fxch    st(2)
0x7A674A: or      eax, 1
0x7A674D: fst     dword ptr ds:0B42A74h
0x7A6753: mov     ds:0B42A80h, eax
0x7A6758: fxch    st(1)
0x7A675A: fst     dword ptr ds:0B42A78h
0x7A6760: fxch    st(2)
0x7A6762: fst     dword ptr ds:0B42A7Ch
0x7A6768: fxch    st(1)
0x7A676A: fxch    st(2)
0x7A676C: fxch    st(1)
0x7A676E: test    al, 2
0x7A6770: fld     dword ptr ds:0A45E4Ch
0x7A6776: jnz     short loc_7A679A
0x7A6778: fxch    st(3)
0x7A677A: or      eax, 2
0x7A677D: fst     dword ptr ds:0B42A68h
0x7A6783: mov     ds:0B42A80h, eax
0x7A6788: fxch    st(3)
0x7A678A: fst     dword ptr ds:0B42A6Ch
0x7A6790: fxch    st(1)
0x7A6792: fst     dword ptr ds:0B42A70h
0x7A6798: fxch    st(1)
0x7A679A: test    al, 4
0x7A679C: jnz     short loc_7A67BE
0x7A679E: fxch    st(3)
0x7A67A0: or      eax, 4
0x7A67A3: fst     dword ptr ds:0B42A5Ch
0x7A67A9: mov     ds:0B42A80h, eax
0x7A67AE: fst     dword ptr ds:0B42A64h
0x7A67B4: fxch    st(3)
0x7A67B6: fstp    dword ptr ds:0B42A60h
0x7A67BC: jmp     short loc_7A67C0
0x7A67BE: fstp    st
0x7A67C0: test    al, 8
0x7A67C2: jnz     loc_7A6AFC
0x7A67C8: fxch    st(2)
0x7A67CA: or      eax, 8
0x7A67CD: fst     dword ptr ds:0B42A50h
0x7A67D3: mov     ds:0B42A80h, eax
0x7A67D8: fst     dword ptr ds:0B42A58h
0x7A67DE: fxch    st(1)
0x7A67E0: fstp    dword ptr ds:0B42A54h
0x7A67E6: fxch    st(1)
0x7A67E8: test    al, 10h
0x7A67EA: jnz     short loc_7A67F4
0x7A67EC: or      eax, 10h
0x7A67EF: mov     ds:0B42A80h, eax
0x7A67F4: fld     dword ptr ds:0B42A74h
0x7A67FA: push    ecx
0x7A67FB: fstp    dword ptr ds:0B42A20h
0x7A6801: lea     ecx, [esp+6Ch+var_24]
0x7A6805: fld     dword ptr ds:0B42A78h
0x7A680B: fstp    dword ptr ds:0B42A24h
0x7A6811: fld     dword ptr ds:0B42A7Ch
0x7A6817: fstp    dword ptr ds:0B42A28h
0x7A681D: fld     dword ptr ds:0B42A68h
0x7A6823: fstp    dword ptr ds:0B42A2Ch
0x7A6829: fld     dword ptr ds:0B42A6Ch
0x7A682F: fstp    dword ptr ds:0B42A30h
0x7A6835: fld     dword ptr ds:0B42A70h
0x7A683B: fstp    dword ptr ds:0B42A34h
0x7A6841: fld     dword ptr ds:0B42A5Ch
0x7A6847: fstp    dword ptr ds:0B42A38h
0x7A684D: fld     dword ptr ds:0B42A60h
0x7A6853: fstp    dword ptr ds:0B42A3Ch
0x7A6859: fld     dword ptr ds:0B42A64h
0x7A685F: fstp    dword ptr ds:0B42A40h
0x7A6865: fld     dword ptr ds:0B42A50h
0x7A686B: fstp    dword ptr ds:0B42A44h
0x7A6871: fld     dword ptr ds:0B42A54h
0x7A6877: fstp    dword ptr ds:0B42A48h
0x7A687D: fld     dword ptr ds:0B42A58h
0x7A6883: fstp    dword ptr ds:0B42A4Ch
0x7A6889: fst     [esp+6Ch+var_24]
0x7A688D: fst     [esp+6Ch+var_14]
0x7A6891: fstp    [esp+6Ch+var_4]
0x7A6895: fst     [esp+6Ch+var_20]
0x7A6899: fst     [esp+6Ch+var_1C]
0x7A689D: fst     [esp+6Ch+var_18]
0x7A68A1: fst     [esp+6Ch+var_10]
0x7A68A5: fst     [esp+6Ch+var_C]
0x7A68A9: fstp    [esp+6Ch+var_8]
0x7A68AD: fld     dword ptr [esp+6Ch+var_68]
0x7A68B1: fstp    [esp+6Ch+var_6C]; float
0x7A68B4: call    sub_793AA0
0x7A68B9: fld     [esp+68h+var_18]
0x7A68BD: fld     dword ptr ds:0B42A78h
0x7A68C3: fst     [esp+68h+var_40]
0x7A68C7: fld     dword ptr ds:0B42A74h
0x7A68CD: fst     [esp+68h+var_38]
0x7A68D1: fld     [esp+68h+var_24]
0x7A68D5: fld     [esp+68h+var_C]
0x7A68D9: fld     dword ptr ds:0B42A7Ch
0x7A68DF: fst     [esp+68h+var_58]
0x7A68E3: fld     st(2)
0x7A68E5: fmul    st, st(4)
0x7A68E7: fld     st(6)
0x7A68E9: fmul    st, st(6)
0x7A68EB: faddp   st(1), st
0x7A68ED: fld     st(2)
0x7A68EF: fmulp   st(2), st
0x7A68F1: faddp   st(1), st
0x7A68F3: fstp    [esp+68h+var_30]
0x7A68F7: fld     [esp+68h+var_14]
0x7A68FB: fld     [esp+68h+var_20]
0x7A68FF: fld     [esp+68h+var_8]
0x7A6903: fstp    [esp+68h+var_68]
0x7A6906: fld     st
0x7A6908: fmulp   st(5), st
0x7A690A: fld     st(1)
0x7A690C: fmulp   st(6), st
0x7A690E: fxch    st(4)
0x7A6910: faddp   st(5), st
0x7A6912: fld     [esp+68h+var_68]
0x7A6915: fmul    [esp+68h+var_58]
0x7A6919: faddp   st(5), st
0x7A691B: fxch    st(4)
0x7A691D: fstp    [esp+68h+var_2C]
0x7A6921: fld     [esp+68h+var_10]
0x7A6925: fst     [esp+68h+var_48]
0x7A6929: fld     [esp+68h+var_1C]
0x7A692D: fst     [esp+68h+var_50]
0x7A6931: fld     [esp+68h+var_4]
0x7A6935: fstp    [esp+68h+var_60]
0x7A6939: fmul    [esp+68h+var_38]
0x7A693D: fxch    st(1)
0x7A693F: fmul    [esp+68h+var_40]
0x7A6943: faddp   st(1), st
0x7A6945: fld     [esp+68h+var_60]
0x7A6949: mov     eax, [esp+68h+var_30]
0x7A694D: fmul    [esp+68h+var_58]
0x7A6951: mov     ecx, [esp+68h+var_2C]
0x7A6955: mov     ds:0B2BA7Ch, eax
0x7A695A: mov     ds:0B2BA80h, ecx
0x7A6960: faddp   st(1), st
0x7A6962: fstp    [esp+68h+var_28]
0x7A6966: mov     edx, [esp+68h+var_28]
0x7A696A: fld     dword ptr ds:0B42A6Ch
0x7A6970: mov     ds:0B2BA84h, edx
0x7A6976: fst     [esp+68h+var_38]
0x7A697A: fld     dword ptr ds:0B42A68h
0x7A6980: fst     [esp+68h+var_40]
0x7A6984: fld     dword ptr ds:0B42A70h
0x7A698A: fstp    [esp+68h+var_58]
0x7A698E: fmul    st, st(3)
0x7A6990: fld     st(6)
0x7A6992: fmulp   st(2), st
0x7A6994: faddp   st(1), st
0x7A6996: fld     st(1)
0x7A6998: fmul    [esp+68h+var_58]
0x7A699C: faddp   st(1), st
0x7A699E: fstp    [esp+68h+var_30]
0x7A69A2: mov     eax, [esp+68h+var_30]
0x7A69A6: fld     st(2)
0x7A69A8: mov     ds:0B2BA88h, eax
0x7A69AD: fmul    [esp+68h+var_40]
0x7A69B1: fld     st(4)
0x7A69B3: fmul    [esp+68h+var_38]
0x7A69B7: faddp   st(1), st
0x7A69B9: fld     [esp+68h+var_68]
0x7A69BC: fmul    [esp+68h+var_58]
0x7A69C0: faddp   st(1), st
0x7A69C2: fstp    [esp+68h+var_2C]
0x7A69C6: mov     ecx, [esp+68h+var_2C]
0x7A69CA: fld     [esp+68h+var_50]
0x7A69CE: mov     ds:0B2BA8Ch, ecx
0x7A69D4: fmul    [esp+68h+var_40]
0x7A69D8: fld     [esp+68h+var_48]
0x7A69DC: fmul    [esp+68h+var_38]
0x7A69E0: faddp   st(1), st
0x7A69E2: fld     [esp+68h+var_60]
0x7A69E6: fmul    [esp+68h+var_58]
0x7A69EA: faddp   st(1), st
0x7A69EC: fstp    [esp+68h+var_28]
0x7A69F0: mov     edx, [esp+68h+var_28]
0x7A69F4: fld     dword ptr ds:0B42A60h
0x7A69FA: mov     ds:0B2BA90h, edx
0x7A6A00: fst     [esp+68h+var_40]
0x7A6A04: fld     dword ptr ds:0B42A5Ch
0x7A6A0A: fst     [esp+68h+var_38]
0x7A6A0E: fld     dword ptr ds:0B42A64h
0x7A6A14: fstp    [esp+68h+var_58]
0x7A6A18: fmul    st, st(3)
0x7A6A1A: fld     st(6)
0x7A6A1C: fmulp   st(2), st
0x7A6A1E: faddp   st(1), st
0x7A6A20: fld     st(1)
0x7A6A22: fmul    [esp+68h+var_58]
0x7A6A26: faddp   st(1), st
0x7A6A28: fstp    [esp+68h+var_30]
0x7A6A2C: mov     eax, [esp+68h+var_30]
0x7A6A30: fld     st(2)
0x7A6A32: fmul    [esp+68h+var_38]
0x7A6A36: fld     st(4)
0x7A6A38: fmul    [esp+68h+var_40]
0x7A6A3C: faddp   st(1), st
0x7A6A3E: fld     [esp+68h+var_68]
0x7A6A41: fmul    [esp+68h+var_58]
0x7A6A45: faddp   st(1), st
0x7A6A47: fstp    [esp+68h+var_2C]
0x7A6A4B: fld     [esp+68h+var_50]
0x7A6A4F: fmul    [esp+68h+var_38]
0x7A6A53: fld     [esp+68h+var_48]
0x7A6A57: fmul    [esp+68h+var_40]
0x7A6A5B: faddp   st(1), st
0x7A6A5D: fld     [esp+68h+var_60]
0x7A6A61: fmul    [esp+68h+var_58]
0x7A6A65: faddp   st(1), st
0x7A6A67: fstp    [esp+68h+var_28]
0x7A6A6B: fld     dword ptr ds:0B42A54h
0x7A6A71: mov     ecx, [esp+68h+var_2C]
0x7A6A75: fld     dword ptr ds:0B42A50h
0x7A6A7B: mov     edx, [esp+68h+var_28]
0x7A6A7F: fld     dword ptr ds:0B42A58h
0x7A6A85: mov     ds:0B2BA94h, eax
0x7A6A8A: fxch    st(4)
0x7A6A8C: mov     ds:0B2BA98h, ecx
0x7A6A92: fmul    st, st(1)
0x7A6A94: mov     ds:0B2BA9Ch, edx
0x7A6A9A: fxch    st(7)
0x7A6A9C: fmul    st, st(2)
0x7A6A9E: faddp   st(7), st
0x7A6AA0: fxch    st(2)
0x7A6AA2: fmul    st, st(3)
0x7A6AA4: faddp   st(6), st
0x7A6AA6: fxch    st(5)
0x7A6AA8: fstp    [esp+68h+var_30]
0x7A6AAC: mov     eax, [esp+68h+var_30]
0x7A6AB0: mov     ds:0B2BAA0h, eax
0x7A6AB5: fmul    st(2), st
0x7A6AB7: fxch    st(3)
0x7A6AB9: fmul    st, st(4)
0x7A6ABB: faddp   st(2), st
0x7A6ABD: fld     [esp+68h+var_68]
0x7A6AC0: fmul    st, st(1)
0x7A6AC2: faddp   st(2), st
0x7A6AC4: fxch    st(1)
0x7A6AC6: fstp    [esp+68h+var_2C]
0x7A6ACA: mov     ecx, [esp+68h+var_2C]
0x7A6ACE: fld     [esp+68h+var_50]
0x7A6AD2: mov     ds:0B2BAA4h, ecx
0x7A6AD8: fmulp   st(2), st
0x7A6ADA: fld     [esp+68h+var_48]
0x7A6ADE: fmulp   st(3), st
0x7A6AE0: fxch    st(1)
0x7A6AE2: faddp   st(2), st
0x7A6AE4: fmul    [esp+68h+var_60]
0x7A6AE8: faddp   st(1), st
0x7A6AEA: fstp    [esp+68h+var_28]
0x7A6AEE: mov     edx, [esp+68h+var_28]
0x7A6AF2: mov     ds:0B2BAA8h, edx
0x7A6AF8: mov     esp, ebp
0x7A6AFA: pop     ebp
0x7A6AFB: retn
0x7A6AFC: fstp    st(1)
0x7A6AFE: jmp     loc_7A67E8
