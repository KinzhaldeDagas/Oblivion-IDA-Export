0x8B8DF0: push    0FFFFFFFFh
0x8B8DF2: push    offset ??1bhkRigidBodyT@@UAE@XZ_SEH
0x8B8DF7: mov     eax, large fs:0
0x8B8DFD: push    eax
0x8B8DFE: push    ecx
0x8B8DFF: push    esi
0x8B8E00: mov     eax, ds:0B30AACh
0x8B8E05: xor     eax, esp
0x8B8E07: push    eax
0x8B8E08: lea     eax, [esp+18h+var_C]
0x8B8E0C: mov     large fs:0, eax
0x8B8E12: mov     esi, ecx
0x8B8E14: mov     [esp+18h+var_10], esi
0x8B8E18: mov     dword ptr [esi], offset ??_7bhkRigidBodyT@@6B@; const bhkRigidBodyT::`vftable'
0x8B8E1E: mov     [esp+18h+var_4], 0
0x8B8E26: call    sub_8A53C0
0x8B8E2B: sub     dword ptr ds:0BA8014h, 1
0x8B8E32: mov     ecx, esi; this
0x8B8E34: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8B8E3C: call    ??1bhkRigidBody@@UAE@XZ; bhkRigidBody::~bhkRigidBody(void)
0x8B8E41: mov     ecx, [esp+18h+var_C]
0x8B8E45: mov     large fs:0, ecx
0x8B8E4C: pop     ecx
0x8B8E4D: pop     esi
0x8B8E4E: add     esp, 10h
0x8B8E51: retn
0x9D6FE0: mov     ecx, [ebp-10h]; this
0x9D6FE3: jmp     ??1bhkRigidBody@@UAE@XZ; bhkRigidBody::~bhkRigidBody(void)
0x9D6FE8: mov     edx, [esp+arg_4]
0x9D6FEC: lea     eax, [edx-8]
0x9D6FEF: mov     ecx, [edx-0Ch]
0x9D6FF2: xor     ecx, eax
0x9D6FF4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D6FF9: mov     eax, offset stru_AFEC98
0x9D6FFE: jmp     ___CxxFrameHandler3
