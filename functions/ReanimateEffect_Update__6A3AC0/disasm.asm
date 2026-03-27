0x6A3AC0: push    ebp
0x6A3AC1: mov     ebp, esp
0x6A3AC3: and     esp, 0FFFFFFF0h
0x6A3AC6: sub     esp, 0D4h
0x6A3ACC: mov     eax, ds:0B30AACh
0x6A3AD1: xor     eax, esp
0x6A3AD3: mov     [esp+0D4h+var_4], eax
0x6A3ADA: push    ebx
0x6A3ADB: push    esi
0x6A3ADC: mov     esi, ecx
0x6A3ADE: mov     ecx, [esi+20h]; this
0x6A3AE1: test    ecx, ecx
0x6A3AE3: push    edi
0x6A3AE4: jz      short loc_6A3AEF
0x6A3AE6: call    MagicTarget_GetParentActor
0x6A3AEB: mov     edi, eax
0x6A3AED: jmp     short loc_6A3AF1
0x6A3AEF: xor     edi, edi
0x6A3AF1: mov     ecx, [esi+24h]; this
0x6A3AF4: test    ecx, ecx
0x6A3AF6: jz      short loc_6A3B07
0x6A3AF8: call    MagicCaster_GetParentActor
0x6A3AFD: mov     ebx, eax
0x6A3AFF: test    ebx, ebx
0x6A3B01: mov     [esp+0E0h+var_C8], ebx
0x6A3B05: jnz     short loc_6A3B27
0x6A3B07: push    1
0x6A3B09: mov     ecx, esi
0x6A3B0B: call    ActiveEffect_Base_Remove
0x6A3B10: pop     edi
0x6A3B11: pop     esi
0x6A3B12: pop     ebx
0x6A3B13: mov     ecx, [esp+0D4h+var_4]
0x6A3B1A: xor     ecx, esp
0x6A3B1C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A3B21: mov     esp, ebp
0x6A3B23: pop     ebp
0x6A3B24: retn    4
0x6A3B27: cmp     dword ptr [esi+38h], 0
0x6A3B2B: jz      loc_6A3F1C
0x6A3B31: test    edi, edi
0x6A3B33: jz      loc_6A3F1C
0x6A3B39: mov     eax, [edi]
0x6A3B3B: mov     edx, [eax+198h]
0x6A3B41: push    0
0x6A3B43: mov     ecx, edi
0x6A3B45: call    edx
0x6A3B47: test    al, al
0x6A3B49: jz      short loc_6A3B6B
0x6A3B4B: push    0
0x6A3B4D: mov     ecx, esi
0x6A3B4F: call    ActiveEffect_Base_Remove
0x6A3B54: pop     edi
0x6A3B55: pop     esi
0x6A3B56: pop     ebx
0x6A3B57: mov     ecx, [esp+0D4h+var_4]
0x6A3B5E: xor     ecx, esp
0x6A3B60: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A3B65: mov     esp, ebp
0x6A3B67: pop     ebp
0x6A3B68: retn    4
0x6A3B6B: cmp     dword ptr [esi+3Ch], 0
0x6A3B6F: jnz     short loc_6A3B7D
0x6A3B71: fldz
0x6A3B73: mov     dword ptr [esi+3Ch], 0Ah
0x6A3B7A: fstp    dword ptr [esi+40h]
0x6A3B7D: mov     eax, [esi+3Ch]
0x6A3B80: cmp     eax, 0Ah
0x6A3B83: jnz     loc_6A3D6E
0x6A3B89: mov     ebx, [edi+58h]
0x6A3B8C: mov     eax, [ebx]
0x6A3B8E: mov     edx, [eax+8]
0x6A3B91: mov     ecx, ebx
0x6A3B93: call    edx
0x6A3B95: test    eax, eax
0x6A3B97: jnz     short loc_6A3BA0
0x6A3B99: mov     byte ptr [ebx+2A9h], 1
0x6A3BA0: fld     dword ptr [esi+4]
0x6A3BA3: fsub    dword ptr [esi+40h]
0x6A3BA6: fld     qword ptr ds:0A3F3F0h
0x6A3BAC: fcomp   st(1)
0x6A3BAE: fnstsw  ax
0x6A3BB0: test    ah, 5
0x6A3BB3: jp      short loc_6A3BBC
0x6A3BB5: mov     dword ptr [esi+3Ch], 14h
0x6A3BBC: fmul    qword ptr ds:0A3C770h
0x6A3BC2: sub     esp, 8
0x6A3BC5: fstp    [esp+0E8h+var_CC]
0x6A3BC9: fld     [esp+0E8h+var_CC]
0x6A3BCD: fstp    [esp+0E8h+var_E4]; float
0x6A3BD1: fld1
0x6A3BD3: fstp    [esp+0E8h+var_E8]; float
0x6A3BD6: call    sub_4AC760
0x6A3BDB: fstp    [esp+0E8h+var_CC]
0x6A3BDF: lea     ebx, [esi+44h]
0x6A3BE2: lea     eax, [esp+0E8h+var_A4+4]
0x6A3BE6: push    ebx
0x6A3BE7: push    eax
0x6A3BE8: call    sub_4529E0
0x6A3BED: lea     ecx, [esp+0F0h+var_94+4]
0x6A3BF1: push    ebx
0x6A3BF2: push    ecx
0x6A3BF3: call    sub_4529E0
0x6A3BF8: fld     dword ptr [esp+0F8h+var_A4+0Ch]
0x6A3BFC: movss   xmm1, [esp+0F8h+var_CC]
0x6A3C02: fadd    qword ptr ds:0A76A60h
0x6A3C08: movaps  xmm2, xmmword ptr [esp+0F8h+var_94+4]
0x6A3C0D: mov     ecx, [esi+38h]
0x6A3C10: xorps   xmm0, xmm0
0x6A3C13: fstp    dword ptr [esp+0F8h+var_A4+0Ch]
0x6A3C17: movss   xmm0, xmm1
0x6A3C1B: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x6A3C22: shufps  xmm0, xmm0, 0
0x6A3C26: subps   xmm1, xmm0
0x6A3C29: mulps   xmm1, xmm2
0x6A3C2C: movaps  xmm2, [esp+0F8h+var_A4+4]
0x6A3C31: add     esp, 18h
0x6A3C34: lea     edx, [esp+0E0h+var_A4+4]
0x6A3C38: mulps   xmm2, xmm0
0x6A3C3B: addps   xmm1, xmm2
0x6A3C3E: push    edx
0x6A3C3F: movaps  xmmword ptr [esp+0E4h+var_74+4], xmm1
0x6A3C44: call    sub_4D6900
0x6A3C49: mov     ecx, [esp+0E0h+var_C8]
0x6A3C4D: mov     eax, [ecx]
0x6A3C4F: mov     edx, [eax+174h]
0x6A3C55: call    edx
0x6A3C57: fld     dword ptr [eax]
0x6A3C59: fsub    dword ptr [esp+0E0h+var_A4+4]
0x6A3C5D: sub     esp, 8
0x6A3C60: fstp    [esp+0E8h+var_94+4]
0x6A3C64: fld     dword ptr [eax+4]
0x6A3C67: fsub    dword ptr [esp+0E8h+var_A4+8]
0x6A3C6B: fstp    [esp+0E8h+var_94+8]
0x6A3C6F: fld     dword ptr ds:0B3F99Ch
0x6A3C75: fstp    [esp+0E8h+var_E4]; float
0x6A3C79: fld     dword ptr ds:0A3D65Ch
0x6A3C7F: fstp    [esp+0E8h+var_E8]; float
0x6A3C82: fld     [esp+0E8h+var_94+8]
0x6A3C86: fld     [esp+0E8h+var_94+4]
0x6A3C8A: call    sub_98598A
0x6A3C8F: fstp    [esp+0E8h+var_C8]
0x6A3C93: fld     [esp+0E8h+var_C8]
0x6A3C97: push    ecx
0x6A3C98: fchs
0x6A3C9A: lea     ecx, [esp+0ECh+var_C4]
0x6A3C9E: fstp    [esp+0ECh+var_EC]; float
0x6A3CA1: call    sub_7118E0
0x6A3CA6: lea     eax, [esp+0E0h+var_C4]
0x6A3CAA: push    eax
0x6A3CAB: lea     ecx, [esp+0E4h+var_40]
0x6A3CB2: push    ecx
0x6A3CB3: call    sub_539850
0x6A3CB8: fld     dword ptr [esi+54h]
0x6A3CBB: fstp    [esp+0E8h+var_80]
0x6A3CBF: add     esp, 8
0x6A3CC2: fld     dword ptr [esi+58h]
0x6A3CC5: lea     edx, [esp+0E0h+var_40]
0x6A3CCC: fstp    [esp+0E0h+var_7C]
0x6A3CD0: push    edx
0x6A3CD1: fld     dword ptr [esi+5Ch]
0x6A3CD4: lea     ecx, [esp+0E4h+var_60]
0x6A3CDB: fstp    [esp+0E4h+var_78]
0x6A3CDF: fld     dword ptr [esi+50h]
0x6A3CE2: fstp    dword ptr [esp+0E4h+var_74]
0x6A3CE6: call    sub_8B1B40
0x6A3CEB: fld     [esp+0E0h+var_CC]
0x6A3CEF: push    ecx
0x6A3CF0: fstp    [esp+0E4h+var_E4]; float
0x6A3CF3: lea     eax, [esp+0E4h+var_60]
0x6A3CFA: push    eax; int
0x6A3CFB: lea     ecx, [esp+0E8h+var_80]
0x6A3CFF: push    ecx; int
0x6A3D00: lea     ecx, [esp+0ECh+var_50]
0x6A3D07: call    sub_8B1C60
0x6A3D0C: fld1
0x6A3D0E: sub     esp, 8
0x6A3D11: fstp    [esp+0E8h+var_E4]
0x6A3D15: fld     [ebp+arg_0]
0x6A3D18: mov     ecx, [esi+38h]
0x6A3D1B: fld1
0x6A3D1D: lea     edx, [esp+0E8h+var_50]
0x6A3D24: fdivrp  st(1), st
0x6A3D26: lea     eax, [esp+0E8h+var_74+4]
0x6A3D2A: fstp    [esp+0E8h+var_C8]
0x6A3D2E: fld     [esp+0E8h+var_C8]
0x6A3D32: fstp    [esp+0E8h+var_E8]
0x6A3D35: push    edx
0x6A3D36: push    eax
0x6A3D37: call    sub_8A34C0
0x6A3D3C: mov     esi, [esi+24h]
0x6A3D3F: mov     edx, [esi]
0x6A3D41: mov     ebx, [edi]
0x6A3D43: mov     eax, [edx+20h]
0x6A3D46: mov     ecx, esi
0x6A3D48: add     ebx, 1E4h
0x6A3D4E: call    eax
0x6A3D50: mov     edx, [ebx]
0x6A3D52: push    eax
0x6A3D53: mov     ecx, edi
0x6A3D55: call    edx
0x6A3D57: pop     edi
0x6A3D58: pop     esi
0x6A3D59: pop     ebx
0x6A3D5A: mov     ecx, [esp+0D4h+var_4]
0x6A3D61: xor     ecx, esp
0x6A3D63: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A3D68: mov     esp, ebp
0x6A3D6A: pop     ebp
0x6A3D6B: retn    4
0x6A3D6E: cmp     eax, 14h
0x6A3D71: jnz     loc_6A3E13
0x6A3D77: mov     eax, [edi]
0x6A3D79: mov     edx, [eax+164h]
0x6A3D7F: mov     ecx, edi
0x6A3D81: call    edx
0x6A3D83: mov     [esp+0E0h+var_CC], eax
0x6A3D87: mov     eax, [edi]
0x6A3D89: mov     edx, [eax+154h]
0x6A3D8F: mov     ecx, edi
0x6A3D91: call    edx
0x6A3D93: mov     ebx, eax
0x6A3D95: test    ebx, ebx
0x6A3D97: jz      loc_6A3F1C
0x6A3D9D: cmp     [esp+0E0h+var_CC], 0
0x6A3DA2: jz      loc_6A3F1C
0x6A3DA8: push    1
0x6A3DAA: mov     ecx, edi
0x6A3DAC: mov     dword ptr [esi+3Ch], 1Eh
0x6A3DB3: call    sub_5E13D0
0x6A3DB8: mov     ecx, [esp+0E0h+var_CC]
0x6A3DBC: push    0FFFFFFFFh
0x6A3DBE: push    0
0x6A3DC0: push    0
0x6A3DC2: call    ActorAnimData_PlayAnimGroup
0x6A3DC7: fldz
0x6A3DC9: push    ecx
0x6A3DCA: fstp    [esp+0E4h+var_E4]; float
0x6A3DCD: push    ebx; int
0x6A3DCE: call    sub_8AB8A0
0x6A3DD3: mov     ebx, [edi+58h]
0x6A3DD6: mov     eax, [ebx]
0x6A3DD8: mov     edx, [eax+8]
0x6A3DDB: add     esp, 8
0x6A3DDE: mov     ecx, ebx
0x6A3DE0: call    edx
0x6A3DE2: test    eax, eax
0x6A3DE4: jnz     short loc_6A3DEC
0x6A3DE6: mov     [ebx+2A9h], al
0x6A3DEC: push    0
0x6A3DEE: lea     ecx, [edi+44h]
0x6A3DF1: call    sub_424870
0x6A3DF6: fld     dword ptr [esi+4]
0x6A3DF9: fstp    dword ptr [esi+40h]
0x6A3DFC: pop     edi
0x6A3DFD: pop     esi
0x6A3DFE: pop     ebx
0x6A3DFF: mov     ecx, [esp+0D4h+var_4]
0x6A3E06: xor     ecx, esp
0x6A3E08: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A3E0D: mov     esp, ebp
0x6A3E0F: pop     ebp
0x6A3E10: retn    4
0x6A3E13: cmp     eax, 1Eh
0x6A3E16: jnz     loc_6A3EC6
0x6A3E1C: fld     dword ptr [esi+4]
0x6A3E1F: fsub    dword ptr [esi+40h]
0x6A3E22: fcomp   qword ptr ds:0A3D0C0h
0x6A3E28: fnstsw  ax
0x6A3E2A: test    ah, 41h
0x6A3E2D: jnz     loc_6A3F1C
0x6A3E33: fld     dword ptr [esi+4]
0x6A3E36: mov     dword ptr [esi+3Ch], 28h ; '('
0x6A3E3D: fstp    dword ptr [esi+40h]
0x6A3E40: mov     eax, [edi]
0x6A3E42: mov     edx, [eax+154h]
0x6A3E48: mov     ecx, edi
0x6A3E4A: call    edx
0x6A3E4C: test    eax, eax
0x6A3E4E: jz      short loc_6A3E5F
0x6A3E50: push    0; a4
0x6A3E52: push    1; a3
0x6A3E54: push    6; a2
0x6A3E56: push    eax; a1
0x6A3E57: call    sub_88D070
0x6A3E5C: add     esp, 10h
0x6A3E5F: mov     eax, [edi]
0x6A3E61: mov     edx, [eax+170h]
0x6A3E67: push    0; int
0x6A3E69: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x6A3E6E: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6A3E73: push    0; int
0x6A3E75: mov     ecx, edi
0x6A3E77: call    edx
0x6A3E79: push    eax; void *
0x6A3E7A: call    OblivionDynamicCast
0x6A3E7F: add     esp, 14h
0x6A3E82: test    eax, eax
0x6A3E84: jz      short loc_6A3E94
0x6A3E86: mov     ecx, ds:0B362BCh
0x6A3E8C: push    ecx
0x6A3E8D: mov     ecx, eax
0x6A3E8F: call    sub_5263B0
0x6A3E94: mov     ecx, edi
0x6A3E96: call    sub_5E12B0
0x6A3E9B: test    eax, eax
0x6A3E9D: jz      short loc_6A3F1C
0x6A3E9F: mov     edx, [eax]
0x6A3EA1: push    0
0x6A3EA3: mov     ecx, eax
0x6A3EA5: mov     eax, [edx+9Ch]
0x6A3EAB: push    0
0x6A3EAD: call    eax
0x6A3EAF: pop     edi
0x6A3EB0: pop     esi
0x6A3EB1: pop     ebx
0x6A3EB2: mov     ecx, [esp+0D4h+var_4]
0x6A3EB9: xor     ecx, esp
0x6A3EBB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A3EC0: mov     esp, ebp
0x6A3EC2: pop     ebp
0x6A3EC3: retn    4
0x6A3EC6: cmp     eax, 28h ; '('
0x6A3EC9: jnz     short loc_6A3F00
0x6A3ECB: fld     dword ptr [esi+4]
0x6A3ECE: fsub    dword ptr [esi+40h]
0x6A3ED1: fcomp   qword ptr ds:0A2F928h
0x6A3ED7: fnstsw  ax
0x6A3ED9: test    ah, 41h
0x6A3EDC: jnz     short loc_6A3F1C
0x6A3EDE: push    4; newDeadState
0x6A3EE0: mov     ecx, edi; this
0x6A3EE2: mov     dword ptr [esi+3Ch], 32h ; '2'
0x6A3EE9: call    Actor_HandleDeathSTate????
0x6A3EEE: push    0
0x6A3EF0: mov     ecx, edi
0x6A3EF2: call    sub_5E8EC0
0x6A3EF7: push    ebx
0x6A3EF8: push    edi
0x6A3EF9: call    CommandEffect_MakeActorLoyal??
0x6A3EFE: jmp     short loc_6A3F19
0x6A3F00: cmp     eax, 32h ; '2'
0x6A3F03: jnz     short loc_6A3F1C
0x6A3F05: mov     ecx, [edi+58h]
0x6A3F08: mov     edx, [ecx]
0x6A3F0A: mov     eax, [edx+49Ch]
0x6A3F10: call    eax
0x6A3F12: push    ebx
0x6A3F13: push    edi
0x6A3F14: call    sub_6925C0
0x6A3F19: add     esp, 8
0x6A3F1C: mov     ecx, [esp+0E0h+var_4]
0x6A3F23: pop     edi
0x6A3F24: pop     esi
0x6A3F25: pop     ebx
0x6A3F26: xor     ecx, esp
0x6A3F28: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A3F2D: mov     esp, ebp
0x6A3F2F: pop     ebp
0x6A3F30: retn    4
