0x97A530: sub     esp, 58h
0x97A533: mov     eax, [esp+58h+arg_4]
0x97A537: mov     edx, [esp+58h+arg_C]
0x97A53B: mov     [esp+58h+var_40], eax
0x97A53F: mov     eax, [esp+58h+arg_10]
0x97A543: mov     [esp+58h+var_34], eax
0x97A547: push    esi
0x97A548: mov     esi, ecx
0x97A54A: mov     ecx, [esp+5Ch+arg_8]
0x97A54E: mov     eax, [esi+7Ch]
0x97A551: mov     [esp+5Ch+var_8], 0
0x97A559: mov     [esp+5Ch+var_4], 0
0x97A561: mov     [esp+5Ch+var_3C], ecx
0x97A565: mov     [esp+5Ch+var_38], edx
0x97A569: mov     ecx, [eax+10h]
0x97A56C: mov     edx, [eax+14h]
0x97A56F: mov     eax, [eax+18h]
0x97A572: mov     [esp+5Ch+var_58], ecx
0x97A576: fld     [esp+5Ch+var_58]
0x97A57A: fld     dword ptr ds:0B3F9A8h
0x97A580: push    edi
0x97A581: mov     edi, [esp+60h+arg_0]
0x97A585: fld     st
0x97A587: mov     [esp+60h+var_50], eax
0x97A58B: fucomp  st(2)
0x97A58D: mov     eax, [edi+7Ch]
0x97A590: mov     ecx, [eax+10h]
0x97A593: mov     [esp+60h+var_54], edx
0x97A597: mov     edx, [eax+14h]
0x97A59A: mov     eax, [eax+18h]
0x97A59D: mov     [esp+60h+var_44], eax
0x97A5A1: fnstsw  ax
0x97A5A3: mov     [esp+60h+var_4C], ecx
0x97A5A7: fstp    st(1)
0x97A5A9: test    ah, 44h
0x97A5AC: mov     [esp+60h+var_48], edx
0x97A5B0: jp      loc_97A683
0x97A5B6: fld     [esp+60h+var_54]
0x97A5BA: fld     dword ptr ds:0B3F9ACh
0x97A5C0: fld     st
0x97A5C2: fucomp  st(2)
0x97A5C4: fnstsw  ax
0x97A5C6: fstp    st(1)
0x97A5C8: test    ah, 44h
0x97A5CB: jp      loc_97A67D
0x97A5D1: fld     [esp+60h+var_50]
0x97A5D5: fld     dword ptr ds:0B3F9B0h
0x97A5DB: fld     st
0x97A5DD: fucomp  st(2)
0x97A5DF: fnstsw  ax
0x97A5E1: fstp    st(1)
0x97A5E3: test    ah, 44h
0x97A5E6: jp      loc_97A67B
0x97A5EC: fld     [esp+60h+var_4C]
0x97A5F0: fucomp  st(3)
0x97A5F2: fnstsw  ax
0x97A5F4: fstp    st(2)
0x97A5F6: test    ah, 44h
0x97A5F9: jp      loc_97A681
0x97A5FF: fld     [esp+60h+var_48]
0x97A603: fucompp
0x97A605: fnstsw  ax
0x97A607: test    ah, 44h
0x97A60A: jp      short loc_97A683
0x97A60C: fld     [esp+60h+var_44]
0x97A610: fucompp
0x97A612: fnstsw  ax
0x97A614: test    ah, 44h
0x97A617: jp      short loc_97A685
0x97A619: fldz
0x97A61B: fstp    [esp+60h+var_30]
0x97A61F: fld     dword ptr [edi+40h]
0x97A622: fadd    dword ptr [esi+40h]
0x97A625: fstp    [esp+60h+var_4C]
0x97A629: fld     dword ptr [edi+44h]
0x97A62C: fadd    dword ptr [esi+44h]
0x97A62F: fstp    [esp+60h+var_48]
0x97A633: fld     dword ptr [edi+48h]
0x97A636: fadd    dword ptr [esi+48h]
0x97A639: fstp    [esp+60h+var_44]
0x97A63D: fld     [esp+60h+var_4C]
0x97A641: fld     qword ptr ds:0A2FAA0h
0x97A647: fmul    st(1), st
0x97A649: fxch    st(1)
0x97A64B: fstp    [esp+60h+var_58]
0x97A64F: mov     ecx, [esp+60h+var_58]
0x97A653: fld     [esp+60h+var_48]
0x97A657: mov     [esp+60h+var_2C], ecx
0x97A65B: fmul    st, st(1)
0x97A65D: fstp    [esp+60h+var_54]
0x97A661: mov     edx, [esp+60h+var_54]
0x97A665: mov     [esp+60h+var_28], edx
0x97A669: fmul    [esp+60h+var_44]
0x97A66D: fstp    [esp+60h+var_50]
0x97A671: mov     eax, [esp+60h+var_50]
0x97A675: mov     [esp+60h+var_24], eax
0x97A679: jmp     short loc_97A69F
0x97A67B: fstp    st
0x97A67D: fstp    st
0x97A67F: jmp     short loc_97A683
0x97A681: fstp    st(1)
0x97A683: fstp    st
0x97A685: lea     ecx, [esp+60h+var_2C]
0x97A689: push    ecx
0x97A68A: lea     edx, [esp+64h+var_30]
0x97A68E: push    edx
0x97A68F: lea     eax, [edi+4]
0x97A692: push    eax
0x97A693: lea     ecx, [esi+4]
0x97A696: call    sub_97CBE0
0x97A69B: test    eax, eax
0x97A69D: jz      short loc_97A6DE
0x97A69F: mov     ecx, [esp+60h+arg_14]
0x97A6A3: lea     edx, [esp+60h+var_20]
0x97A6A7: push    edx
0x97A6A8: lea     eax, [esp+64h+var_2C]
0x97A6AC: mov     byte ptr [ecx], 1
0x97A6AF: push    eax
0x97A6B0: lea     ecx, [esi+4]
0x97A6B3: call    sub_980240
0x97A6B8: lea     ecx, [esp+60h+var_14]
0x97A6BC: push    ecx
0x97A6BD: lea     edx, [esp+64h+var_2C]
0x97A6C1: push    edx
0x97A6C2: lea     ecx, [edi+4]
0x97A6C5: call    sub_980240
0x97A6CA: lea     eax, [esp+60h+var_40]
0x97A6CE: push    eax
0x97A6CF: mov     ecx, esi
0x97A6D1: call    sub_97A470
0x97A6D6: pop     edi
0x97A6D7: pop     esi
0x97A6D8: add     esp, 58h
0x97A6DB: retn    18h
0x97A6DE: pop     edi
0x97A6DF: xor     eax, eax
0x97A6E1: pop     esi
0x97A6E2: add     esp, 58h
0x97A6E5: retn    18h
