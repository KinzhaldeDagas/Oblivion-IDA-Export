0x6BF940: push    0FFFFFFFFh
0x6BF942: push    offset SEH_6C20D0
0x6BF947: mov     eax, large fs:0
0x6BF94D: push    eax
0x6BF94E: sub     esp, 18h
0x6BF951: push    ebx
0x6BF952: push    ebp
0x6BF953: push    esi
0x6BF954: push    edi
0x6BF955: mov     eax, ds:0B30AACh
0x6BF95A: xor     eax, esp
0x6BF95C: push    eax
0x6BF95D: lea     eax, [esp+38h+var_C]
0x6BF961: mov     large fs:0, eax
0x6BF967: mov     edi, [esp+38h+arg_8]
0x6BF96B: fld     [esp+38h+arg_0]
0x6BF96F: mov     eax, [esp+38h+arg_4]
0x6BF973: mov     edx, [edi]
0x6BF975: mov     ebp, [eax]
0x6BF977: push    14h; char
0x6BF979: lea     ecx, [esp+3Ch+var_24]
0x6BF97D: push    ecx; int
0x6BF97E: push    edx; int
0x6BF97F: push    ebp; int
0x6BF980: push    ecx
0x6BF981: fstp    [esp+4Ch+var_4C]; float
0x6BF984: call    sub_6D31B0
0x6BF989: add     esp, 14h
0x6BF98C: test    al, al
0x6BF98E: jz      loc_6BFACF
0x6BF994: mov     esi, [edi]
0x6BF996: add     esi, 1
0x6BF999: xor     ecx, ecx
0x6BF99B: mov     eax, esi
0x6BF99D: mov     edx, 14h
0x6BF9A2: mul     edx
0x6BF9A4: seto    cl
0x6BF9A7: neg     ecx
0x6BF9A9: or      ecx, eax
0x6BF9AB: xor     eax, eax
0x6BF9AD: add     ecx, 4
0x6BF9B0: setb    al
0x6BF9B3: neg     eax
0x6BF9B5: or      eax, ecx
0x6BF9B7: push    eax; Size
0x6BF9B8: call    FormHeapAlloc
0x6BF9BD: add     esp, 4
0x6BF9C0: mov     [esp+38h+var_20], eax
0x6BF9C4: test    eax, eax
0x6BF9C6: mov     [esp+38h+var_4], 0
0x6BF9CE: jz      short loc_6BF9EC
0x6BF9D0: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6BF9D5: push    offset sub_6C0AD0; a4
0x6BF9DA: push    esi; size
0x6BF9DB: lea     ebx, [eax+4]
0x6BF9DE: push    14h; a2
0x6BF9E0: push    ebx; a1
0x6BF9E1: mov     [eax], esi
0x6BF9E3: call    ArrayConstructor
0x6BF9E8: mov     esi, ebx
0x6BF9EA: jmp     short loc_6BF9EE
0x6BF9EC: xor     esi, esi
0x6BF9EE: mov     eax, [esp+38h+var_24]
0x6BF9F2: lea     ecx, [eax+eax*4]
0x6BF9F5: add     ecx, ecx
0x6BF9F7: add     ecx, ecx
0x6BF9F9: push    ecx; Size
0x6BF9FA: push    ebp; Src
0x6BF9FB: push    esi; Dst
0x6BF9FC: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6BFA04: call    _memcpy
0x6BFA09: mov     ecx, [edi]
0x6BFA0B: mov     edx, [esp+44h+var_24]
0x6BFA0F: add     esp, 0Ch
0x6BFA12: cmp     ecx, edx
0x6BFA14: jbe     short loc_6BFA38
0x6BFA16: sub     ecx, edx
0x6BFA18: lea     eax, [edx+edx*4]
0x6BFA1B: lea     edx, [ecx+ecx*4]
0x6BFA1E: add     edx, edx
0x6BFA20: add     eax, eax
0x6BFA22: add     eax, eax
0x6BFA24: add     edx, edx
0x6BFA26: push    edx; Size
0x6BFA27: lea     ecx, [eax+ebp]
0x6BFA2A: push    ecx; Src
0x6BFA2B: lea     edx, [eax+esi+14h]
0x6BFA2F: push    edx; Dst
0x6BFA30: call    _memcpy
0x6BFA35: add     esp, 0Ch
0x6BFA38: mov     eax, [edi]
0x6BFA3A: fld     [esp+38h+arg_0]
0x6BFA3E: push    14h; char
0x6BFA40: push    eax; int
0x6BFA41: push    1; int
0x6BFA43: push    ebp; int
0x6BFA44: push    ecx
0x6BFA45: lea     ecx, [esp+4Ch+var_1C]
0x6BFA49: fstp    [esp+4Ch+var_4C]; float
0x6BFA4C: push    ecx; int
0x6BFA4D: call    sub_6BD1F0
0x6BFA52: fld     [esp+50h+arg_0]
0x6BFA56: mov     eax, [esp+50h+var_24]
0x6BFA5A: lea     edx, [eax+eax*4]
0x6BFA5D: lea     eax, [esi+edx*4]
0x6BFA60: fstp    dword ptr [eax]
0x6BFA62: mov     ecx, [esp+50h+var_1C]
0x6BFA66: mov     [eax+4], ecx
0x6BFA69: mov     edx, [esp+50h+var_18]
0x6BFA6D: mov     [eax+8], edx
0x6BFA70: mov     ecx, [esp+50h+var_14]
0x6BFA74: mov     [eax+0Ch], ecx
0x6BFA77: mov     edx, [esp+50h+var_10]
0x6BFA7B: mov     [eax+10h], edx
0x6BFA7E: add     dword ptr [edi], 1
0x6BFA81: add     esp, 18h
0x6BFA84: test    ebp, ebp
0x6BFA86: jz      short loc_6BFAA5
0x6BFA88: mov     eax, [ebp-4]
0x6BFA8B: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6BFA90: lea     ebx, [ebp-4]
0x6BFA93: push    eax; int
0x6BFA94: push    14h; unsigned int
0x6BFA96: push    ebp; void *
0x6BFA97: call    $LN21
0x6BFA9C: push    ebx
0x6BFA9D: call    FormHeapFree
0x6BFAA2: add     esp, 4
0x6BFAA5: mov     ecx, [esp+38h+arg_4]
0x6BFAA9: mov     [ecx], esi
0x6BFAAB: mov     edx, [edi]
0x6BFAAD: push    14h
0x6BFAAF: push    edx
0x6BFAB0: push    esi
0x6BFAB1: call    sub_6BD310
0x6BFAB6: add     esp, 0Ch
0x6BFAB9: mov     al, 1
0x6BFABB: mov     ecx, [esp+38h+var_C]
0x6BFABF: mov     large fs:0, ecx
0x6BFAC6: pop     ecx
0x6BFAC7: pop     edi
0x6BFAC8: pop     esi
0x6BFAC9: pop     ebp
0x6BFACA: pop     ebx
0x6BFACB: add     esp, 24h
0x6BFACE: retn
0x6BFACF: xor     al, al
0x6BFAD1: mov     ecx, [esp+38h+var_C]
0x6BFAD5: mov     large fs:0, ecx
0x6BFADC: pop     ecx
0x6BFADD: pop     edi
0x6BFADE: pop     esi
0x6BFADF: pop     ebp
0x6BFAE0: pop     ebx
0x6BFAE1: add     esp, 24h
0x6BFAE4: retn
