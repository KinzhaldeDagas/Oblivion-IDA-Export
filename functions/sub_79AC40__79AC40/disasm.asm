0x79AC40: push    0FFFFFFFFh; Oblivion SFrondTexture copy constructor: deep-copies the 28-byte filename string and copies aspectRatio, sizeScale, minAngleOffset, and maxAngleOffset. The 0x2C layout is established by executable accesses; RT 4.1 FrondEngine.h corroborates the member names.
0x79AC42: push    offset SEH_79B7D0
0x79AC47: mov     eax, large fs:0
0x79AC4D: push    eax
0x79AC4E: push    ecx
0x79AC4F: push    esi
0x79AC50: push    edi
0x79AC51: mov     eax, ds:0B30AACh
0x79AC56: xor     eax, esp
0x79AC58: push    eax
0x79AC59: lea     eax, [esp+1Ch+var_C]
0x79AC5D: mov     large fs:0, eax
0x79AC63: mov     esi, [esp+1Ch+this]
0x79AC67: mov     [esp+1Ch+this], esi
0x79AC6B: mov     [esp+1Ch+var_10], esi
0x79AC6F: xor     eax, eax
0x79AC71: cmp     esi, eax
0x79AC73: mov     [esp+1Ch+var_4], eax
0x79AC77: jz      short loc_79ACAD
0x79AC79: mov     edi, [esp+1Ch+source]
0x79AC7D: push    0FFFFFFFFh; count
0x79AC7F: push    eax; offset
0x79AC80: mov     dword ptr [esi+18h], 0Fh
0x79AC87: mov     [esi+14h], eax
0x79AC8A: push    edi; source
0x79AC8B: mov     ecx, esi; this
0x79AC8D: mov     [esi+4], al
0x79AC90: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x79AC95: fld     dword ptr [edi+1Ch]
0x79AC98: fstp    dword ptr [esi+1Ch]
0x79AC9B: fld     dword ptr [edi+20h]
0x79AC9E: fstp    dword ptr [esi+20h]
0x79ACA1: fld     dword ptr [edi+24h]
0x79ACA4: fstp    dword ptr [esi+24h]
0x79ACA7: fld     dword ptr [edi+28h]
0x79ACAA: fstp    dword ptr [esi+28h]
0x79ACAD: mov     ecx, [esp+1Ch+var_C]
0x79ACB1: mov     large fs:0, ecx
0x79ACB8: pop     ecx
0x79ACB9: pop     edi
0x79ACBA: pop     esi
0x79ACBB: add     esp, 10h
0x79ACBE: retn
0x9CC270: mov     eax, [ebp+4]
0x9CC273: push    eax
0x9CC274: mov     ecx, [ebp-10h]; this
0x9CC277: push    ecx
0x9CC278: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CC27D: add     esp, 8
0x9CC280: retn
0x9CC281: mov     edx, [esp+source]
0x9CC285: lea     eax, [edx-0Ch]
0x9CC288: mov     ecx, [edx-10h]
0x9CC28B: xor     ecx, eax
0x9CC28D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC292: mov     eax, offset stru_AF53D4
0x9CC297: jmp     ___CxxFrameHandler3
