0x68AE80: sub     esp, 8
0x68AE83: push    esi
0x68AE84: mov     esi, [esp+0Ch+arg_0]
0x68AE88: test    esi, esi
0x68AE8A: push    edi
0x68AE8B: mov     edi, ecx
0x68AE8D: jz      loc_68AF9B
0x68AE93: mov     ecx, esi
0x68AE95: call    IsWeaponReady
0x68AE9A: test    al, al
0x68AE9C: jz      loc_68AF9B
0x68AEA2: push    ebx
0x68AEA3: push    3Ah ; ':'; a1
0x68AEA5: call    TESForm_LookupByFormID
0x68AEAA: add     esp, 4
0x68AEAD: mov     ecx, offset TimeGlobals
0x68AEB2: mov     ebx, eax
0x68AEB4: call    TimeGlobals_GetGameHour
0x68AEB9: fstp    [esp+14h+arg_0]
0x68AEBD: fld     [esp+14h+arg_0]
0x68AEC1: mov     ecx, esi; this
0x68AEC3: fstp    [esp+14h+var_8]
0x68AEC7: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x68AECC: fcomp   [esp+14h+var_8]
0x68AED0: fnstsw  ax
0x68AED2: test    ah, 41h
0x68AED5: jnz     short loc_68AEE5
0x68AED7: fld     [esp+14h+arg_0]
0x68AEDB: fadd    qword ptr ds:0A2F920h
0x68AEE1: fstp    [esp+14h+arg_0]
0x68AEE5: fld     [esp+14h+arg_0]
0x68AEE9: mov     ecx, esi; this
0x68AEEB: fstp    [esp+14h+var_8]
0x68AEEF: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x68AEF4: fsubr   [esp+14h+var_8]
0x68AEF8: fstp    [esp+14h+arg_0]
0x68AEFC: fld     dword ptr [ebx+24h]
0x68AEFF: mov     bl, 1
0x68AF01: fdivr   qword ptr ds:0A2F938h
0x68AF07: fmul    [esp+14h+arg_0]
0x68AF0B: fstp    [esp+14h+arg_0]
0x68AF0F: fldz
0x68AF11: fld     [esp+14h+arg_0]
0x68AF15: fcom    st(1)
0x68AF17: fnstsw  ax
0x68AF19: fstp    st(1)
0x68AF1B: test    ah, 41h
0x68AF1E: jnz     short loc_68AF98
0x68AF20: test    bl, bl
0x68AF22: jz      short loc_68AF98
0x68AF24: mov     eax, [edi]
0x68AF26: mov     edx, [eax+1Ch]
0x68AF29: push    ecx
0x68AF2A: fstp    [esp+18h+var_18]
0x68AF2D: push    esi
0x68AF2E: mov     ecx, edi
0x68AF30: call    edx
0x68AF32: fstp    [esp+14h+arg_0]
0x68AF36: mov     eax, [esi]
0x68AF38: mov     edx, [eax+84h]
0x68AF3E: mov     ecx, esi
0x68AF40: call    edx
0x68AF42: test    al, al
0x68AF44: jnz     short loc_68AF91
0x68AF46: fldz
0x68AF48: fcomp   [esp+14h+arg_0]
0x68AF4C: fnstsw  ax
0x68AF4E: test    ah, 5
0x68AF51: jp      short loc_68AF9A
0x68AF53: push    esi
0x68AF54: mov     ecx, edi
0x68AF56: call    sub_68ABA0
0x68AF5B: test    al, al
0x68AF5D: jz      short loc_68AF9A
0x68AF5F: mov     eax, [esi]
0x68AF61: mov     edx, [eax+84h]
0x68AF67: mov     ecx, esi
0x68AF69: call    edx
0x68AF6B: test    al, al
0x68AF6D: jnz     short loc_68AF91
0x68AF6F: mov     ecx, edi
0x68AF71: call    sub_6899E0
0x68AF76: test    al, al
0x68AF78: jz      short loc_68AF0F
0x68AF7A: mov     eax, [esi]
0x68AF7C: mov     edx, [eax+180h]
0x68AF82: push    1
0x68AF84: mov     ecx, esi
0x68AF86: call    edx
0x68AF88: pop     ebx
0x68AF89: pop     edi
0x68AF8A: pop     esi
0x68AF8B: add     esp, 8
0x68AF8E: retn    4
0x68AF91: xor     bl, bl
0x68AF93: jmp     loc_68AF0F
0x68AF98: fstp    st
0x68AF9A: pop     ebx
0x68AF9B: pop     edi
0x68AF9C: pop     esi
0x68AF9D: add     esp, 8
0x68AFA0: retn    4
