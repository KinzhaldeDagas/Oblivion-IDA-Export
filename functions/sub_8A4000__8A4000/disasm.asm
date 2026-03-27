0x8A4000: push    ebp
0x8A4001: mov     ebp, esp
0x8A4003: and     esp, 0FFFFFFF0h
0x8A4006: sub     esp, 28h
0x8A4009: mov     eax, ds:0B30AACh
0x8A400E: xor     eax, esp
0x8A4010: mov     [esp+28h+var_4], eax
0x8A4014: fldz
0x8A4016: mov     eax, [ebp+arg_0]
0x8A4019: push    esi
0x8A401A: fst     dword ptr [esp+2Ch+var_20]
0x8A401E: mov     esi, [ebp+arg_4]
0x8A4021: fst     dword ptr [esp+2Ch+var_20+4]
0x8A4025: push    edi
0x8A4026: fst     dword ptr [esp+30h+var_20+8]
0x8A402A: mov     edi, [ebp+arg_8]
0x8A402D: fst     dword ptr [esp+30h+var_20+0Ch]
0x8A4031: lea     ecx, [esp+30h+var_24]
0x8A4035: fstp    [esp+30h+var_24]
0x8A4039: push    ecx
0x8A403A: lea     edx, [esp+34h+var_20]
0x8A403E: push    edx
0x8A403F: push    eax
0x8A4040: call    sub_8A3EB0
0x8A4045: fld     [esp+3Ch+var_24]
0x8A4049: movaps  xmm0, [esp+3Ch+var_20]
0x8A404E: mov     ecx, [esp+3Ch+var_4]
0x8A4052: add     esp, 0Ch
0x8A4055: movaps  xmmword ptr [esi], xmm0
0x8A4058: fstp    dword ptr [edi]
0x8A405A: pop     edi
0x8A405B: pop     esi
0x8A405C: xor     ecx, esp
0x8A405E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A4063: mov     esp, ebp
0x8A4065: pop     ebp
0x8A4066: retn
