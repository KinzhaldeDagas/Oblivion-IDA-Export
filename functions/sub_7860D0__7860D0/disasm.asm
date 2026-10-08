0x7860D0: push    0FFFFFFFFh; Oblivion stBezierSpline::AddControlPoint. Builds 2D point/tangent stVecs, normalizes the tangent, appends prior outgoing/current incoming cubic-Bezier controls to splinePoints, then appends the point, tangent, and tangent length. Shipped compact layout: controlPoints@0x0C, tangents@0x1C, lengths@0x2C, splinePoints@0x4C. Binary behavior matches RT4.1 IdvSpline.cpp after observation.
0x7860D2: push    offset SEH_7860D0
0x7860D7: mov     eax, large fs:0
0x7860DD: push    eax
0x7860DE: sub     esp, 60h
0x7860E1: push    ebx
0x7860E2: push    ebp
0x7860E3: push    esi
0x7860E4: push    edi
0x7860E5: mov     eax, ds:0B30AACh
0x7860EA: xor     eax, esp
0x7860EC: push    eax
0x7860ED: lea     eax, [esp+80h+var_C]
0x7860F1: mov     large fs:0, eax
0x7860F7: mov     esi, ecx
0x7860F9: mov     eax, [esp+80h+point]
0x786100: fld     dword ptr [eax+4]
0x786103: sub     esp, 8
0x786106: fstp    [esp+88h+y]; y
0x78610A: lea     ecx, [esp+88h+value]; this
0x78610E: fld     dword ptr [eax]
0x786110: fstp    [esp+88h+x]; x
0x786113: call    OB_stVec_ctor_xy_010201A0; Oblivion stVec(x,y) constructor: stores x/y, zeros z/w/v, and sets logical size to 2. Exact body corroborated by RT4.1 Vec.cpp.
0x786118: mov     eax, [esp+80h+tangent]
0x78611F: fld     dword ptr [eax+4]
0x786122: sub     esp, 8
0x786125: fstp    [esp+88h+y]; y
0x786129: lea     ecx, [esp+88h+var_6C]; this
0x78612D: fld     dword ptr [eax]
0x78612F: mov     [esp+88h+var_4], 0
0x78613A: fstp    [esp+88h+x]; x
0x78613D: call    OB_stVec_ctor_xy_010201A0; Oblivion stVec(x,y) constructor: stores x/y, zeros z/w/v, and sets logical size to 2. Exact body corroborated by RT4.1 Vec.cpp.
0x786142: lea     ecx, [esp+80h+var_6C]; this
0x786146: mov     byte ptr [esp+80h+var_4], 1
0x78614B: call    OB_stVec_Normalize_010201A0; Oblivion stVec::Normalize: computes Magnitude and, when nonzero, divides every active component by it. Exact behavior corroborated by RT4.1 Vec.cpp.
0x786150: mov     eax, [esi+10h]
0x786153: test    eax, eax
0x786155: lea     ebp, [esi+0Ch]
0x786158: jz      loc_7862E2
0x78615E: mov     ecx, [ebp+8]
0x786161: sub     ecx, eax
0x786163: mov     eax, 2AAAAAABh
0x786168: imul    ecx
0x78616A: sar     edx, 2
0x78616D: mov     eax, edx
0x78616F: shr     eax, 1Fh
0x786172: add     eax, edx
0x786174: jz      loc_7862E2
0x78617A: mov     eax, [ebp+4]
0x78617D: test    eax, eax
0x78617F: jnz     short loc_786185
0x786181: xor     ebx, ebx
0x786183: jmp     short loc_78619B
0x786185: mov     ecx, [ebp+8]
0x786188: sub     ecx, eax
0x78618A: mov     eax, 2AAAAAABh
0x78618F: imul    ecx
0x786191: sar     edx, 2
0x786194: mov     ebx, edx
0x786196: shr     ebx, 1Fh
0x786199: add     ebx, edx
0x78619B: mov     ecx, [esi+30h]
0x78619E: add     ebx, 0FFFFFFFFh
0x7861A1: test    ecx, ecx
0x7861A3: jz      short loc_7861B1
0x7861A5: mov     eax, [esi+34h]
0x7861A8: sub     eax, ecx
0x7861AA: sar     eax, 2
0x7861AD: cmp     ebx, eax
0x7861AF: jb      short loc_7861B6
0x7861B1: call    __invalid_parameter_noinfo
0x7861B6: mov     ecx, [esi+30h]
0x7861B9: mov     eax, [esi+20h]
0x7861BC: test    eax, eax
0x7861BE: lea     edx, [ecx+ebx*4]
0x7861C1: mov     [esp+80h+point], edx
0x7861C8: jz      short loc_7861E4
0x7861CA: mov     ecx, [esi+24h]
0x7861CD: sub     ecx, eax
0x7861CF: mov     eax, 2AAAAAABh
0x7861D4: imul    ecx
0x7861D6: sar     edx, 2
0x7861D9: mov     eax, edx
0x7861DB: shr     eax, 1Fh
0x7861DE: add     eax, edx
0x7861E0: cmp     ebx, eax
0x7861E2: jb      short loc_7861E9
0x7861E4: call    __invalid_parameter_noinfo
0x7861E9: mov     ecx, [esi+20h]
0x7861EC: mov     eax, [esp+80h+point]
0x7861F3: fld     dword ptr [eax]
0x7861F5: lea     edi, [ebx+ebx*2]
0x7861F8: add     edi, edi
0x7861FA: add     edi, edi
0x7861FC: add     edi, edi
0x7861FE: add     ecx, edi; this
0x786200: push    ecx
0x786201: lea     edx, [esp+84h+result]
0x786205: fstp    [esp+84h+y]; scalar
0x786208: push    edx; result
0x786209: call    OB_stVec_Scale_010201A0; Oblivion compiler-lowered stVec::operator*(float): initializes the hidden return object with lhs.size and scales every active component. Exact behavior corroborated by RT4.1 Vec.cpp.
0x78620E: mov     [esp+80h+point], eax
0x786215: mov     eax, [ebp+4]
0x786218: test    eax, eax
0x78621A: mov     byte ptr [esp+80h+var_4], 2
0x78621F: jz      short loc_78623B
0x786221: mov     ecx, [ebp+8]
0x786224: sub     ecx, eax
0x786226: mov     eax, 2AAAAAABh
0x78622B: imul    ecx
0x78622D: sar     edx, 2
0x786230: mov     eax, edx
0x786232: shr     eax, 1Fh
0x786235: add     eax, edx
0x786237: cmp     ebx, eax
0x786239: jb      short loc_786240
0x78623B: call    __invalid_parameter_noinfo
0x786240: mov     eax, [esp+80h+point]
0x786247: mov     ecx, [ebp+4]
0x78624A: push    eax; rhs
0x78624B: lea     edx, [esp+84h+var_3C]
0x78624F: add     ecx, edi; this
0x786251: push    edx; result
0x786252: call    OB_stVec_Add_010201A0; Oblivion compiler-lowered stVec::operator+: initializes the hidden return object with min(lhs.size,rhs.size), then adds components over lhs.size, matching the shipped RT4.1 source semantics (which assume compatible sizes).
0x786257: lea     edi, [esi+4Ch]
0x78625A: push    eax; value
0x78625B: mov     ecx, edi; this
0x78625D: mov     byte ptr [esp+84h+var_4], 3
0x786265: call    OB_stVector_stVec_PushBack_010201A0; Oblivion compact stVec-vector push_back. Appends a 0x18-byte stVec in place when capacity remains; otherwise delegates to the reallocation/insertion path. Used for synchronized spline control/tangent/control-curve vectors.
0x78626A: lea     ecx, [esp+80h+var_3C]; this
0x78626E: mov     byte ptr [esp+80h+var_4], 2
0x786273: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x786278: lea     ecx, [esp+80h+result]; this
0x78627C: mov     byte ptr [esp+80h+var_4], 1
0x786281: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x786286: fld     [esp+80h+tangentLength]
0x78628D: push    ecx
0x78628E: lea     eax, [esp+84h+var_3C]
0x786292: fstp    [esp+84h+y]; scalar
0x786295: push    eax; result
0x786296: lea     ecx, [esp+88h+var_6C]; this
0x78629A: call    OB_stVec_Scale_010201A0; Oblivion compiler-lowered stVec::operator*(float): initializes the hidden return object with lhs.size and scales every active component. Exact behavior corroborated by RT4.1 Vec.cpp.
0x78629F: push    eax; rhs
0x7862A0: lea     ecx, [esp+84h+result]
0x7862A4: push    ecx; result
0x7862A5: mov     bl, 4
0x7862A7: lea     ecx, [esp+88h+value]; this
0x7862AB: mov     byte ptr [esp+88h+var_4], bl
0x7862B2: call    OB_stVec_Subtract_010201A0; Oblivion compiler-lowered stVec::operator-: initializes the hidden return object with min(lhs.size,rhs.size), then subtracts components over lhs.size, matching the shipped RT4.1 source semantics (which assume compatible sizes).
0x7862B7: push    eax; value
0x7862B8: mov     ecx, edi; this
0x7862BA: mov     byte ptr [esp+84h+var_4], 5
0x7862C2: call    OB_stVector_stVec_PushBack_010201A0; Oblivion compact stVec-vector push_back. Appends a 0x18-byte stVec in place when capacity remains; otherwise delegates to the reallocation/insertion path. Used for synchronized spline control/tangent/control-curve vectors.
0x7862C7: lea     ecx, [esp+80h+result]; this
0x7862CB: mov     byte ptr [esp+80h+var_4], bl
0x7862CF: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x7862D4: lea     ecx, [esp+80h+var_3C]; this
0x7862D8: mov     byte ptr [esp+80h+var_4], 1
0x7862DD: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x7862E2: lea     edx, [esp+80h+value]
0x7862E6: push    edx; value
0x7862E7: mov     ecx, ebp; this
0x7862E9: call    OB_stVector_stVec_PushBack_010201A0; Oblivion compact stVec-vector push_back. Appends a 0x18-byte stVec in place when capacity remains; otherwise delegates to the reallocation/insertion path. Used for synchronized spline control/tangent/control-curve vectors.
0x7862EE: lea     eax, [esp+80h+value]
0x7862F2: push    eax; value
0x7862F3: lea     ecx, [esi+4Ch]; this
0x7862F6: call    OB_stVector_stVec_PushBack_010201A0; Oblivion compact stVec-vector push_back. Appends a 0x18-byte stVec in place when capacity remains; otherwise delegates to the reallocation/insertion path. Used for synchronized spline control/tangent/control-curve vectors.
0x7862FB: lea     ecx, [esp+80h+var_6C]
0x7862FF: push    ecx; value
0x786300: lea     ecx, [esi+1Ch]; this
0x786303: call    OB_stVector_stVec_PushBack_010201A0; Oblivion compact stVec-vector push_back. Appends a 0x18-byte stVec in place when capacity remains; otherwise delegates to the reallocation/insertion path. Used for synchronized spline control/tangent/control-curve vectors.
0x786308: lea     edx, [esp+80h+tangentLength]
0x78630F: push    edx; value
0x786310: lea     ecx, [esi+2Ch]; this
0x786313: call    OB_stVector_float_PushBack_010201A0; Oblivion compact float-vector push_back. Appends a 4-byte float in place when capacity remains; otherwise delegates to the reallocation/insertion path. Shared by spline tangent lengths and indexed-geometry float streams.
0x786318: lea     ecx, [esp+80h+var_6C]; this
0x78631C: mov     byte ptr [esp+80h+var_4], 0
0x786321: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x786326: lea     ecx, [esp+80h+value]; this
0x78632A: mov     [esp+80h+var_4], 0FFFFFFFFh
0x786332: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x786337: mov     ecx, [esp+80h+var_C]
0x78633B: mov     large fs:0, ecx
0x786342: pop     ecx
0x786343: pop     edi
0x786344: pop     esi
0x786345: pop     ebp
0x786346: pop     ebx
0x786347: add     esp, 6Ch
0x78634A: retn    0Ch
0x9CB140: lea     ecx, [ebp-54h]; this
0x9CB143: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB148: lea     ecx, [ebp-6Ch]; this
0x9CB14B: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB150: lea     ecx, [ebp-24h]; this
0x9CB153: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB158: lea     ecx, [ebp-3Ch]; this
0x9CB15B: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB160: lea     ecx, [ebp-3Ch]; this
0x9CB163: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB168: lea     ecx, [ebp-24h]; this
0x9CB16B: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB170: mov     edx, [esp+tangent]
0x9CB174: lea     eax, [edx-70h]
0x9CB177: mov     ecx, [edx-74h]
0x9CB17A: xor     ecx, eax
0x9CB17C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB181: mov     eax, offset stru_AF37E8
0x9CB186: jmp     ___CxxFrameHandler3
