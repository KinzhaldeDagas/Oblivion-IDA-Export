0x754B20: mov     eax, [esp+arg_C]
0x754B24: fld     [esp+arg_0]
0x754B28: mov     edx, dword ptr [esp+arg_4]
0x754B2C: sub     esp, 0Ch
0x754B2F: push    ebx
0x754B30: push    esi
0x754B31: push    edi
0x754B32: mov     ebx, ecx
0x754B34: mov     ecx, dword ptr [esp+18h+arg_8]
0x754B38: push    eax; int
0x754B39: push    ecx; char
0x754B3A: push    edx; char
0x754B3B: push    ecx
0x754B3C: mov     ecx, ebx
0x754B3E: fstp    [esp+28h+var_28]; float
0x754B41: call    sub_75ECB0
0x754B46: fld1
0x754B48: mov     eax, [esp+18h+arg_10]
0x754B4C: fst     dword ptr [ebx+30h]
0x754B4F: fstp    dword ptr [ebx+38h]
0x754B52: mov     [ebx+2Ch], eax
0x754B55: fldz
0x754B57: mov     dword ptr [ebx], offset ??_7NiPSysSphericalCollider@@6B@; const NiPSysSphericalCollider::`vftable'
0x754B5D: mov     ecx, ds:0B3F9A8h
0x754B63: fld     [esp+18h+arg_14]
0x754B67: mov     [ebx+3Ch], ecx
0x754B6A: fcom    st(1)
0x754B6C: mov     edx, ds:0B3F9ACh
0x754B72: mov     [ebx+40h], edx
0x754B75: mov     eax, ds:0B3F9B0h
0x754B7A: mov     [ebx+44h], eax
0x754B7D: fnstsw  ax
0x754B7F: fstp    st(1)
0x754B81: test    ah, 1
0x754B84: jnz     short loc_754B8B
0x754B86: fstp    dword ptr [ebx+30h]
0x754B89: jmp     short loc_754B8D
0x754B8B: fstp    st
0x754B8D: fld     dword ptr ds:0A7DEB4h
0x754B93: mov     esi, offset unk_B3FADC
0x754B98: fchs
0x754B9A: fstp    [esp+18h+arg_C]
0x754B9E: fld     [esp+18h+arg_C]
0x754BA2: fst     [esp+18h+var_C]
0x754BA6: mov     eax, [esp+18h+var_C]
0x754BAA: fst     [esp+18h+var_8]
0x754BAE: mov     ecx, [esp+18h+var_8]
0x754BB2: mov     [ebx+0A0h], eax
0x754BB8: fstp    [esp+18h+var_4]
0x754BBC: mov     edx, [esp+18h+var_4]
0x754BC0: mov     [ebx+6Ch], eax
0x754BC3: mov     [ebx+0A4h], ecx
0x754BC9: mov     [ebx+70h], ecx
0x754BCC: lea     eax, [ebx+7Ch]
0x754BCF: mov     [ebx+0A8h], edx
0x754BD5: mov     [ebx+74h], edx
0x754BD8: mov     edi, eax
0x754BDA: mov     ecx, 9
0x754BDF: rep movsd
0x754BE1: lea     edi, [ebx+48h]
0x754BE4: mov     esi, eax
0x754BE6: mov     ecx, 9
0x754BEB: rep movsd
0x754BED: fld     dword ptr ds:0A7DEB4h
0x754BF3: fchs
0x754BF5: fstp    [esp+18h+arg_C]
0x754BF9: fld     [esp+18h+arg_C]
0x754BFD: fst     dword ptr [ebx+0ACh]
0x754C03: fstp    dword ptr [ebx+78h]
0x754C06: pop     edi
0x754C07: pop     esi
0x754C08: mov     eax, ebx
0x754C0A: pop     ebx
0x754C0B: add     esp, 0Ch
0x754C0E: retn    18h
