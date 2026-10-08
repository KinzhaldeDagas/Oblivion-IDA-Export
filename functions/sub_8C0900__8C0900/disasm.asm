0x8C0900: push    0FFFFFFFFh
0x8C0902: push    offset SEH_9266B0
0x8C0907: mov     eax, large fs:0
0x8C090D: push    eax
0x8C090E: push    ecx
0x8C090F: push    esi
0x8C0910: mov     eax, ds:0B30AACh
0x8C0915: xor     eax, esp
0x8C0917: push    eax
0x8C0918: lea     eax, [esp+18h+var_C]
0x8C091C: mov     large fs:0, eax
0x8C0922: mov     esi, ecx
0x8C0924: cmp     dword ptr [esi+4], 0
0x8C0928: jnz     short loc_8C095A
0x8C092A: mov     ecx, ds:0BA7D98h
0x8C0930: mov     eax, [ecx]
0x8C0932: mov     edx, [eax+10h]
0x8C0935: push    29h ; ')'
0x8C0937: push    90h
0x8C093C: call    edx
0x8C093E: mov     word ptr [eax+4], 90h
0x8C0944: mov     [esp+18h+var_10], eax
0x8C0948: mov     ecx, eax
0x8C094A: mov     [esp+18h+var_4], 0
0x8C0952: call    sub_911000
0x8C0957: mov     [esi+4], eax
0x8C095A: mov     eax, 90h
0x8C095F: mov     ecx, [esp+18h+var_C]
0x8C0963: mov     large fs:0, ecx
0x8C096A: pop     ecx
0x8C096B: pop     esi
0x8C096C: add     esp, 10h
0x8C096F: retn
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
