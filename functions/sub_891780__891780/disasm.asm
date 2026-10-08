0x891780: push    ebp; TES4 authoritative: recomputes two controller capsule probe/end points at proxy+0x380 and proxy+0x390 from Havok object transform+0x70, capsule height +0x3A4, radius +0x3A0, and vertical base offset +0x248.
0x891781: mov     ebp, esp
0x891783: and     esp, 0FFFFFFF0h
0x891786: sub     esp, 24h
0x891789: mov     eax, ds:0B30AACh
0x89178E: xor     eax, esp
0x891790: mov     [esp+24h+var_4], eax
0x891794: push    ebx
0x891795: push    esi
0x891796: mov     esi, ecx
0x891798: test    byte ptr [esi+1F4h], 1
0x89179F: push    edi
0x8917A0: jz      loc_891833
0x8917A6: mov     ecx, [esi+8]
0x8917A9: test    ecx, ecx
0x8917AB: jz      short loc_8917B4
0x8917AD: call    bhkCollisionWrapper_GetHavokObject; bhk collision wrapper accessor: returns stored low-level Havok object pointer at wrapper+0x30.
0x8917B2: jmp     short loc_8917B6
0x8917B4: xor     eax, eax
0x8917B6: xor     edi, edi
0x8917B8: lea     ebx, [eax+70h]
0x8917BB: jmp     short loc_8917C0
0x8917C0: cmp     edi, 1
0x8917C3: fldz
0x8917C5: fst     [esp+30h+var_20]
0x8917C9: fld     dword ptr [esi+3A4h]
0x8917CF: fmul    qword ptr ds:0A2FAA0h
0x8917D5: fsub    dword ptr [esi+3A0h]
0x8917DB: fstp    [esp+30h+var_1C]; Local endpoint axial coordinate = capsuleHeight*0.5 - radius.
0x8917DF: fld     dword ptr [esi+3A0h]
0x8917E5: fstp    [esp+30h+var_18]
0x8917E9: fstp    [esp+30h+var_14]
0x8917ED: jnz     short loc_8917FD
0x8917EF: fld     [esp+30h+var_1C]
0x8917F3: fmul    qword ptr ds:0A3D360h
0x8917F9: fstp    [esp+30h+var_1C]; Second endpoint mirrors the axial coordinate by multiplying by -1.0.
0x8917FD: lea     eax, [esp+30h+var_20]
0x891801: lea     ecx, [edi+38h]
0x891804: push    eax
0x891805: shl     ecx, 4
0x891808: push    ebx
0x891809: add     ecx, esi
0x89180B: call    hkTransform_TransformPosition; Transform local capsule endpoint into controller/Havok world space.
0x891810: mov     ecx, edi
0x891812: shl     ecx, 4
0x891815: fld     dword ptr [ecx+esi+388h]
0x89181C: lea     eax, [ecx+esi+388h]
0x891823: fadd    dword ptr [esi+248h]
0x891829: add     edi, 1
0x89182C: cmp     edi, 2
0x89182F: fstp    dword ptr [eax]; Add proxy+0x248 vertical/base offset to endpoint z after transform.
0x891831: jb      short loc_8917C0
0x891833: mov     ecx, [esp+30h+var_4]
0x891837: pop     edi
0x891838: pop     esi
0x891839: pop     ebx
0x89183A: xor     ecx, esp
0x89183C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x891841: mov     esp, ebp
0x891843: pop     ebp
0x891844: retn
