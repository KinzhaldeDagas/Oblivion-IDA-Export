0x6F1670: push    0FFFFFFFFh
0x6F1672: push    offset SEH_6F1670
0x6F1677: mov     eax, large fs:0
0x6F167D: push    eax
0x6F167E: push    ecx
0x6F167F: mov     eax, ds:0B30AACh
0x6F1684: xor     eax, esp
0x6F1686: push    eax
0x6F1687: lea     eax, [esp+14h+var_C]
0x6F168B: mov     large fs:0, eax
0x6F1691: mov     eax, [esp+14h+arg_0]
0x6F1695: mov     [esp+14h+arg_0], eax
0x6F1699: mov     [esp+14h+var_10], eax
0x6F169D: test    eax, eax
0x6F169F: mov     [esp+14h+var_4], 0
0x6F16A7: jz      short loc_6F16D3
0x6F16A9: mov     edx, [esp+14h+arg_4]
0x6F16AD: mov     ecx, [edx]
0x6F16AF: mov     [eax], ecx
0x6F16B1: push    0FFFFFFFFh; count
0x6F16B3: lea     ecx, [eax+4]; this
0x6F16B6: push    0; offset
0x6F16B8: add     edx, 4
0x6F16BB: mov     dword ptr [ecx+18h], 0Fh
0x6F16C2: mov     dword ptr [ecx+14h], 0
0x6F16C9: push    edx; source
0x6F16CA: mov     byte ptr [ecx+4], 0
0x6F16CE: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F16D3: mov     ecx, [esp+14h+var_C]
0x6F16D7: mov     large fs:0, ecx
0x6F16DE: pop     ecx
0x6F16DF: add     esp, 10h
0x6F16E2: retn
0x9BC620: mov     eax, [ebp+4]
0x9BC623: push    eax
0x9BC624: mov     ecx, [ebp-10h]; this
0x9BC627: push    ecx
0x9BC628: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9BC62D: add     esp, 8
0x9BC630: retn
0x9BC631: mov     edx, [esp+arg_4]
0x9BC635: lea     eax, [edx-4]
0x9BC638: mov     ecx, [edx-8]
0x9BC63B: xor     ecx, eax
0x9BC63D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BC642: mov     eax, offset stru_AE6214
0x9BC647: jmp     ___CxxFrameHandler3
