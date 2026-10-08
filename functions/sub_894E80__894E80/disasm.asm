0x894E80: push    ebp; TES4 authoritative: integrates controller position from proxy velocity +0x2E0 and dt. Single observed caller is 0x896828 after state update and velocity writeback.
0x894E81: mov     ebp, esp
0x894E83: and     esp, 0FFFFFFF0h
0x894E86: push    0FFFFFFFFh
0x894E88: push    offset SEH_894E80
0x894E8D: mov     eax, large fs:0
0x894E93: push    eax
0x894E94: sub     esp, 1E8h
0x894E9A: mov     eax, ds:0B30AACh
0x894E9F: xor     eax, esp
0x894EA1: mov     [esp+1F4h+var_14], eax
0x894EA8: push    ebx
0x894EA9: push    esi
0x894EAA: push    edi
0x894EAB: mov     eax, ds:0B30AACh
0x894EB0: xor     eax, esp
0x894EB2: push    eax
0x894EB3: lea     eax, [esp+204h+var_C]
0x894EBA: mov     large fs:0, eax
0x894EC0: mov     edi, ecx
0x894EC2: mov     eax, [edi+1F4h]; Checks controller flag 0x80000 by shifting +0x1F4 >> 19. If clear, uses simple position += velocity*dt path.
0x894EC8: shr     eax, 13h
0x894ECB: test    al, 1
0x894ECD: mov     [esp+204h+var_1F4], edi
0x894ED1: jz      loc_894FF6
0x894ED7: mov     eax, [edi+364h]; Swept-hit listener path requires flag 0x80000 and metadata proxy+0x364. Without both, integration simply writes current position + velocity*dt.
0x894EDD: xor     ebx, ebx
0x894EDF: cmp     eax, ebx
0x894EE1: jz      loc_894FF6
0x894EE7: fld     dword ptr ds:0A965ACh
0x894EED: lea     ecx, [esp+204h+var_1A0]
0x894EF1: fstp    [esp+204h+var_1BC]
0x894EF5: mov     [esp+204h+var_1C0], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x894EFD: mov     [esp+204h+var_1B0], ecx
0x894F01: mov     [esp+204h+var_1A8], 80000008h
0x894F09: mov     [esp+204h+var_1AC], ebx
0x894F0D: fld     dword ptr ds:0A965A8h
0x894F13: lea     edx, [esp+204h+var_1F0]
0x894F17: fst     [esp+204h+var_1D0]
0x894F1B: push    edx
0x894F1C: fstp    [esp+208h+var_1CC]
0x894F20: mov     ecx, edi
0x894F22: mov     [esp+208h+var_4], ebx
0x894F29: call    bhkCharacterController_ReadRelativePosition; TES4 authoritative: reads current proxy position. Gets collision object transform at 0x8AC070, subtracts metadata/world transform basis offset, returns Havok-unit position.
0x894F2E: movss   xmm1, [ebp+arg_0]
0x894F33: mov     esi, [edi+364h]
0x894F39: cmp     esi, ebx
0x894F3B: xorps   xmm0, xmm0
0x894F3E: movss   xmm0, xmm1
0x894F42: movaps  xmm1, xmmword ptr [edi+2E0h]
0x894F49: shufps  xmm0, xmm0, 0
0x894F4D: mulps   xmm1, xmm0
0x894F50: movaps  xmm0, xmmword ptr [esp+204h+var_1F0]
0x894F55: addps   xmm0, xmm1
0x894F58: movaps  xmmword ptr [esp+204h+a2], xmm0; Computes candidate Havok-relative position = current relative position + proxy+0x2E0 * dt.
0x894F5D: jz      short loc_894F8E
0x894F5F: mov     ebx, [esi+8]
0x894F62: test    ebx, ebx
0x894F64: jz      short loc_894F8E
0x894F66: mov     ecx, esi
0x894F68: call    bhkRefObject_UpdateHavokObject
0x894F6D: mov     eax, [ebx]
0x894F6F: push    0
0x894F71: lea     ecx, [esp+208h+var_1C0]
0x894F75: push    ecx
0x894F76: lea     edx, [esp+20Ch+a2]
0x894F7A: push    edx
0x894F7B: mov     edx, [eax+30h]
0x894F7E: lea     ecx, [esp+210h+var_1F0]
0x894F82: push    ecx
0x894F83: mov     ecx, ebx
0x894F85: call    edx; Linear cast/sweep via metadata+8 hk object vfunc +0x30(start,end,collector,0). Hits are gathered for notification; this call does not itself clamp the candidate end position here.
0x894F87: mov     ecx, esi
0x894F89: call    bhkRefObject_UpdateHavokObject
0x894F8E: cmp     [esp+204h+var_1AC], 0
0x894F93: setnle  al
0x894F96: test    al, al
0x894F98: jz      short loc_894FD4
0x894F9A: lea     ecx, [esp+204h+var_1C0]
0x894F9E: call    hkpCdPointCollector_SortHitsByDistance; TES4 authoritative: sorts collector contact hits by entry+0x1C when more than one hit is present.
0x894FA3: xor     ebx, ebx
0x894FA5: cmp     [esp+204h+var_1AC], ebx
0x894FA9: jle     short loc_894FD4
0x894FAB: add     edi, 1F0h
0x894FB1: xor     esi, esi
0x894FB3: mov     ecx, [esp+204h+var_1B0]
0x894FB7: mov     eax, [edi]
0x894FB9: mov     eax, [eax+8]
0x894FBC: lea     edx, [esi+ecx]
0x894FBF: push    edx
0x894FC0: mov     ecx, edi
0x894FC2: call    eax; Dispatches each swept hit to the controller listener at proxy+0x1F0 vfunc +8 before final position writeback.
0x894FC4: add     ebx, 1
0x894FC7: add     esi, 30h ; '0'
0x894FCA: cmp     ebx, [esp+204h+var_1AC]
0x894FCE: jl      short loc_894FB3
0x894FD0: mov     edi, [esp+204h+var_1F4]
0x894FD4: lea     ecx, [esp+204h+a2]
0x894FD8: push    ecx; a2
0x894FD9: mov     ecx, edi; this
0x894FDB: call    bhkCharacterController_WriteRelativePosition; After processing swept hits, vanilla still writes the full candidate relative position. This confirms the 0x80000 path is not a blocking ledge-clearance or mantle solver.
0x894FE0: lea     ecx, [esp+204h+var_1C0]; this
0x894FE4: mov     [esp+204h+var_4], 0FFFFFFFFh
0x894FEF: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x894FF4: jmp     short loc_895036
0x894FF6: lea     edx, [esp+204h+var_1F0]
0x894FFA: push    edx
0x894FFB: call    bhkCharacterController_ReadRelativePosition; TES4 authoritative: reads current proxy position. Gets collision object transform at 0x8AC070, subtracts metadata/world transform basis offset, returns Havok-unit position.
0x895000: movss   xmm1, [ebp+arg_0]
0x895005: xorps   xmm0, xmm0
0x895008: movss   xmm0, xmm1
0x89500C: movaps  xmm1, xmm0
0x89500F: shufps  xmm1, xmm0, 0
0x895013: movaps  xmm0, xmmword ptr [edi+2E0h]
0x89501A: mulps   xmm1, xmm0
0x89501D: movaps  xmm0, xmmword ptr [esp+204h+var_1F0]
0x895022: lea     eax, [esp+204h+var_1F0]
0x895026: addps   xmm1, xmm0
0x895029: push    eax; a2
0x89502A: mov     ecx, edi; this
0x89502C: movaps  xmmword ptr [esp+208h+var_1F0], xmm1
0x895031: call    bhkCharacterController_WriteRelativePosition; Simple relative-position writeback when the swept collector path is inactive.
0x895036: mov     ecx, [esp+204h+var_C]
0x89503D: mov     large fs:0, ecx
0x895044: pop     ecx
0x895045: pop     edi
0x895046: pop     esi
0x895047: pop     ebx
0x895048: mov     ecx, [esp+1F4h+var_14]
0x89504F: xor     ecx, esp
0x895051: call    @__security_check_cookie@4; __security_check_cookie(x)
0x895056: mov     esp, ebp
0x895058: pop     ebp
0x895059: retn    4
0x9D6570: lea     ecx, [ebp+var_1C0]; this
0x9D6576: jmp     ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x9D657B: mov     edx, [esp-4+arg_4]
0x9D657F: lea     eax, [edx-1F4h]
0x9D6585: mov     ecx, [edx-1F8h]
0x9D658B: xor     ecx, eax
0x9D658D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D6592: add     eax, 0Ch
0x9D6595: mov     ecx, [edx-8]
0x9D6598: xor     ecx, eax
0x9D659A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D659F: mov     eax, offset stru_AFE3DC
0x9D65A4: jmp     ___CxxFrameHandler3
