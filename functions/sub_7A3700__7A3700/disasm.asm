0x7A3700: push    0FFFFFFFFh
0x7A3702: push    offset SEH_7A3700
0x7A3707: mov     eax, large fs:0
0x7A370D: push    eax
0x7A370E: push    ecx
0x7A370F: push    ebx
0x7A3710: push    esi
0x7A3711: push    edi
0x7A3712: mov     eax, ds:0B30AACh
0x7A3717: xor     eax, esp
0x7A3719: push    eax
0x7A371A: lea     eax, [esp+20h+var_C]
0x7A371E: mov     large fs:0, eax
0x7A3724: mov     esi, ecx
0x7A3726: mov     [esp+20h+var_10], esi
0x7A372A: call    sub_78ECF0
0x7A372F: fld1
0x7A3731: fst     dword ptr [esi+10h]
0x7A3734: xor     ebx, ebx
0x7A3736: fstp    dword ptr [esi+14h]
0x7A3739: lea     ecx, [esi+20h]
0x7A373C: fld     dword ptr ds:0A30634h
0x7A3742: mov     [esp+20h+var_4], ebx
0x7A3746: fstp    dword ptr [esi+18h]
0x7A3749: mov     dword ptr [esi], offset ??_7CTreeEngine@@6B@; const CTreeEngine::`vftable'
0x7A374F: fldz
0x7A3751: fstp    dword ptr [esi+1Ch]
0x7A3754: call    sub_78EAF0
0x7A3759: lea     ecx, [esi+24h]
0x7A375C: mov     byte ptr [esp+20h+var_4], 1
0x7A3761: mov     byte ptr [esi+21h], 1
0x7A3765: call    sub_7A8620
0x7A376A: mov     [esi+58h], ebx
0x7A376D: mov     [esi+5Ch], ebx
0x7A3770: mov     [esi+64h], ebx
0x7A3773: mov     [esi+68h], ebx
0x7A3776: mov     [esi+6Ch], ebx
0x7A3779: mov     dword ptr [esi+70h], 6
0x7A3780: mov     [esi+78h], ebx
0x7A3783: mov     [esi+7Ch], ebx
0x7A3786: mov     [esi+80h], ebx
0x7A378C: lea     ecx, [esi+84h]
0x7A3792: mov     byte ptr [esp+20h+var_4], 4
0x7A3797: call    sub_7A5B10
0x7A379C: fld     dword ptr ds:0A3D65Ch
0x7A37A2: fstp    dword ptr [esi+0DCh]
0x7A37A8: lea     edi, [esi+0F4h]
0x7A37AE: fld1
0x7A37B0: mov     ecx, edi
0x7A37B2: fstp    dword ptr [esi+0E0h]
0x7A37B8: mov     byte ptr [esp+20h+var_4], 5
0x7A37BD: fld     dword ptr ds:0A3744Ch
0x7A37C3: mov     [esi+0D4h], ebx
0x7A37C9: fstp    dword ptr [esi+0E4h]
0x7A37CF: mov     [esi+0D8h], bl
0x7A37D5: fldz
0x7A37D7: mov     dword ptr [esi+0F0h], 1
0x7A37E1: fstp    dword ptr [esi+0E8h]
0x7A37E7: fld     dword ptr ds:0A43328h
0x7A37ED: fstp    dword ptr [esi+0ECh]
0x7A37F3: call    sub_7A8480
0x7A37F8: fld     dword ptr ds:0A41304h
0x7A37FE: mov     eax, [esp+20h+arg_0]
0x7A3802: fstp    dword ptr [esi+10Ch]
0x7A3808: mov     [esi+5Ch], eax
0x7A380B: fld     dword ptr [esi+0F8h]
0x7A3811: fadd    st, st
0x7A3813: mov     eax, esi
0x7A3815: fstp    [esp+20h+var_10]
0x7A3819: fld     dword ptr [edi]
0x7A381B: fmul    qword ptr ds:0A73DD8h
0x7A3821: fstp    [esp+20h+arg_0]
0x7A3825: fld     [esp+20h+arg_0]
0x7A3829: fld     st
0x7A382B: fchs
0x7A382D: fstp    dword ptr [esi+100h]
0x7A3833: fstp    dword ptr [esi+104h]
0x7A3839: fld     [esp+20h+var_10]
0x7A383D: fstp    dword ptr [esi+108h]
0x7A3843: mov     ecx, [esp+20h+var_C]
0x7A3847: mov     large fs:0, ecx
0x7A384E: pop     ecx
0x7A384F: pop     edi
0x7A3850: pop     esi
0x7A3851: pop     ebx
0x7A3852: add     esp, 10h
0x7A3855: retn    4
