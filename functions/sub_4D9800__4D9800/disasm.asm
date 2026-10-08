0x4D9800: push    0FFFFFFFFh
0x4D9802: push    offset SEH_4D9800
0x4D9807: mov     eax, large fs:0
0x4D980D: push    eax
0x4D980E: push    esi
0x4D980F: mov     eax, ds:0B30AACh
0x4D9814: xor     eax, esp
0x4D9816: push    eax
0x4D9817: lea     eax, [esp+14h+var_C]
0x4D981B: mov     large fs:0, eax
0x4D9821: mov     esi, [esp+14h+arg_0]
0x4D9825: test    esi, esi
0x4D9827: mov     [esp+14h+arg_0], esi
0x4D982B: jz      short loc_4D9837
0x4D982D: lea     eax, [esi+4]
0x4D9830: push    eax; lpAddend
0x4D9831: call    dword ptr ds:0A28078h
0x4D9837: lea     ecx, [esp+14h+arg_0]
0x4D983B: push    ecx
0x4D983C: mov     ecx, offset stru_B082F0; MEF PERF 2026-10-08: Verified strong-pointer16 array used by TESBoundObject_Create3DImpl4B39F7; clear4B26D5 and remove4D9849 are also observed. Its entire lifetime/population not sealed. Generic AddFirstEmpty patch must not assume every caller is a NiNode child array.
0x4D9841: mov     [esp+18h+var_4], 0
0x4D9849: call    sub_4B24F0
0x4D984E: test    esi, esi
0x4D9850: mov     [esp+14h+var_4], 0FFFFFFFFh
0x4D9858: jz      short loc_4D9872
0x4D985A: lea     edx, [esi+4]
0x4D985D: push    edx; lpAddend
0x4D985E: call    dword ptr ds:0A2807Ch
0x4D9864: test    eax, eax
0x4D9866: jnz     short loc_4D9872
0x4D9868: mov     eax, [esi]
0x4D986A: mov     edx, [eax]
0x4D986C: push    1
0x4D986E: mov     ecx, esi
0x4D9870: call    edx
0x4D9872: mov     ecx, dword ptr [esp+14h+var_C]
0x4D9876: mov     large fs:0, ecx
0x4D987D: pop     ecx
0x4D987E: pop     esi
0x4D987F: add     esp, 0Ch
0x4D9882: retn
0x9B5A40: lea     ecx, [ebp+4]; slot
0x9B5A43: jmp     NiPointerSlot_Release
0x9B5A48: mov     edx, [esp+arg_4]
0x9B5A4C: lea     eax, [edx-4]
0x9B5A4F: mov     ecx, [edx-8]
0x9B5A52: xor     ecx, eax
0x9B5A54: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5A59: mov     eax, offset stru_AE0A50
0x9B5A5E: jmp     ___CxxFrameHandler3
