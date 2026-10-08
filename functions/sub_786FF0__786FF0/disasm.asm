0x786FF0: push    0FFFFFFFFh; Oblivion stRegion destructor: invokes the no-op stVec teardown on embedded vectors at +0x18 and +0x00. RT4.1 stRegion's max/min vector composition corroborates the two 24-byte subobjects.
0x786FF2: push    offset SEH_786FF0
0x786FF7: mov     eax, large fs:0
0x786FFD: push    eax
0x786FFE: push    ecx
0x786FFF: push    esi
0x787000: mov     eax, ds:0B30AACh
0x787005: xor     eax, esp
0x787007: push    eax
0x787008: lea     eax, [esp+18h+var_C]
0x78700C: mov     large fs:0, eax
0x787012: mov     esi, ecx
0x787014: mov     [esp+18h+var_10], esi
0x787018: lea     ecx, [esi+18h]; this
0x78701B: mov     [esp+18h+var_4], 0
0x787023: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x787028: mov     ecx, esi; this
0x78702A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x787032: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x787037: mov     ecx, [esp+18h+var_C]
0x78703B: mov     large fs:0, ecx
0x787042: pop     ecx
0x787043: pop     esi
0x787044: add     esp, 10h
0x787047: retn
0x9CB250: mov     ecx, [ebp-10h]; this
0x9CB253: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9CB258: mov     edx, [esp+arg_4]
0x9CB25C: lea     eax, [edx-8]
0x9CB25F: mov     ecx, [edx-0Ch]
0x9CB262: xor     ecx, eax
0x9CB264: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB269: mov     eax, offset stru_AF38F0
0x9CB26E: jmp     ___CxxFrameHandler3
