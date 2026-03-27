0x7E3730: push    0FFFFFFFFh
0x7E3732: push    offset SEH_7E3730
0x7E3737: mov     eax, large fs:0
0x7E373D: push    eax
0x7E373E: sub     esp, 0Ch
0x7E3741: push    ebx
0x7E3742: push    ebp
0x7E3743: push    esi
0x7E3744: push    edi
0x7E3745: mov     eax, ds:0B30AACh
0x7E374A: xor     eax, esp
0x7E374C: push    eax
0x7E374D: lea     eax, [esp+2Ch+var_C]
0x7E3751: mov     large fs:0, eax
0x7E3757: mov     ebx, ecx
0x7E3759: xor     esi, esi
0x7E375B: mov     [esp+2Ch+var_14], esi
0x7E375F: xor     edi, edi
0x7E3761: mov     [esp+2Ch+var_4], esi
0x7E3765: mov     [esp+2Ch+var_18], edi
0x7E3769: mov     eax, [ebx+84h]
0x7E376F: test    eax, eax
0x7E3771: mov     byte ptr [esp+2Ch+var_4], 1
0x7E3776: jz      short loc_7E3782
0x7E3778: mov     esi, eax
0x7E377A: add     dword ptr [esi+60h], 1
0x7E377E: mov     [esp+2Ch+var_14], esi
0x7E3782: mov     eax, [esi+18h]
0x7E3785: cmp     eax, 1
0x7E3788: jnb     short loc_7E37E2
0x7E378A: lea     eax, [esp+2Ch+var_10]
0x7E378E: push    eax
0x7E378F: call    sub_772630
0x7E3794: add     esp, 4
0x7E3797: mov     eax, [eax]
0x7E3799: test    eax, eax
0x7E379B: jz      short loc_7E37A7
0x7E379D: add     dword ptr [eax+5Ch], 1
0x7E37A1: mov     [esp+2Ch+var_18], eax
0x7E37A5: mov     edi, eax
0x7E37A7: mov     eax, [esp+2Ch+var_10]
0x7E37AB: test    eax, eax
0x7E37AD: mov     byte ptr [esp+2Ch+var_4], 1
0x7E37B2: jz      short loc_7E37C7
0x7E37B4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7E37B8: mov     ecx, eax
0x7E37BA: add     eax, 5Ch ; '\'
0x7E37BD: cmp     dword ptr [eax], 0
0x7E37C0: jnz     short loc_7E37C7
0x7E37C2: call    sub_772560
0x7E37C7: push    2
0x7E37C9: push    1
0x7E37CB: push    0
0x7E37CD: push    edi
0x7E37CE: call    sub_801110
0x7E37D3: mov     ecx, [esi+14h]
0x7E37D6: add     esp, 10h
0x7E37D9: push    edi; a3
0x7E37DA: push    ecx; a2
0x7E37DB: mov     ecx, esi; this
0x7E37DD: call    sub_760010
0x7E37E2: mov     ebp, [ebx+88h]
0x7E37E8: mov     edi, [esi+58h]
0x7E37EB: cmp     edi, ebp
0x7E37ED: jz      short loc_7E3820
0x7E37EF: test    edi, edi
0x7E37F1: jz      short loc_7E380F
0x7E37F3: lea     edx, [edi+4]
0x7E37F6: push    edx; lpAddend
0x7E37F7: call    dword ptr ds:0A2807Ch
0x7E37FD: test    eax, eax
0x7E37FF: jnz     short loc_7E380F
0x7E3801: test    edi, edi
0x7E3803: jz      short loc_7E380F
0x7E3805: mov     eax, [edi]
0x7E3807: mov     edx, [eax]
0x7E3809: push    1
0x7E380B: mov     ecx, edi
0x7E380D: call    edx
0x7E380F: test    ebp, ebp
0x7E3811: mov     [esi+58h], ebp
0x7E3814: jz      short loc_7E3820
0x7E3816: add     ebp, 4
0x7E3819: push    ebp; lpAddend
0x7E381A: call    dword ptr ds:0A28078h
0x7E3820: mov     ebp, [ebx+8Ch]
0x7E3826: mov     edi, [esi+44h]
0x7E3829: cmp     edi, ebp
0x7E382B: jz      short loc_7E385E
0x7E382D: test    edi, edi
0x7E382F: jz      short loc_7E384D
0x7E3831: lea     eax, [edi+4]
0x7E3834: push    eax; lpAddend
0x7E3835: call    dword ptr ds:0A2807Ch
0x7E383B: test    eax, eax
0x7E383D: jnz     short loc_7E384D
0x7E383F: test    edi, edi
0x7E3841: jz      short loc_7E384D
0x7E3843: mov     edx, [edi]
0x7E3845: mov     eax, [edx]
0x7E3847: push    1
0x7E3849: mov     ecx, edi
0x7E384B: call    eax
0x7E384D: test    ebp, ebp
0x7E384F: mov     [esi+44h], ebp
0x7E3852: jz      short loc_7E385E
0x7E3854: add     ebp, 4
0x7E3857: push    ebp; lpAddend
0x7E3858: call    dword ptr ds:0A28078h
0x7E385E: cmp     dword ptr [esi+30h], 0
0x7E3862: jnz     short loc_7E386C
0x7E3864: call    sub_772DF0
0x7E3869: mov     [esi+30h], eax
0x7E386C: mov     ecx, [esi+30h]
0x7E386F: push    0
0x7E3871: push    0Fh
0x7E3873: push    0A8h ; '¨'
0x7E3878: call    sub_772CD0
0x7E387D: cmp     dword ptr [esi+30h], 0
0x7E3881: jnz     short loc_7E388B
0x7E3883: call    sub_772DF0
0x7E3888: mov     [esi+30h], eax
0x7E388B: mov     ecx, [esi+30h]
0x7E388E: push    0
0x7E3890: push    1
0x7E3892: push    1Bh
0x7E3894: call    sub_772CD0
0x7E3899: cmp     dword ptr [esi+30h], 0
0x7E389D: jnz     short loc_7E38A7
0x7E389F: call    sub_772DF0
0x7E38A4: mov     [esi+30h], eax
0x7E38A7: mov     ecx, [esi+30h]
0x7E38AA: push    0
0x7E38AC: push    5
0x7E38AE: push    13h
0x7E38B0: call    sub_772CD0
0x7E38B5: cmp     dword ptr [esi+30h], 0
0x7E38B9: jnz     short loc_7E38C3
0x7E38BB: call    sub_772DF0
0x7E38C0: mov     [esi+30h], eax
0x7E38C3: mov     ecx, [esi+30h]
0x7E38C6: push    0
0x7E38C8: push    6
0x7E38CA: push    14h
0x7E38CC: call    sub_772CD0
0x7E38D1: cmp     dword ptr [esi+30h], 0
0x7E38D5: jnz     short loc_7E38DF
0x7E38D7: call    sub_772DF0
0x7E38DC: mov     [esi+30h], eax
0x7E38DF: mov     ecx, [esi+30h]
0x7E38E2: push    0
0x7E38E4: push    0
0x7E38E6: push    0Fh
0x7E38E8: call    sub_772CD0
0x7E38ED: cmp     dword ptr [esi+30h], 0
0x7E38F1: jnz     short loc_7E38FB
0x7E38F3: call    sub_772DF0
0x7E38F8: mov     [esi+30h], eax
0x7E38FB: mov     ecx, [esi+30h]
0x7E38FE: push    0
0x7E3900: push    0
0x7E3902: push    34h ; '4'
0x7E3904: call    sub_772CD0
0x7E3909: cmp     dword ptr [esi+30h], 0
0x7E390D: jnz     short loc_7E3917
0x7E390F: call    sub_772DF0
0x7E3914: mov     [esi+30h], eax
0x7E3917: mov     ecx, [esi+30h]
0x7E391A: push    0
0x7E391C: push    1
0x7E391E: push    7
0x7E3920: call    sub_772CD0
0x7E3925: cmp     dword ptr [esi+30h], 0
0x7E3929: jnz     short loc_7E3933
0x7E392B: call    sub_772DF0
0x7E3930: mov     [esi+30h], eax
0x7E3933: mov     ecx, [esi+30h]
0x7E3936: push    0
0x7E3938: push    4
0x7E393A: push    17h
0x7E393C: call    sub_772CD0
0x7E3941: cmp     dword ptr [esi+30h], 0
0x7E3945: jnz     short loc_7E394F
0x7E3947: call    sub_772DF0
0x7E394C: mov     [esi+30h], eax
0x7E394F: mov     ecx, [esi+30h]
0x7E3952: push    0
0x7E3954: push    0
0x7E3956: push    0Eh
0x7E3958: call    sub_772CD0
0x7E395D: mov     ecx, [esp+2Ch+var_18]
0x7E3961: or      edi, 0FFFFFFFFh
0x7E3964: test    ecx, ecx
0x7E3966: mov     byte ptr [esp+2Ch+var_4], 0
0x7E396B: jz      short loc_7E3977
0x7E396D: add     [ecx+5Ch], edi
0x7E3970: jnz     short loc_7E3977
0x7E3972: call    sub_772560
0x7E3977: add     [esi+60h], edi
0x7E397A: mov     [esp+2Ch+var_4], edi
0x7E397E: jnz     short loc_7E3987
0x7E3980: mov     ecx, esi
0x7E3982: call    sub_7604D0
0x7E3987: mov     ecx, [esp+2Ch+var_C]
0x7E398B: mov     large fs:0, ecx
0x7E3992: pop     ecx
0x7E3993: pop     edi
0x7E3994: pop     esi
0x7E3995: pop     ebp
0x7E3996: pop     ebx
0x7E3997: add     esp, 18h
0x7E399A: retn
