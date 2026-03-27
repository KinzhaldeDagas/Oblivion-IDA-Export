0x7D34C0: push    ebp
0x7D34C1: mov     ebp, esp
0x7D34C3: and     esp, 0FFFFFFF8h
0x7D34C6: push    0FFFFFFFFh
0x7D34C8: push    offset SEH_7D34C0
0x7D34CD: mov     eax, large fs:0
0x7D34D3: push    eax
0x7D34D4: sub     esp, 2F8h
0x7D34DA: mov     eax, ds:0B30AACh
0x7D34DF: xor     eax, esp
0x7D34E1: mov     [esp+304h+var_14], eax
0x7D34E8: push    ebx
0x7D34E9: push    esi
0x7D34EA: push    edi
0x7D34EB: mov     eax, ds:0B30AACh
0x7D34F0: xor     eax, esp
0x7D34F2: push    eax
0x7D34F3: lea     eax, [esp+314h+var_C]
0x7D34FA: mov     large fs:0, eax
0x7D3500: mov     esi, [ebp+arg_0]
0x7D3503: mov     ebx, [ebp+arg_4]
0x7D3506: mov     cl, 3
0x7D3508: mov     al, 4
0x7D350A: mov     [esp+314h+var_24], 0
0x7D3512: mov     [esp+314h+var_23], 1
0x7D351A: mov     [esp+314h+var_22], 0
0x7D3522: mov     [esp+314h+var_21], 2
0x7D352A: mov     [esp+314h+var_20], 0
0x7D3532: mov     [esp+314h+var_1F], cl
0x7D3539: mov     [esp+314h+var_1E], 0
0x7D3541: mov     [esp+314h+var_1D], al
0x7D3548: mov     [esp+314h+var_1C], 1
0x7D3550: mov     [esp+314h+var_1B], 2
0x7D3558: mov     [esp+314h+var_1A], 1
0x7D3560: mov     [esp+314h+var_19], cl
0x7D3567: mov     [esp+314h+var_18], 2
0x7D356F: mov     [esp+314h+var_17], al
0x7D3576: mov     [esp+314h+var_16], cl
0x7D357D: mov     [esp+314h+var_15], al
0x7D3584: lea     edi, [esp+314h+var_F8]
0x7D358B: mov     [esp+314h+var_2EC], 5
0x7D3593: mov     ecx, edi; this
0x7D3595: call    sub_716DB0
0x7D359A: add     edi, 10h
0x7D359D: sub     [esp+314h+var_2EC], 1
0x7D35A2: jns     short loc_7D3593
0x7D35A4: mov     [esp+314h+var_F8.ActivePlanes], 3Fh ; '?'
0x7D35AF: lea     edi, [esp+314h+var_90]
0x7D35B6: mov     [esp+314h+var_2EC], 5
0x7D35BE: mov     edi, edi
0x7D35C0: mov     ecx, edi; this
0x7D35C2: call    sub_716DB0
0x7D35C7: add     edi, 10h
0x7D35CA: sub     [esp+314h+var_2EC], 1
0x7D35CF: jns     short loc_7D35C0
0x7D35D1: fld     dword ptr [esi+64h]
0x7D35D4: mov     eax, [esi+88h]
0x7D35DA: fstp    dword ptr [esp+314h+var_2B8]
0x7D35DE: mov     ecx, [esi+8Ch]
0x7D35E4: fld     dword ptr [esi+70h]
0x7D35E7: mov     edx, [esi+90h]
0x7D35ED: fstp    dword ptr [esp+314h+var_2B8+4]
0x7D35F1: mov     [esp+314h+var_90.ActivePlanes], 3Fh ; '?'
0x7D35FC: fld     dword ptr [esi+7Ch]
0x7D35FF: mov     [esp+314h+var_280], eax
0x7D3606: fstp    [esp+314h+var_2B0]
0x7D360A: mov     [esp+314h+var_27C], ecx
0x7D3611: fld     dword ptr [esi+68h]
0x7D3614: mov     [esp+314h+var_278], edx
0x7D361B: fstp    dword ptr [esp+314h+var_300]
0x7D361F: mov     [esp+314h+var_22C], eax
0x7D3626: fld     dword ptr [esi+74h]
0x7D3629: mov     [esp+314h+var_228], ecx
0x7D3630: fstp    dword ptr [esp+314h+var_300+4]
0x7D3634: mov     [esp+314h+var_224], edx
0x7D363B: fld     dword ptr [esi+80h]
0x7D3641: fstp    [esp+314h+var_2F8]
0x7D3645: fld     dword ptr [esi+0F4h]
0x7D364B: fstp    [esp+314h+var_2EC]
0x7D364F: fld     [esp+314h+var_2EC]
0x7D3653: fld     dword ptr [esp+314h+var_300]
0x7D3657: fmul    st, st(1)
0x7D3659: fstp    dword ptr [esp+314h+var_288]
0x7D3660: fld     dword ptr [esp+314h+var_300+4]
0x7D3664: fmul    st, st(1)
0x7D3666: fstp    dword ptr [esp+314h+var_298]
0x7D366A: fmul    [esp+314h+var_2F8]
0x7D366E: fstp    dword ptr [esp+314h+var_290]
0x7D3675: fld     dword ptr [esi+6Ch]
0x7D3678: fstp    dword ptr [esp+314h+var_300]
0x7D367C: fld     dword ptr [esi+78h]
0x7D367F: fstp    dword ptr [esp+314h+var_300+4]
0x7D3683: fld     dword ptr [esi+84h]
0x7D3689: fstp    [esp+314h+var_2F8]
0x7D368D: fld     dword ptr [esi+0F0h]
0x7D3693: fstp    [esp+314h+var_2EC]
0x7D3697: fld     [esp+314h+var_2EC]
0x7D369B: fld     dword ptr [esp+314h+var_300]
0x7D369F: fmul    st, st(1)
0x7D36A1: fstp    [esp+314h+var_2C0]
0x7D36A5: fld     dword ptr [esp+314h+var_300+4]
0x7D36A9: fmul    st, st(1)
0x7D36AB: fstp    [esp+314h+var_2C4]
0x7D36AF: fmul    [esp+314h+var_2F8]
0x7D36B3: fstp    [esp+314h+var_2BC]
0x7D36B7: fld     dword ptr [esi+100h]
0x7D36BD: fstp    [esp+314h+var_2EC]
0x7D36C1: fld     [esp+314h+var_2EC]
0x7D36C5: fld     [esp+314h+var_2C0]
0x7D36C9: fmul    st, st(1)
0x7D36CB: fstp    [esp+314h+var_2EC]
0x7D36CF: fld     [esp+314h+var_2EC]
0x7D36D3: fst     [esp+314h+var_304]
0x7D36D7: fld     [esp+314h+var_2C4]
0x7D36DB: fmul    st, st(2)
0x7D36DD: fstp    [esp+314h+var_2EC]
0x7D36E1: fld     [esp+314h+var_2EC]
0x7D36E5: fst     dword ptr [esp+314h+var_2E8]
0x7D36E9: fld     [esp+314h+var_2BC]
0x7D36ED: fmul    st, st(3)
0x7D36EF: fstp    [esp+314h+var_2EC]
0x7D36F3: fld     [esp+314h+var_2EC]
0x7D36F7: fst     dword ptr [esp+314h+var_300]
0x7D36FB: fld     dword ptr [esp+314h+var_288]
0x7D3702: fmul    st, st(4)
0x7D3704: fstp    [esp+314h+var_2C8]
0x7D3708: fld     [esp+314h+var_2C8]
0x7D370C: fstp    [esp+314h+var_2D0]
0x7D3710: fld     dword ptr [esp+314h+var_298]
0x7D3714: fmul    st, st(4)
0x7D3716: fstp    dword ptr [esp+314h+var_288]
0x7D371D: fld     dword ptr [esp+314h+var_288]
0x7D3724: fstp    [esp+314h+var_2CC]
0x7D3728: fld     dword ptr [esp+314h+var_290]
0x7D372F: fmul    st, st(4)
0x7D3731: fstp    [esp+314h+var_2BC]
0x7D3735: fld     [esp+314h+var_2BC]
0x7D3739: fstp    [esp+314h+var_2D4]
0x7D373D: fld     dword ptr [esp+314h+var_2B8]
0x7D3741: fmul    st, st(4)
0x7D3743: fstp    [esp+314h+var_2C4]
0x7D3747: fld     [esp+314h+var_2C4]
0x7D374B: fstp    dword ptr [esp+314h+var_290]
0x7D3752: fld     dword ptr [esp+314h+var_2B8+4]
0x7D3756: fmul    st, st(4)
0x7D3758: fstp    [esp+314h+var_2C0]
0x7D375C: fld     [esp+314h+var_2C0]
0x7D3760: fstp    dword ptr [esp+314h+var_298]
0x7D3764: fld     [esp+314h+var_2B0]
0x7D3768: fmulp   st(4), st
0x7D376A: fxch    st(3)
0x7D376C: fstp    [esp+314h+var_2EC]
0x7D3770: fld     [esp+314h+var_2EC]
0x7D3774: fstp    dword ptr [esp+314h+var_2B8]
0x7D3778: fld     [esp+314h+var_280]
0x7D377F: fld     dword ptr [esp+314h+var_290]
0x7D3786: fadd    st, st(1)
0x7D3788: fstp    dword ptr [esp+314h+var_290]
0x7D378F: fld     [esp+314h+var_27C]
0x7D3796: fld     dword ptr [esp+314h+var_298]
0x7D379A: fadd    st, st(1)
0x7D379C: fstp    dword ptr [esp+314h+var_298]
0x7D37A0: fld     [esp+314h+var_278]
0x7D37A7: fld     dword ptr [esp+314h+var_2B8]
0x7D37AB: fadd    st, st(1)
0x7D37AD: fstp    dword ptr [esp+314h+var_2B8]
0x7D37B1: fld     dword ptr [esp+314h+var_290]
0x7D37B8: fadd    [esp+314h+var_2D0]
0x7D37BC: fstp    [esp+314h+var_2D0]
0x7D37C0: fld     dword ptr [esp+314h+var_298]
0x7D37C4: fadd    [esp+314h+var_2CC]
0x7D37C8: fstp    [esp+314h+var_2CC]
0x7D37CC: fld     dword ptr [esp+314h+var_2B8]
0x7D37D0: fadd    [esp+314h+var_2D4]
0x7D37D4: fstp    [esp+314h+var_2D4]
0x7D37D8: fld     [esp+314h+var_2D0]
0x7D37DC: fadd    [esp+314h+var_304]
0x7D37E0: fstp    [esp+314h+var_304]
0x7D37E4: fld     [esp+314h+var_2CC]
0x7D37E8: fadd    dword ptr [esp+314h+var_2E8]
0x7D37EC: fstp    dword ptr [esp+314h+var_2E8]
0x7D37F0: fld     [esp+314h+var_2D4]
0x7D37F4: fadd    dword ptr [esp+314h+var_300]
0x7D37F8: fstp    dword ptr [esp+314h+var_300]
0x7D37FC: fld     [esp+314h+var_304]
0x7D3800: fstp    dword ptr [esp+314h+var_2B8]
0x7D3804: mov     eax, dword ptr [esp+314h+var_2B8]
0x7D3808: fld     dword ptr [esp+314h+var_2E8]
0x7D380C: mov     [esp+314h+var_220], eax
0x7D3813: fstp    dword ptr [esp+314h+var_2B8+4]
0x7D3817: mov     ecx, dword ptr [esp+314h+var_2B8+4]
0x7D381B: fld     dword ptr [esp+314h+var_300]
0x7D381F: mov     [esp+314h+var_21C], ecx
0x7D3826: fstp    [esp+314h+var_2B0]
0x7D382A: mov     edx, [esp+314h+var_2B0]
0x7D382E: fxch    st(4)
0x7D3830: mov     [esp+314h+var_218], edx
0x7D3837: fst     dword ptr [esp+314h+var_2B8]
0x7D383B: fxch    st(3)
0x7D383D: fst     dword ptr [esp+314h+var_290]
0x7D3844: fxch    st(5)
0x7D3846: fst     dword ptr [esp+314h+var_298]
0x7D384A: fld     [esp+314h+var_2C8]
0x7D384E: fstp    [esp+314h+var_2D4]
0x7D3852: fld     dword ptr [esp+314h+var_288]
0x7D3859: fstp    [esp+314h+var_2CC]
0x7D385D: fld     [esp+314h+var_2BC]
0x7D3861: fstp    [esp+314h+var_2D0]
0x7D3865: fld     [esp+314h+var_2C4]
0x7D3869: fstp    dword ptr [esp+314h+var_300]
0x7D386D: fld     [esp+314h+var_2C0]
0x7D3871: fstp    dword ptr [esp+314h+var_2E8]
0x7D3875: fld     [esp+314h+var_2EC]
0x7D3879: fstp    [esp+314h+var_304]
0x7D387D: fld     dword ptr [esp+314h+var_300]
0x7D3881: fadd    st, st(3)
0x7D3883: fstp    dword ptr [esp+314h+var_300]
0x7D3887: fld     dword ptr [esp+314h+var_2E8]
0x7D388B: fadd    st, st(2)
0x7D388D: fstp    dword ptr [esp+314h+var_2E8]
0x7D3891: fld     [esp+314h+var_304]
0x7D3895: fadd    st, st(5)
0x7D3897: fstp    [esp+314h+var_304]
0x7D389B: fld     dword ptr [esp+314h+var_300]
0x7D389F: fadd    [esp+314h+var_2D4]
0x7D38A3: fstp    dword ptr [esp+314h+var_300]
0x7D38A7: fld     dword ptr [esp+314h+var_2E8]
0x7D38AB: fadd    [esp+314h+var_2CC]
0x7D38AF: fstp    dword ptr [esp+314h+var_2E8]
0x7D38B3: fld     [esp+314h+var_304]
0x7D38B7: fadd    [esp+314h+var_2D0]
0x7D38BB: fstp    [esp+314h+var_304]
0x7D38BF: fld     dword ptr [esp+314h+var_300]
0x7D38C3: fsub    dword ptr [esp+314h+var_2B8]
0x7D38C7: fstp    dword ptr [esp+314h+var_300]
0x7D38CB: fld     dword ptr [esp+314h+var_2E8]
0x7D38CF: fsub    dword ptr [esp+314h+var_290]
0x7D38D6: fstp    dword ptr [esp+314h+var_2E8]
0x7D38DA: fld     [esp+314h+var_304]
0x7D38DE: fsub    dword ptr [esp+314h+var_298]
0x7D38E2: fstp    [esp+314h+var_304]
0x7D38E6: fld     dword ptr [esp+314h+var_300]
0x7D38EA: fstp    dword ptr [esp+314h+var_300]
0x7D38EE: mov     eax, dword ptr [esp+314h+var_300]
0x7D38F2: fld     dword ptr [esp+314h+var_2E8]
0x7D38F6: mov     [esp+314h+var_214], eax
0x7D38FD: fstp    dword ptr [esp+314h+var_300+4]
0x7D3901: mov     ecx, dword ptr [esp+314h+var_300+4]
0x7D3905: fld     [esp+314h+var_304]
0x7D3909: mov     [esp+314h+var_210], ecx
0x7D3910: fstp    [esp+314h+var_2F8]
0x7D3914: mov     edx, [esp+314h+var_2F8]
0x7D3918: fxch    st(3)
0x7D391A: mov     [esp+314h+var_20C], edx
0x7D3921: fst     dword ptr [esp+314h+var_2B8]
0x7D3925: fxch    st(5)
0x7D3927: fst     dword ptr [esp+314h+var_290]
0x7D392E: fxch    st(3)
0x7D3930: fst     dword ptr [esp+314h+var_298]
0x7D3934: fld     [esp+314h+var_2C8]
0x7D3938: fstp    [esp+314h+var_2D4]
0x7D393C: fld     dword ptr [esp+314h+var_288]
0x7D3943: fstp    [esp+314h+var_2CC]
0x7D3947: fld     [esp+314h+var_2BC]
0x7D394B: fstp    [esp+314h+var_2D0]
0x7D394F: fld     [esp+314h+var_2C4]
0x7D3953: fstp    dword ptr [esp+314h+var_300]
0x7D3957: fld     [esp+314h+var_2C0]
0x7D395B: fstp    dword ptr [esp+314h+var_2E8]
0x7D395F: fld     [esp+314h+var_2EC]
0x7D3963: fstp    [esp+314h+var_304]
0x7D3967: fld     dword ptr [esp+314h+var_300]
0x7D396B: fadd    st, st(3)
0x7D396D: fstp    dword ptr [esp+314h+var_300]
0x7D3971: fld     dword ptr [esp+314h+var_2E8]
0x7D3975: fadd    st, st(2)
0x7D3977: fstp    dword ptr [esp+314h+var_2E8]
0x7D397B: fld     [esp+314h+var_304]
0x7D397F: fadd    st, st(5)
0x7D3981: fstp    [esp+314h+var_304]
0x7D3985: fld     dword ptr [esp+314h+var_300]
0x7D3989: fsub    [esp+314h+var_2D4]
0x7D398D: fstp    dword ptr [esp+314h+var_300]
0x7D3991: fld     dword ptr [esp+314h+var_2E8]
0x7D3995: fsub    [esp+314h+var_2CC]
0x7D3999: fstp    dword ptr [esp+314h+var_2E8]
0x7D399D: fld     [esp+314h+var_304]
0x7D39A1: fsub    [esp+314h+var_2D0]
0x7D39A5: fstp    [esp+314h+var_304]
0x7D39A9: fld     dword ptr [esp+314h+var_300]
0x7D39AD: fadd    dword ptr [esp+314h+var_2B8]
0x7D39B1: fstp    dword ptr [esp+314h+var_300]
0x7D39B5: fld     dword ptr [esp+314h+var_2E8]
0x7D39B9: fadd    dword ptr [esp+314h+var_290]
0x7D39C0: fstp    dword ptr [esp+314h+var_2E8]
0x7D39C4: fld     [esp+314h+var_304]
0x7D39C8: fadd    dword ptr [esp+314h+var_298]
0x7D39CC: fstp    [esp+314h+var_304]
0x7D39D0: fld     dword ptr [esp+314h+var_300]
0x7D39D4: fstp    dword ptr [esp+314h+var_300]
0x7D39D8: mov     eax, dword ptr [esp+314h+var_300]
0x7D39DC: fld     dword ptr [esp+314h+var_2E8]
0x7D39E0: mov     [esp+314h+var_208], eax
0x7D39E7: fstp    dword ptr [esp+314h+var_300+4]
0x7D39EB: mov     ecx, dword ptr [esp+314h+var_300+4]
0x7D39EF: fld     [esp+314h+var_304]
0x7D39F3: mov     [esp+314h+var_204], ecx
0x7D39FA: fstp    [esp+314h+var_2F8]
0x7D39FE: mov     edx, [esp+314h+var_2F8]
0x7D3A02: fxch    st(5)
0x7D3A04: mov     [esp+314h+var_200], edx
0x7D3A0B: fstp    dword ptr [esp+314h+var_2B8]
0x7D3A0F: fxch    st(2)
0x7D3A11: fstp    dword ptr [esp+314h+var_290]
0x7D3A18: fxch    st(3)
0x7D3A1A: fstp    dword ptr [esp+314h+var_298]
0x7D3A1E: fld     [esp+314h+var_2C8]
0x7D3A22: fstp    [esp+314h+var_2D4]
0x7D3A26: fld     dword ptr [esp+314h+var_288]
0x7D3A2D: fstp    [esp+314h+var_2CC]
0x7D3A31: fld     [esp+314h+var_2BC]
0x7D3A35: fstp    [esp+314h+var_2D0]
0x7D3A39: fld     [esp+314h+var_2C4]
0x7D3A3D: fstp    dword ptr [esp+314h+var_300]
0x7D3A41: fld     [esp+314h+var_2C0]
0x7D3A45: fstp    dword ptr [esp+314h+var_2E8]
0x7D3A49: fld     [esp+314h+var_2EC]
0x7D3A4D: fstp    [esp+314h+var_304]
0x7D3A51: fld     dword ptr [esp+314h+var_300]
0x7D3A55: faddp   st(3), st
0x7D3A57: fxch    st(2)
0x7D3A59: fstp    dword ptr [esp+314h+var_300]
0x7D3A5D: fld     dword ptr [esp+314h+var_2E8]
0x7D3A61: faddp   st(2), st
0x7D3A63: fxch    st(1)
0x7D3A65: fstp    dword ptr [esp+314h+var_2E8]
0x7D3A69: fadd    [esp+314h+var_304]
0x7D3A6D: fstp    [esp+314h+var_304]
0x7D3A71: fld     dword ptr [esp+314h+var_300]
0x7D3A75: fsub    [esp+314h+var_2D4]
0x7D3A79: fstp    dword ptr [esp+314h+var_300]
0x7D3A7D: fld     dword ptr [esp+314h+var_2E8]
0x7D3A81: fsub    [esp+314h+var_2CC]
0x7D3A85: fstp    dword ptr [esp+314h+var_2E8]
0x7D3A89: fld     [esp+314h+var_304]
0x7D3A8D: fsub    [esp+314h+var_2D0]
0x7D3A91: fstp    [esp+314h+var_304]
0x7D3A95: fld     dword ptr [esp+314h+var_300]
0x7D3A99: fsub    dword ptr [esp+314h+var_2B8]
0x7D3A9D: fstp    dword ptr [esp+314h+var_300]
0x7D3AA1: fld     dword ptr [esp+314h+var_2E8]
0x7D3AA5: fsub    dword ptr [esp+314h+var_290]
0x7D3AAC: fstp    dword ptr [esp+314h+var_2E8]
0x7D3AB0: fld     [esp+314h+var_304]
0x7D3AB4: fsub    dword ptr [esp+314h+var_298]
0x7D3AB8: fstp    [esp+314h+var_304]
0x7D3ABC: fld     dword ptr [esp+314h+var_300]
0x7D3AC0: fstp    dword ptr [esp+314h+var_300]
0x7D3AC4: mov     eax, dword ptr [esp+314h+var_300]
0x7D3AC8: fld     dword ptr [esp+314h+var_2E8]
0x7D3ACC: mov     [esp+314h+var_1FC], eax
0x7D3AD3: mov     eax, [ebx+88h]
0x7D3AD9: fstp    dword ptr [esp+314h+var_300+4]
0x7D3ADD: fld     [esp+314h+var_304]
0x7D3AE1: mov     ecx, dword ptr [esp+314h+var_300+4]
0x7D3AE5: fstp    [esp+314h+var_2F8]
0x7D3AE9: mov     edx, [esp+314h+var_2F8]
0x7D3AED: fld     dword ptr [ebx+64h]
0x7D3AF0: mov     [esp+314h+var_1F8], ecx
0x7D3AF7: mov     ecx, [ebx+8Ch]
0x7D3AFD: fstp    [esp+314h+var_2A4]
0x7D3B01: fld     dword ptr [ebx+70h]
0x7D3B04: mov     [esp+314h+var_1F4], edx
0x7D3B0B: mov     edx, [ebx+90h]
0x7D3B11: fstp    [esp+314h+var_2A0]
0x7D3B15: fld     dword ptr [ebx+7Ch]
0x7D3B18: mov     [esp+314h+var_280], eax
0x7D3B1F: mov     [esp+314h+var_27C], ecx
0x7D3B26: mov     [esp+314h+var_278], edx
0x7D3B2D: fstp    [esp+314h+var_29C]
0x7D3B31: mov     [esp+314h+var_268], eax
0x7D3B38: fld     dword ptr [ebx+68h]
0x7D3B3B: mov     [esp+314h+var_264], ecx
0x7D3B42: fstp    dword ptr [esp+314h+var_2E8]
0x7D3B46: mov     [esp+314h+var_260], edx
0x7D3B4D: fld     dword ptr [ebx+74h]
0x7D3B50: fstp    dword ptr [esp+314h+var_2E8+4]
0x7D3B54: fld     dword ptr [ebx+80h]
0x7D3B5A: fstp    [esp+314h+var_2E0]
0x7D3B5E: fld     dword ptr [ebx+0F4h]
0x7D3B64: fstp    dword ptr [esp+314h+var_300]
0x7D3B68: fld     dword ptr [esp+314h+var_300]
0x7D3B6C: fld     dword ptr [esp+314h+var_2E8]
0x7D3B70: fmul    st, st(1)
0x7D3B72: fstp    [esp+314h+var_2D4]
0x7D3B76: fld     dword ptr [esp+314h+var_2E8+4]
0x7D3B7A: fmul    st, st(1)
0x7D3B7C: fstp    [esp+314h+var_2CC]
0x7D3B80: fmul    [esp+314h+var_2E0]
0x7D3B84: fstp    [esp+314h+var_2D0]
0x7D3B88: fld     dword ptr [ebx+6Ch]
0x7D3B8B: fstp    dword ptr [esp+314h+var_2B8]
0x7D3B8F: fld     dword ptr [ebx+78h]
0x7D3B92: fstp    dword ptr [esp+314h+var_2B8+4]
0x7D3B96: fld     dword ptr [ebx+84h]
0x7D3B9C: fstp    [esp+314h+var_2B0]
0x7D3BA0: fld     dword ptr [ebx+0F0h]
0x7D3BA6: fstp    dword ptr [esp+314h+var_300]
0x7D3BAA: fld     dword ptr [esp+314h+var_300]
0x7D3BAE: fld     dword ptr [esp+314h+var_2B8]
0x7D3BB2: fmul    st, st(1)
0x7D3BB4: fstp    dword ptr [esp+314h+var_300]
0x7D3BB8: fld     dword ptr [esp+314h+var_2B8+4]
0x7D3BBC: fmul    st, st(1)
0x7D3BBE: fstp    dword ptr [esp+314h+var_2E8]
0x7D3BC2: fmul    [esp+314h+var_2B0]
0x7D3BC6: fstp    [esp+314h+var_304]
0x7D3BCA: fld     dword ptr [ebx+100h]
0x7D3BD0: fstp    [esp+314h+var_2EC]
0x7D3BD4: fld     [esp+314h+var_2EC]
0x7D3BD8: fld     dword ptr [esp+314h+var_300]
0x7D3BDC: fmul    st, st(1)
0x7D3BDE: fstp    dword ptr [esp+314h+var_300]
0x7D3BE2: fld     dword ptr [esp+314h+var_300]
0x7D3BE6: fst     dword ptr [esp+314h+var_2B8]
0x7D3BEA: fld     dword ptr [esp+314h+var_2E8]
0x7D3BEE: fmul    st, st(2)
0x7D3BF0: fstp    dword ptr [esp+314h+var_300]
0x7D3BF4: fld     dword ptr [esp+314h+var_300]
0x7D3BF8: fst     dword ptr [esp+314h+var_290]
0x7D3BFF: fld     [esp+314h+var_304]
0x7D3C03: fmul    st, st(3)
0x7D3C05: fstp    dword ptr [esp+314h+var_300]
0x7D3C09: fld     dword ptr [esp+314h+var_300]
0x7D3C0D: fst     dword ptr [esp+314h+var_298]
0x7D3C11: fld     [esp+314h+var_2D4]
0x7D3C15: fmul    st, st(4)
0x7D3C17: fstp    [esp+314h+var_2EC]
0x7D3C1B: fld     [esp+314h+var_2EC]
0x7D3C1F: fstp    [esp+314h+var_2D4]
0x7D3C23: fld     [esp+314h+var_2CC]
0x7D3C27: fmul    st, st(4)
0x7D3C29: fstp    [esp+314h+var_2C0]
0x7D3C2D: fld     [esp+314h+var_2C0]
0x7D3C31: fstp    [esp+314h+var_2CC]
0x7D3C35: fld     [esp+314h+var_2D0]
0x7D3C39: fmul    st, st(4)
0x7D3C3B: fstp    [esp+314h+var_2C4]
0x7D3C3F: fld     [esp+314h+var_2C4]
0x7D3C43: fstp    [esp+314h+var_2D0]
0x7D3C47: fld     [esp+314h+var_2A4]
0x7D3C4B: fmul    st, st(4)
0x7D3C4D: fstp    [esp+314h+var_2BC]
0x7D3C51: fld     [esp+314h+var_2BC]
0x7D3C55: fstp    dword ptr [esp+314h+var_300]
0x7D3C59: fld     [esp+314h+var_2A0]
0x7D3C5D: fmul    st, st(4)
0x7D3C5F: fstp    dword ptr [esp+314h+var_288]
0x7D3C66: fld     dword ptr [esp+314h+var_288]
0x7D3C6D: fstp    dword ptr [esp+314h+var_2E8]
0x7D3C71: fld     [esp+314h+var_29C]
0x7D3C75: fmulp   st(4), st
0x7D3C77: fxch    st(3)
0x7D3C79: fstp    [esp+314h+var_2C8]
0x7D3C7D: fld     [esp+314h+var_2C8]
0x7D3C81: fstp    [esp+314h+var_304]
0x7D3C85: fld     [esp+314h+var_280]
0x7D3C8C: fld     dword ptr [esp+314h+var_300]
0x7D3C90: fadd    st, st(1)
0x7D3C92: fstp    dword ptr [esp+314h+var_300]
0x7D3C96: fld     [esp+314h+var_27C]
0x7D3C9D: fld     dword ptr [esp+314h+var_2E8]
0x7D3CA1: fadd    st, st(1)
0x7D3CA3: fstp    dword ptr [esp+314h+var_2E8]
0x7D3CA7: fld     [esp+314h+var_278]
0x7D3CAE: fld     [esp+314h+var_304]
0x7D3CB2: fadd    st, st(1)
0x7D3CB4: fstp    [esp+314h+var_304]
0x7D3CB8: fld     dword ptr [esp+314h+var_300]
0x7D3CBC: fadd    [esp+314h+var_2D4]
0x7D3CC0: fstp    dword ptr [esp+314h+var_300]
0x7D3CC4: fld     dword ptr [esp+314h+var_2E8]
0x7D3CC8: fadd    [esp+314h+var_2CC]
0x7D3CCC: fstp    dword ptr [esp+314h+var_2E8]
0x7D3CD0: fld     [esp+314h+var_304]
0x7D3CD4: fadd    [esp+314h+var_2D0]
0x7D3CD8: fstp    [esp+314h+var_304]
0x7D3CDC: fld     dword ptr [esp+314h+var_300]
0x7D3CE0: fadd    dword ptr [esp+314h+var_2B8]
0x7D3CE4: fstp    dword ptr [esp+314h+var_300]
0x7D3CE8: fld     dword ptr [esp+314h+var_2E8]
0x7D3CEC: fadd    dword ptr [esp+314h+var_290]
0x7D3CF3: fstp    dword ptr [esp+314h+var_2E8]
0x7D3CF7: fld     [esp+314h+var_304]
0x7D3CFB: fadd    dword ptr [esp+314h+var_298]
0x7D3CFF: fstp    [esp+314h+var_304]
0x7D3D03: fld     dword ptr [esp+314h+var_300]
0x7D3D07: fstp    [esp+314h+var_2A4]
0x7D3D0B: mov     eax, [esp+314h+var_2A4]
0x7D3D0F: fld     dword ptr [esp+314h+var_2E8]
0x7D3D13: mov     [esp+314h+var_25C], eax
0x7D3D1A: fstp    [esp+314h+var_2A0]
0x7D3D1E: mov     ecx, [esp+314h+var_2A0]
0x7D3D22: fld     [esp+314h+var_304]
0x7D3D26: mov     [esp+314h+var_258], ecx
0x7D3D2D: fstp    [esp+314h+var_29C]
0x7D3D31: mov     edx, [esp+314h+var_29C]
0x7D3D35: fxch    st(4)
0x7D3D37: mov     [esp+314h+var_254], edx
0x7D3D3E: fst     dword ptr [esp+314h+var_2B8]
0x7D3D42: fxch    st(3)
0x7D3D44: fst     dword ptr [esp+314h+var_290]
0x7D3D4B: fxch    st(5)
0x7D3D4D: fst     dword ptr [esp+314h+var_298]
0x7D3D51: fld     [esp+314h+var_2EC]
0x7D3D55: fstp    [esp+314h+var_2D4]
0x7D3D59: fld     [esp+314h+var_2C0]
0x7D3D5D: fstp    [esp+314h+var_2CC]
0x7D3D61: fld     [esp+314h+var_2C4]
0x7D3D65: fstp    [esp+314h+var_2D0]
0x7D3D69: fld     [esp+314h+var_2BC]
0x7D3D6D: fstp    dword ptr [esp+314h+var_300]
0x7D3D71: fld     dword ptr [esp+314h+var_288]
0x7D3D78: fstp    dword ptr [esp+314h+var_2E8]
0x7D3D7C: fld     [esp+314h+var_2C8]
0x7D3D80: fstp    [esp+314h+var_304]
0x7D3D84: fld     dword ptr [esp+314h+var_300]
0x7D3D88: fadd    st, st(3)
0x7D3D8A: fstp    dword ptr [esp+314h+var_300]
0x7D3D8E: fld     dword ptr [esp+314h+var_2E8]
0x7D3D92: fadd    st, st(2)
0x7D3D94: fstp    dword ptr [esp+314h+var_2E8]
0x7D3D98: fld     [esp+314h+var_304]
0x7D3D9C: fadd    st, st(5)
0x7D3D9E: fstp    [esp+314h+var_304]
0x7D3DA2: fld     dword ptr [esp+314h+var_300]
0x7D3DA6: fadd    [esp+314h+var_2D4]
0x7D3DAA: fstp    dword ptr [esp+314h+var_300]
0x7D3DAE: fld     dword ptr [esp+314h+var_2E8]
0x7D3DB2: fadd    [esp+314h+var_2CC]
0x7D3DB6: fstp    dword ptr [esp+314h+var_2E8]
0x7D3DBA: fld     [esp+314h+var_304]
0x7D3DBE: fadd    [esp+314h+var_2D0]
0x7D3DC2: fstp    [esp+314h+var_304]
0x7D3DC6: fld     dword ptr [esp+314h+var_300]
0x7D3DCA: fsub    dword ptr [esp+314h+var_2B8]
0x7D3DCE: fstp    dword ptr [esp+314h+var_300]
0x7D3DD2: fld     dword ptr [esp+314h+var_2E8]
0x7D3DD6: fsub    dword ptr [esp+314h+var_290]
0x7D3DDD: fstp    dword ptr [esp+314h+var_2E8]
0x7D3DE1: fld     [esp+314h+var_304]
0x7D3DE5: fsub    dword ptr [esp+314h+var_298]
0x7D3DE9: fstp    [esp+314h+var_304]
0x7D3DED: fld     dword ptr [esp+314h+var_300]
0x7D3DF1: fstp    [esp+314h+var_2A4]
0x7D3DF5: mov     eax, [esp+314h+var_2A4]
0x7D3DF9: fld     dword ptr [esp+314h+var_2E8]
0x7D3DFD: mov     [esp+314h+var_250], eax
0x7D3E04: fstp    [esp+314h+var_2A0]
0x7D3E08: mov     ecx, [esp+314h+var_2A0]
0x7D3E0C: fld     [esp+314h+var_304]
0x7D3E10: mov     [esp+314h+var_24C], ecx
0x7D3E17: fstp    [esp+314h+var_29C]
0x7D3E1B: mov     edx, [esp+314h+var_29C]
0x7D3E1F: fxch    st(3)
0x7D3E21: mov     [esp+314h+var_248], edx
0x7D3E28: fst     dword ptr [esp+314h+var_2B8]
0x7D3E2C: fxch    st(5)
0x7D3E2E: fst     dword ptr [esp+314h+var_290]
0x7D3E35: fxch    st(3)
0x7D3E37: fst     dword ptr [esp+314h+var_298]
0x7D3E3B: fld     [esp+314h+var_2EC]
0x7D3E3F: fstp    [esp+314h+var_2D4]
0x7D3E43: fld     [esp+314h+var_2C0]
0x7D3E47: fstp    [esp+314h+var_2CC]
0x7D3E4B: fld     [esp+314h+var_2C4]
0x7D3E4F: fstp    [esp+314h+var_2D0]
0x7D3E53: fld     [esp+314h+var_2BC]
0x7D3E57: fstp    dword ptr [esp+314h+var_300]
0x7D3E5B: fld     dword ptr [esp+314h+var_288]
0x7D3E62: fstp    dword ptr [esp+314h+var_2E8]
0x7D3E66: fld     [esp+314h+var_2C8]
0x7D3E6A: fstp    [esp+314h+var_304]
0x7D3E6E: fld     dword ptr [esp+314h+var_300]
0x7D3E72: fadd    st, st(3)
0x7D3E74: fstp    dword ptr [esp+314h+var_300]
0x7D3E78: fld     dword ptr [esp+314h+var_2E8]
0x7D3E7C: fadd    st, st(2)
0x7D3E7E: fstp    dword ptr [esp+314h+var_2E8]
0x7D3E82: fld     [esp+314h+var_304]
0x7D3E86: fadd    st, st(5)
0x7D3E88: fstp    [esp+314h+var_304]
0x7D3E8C: fld     dword ptr [esp+314h+var_300]
0x7D3E90: fsub    [esp+314h+var_2D4]
0x7D3E94: fstp    dword ptr [esp+314h+var_300]
0x7D3E98: fld     dword ptr [esp+314h+var_2E8]
0x7D3E9C: fsub    [esp+314h+var_2CC]
0x7D3EA0: fstp    dword ptr [esp+314h+var_2E8]
0x7D3EA4: fld     [esp+314h+var_304]
0x7D3EA8: fsub    [esp+314h+var_2D0]
0x7D3EAC: fstp    [esp+314h+var_304]
0x7D3EB0: fld     dword ptr [esp+314h+var_300]
0x7D3EB4: fadd    dword ptr [esp+314h+var_2B8]
0x7D3EB8: fstp    dword ptr [esp+314h+var_300]
0x7D3EBC: fld     dword ptr [esp+314h+var_2E8]
0x7D3EC0: fadd    dword ptr [esp+314h+var_290]
0x7D3EC7: fstp    dword ptr [esp+314h+var_2E8]
0x7D3ECB: fld     [esp+314h+var_304]
0x7D3ECF: fadd    dword ptr [esp+314h+var_298]
0x7D3ED3: fstp    [esp+314h+var_304]
0x7D3ED7: fld     dword ptr [esp+314h+var_300]
0x7D3EDB: fstp    [esp+314h+var_2A4]
0x7D3EDF: mov     eax, [esp+314h+var_2A4]
0x7D3EE3: fld     dword ptr [esp+314h+var_2E8]
0x7D3EE7: mov     [esp+314h+var_244], eax
0x7D3EEE: fstp    [esp+314h+var_2A0]
0x7D3EF2: mov     ecx, [esp+314h+var_2A0]
0x7D3EF6: fld     [esp+314h+var_304]
0x7D3EFA: mov     [esp+314h+var_240], ecx
0x7D3F01: fstp    [esp+314h+var_29C]
0x7D3F05: mov     edx, [esp+314h+var_29C]
0x7D3F09: mov     [esp+314h+var_23C], edx
0x7D3F10: fxch    st(5)
0x7D3F12: push    0
0x7D3F14: fstp    dword ptr [esp+318h+var_2B8]
0x7D3F18: fxch    st(2)
0x7D3F1A: fstp    dword ptr [esp+318h+var_290]
0x7D3F21: fxch    st(3)
0x7D3F23: fstp    dword ptr [esp+318h+var_298]
0x7D3F2A: fld     [esp+318h+var_2EC]
0x7D3F2E: fstp    [esp+318h+var_2D4]
0x7D3F32: fld     [esp+318h+var_2C0]
0x7D3F36: fstp    [esp+318h+var_2CC]
0x7D3F3A: fld     [esp+318h+var_2C4]
0x7D3F3E: fstp    [esp+318h+var_2D0]
0x7D3F42: fld     [esp+318h+var_2BC]
0x7D3F46: fstp    dword ptr [esp+318h+var_300]
0x7D3F4A: fld     dword ptr [esp+318h+var_288]
0x7D3F51: fstp    dword ptr [esp+318h+var_2E8]
0x7D3F55: fld     [esp+318h+var_2C8]
0x7D3F59: fstp    [esp+318h+var_304]
0x7D3F5D: fld     dword ptr [esp+318h+var_300]
0x7D3F61: faddp   st(3), st
0x7D3F63: fxch    st(2)
0x7D3F65: fstp    dword ptr [esp+318h+var_300]
0x7D3F69: fld     dword ptr [esp+318h+var_2E8]
0x7D3F6D: faddp   st(2), st
0x7D3F6F: fxch    st(1)
0x7D3F71: fstp    dword ptr [esp+318h+var_2E8]
0x7D3F75: fadd    [esp+318h+var_304]
0x7D3F79: fstp    [esp+318h+var_304]
0x7D3F7D: fld     dword ptr [esp+318h+var_300]
0x7D3F81: fsub    [esp+318h+var_2D4]
0x7D3F85: fstp    dword ptr [esp+318h+var_300]
0x7D3F89: fld     dword ptr [esp+318h+var_2E8]
0x7D3F8D: fsub    [esp+318h+var_2CC]
0x7D3F91: fstp    dword ptr [esp+318h+var_2E8]
0x7D3F95: fld     [esp+318h+var_304]
0x7D3F99: fsub    [esp+318h+var_2D0]
0x7D3F9D: fstp    [esp+318h+var_304]
0x7D3FA1: fld     dword ptr [esp+318h+var_300]
0x7D3FA5: fsub    dword ptr [esp+318h+var_2B8]
0x7D3FA9: fstp    dword ptr [esp+318h+var_300]
0x7D3FAD: fld     dword ptr [esp+318h+var_2E8]
0x7D3FB1: fsub    dword ptr [esp+318h+var_290]
0x7D3FB8: fstp    dword ptr [esp+318h+var_2E8]
0x7D3FBC: fld     [esp+318h+var_304]
0x7D3FC0: fsub    dword ptr [esp+318h+var_298]
0x7D3FC7: fstp    [esp+318h+var_304]
0x7D3FCB: fld     dword ptr [esp+318h+var_300]
0x7D3FCF: fstp    [esp+318h+var_2A4]
0x7D3FD3: mov     eax, [esp+318h+var_2A4]
0x7D3FD7: fld     dword ptr [esp+318h+var_2E8]
0x7D3FDB: mov     [esp+318h+var_238], eax
0x7D3FE2: fstp    [esp+318h+var_2A0]
0x7D3FE6: mov     ecx, [esp+318h+var_2A0]
0x7D3FEA: fld     [esp+318h+var_304]
0x7D3FEE: mov     [esp+318h+var_234], ecx
0x7D3FF5: fstp    [esp+318h+var_29C]
0x7D3FF9: mov     edx, [esp+318h+var_29C]
0x7D3FFD: lea     ecx, [esp+318h+var_188]
0x7D4004: mov     [esp+318h+var_230], edx
0x7D400B: call    NiCullingProcess_NiCullingProcess
0x7D4010: mov     [esp+314h+var_188.Camera], esi
0x7D4017: add     esi, 0ECh ; 'ì'
0x7D401D: push    esi; a2
0x7D401E: lea     ecx, [esp+318h+var_188]; this
0x7D4025: mov     [esp+318h+var_4], 0
0x7D4030: call    NiCullingProcess__SetFrustum
0x7D4035: mov     ecx, 19h
0x7D403A: lea     esi, [esp+314h+var_188.Planes]
0x7D4041: lea     edi, [esp+314h+var_F8]
0x7D4048: rep movsd
0x7D404A: mov     [esp+314h+var_188.Camera], ebx
0x7D4051: add     ebx, 0ECh ; 'ì'
0x7D4057: push    ebx; a2
0x7D4058: lea     ecx, [esp+318h+var_188]; this
0x7D405F: call    NiCullingProcess__SetFrustum
0x7D4064: mov     ecx, 19h
0x7D4069: lea     esi, [esp+314h+var_188.Planes]
0x7D4070: lea     edi, [esp+314h+var_90]
0x7D4077: rep movsd
0x7D4079: lea     esi, [esp+314h+var_1F0]
0x7D4080: mov     edi, 5
0x7D4085: mov     ecx, esi; this
0x7D4087: call    sub_716DB0
0x7D408C: add     esi, 10h
0x7D408F: sub     edi, 1
0x7D4092: jns     short loc_7D4085
0x7D4094: fldz
0x7D4096: xor     ebx, ebx
0x7D4098: mov     [esp+314h+var_1F0.ActivePlanes], 3Fh ; '?'
0x7D40A3: mov     [esp+314h+var_2C8], ebx
0x7D40A7: mov     eax, ebx
0x7D40A9: sub     eax, 0
0x7D40AC: jz      short loc_7D40C7
0x7D40AE: sub     eax, 1
0x7D40B1: jnz     short loc_7D40E7
0x7D40B3: lea     eax, [esp+314h+var_268]
0x7D40BA: mov     [esp+314h+var_2C8], eax
0x7D40BE: lea     esi, [esp+314h+var_F8]
0x7D40C5: jmp     short loc_7D40D9
0x7D40C7: lea     ecx, [esp+314h+var_22C]
0x7D40CE: mov     [esp+314h+var_2C8], ecx
0x7D40D2: lea     esi, [esp+314h+var_90]
0x7D40D9: mov     ecx, 19h
0x7D40DE: lea     edi, [esp+314h+var_1F0]
0x7D40E5: rep movsd
0x7D40E7: mov     esi, [esp+314h+var_2C8]
0x7D40EB: xor     edi, edi
0x7D40ED: add     esi, 8
0x7D40F0: fld     dword ptr [esi-4]
0x7D40F3: xor     ecx, ecx
0x7D40F5: fld     dword ptr [esi-8]
0x7D40F8: lea     edx, [esp+314h+var_1F0.CullingPlanes.Normal.z]
0x7D40FF: fld     dword ptr [esi]
0x7D4101: fld     dword ptr [edx-8]
0x7D4104: fmul    st, st(2)
0x7D4106: fld     dword ptr [edx-4]
0x7D4109: fmul    st, st(4)
0x7D410B: faddp   st(1), st
0x7D410D: fld     dword ptr [edx]
0x7D410F: fmul    st, st(2)
0x7D4111: faddp   st(1), st
0x7D4113: fsub    dword ptr [edx+4]
0x7D4116: fstp    dword ptr [esp+314h+var_300]
0x7D411A: fld     dword ptr [esp+314h+var_300]
0x7D411E: fcom    st(4)
0x7D4120: fnstsw  ax
0x7D4122: test    ah, 5
0x7D4125: jnp     short loc_7D4161
0x7D4127: fcomp   st(4)
0x7D4129: fnstsw  ax
0x7D412B: test    ah, 41h
0x7D412E: jnz     short loc_7D4163
0x7D4130: add     ecx, 1
0x7D4133: add     edx, 10h
0x7D4136: cmp     ecx, 6
0x7D4139: jl      short loc_7D4101
0x7D413B: fstp    st(2)
0x7D413D: lea     ecx, [esp+314h+var_188]; this
0x7D4144: fstp    st
0x7D4146: mov     [esp+314h+var_4], 0FFFFFFFFh
0x7D4151: fstp    st
0x7D4153: fstp    st
0x7D4155: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x7D415A: mov     al, 1
0x7D415C: jmp     loc_7D4546
0x7D4161: fstp    st
0x7D4163: fstp    st(2)
0x7D4165: add     edi, 1
0x7D4168: fstp    st
0x7D416A: add     esi, 0Ch
0x7D416D: cmp     edi, 5
0x7D4170: fstp    st
0x7D4172: jl      loc_7D40F0
0x7D4178: add     ebx, 1
0x7D417B: cmp     ebx, 2
0x7D417E: jl      loc_7D40A7
0x7D4184: xor     eax, eax
0x7D4186: mov     [esp+314h+var_2BC], eax
0x7D418A: sub     eax, 0
0x7D418D: jz      short loc_7D41A8
0x7D418F: sub     eax, 1
0x7D4192: jnz     short loc_7D41C8
0x7D4194: lea     edx, [esp+314h+var_268]
0x7D419B: mov     [esp+314h+var_2C8], edx
0x7D419F: lea     esi, [esp+314h+var_F8]
0x7D41A6: jmp     short loc_7D41BA
0x7D41A8: lea     eax, [esp+314h+var_22C]
0x7D41AF: mov     [esp+314h+var_2C8], eax
0x7D41B3: lea     esi, [esp+314h+var_90]
0x7D41BA: mov     ecx, 19h
0x7D41BF: lea     edi, [esp+314h+var_1F0]
0x7D41C6: rep movsd
0x7D41C8: xor     ebx, ebx
0x7D41CA: movzx   eax, [esp+ebx*2+314h+var_24]
0x7D41D2: mov     ecx, [esp+314h+var_2C8]
0x7D41D6: lea     edx, [eax+eax*2]
0x7D41D9: lea     eax, [ecx+edx*4]
0x7D41DC: mov     edx, [eax]
0x7D41DE: mov     [esp+314h+var_280], edx
0x7D41E5: mov     edx, [eax+4]
0x7D41E8: mov     eax, [eax+8]
0x7D41EB: mov     [esp+314h+var_278], eax
0x7D41F2: movzx   eax, [esp+ebx*2+314h+var_23]
0x7D41FA: mov     [esp+314h+var_27C], edx
0x7D4201: lea     edx, [eax+eax*2]
0x7D4204: lea     eax, [ecx+edx*4]
0x7D4207: mov     ecx, [eax]
0x7D4209: mov     edx, [eax+4]
0x7D420C: mov     eax, [eax+8]
0x7D420F: mov     [esp+314h+var_2A4], ecx
0x7D4213: mov     [esp+314h+var_2A0], edx
0x7D4217: fld     [esp+314h+var_2A4]
0x7D421B: mov     [esp+314h+var_29C], eax
0x7D421F: fstp    [esp+314h+var_290]
0x7D4226: xor     esi, esi
0x7D4228: fld     [esp+314h+var_2A0]
0x7D422C: lea     edi, [esp+314h+var_1F0.CullingPlanes.Normal.z]
0x7D4233: fstp    [esp+314h+var_298]
0x7D4237: fld     [esp+314h+var_29C]
0x7D423B: fstp    [esp+314h+var_288]
0x7D4242: fld     [esp+314h+var_280]
0x7D4249: fld     [esp+314h+var_27C]
0x7D4250: fld     [esp+314h+var_278]
0x7D4257: fstp    [esp+314h+var_2B8]
0x7D425B: fld     dword ptr [edi-4]
0x7D425E: fld     dword ptr [edi-8]
0x7D4261: fld     dword ptr [edi]
0x7D4263: fst     [esp+314h+var_2E8]
0x7D4267: fld     dword ptr [edi+4]
0x7D426A: fstp    [esp+314h+var_300]
0x7D426E: fld     st(1)
0x7D4270: fmul    st, st(5)
0x7D4272: fld     st(3)
0x7D4274: fmul    st, st(5)
0x7D4276: faddp   st(1), st
0x7D4278: fxch    st(1)
0x7D427A: fmul    [esp+314h+var_2B8]
0x7D427E: faddp   st(1), st
0x7D4280: fld     [esp+314h+var_300]
0x7D4284: fsub    st(1), st
0x7D4286: fxch    st(1)
0x7D4288: fstp    dword ptr [esp+314h+var_300]
0x7D428C: fld     dword ptr [esp+314h+var_300]
0x7D4290: fcom    st(6)
0x7D4292: fnstsw  ax
0x7D4294: test    ah, 5
0x7D4297: jp      short loc_7D42A2
0x7D4299: fstp    st
0x7D429B: mov     ecx, 2
0x7D42A0: jmp     short loc_7D42B4
0x7D42A2: fcomp   st(6)
0x7D42A4: fnstsw  ax
0x7D42A6: test    ah, 41h
0x7D42A9: jnz     short loc_7D42B2
0x7D42AB: mov     ecx, 1
0x7D42B0: jmp     short loc_7D42B4
0x7D42B2: xor     ecx, ecx
0x7D42B4: fxch    st(1)
0x7D42B6: fmul    [esp+314h+var_290]
0x7D42BD: fxch    st(2)
0x7D42BF: fmul    [esp+314h+var_298]
0x7D42C3: faddp   st(2), st
0x7D42C5: fld     [esp+314h+var_2E8]
0x7D42C9: fmul    [esp+314h+var_288]
0x7D42D0: faddp   st(2), st
0x7D42D2: fsubp   st(1), st
0x7D42D4: fstp    dword ptr [esp+314h+var_300]
0x7D42D8: fld     dword ptr [esp+314h+var_300]
0x7D42DC: fcom    st(3)
0x7D42DE: fnstsw  ax
0x7D42E0: test    ah, 5
0x7D42E3: jp      short loc_7D42EE
0x7D42E5: fstp    st
0x7D42E7: mov     eax, 2
0x7D42EC: jmp     short loc_7D4300
0x7D42EE: fcomp   st(3)
0x7D42F0: fnstsw  ax
0x7D42F2: test    ah, 41h
0x7D42F5: jnz     short loc_7D42FE
0x7D42F7: mov     eax, 1
0x7D42FC: jmp     short loc_7D4300
0x7D42FE: xor     eax, eax
0x7D4300: cmp     ecx, eax
0x7D4302: jz      loc_7D44E6
0x7D4308: mov     ecx, [edi-8]
0x7D430B: fld     dword ptr [edi+4]
0x7D430E: fstp    dword ptr [esp+314h+var_300]
0x7D4312: mov     edx, [edi-4]
0x7D4315: mov     eax, [edi]
0x7D4317: mov     [esp+314h+var_274], ecx
0x7D431E: fld     [esp+314h+var_274]
0x7D4325: fld     dword ptr [esp+314h+var_300]
0x7D4329: mov     [esp+314h+var_270], edx
0x7D4330: fld     st
0x7D4332: mov     [esp+314h+var_26C], eax
0x7D4339: fmul    st, st(2)
0x7D433B: fstp    dword ptr [esp+314h+var_300]
0x7D433F: fld     [esp+314h+var_270]
0x7D4346: fld     st
0x7D4348: fmul    st, st(2)
0x7D434A: fstp    dword ptr [esp+314h+var_2E8]
0x7D434E: fld     [esp+314h+var_26C]
0x7D4355: fld     st
0x7D4357: fmulp   st(3), st
0x7D4359: fxch    st(2)
0x7D435B: fstp    [esp+314h+var_304]
0x7D435F: fld     dword ptr [esp+314h+var_300]
0x7D4363: fsub    st, st(5)
0x7D4365: fstp    [esp+314h+var_2D4]
0x7D4369: fld     dword ptr [esp+314h+var_2E8]
0x7D436D: fsub    st, st(4)
0x7D436F: fstp    dword ptr [esp+314h+var_300]
0x7D4373: fld     [esp+314h+var_304]
0x7D4377: fld     [esp+314h+var_2B8]
0x7D437B: fsub    st(1), st
0x7D437D: fxch    st(1)
0x7D437F: fstp    dword ptr [esp+314h+var_2E8]
0x7D4383: fld     [esp+314h+var_290]
0x7D438A: fsub    st, st(6)
0x7D438C: fstp    [esp+314h+var_2EC]
0x7D4390: fld     [esp+314h+var_2EC]
0x7D4394: fstp    [esp+314h+var_2CC]
0x7D4398: fld     [esp+314h+var_298]
0x7D439C: fsub    st, st(5)
0x7D439E: fstp    [esp+314h+var_2C0]
0x7D43A2: fld     [esp+314h+var_2C0]
0x7D43A6: fstp    [esp+314h+var_304]
0x7D43AA: fsubr   [esp+314h+var_288]
0x7D43B1: fstp    [esp+314h+var_2C4]
0x7D43B5: fld     [esp+314h+var_2C4]
0x7D43B9: fstp    [esp+314h+var_2D0]
0x7D43BD: fld     dword ptr [esp+314h+var_300]
0x7D43C1: fmul    st, st(1)
0x7D43C3: fld     [esp+314h+var_2D4]
0x7D43C7: fmul    st, st(4)
0x7D43C9: faddp   st(1), st
0x7D43CB: fld     dword ptr [esp+314h+var_2E8]
0x7D43CF: fmul    st, st(3)
0x7D43D1: faddp   st(1), st
0x7D43D3: fstp    dword ptr [esp+314h+var_300]
0x7D43D7: fld     dword ptr [esp+314h+var_300]
0x7D43DB: fld     [esp+314h+var_304]
0x7D43DF: fmulp   st(2), st
0x7D43E1: fld     [esp+314h+var_2CC]
0x7D43E5: fmulp   st(4), st
0x7D43E7: fxch    st(1)
0x7D43E9: faddp   st(3), st
0x7D43EB: fld     [esp+314h+var_2D0]
0x7D43EF: fmulp   st(2), st
0x7D43F1: fxch    st(2)
0x7D43F3: faddp   st(1), st
0x7D43F5: fstp    dword ptr [esp+314h+var_300]
0x7D43F9: fdiv    dword ptr [esp+314h+var_300]
0x7D43FD: fstp    dword ptr [esp+314h+var_300]
0x7D4401: fld     [esp+314h+var_2EC]
0x7D4405: fstp    dword ptr [esp+314h+var_2E8]
0x7D4409: fld     [esp+314h+var_2C0]
0x7D440D: fstp    [esp+314h+var_304]
0x7D4411: fld     [esp+314h+var_2C4]
0x7D4415: fstp    [esp+314h+var_2D4]
0x7D4419: fld     dword ptr [esp+314h+var_300]
0x7D441D: fld     st
0x7D441F: fld     dword ptr [esp+314h+var_2E8]
0x7D4423: fmul    st, st(1)
0x7D4425: fstp    dword ptr [esp+314h+var_300]
0x7D4429: fld     [esp+314h+var_304]
0x7D442D: fmul    st, st(1)
0x7D442F: fstp    dword ptr [esp+314h+var_2E8]
0x7D4433: fmul    [esp+314h+var_2D4]
0x7D4437: fstp    [esp+314h+var_304]
0x7D443B: fld     dword ptr [esp+314h+var_300]
0x7D443F: fadd    st, st(3)
0x7D4441: fstp    [esp+314h+var_2D4]
0x7D4445: fld     dword ptr [esp+314h+var_2E8]
0x7D4449: fadd    st, st(2)
0x7D444B: fstp    dword ptr [esp+314h+var_2E8]
0x7D444F: fld     [esp+314h+var_304]
0x7D4453: fadd    [esp+314h+var_2B8]
0x7D4457: fstp    dword ptr [esp+314h+var_300]
0x7D445B: fcom    st(3)
0x7D445D: fnstsw  ax
0x7D445F: test    ah, 1
0x7D4462: jnz     loc_7D44F6
0x7D4468: fld1
0x7D446A: fcompp
0x7D446C: fnstsw  ax
0x7D446E: test    ah, 1
0x7D4471: jnz     loc_7D44F8
0x7D4477: fld     dword ptr [esp+314h+var_300]
0x7D447B: xor     ecx, ecx
0x7D447D: fld     dword ptr [esp+314h+var_2E8]
0x7D4481: lea     edx, [esp+314h+var_1F0.CullingPlanes.Normal.z]
0x7D4488: cmp     ecx, esi
0x7D448A: jz      short loc_7D44B6
0x7D448C: fld     dword ptr [edx-8]
0x7D448F: fmul    [esp+314h+var_2D4]
0x7D4493: fld     dword ptr [edx-4]
0x7D4496: fmul    st, st(2)
0x7D4498: faddp   st(1), st
0x7D449A: fld     st(2)
0x7D449C: fmul    dword ptr [edx]
0x7D449E: faddp   st(1), st
0x7D44A0: fsub    dword ptr [edx+4]
0x7D44A3: fstp    dword ptr [esp+314h+var_300]
0x7D44A7: fxch    st(4)
0x7D44A9: fcom    dword ptr [esp+314h+var_300]
0x7D44AD: fnstsw  ax
0x7D44AF: test    ah, 41h
0x7D44B2: jz      short loc_7D44F0
0x7D44B4: fxch    st(4)
0x7D44B6: add     ecx, 1
0x7D44B9: add     edx, 10h
0x7D44BC: cmp     ecx, 6
0x7D44BF: jl      short loc_7D4488
0x7D44C1: fstp    st(1)
0x7D44C3: fstp    st
0x7D44C5: fstp    st(2)
0x7D44C7: lea     ecx, [esp+314h+var_188]; this
0x7D44CE: fstp    st
0x7D44D0: mov     [esp+314h+var_4], 0FFFFFFFFh
0x7D44DB: fstp    st
0x7D44DD: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x7D44E2: mov     al, 1
0x7D44E4: jmp     short loc_7D4546
0x7D44E6: test    ecx, ecx
0x7D44E8: jnz     short loc_7D44F8
0x7D44EA: test    eax, eax
0x7D44EC: jz      short loc_7D44C5
0x7D44EE: jmp     short loc_7D44F8
0x7D44F0: fstp    st(1)
0x7D44F2: fstp    st(3)
0x7D44F4: jmp     short loc_7D44F8
0x7D44F6: fstp    st
0x7D44F8: add     esi, 1
0x7D44FB: add     edi, 10h
0x7D44FE: cmp     esi, 6
0x7D4501: jl      loc_7D425B
0x7D4507: add     ebx, 1
0x7D450A: fstp    st(1)
0x7D450C: cmp     ebx, 8
0x7D450F: fstp    st
0x7D4511: jl      loc_7D41CA
0x7D4517: mov     eax, [esp+314h+var_2BC]
0x7D451B: add     eax, 1
0x7D451E: cmp     eax, 2
0x7D4521: mov     [esp+314h+var_2BC], eax
0x7D4525: jl      loc_7D418A
0x7D452B: lea     ecx, [esp+314h+var_188]; this
0x7D4532: fstp    st
0x7D4534: mov     [esp+314h+var_4], 0FFFFFFFFh
0x7D453F: call    ??1BSCullingProcess@@UAE@XZ; BSCullingProcess::~BSCullingProcess(void)
0x7D4544: xor     al, al
0x7D4546: mov     ecx, [esp+314h+var_C]
0x7D454D: mov     large fs:0, ecx
0x7D4554: pop     ecx
0x7D4555: pop     edi
0x7D4556: pop     esi
0x7D4557: pop     ebx
0x7D4558: mov     ecx, [esp+304h+var_14]
0x7D455F: xor     ecx, esp
0x7D4561: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7D4566: mov     esp, ebp
0x7D4568: pop     ebp
0x7D4569: retn    8
