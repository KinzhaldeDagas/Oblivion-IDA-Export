0x8AED50: push    0FFFFFFFFh
0x8AED52: push    offset ??1bhkAabbPhantom@@UAE@XZ_SEH
0x8AED57: mov     eax, large fs:0
0x8AED5D: push    eax
0x8AED5E: push    ecx
0x8AED5F: push    esi
0x8AED60: mov     eax, ds:0B30AACh
0x8AED65: xor     eax, esp
0x8AED67: push    eax
0x8AED68: lea     eax, [esp+18h+var_C]
0x8AED6C: mov     large fs:0, eax
0x8AED72: mov     esi, ecx
0x8AED74: mov     [esp+18h+var_10], esi
0x8AED78: mov     dword ptr [esi], offset ??_7bhkShapePhantom@@6B@; const bhkShapePhantom::`vftable'
0x8AED7E: mov     [esp+18h+var_4], 0
0x8AED86: call    sub_89D700
0x8AED8B: sub     dword ptr ds:0BA7F68h, 1
0x8AED92: mov     ecx, esi; this
0x8AED94: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AED9C: call    ??1bhkPhantom@@UAE@XZ; bhkPhantom::~bhkPhantom(void)
0x8AEDA1: mov     ecx, [esp+18h+var_C]
0x8AEDA5: mov     large fs:0, ecx
0x8AEDAC: pop     ecx
0x8AEDAD: pop     esi
0x8AEDAE: add     esp, 10h
0x8AEDB1: retn
0x9D7150: mov     ecx, [ebp-10h]; this
0x9D7153: jmp     ??1bhkPhantom@@UAE@XZ; bhkPhantom::~bhkPhantom(void)
0x9D7158: mov     edx, [esp+arg_4]
0x9D715C: lea     eax, [edx-8]
0x9D715F: mov     ecx, [edx-0Ch]
0x9D7162: xor     ecx, eax
0x9D7164: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7169: mov     eax, offset stru_AFEDDC
0x9D716E: jmp     ___CxxFrameHandler3
