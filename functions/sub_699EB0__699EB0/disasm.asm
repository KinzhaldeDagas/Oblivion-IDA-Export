0x699EB0: sub     esp, 0Ch
0x699EB3: push    ebx
0x699EB4: push    esi
0x699EB5: mov     esi, [esp+14h+arg_0]
0x699EB9: test    esi, esi
0x699EBB: push    edi
0x699EBC: mov     edi, ecx
0x699EBE: jz      loc_69A047
0x699EC4: mov     ebx, [esp+18h+arg_4]
0x699EC8: test    ebx, ebx
0x699ECA: jz      loc_69A047
0x699ED0: mov     eax, [esi]
0x699ED2: mov     edx, [eax+4]
0x699ED5: mov     ecx, esi
0x699ED7: call    edx
0x699ED9: test    eax, eax
0x699EDB: jz      loc_69A047
0x699EE1: mov     eax, [esi]
0x699EE3: mov     edx, [eax+4]
0x699EE6: mov     ecx, esi
0x699EE8: call    edx
0x699EEA: mov     edx, [eax]
0x699EEC: mov     ecx, eax
0x699EEE: mov     eax, [edx+190h]
0x699EF4: call    eax
0x699EF6: test    al, al
0x699EF8: jz      loc_69A047
0x699EFE: mov     edx, [esi]
0x699F00: mov     eax, [edx+4]
0x699F03: mov     ecx, esi
0x699F05: call    eax
0x699F07: mov     edx, [eax]
0x699F09: mov     ecx, eax
0x699F0B: mov     eax, [edx+154h]
0x699F11: call    eax
0x699F13: test    eax, eax
0x699F15: jz      loc_69A047
0x699F1B: lea     ecx, [ebx+0Ch]
0x699F1E: call    EffectItemList_HasHostile
0x699F23: test    al, al
0x699F25: jz      loc_69A047
0x699F2B: mov     ecx, edi; this
0x699F2D: call    MagicCaster_GetParentActor
0x699F32: mov     edx, [esi]
0x699F34: mov     [esp+18h+a3], eax
0x699F38: mov     eax, [edx+4]
0x699F3B: mov     ecx, esi
0x699F3D: call    eax
0x699F3F: mov     ebx, eax
0x699F41: mov     ecx, ebx; this
0x699F43: call    TESObjectREFR_GetHealth
0x699F48: fstp    [esp+18h+var_4]
0x699F4C: mov     edx, [esi]
0x699F4E: mov     eax, [edx+8]
0x699F51: mov     ecx, esi
0x699F53: call    eax
0x699F55: fldz
0x699F57: test    eax, eax
0x699F59: fst     [esp+18h+var_C]
0x699F5D: jz      loc_69A015
0x699F63: push    ebp
0x699F64: mov     ebp, [eax+4]
0x699F67: test    ebp, ebp
0x699F69: jnz     short loc_699F73
0x699F6B: cmp     [eax], ebp
0x699F6D: jz      loc_69A014
0x699F73: mov     edi, [eax]
0x699F75: test    edi, edi
0x699F77: jz      loc_69A00A
0x699F7D: mov     ecx, [esp+1Ch+arg_4]
0x699F81: cmp     [edi+8], ecx
0x699F84: jnz     loc_69A00A
0x699F8A: mov     eax, [edi+0Ch]
0x699F8D: mov     ecx, [eax+1Ch]
0x699F90: mov     esi, [ecx+58h]
0x699F93: mov     edx, esi
0x699F95: shr     edx, 18h
0x699F98: test    dl, 1
0x699F9B: jz      short loc_699FA2
0x699F9D: mov     eax, [ecx+60h]
0x699FA0: jmp     short loc_699FA5
0x699FA2: mov     eax, [eax+14h]
0x699FA5: cmp     eax, 8
0x699FA8: jnz     short loc_69A00A
0x699FAA: mov     eax, esi
0x699FAC: shr     eax, 2
0x699FAF: test    al, 1
0x699FB1: jz      short loc_69A00A
0x699FB3: mov     ecx, esi
0x699FB5: shr     ecx, 1
0x699FB7: test    cl, 1
0x699FBA: jnz     short loc_69A00A
0x699FBC: fld     dword ptr [edi+18h]
0x699FBF: fstp    [esp+1Ch+arg_0]
0x699FC3: fcom    dword ptr [edi+1Ch]
0x699FC6: fnstsw  ax
0x699FC8: test    ah, 5
0x699FCB: jp      short loc_699FFE
0x699FCD: fld     dword ptr [edi+1Ch]
0x699FD0: sub     esp, 8
0x699FD3: fstp    [esp+24h+a2]; float
0x699FD7: fstp    [esp+24h+var_24]; float
0x699FDA: call    Min_Float
0x699FDF: fstp    [esp+24h+a2]; float
0x699FE3: fld     dword ptr ds:0A46B10h
0x699FE9: fstp    [esp+24h+var_24]; float
0x699FEC: call    sub_4AC760
0x699FF1: fmul    [esp+24h+arg_0]
0x699FF5: add     esp, 8
0x699FF8: fstp    [esp+1Ch+arg_0]
0x699FFC: fldz
0x699FFE: fld     [esp+1Ch+arg_0]
0x69A002: fadd    [esp+1Ch+var_C]
0x69A006: fstp    [esp+1Ch+var_C]
0x69A00A: mov     eax, ebp
0x69A00C: test    eax, eax
0x69A00E: jnz     loc_699F64
0x69A014: pop     ebp
0x69A015: mov     edx, [esp+18h+a3]
0x69A019: fstp    st
0x69A01B: fld     [esp+18h+var_C]
0x69A01F: push    edx; a3
0x69A020: push    ecx
0x69A021: fchs
0x69A023: mov     ecx, ebx; this
0x69A025: fstp    [esp+20h+a2]; a2
0x69A028: call    Actor_AdjustDmgByDifficulty
0x69A02D: fchs
0x69A02F: fld     [esp+18h+var_4]
0x69A033: fcompp
0x69A035: fnstsw  ax
0x69A037: test    ah, 41h
0x69A03A: jp      short loc_69A047
0x69A03C: pop     edi
0x69A03D: pop     esi
0x69A03E: mov     al, 1
0x69A040: pop     ebx
0x69A041: add     esp, 0Ch
0x69A044: retn    8
0x69A047: pop     edi
0x69A048: pop     esi
0x69A049: xor     al, al
0x69A04B: pop     ebx
0x69A04C: add     esp, 0Ch
0x69A04F: retn    8
