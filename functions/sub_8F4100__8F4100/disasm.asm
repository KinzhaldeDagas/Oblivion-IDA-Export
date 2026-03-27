0x8F4100: push    ebp
0x8F4101: mov     ebp, esp
0x8F4103: and     esp, 0FFFFFFF0h
0x8F4106: sub     esp, 1C4h
0x8F410C: push    ebx
0x8F410D: push    esi
0x8F410E: push    edi
0x8F410F: mov     [esp+1D0h+var_124], ecx
0x8F4116: movaps  xmm6, xmmword ptr [ecx+60h]
0x8F411A: movaps  xmm2, xmmword ptr [ecx+70h]
0x8F411E: mov     eax, [ecx+80h]
0x8F4124: mov     edx, [ecx+84h]
0x8F412A: subps   xmm2, xmm6
0x8F412D: movaps  xmm0, xmm2
0x8F4130: mulps   xmm0, xmm2
0x8F4133: movaps  xmm1, xmm0
0x8F4136: shufps  xmm1, xmm0, 55h ; 'U'
0x8F413A: addss   xmm1, xmm0
0x8F413E: movaps  xmm3, xmm1
0x8F4141: movaps  xmm1, xmm0
0x8F4144: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F4148: addss   xmm1, xmm3
0x8F414C: movaps  [esp+1D0h+var_170], xmm1
0x8F4151: mov     [esp+1D0h+var_188], eax
0x8F4155: sqrtss  xmm1, xmm1
0x8F4159: lea     eax, [esp+1D0h+var_1C4]
0x8F415D: movss   dword ptr [esp+1D0h+var_170], xmm1
0x8F4163: movaps  xmm1, [esp+1D0h+var_170]
0x8F4168: movss   dword ptr [eax], xmm1
0x8F416C: fld     [esp+1D0h+var_1C4]
0x8F4170: fcomp   dword ptr ds:0A2FAA8h
0x8F4176: mov     esi, edx
0x8F4178: xor     ebx, ebx
0x8F417A: fnstsw  ax
0x8F417C: mov     edi, [ecx+88h]
0x8F4182: sar     esi, 1
0x8F4184: test    ah, 41h
0x8F4187: mov     [esp+1D0h+var_1A4], edi
0x8F418B: mov     [esp+1D0h+var_1B8], edx
0x8F418F: mov     [esp+1D0h+var_180], esi
0x8F4193: mov     [esp+1D0h+var_1B4], ebx
0x8F4197: mov     [esp+1D0h+var_1B0], ebx
0x8F419B: mov     [esp+1D0h+var_1AC], 80000000h
0x8F41A3: movaps  [esp+1D0h+var_100], xmm6
0x8F41AB: jnz     loc_8F434C
0x8F41B1: movaps  xmm1, xmm0
0x8F41B4: shufps  xmm1, xmm0, 55h ; 'U'
0x8F41B8: addss   xmm1, xmm0
0x8F41BC: movaps  xmm3, xmm0
0x8F41BF: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F41C3: movaps  xmm0, xmm3
0x8F41C6: addss   xmm0, xmm1
0x8F41CA: movaps  [esp+1D0h+var_170], xmm0
0x8F41CF: rsqrtss xmm1, xmm0
0x8F41D3: movss   dword ptr [esp+1D0h+var_170], xmm1
0x8F41D9: movaps  xmm1, [esp+1D0h+var_170]
0x8F41DE: mulss   xmm0, xmm1
0x8F41E2: mulss   xmm0, xmm1
0x8F41E6: mov     [esp+1D0h+var_1BC], 40400000h
0x8F41EE: movss   xmm5, [esp+1D0h+var_1BC]
0x8F41F4: mov     [esp+1D0h+var_1BC], 3F000000h
0x8F41FC: movss   xmm3, [esp+1D0h+var_1BC]
0x8F4202: movaps  [esp+1D0h+var_120], xmm3
0x8F420A: mulss   xmm3, xmm1
0x8F420E: movaps  xmm4, xmm5
0x8F4211: subss   xmm4, xmm0
0x8F4215: movaps  xmm0, xmm3
0x8F4218: mulss   xmm0, xmm4
0x8F421C: movaps  xmm1, xmm0
0x8F421F: shufps  xmm1, xmm0, 0
0x8F4223: movaps  xmm0, xmm1
0x8F4226: mulps   xmm0, xmm2
0x8F4229: mov     dword ptr [esp+1D0h+var_140], ebx
0x8F4230: mov     dword ptr [esp+1D0h+var_140+4], ebx
0x8F4237: mov     dword ptr [esp+1D0h+var_140+8], 3F800000h
0x8F4242: mov     dword ptr [esp+1D0h+var_140+0Ch], ebx
0x8F4249: movaps  xmm4, [esp+1D0h+var_140]
0x8F4251: movaps  xmm1, xmm0
0x8F4254: mulps   xmm1, xmm4
0x8F4257: movaps  xmm2, xmm1
0x8F425A: shufps  xmm2, xmm1, 55h ; 'U'
0x8F425E: movaps  xmm3, xmm1
0x8F4261: lea     eax, [esp+1D0h+var_1BC]
0x8F4265: addss   xmm2, xmm1
0x8F4269: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x8F426D: addss   xmm3, xmm2
0x8F4271: movss   dword ptr [eax], xmm3
0x8F4275: fld     [esp+1D0h+var_1BC]
0x8F4279: fabs
0x8F427B: fcomp   dword ptr ds:0A97F54h
0x8F4281: fnstsw  ax
0x8F4283: test    ah, 5
0x8F4286: jp      loc_8F434C
0x8F428C: movaps  xmm1, xmm4
0x8F428F: shufps  xmm1, xmm4, 0C9h ; 'É'
0x8F4293: movaps  xmm2, xmm0
0x8F4296: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8F429A: movaps  xmm6, xmm2
0x8F429D: mulps   xmm6, xmm1
0x8F42A0: movaps  xmm1, xmm4
0x8F42A3: shufps  xmm1, xmm4, 0D2h ; 'Ò'
0x8F42A7: movaps  xmm3, xmm0
0x8F42AA: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8F42AE: movaps  xmm4, xmm3
0x8F42B1: mulps   xmm4, xmm1
0x8F42B4: subps   xmm4, xmm6
0x8F42B7: movaps  xmm1, xmm4
0x8F42BA: mulps   xmm1, xmm4
0x8F42BD: movaps  xmm6, xmm1
0x8F42C0: shufps  xmm6, xmm1, 55h ; 'U'
0x8F42C4: addss   xmm6, xmm1
0x8F42C8: movaps  xmm7, xmm1
0x8F42CB: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x8F42CF: movaps  xmm1, xmm7
0x8F42D2: addss   xmm1, xmm6
0x8F42D6: movaps  [esp+1D0h+var_170], xmm1
0x8F42DB: rsqrtss xmm6, xmm1
0x8F42DF: movss   dword ptr [esp+1D0h+var_170], xmm6
0x8F42E5: movaps  xmm6, [esp+1D0h+var_170]
0x8F42EA: mulss   xmm1, xmm6
0x8F42EE: mulss   xmm1, xmm6
0x8F42F2: subss   xmm5, xmm1
0x8F42F6: movaps  xmm1, [esp+1D0h+var_120]
0x8F42FE: mulss   xmm1, xmm6
0x8F4302: movaps  xmm6, [esp+1D0h+var_100]
0x8F430A: mulss   xmm1, xmm5
0x8F430E: movaps  xmm5, xmm1
0x8F4311: shufps  xmm5, xmm1, 0
0x8F4315: movaps  xmm1, xmm5
0x8F4318: mulps   xmm1, xmm4
0x8F431B: movaps  xmm4, xmm1
0x8F431E: shufps  xmm4, xmm1, 0C9h ; 'É'
0x8F4322: mulps   xmm2, xmm4
0x8F4325: movaps  xmm4, xmm1
0x8F4328: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x8F432C: mulps   xmm3, xmm4
0x8F432F: subps   xmm3, xmm2
0x8F4332: movaps  [esp+1D0h+var_70], xmm3
0x8F433A: movaps  [esp+1D0h+var_60], xmm1
0x8F4342: movaps  [esp+1D0h+var_50], xmm0
0x8F434A: jmp     short loc_8F4388
0x8F434C: xorps   xmm0, xmm0
0x8F434F: movaps  [esp+1D0h+var_70], xmm0
0x8F4357: movaps  [esp+1D0h+var_60], xmm0
0x8F435F: movaps  [esp+1D0h+var_50], xmm0
0x8F4367: mov     dword ptr [esp+1D0h+var_70], 3F800000h
0x8F4372: mov     dword ptr [esp+1D0h+var_60+4], 3F800000h
0x8F437D: mov     dword ptr [esp+1D0h+var_50+8], 3F800000h
0x8F4388: fld     [esp+1D0h+var_1C4]
0x8F438C: movaps  xmm1, xmmword ptr [ecx+70h]
0x8F4390: fmul    dword ptr ds:0A45E4Ch
0x8F4396: lea     eax, [edi+esi*2-1]
0x8F439A: imul    eax, edx
0x8F439D: fstp    dword ptr [esp+1D0h+var_D0+8]
0x8F43A4: fld     [esp+1D0h+var_1C4]
0x8F43A8: fmul    dword ptr ds:0A3D65Ch
0x8F43AE: mov     [esp+1D0h+var_1BC], 3F000000h
0x8F43B6: movss   xmm0, [esp+1D0h+var_1BC]
0x8F43BC: addps   xmm6, xmm1
0x8F43BF: fstp    [esp+1D0h+var_1BC]
0x8F43C3: mov     ecx, [esp+1D0h+var_1BC]
0x8F43C7: movaps  xmm1, xmm0
0x8F43CA: shufps  xmm1, xmm0, 0
0x8F43CE: mov     dword ptr [esp+1D0h+var_C0], 0
0x8F43D9: mov     dword ptr [esp+1D0h+var_C0+4], 0
0x8F43E4: mov     dword ptr [esp+1D0h+var_C0+8], ecx
0x8F43EB: mov     dword ptr [esp+1D0h+var_C0+0Ch], 0
0x8F43F6: movaps  xmm0, [esp+1D0h+var_C0]
0x8F43FE: add     eax, 2
0x8F4401: cmp     eax, ebx
0x8F4403: mov     dword ptr [esp+1D0h+var_D0], 0
0x8F440E: mov     dword ptr [esp+1D0h+var_D0+4], 0
0x8F4419: mov     dword ptr [esp+1D0h+var_D0+0Ch], 0
0x8F4424: subps   xmm0, [esp+1D0h+var_D0]
0x8F442C: mulps   xmm1, xmm6
0x8F442F: movaps  [esp+1D0h+var_40], xmm1
0x8F4437: movaps  [esp+1D0h+var_20], xmm0
0x8F443F: mov     [esp+1D0h+var_E0], 0
0x8F444A: mov     [esp+1D0h+var_DC], 0
0x8F4455: mov     [esp+1D0h+var_D8], 3F800000h
0x8F4460: mov     [esp+1D0h+var_D4], 0
0x8F446B: mov     dword ptr [esp+1D0h+var_1A0], 3F800000h
0x8F4473: mov     dword ptr [esp+1D0h+var_1A0+4], 0
0x8F447B: mov     dword ptr [esp+1D0h+var_1A0+8], 0
0x8F4483: mov     dword ptr [esp+1D0h+var_1A0+0Ch], 0
0x8F448B: mov     [esp+1D0h+var_A0], 0
0x8F4496: mov     [esp+1D0h+var_9C], 0BF800000h
0x8F44A1: mov     [esp+1D0h+var_98], 0
0x8F44AC: mov     [esp+1D0h+var_94], 0
0x8F44B7: jle     short loc_8F44C9
0x8F44B9: push    10h
0x8F44BB: push    eax
0x8F44BC: lea     edx, [esp+1D8h+var_1B4]
0x8F44C0: push    edx
0x8F44C1: call    sub_8A6E40
0x8F44C6: add     esp, 0Ch
0x8F44C9: fld     [esp+1D0h+var_1BC]
0x8F44CD: lea     eax, [esp+1D0h+var_150]
0x8F44D4: fadd    [esp+1D0h+var_188]
0x8F44D8: push    eax
0x8F44D9: lea     ecx, [esp+1D4h+var_70]
0x8F44E0: push    ecx
0x8F44E1: fst     [esp+1D8h+var_154]
0x8F44E8: mov     dword ptr [esp+1D8h+var_140], 0
0x8F44F3: fstp    dword ptr [esp+1D8h+var_140+8]
0x8F44FA: mov     dword ptr [esp+1D8h+var_140+4], 0
0x8F4505: mov     dword ptr [esp+1D8h+var_140+0Ch], 0
0x8F4510: movaps  xmm0, [esp+1D8h+var_140]
0x8F4518: lea     ecx, [esp+1D8h+var_150]
0x8F451F: movaps  [esp+1D8h+var_150], xmm0
0x8F4527: call    sub_88FCC0
0x8F452C: mov     edx, [esp+1D0h+var_1AC]
0x8F4530: mov     eax, [esp+1D0h+var_1B0]
0x8F4534: and     edx, 3FFFFFFFh
0x8F453A: cmp     eax, edx
0x8F453C: jnz     short loc_8F454D
0x8F453E: lea     eax, [esp+1D0h+var_1B4]
0x8F4542: push    10h
0x8F4544: push    eax
0x8F4545: call    sub_8A6EE0
0x8F454A: add     esp, 8
0x8F454D: mov     ecx, [esp+1D0h+var_1B0]
0x8F4551: mov     edx, [esp+1D0h+var_1B4]
0x8F4555: movaps  xmm0, [esp+1D0h+var_150]
0x8F455D: mov     eax, ecx
0x8F455F: shl     eax, 4
0x8F4562: add     eax, edx
0x8F4564: inc     ecx
0x8F4565: dec     esi
0x8F4566: cmp     esi, ebx
0x8F4568: mov     [esp+1D0h+var_1B0], ecx
0x8F456C: movaps  xmmword ptr [eax], xmm0
0x8F456F: mov     [esp+1D0h+var_184], esi
0x8F4573: jl      loc_8F4883
0x8F4579: movaps  xmm0, [esp+1D0h+var_1A0]
0x8F457E: fild    [esp+1D0h+var_180]
0x8F4582: movaps  xmm1, xmm0
0x8F4585: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F4589: shufps  xmm0, xmm0, 0D2h ; 'Ò'
0x8F458D: fstp    [esp+1D0h+var_1BC]
0x8F4591: movaps  [esp+1D0h+var_B0], xmm1
0x8F4599: movaps  [esp+1D0h+var_140], xmm0
0x8F45A1: fild    [esp+1D0h+var_184]
0x8F45A5: push    ecx
0x8F45A6: lea     ecx, [esp+1D4h+var_A0]
0x8F45AD: fdiv    [esp+1D4h+var_1BC]
0x8F45B1: fmul    dword ptr ds:0A3F3E0h
0x8F45B7: fstp    [esp+1D4h+var_1D4]; float
0x8F45BA: push    ecx; int
0x8F45BB: lea     ecx, [esp+1D8h+var_110]
0x8F45C2: call    sub_8B1B00
0x8F45C7: fld     dword ptr [esp+1D0h+var_110+0Ch]
0x8F45CE: fmul    dword ptr [esp+1D0h+var_110+0Ch]
0x8F45D5: movaps  xmm0, [esp+1D0h+var_110]
0x8F45DD: movaps  xmm4, [esp+1D0h+var_1A0]
0x8F45E2: movaps  [esp+1D0h+var_100], xmm0
0x8F45EA: fadd    st, st
0x8F45EC: mov     eax, [esp+1D0h+var_1B8]
0x8F45F0: mov     dword ptr [esp+1D0h+var_100+0Ch], 0
0x8F45FB: movaps  xmm1, [esp+1D0h+var_100]
0x8F4603: fsub    dword ptr ds:0A2F948h
0x8F4609: movaps  xmm0, xmm1
0x8F460C: mulps   xmm0, xmm4
0x8F460F: movaps  xmm3, xmm0
0x8F4612: shufps  xmm3, xmm0, 55h ; 'U'
0x8F4616: fstp    [esp+1D0h+var_1C4]
0x8F461A: movss   xmm2, [esp+1D0h+var_1C4]
0x8F4620: addss   xmm3, xmm0
0x8F4624: movaps  xmm5, xmm0
0x8F4627: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F462B: addss   xmm5, xmm3
0x8F462F: lea     edx, [esp+1D0h+var_178]
0x8F4633: movss   dword ptr [edx], xmm5
0x8F4637: fld     [esp+1D0h+var_178]
0x8F463B: fadd    st, st
0x8F463D: movaps  xmm5, xmm1
0x8F4640: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8F4644: mulps   xmm5, [esp+1D0h+var_B0]
0x8F464C: fstp    [esp+1D0h+var_1C4]
0x8F4650: movss   xmm0, [esp+1D0h+var_1C4]
0x8F4656: fld     dword ptr [esp+1D0h+var_110+0Ch]
0x8F465D: movaps  xmm6, xmm1
0x8F4660: fadd    st, st
0x8F4662: shufps  xmm6, xmm1, 0C9h ; 'É'
0x8F4666: mulps   xmm6, [esp+1D0h+var_140]
0x8F466E: subps   xmm6, xmm5
0x8F4671: fstp    [esp+1D0h+var_1C4]
0x8F4675: movss   xmm3, [esp+1D0h+var_1C4]
0x8F467B: movaps  xmm5, xmm3
0x8F467E: shufps  xmm5, xmm3, 0
0x8F4682: movaps  xmm3, xmm0
0x8F4685: shufps  xmm3, xmm0, 0
0x8F4689: movaps  xmm0, xmm2
0x8F468C: shufps  xmm0, xmm2, 0
0x8F4690: mulps   xmm0, xmm4
0x8F4693: mulps   xmm3, xmm1
0x8F4696: xor     esi, esi
0x8F4698: test    eax, eax
0x8F469A: mulps   xmm5, xmm6
0x8F469D: addps   xmm0, xmm3
0x8F46A0: addps   xmm0, xmm5
0x8F46A3: movaps  [esp+1D0h+var_10], xmm0
0x8F46AB: mov     [esp+1D0h+var_1A8], esi
0x8F46AF: jle     loc_8F4875
0x8F46B5: mov     eax, [esp+1D0h+var_188]
0x8F46B9: fild    [esp+1D0h+var_1B8]
0x8F46BD: mov     edi, [esp+1D0h+var_1B8]
0x8F46C1: movaps  xmm2, xmm0
0x8F46C4: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F46C8: fstp    [esp+1D0h+var_1C4]
0x8F46CC: shufps  xmm0, xmm0, 0D2h ; 'Ò'
0x8F46D0: mov     [esp+1D0h+var_174], eax
0x8F46D4: movss   xmm1, [esp+1D0h+var_174]
0x8F46DA: movaps  [esp+1D0h+var_80], xmm0
0x8F46E2: movaps  xmm0, xmm1
0x8F46E5: shufps  xmm0, xmm1, 0
0x8F46E9: movaps  [esp+1D0h+var_30], xmm2
0x8F46F1: movaps  [esp+1D0h+var_90], xmm0
0x8F46F9: lea     esp, [esp+0]
0x8F4700: fild    [esp+1D0h+var_1A8]
0x8F4704: push    ecx
0x8F4705: lea     ecx, [esp+1D4h+var_E0]
0x8F470C: fdiv    [esp+1D4h+var_1C4]
0x8F4710: fmul    dword ptr ds:0A46B14h
0x8F4716: fstp    [esp+1D4h+var_1D4]; float
0x8F4719: push    ecx; int
0x8F471A: lea     ecx, [esp+1D8h+var_170]
0x8F471E: call    sub_8B1B00
0x8F4723: fld     dword ptr [esp+1D0h+var_170+0Ch]
0x8F4727: fmul    dword ptr [esp+1D0h+var_170+0Ch]
0x8F472B: movaps  xmm0, [esp+1D0h+var_170]
0x8F4730: movaps  xmm4, [esp+1D0h+var_10]
0x8F4738: movaps  [esp+1D0h+var_120], xmm0
0x8F4740: fadd    st, st
0x8F4742: mov     dword ptr [esp+1D0h+var_120+0Ch], 0
0x8F474D: movaps  xmm1, [esp+1D0h+var_120]
0x8F4755: movaps  xmm0, xmm1
0x8F4758: fsub    dword ptr ds:0A2F948h
0x8F475E: mulps   xmm0, xmm4
0x8F4761: movaps  xmm3, xmm0
0x8F4764: shufps  xmm3, xmm0, 55h ; 'U'
0x8F4768: addss   xmm3, xmm0
0x8F476C: fstp    [esp+1D0h+var_1A8]
0x8F4770: movss   xmm2, [esp+1D0h+var_1A8]
0x8F4776: movaps  xmm5, xmm0
0x8F4779: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F477D: addss   xmm5, xmm3
0x8F4781: lea     edx, [esp+1D0h+var_1C0]
0x8F4785: movss   dword ptr [edx], xmm5
0x8F4789: fld     [esp+1D0h+var_1C0]
0x8F478D: fadd    st, st
0x8F478F: movaps  xmm5, xmm1
0x8F4792: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8F4796: mulps   xmm5, [esp+1D0h+var_30]
0x8F479E: fstp    [esp+1D0h+var_1A8]
0x8F47A2: movaps  xmm6, xmm1
0x8F47A5: fld     dword ptr [esp+1D0h+var_170+0Ch]
0x8F47A9: movss   xmm0, [esp+1D0h+var_1A8]
0x8F47AF: fadd    st, st
0x8F47B1: shufps  xmm6, xmm1, 0C9h ; 'É'
0x8F47B5: mulps   xmm6, [esp+1D0h+var_80]
0x8F47BD: subps   xmm6, xmm5
0x8F47C0: fstp    [esp+1D0h+var_1A8]
0x8F47C4: lea     eax, [esp+1D0h+var_150]
0x8F47CB: movss   xmm3, [esp+1D0h+var_1A8]
0x8F47D1: movaps  xmm5, xmm3
0x8F47D4: shufps  xmm5, xmm3, 0
0x8F47D8: movaps  xmm3, xmm0
0x8F47DB: shufps  xmm3, xmm0, 0
0x8F47DF: mulps   xmm3, xmm1
0x8F47E2: movaps  xmm1, [esp+1D0h+var_90]
0x8F47EA: movaps  xmm0, xmm2
0x8F47ED: shufps  xmm0, xmm2, 0
0x8F47F1: mulps   xmm0, xmm4
0x8F47F4: addps   xmm0, xmm3
0x8F47F7: mulps   xmm5, xmm6
0x8F47FA: addps   xmm0, xmm5
0x8F47FD: mulps   xmm1, xmm0
0x8F4800: movaps  xmm0, [esp+1D0h+var_C0]
0x8F4808: push    eax
0x8F4809: lea     ecx, [esp+1D4h+var_70]
0x8F4810: push    ecx
0x8F4811: addps   xmm0, xmm1
0x8F4814: lea     ecx, [esp+1D8h+var_150]
0x8F481B: movaps  [esp+1D8h+var_150], xmm0
0x8F4823: call    sub_88FCC0
0x8F4828: mov     edx, [esp+1D0h+var_1AC]
0x8F482C: mov     eax, [esp+1D0h+var_1B0]
0x8F4830: and     edx, 3FFFFFFFh
0x8F4836: cmp     eax, edx
0x8F4838: jnz     short loc_8F4849
0x8F483A: lea     eax, [esp+1D0h+var_1B4]
0x8F483E: push    10h
0x8F4840: push    eax
0x8F4841: call    sub_8A6EE0
0x8F4846: add     esp, 8
0x8F4849: mov     ecx, [esp+1D0h+var_1B0]
0x8F484D: mov     ebx, [esp+1D0h+var_1B4]
0x8F4851: movaps  xmm0, [esp+1D0h+var_150]
0x8F4859: mov     eax, ecx
0x8F485B: shl     eax, 4
0x8F485E: add     eax, ebx
0x8F4860: inc     ecx
0x8F4861: inc     esi
0x8F4862: cmp     esi, edi
0x8F4864: mov     [esp+1D0h+var_1B0], ecx
0x8F4868: movaps  xmmword ptr [eax], xmm0
0x8F486B: mov     [esp+1D0h+var_1A8], esi
0x8F486F: jl      loc_8F4700
0x8F4875: dec     [esp+1D0h+var_184]
0x8F4879: jns     loc_8F45A1
0x8F487F: mov     edi, [esp+1D0h+var_1A4]
0x8F4883: lea     ebx, [edi-1]
0x8F4886: test    ebx, ebx
0x8F4888: mov     [esp+1D0h+var_1A8], ebx
0x8F488C: jle     loc_8F4AA0
0x8F4892: mov     eax, [esp+1D0h+var_1B8]
0x8F4896: xor     esi, esi
0x8F4898: test    eax, eax
0x8F489A: mov     [esp+1D0h+var_184], esi
0x8F489E: jle     loc_8F4A93
0x8F48A4: fild    [esp+1D0h+var_1B8]
0x8F48A8: movaps  xmm0, [esp+1D0h+var_1A0]
0x8F48AD: mov     ecx, [esp+1D0h+var_188]
0x8F48B1: movaps  xmm3, xmm0
0x8F48B4: fstp    [esp+1D0h+var_1C4]
0x8F48B8: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8F48BC: fild    [esp+1D0h+var_1A8]
0x8F48C0: shufps  xmm0, xmm0, 0D2h ; 'Ò'
0x8F48C4: movaps  [esp+1D0h+var_140], xmm0
0x8F48CC: movaps  [esp+1D0h+var_B0], xmm3
0x8F48D4: fidiv   [esp+1D0h+var_1A4]
0x8F48D8: mov     edi, eax
0x8F48DA: fstp    [esp+1D0h+var_1C0]
0x8F48DE: movss   xmm1, [esp+1D0h+var_1C0]
0x8F48E4: mov     [esp+1D0h+var_174], ecx
0x8F48E8: movss   xmm2, [esp+1D0h+var_174]
0x8F48EE: movaps  xmm0, xmm2
0x8F48F1: shufps  xmm0, xmm2, 0
0x8F48F5: movaps  [esp+1D0h+var_90], xmm0
0x8F48FD: movaps  xmm0, xmm1
0x8F4900: shufps  xmm0, xmm1, 0
0x8F4904: mulps   xmm0, [esp+1D0h+var_20]
0x8F490C: movaps  xmm1, xmm0
0x8F490F: movaps  xmm0, [esp+1D0h+var_D0]
0x8F4917: addps   xmm0, xmm1
0x8F491A: movaps  [esp+1D0h+var_80], xmm0
0x8F4922: fild    [esp+1D0h+var_184]
0x8F4926: push    ecx
0x8F4927: lea     edx, [esp+1D4h+var_E0]
0x8F492E: lea     ecx, [esp+1D4h+var_170]
0x8F4932: fdiv    [esp+1D4h+var_1C4]
0x8F4936: fmul    dword ptr ds:0A46B14h
0x8F493C: fstp    [esp+1D4h+var_1D4]; float
0x8F493F: push    edx; int
0x8F4940: call    sub_8B1B00
0x8F4945: fld     dword ptr [esp+1D0h+var_170+0Ch]
0x8F4949: fmul    dword ptr [esp+1D0h+var_170+0Ch]
0x8F494D: movaps  xmm0, [esp+1D0h+var_170]
0x8F4952: movaps  xmm4, [esp+1D0h+var_1A0]
0x8F4957: movaps  [esp+1D0h+var_120], xmm0
0x8F495F: fadd    st, st
0x8F4961: mov     dword ptr [esp+1D0h+var_120+0Ch], 0
0x8F496C: movaps  xmm1, [esp+1D0h+var_120]
0x8F4974: movaps  xmm0, xmm1
0x8F4977: fsub    dword ptr ds:0A2F948h
0x8F497D: mulps   xmm0, xmm4
0x8F4980: movaps  xmm3, xmm0
0x8F4983: shufps  xmm3, xmm0, 55h ; 'U'
0x8F4987: addss   xmm3, xmm0
0x8F498B: fstp    [esp+1D0h+var_1C0]
0x8F498F: movss   xmm2, [esp+1D0h+var_1C0]
0x8F4995: movaps  xmm5, xmm0
0x8F4998: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F499C: addss   xmm5, xmm3
0x8F49A0: lea     eax, [esp+1D0h+var_178]
0x8F49A4: movss   dword ptr [eax], xmm5
0x8F49A8: fld     [esp+1D0h+var_178]
0x8F49AC: fadd    st, st
0x8F49AE: movaps  xmm5, xmm1
0x8F49B1: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8F49B5: mulps   xmm5, [esp+1D0h+var_B0]
0x8F49BD: fstp    [esp+1D0h+var_1C0]
0x8F49C1: movss   xmm0, [esp+1D0h+var_1C0]
0x8F49C7: fld     dword ptr [esp+1D0h+var_170+0Ch]
0x8F49CB: movaps  xmm6, xmm1
0x8F49CE: shufps  xmm6, xmm1, 0C9h ; 'É'
0x8F49D2: fadd    st, st
0x8F49D4: mulps   xmm6, [esp+1D0h+var_140]
0x8F49DC: subps   xmm6, xmm5
0x8F49DF: fstp    [esp+1D0h+var_1C0]
0x8F49E3: movss   xmm3, [esp+1D0h+var_1C0]
0x8F49E9: movaps  xmm5, xmm3
0x8F49EC: shufps  xmm5, xmm3, 0
0x8F49F0: movaps  xmm3, xmm0
0x8F49F3: shufps  xmm3, xmm0, 0
0x8F49F7: mulps   xmm3, xmm1
0x8F49FA: movaps  xmm1, [esp+1D0h+var_90]
0x8F4A02: movaps  xmm0, xmm2
0x8F4A05: shufps  xmm0, xmm2, 0
0x8F4A09: mulps   xmm0, xmm4
0x8F4A0C: addps   xmm0, xmm3
0x8F4A0F: mulps   xmm5, xmm6
0x8F4A12: addps   xmm0, xmm5
0x8F4A15: lea     ecx, [esp+1D0h+var_150]
0x8F4A1C: mulps   xmm1, xmm0
0x8F4A1F: movaps  xmm0, [esp+1D0h+var_80]
0x8F4A27: push    ecx
0x8F4A28: lea     edx, [esp+1D4h+var_70]
0x8F4A2F: addps   xmm0, xmm1
0x8F4A32: push    edx
0x8F4A33: lea     ecx, [esp+1D8h+var_150]
0x8F4A3A: movaps  [esp+1D8h+var_150], xmm0
0x8F4A42: call    sub_88FCC0
0x8F4A47: mov     eax, [esp+1D0h+var_1AC]
0x8F4A4B: mov     ecx, [esp+1D0h+var_1B0]
0x8F4A4F: and     eax, 3FFFFFFFh
0x8F4A54: cmp     ecx, eax
0x8F4A56: jnz     short loc_8F4A67
0x8F4A58: lea     ecx, [esp+1D0h+var_1B4]
0x8F4A5C: push    10h
0x8F4A5E: push    ecx
0x8F4A5F: call    sub_8A6EE0
0x8F4A64: add     esp, 8
0x8F4A67: mov     ecx, [esp+1D0h+var_1B0]
0x8F4A6B: mov     edx, [esp+1D0h+var_1B4]
0x8F4A6F: movaps  xmm0, [esp+1D0h+var_150]
0x8F4A77: mov     eax, ecx
0x8F4A79: shl     eax, 4
0x8F4A7C: add     eax, edx
0x8F4A7E: inc     ecx
0x8F4A7F: inc     esi
0x8F4A80: cmp     esi, edi
0x8F4A82: mov     [esp+1D0h+var_1B0], ecx
0x8F4A86: movaps  xmmword ptr [eax], xmm0
0x8F4A89: mov     [esp+1D0h+var_184], esi
0x8F4A8D: jl      loc_8F4922
0x8F4A93: dec     ebx
0x8F4A94: test    ebx, ebx
0x8F4A96: mov     [esp+1D0h+var_1A8], ebx
0x8F4A9A: jg      loc_8F4892
0x8F4AA0: mov     eax, [esp+1D0h+var_180]
0x8F4AA4: xor     ebx, ebx
0x8F4AA6: test    eax, eax
0x8F4AA8: mov     [esp+1D0h+var_184], ebx
0x8F4AAC: jle     loc_8F4DCA
0x8F4AB2: movaps  xmm0, [esp+1D0h+var_1A0]
0x8F4AB7: fild    [esp+1D0h+var_180]
0x8F4ABB: movaps  xmm1, xmm0
0x8F4ABE: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F4AC2: shufps  xmm0, xmm0, 0D2h ; 'Ò'
0x8F4AC6: fstp    [esp+1D0h+var_1BC]
0x8F4ACA: movaps  [esp+1D0h+var_B0], xmm1
0x8F4AD2: movaps  [esp+1D0h+var_140], xmm0
0x8F4ADA: lea     ebx, [ebx+0]
0x8F4AE0: fild    [esp+1D0h+var_184]
0x8F4AE4: push    ecx
0x8F4AE5: lea     edx, [esp+1D4h+var_A0]
0x8F4AEC: lea     ecx, [esp+1D4h+var_170]
0x8F4AF0: fdiv    [esp+1D4h+var_1BC]
0x8F4AF4: fmul    dword ptr ds:0A3721Ch
0x8F4AFA: fstp    [esp+1D4h+var_1D4]; float
0x8F4AFD: push    edx; int
0x8F4AFE: call    sub_8B1B00
0x8F4B03: fld     dword ptr [esp+1D0h+var_170+0Ch]
0x8F4B07: fmul    dword ptr [esp+1D0h+var_170+0Ch]
0x8F4B0B: movaps  xmm0, [esp+1D0h+var_170]
0x8F4B10: movaps  xmm4, [esp+1D0h+var_1A0]
0x8F4B15: movaps  [esp+1D0h+var_120], xmm0
0x8F4B1D: fadd    st, st
0x8F4B1F: mov     dword ptr [esp+1D0h+var_120+0Ch], 0
0x8F4B2A: movaps  xmm1, [esp+1D0h+var_120]
0x8F4B32: movaps  xmm0, xmm1
0x8F4B35: fsub    dword ptr ds:0A2F948h
0x8F4B3B: mulps   xmm0, xmm4
0x8F4B3E: movaps  xmm3, xmm0
0x8F4B41: shufps  xmm3, xmm0, 55h ; 'U'
0x8F4B45: addss   xmm3, xmm0
0x8F4B49: fstp    [esp+1D0h+var_1C0]
0x8F4B4D: movss   xmm2, [esp+1D0h+var_1C0]
0x8F4B53: movaps  xmm5, xmm0
0x8F4B56: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F4B5A: addss   xmm5, xmm3
0x8F4B5E: lea     eax, [esp+1D0h+var_174]
0x8F4B62: movss   dword ptr [eax], xmm5
0x8F4B66: fld     [esp+1D0h+var_174]
0x8F4B6A: mov     eax, [esp+1D0h+var_1B8]
0x8F4B6E: fadd    st, st
0x8F4B70: movaps  xmm5, xmm1
0x8F4B73: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8F4B77: mulps   xmm5, [esp+1D0h+var_B0]
0x8F4B7F: fstp    [esp+1D0h+var_1C0]
0x8F4B83: fld     dword ptr [esp+1D0h+var_170+0Ch]
0x8F4B87: movss   xmm0, [esp+1D0h+var_1C0]
0x8F4B8D: fadd    st, st
0x8F4B8F: movaps  xmm6, xmm1
0x8F4B92: shufps  xmm6, xmm1, 0C9h ; 'É'
0x8F4B96: mulps   xmm6, [esp+1D0h+var_140]
0x8F4B9E: subps   xmm6, xmm5
0x8F4BA1: fstp    [esp+1D0h+var_1C0]
0x8F4BA5: movss   xmm3, [esp+1D0h+var_1C0]
0x8F4BAB: movaps  xmm5, xmm3
0x8F4BAE: shufps  xmm5, xmm3, 0
0x8F4BB2: movaps  xmm3, xmm0
0x8F4BB5: shufps  xmm3, xmm0, 0
0x8F4BB9: movaps  xmm0, xmm2
0x8F4BBC: shufps  xmm0, xmm2, 0
0x8F4BC0: mulps   xmm0, xmm4
0x8F4BC3: mulps   xmm3, xmm1
0x8F4BC6: xor     esi, esi
0x8F4BC8: test    eax, eax
0x8F4BCA: mulps   xmm5, xmm6
0x8F4BCD: addps   xmm0, xmm3
0x8F4BD0: addps   xmm0, xmm5
0x8F4BD3: movaps  [esp+1D0h+var_20], xmm0
0x8F4BDB: mov     [esp+1D0h+var_1A8], esi
0x8F4BDF: jle     loc_8F4DB9
0x8F4BE5: mov     ecx, [esp+1D0h+var_188]
0x8F4BE9: fild    [esp+1D0h+var_1B8]
0x8F4BED: movaps  xmm2, xmm0
0x8F4BF0: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F4BF4: shufps  xmm0, xmm0, 0D2h ; 'Ò'
0x8F4BF8: fstp    [esp+1D0h+var_1C4]
0x8F4BFC: mov     [esp+1D0h+var_178], ecx
0x8F4C00: movss   xmm1, [esp+1D0h+var_178]
0x8F4C06: movaps  [esp+1D0h+var_80], xmm0
0x8F4C0E: movaps  xmm0, xmm1
0x8F4C11: shufps  xmm0, xmm1, 0
0x8F4C15: movaps  [esp+1D0h+var_90], xmm2
0x8F4C1D: movaps  [esp+1D0h+var_30], xmm0
0x8F4C25: mov     edi, eax
0x8F4C27: jmp     short loc_8F4C30
0x8F4C29: align 10h
0x8F4C30: fild    [esp+1D0h+var_1A8]
0x8F4C34: push    ecx
0x8F4C35: lea     edx, [esp+1D4h+var_E0]
0x8F4C3C: lea     ecx, [esp+1D4h+var_110]
0x8F4C43: fdiv    [esp+1D4h+var_1C4]
0x8F4C47: fmul    dword ptr ds:0A46B14h
0x8F4C4D: fstp    [esp+1D4h+var_1D4]; float
0x8F4C50: push    edx; int
0x8F4C51: call    sub_8B1B00
0x8F4C56: fld     dword ptr [esp+1D0h+var_110+0Ch]
0x8F4C5D: fmul    dword ptr [esp+1D0h+var_110+0Ch]
0x8F4C64: movaps  xmm0, [esp+1D0h+var_110]
0x8F4C6C: movaps  xmm4, [esp+1D0h+var_20]
0x8F4C74: movaps  [esp+1D0h+var_100], xmm0
0x8F4C7C: fadd    st, st
0x8F4C7E: mov     dword ptr [esp+1D0h+var_100+0Ch], 0
0x8F4C89: movaps  xmm1, [esp+1D0h+var_100]
0x8F4C91: movaps  xmm0, xmm1
0x8F4C94: fsub    dword ptr ds:0A2F948h
0x8F4C9A: mulps   xmm0, xmm4
0x8F4C9D: movaps  xmm3, xmm0
0x8F4CA0: shufps  xmm3, xmm0, 55h ; 'U'
0x8F4CA4: addss   xmm3, xmm0
0x8F4CA8: fstp    [esp+1D0h+var_1C0]
0x8F4CAC: movss   xmm2, [esp+1D0h+var_1C0]
0x8F4CB2: movaps  xmm5, xmm0
0x8F4CB5: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F4CB9: addss   xmm5, xmm3
0x8F4CBD: lea     eax, [esp+1D0h+var_E4]
0x8F4CC4: movss   dword ptr [eax], xmm5
0x8F4CC8: fld     [esp+1D0h+var_E4]
0x8F4CCF: fadd    st, st
0x8F4CD1: movaps  xmm5, xmm1
0x8F4CD4: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8F4CD8: mulps   xmm5, [esp+1D0h+var_90]
0x8F4CE0: fstp    [esp+1D0h+var_1C0]
0x8F4CE4: movss   xmm0, [esp+1D0h+var_1C0]
0x8F4CEA: fld     dword ptr [esp+1D0h+var_110+0Ch]
0x8F4CF1: movaps  xmm6, xmm1
0x8F4CF4: shufps  xmm6, xmm1, 0C9h ; 'É'
0x8F4CF8: fadd    st, st
0x8F4CFA: mulps   xmm6, [esp+1D0h+var_80]
0x8F4D02: subps   xmm6, xmm5
0x8F4D05: fstp    [esp+1D0h+var_1C0]
0x8F4D09: movss   xmm3, [esp+1D0h+var_1C0]
0x8F4D0F: movaps  xmm5, xmm3
0x8F4D12: shufps  xmm5, xmm3, 0
0x8F4D16: movaps  xmm3, xmm0
0x8F4D19: shufps  xmm3, xmm0, 0
0x8F4D1D: mulps   xmm3, xmm1
0x8F4D20: movaps  xmm1, [esp+1D0h+var_30]
0x8F4D28: movaps  xmm0, xmm2
0x8F4D2B: shufps  xmm0, xmm2, 0
0x8F4D2F: mulps   xmm0, xmm4
0x8F4D32: addps   xmm0, xmm3
0x8F4D35: mulps   xmm5, xmm6
0x8F4D38: addps   xmm0, xmm5
0x8F4D3B: lea     ecx, [esp+1D0h+var_150]
0x8F4D42: mulps   xmm1, xmm0
0x8F4D45: movaps  xmm0, [esp+1D0h+var_D0]
0x8F4D4D: push    ecx
0x8F4D4E: lea     edx, [esp+1D4h+var_70]
0x8F4D55: addps   xmm0, xmm1
0x8F4D58: push    edx
0x8F4D59: lea     ecx, [esp+1D8h+var_150]
0x8F4D60: movaps  [esp+1D8h+var_150], xmm0
0x8F4D68: call    sub_88FCC0
0x8F4D6D: mov     eax, [esp+1D0h+var_1AC]
0x8F4D71: mov     ecx, [esp+1D0h+var_1B0]
0x8F4D75: and     eax, 3FFFFFFFh
0x8F4D7A: cmp     ecx, eax
0x8F4D7C: jnz     short loc_8F4D8D
0x8F4D7E: lea     ecx, [esp+1D0h+var_1B4]
0x8F4D82: push    10h
0x8F4D84: push    ecx
0x8F4D85: call    sub_8A6EE0
0x8F4D8A: add     esp, 8
0x8F4D8D: mov     ecx, [esp+1D0h+var_1B0]
0x8F4D91: mov     edx, [esp+1D0h+var_1B4]
0x8F4D95: movaps  xmm0, [esp+1D0h+var_150]
0x8F4D9D: mov     eax, ecx
0x8F4D9F: shl     eax, 4
0x8F4DA2: add     eax, edx
0x8F4DA4: inc     ecx
0x8F4DA5: inc     esi
0x8F4DA6: cmp     esi, edi
0x8F4DA8: mov     [esp+1D0h+var_1B0], ecx
0x8F4DAC: movaps  xmmword ptr [eax], xmm0
0x8F4DAF: mov     [esp+1D0h+var_1A8], esi
0x8F4DB3: jl      loc_8F4C30
0x8F4DB9: mov     eax, [esp+1D0h+var_180]
0x8F4DBD: inc     ebx
0x8F4DBE: cmp     ebx, eax
0x8F4DC0: mov     [esp+1D0h+var_184], ebx
0x8F4DC4: jl      loc_8F4AE0
0x8F4DCA: fld     [esp+1D0h+var_154]
0x8F4DCE: lea     edx, [esp+1D0h+var_150]
0x8F4DD5: push    edx
0x8F4DD6: fchs
0x8F4DD8: lea     eax, [esp+1D4h+var_70]
0x8F4DDF: fstp    dword ptr [esp+1D4h+var_150+8]
0x8F4DE6: push    eax
0x8F4DE7: lea     ecx, [esp+1D8h+var_150]
0x8F4DEE: mov     dword ptr [esp+1D8h+var_150], 0
0x8F4DF9: mov     dword ptr [esp+1D8h+var_150+4], 0
0x8F4E04: mov     dword ptr [esp+1D8h+var_150+0Ch], 0
0x8F4E0F: call    sub_88FCC0
0x8F4E14: mov     ecx, [esp+1D0h+var_1AC]
0x8F4E18: mov     eax, [esp+1D0h+var_1B0]
0x8F4E1C: and     ecx, 3FFFFFFFh
0x8F4E22: cmp     eax, ecx
0x8F4E24: jnz     short loc_8F4E35
0x8F4E26: lea     edx, [esp+1D0h+var_1B4]
0x8F4E2A: push    10h
0x8F4E2C: push    edx
0x8F4E2D: call    sub_8A6EE0
0x8F4E32: add     esp, 8
0x8F4E35: mov     ecx, [esp+1D0h+var_1B0]
0x8F4E39: mov     ebx, [esp+1D0h+var_1B4]
0x8F4E3D: movaps  xmm0, [esp+1D0h+var_150]
0x8F4E45: mov     eax, ecx
0x8F4E47: shl     eax, 4
0x8F4E4A: add     eax, ebx
0x8F4E4C: inc     ecx
0x8F4E4D: mov     [esp+1D0h+var_1B0], ecx
0x8F4E51: movaps  xmmword ptr [eax], xmm0
0x8F4E54: mov     ecx, ds:0BA7D98h
0x8F4E5A: mov     eax, [ecx]
0x8F4E5C: push    24h ; '$'
0x8F4E5E: push    18h
0x8F4E60: call    dword ptr [eax+10h]
0x8F4E63: xor     esi, esi
0x8F4E65: cmp     eax, esi
0x8F4E67: jz      short loc_8F4E81
0x8F4E69: mov     [eax], esi
0x8F4E6B: mov     [eax+4], esi
0x8F4E6E: mov     ecx, 80000000h
0x8F4E73: mov     [eax+8], ecx
0x8F4E76: mov     [eax+0Ch], esi
0x8F4E79: mov     [eax+10h], esi
0x8F4E7C: mov     [eax+14h], ecx
0x8F4E7F: mov     esi, eax
0x8F4E81: mov     ecx, [esi+8]
0x8F4E84: mov     edx, [esp+1D0h+var_1B0]
0x8F4E88: mov     edi, ds:0BA9DE4h
0x8F4E8E: mov     ebx, large fs:2Ch
0x8F4E95: mov     eax, ecx
0x8F4E97: and     eax, 3FFFFFFFh
0x8F4E9C: cmp     eax, edx
0x8F4E9E: mov     [esp+1D0h+var_188], esi
0x8F4EA2: jge     short loc_8F4F00
0x8F4EA4: test    ecx, ecx
0x8F4EA6: js      short loc_8F4EC9
0x8F4EA8: mov     ecx, [ebx+edi*4]
0x8F4EAB: mov     ecx, [ecx+19Ch]
0x8F4EB1: test    ecx, ecx
0x8F4EB3: jnz     short loc_8F4EBB
0x8F4EB5: mov     ecx, ds:0BA7D9Ch
0x8F4EBB: mov     edx, [esi]
0x8F4EBD: push    14h
0x8F4EBF: shl     eax, 4
0x8F4EC2: push    eax
0x8F4EC3: push    edx
0x8F4EC4: call    sub_8A75D0
0x8F4EC9: mov     eax, [ebx+edi*4]
0x8F4ECC: mov     eax, [eax+19Ch]
0x8F4ED2: test    eax, eax
0x8F4ED4: jnz     short loc_8F4EDB
0x8F4ED6: mov     eax, ds:0BA7D9Ch
0x8F4EDB: mov     ecx, [esp+1D0h+var_1B0]
0x8F4EDF: shl     ecx, 4
0x8F4EE2: push    14h
0x8F4EE4: push    ecx
0x8F4EE5: mov     ecx, eax
0x8F4EE7: call    sub_8A7560
0x8F4EEC: mov     edx, [esi+8]
0x8F4EEF: mov     [esi], eax
0x8F4EF1: mov     eax, [esp+1D0h+var_1B0]
0x8F4EF5: and     edx, 40000000h
0x8F4EFB: or      edx, eax
0x8F4EFD: mov     [esi+8], edx
0x8F4F00: mov     eax, [esp+1D0h+var_1B0]
0x8F4F04: mov     ecx, [esi]
0x8F4F06: mov     [esi+4], eax
0x8F4F09: mov     edx, [esp+1D0h+var_1B0]
0x8F4F0D: test    edx, edx
0x8F4F0F: jle     short loc_8F4F24
0x8F4F11: mov     eax, [esp+1D0h+var_1B4]
0x8F4F15: movaps  xmm0, xmmword ptr [eax]
0x8F4F18: movaps  xmmword ptr [ecx], xmm0
0x8F4F1B: add     eax, 10h
0x8F4F1E: add     ecx, 10h
0x8F4F21: dec     edx
0x8F4F22: jnz     short loc_8F4F15
0x8F4F24: mov     eax, [esi+4]
0x8F4F27: xor     ebx, ebx
0x8F4F29: test    eax, eax
0x8F4F2B: jle     short loc_8F4F5B
0x8F4F2D: mov     ecx, [esp+1D0h+var_124]
0x8F4F34: add     ecx, 10h
0x8F4F37: mov     [esp+1D0h+var_154], ecx
0x8F4F3B: xor     edi, edi
0x8F4F3D: lea     ecx, [ecx+0]
0x8F4F40: mov     edx, [esi]
0x8F4F42: mov     eax, [esp+1D0h+var_154]
0x8F4F46: lea     ecx, [edx+edi]
0x8F4F49: push    ecx
0x8F4F4A: push    eax
0x8F4F4B: call    sub_88FCC0
0x8F4F50: mov     eax, [esi+4]
0x8F4F53: inc     ebx
0x8F4F54: add     edi, 10h
0x8F4F57: cmp     ebx, eax
0x8F4F59: jl      short loc_8F4F40
0x8F4F5B: mov     eax, [esp+1D0h+var_1B8]
0x8F4F5F: test    eax, eax
0x8F4F61: mov     edi, 1
0x8F4F66: mov     [esp+1D0h+var_1C4], edi
0x8F4F6A: jle     loc_8F500D
0x8F4F70: mov     ecx, eax
0x8F4F72: add     esi, 0Ch
0x8F4F75: mov     [esp+1D0h+var_1BC], ecx
0x8F4F79: lea     esp, [esp+0]
0x8F4F80: mov     eax, edi
0x8F4F82: cdq
0x8F4F83: idiv    [esp+1D0h+var_1B8]
0x8F4F87: lea     ecx, [esp+1D0h+var_1A0]
0x8F4F8B: mov     dword ptr [esp+1D0h+var_1A0], 0
0x8F4F93: mov     dword ptr [esp+1D0h+var_1A0+4], edi
0x8F4F97: mov     ebx, edx
0x8F4F99: lea     edx, [esp+1D0h+var_1B4]
0x8F4F9D: push    edx
0x8F4F9E: inc     ebx
0x8F4F9F: lea     edx, [esp+1D4h+var_17A]
0x8F4FA3: mov     dword ptr [esp+1D4h+var_1A0+8], ebx
0x8F4FA7: call    sub_8F3FA0
0x8F4FAC: mov     cl, [eax]
0x8F4FAE: add     esp, 4
0x8F4FB1: test    cl, cl
0x8F4FB3: jnz     short loc_8F4FC1
0x8F4FB5: mov     dword ptr [esp+1D0h+var_1A0+4], 0
0x8F4FBD: mov     dword ptr [esp+1D0h+var_1A0], edi
0x8F4FC1: mov     eax, [esi+8]
0x8F4FC4: mov     ecx, [esi+4]
0x8F4FC7: and     eax, 3FFFFFFFh
0x8F4FCC: cmp     ecx, eax
0x8F4FCE: jnz     short loc_8F4FDB
0x8F4FD0: push    0Ch
0x8F4FD2: push    esi
0x8F4FD3: call    sub_8A6EE0
0x8F4FD8: add     esp, 8
0x8F4FDB: mov     eax, [esi+4]
0x8F4FDE: mov     edx, [esi]
0x8F4FE0: lea     ecx, [eax+eax*2]
0x8F4FE3: lea     eax, [edx+ecx*4]
0x8F4FE6: mov     ecx, dword ptr [esp+1D0h+var_1A0]
0x8F4FEA: mov     edx, dword ptr [esp+1D0h+var_1A0+4]
0x8F4FEE: mov     [eax], ecx
0x8F4FF0: mov     [eax+4], edx
0x8F4FF3: mov     [eax+8], ebx
0x8F4FF6: mov     edx, [esi+4]
0x8F4FF9: mov     eax, [esp+1D0h+var_1BC]
0x8F4FFD: inc     edx
0x8F4FFE: inc     edi
0x8F4FFF: dec     eax
0x8F5000: mov     [esi+4], edx
0x8F5003: mov     [esp+1D0h+var_1BC], eax
0x8F5007: jnz     loc_8F4F80
0x8F500D: mov     eax, [esp+1D0h+var_1A4]
0x8F5011: mov     ecx, [esp+1D0h+var_180]
0x8F5015: lea     eax, [eax+ecx*2-2]
0x8F5019: test    eax, eax
0x8F501B: jle     loc_8F5180
0x8F5021: mov     [esp+1D0h+var_180], eax
0x8F5025: jmp     short loc_8F5030
0x8F5027: align 10h
0x8F5030: mov     eax, [esp+1D0h+var_1B8]
0x8F5034: test    eax, eax
0x8F5036: jle     loc_8F5163
0x8F503C: mov     esi, [esp+1D0h+var_188]
0x8F5040: mov     edx, eax
0x8F5042: add     esi, 0Ch
0x8F5045: mov     [esp+1D0h+var_1A4], 1
0x8F504D: mov     [esp+1D0h+var_1BC], edx
0x8F5051: mov     eax, [esp+1D0h+var_1A4]
0x8F5055: mov     ebx, [esp+1D0h+var_1C4]
0x8F5059: mov     ecx, [esp+1D0h+var_1B8]
0x8F505D: lea     edi, [ebx+eax-1]
0x8F5061: lea     edx, [edi+ecx]
0x8F5064: mov     dword ptr [esp+1D0h+var_1A0+4], edx
0x8F5068: cdq
0x8F5069: idiv    ecx
0x8F506B: mov     dword ptr [esp+1D0h+var_1A0], edi
0x8F506F: add     ebx, edx
0x8F5071: lea     eax, [ebx+ecx]
0x8F5074: mov     [esp+1D0h+var_154], eax
0x8F5078: mov     dword ptr [esp+1D0h+var_1A0+8], eax
0x8F507C: lea     eax, [esp+1D0h+var_1B4]
0x8F5080: push    eax
0x8F5081: lea     ecx, [esp+1D4h+var_1A0]
0x8F5085: lea     edx, [esp+1D4h+var_17A]
0x8F5089: call    sub_8F3FA0
0x8F508E: mov     cl, [eax]
0x8F5090: add     esp, 4
0x8F5093: test    cl, cl
0x8F5095: jnz     short loc_8F50A5
0x8F5097: mov     eax, dword ptr [esp+1D0h+var_1A0+4]
0x8F509B: mov     ecx, edi
0x8F509D: mov     dword ptr [esp+1D0h+var_1A0+4], ecx
0x8F50A1: mov     dword ptr [esp+1D0h+var_1A0], eax
0x8F50A5: mov     edx, [esi+8]
0x8F50A8: mov     eax, [esi+4]
0x8F50AB: and     edx, 3FFFFFFFh
0x8F50B1: cmp     eax, edx
0x8F50B3: jnz     short loc_8F50C0
0x8F50B5: push    0Ch
0x8F50B7: push    esi
0x8F50B8: call    sub_8A6EE0
0x8F50BD: add     esp, 8
0x8F50C0: mov     eax, [esi+4]
0x8F50C3: mov     ecx, [esi]
0x8F50C5: lea     eax, [eax+eax*2]
0x8F50C8: lea     edx, [ecx+eax*4]
0x8F50CB: mov     eax, dword ptr [esp+1D0h+var_1A0]
0x8F50CF: mov     ecx, dword ptr [esp+1D0h+var_1A0+4]
0x8F50D3: mov     [edx], eax
0x8F50D5: mov     eax, dword ptr [esp+1D0h+var_1A0+8]
0x8F50D9: mov     [edx+4], ecx
0x8F50DC: mov     [edx+8], eax
0x8F50DF: inc     dword ptr [esi+4]
0x8F50E2: mov     ecx, [esp+1D0h+var_154]
0x8F50E6: lea     edx, [esp+1D0h+var_1B4]
0x8F50EA: mov     dword ptr [esp+1D0h+var_1A0+8], ecx
0x8F50EE: push    edx
0x8F50EF: lea     ecx, [esp+1D4h+var_1A0]
0x8F50F3: lea     edx, [esp+1D4h+var_179]
0x8F50F7: mov     dword ptr [esp+1D4h+var_1A0], edi
0x8F50FB: mov     dword ptr [esp+1D4h+var_1A0+4], ebx
0x8F50FF: call    sub_8F3FA0
0x8F5104: mov     cl, [eax]
0x8F5106: add     esp, 4
0x8F5109: test    cl, cl
0x8F510B: jnz     short loc_8F5113
0x8F510D: mov     eax, ebx
0x8F510F: mov     ebx, edi
0x8F5111: mov     edi, eax
0x8F5113: mov     eax, [esi+8]
0x8F5116: mov     ecx, [esi+4]
0x8F5119: and     eax, 3FFFFFFFh
0x8F511E: cmp     ecx, eax
0x8F5120: jnz     short loc_8F512D
0x8F5122: push    0Ch
0x8F5124: push    esi
0x8F5125: call    sub_8A6EE0
0x8F512A: add     esp, 8
0x8F512D: mov     eax, [esi+4]
0x8F5130: mov     edx, [esi]
0x8F5132: lea     ecx, [eax+eax*2]
0x8F5135: lea     eax, [edx+ecx*4]
0x8F5138: mov     ecx, dword ptr [esp+1D0h+var_1A0+8]
0x8F513C: mov     [eax], edi
0x8F513E: mov     [eax+4], ebx
0x8F5141: mov     [eax+8], ecx
0x8F5144: mov     edx, [esi+4]
0x8F5147: mov     ecx, [esp+1D0h+var_1A4]
0x8F514B: mov     eax, [esp+1D0h+var_1BC]
0x8F514F: inc     edx
0x8F5150: inc     ecx
0x8F5151: dec     eax
0x8F5152: mov     [esi+4], edx
0x8F5155: mov     [esp+1D0h+var_1A4], ecx
0x8F5159: mov     [esp+1D0h+var_1BC], eax
0x8F515D: jnz     loc_8F5051
0x8F5163: mov     ecx, [esp+1D0h+var_1C4]
0x8F5167: mov     edx, [esp+1D0h+var_1B8]
0x8F516B: mov     eax, [esp+1D0h+var_180]
0x8F516F: add     ecx, edx
0x8F5171: dec     eax
0x8F5172: mov     [esp+1D0h+var_1C4], ecx
0x8F5176: mov     [esp+1D0h+var_180], eax
0x8F517A: jnz     loc_8F5030
0x8F5180: mov     eax, [esp+1D0h+var_1B8]
0x8F5184: test    eax, eax
0x8F5186: jle     loc_8F523D
0x8F518C: mov     ecx, [esp+1D0h+var_1C4]
0x8F5190: mov     esi, [esp+1D0h+var_188]
0x8F5194: add     ecx, eax
0x8F5196: mov     dword ptr [esp+1D0h+var_1A0+8], ecx
0x8F519A: add     esi, 0Ch
0x8F519D: mov     ebx, 1
0x8F51A2: mov     [esp+1D0h+var_1A4], eax
0x8F51A6: jmp     short loc_8F51B0
0x8F51A8: align 10h
0x8F51B0: mov     ecx, [esp+1D0h+var_1C4]
0x8F51B4: lea     edx, [ebx+ecx-1]
0x8F51B8: mov     dword ptr [esp+1D0h+var_1A0], edx
0x8F51BC: mov     eax, ebx
0x8F51BE: cdq
0x8F51BF: idiv    [esp+1D0h+var_1B8]
0x8F51C3: lea     eax, [esp+1D0h+var_1B4]
0x8F51C7: push    eax
0x8F51C8: mov     edi, edx
0x8F51CA: add     edi, ecx
0x8F51CC: lea     ecx, [esp+1D4h+var_1A0]
0x8F51D0: lea     edx, [esp+1D4h+var_179]
0x8F51D4: mov     dword ptr [esp+1D4h+var_1A0+4], edi
0x8F51D8: call    sub_8F3FA0
0x8F51DD: mov     cl, [eax]
0x8F51DF: add     esp, 4
0x8F51E2: test    cl, cl
0x8F51E4: jnz     short loc_8F51F0
0x8F51E6: mov     eax, edi
0x8F51E8: mov     edi, dword ptr [esp+1D0h+var_1A0]
0x8F51EC: mov     dword ptr [esp+1D0h+var_1A0], eax
0x8F51F0: mov     ecx, [esi+8]
0x8F51F3: mov     eax, [esi+4]
0x8F51F6: and     ecx, 3FFFFFFFh
0x8F51FC: cmp     eax, ecx
0x8F51FE: jnz     short loc_8F520B
0x8F5200: push    0Ch
0x8F5202: push    esi
0x8F5203: call    sub_8A6EE0
0x8F5208: add     esp, 8
0x8F520B: mov     eax, [esi+4]
0x8F520E: lea     edx, [eax+eax*2]
0x8F5211: mov     eax, [esi]
0x8F5213: lea     ecx, [eax+edx*4]
0x8F5216: mov     edx, dword ptr [esp+1D0h+var_1A0]
0x8F521A: mov     eax, dword ptr [esp+1D0h+var_1A0+8]
0x8F521E: mov     [ecx], edx
0x8F5220: mov     [ecx+4], edi
0x8F5223: mov     [ecx+8], eax
0x8F5226: mov     edx, [esi+4]
0x8F5229: mov     eax, [esp+1D0h+var_1A4]
0x8F522D: inc     edx
0x8F522E: inc     ebx
0x8F522F: dec     eax
0x8F5230: mov     [esi+4], edx
0x8F5233: mov     [esp+1D0h+var_1A4], eax
0x8F5237: jnz     loc_8F51B0
0x8F523D: mov     eax, [esp+1D0h+var_1AC]
0x8F5241: test    eax, eax
0x8F5243: mov     ecx, [esp+1D0h+var_124]
0x8F524A: mov     edx, [esp+1D0h+var_188]
0x8F524E: mov     [ecx+50h], edx
0x8F5251: js      short loc_8F5288
0x8F5253: mov     ecx, large fs:2Ch
0x8F525A: mov     edx, ds:0BA9DE4h
0x8F5260: mov     ecx, [ecx+edx*4]
0x8F5263: mov     ecx, [ecx+19Ch]
0x8F5269: test    ecx, ecx
0x8F526B: jnz     short loc_8F5273
0x8F526D: mov     ecx, ds:0BA7D9Ch
0x8F5273: mov     edx, [esp+1D0h+var_1B4]
0x8F5277: and     eax, 3FFFFFFFh
0x8F527C: push    14h
0x8F527E: shl     eax, 4
0x8F5281: push    eax
0x8F5282: push    edx
0x8F5283: call    sub_8A75D0
0x8F5288: pop     edi
0x8F5289: pop     esi
0x8F528A: pop     ebx
0x8F528B: mov     esp, ebp
0x8F528D: pop     ebp
0x8F528E: retn
