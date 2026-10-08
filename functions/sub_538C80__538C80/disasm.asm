0x538C80: push    0FFFFFFFFh
0x538C82: push    offset SEH_538C80
0x538C87: mov     eax, large fs:0
0x538C8D: push    eax
0x538C8E: push    ecx
0x538C8F: push    esi
0x538C90: mov     eax, ds:0B30AACh
0x538C95: xor     eax, esp
0x538C97: push    eax
0x538C98: lea     eax, [esp+18h+var_C]
0x538C9C: mov     large fs:0, eax
0x538CA2: mov     esi, ecx
0x538CA4: mov     [esp+18h+var_10], esi
0x538CA8: mov     dword ptr [esi], offset ??_7hkAllRayHitCollector@@6B@; const hkAllRayHitCollector::`vftable'
0x538CAE: mov     eax, [esi+18h]
0x538CB1: test    eax, eax
0x538CB3: mov     [esp+18h+var_4], 0
0x538CBB: js      short loc_538CF4
0x538CBD: mov     ecx, ds:0BA9DE4h
0x538CC3: mov     edx, large fs:2Ch
0x538CCA: mov     ecx, [edx+ecx*4]
0x538CCD: mov     ecx, [ecx+19Ch]
0x538CD3: test    ecx, ecx
0x538CD5: jnz     short loc_538CDD
0x538CD7: mov     ecx, ds:0BA7D9Ch
0x538CDD: and     eax, 3FFFFFFFh
0x538CE2: lea     edx, [eax+eax*2]
0x538CE5: mov     eax, [esi+10h]
0x538CE8: push    14h
0x538CEA: shl     edx, 4
0x538CED: push    edx
0x538CEE: push    eax
0x538CEF: call    sub_8A75D0
0x538CF4: mov     dword ptr [esi], offset ??_7hkRayHitCollector@@6B@; const hkRayHitCollector::`vftable'
0x538CFA: mov     ecx, [esp+18h+var_C]
0x538CFE: mov     large fs:0, ecx
0x538D05: pop     ecx
0x538D06: pop     esi
0x538D07: add     esp, 10h
0x538D0A: retn
0x9B93E0: mov     ecx, [ebp-10h]; void *
0x9B93E3: jmp     sub_4F5E90
0x9B93E8: mov     edx, [esp+arg_4]
0x9B93EC: lea     eax, [edx-8]
0x9B93EF: mov     ecx, [edx-0Ch]
0x9B93F2: xor     ecx, eax
0x9B93F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B93F9: mov     eax, offset stru_AE3770
0x9B93FE: jmp     ___CxxFrameHandler3
