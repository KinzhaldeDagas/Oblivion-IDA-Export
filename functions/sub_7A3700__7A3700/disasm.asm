0x7A3700: push    0FFFFFFFFh; CTreeEngine constructor for stock compact 0x110-byte object. Initializes branch weight level at +0xF0 and stock wind info; no floor-info fields or cluster first-branch-level storage are present.
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
0x7A372A: call    OB_CIdvCamera_ctor_010201A0; Constructs the exact 0x10-byte Oblivion CIdvCamera base: installs its vftable and zeros the three-float position at +0x04. Called as the base constructor of both CTreeEngine and CBillboardLeaf. RT4.1 exposes the same layout/behavior under the later name stCamera.
0x7A372F: fld1
0x7A3731: fst     dword ptr [esi+10h]
0x7A3734: xor     ebx, ebx
0x7A3736: fstp    dword ptr [esi+14h]
0x7A3739: lea     ecx, [esi+20h]; this
0x7A373C: fld     dword ptr ds:0A30634h
0x7A3742: mov     [esp+20h+var_4], ebx
0x7A3746: fstp    dword ptr [esi+18h]
0x7A3749: mov     dword ptr [esi], offset ??_7CTreeEngine@@6B@; const CTreeEngine::`vftable'
0x7A374F: fldz
0x7A3751: fstp    dword ptr [esi+1Ch]
0x7A3754: call    OB_stRandom_ctor_010201A0; Oblivion stRandom constructor. The class has no per-instance generator state; if the shared SIdvRandomImpl state is not initialized, it invokes Reseed(-1).
0x7A3759: lea     ecx, [esi+24h]; this
0x7A375C: mov     byte ptr [esp+20h+var_4], 1
0x7A3761: mov     byte ptr [esi+21h], 1
0x7A3765: call    OB_SIdvTreeInfo_ctor_010201A0; OBLIVION AUTHORITY (2026-08-30): Initializes the exact 0x34-byte SIdvTreeInfo embedded at CTreeEngine+0x24. The compact layout is stString28 followed by far, near, seed, size, variance, and flareSeed.
0x7A376A: mov     [esi+58h], ebx
0x7A376D: mov     [esi+5Ch], ebx
0x7A3770: mov     [esi+64h], ebx
0x7A3773: mov     [esi+68h], ebx
0x7A3776: mov     [esi+6Ch], ebx
0x7A3779: mov     dword ptr [esi+70h], 6
0x7A3780: mov     [esi+78h], ebx
0x7A3783: mov     [esi+7Ch], ebx
0x7A3786: mov     [esi+80h], ebx
0x7A378C: lea     ecx, [esi+84h]; this
0x7A3792: mov     byte ptr [esp+20h+var_4], 4
0x7A3797: call    OB_SIdvLeafInfo_ctor_010201A0; Oblivion SIdvLeafInfo constructor with the leafTextures member now typed as vector<SIdvLeafTexture>; total embedded record size remains 0x50.
0x7A379C: fld     dword ptr ds:0A3D65Ch
0x7A37A2: fstp    dword ptr [esi+0DCh]
0x7A37A8: lea     edi, [esi+0F4h]
0x7A37AE: fld1
0x7A37B0: mov     ecx, edi; this
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
0x7A37F3: call    OB_SIdvWindInfo_ctor_010201A0; Constructs the embedded 0x1C-byte SIdvWindInfo with leafFactors.x/y initialized to the local default scalar and the remaining five floats zero. CTreeEngine construction subsequently derives leafOscillation and assigns strength.
0x7A37F8: fld     dword ptr ds:0A41304h
0x7A37FE: mov     eax, [esp+20h+branchGeometry]
0x7A3802: fstp    dword ptr [esi+10Ch]
0x7A3808: mov     [esi+5Ch], eax
0x7A380B: fld     dword ptr [esi+0F8h]
0x7A3811: fadd    st, st
0x7A3813: mov     eax, esi
0x7A3815: fstp    [esp+20h+var_10]
0x7A3819: fld     dword ptr [edi]
0x7A381B: fmul    qword ptr ds:0A73DD8h
0x7A3821: fstp    [esp+20h+branchGeometry]
0x7A3825: fld     [esp+20h+branchGeometry]
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
0x9CC8C0: mov     ecx, [ebp-10h]; this
0x9CC8C3: jmp     OB_CIdvCamera_dtor_010201A0; Oblivion CIdvCamera base destructor. Restores the CIdvCamera vftable; both CTreeEngine and CBillboardLeaf destructors call this shared base cleanup.
0x9CC8C8: mov     ecx, [ebp-10h]
0x9CC8CB: add     ecx, 20h ; ' '; this
0x9CC8CE: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC8D3: mov     ecx, [ebp-10h]
0x9CC8D6: add     ecx, 24h ; '$'; this
0x9CC8D9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC8DE: mov     ecx, [ebp-10h]
0x9CC8E1: add     ecx, 60h ; '`'; this
0x9CC8E4: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC8E9: mov     ecx, [ebp-10h]
0x9CC8EC: add     ecx, 74h ; 't'; this
0x9CC8EF: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC8F4: mov     ecx, [ebp-10h]
0x9CC8F7: add     ecx, 84h ; '„'; this
0x9CC8FD: jmp     OB_SIdvLeafInfo_dtor_010201A0; SIdvLeafInfo destruction frees rocking/vertex/texcoord tables, then destroys and frees the typed compact leaf-texture vector.
0x9CC902: mov     edx, [esp+arg_4]
0x9CC906: lea     eax, [edx-10h]
0x9CC909: mov     ecx, [edx-14h]
0x9CC90C: xor     ecx, eax
0x9CC90E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC913: mov     eax, offset stru_AF5C50
0x9CC918: jmp     ___CxxFrameHandler3
