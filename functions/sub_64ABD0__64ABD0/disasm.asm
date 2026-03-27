0x64ABD0: push    ebx
0x64ABD1: push    esi
0x64ABD2: push    edi; float
0x64ABD3: mov     edi, [esp+0Ch+arg_0]
0x64ABD7: mov     eax, [edi]
0x64ABD9: mov     edx, [eax+380h]
0x64ABDF: mov     ebx, ecx
0x64ABE1: mov     ecx, edi
0x64ABE3: call    edx
0x64ABE5: mov     esi, eax
0x64ABE7: test    esi, esi
0x64ABE9: jnz     short loc_64ABF3
0x64ABEB: pop     edi
0x64ABEC: pop     esi
0x64ABED: xor     al, al
0x64ABEF: pop     ebx
0x64ABF0: retn    4
0x64ABF3: mov     eax, [edi]
0x64ABF5: mov     edx, [eax+384h]
0x64ABFB: push    0
0x64ABFD: mov     ecx, edi
0x64ABFF: call    edx
0x64AC01: mov     eax, [esi]
0x64AC03: mov     edx, [eax+38Ch]
0x64AC09: push    0
0x64AC0B: mov     ecx, esi
0x64AC0D: call    edx
0x64AC0F: fld     dword ptr [esi+28h]
0x64AC12: mov     eax, [esi]
0x64AC14: mov     edx, [eax+174h]
0x64AC1A: push    ecx
0x64AC1B: mov     ecx, esi
0x64AC1D: fstp    [esp+10h+var_10]
0x64AC20: call    edx
0x64AC22: push    eax; int
0x64AC23: mov     ecx, esi; this
0x64AC25: call    TESObjectREFR_GetParentCell
0x64AC2A: push    eax; int
0x64AC2B: mov     ecx, esi; this
0x64AC2D: call    TESObjectREFR_GetWorldSpace
0x64AC32: push    eax; int
0x64AC33: mov     ecx, esi
0x64AC35: call    sub_4D7A20
0x64AC3A: mov     eax, [ebx]
0x64AC3C: mov     edx, [eax+188h]
0x64AC42: push    1
0x64AC44: push    edi
0x64AC45: mov     ecx, ebx
0x64AC47: call    edx
0x64AC49: pop     edi
0x64AC4A: pop     esi
0x64AC4B: mov     al, 1
0x64AC4D: pop     ebx
0x64AC4E: retn    4
