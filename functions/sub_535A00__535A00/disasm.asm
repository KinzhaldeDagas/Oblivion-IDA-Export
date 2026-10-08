0x535A00: push    0FFFFFFFFh; SpecificItemCollector constructor for raycasts. Initializes collector and, when a TESObjectREFR is supplied, reads its collision filter via 0x65ABE0 and rewrites collision layer matrix row for layer a2 (or 0x1C if a2 < 0x18). LOS uses this, but movement climb probes should avoid unintended global mask churn unless needed.
0x535A02: push    offset SEH_538C80
0x535A07: mov     eax, large fs:0
0x535A0D: push    eax
0x535A0E: push    ecx
0x535A0F: push    esi
0x535A10: mov     eax, ds:0B30AACh
0x535A15: xor     eax, esp
0x535A17: push    eax
0x535A18: lea     eax, [esp+18h+var_C]
0x535A1C: mov     large fs:0, eax
0x535A22: mov     esi, ecx
0x535A24: mov     [esp+18h+var_10], esi
0x535A28: fld1
0x535A2A: xor     eax, eax
0x535A2C: fst     dword ptr [esi+24h]
0x535A2F: fst     dword ptr [esi+24h]
0x535A32: mov     [esi+30h], eax
0x535A35: fstp    dword ptr [esi+4]
0x535A38: mov     ecx, [esp+18h+arg_4]
0x535A3C: cmp     ecx, eax
0x535A3E: mov     dword ptr [esi], offset ??_7SpecificItemCollector@@6B@; const SpecificItemCollector::`vftable'
0x535A44: mov     [esp+18h+var_4], eax
0x535A48: mov     [esi+40h], eax
0x535A4B: jz      short loc_535A83
0x535A4D: lea     eax, [esp+18h+arg_4]
0x535A51: push    eax
0x535A52: call    MobileObject_GetCollisionFilterInfo; Returns actor/proxy collision filter identity by calling 0x57E270 on MobileObject_GetCharProxy(this). Callers keep high 16 bits and OR in the chosen collision layer.
0x535A57: mov     eax, [esp+18h+arg_0]
0x535A5B: cmp     eax, 18h
0x535A5E: mov     ecx, [esp+18h+arg_4]
0x535A62: mov     [esi+40h], ecx
0x535A65: jge     short loc_535A6C
0x535A67: mov     eax, 1Ch
0x535A6C: and     ecx, 3Fh
0x535A6F: mov     edx, 1
0x535A74: shl     edx, cl
0x535A76: or      edx, 0A277Fh
0x535A7C: mov     ds:0BA7DB0h[eax*4], edx; TES4 authoritative: SpecificItemCollector setup writes a layer-matrix row directly using the target object's low 6 filter bits plus constant mask 0xA277F; avoid this for generic climb rays unless collector filtering is deliberately needed.
0x535A83: mov     eax, esi
0x535A85: mov     ecx, [esp+18h+var_C]
0x535A89: mov     large fs:0, ecx
0x535A90: pop     ecx
0x535A91: pop     esi
0x535A92: add     esp, 10h
0x535A95: retn    8
0x9B93E0: mov     ecx, [ebp-10h]; void *
0x9B93E3: jmp     sub_4F5E90
0x9B93E8: mov     edx, [esp+arg_4]
0x9B93EC: lea     eax, [edx-8]
0x9B93EF: mov     ecx, [edx-0Ch]
0x9B93F2: xor     ecx, eax
0x9B93F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B93F9: mov     eax, offset stru_AE3770
0x9B93FE: jmp     ___CxxFrameHandler3
