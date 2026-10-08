0x565F80: push    0FFFFFFFFh
0x565F82: push    offset SEH_565F80
0x565F87: mov     eax, large fs:0
0x565F8D: push    eax
0x565F8E: sub     esp, 8
0x565F91: push    esi
0x565F92: mov     eax, ds:0B30AACh
0x565F97: xor     eax, esp
0x565F99: push    eax
0x565F9A: lea     eax, [esp+1Ch+var_C]
0x565F9E: mov     large fs:0, eax
0x565FA4: mov     esi, ecx
0x565FA6: mov     eax, [esp+1Ch+arg_0]
0x565FAA: test    eax, eax
0x565FAC: jz      short loc_565FCA
0x565FAE: push    eax
0x565FAF: lea     ecx, [esi+2Ch]
0x565FB2: call    sub_569DD0
0x565FB7: mov     ecx, [esp+1Ch+var_C]
0x565FBB: mov     large fs:0, ecx
0x565FC2: pop     ecx
0x565FC3: pop     esi
0x565FC4: add     esp, 14h
0x565FC7: retn    4
0x565FCA: lea     ecx, [esp+1Ch+var_14]
0x565FCE: call    sub_569D60
0x565FD3: lea     eax, [esp+1Ch+var_14]
0x565FD7: push    eax
0x565FD8: lea     ecx, [esi+2Ch]
0x565FDB: mov     [esp+20h+var_4], 0
0x565FE3: call    sub_569DD0
0x565FE8: lea     ecx, [esp+1Ch+var_14]; this
0x565FEC: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x565FF4: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x565FF9: mov     ecx, [esp+1Ch+var_C]
0x565FFD: mov     large fs:0, ecx
0x566004: pop     ecx
0x566005: pop     esi
0x566006: add     esp, 14h
0x566009: retn    4
0x9BD6B0: lea     ecx, [ebp-14h]; this
0x9BD6B3: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9BD6B8: mov     edx, [esp+arg_4]
0x9BD6BC: lea     eax, [edx-0Ch]
0x9BD6BF: mov     ecx, [edx-10h]
0x9BD6C2: xor     ecx, eax
0x9BD6C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD6C9: mov     eax, offset stru_AE6FF0
0x9BD6CE: jmp     ___CxxFrameHandler3
