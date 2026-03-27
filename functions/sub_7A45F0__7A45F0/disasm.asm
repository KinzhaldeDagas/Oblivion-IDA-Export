0x7A45F0: push    0FFFFFFFFh
0x7A45F2: push    offset SEH_7A45F0
0x7A45F7: mov     eax, large fs:0
0x7A45FD: push    eax
0x7A45FE: sub     esp, 3Ch
0x7A4601: push    ebx
0x7A4602: push    ebp
0x7A4603: push    esi
0x7A4604: push    edi
0x7A4605: mov     eax, ds:0B30AACh
0x7A460A: xor     eax, esp
0x7A460C: push    eax
0x7A460D: lea     eax, [esp+5Ch+var_C]
0x7A4611: mov     large fs:0, eax
0x7A4617: mov     esi, ecx
0x7A4619: cmp     byte ptr [esi+0D8h], 0
0x7A4620: push    40h ; '@'; Size
0x7A4622: setz    al
0x7A4625: mov     ds:0B2B704h, al
0x7A462A: call    FormHeapAlloc
0x7A462F: add     esp, 4
0x7A4632: mov     [esp+5Ch+var_48], eax
0x7A4636: xor     ebx, ebx
0x7A4638: cmp     eax, ebx
0x7A463A: mov     [esp+5Ch+var_4], ebx
0x7A463E: jz      short loc_7A464A
0x7A4640: push    ebx
0x7A4641: mov     ecx, eax
0x7A4643: call    sub_7915C0
0x7A4648: jmp     short loc_7A464C
0x7A464A: xor     eax, eax
0x7A464C: or      ebp, 0FFFFFFFFh
0x7A464F: cmp     [esi+0D8h], bl
0x7A4655: mov     [esp+5Ch+var_4], ebp
0x7A4659: mov     [esi+58h], eax
0x7A465C: jnz     short loc_7A46BD
0x7A465E: mov     edi, [esi+0C0h]
0x7A4664: xor     ecx, ecx
0x7A4666: mov     eax, edi
0x7A4668: mov     edx, 10h
0x7A466D: mul     edx
0x7A466F: seto    cl
0x7A4672: neg     ecx
0x7A4674: or      ecx, eax
0x7A4676: xor     eax, eax
0x7A4678: add     ecx, 4
0x7A467B: setb    al
0x7A467E: neg     eax
0x7A4680: or      eax, ecx
0x7A4682: push    eax; Size
0x7A4683: call    FormHeapAlloc
0x7A4688: add     esp, 4
0x7A468B: mov     [esp+5Ch+var_48], eax
0x7A468F: cmp     eax, ebx
0x7A4691: mov     [esp+5Ch+var_4], 1
0x7A4699: jz      short loc_7A46B3
0x7A469B: push    offset sub_794EB0; a5
0x7A46A0: push    offset sub_6EF4A0; a4
0x7A46A5: push    edi; size
0x7A46A6: lea     ebx, [eax+4]
0x7A46A9: push    10h; a2
0x7A46AB: push    ebx; a1
0x7A46AC: mov     [eax], edi
0x7A46AE: call    ArrayConstructor
0x7A46B3: mov     [esp+5Ch+var_4], ebp
0x7A46B7: mov     [esi+0D4h], ebx
0x7A46BD: mov     ecx, [esi+0F0h]
0x7A46C3: mov     ds:0B2B708h, ecx
0x7A46C9: call    sub_790B00
0x7A46CE: mov     edi, ds:0B429E4h
0x7A46D4: lea     edx, [esi+84h]
0x7A46DA: mov     ds:0B429B8h, edx
0x7A46E0: xor     ebp, ebp
0x7A46E2: mov     ecx, [esi+64h]
0x7A46E5: test    ecx, ecx
0x7A46E7: jz      loc_7A4781
0x7A46ED: mov     eax, [esi+68h]
0x7A46F0: sub     eax, ecx
0x7A46F2: sar     eax, 2
0x7A46F5: cmp     ebp, eax
0x7A46F7: jnb     loc_7A4781
0x7A46FD: test    ecx, ecx
0x7A46FF: jz      short loc_7A470D
0x7A4701: mov     eax, [esi+68h]
0x7A4704: sub     eax, ecx
0x7A4706: sar     eax, 2
0x7A4709: cmp     ebp, eax
0x7A470B: jb      short loc_7A4718
0x7A470D: call    __invalid_parameter_noinfo
0x7A4712: mov     edi, ds:0B429E4h
0x7A4718: mov     eax, [esi+64h]
0x7A471B: mov     edx, ds:0B429E0h
0x7A4721: test    edx, edx
0x7A4723: mov     ebx, [eax+ebp*4]
0x7A4726: mov     [esp+5Ch+var_48], ebx
0x7A472A: jz      short loc_7A4752
0x7A472C: mov     ecx, ds:0B429E8h
0x7A4732: mov     eax, edi
0x7A4734: sub     eax, edx
0x7A4736: sub     ecx, edx
0x7A4738: sar     eax, 2
0x7A473B: sar     ecx, 2
0x7A473E: cmp     eax, ecx
0x7A4740: jnb     short loc_7A4752
0x7A4742: mov     [edi], ebx
0x7A4744: add     edi, 4
0x7A4747: mov     ds:0B429E4h, edi
0x7A474D: add     ebp, 1
0x7A4750: jmp     short loc_7A46E2
0x7A4752: cmp     edx, edi
0x7A4754: jbe     short loc_7A475B
0x7A4756: call    __invalid_parameter_noinfo
0x7A475B: lea     ecx, [esp+5Ch+var_48]
0x7A475F: push    ecx; int
0x7A4760: mov     eax, offset dword_B429DC
0x7A4765: push    edi; Src
0x7A4766: push    eax; int
0x7A4767: lea     edx, [esp+68h+var_44]
0x7A476B: push    edx; int
0x7A476C: mov     ecx, eax
0x7A476E: call    sub_7A3620
0x7A4773: mov     edi, ds:0B429E4h
0x7A4779: add     ebp, 1
0x7A477C: jmp     loc_7A46E2
0x7A4781: mov     eax, [esi+48h]
0x7A4784: lea     ebp, [esi+20h]
0x7A4787: push    eax
0x7A4788: mov     ecx, ebp
0x7A478A: call    sub_78EA30
0x7A478F: fld     dword ptr [esi+50h]
0x7A4792: fadd    dword ptr [esi+4Ch]
0x7A4795: sub     esp, 8
0x7A4798: mov     ecx, ebp
0x7A479A: fstp    [esp+64h+var_48]
0x7A479E: fld     [esp+64h+var_48]
0x7A47A2: fstp    [esp+64h+var_60]; float
0x7A47A6: fld     dword ptr [esi+4Ch]
0x7A47A9: fsub    dword ptr [esi+50h]
0x7A47AC: fstp    [esp+64h+var_48]
0x7A47B0: fld     [esp+64h+var_48]
0x7A47B4: fstp    [esp+64h+var_64]; float
0x7A47B7: call    sub_78EA00
0x7A47BC: mov     ecx, [esi+54h]
0x7A47BF: fstp    [esp+5Ch+var_48]
0x7A47C3: push    ecx; Seed
0x7A47C4: call    _srand
0x7A47C9: fldz
0x7A47CB: fcomp   dword ptr [esi+4Ch]
0x7A47CE: add     esp, 4
0x7A47D1: fnstsw  ax
0x7A47D3: test    ah, 5
0x7A47D6: jp      short loc_7A4856
0x7A47D8: xor     edi, edi
0x7A47DA: xor     ebx, ebx
0x7A47DC: lea     esp, [esp+0]
0x7A47E0: mov     eax, [esi+98h]
0x7A47E6: test    eax, eax
0x7A47E8: jz      short loc_7A4856
0x7A47EA: mov     ecx, [esi+9Ch]
0x7A47F0: sub     ecx, eax
0x7A47F2: mov     eax, 30C30C31h
0x7A47F7: imul    ecx
0x7A47F9: sar     edx, 4
0x7A47FC: mov     eax, edx
0x7A47FE: shr     eax, 1Fh
0x7A4801: add     eax, edx
0x7A4803: cmp     edi, eax
0x7A4805: jnb     short loc_7A4856
0x7A4807: mov     eax, [esi+98h]
0x7A480D: test    eax, eax
0x7A480F: jz      short loc_7A482E
0x7A4811: mov     ecx, [esi+9Ch]
0x7A4817: sub     ecx, eax
0x7A4819: mov     eax, 30C30C31h
0x7A481E: imul    ecx
0x7A4820: sar     edx, 4
0x7A4823: mov     eax, edx
0x7A4825: shr     eax, 1Fh
0x7A4828: add     eax, edx
0x7A482A: cmp     edi, eax
0x7A482C: jb      short loc_7A4833
0x7A482E: call    __invalid_parameter_noinfo
0x7A4833: mov     eax, [esi+98h]
0x7A4839: fld     dword ptr [eax+ebx+3Ch]
0x7A483D: add     eax, ebx
0x7A483F: fmul    dword ptr [esi+4Ch]
0x7A4842: add     edi, 1
0x7A4845: add     ebx, 54h ; 'T'
0x7A4848: fstp    dword ptr [eax+48h]
0x7A484B: fld     dword ptr [eax+40h]
0x7A484E: fmul    dword ptr [esi+4Ch]
0x7A4851: fstp    dword ptr [eax+4Ch]
0x7A4854: jmp     short loc_7A47E0
0x7A4856: mov     edx, [esi+48h]
0x7A4859: push    edx
0x7A485A: mov     ecx, ebp
0x7A485C: call    sub_78EA30
0x7A4861: movzx   eax, word ptr [esi+70h]
0x7A4865: mov     ecx, [esi+5Ch]
0x7A4868: push    eax
0x7A4869: call    sub_798090
0x7A486E: mov     ecx, [esi+5Ch]
0x7A4871: push    0
0x7A4873: call    sub_794A90
0x7A4878: fldz
0x7A487A: mov     ecx, [esi+48h]
0x7A487D: fst     [esp+5Ch+var_3C]
0x7A4881: push    ecx
0x7A4882: fst     [esp+60h+var_38]
0x7A4886: mov     ds:0B429C0h, ecx
0x7A488C: fld1
0x7A488E: mov     eax, [esi+48h]
0x7A4891: fst     [esp+60h+var_34]
0x7A4895: lea     edx, [esi+74h]
0x7A4898: fst     [esp+60h+var_30]
0x7A489C: fst     [esp+60h+var_20]
0x7A48A0: fst     [esp+60h+var_10]
0x7A48A4: fxch    st(1)
0x7A48A6: fst     [esp+60h+var_2C]
0x7A48AA: fst     [esp+60h+var_28]
0x7A48AE: fst     [esp+60h+var_24]
0x7A48B2: fst     [esp+60h+var_1C]
0x7A48B6: fst     [esp+60h+var_18]
0x7A48BA: fst     [esp+60h+var_14]
0x7A48BE: fld     dword ptr ds:0A30634h
0x7A48C4: fstp    [esp+60h+var_60]; float
0x7A48C7: fxch    st(1)
0x7A48C9: push    eax; int
0x7A48CA: push    ecx
0x7A48CB: fstp    [esp+68h+var_68]; float
0x7A48CE: mov     ecx, [esi+5Ch]
0x7A48D1: push    edx; int
0x7A48D2: push    ecx; int
0x7A48D3: lea     edx, [esp+70h+var_3C]
0x7A48D7: push    edx; int
0x7A48D8: lea     ecx, [esp+74h+var_30]
0x7A48DC: push    ecx; int
0x7A48DD: sub     esp, 8
0x7A48E0: fst     [esp+80h+var_7C]; float
0x7A48E4: lea     edx, [esi+4]
0x7A48E7: fstp    [esp+80h+var_80]; float
0x7A48EA: push    edx; int
0x7A48EB: fld     [esp+84h+var_48]
0x7A48EF: push    0; int
0x7A48F1: push    ecx
0x7A48F2: mov     ecx, [esi+58h]
0x7A48F5: fstp    [esp+8Ch+var_8C]; float
0x7A48F8: push    eax; int
0x7A48F9: call    sub_7925B0
0x7A48FE: mov     ecx, esi
0x7A4900: call    sub_7A3C80
0x7A4905: cmp     byte ptr [esi+0D8h], 0
0x7A490C: jnz     short loc_7A491D
0x7A490E: fld     [esp+5Ch+arg_0]
0x7A4912: push    ecx
0x7A4913: mov     ecx, esi
0x7A4915: fstp    [esp+60h+var_60]; float
0x7A4918: call    sub_7A3940
0x7A491D: push    0; Time
0x7A491F: call    __time64
0x7A4924: push    eax; Seed
0x7A4925: call    _srand
0x7A492A: add     esp, 8
0x7A492D: mov     ecx, [esp+5Ch+var_C]
0x7A4931: mov     large fs:0, ecx
0x7A4938: pop     ecx
0x7A4939: pop     edi
0x7A493A: pop     esi
0x7A493B: pop     ebp
0x7A493C: pop     ebx
0x7A493D: add     esp, 48h
0x7A4940: retn    4
