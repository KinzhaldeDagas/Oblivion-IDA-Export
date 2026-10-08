0x4990A0: push    0FFFFFFFFh
0x4990A2: push    offset SEH_4990A0
0x4990A7: mov     eax, large fs:0
0x4990AD: push    eax
0x4990AE: push    ecx
0x4990AF: push    esi
0x4990B0: mov     eax, ds:0B30AACh
0x4990B5: xor     eax, esp
0x4990B7: push    eax
0x4990B8: lea     eax, [esp+18h+var_C]
0x4990BC: mov     large fs:0, eax
0x4990C2: mov     esi, ecx
0x4990C4: mov     [esp+18h+var_10], esi
0x4990C8: mov     eax, [esp+18h+a2]
0x4990CC: push    eax; visibleArray
0x4990CD: call    NiCullingProcess_NiCullingProcess; Oblivion NiCullingProcess constructor: initializes append mode, visible-geometry storage, camera state, and culling-plane state.
0x4990D2: lea     ecx, [esi+90h]; this
0x4990D8: mov     [esp+18h+var_4], 0
0x4990E0: mov     dword ptr [esi], offset ??_7TESWaterCullingProcess@@6B@; const TESWaterCullingProcess::`vftable'
0x4990E6: call    sub_716DB0
0x4990EB: mov     eax, esi
0x4990ED: mov     ecx, [esp+18h+var_C]
0x4990F1: mov     large fs:0, ecx
0x4990F8: pop     ecx
0x4990F9: pop     esi
0x4990FA: add     esp, 10h
0x4990FD: retn    4
0x9B1840: mov     ecx, [ebp-10h]; this
0x9B1843: jmp     ??1BSCullingProcess@@UAE@XZ; Oblivion BSCullingProcess destructor restores its base culling-process state; no separate visible-array allocation is released here.
0x9B1848: mov     edx, [esp+arg_4]
0x9B184C: lea     eax, [edx-8]
0x9B184F: mov     ecx, [edx-0Ch]
0x9B1852: xor     ecx, eax
0x9B1854: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1859: mov     eax, offset stru_ADD9C8
0x9B185E: jmp     ___CxxFrameHandler3
