0x8C1F30: push    0FFFFFFFFh
0x8C1F32: push    offset SEH_9266B0
0x8C1F37: mov     eax, large fs:0
0x8C1F3D: push    eax
0x8C1F3E: push    ecx
0x8C1F3F: push    esi
0x8C1F40: mov     eax, ds:0B30AACh
0x8C1F45: xor     eax, esp
0x8C1F47: push    eax
0x8C1F48: lea     eax, [esp+18h+var_C]
0x8C1F4C: mov     large fs:0, eax
0x8C1F52: mov     esi, ecx
0x8C1F54: cmp     dword ptr [esi+4], 0
0x8C1F58: jnz     short loc_8C1F87
0x8C1F5A: mov     ecx, ds:0BA7D98h
0x8C1F60: mov     eax, [ecx]
0x8C1F62: mov     edx, [eax+10h]
0x8C1F65: push    29h ; ')'
0x8C1F67: push    4Ch ; 'L'
0x8C1F69: call    edx
0x8C1F6B: mov     word ptr [eax+4], 4Ch ; 'L'
0x8C1F71: mov     [esp+18h+var_10], eax
0x8C1F75: mov     ecx, eax
0x8C1F77: mov     [esp+18h+var_4], 0
0x8C1F7F: call    sub_913180
0x8C1F84: mov     [esi+4], eax
0x8C1F87: mov     eax, 4Ch ; 'L'
0x8C1F8C: mov     ecx, [esp+18h+var_C]
0x8C1F90: mov     large fs:0, ecx
0x8C1F97: pop     ecx
0x8C1F98: pop     esi
0x8C1F99: add     esp, 10h
0x8C1F9C: retn
0x9D7440: mov     eax, [ebp-10h]
0x9D7443: push    eax
0x9D7444: call    sub_8A01D0
0x9D7449: pop     ecx
0x9D744A: retn
0x9D744B: mov     edx, [esp+arg_4]
0x9D744F: lea     eax, [edx-8]
0x9D7452: mov     ecx, [edx-0Ch]
0x9D7455: xor     ecx, eax
0x9D7457: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D745C: mov     eax, offset stru_AFF06C
0x9D7461: jmp     ___CxxFrameHandler3
