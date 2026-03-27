0x64FBF0: sub     esp, 10h
0x64FBF3: push    ebx
0x64FBF4: push    ebp
0x64FBF5: push    esi
0x64FBF6: mov     esi, ecx
0x64FBF8: mov     eax, [esi]
0x64FBFA: mov     edx, [eax+184h]
0x64FC00: push    edi
0x64FC01: call    edx
0x64FC03: mov     edi, [esp+20h+arg_0]
0x64FC07: xor     ebx, ebx
0x64FC09: cmp     [esi+2Ch], ebx
0x64FC0C: mov     [esp+20h+var_10], eax
0x64FC10: jnz     short loc_64FC1F
0x64FC12: mov     eax, [esi]
0x64FC14: mov     edx, [eax+558h]
0x64FC1A: push    edi
0x64FC1B: mov     ecx, esi
0x64FC1D: call    edx
0x64FC1F: mov     eax, [esi+2Ch]
0x64FC22: cmp     eax, ebx
0x64FC24: jz      loc_64FF13
0x64FC2A: mov     eax, [eax+8]
0x64FC2D: mov     ecx, eax
0x64FC2F: shr     ecx, 5
0x64FC32: test    cl, 1
0x64FC35: jnz     loc_64FF13
0x64FC3B: shr     eax, 0Bh
0x64FC3E: test    al, 1
0x64FC40: jnz     loc_64FF13
0x64FC46: mov     eax, [esi+44h]
0x64FC49: cmp     eax, ebx
0x64FC4B: jz      loc_64FF22
0x64FC51: mov     ecx, [eax]
0x64FC53: mov     edx, [ecx]
0x64FC55: mov     ebp, eax
0x64FC57: mov     eax, [edx+170h]
0x64FC5D: call    eax
0x64FC5F: cmp     [ebp+4], eax
0x64FC62: jnz     short loc_64FC74
0x64FC64: mov     ecx, [ebp+0]
0x64FC67: mov     [esi+2Ch], ecx
0x64FC6A: pop     edi
0x64FC6B: pop     esi
0x64FC6C: pop     ebp
0x64FC6D: pop     ebx
0x64FC6E: add     esp, 10h
0x64FC71: retn    4
0x64FC74: mov     ecx, [esi+2Ch]; this
0x64FC77: call    GetTeleportExtraData
0x64FC7C: test    eax, eax
0x64FC7E: jz      loc_64FD43
0x64FC84: mov     edx, [edi]
0x64FC86: mov     eax, [edx+174h]
0x64FC8C: mov     ecx, edi
0x64FC8E: call    eax
0x64FC90: push    eax
0x64FC91: lea     ecx, [esp+24h+var_C]
0x64FC95: push    ecx
0x64FC96: mov     ecx, [esi+2Ch]
0x64FC99: call    sub_4D76F0
0x64FC9E: mov     ecx, eax
0x64FCA0: call    sub_4121A0
0x64FCA5: lea     ecx, [esp+20h+var_C]
0x64FCA9: call    sub_404C90
0x64FCAE: fcomp   dword ptr ds:0A2FFE8h
0x64FCB4: fnstsw  ax
0x64FCB6: test    ah, 41h
0x64FCB9: jp      loc_64FD54
0x64FCBF: cmp     [esi+0D0h], bl
0x64FCC5: jnz     short loc_64FCD4
0x64FCC7: mov     edx, [esi]
0x64FCC9: mov     eax, [edx+194h]
0x64FCCF: push    edi
0x64FCD0: mov     ecx, esi
0x64FCD2: call    eax
0x64FCD4: mov     ecx, esi
0x64FCD6: call    sub_64ADA0
0x64FCDB: test    al, al
0x64FCDD: jnz     loc_64FEED
0x64FCE3: mov     ecx, [esi+44h]
0x64FCE6: mov     ecx, [ecx]
0x64FCE8: mov     edx, [ecx]
0x64FCEA: mov     eax, [edx+190h]
0x64FCF0: xor     ebp, ebp
0x64FCF2: call    eax
0x64FCF4: test    al, al
0x64FCF6: mov     ecx, [esi+44h]
0x64FCF9: push    ebx; int
0x64FCFA: jnz     loc_64FE95
0x64FD00: mov     ecx, [ecx]; this
0x64FD02: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64FD07: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x64FD0C: push    ebx; int
0x64FD0D: call    TESObjectREFR_GetOwner
0x64FD12: push    eax; void *
0x64FD13: call    OblivionDynamicCast
0x64FD18: add     esp, 14h
0x64FD1B: cmp     eax, ebx
0x64FD1D: jz      short loc_64FD2C
0x64FD1F: push    eax
0x64FD20: mov     ecx, offset ActorProcessManager_ptr
0x64FD25: call    sub_675220
0x64FD2A: mov     ebp, eax
0x64FD2C: mov     eax, [esi+44h]
0x64FD2F: mov     edx, [eax+4]
0x64FD32: mov     ecx, [eax]
0x64FD34: push    1
0x64FD36: push    edx
0x64FD37: push    ebx
0x64FD38: push    edi
0x64FD39: call    ActivateRef
0x64FD3E: jmp     loc_64FEB3
0x64FD43: mov     ecx, [esi+8]
0x64FD46: push    edi
0x64FD47: call    sub_5687D0
0x64FD4C: test    al, al
0x64FD4E: jnz     loc_64FCBF
0x64FD54: mov     ecx, esi
0x64FD56: call    sub_64ADA0
0x64FD5B: test    al, al
0x64FD5D: jnz     loc_64FCBF
0x64FD63: cmp     [esi+0D0h], bl
0x64FD69: jz      short loc_64FDCA
0x64FD6B: mov     ecx, [esi+2Ch]; this
0x64FD6E: call    GetTeleportExtraData
0x64FD73: test    eax, eax
0x64FD75: mov     ebx, [esi]
0x64FD77: mov     ecx, [esi+2Ch]
0x64FD7A: jnz     short loc_64FD88
0x64FD7C: mov     edx, [ecx]
0x64FD7E: mov     eax, [edx+174h]
0x64FD84: call    eax
0x64FD86: jmp     short loc_64FD8D
0x64FD88: call    sub_4D76F0
0x64FD8D: mov     ecx, [esi+2Ch]; this
0x64FD90: mov     ebp, eax
0x64FD92: call    TESObjectREFR_GetWorldSpace
0x64FD97: mov     ecx, [esi+2Ch]; this
0x64FD9A: push    eax
0x64FD9B: call    TESObjectREFR_GetParentCell
0x64FDA0: mov     ecx, [ebp+0]
0x64FDA3: mov     edx, [ebp+4]
0x64FDA6: push    eax
0x64FDA7: sub     esp, 0Ch
0x64FDAA: mov     eax, esp
0x64FDAC: mov     [eax], ecx
0x64FDAE: mov     ecx, [ebp+8]
0x64FDB1: mov     [eax+4], edx
0x64FDB4: mov     edx, [ebx+3DCh]
0x64FDBA: mov     [eax+8], ecx
0x64FDBD: push    edi
0x64FDBE: mov     ecx, esi
0x64FDC0: call    edx
0x64FDC2: test    al, al
0x64FDC4: jz      loc_64FF22
0x64FDCA: cmp     byte ptr [esi+0D0h], 0
0x64FDD1: jnz     loc_64FF22
0x64FDD7: push    3Ah ; ':'; a1
0x64FDD9: call    TESForm_LookupByFormID
0x64FDDE: add     esp, 4
0x64FDE1: mov     ecx, offset TimeGlobals
0x64FDE6: mov     ebx, eax
0x64FDE8: call    TimeGlobals_GetGameHour
0x64FDED: fstp    [esp+20h+arg_0]
0x64FDF1: fld     [esp+20h+arg_0]
0x64FDF5: mov     ecx, edi; this
0x64FDF7: fstp    [esp+20h+var_C]
0x64FDFB: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64FE00: fcomp   [esp+20h+var_C]
0x64FE04: fnstsw  ax
0x64FE06: test    ah, 41h
0x64FE09: jnz     short loc_64FE19
0x64FE0B: fld     [esp+20h+arg_0]
0x64FE0F: fadd    qword ptr ds:0A2F920h
0x64FE15: fstp    [esp+20h+arg_0]
0x64FE19: fld     [esp+20h+arg_0]
0x64FE1D: mov     ecx, edi; this
0x64FE1F: fstp    [esp+20h+var_C]
0x64FE23: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64FE28: fsubr   [esp+20h+var_C]
0x64FE2C: mov     ecx, [esp+20h+var_10]
0x64FE30: push    2
0x64FE32: push    edi
0x64FE33: fstp    dword ptr [esp+28h+var_C]
0x64FE37: fld     dword ptr [ebx+24h]
0x64FE3A: mov     ebx, [esi]
0x64FE3C: fstp    [esp+28h+arg_0]
0x64FE40: call    sub_5677B0
0x64FE45: sub     esp, 8
0x64FE48: fstp    dword ptr [esp+28h+var_28+4]
0x64FE4C: mov     ecx, [esi+2Ch]; this
0x64FE4F: fld     [esp+28h+arg_0]
0x64FE53: fdivr   qword ptr ds:0A2F938h
0x64FE59: fmul    dword ptr [esp+28h+var_C]
0x64FE5D: fstp    [esp+28h+arg_0]
0x64FE61: fld     [esp+28h+arg_0]
0x64FE65: fstp    dword ptr [esp+28h+var_28]
0x64FE68: call    TESObjectREFR_GetWorldSpace
0x64FE6D: mov     ecx, [esi+2Ch]; this
0x64FE70: push    eax
0x64FE71: call    TESObjectREFR_GetParentCell
0x64FE76: mov     ecx, [esi+2Ch]
0x64FE79: push    eax
0x64FE7A: call    sub_4D76F0
0x64FE7F: push    eax
0x64FE80: mov     eax, [ebx+418h]
0x64FE86: push    edi
0x64FE87: mov     ecx, esi
0x64FE89: call    eax
0x64FE8B: pop     edi
0x64FE8C: pop     esi
0x64FE8D: pop     ebp
0x64FE8E: pop     ebx
0x64FE8F: add     esp, 10h
0x64FE92: retn    4
0x64FE95: mov     ebp, [esi+2Ch]
0x64FE98: mov     edx, [ecx+4]
0x64FE9B: mov     eax, [ebp+0]
0x64FE9E: mov     eax, [eax+100h]
0x64FEA4: push    1
0x64FEA6: push    ebx
0x64FEA7: push    ebx
0x64FEA8: push    edi
0x64FEA9: push    ebx
0x64FEAA: push    ebx
0x64FEAB: push    1
0x64FEAD: push    ebx
0x64FEAE: push    edx
0x64FEAF: mov     ecx, ebp
0x64FEB1: call    eax
0x64FEB3: cmp     ebp, ebx
0x64FEB5: jz      short loc_64FED8
0x64FEB7: mov     ecx, [esi+44h]
0x64FEBA: mov     edx, [ecx+4]
0x64FEBD: push    edx
0x64FEBE: call    sub_470520
0x64FEC3: mov     ecx, [esi+44h]
0x64FEC6: mov     edx, [ecx+10h]
0x64FEC9: imul    edx, eax
0x64FECC: add     esp, 4
0x64FECF: push    edx
0x64FED0: push    edi
0x64FED1: mov     ecx, edi
0x64FED3: call    sub_5E4A40
0x64FED8: mov     eax, [esi+44h]
0x64FEDB: mov     ecx, [eax+18h]
0x64FEDE: push    4000h
0x64FEE3: push    ecx
0x64FEE4: push    ebp
0x64FEE5: call    Script_AddEventToExtraScript
0x64FEEA: add     esp, 0Ch
0x64FEED: mov     eax, [esi+44h]
0x64FEF0: cmp     eax, ebx
0x64FEF2: jz      short loc_64FEFD
0x64FEF4: push    eax
0x64FEF5: call    FormHeapFree
0x64FEFA: add     esp, 4
0x64FEFD: mov     [esi+2Ch], ebx
0x64FF00: mov     [esi+44h], ebx
0x64FF03: mov     [esi+0D0h], bl
0x64FF09: pop     edi
0x64FF0A: pop     esi
0x64FF0B: pop     ebp
0x64FF0C: pop     ebx
0x64FF0D: add     esp, 10h
0x64FF10: retn    4
0x64FF13: mov     edx, [esi]
0x64FF15: mov     eax, [edx+188h]
0x64FF1B: push    1
0x64FF1D: push    edi
0x64FF1E: mov     ecx, esi
0x64FF20: call    eax
0x64FF22: pop     edi
0x64FF23: pop     esi
0x64FF24: pop     ebp
0x64FF25: pop     ebx
0x64FF26: add     esp, 10h
0x64FF29: retn    4
