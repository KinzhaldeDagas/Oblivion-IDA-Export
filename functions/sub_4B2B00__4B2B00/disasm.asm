0x4B2B00: push    ecx
0x4B2B01: push    ebx
0x4B2B02: mov     ebx, [esp+8+arg_0]
0x4B2B06: push    esi
0x4B2B07: push    edi
0x4B2B08: mov     edi, ecx
0x4B2B0A: push    ebx
0x4B2B0B: push    edi
0x4B2B0C: call    sub_4693E0
0x4B2B11: mov     esi, eax
0x4B2B13: add     esp, 8
0x4B2B16: test    esi, esi
0x4B2B18: jnz     short loc_4B2B25
0x4B2B1A: push    edi
0x4B2B1B: call    GetFormModelPAth
0x4B2B20: add     esp, 4
0x4B2B23: mov     esi, eax
0x4B2B25: mov     eax, [ebx]
0x4B2B27: mov     edx, [eax+0ECh]
0x4B2B2D: mov     ecx, ebx
0x4B2B2F: call    edx
0x4B2B31: fmul    qword ptr ds:0A309F0h
0x4B2B37: fstp    [esp+10h+var_4]
0x4B2B3B: fld     [esp+10h+var_4]
0x4B2B3F: fistp   [esp+10h+arg_0]
0x4B2B43: mov     eax, [esp+10h+arg_0]
0x4B2B47: mov     ecx, [esp+10h+arg_4]
0x4B2B4B: push    eax
0x4B2B4C: push    esi
0x4B2B4D: push    offset aSI; "%s%i"
0x4B2B52: push    ecx
0x4B2B53: call    __sprintf
0x4B2B58: add     esp, 10h
0x4B2B5B: pop     edi
0x4B2B5C: pop     esi
0x4B2B5D: pop     ebx
0x4B2B5E: pop     ecx
0x4B2B5F: retn    8
