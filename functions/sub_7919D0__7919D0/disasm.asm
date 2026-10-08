0x7919D0: push    0FFFFFFFFh; OBLIVION AUTHORITY 2026-08-27: CBranch::MakeLeaf exact compact signature and dimming path. If leafInfo.dimmingEnabled: A=Accumulate(parentBranch); q=A+(1-A)*percentAlongParent; q3=q*q*q; scale=q3+(1-q3)*(1-leafInfo.dimmingScalar)=1-s+s*q3. Else scale=1. colorScaleByte=trunc(scale*255). Selected texture RGB plus one shared random variance offset is later SetColor(...,true), so green is clamped/quantized after colorScaleByte multiplication. Oblivion differs materially from RT4.1 source's limited-depth multiplicative/linear formula.
0x7919D2: push    offset SEH_7919D0
0x7919D7: mov     eax, large fs:0
0x7919DD: push    eax
0x7919DE: sub     esp, 38h
0x7919E1: push    ebx
0x7919E2: push    ebp
0x7919E3: push    esi
0x7919E4: push    edi
0x7919E5: mov     eax, ds:0B30AACh
0x7919EA: xor     eax, esp
0x7919EC: push    eax
0x7919ED: lea     eax, [esp+58h+var_C]
0x7919F1: mov     large fs:0, eax
0x7919F7: mov     esi, ecx
0x7919F9: mov     [esp+58h+var_40], esi
0x7919FD: mov     ecx, ds:0B429B8h
0x791A03: mov     eax, [ecx+14h]
0x791A06: test    eax, eax
0x791A08: jz      loc_791E61
0x791A0E: mov     ecx, [ecx+18h]
0x791A11: sub     ecx, eax
0x791A13: mov     eax, 30C30C31h
0x791A18: imul    ecx
0x791A1A: sar     edx, 4
0x791A1D: mov     eax, edx
0x791A1F: shr     eax, 1Fh
0x791A22: add     eax, edx
0x791A24: jz      loc_791E61
0x791A2A: mov     eax, ds:0B429F0h
0x791A2F: test    eax, eax
0x791A31: jz      loc_791AF0
0x791A37: mov     ecx, ds:0B429F4h
0x791A3D: sub     ecx, eax
0x791A3F: sar     ecx, 2
0x791A42: jz      loc_791AF0
0x791A48: fld     [esp+58h+percentAlongParent]
0x791A4C: mov     edx, [esp+58h+parentBranch]
0x791A50: push    ecx
0x791A51: fstp    [esp+5Ch+maxValue]; float
0x791A54: push    edx; int
0x791A55: mov     ecx, esi
0x791A57: call    OB_CBranch_CheckBlossomRoom_010201A0; Leaf-room/blossom spacing predicate used before MakeLeaf.
0x791A5C: test    al, al
0x791A5E: jz      loc_791AF0
0x791A64: mov     ecx, ds:0B429F0h
0x791A6A: xor     edi, edi
0x791A6C: test    ecx, ecx
0x791A6E: jz      short loc_791ADD
0x791A70: mov     eax, ds:0B429F4h
0x791A75: mov     esi, eax
0x791A77: sub     esi, ecx
0x791A79: sar     esi, 2
0x791A7C: cmp     esi, 1
0x791A7F: jbe     short loc_791AD0
0x791A81: fld     dword ptr ds:0A3F3D8h
0x791A87: sub     esp, 8
0x791A8A: fstp    [esp+60h+maxValue]; maxValue
0x791A8E: mov     ecx, offset stru_B429C9; this
0x791A93: fldz
0x791A95: fstp    [esp+60h+primaryWindWeight]; minValue
0x791A98: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x791A9D: fnstcw  [esp+58h+var_42]
0x791AA1: xor     edx, edx
0x791AA3: movzx   eax, [esp+58h+var_42]
0x791AA8: or      eax, 0C00h
0x791AAD: mov     [esp+58h+var_3C.x], eax
0x791AB1: mov     ecx, ds:0B429F0h
0x791AB7: fldcw   word ptr [esp+58h+var_3C.x]
0x791ABB: fistp   qword ptr [esp+58h+var_3C.x]
0x791ABF: mov     eax, [esp+58h+var_3C.x]
0x791AC3: div     esi
0x791AC5: fldcw   [esp+58h+var_42]
0x791AC9: mov     eax, ds:0B429F4h
0x791ACE: mov     edi, edx
0x791AD0: test    ecx, ecx
0x791AD2: jz      short loc_791ADD
0x791AD4: sub     eax, ecx
0x791AD6: sar     eax, 2
0x791AD9: cmp     edi, eax
0x791ADB: jb      short loc_791AE8
0x791ADD: call    __invalid_parameter_noinfo
0x791AE2: mov     ecx, ds:0B429F0h
0x791AE8: mov     ebx, [ecx+edi*4]
0x791AEB: jmp     loc_791BAB
0x791AF0: mov     ecx, ds:0B429D0h
0x791AF6: test    ecx, ecx
0x791AF8: jz      loc_791E61
0x791AFE: mov     eax, ds:0B429D4h
0x791B03: sub     eax, ecx
0x791B05: sar     eax, 2
0x791B08: cmp     eax, 1
0x791B0B: jbe     loc_791B95
0x791B11: fld     dword ptr ds:0A8C690h
0x791B17: sub     esp, 8
0x791B1A: fstp    [esp+60h+maxValue]; maxValue
0x791B1E: mov     ecx, offset stru_B429C9; this
0x791B23: fldz
0x791B25: fstp    [esp+60h+primaryWindWeight]; minValue
0x791B28: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x791B2D: fstp    [esp+58h+var_3C.x]
0x791B31: mov     esi, ds:0B429D0h
0x791B37: test    esi, esi
0x791B39: mov     edi, ds:0B429D4h
0x791B3F: jnz     short loc_791B45
0x791B41: xor     ecx, ecx
0x791B43: jmp     short loc_791B4C
0x791B45: mov     ecx, edi
0x791B47: sub     ecx, esi
0x791B49: sar     ecx, 2
0x791B4C: fld     [esp+58h+var_3C.x]
0x791B50: xor     edx, edx
0x791B52: fnstcw  [esp+58h+var_42]
0x791B56: movzx   eax, [esp+58h+var_42]
0x791B5B: or      eax, 0C00h
0x791B60: mov     [esp+58h+var_3C.x], eax
0x791B64: fldcw   word ptr [esp+58h+var_3C.x]
0x791B68: fistp   qword ptr [esp+58h+var_3C.x]
0x791B6C: mov     eax, [esp+58h+var_3C.x]
0x791B70: div     ecx
0x791B72: fldcw   [esp+58h+var_42]
0x791B76: test    esi, esi
0x791B78: mov     ebx, edx
0x791B7A: jz      short loc_791B85
0x791B7C: sub     edi, esi
0x791B7E: sar     edi, 2
0x791B81: cmp     ebx, edi
0x791B83: jb      short loc_791B90
0x791B85: call    __invalid_parameter_noinfo
0x791B8A: mov     esi, ds:0B429D0h
0x791B90: mov     ebx, [esi+ebx*4]
0x791B93: jmp     short loc_791BAB
0x791B95: test    eax, eax
0x791B97: jz      loc_791E61
0x791B9D: push    0
0x791B9F: mov     ecx, offset stru_B429CC
0x791BA4: call    sub_54F7A0; Bounds-checked float-vector element access. Returns begin + index*4; begin is vector+4 (FaceGenMatrix+0x0C).
0x791BA9: mov     ebx, [eax]
0x791BAB: mov     ecx, ds:0B429B8h
0x791BB1: mov     eax, [ecx+0Ch]
0x791BB4: sub     eax, 1
0x791BB7: mov     ebp, [esp+58h+leaves]
0x791BBB: mov     esi, [esp+58h+position]
0x791BBF: jz      short loc_791BC9
0x791BC1: sub     eax, 1
0x791BC4: jnz     short loc_791BEE
0x791BC6: push    ebp
0x791BC7: jmp     short loc_791BCE
0x791BC9: push    offset stru_B429FC
0x791BCE: mov     ecx, [esp+5Ch+var_40]
0x791BD2: mov     eax, ebx
0x791BD4: cdq
0x791BD5: sub     eax, edx
0x791BD7: sar     eax, 1
0x791BD9: push    eax
0x791BDA: push    esi
0x791BDB: call    OB_CBranch_CheckLeafRoom_010201A0; Leaf-room spacing check used for stock leaf collision/placement modes.
0x791BE0: test    al, al
0x791BE2: jz      loc_791E61
0x791BE8: mov     ecx, ds:0B429B8h
0x791BEE: cmp     byte ptr [ecx], 0
0x791BF1: fld1
0x791BF3: fstp    [esp+58h+leaves]
0x791BF7: jz      short loc_791C53
0x791BF9: mov     eax, [esp+58h+parentBranch]
0x791BFD: push    eax; branch
0x791BFE: call    OB_CBranch_AccumulateLeafDimmingPercent_010201A0; Calls Oblivion full-chain accumulator A(parentBranch); full-chain complement interpolation is authoritative and differs from supplied RT4.1 source.
0x791C03: fstp    [esp+5Ch+parentBranch]
0x791C07: fld     [esp+5Ch+parentBranch]
0x791C0B: add     esp, 4
0x791C0E: fld     st
0x791C10: fld1
0x791C12: fld     st
0x791C14: fsubrp  st(2), st
0x791C16: fld     [esp+58h+percentAlongParent]
0x791C1A: fmulp   st(2), st
0x791C1C: fxch    st(1)
0x791C1E: faddp   st(2), st
0x791C20: fxch    st(1)
0x791C22: fstp    [esp+58h+parentBranch]; q = A(parentBranch) + (1 - A(parentBranch)) * percentAlongParent.
0x791C26: fld     [esp+58h+parentBranch]
0x791C2A: fld     st
0x791C2C: fmul    st, st
0x791C2E: fmulp   st(1), st
0x791C30: fstp    [esp+58h+parentBranch]; Cubes the hierarchical percent: q3 = q*q*q.
0x791C34: fld     dword ptr [ecx+4]; Reads OB_SIdvLeafInfo_010201A0::dimmingScalar at leafInfo+4. Final float scale is 1-dimmingScalar+dimmingScalar*q3.
0x791C37: fsubr   st, st(1)
0x791C39: fstp    [esp+58h+percentAlongParent]
0x791C3D: fld     [esp+58h+percentAlongParent]
0x791C41: fld     [esp+58h+parentBranch]
0x791C45: fld     st
0x791C47: fsubp   st(3), st
0x791C49: fxch    st(1)
0x791C4B: fmulp   st(2), st
0x791C4D: faddp   st(1), st
0x791C4F: fstp    [esp+58h+leaves]; Final generated-leaf scale = q3 + (1-q3)*(1-s) = 1-s+s*q3.
0x791C53: push    4Ch ; 'L'; Size
0x791C55: call    FormHeapAlloc
0x791C5A: mov     edi, eax
0x791C5C: add     esp, 4
0x791C5F: mov     [esp+58h+parentBranch], edi
0x791C63: test    edi, edi
0x791C65: mov     [esp+58h+var_4], 0
0x791C6D: jz      short loc_791CC7
0x791C6F: mov     ecx, [esp+58h+primaryWindGroup]
0x791C73: fld     [esp+58h+arg_14]
0x791C77: push    ecx; primaryWindGroup
0x791C78: sub     esp, 0Ch
0x791C7B: fstp    [esp+68h+primaryWindWeight]; primaryWindWeight
0x791C7F: mov     ecx, offset stru_B429C9; this
0x791C84: fld     dword ptr ds:0A5A04Ch
0x791C8A: fstp    [esp+68h+var_64]; maxValue
0x791C8E: fldz
0x791C90: fstp    [esp+68h+minValue]; minValue
0x791C93: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x791C98: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x791C9D: fld     [esp+60h+leaves]
0x791CA4: mov     ecx, ds:0B429B8h
0x791CAA: fmul    qword ptr ds:0A3DDD8h
0x791CB0: cdq
0x791CB1: idiv    dword ptr [ecx+38h]
0x791CB4: push    edx; angleIndex
0x791CB5: call    Double_To_SInt32; Converts scale*255 with truncation toward zero; constructor stores the low byte as CBillboardLeaf::colorScaleByte at +0x18.
0x791CBA: mov     ecx, edi; this
0x791CBC: push    eax; colorScale
0x791CBD: push    esi; position
0x791CBE: call    OB_CBillboardLeaf_ctor_args_010201A0; SpeedTreeRT 4.1 source match: CBillboardLeaf constructor. Initializes position, wind fields, texture index/color defaults, and orientation state.
0x791CC3: mov     esi, eax
0x791CC5: jmp     short loc_791CC9
0x791CC7: xor     esi, esi
0x791CC9: lea     edx, [esp+58h+parentBranch]
0x791CCD: push    edx; value
0x791CCE: mov     ecx, ebp; this
0x791CD0: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x791CD8: mov     [esp+5Ch+parentBranch], esi
0x791CDC: call    OB_stVector4_PushBack_010201A0; Pushes one 4-byte value into an OB_stVector4. Writes directly at end when capacity remains, otherwise calls the checked insert-one helper. Oblivion uses it for CBranch pointers and other pointer-sized SpeedTree lists.
0x791CE1: mov     eax, ds:0B429B8h
0x791CE6: cmp     dword ptr [eax+0Ch], 1
0x791CEA: jnz     short loc_791CFB
0x791CEC: lea     ecx, [esp+58h+parentBranch]
0x791CF0: push    ecx; value
0x791CF1: mov     ecx, offset stru_B429FC; this
0x791CF6: call    OB_stVector4_PushBack_010201A0; Pushes one 4-byte value into an OB_stVector4. Writes directly at end when capacity remains, otherwise calls the checked insert-one helper. Oblivion uses it for CBranch pointers and other pointer-sized SpeedTree lists.
0x791CFB: mov     ecx, ds:0B429B8h
0x791D01: mov     eax, ebx
0x791D03: cdq
0x791D04: sub     eax, edx
0x791D06: sar     eax, 1
0x791D08: push    eax; index
0x791D09: add     ecx, 10h; this
0x791D0C: call    OB_stVectorLeafTexture_At_010201A0; SpeedTree CBillboardLeaf raw alternate index is texture*2+mirror. Divide by two before indexing compact SIdvLeafTexture or leaf map-bank collections.
0x791D11: mov     ecx, [esp+58h+normal]
0x791D15: mov     [esi+40h], bl; Stores raw alternate texture index (texture*2 + mirror) in CBillboardLeaf+0x40; this byte is not a zero-based map-bank collection index.
0x791D18: fld     dword ptr [ecx+4]
0x791D1B: fld     dword ptr [ecx]
0x791D1D: mov     edi, eax
0x791D1F: fld     dword ptr [ecx+8]
0x791D22: fld     st(1)
0x791D24: fmulp   st(2), st
0x791D26: fld     st(2)
0x791D28: fmulp   st(3), st
0x791D2A: fxch    st(1)
0x791D2C: faddp   st(2), st
0x791D2E: fmul    st, st
0x791D30: faddp   st(1), st
0x791D32: fstp    [esp+58h+parentBranch]
0x791D36: mov     edx, [esp+58h+parentBranch]
0x791D3A: sar     edx, 1
0x791D3C: add     edx, 1FC00000h
0x791D42: mov     [esp+58h+parentBranch], edx
0x791D46: fld     [esp+58h+parentBranch]
0x791D4A: fcomp   qword ptr ds:0A68618h
0x791D50: fnstsw  ax
0x791D52: test    ah, 5
0x791D55: jp      short loc_791D5D
0x791D57: mov     eax, [esp+58h+parentDirection]
0x791D5B: jmp     short loc_791D77
0x791D5D: fld     dword ptr [edi+10h]
0x791D60: push    ecx
0x791D61: fstp    [esp+5Ch+maxValue]; percent
0x791D64: push    ecx; end
0x791D65: mov     ecx, [esp+60h+parentDirection]
0x791D69: push    ecx; start
0x791D6A: lea     edx, [esp+64h+result]
0x791D6E: push    edx; result
0x791D6F: call    OB_stVec3_Interpolate_010201A0; Computes result = start + (end - start) * percent for all three components. CBranch::MakeLeaf passes parent direction, geometric normal, and the leaf texture color-variance scalar. RT4.1 Branch.cpp/IdvVector.h corroborate the VecInterpolate role.
0x791D74: add     esp, 10h
0x791D77: mov     ecx, [eax]
0x791D79: mov     edx, [eax+4]
0x791D7C: mov     eax, [eax+8]
0x791D7F: mov     [esp+58h+var_3C.x], ecx
0x791D83: lea     ecx, [esp+58h+var_3C]; this
0x791D87: mov     [esp+58h+var_3C.z], eax
0x791D8B: mov     [esp+58h+var_3C.y], edx
0x791D8F: call    OB_NormalizeVec3_010201A0; Normalizes one OB_stVec3 in place as v *= 1/sqrt(dot(v,v)); the binary has no zero-length guard. Used by CBranch::MakeLeaf and projected-shadow closest-point code. RT4.1 IdvVector.h corroborates stVec3::Normalize.
0x791D94: fld     [esp+58h+var_3C.y]
0x791D98: fld     st
0x791D9A: mov     eax, [esp+58h+var_3C.x]
0x791D9E: fld     [esp+58h+var_3C.z]
0x791DA2: mov     ecx, [esp+58h+var_3C.y]
0x791DA6: fld     st
0x791DA8: mov     edx, [esp+58h+var_3C.z]
0x791DAC: fmulp   st(2), st
0x791DAE: mov     [esi+1Ch], eax
0x791DB1: mov     [esi+20h], ecx
0x791DB4: mov     [esi+24h], edx
0x791DB7: fld     st(1)
0x791DB9: mov     [esi+28h], eax
0x791DBC: fsubrp  st(2), st
0x791DBE: mov     [esi+2Ch], ecx
0x791DC1: fxch    st(1)
0x791DC3: lea     ecx, [esp+58h+var_30]; this
0x791DC7: mov     [esi+30h], edx
0x791DCA: fstp    [esp+58h+var_30.x]
0x791DCE: fld     [esp+58h+var_3C.x]
0x791DD2: fld     st
0x791DD4: fmulp   st(2), st
0x791DD6: fld     st(1)
0x791DD8: fsubrp  st(2), st
0x791DDA: fxch    st(1)
0x791DDC: fstp    [esp+58h+var_30.y]
0x791DE0: fmulp   st(1), st
0x791DE2: fsubr   st, st
0x791DE4: fstp    [esp+58h+var_30.z]
0x791DE8: call    OB_NormalizeVec3_010201A0; Normalizes one OB_stVec3 in place as v *= 1/sqrt(dot(v,v)); the binary has no zero-length guard. Used by CBranch::MakeLeaf and projected-shadow closest-point code. RT4.1 IdvVector.h corroborates stVec3::Normalize.
0x791DED: mov     ecx, [esp+58h+var_30.x]
0x791DF1: mov     edx, [esp+58h+var_30.y]
0x791DF5: mov     eax, [esp+58h+var_30.z]
0x791DF9: mov     [esi+34h], ecx
0x791DFC: mov     [esi+38h], edx
0x791DFF: mov     [esi+3Ch], eax
0x791E02: fld     dword ptr [edi+10h]
0x791E05: sub     esp, 8
0x791E08: fstp    [esp+60h+maxValue]; maxValue
0x791E0C: mov     ecx, offset stru_B429C9; this
0x791E11: fld     dword ptr [edi+10h]
0x791E14: fchs
0x791E16: fstp    [esp+60h+primaryWindWeight]; minValue
0x791E19: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x791E1E: fstp    [esp+58h+parentBranch]
0x791E22: push    1; applyDimming
0x791E24: fld     dword ptr [edi+8]
0x791E27: lea     ecx, [esp+5Ch+rgb]
0x791E2B: fld     [esp+5Ch+parentBranch]
0x791E2F: push    ecx; color
0x791E30: fld     st
0x791E32: mov     ecx, esi; this
0x791E34: faddp   st(2), st
0x791E36: fxch    st(1)
0x791E38: fstp    [esp+60h+parentBranch]
0x791E3C: fld     dword ptr [edi+0Ch]
0x791E3F: fadd    st, st(1)
0x791E41: fstp    [esp+60h+percentAlongParent]
0x791E45: fadd    dword ptr [edi+4]
0x791E48: fstp    [esp+60h+rgb]
0x791E4C: fld     [esp+60h+parentBranch]
0x791E50: fstp    [esp+60h+var_20]
0x791E54: fld     [esp+60h+percentAlongParent]
0x791E58: fstp    [esp+60h+var_1C]
0x791E5C: call    OB_CBillboardLeaf_SetColor_010201A0; OBLIVION AUTHORITY (2026-08-24): Interior callsite, not the function entry. Calls CBillboardLeaf::SetColor(newLeaf, generatedRgb, true), applying CBillboardLeaf+0x18 colorScaleByte once when generating LOD0 leaves.
0x791E61: mov     ecx, [esp+58h+var_C]
0x791E65: mov     large fs:0, ecx
0x791E6C: pop     ecx
0x791E6D: pop     edi
0x791E6E: pop     esi
0x791E6F: pop     ebp
0x791E70: pop     ebx
0x791E71: add     esp, 44h
0x791E74: retn    20h ; ' '
0x9CBC80: mov     eax, [ebp+0Ch]
0x9CBC83: push    eax
0x9CBC84: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CBC89: pop     ecx
0x9CBC8A: retn
0x9CBC8B: mov     edx, [esp+percentAlongParent]
0x9CBC8F: lea     eax, [edx-48h]
0x9CBC92: mov     ecx, [edx-4Ch]
0x9CBC95: xor     ecx, eax
0x9CBC97: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBC9C: mov     eax, offset stru_AF4BE0
0x9CBCA1: jmp     ___CxxFrameHandler3
