0x6F16F0: push    0FFFFFFFFh
0x6F16F2: push    offset SEH_6F1670
0x6F16F7: mov     eax, large fs:0
0x6F16FD: push    eax
0x6F16FE: push    ecx
0x6F16FF: mov     eax, ds:0B30AACh
0x6F1704: xor     eax, esp
0x6F1706: push    eax
0x6F1707: lea     eax, [esp+14h+var_C]
0x6F170B: mov     large fs:0, eax
0x6F1711: mov     eax, [esp+14h+arg_0]
0x6F1715: mov     [esp+14h+arg_0], eax
0x6F1719: mov     [esp+14h+var_10], eax
0x6F171D: test    eax, eax
0x6F171F: mov     [esp+14h+var_4], 0
0x6F1727: jz      short loc_6F1765
0x6F1729: mov     edx, [esp+14h+arg_4]
0x6F172D: mov     ecx, [edx]
0x6F172F: mov     [eax], ecx
0x6F1731: mov     ecx, [edx+4]
0x6F1734: mov     [eax+4], ecx
0x6F1737: mov     ecx, [edx+8]
0x6F173A: mov     [eax+8], ecx
0x6F173D: mov     ecx, [edx+0Ch]
0x6F1740: mov     [eax+0Ch], ecx
0x6F1743: push    0FFFFFFFFh; count
0x6F1745: lea     ecx, [eax+10h]; this
0x6F1748: push    0; offset
0x6F174A: add     edx, 10h
0x6F174D: mov     dword ptr [ecx+18h], 0Fh
0x6F1754: mov     dword ptr [ecx+14h], 0
0x6F175B: push    edx; source
0x6F175C: mov     byte ptr [ecx+4], 0
0x6F1760: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F1765: mov     ecx, [esp+14h+var_C]
0x6F1769: mov     large fs:0, ecx
0x6F1770: pop     ecx
0x6F1771: add     esp, 10h
0x6F1774: retn
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
