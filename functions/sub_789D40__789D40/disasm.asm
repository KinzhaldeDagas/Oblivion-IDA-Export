0x789D40: push    0FFFFFFFFh; 2026-05-19 payload-retention pass: stock collision getter exports type, position, and dimensions only. Supplemental 73000 rotations are not exposed by this ABI and must be applied later at the Havok consumer boundary if retained sidecar data is present.
0x789D42: push    offset SEH_6F8D30
0x789D47: mov     eax, large fs:0
0x789D4D: push    eax
0x789D4E: sub     esp, 1Ch
0x789D51: push    ebx
0x789D52: push    esi
0x789D53: push    edi
0x789D54: mov     eax, ds:0B30AACh
0x789D59: xor     eax, esp
0x789D5B: push    eax
0x789D5C: lea     eax, [esp+38h+var_C]
0x789D60: mov     large fs:0, eax
0x789D66: mov     ebx, ecx
0x789D68: mov     ecx, [ebx+58h]; this
0x789D6B: test    ecx, ecx
0x789D6D: jz      loc_789E98
0x789D73: mov     eax, [ecx+4]
0x789D76: test    eax, eax
0x789D78: mov     edi, [esp+38h+ArgList]
0x789D7C: jz      short loc_789D9E
0x789D7E: mov     esi, [ecx+8]
0x789D81: sub     esi, eax
0x789D83: mov     eax, 92492493h
0x789D88: imul    esi
0x789D8A: add     edx, esi
0x789D8C: sar     edx, 4
0x789D8F: mov     eax, edx
0x789D91: shr     eax, 1Fh
0x789D94: add     eax, edx
0x789D96: cmp     edi, eax
0x789D98: jb      loc_789E33
0x789D9E: mov     eax, [ecx+4]
0x789DA1: test    eax, eax
0x789DA3: jz      short loc_789DBD
0x789DA5: mov     ecx, [ecx+8]
0x789DA8: sub     ecx, eax
0x789DAA: mov     eax, 92492493h
0x789DAF: imul    ecx
0x789DB1: add     edx, ecx
0x789DB3: sar     edx, 4
0x789DB6: mov     eax, edx
0x789DB8: shr     eax, 1Fh
0x789DBB: add     eax, edx
0x789DBD: push    eax
0x789DBE: push    edi; ArgList
0x789DBF: push    offset aCollisionObjec; "collision object index (%d) exceeds max"...
0x789DC4: lea     esi, [esp+44h+result]; result
0x789DC8: call    OB_IdvFormatString_010201A0; Out-of-range collision diagnostics construct a temporary 28-byte string through OB_IdvFormatString, pass its bytes to CSpeedTreeRT::SetError, then destroy temporary heap storage when SSO capacity is exceeded.
0x789DCD: add     esp, 0Ch
0x789DD0: mov     edi, 10h
0x789DD5: cmp     [eax+18h], edi
0x789DD8: mov     [esp+38h+var_4], 0
0x789DE0: jb      short loc_789DE7
0x789DE2: mov     edx, [eax+4]
0x789DE5: jmp     short loc_789DEA
0x789DE7: lea     edx, [eax+4]
0x789DEA: mov     eax, edx
0x789DEC: lea     esi, [eax+1]
0x789DEF: nop
0x789DF0: mov     cl, [eax]
0x789DF2: add     eax, 1
0x789DF5: test    cl, cl
0x789DF7: jnz     short loc_789DF0
0x789DF9: sub     eax, esi
0x789DFB: push    eax; count
0x789DFC: push    edx; source
0x789DFD: mov     ecx, offset OB_g_strError_010201A0; this
0x789E02: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x789E07: cmp     [esp+38h+result.capacity], edi
0x789E0B: jb      loc_789EA9
0x789E11: mov     eax, dword ptr [esp+38h+result.storage]
0x789E15: push    eax
0x789E16: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789E1B: add     esp, 4
0x789E1E: mov     ecx, [esp+38h+var_C]
0x789E22: mov     large fs:0, ecx
0x789E29: pop     ecx
0x789E2A: pop     edi
0x789E2B: pop     esi
0x789E2C: pop     ebx
0x789E2D: add     esp, 28h
0x789E30: retn    10h
0x789E33: push    edi; index
0x789E34: call    OB_stVector_CollisionObject_At_010201A0; Oblivion checked collision-vector index: validates index against the 0x1C-stride size and returns begin + index*0x1C.
0x789E39: mov     ecx, [eax]
0x789E3B: mov     edx, [esp+38h+typeOut]
0x789E3F: mov     [edx], ecx
0x789E41: mov     ecx, [ebx+58h]; this
0x789E44: push    edi; index
0x789E45: call    OB_stVector_CollisionObject_At_010201A0; Oblivion checked collision-vector index: validates index against the 0x1C-stride size and returns begin + index*0x1C.
0x789E4A: mov     edx, [eax+4]
0x789E4D: mov     ecx, [esp+38h+posOut]
0x789E51: add     eax, 4
0x789E54: mov     [ecx], edx
0x789E56: mov     edx, [eax+4]
0x789E59: mov     [ecx+4], edx
0x789E5C: mov     eax, [eax+8]
0x789E5F: mov     [ecx+8], eax
0x789E62: mov     ecx, [ebx+58h]; this
0x789E65: push    edi; index
0x789E66: call    OB_stVector_CollisionObject_At_010201A0; Oblivion checked collision-vector index: validates index against the 0x1C-stride size and returns begin + index*0x1C.
0x789E6B: mov     edx, [eax+10h]
0x789E6E: mov     ecx, [esp+38h+dimOut]
0x789E72: add     eax, 10h
0x789E75: mov     [ecx], edx
0x789E77: mov     edx, [eax+4]
0x789E7A: mov     [ecx+4], edx
0x789E7D: mov     eax, [eax+8]
0x789E80: mov     [ecx+8], eax
0x789E83: mov     ecx, [esp+38h+var_C]
0x789E87: mov     large fs:0, ecx
0x789E8E: pop     ecx
0x789E8F: pop     edi
0x789E90: pop     esi
0x789E91: pop     ebx
0x789E92: add     esp, 28h
0x789E95: retn    10h
0x789E98: push    2Eh ; '.'; count
0x789E9A: push    offset aNoCollisionObj; "no collision objects are stored with th"...
0x789E9F: mov     ecx, offset OB_g_strError_010201A0; this
0x789EA4: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x789EA9: mov     ecx, [esp+38h+var_C]
0x789EAD: mov     large fs:0, ecx
0x789EB4: pop     ecx
0x789EB5: pop     edi
0x789EB6: pop     esi
0x789EB7: pop     ebx
0x789EB8: add     esp, 28h
0x789EBB: retn    10h
0x9C8EB0: lea     ecx, [ebp-28h]; this
0x9C8EB3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C8EB8: mov     edx, [esp+source]
0x9C8EBC: lea     eax, [edx-28h]
0x9C8EBF: mov     ecx, [edx-2Ch]
0x9C8EC2: xor     ecx, eax
0x9C8EC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8EC9: mov     eax, offset stru_AF1798
0x9C8ECE: jmp     ___CxxFrameHandler3
