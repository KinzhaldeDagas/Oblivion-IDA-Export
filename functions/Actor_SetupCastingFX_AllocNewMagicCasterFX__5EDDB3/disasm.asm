0x5EDDB3: push    1Ch; Size
0x5EDDB5: mov     dword ptr [ebx+60h], 0
0x5EDDBC: call    FormHeapAlloc
0x5EDDC1: add     esp, 4
0x5EDDC4: mov     [esp+arg_24], eax
0x5EDDC8: test    eax, eax
0x5EDDCA: mov     [esp+arg_1C], 0
0x5EDDD2: jz      short loc_5EDDE5
0x5EDDD4: mov     edi, [edi+70h]
0x5EDDD7: mov     edi, [edi+0Ch]
0x5EDDDA: push    esi
0x5EDDDB: push    edi
0x5EDDDC: mov     ecx, eax
0x5EDDDE: call    MagicCaster_CastingVFX_constr
0x5EDDE3: jmp     short loc_5EDDE7
0x5EDDE5: xor     eax, eax
0x5EDDE7: mov     ebp, [esp+arg_10]
0x5EDDEB: mov     [esp+arg_1C], 0FFFFFFFFh
0x5EDDF3: mov     [ebx+60h], eax
0x5EDDF6: mov     eax, [ebp+0Ch]
0x5EDDF9: push    eax
0x5EDDFA: push    offset stru_B3CAC0
0x5EDDFF: call    NiRTTI_Cast
0x5EDE04: mov     esi, eax
0x5EDE06: add     esp, 8
0x5EDE09: test    esi, esi
0x5EDE0B: jz      short loc_5EDE2B
0x5EDE0D: lea     eax, [esp+arg_24]
0x5EDE11: push    eax
0x5EDE12: push    offset aSpecialidle_ca; "SpecialIdle_Cast"
0x5EDE17: lea     ecx, [esi+58h]
0x5EDE1A: call    NiTMap_GetAt
0x5EDE1F: neg     al
0x5EDE21: sbb     eax, eax
0x5EDE23: and     eax, [esp+arg_24]
0x5EDE27: mov     edi, eax
0x5EDE29: jmp     short loc_5EDE2D
0x5EDE2B: xor     edi, edi
0x5EDE2D: test    edi, edi
0x5EDE2F: jz      short loc_5EDE8E
0x5EDE31: fldz
0x5EDE33: push    ecx
0x5EDE34: mov     ecx, esi
0x5EDE36: fstp    [esp+4+var_4]; float
0x5EDE39: call    sub_4715C0
0x5EDE3E: fldz
0x5EDE40: push    0; int
0x5EDE42: push    0; int
0x5EDE44: sub     esp, 8
0x5EDE47: fstp    [esp+10h+var_C]; float
0x5EDE4B: mov     ecx, edi
0x5EDE4D: fld1
0x5EDE4F: fstp    [esp+10h+var_10]; float
0x5EDE52: push    0; char
0x5EDE54: push    0; int
0x5EDE56: call    sub_6C9BA0
0x5EDE5B: or      word ptr [esi+8], 8
0x5EDE60: fld     dword ptr ds:0A7DEB4h
0x5EDE66: fchs
0x5EDE68: fstp    dword ptr [edi+48h]
0x5EDE6B: mov     ecx, [ebx+60h]
0x5EDE6E: test    ecx, ecx
0x5EDE70: jz      short loc_5EDE8E
0x5EDE72: fld     dword ptr [edi+30h]
0x5EDE75: push    ecx
0x5EDE76: fmul    qword ptr ds:0A31C70h
0x5EDE7C: fstp    [esp+4+arg_24]
0x5EDE80: fld     [esp+4+arg_24]
0x5EDE84: fstp    [esp+4+var_4]; float
0x5EDE87: push    1; char
0x5EDE89: call    MagicCaster_CastingVFX_ClearSomething???
0x5EDE8E: mov     ecx, [ebx+60h]
0x5EDE91: test    ecx, ecx
0x5EDE93: jz      short loc_5EDEA0
0x5EDE95: fldz
0x5EDE97: push    ecx
0x5EDE98: fstp    [esp+4+var_4]; float
0x5EDE9B: call    MagicCaster_CastingVFX_UpdateTimes?
0x5EDEA0: mov     ecx, [esp+arg_14]
0x5EDEA4: mov     large fs:0, ecx
0x5EDEAB: pop     ecx
0x5EDEAC: pop     edi
0x5EDEAD: pop     esi
0x5EDEAE: pop     ebp
0x5EDEAF: pop     ebx
0x5EDEB0: add     esp, 10h
0x5EDEB3: retn    4
