0x4B9DA0: push    0FFFFFFFFh; Verified Oblivion TESObjectTREE layout through +0x7F. The embedded NiTArray<unsigned int> at +0x48 has data +0x4C, capacity +0x50, end/seed count +0x52, numObjects +0x54, and growSize +0x56; constructor initializes these to 0,0,0,1. The scalar fields +0x58..+0x68 are curveScalar/minimumLeafAngle/maximumLeafAngle/branchDimming/leafDimming, with directly verified consumers/defaults matching Fallout. +0x6C/+0x70/+0x74 remain Unknown; billboard size names at +0x78/+0x7C remain Probable.
0x4B9DA2: push    offset ??0TESObjectTREE@@QAE@XZ_SEH
0x4B9DA7: mov     eax, large fs:0
0x4B9DAD: push    eax
0x4B9DAE: push    ecx
0x4B9DAF: push    ebx
0x4B9DB0: push    ebp
0x4B9DB1: push    esi
0x4B9DB2: push    edi
0x4B9DB3: mov     eax, ds:0B30AACh
0x4B9DB8: xor     eax, esp
0x4B9DBA: push    eax
0x4B9DBB: lea     eax, [esp+24h+var_C]
0x4B9DBF: mov     large fs:0, eax
0x4B9DC5: mov     esi, ecx
0x4B9DC7: mov     [esp+24h+var_10], esi
0x4B9DCB: call    sub_4B31F0
0x4B9DD0: lea     edi, [esi+24h]
0x4B9DD3: xor     ebx, ebx
0x4B9DD5: mov     ecx, edi; this
0x4B9DD7: mov     [esp+24h+var_4], ebx
0x4B9DDB: call    ??0TESModel@@QAE@XZ; TESModel::TESModel(void)
0x4B9DE0: mov     dword ptr [edi], offset ??_7TESModelTree@@6B@; const TESModelTree::`vftable'
0x4B9DE6: lea     ebp, [esi+3Ch]
0x4B9DE9: mov     ecx, ebp
0x4B9DEB: mov     byte ptr [esp+24h+var_4], 1
0x4B9DF0: call    TESTexture_constr
0x4B9DF5: mov     dword ptr [ebp+0], offset ??_7TESIconTree@@6B@; const TESIconTree::`vftable'
0x4B9DFC: fld     dword ptr ds:0A45128h
0x4B9E02: mov     dword ptr [esi], offset ??_7TESObjectTREE@@6BTESObjectTREE@@@; const TESObjectTREE::`vftable'{for `TESObjectTREE'}
0x4B9E08: mov     dword ptr [edi], offset ??_7TESObjectTREE@@6BTESModelTree@@@; const TESObjectTREE::`vftable'{for `TESModelTree'}
0x4B9E0E: mov     dword ptr [ebp+0], offset ??_7TESObjectTREE@@6BTESIconTree@@@; const TESObjectTREE::`vftable'{for `TESIconTree'}
0x4B9E15: mov     dword ptr [esi+48h], offset ??_7?$NiTArray@I@@6B@; Verified constructor initializes an embedded NiTArray<unsigned int> at TESObjectTREE+0x48, with empty data pointer at +0x4C and zero count at +0x52. Fallout also owns a seed array and serializes it as SNAM; Oblivion's loader has no SNAM branch, so later population is Unknown.
0x4B9E1C: mov     [esi+50h], bx; Verified embedded NiTArray<unsigned int>. Constructor initializes capacity +0x50 to zero.
0x4B9E20: mov     word ptr [esi+56h], 1; Verified embedded NiTArray<unsigned int>. Constructor initializes growSize +0x56 to 1.
0x4B9E26: mov     [esi+52h], bx; Verified embedded NiTArray<unsigned int>. Constructor initializes end/seed count +0x52 to zero; all three seed accessors use this count.
0x4B9E2A: mov     [esi+54h], bx; Verified embedded NiTArray<unsigned int>. Constructor initializes numObjects +0x54 to zero.
0x4B9E2E: mov     [esi+4Ch], ebx; Verified embedded NiTArray<unsigned int>. Constructor initializes data pointer +0x4C to null; destructor frees the backing allocation.
0x4B9E31: fstp    dword ptr [esi+58h]; Verified TESObjectTREE+0x58 curveScalar constructor default is 2.5; matches Fallout's named Data.fCurveScalar default. BSTreeModel_ApplyBaseObject passes this value to the CSpeedTree curve-scalar configuration when the INI override is negative.
0x4B9E34: fld     dword ptr ds:0A31E2Ch
0x4B9E3A: mov     byte ptr [esi+4], 1Eh
0x4B9E3E: fstp    dword ptr [esi+5Ch]; Verified TESObjectTREE+0x5C minimumLeafAngle default is 5.0; matches Fallout's named minimum-angle default and Oblivion's CSpeedTree minimum bud-angle fallback.
0x4B9E41: fld     dword ptr ds:0A44F70h
0x4B9E47: fstp    dword ptr [esi+60h]; Verified TESObjectTREE+0x60 maximumLeafAngle default is 85.0; matches Fallout's named maximum-angle default and Oblivion's CSpeedTree maximum bud-angle fallback.
0x4B9E4A: fld     dword ptr ds:0A3D65Ch
0x4B9E50: fstp    dword ptr [esi+64h]; Verified TESObjectTREE+0x64 branchDimming default is 0.5; the virtual getter feeds CSpeedTreeRT_SetBranchDimmingScalar when the INI override is invalid. Fallout's named field/getter agrees.
0x4B9E53: fld     dword ptr ds:0A41724h
0x4B9E59: fstp    dword ptr [esi+68h]; Verified TESObjectTREE+0x68 leafDimming default is 0.7; the virtual getter feeds CSpeedTreeRT_SetLeafDimmingScalar when the INI override is invalid. Fallout's named field/getter agrees.
0x4B9E5C: fld1
0x4B9E5E: fst     dword ptr [esi+70h]; Unknown: this float is initialized to 1.0 at +0x70. No semantic consumer was established in the current tree path.
0x4B9E61: fstp    dword ptr [esi+74h]; Unknown: this float is initialized to 1.0 at +0x74. No semantic consumer was established in the current tree path.
0x4B9E64: mov     eax, ds:0B3FC80h
0x4B9E69: mov     [esi+78h], eax; Probable mapping: constructor copies global value into BillboardSizeX at +0x78. Direct billboard predicate/geometry use and Fallout's named BillboardSize.x support the member role; the source/initialization of this global at runtime is Unknown.
0x4B9E6C: mov     ecx, ds:0B3FC84h
0x4B9E72: mov     [esi+7Ch], ecx; Probable mapping: constructor copies global value into BillboardSizeY at +0x7C. Direct billboard predicate/geometry use and Fallout's named BillboardSize.y support the member role; the source/initialization of this global at runtime is Unknown.
0x4B9E75: mov     eax, esi
0x4B9E77: mov     ecx, [esp+24h+var_C]
0x4B9E7B: mov     large fs:0, ecx
0x4B9E82: pop     ecx
0x4B9E83: pop     edi
0x4B9E84: pop     esi
0x4B9E85: pop     ebp
0x4B9E86: pop     ebx
0x4B9E87: add     esp, 10h
0x4B9E8A: retn
0x9B3DB0: mov     ecx, [ebp-10h]
0x9B3DB3: jmp     TESObject_destr
0x9B3DB8: mov     ecx, [ebp-10h]
0x9B3DBB: add     ecx, 24h ; '$'; this
0x9B3DBE: jmp     j_??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3DC3: mov     ecx, [ebp-10h]
0x9B3DC6: add     ecx, 3Ch ; '<'; void *
0x9B3DC9: jmp     j_TESTexture_destr
0x9B3DCE: mov     edx, [esp+arg_4]
0x9B3DD2: lea     eax, [edx-14h]
0x9B3DD5: mov     ecx, [edx-18h]
0x9B3DD8: xor     ecx, eax
0x9B3DDA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3DDF: mov     eax, offset stru_ADF690
0x9B3DE4: jmp     ___CxxFrameHandler3
