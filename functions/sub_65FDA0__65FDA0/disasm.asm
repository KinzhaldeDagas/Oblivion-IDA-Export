0x65FDA0: push    0FFFFFFFFh
0x65FDA2: push    offset SEH_65FDA0
0x65FDA7: mov     eax, large fs:0
0x65FDAD: push    eax
0x65FDAE: sub     esp, 1Ch
0x65FDB1: push    ebx
0x65FDB2: push    esi
0x65FDB3: push    edi
0x65FDB4: mov     eax, ds:0B30AACh
0x65FDB9: xor     eax, esp
0x65FDBB: push    eax
0x65FDBC: lea     eax, [esp+38h+var_C]
0x65FDC0: mov     large fs:0, eax
0x65FDC6: fld     dword ptr ds:0A32048h
0x65FDCC: lea     edi, [ecx+704h]
0x65FDD2: xor     ebx, ebx
0x65FDD4: fstp    [esp+38h+var_28]
0x65FDD8: test    edi, edi
0x65FDDA: jz      loc_65FE9D
0x65FDE0: cmp     dword ptr [edi+4], 0
0x65FDE4: jnz     short loc_65FDEF
0x65FDE6: cmp     dword ptr [edi], 0
0x65FDE9: jz      loc_65FE9D
0x65FDEF: mov     esi, [edi]
0x65FDF1: mov     eax, [esi+8]
0x65FDF4: shr     eax, 0Bh
0x65FDF7: test    al, 1
0x65FDF9: jnz     loc_65FE92
0x65FDFF: push    esi
0x65FE00: call    sub_4FA560
0x65FE05: add     esp, 4
0x65FE08: test    al, al
0x65FE0A: jnz     loc_65FE92
0x65FE10: lea     ecx, [esp+38h+var_20]
0x65FE14: call    sub_68A9F0
0x65FE19: mov     ecx, esi; this
0x65FE1B: mov     [esp+38h+var_4], 0
0x65FE23: call    TESObjectREFR_GetWorldSpace
0x65FE28: push    eax
0x65FE29: mov     ecx, esi; this
0x65FE2B: call    TESObjectREFR_GetParentCell
0x65FE30: mov     edx, [esi]
0x65FE32: push    eax
0x65FE33: mov     eax, [edx+174h]
0x65FE39: mov     ecx, esi
0x65FE3B: call    eax
0x65FE3D: mov     ecx, ds:0B333C4h
0x65FE43: push    eax
0x65FE44: push    ecx
0x65FE45: lea     ecx, [esp+48h+var_20]
0x65FE49: call    sub_68B030
0x65FE4E: test    al, al
0x65FE50: jz      short loc_65FE81
0x65FE52: mov     edx, ds:0B333C4h
0x65FE58: push    edx
0x65FE59: lea     ecx, [esp+3Ch+var_20]
0x65FE5D: call    sub_68A760
0x65FE62: fstp    [esp+38h+var_24]
0x65FE66: fld     [esp+38h+var_24]
0x65FE6A: fld     [esp+38h+var_28]
0x65FE6E: fcomp   st(1)
0x65FE70: fnstsw  ax
0x65FE72: test    ah, 41h
0x65FE75: jnz     short loc_65FE7F
0x65FE77: fstp    [esp+38h+var_28]
0x65FE7B: mov     ebx, esi
0x65FE7D: jmp     short loc_65FE81
0x65FE7F: fstp    st
0x65FE81: lea     ecx, [esp+38h+var_20]
0x65FE85: mov     [esp+38h+var_4], 0FFFFFFFFh
0x65FE8D: call    sub_68AA10
0x65FE92: mov     edi, [edi+4]
0x65FE95: test    edi, edi
0x65FE97: jnz     loc_65FDE0
0x65FE9D: test    ebx, ebx
0x65FE9F: mov     ds:0B3BAD0h, ebx
0x65FEA5: jz      short loc_65FEF2
0x65FEA7: mov     ecx, ebx; this
0x65FEA9: call    GetTeleportExtraData
0x65FEAE: mov     ecx, eax
0x65FEB0: call    sub_42B410
0x65FEB5: test    eax, eax
0x65FEB7: jz      short loc_65FEF2
0x65FEB9: mov     ecx, eax; this
0x65FEBB: call    TESObjectREFR_GetParentCell
0x65FEC0: test    eax, eax
0x65FEC2: jz      short loc_65FEF2
0x65FEC4: mov     ecx, ds:0B33AACh
0x65FECA: push    1
0x65FECC: push    ecx
0x65FECD: mov     ecx, eax
0x65FECF: call    sub_4CBA80
0x65FED4: test    eax, eax
0x65FED6: mov     ds:0B3BAD4h, eax
0x65FEDB: jz      short loc_65FEF2
0x65FEDD: mov     al, 1
0x65FEDF: mov     ecx, [esp+38h+var_C]
0x65FEE3: mov     large fs:0, ecx
0x65FEEA: pop     ecx
0x65FEEB: pop     edi
0x65FEEC: pop     esi
0x65FEED: pop     ebx
0x65FEEE: add     esp, 28h
0x65FEF1: retn
0x65FEF2: xor     al, al
0x65FEF4: mov     ecx, [esp+38h+var_C]
0x65FEF8: mov     large fs:0, ecx
0x65FEFF: pop     ecx
0x65FF00: pop     edi
0x65FF01: pop     esi
0x65FF02: pop     ebx
0x65FF03: add     esp, 28h
0x65FF06: retn
