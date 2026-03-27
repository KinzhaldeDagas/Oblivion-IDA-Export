0x7A51C0: push    ebp
0x7A51C1: mov     ebp, esp
0x7A51C3: and     esp, 0FFFFFFF8h
0x7A51C6: sub     esp, 7Ch
0x7A51C9: push    ebx
0x7A51CA: push    esi
0x7A51CB: mov     esi, ecx
0x7A51CD: fld     dword ptr [esi]
0x7A51CF: push    edi
0x7A51D0: fld     [ebp+arg_10]
0x7A51D3: fld     st
0x7A51D5: fmulp   st(2), st
0x7A51D7: fxch    st(1)
0x7A51D9: fstp    [esp+88h+var_7C]
0x7A51DD: fld     [esp+88h+var_7C]
0x7A51E1: fst     [esp+88h+var_48]
0x7A51E5: fld     dword ptr [esi+4]
0x7A51E8: fmul    st, st(2)
0x7A51EA: fstp    [esp+88h+var_7C]
0x7A51EE: fld     [esp+88h+var_7C]
0x7A51F2: fst     [esp+88h+var_44]
0x7A51F6: fld     dword ptr [esi+8]
0x7A51F9: fmul    st, st(3)
0x7A51FB: fstp    [esp+88h+var_7C]
0x7A51FF: fld     [esp+88h+var_7C]
0x7A5203: fstp    [esp+88h+var_40]
0x7A5207: fld     [ebp+arg_4]
0x7A520A: fld     st
0x7A520C: fsub    [esp+88h+var_48]
0x7A5210: fstp    [esp+88h+var_54]
0x7A5214: fld     [ebp+arg_8]
0x7A5217: fld     st
0x7A5219: fsub    [esp+88h+var_44]
0x7A521D: fstp    [esp+88h+var_50]
0x7A5221: fld     [ebp+arg_C]
0x7A5224: fld     st
0x7A5226: fsub    [esp+88h+var_40]
0x7A522A: fstp    [esp+88h+var_4C]
0x7A522E: fxch    st(4)
0x7A5230: fstp    [esp+88h+var_48]
0x7A5234: fxch    st(2)
0x7A5236: fstp    [esp+88h+var_44]
0x7A523A: fld     [esp+88h+var_7C]
0x7A523E: fstp    [esp+88h+var_40]
0x7A5242: fld     [esp+88h+var_48]
0x7A5246: fadd    st, st(1)
0x7A5248: fstp    [esp+88h+var_30]
0x7A524C: fld     [esp+88h+var_44]
0x7A5250: fadd    st, st(2)
0x7A5252: fstp    [esp+88h+var_2C]
0x7A5256: fld     [esp+88h+var_40]
0x7A525A: fadd    st, st(3)
0x7A525C: fstp    [esp+88h+var_28]
0x7A5260: fld     dword ptr [esi+0Ch]
0x7A5263: fmul    st, st(4)
0x7A5265: fstp    dword ptr [esp+88h+var_68]
0x7A5269: fld     dword ptr [esi+10h]
0x7A526C: fmul    st, st(4)
0x7A526E: fstp    dword ptr [esp+88h+var_68+4]
0x7A5272: fld     dword ptr [esi+14h]
0x7A5275: fmul    st, st(4)
0x7A5277: fstp    [esp+88h+var_60]
0x7A527B: fld     st
0x7A527D: fsub    dword ptr [esp+88h+var_68]
0x7A5281: fstp    [esp+88h+var_48]
0x7A5285: fld     st(1)
0x7A5287: fsub    dword ptr [esp+88h+var_68+4]
0x7A528B: fstp    [esp+88h+var_44]
0x7A528F: fld     st(2)
0x7A5291: fsub    [esp+88h+var_60]
0x7A5295: fstp    [esp+88h+var_40]
0x7A5299: fld     dword ptr [esi+0Ch]
0x7A529C: fmul    st, st(4)
0x7A529E: fstp    [esp+88h+var_74]
0x7A52A2: fld     dword ptr [esi+10h]
0x7A52A5: fmul    st, st(4)
0x7A52A7: fstp    [esp+88h+var_70]
0x7A52AB: fxch    st(3)
0x7A52AD: fst     [esp+88h+var_68]
0x7A52B1: fmul    dword ptr [esi+14h]
0x7A52B4: fstp    [esp+88h+var_6C]
0x7A52B8: fld     [esp+88h+var_74]
0x7A52BC: faddp   st(3), st
0x7A52BE: fxch    st(2)
0x7A52C0: fstp    [esp+88h+var_18]
0x7A52C4: fld     [esp+88h+var_70]
0x7A52C8: mov     ebx, [ebp+arg_0]
0x7A52CB: faddp   st(2), st
0x7A52CD: xor     eax, eax
0x7A52CF: fxch    st(1)
0x7A52D1: mov     ecx, ebx
0x7A52D3: mov     [ebx+22h], ax
0x7A52D7: fstp    [esp+88h+var_14]
0x7A52DB: mov     [esp+88h+var_7C], eax
0x7A52DF: fadd    [esp+88h+var_6C]
0x7A52E3: fstp    [esp+88h+var_10]
0x7A52E7: call    sub_7877B0
0x7A52EC: test    ax, ax
0x7A52EF: jbe     loc_7A5458
0x7A52F5: fld     [esp+88h+var_68]
0x7A52F9: mov     edi, [ebp+arg_14]
0x7A52FC: fadd    st, st
0x7A52FE: fstp    [esp+88h+var_68]
0x7A5302: movzx   eax, word ptr [esp+88h+var_7C]
0x7A5307: push    eax
0x7A5308: mov     ecx, ebx
0x7A530A: call    sub_794730
0x7A530F: lea     ecx, [esp+88h+var_3C]
0x7A5313: fld     dword ptr [eax]
0x7A5315: push    ecx
0x7A5316: fstp    [esp+8Ch+var_3C]
0x7A531A: lea     edx, [esp+8Ch+var_30]
0x7A531E: fld     dword ptr [eax+4]
0x7A5321: push    edx
0x7A5322: fstp    [esp+90h+var_38]
0x7A5326: lea     ecx, [esp+90h+var_24]
0x7A532A: fld     dword ptr [eax+8]
0x7A532D: lea     eax, [esp+90h+var_54]
0x7A5331: push    eax
0x7A5332: fstp    [esp+94h+var_34]
0x7A5336: push    ecx
0x7A5337: mov     ecx, esi
0x7A5339: call    sub_7A50B0
0x7A533E: fld     [esp+88h+var_20]
0x7A5342: fsub    [esp+88h+var_50]
0x7A5346: fld     [esp+88h+var_24]
0x7A534A: fsub    [esp+88h+var_54]
0x7A534E: fld     [esp+88h+var_1C]
0x7A5352: fsub    [esp+88h+var_4C]
0x7A5356: fld     st(1)
0x7A5358: fmulp   st(2), st
0x7A535A: fld     st(2)
0x7A535C: fmulp   st(3), st
0x7A535E: fxch    st(1)
0x7A5360: faddp   st(2), st
0x7A5362: fmul    st, st
0x7A5364: faddp   st(1), st
0x7A5366: fstp    [esp+88h+var_78]
0x7A536A: mov     edx, [esp+88h+var_78]
0x7A536E: sar     edx, 1
0x7A5370: add     edx, 1FC00000h
0x7A5376: test    edi, edi
0x7A5378: mov     [esp+88h+var_78], edx
0x7A537C: fld     [esp+88h+var_78]
0x7A5380: fdiv    [esp+88h+var_68]
0x7A5384: fstp    [esp+88h+var_74]
0x7A5388: jz      short loc_7A53A7
0x7A538A: fld     dword ptr [edi+8]
0x7A538D: fstp    [esp+88h+var_78]
0x7A5391: fld     dword ptr [edi]
0x7A5393: fld     [esp+88h+var_78]
0x7A5397: fld     st
0x7A5399: fsubp   st(2), st
0x7A539B: fld     [esp+88h+var_74]
0x7A539F: fmulp   st(2), st
0x7A53A1: faddp   st(1), st
0x7A53A3: fstp    [esp+88h+var_74]
0x7A53A7: lea     eax, [esp+88h+var_3C]
0x7A53AB: push    eax
0x7A53AC: lea     ecx, [esp+8Ch+var_18]
0x7A53B0: push    ecx
0x7A53B1: lea     edx, [esp+90h+var_48]
0x7A53B5: push    edx
0x7A53B6: lea     eax, [esp+94h+var_C]
0x7A53BD: push    eax
0x7A53BE: mov     ecx, esi
0x7A53C0: call    sub_7A50B0
0x7A53C5: fld     [esp+88h+var_8]
0x7A53CC: fsub    [esp+88h+var_44]
0x7A53D0: fld     [esp+88h+var_C]
0x7A53D4: fsub    [esp+88h+var_48]
0x7A53D8: fld     [esp+88h+var_4]
0x7A53DF: fsub    [esp+88h+var_40]
0x7A53E3: fld     st(1)
0x7A53E5: fmulp   st(2), st
0x7A53E7: fld     st(2)
0x7A53E9: fmulp   st(3), st
0x7A53EB: fxch    st(1)
0x7A53ED: faddp   st(2), st
0x7A53EF: fmul    st, st
0x7A53F1: faddp   st(1), st
0x7A53F3: fstp    [esp+88h+var_78]
0x7A53F7: mov     ecx, [esp+88h+var_78]
0x7A53FB: sar     ecx, 1
0x7A53FD: add     ecx, 1FC00000h
0x7A5403: test    edi, edi
0x7A5405: mov     [esp+88h+var_78], ecx
0x7A5409: fld     [esp+88h+var_78]
0x7A540D: fdiv    [esp+88h+var_68]
0x7A5411: fstp    [esp+88h+var_70]
0x7A5415: jz      short loc_7A5435
0x7A5417: fld     dword ptr [edi+14h]
0x7A541A: fstp    [esp+88h+var_78]
0x7A541E: fld     dword ptr [edi+4]
0x7A5421: fld     [esp+88h+var_78]
0x7A5425: fld     st
0x7A5427: fsubp   st(2), st
0x7A5429: fld     [esp+88h+var_70]
0x7A542D: fmulp   st(2), st
0x7A542F: faddp   st(1), st
0x7A5431: fstp    [esp+88h+var_70]
0x7A5435: lea     edx, [esp+88h+var_74]
0x7A5439: push    edx
0x7A543A: mov     ecx, ebx
0x7A543C: call    sub_7964F0
0x7A5441: add     [esp+88h+var_7C], 1
0x7A5446: mov     ecx, ebx
0x7A5448: call    sub_7877B0
0x7A544D: cmp     word ptr [esp+88h+var_7C], ax
0x7A5452: jb      loc_7A5302
0x7A5458: pop     edi
0x7A5459: pop     esi
0x7A545A: pop     ebx
0x7A545B: mov     esp, ebp
0x7A545D: pop     ebp
0x7A545E: retn    18h
