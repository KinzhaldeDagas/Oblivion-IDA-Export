0x5EFAE0: sub     esp, 28h
0x5EFAE3: push    esi
0x5EFAE4: mov     esi, ecx
0x5EFAE6: call    sub_5E6C10
0x5EFAEB: test    al, al
0x5EFAED: jz      short loc_5EFAFF
0x5EFAEF: test    byte ptr [esp+2Ch+a3], 3Fh
0x5EFAF4: jnz     short loc_5EFAFF
0x5EFAF6: xor     eax, eax
0x5EFAF8: pop     esi
0x5EFAF9: add     esp, 28h
0x5EFAFC: retn    0Ch
0x5EFAFF: cmp     dword ptr [esi+58h], 0
0x5EFB03: push    ebx
0x5EFB04: mov     ebx, dword ptr [esp+30h+a2+4]
0x5EFB08: push    ebp
0x5EFB09: push    edi
0x5EFB0A: jz      loc_5EFD18
0x5EFB10: mov     ecx, [esi+58h]
0x5EFB13: mov     eax, [ecx]
0x5EFB15: mov     edx, [eax+40Ch]
0x5EFB1B: xor     edi, edi
0x5EFB1D: call    edx
0x5EFB1F: test    eax, eax
0x5EFB21: jz      short loc_5EFB4D
0x5EFB23: mov     ecx, [esi+58h]
0x5EFB26: mov     eax, [ecx]
0x5EFB28: mov     edx, [eax+40Ch]
0x5EFB2E: call    edx
0x5EFB30: mov     edx, [eax]
0x5EFB32: mov     ecx, eax
0x5EFB34: mov     eax, [edx+4]
0x5EFB37: call    eax
0x5EFB39: cmp     eax, 2
0x5EFB3C: jnz     short loc_5EFB4D
0x5EFB3E: mov     ecx, [esi+58h]
0x5EFB41: mov     edx, [ecx]
0x5EFB43: mov     eax, [edx+40Ch]
0x5EFB49: call    eax
0x5EFB4B: mov     edi, eax
0x5EFB4D: mov     ecx, esi; this
0x5EFB4F: call    MobileObject_GetCharProxy
0x5EFB54: mov     ebp, eax
0x5EFB56: test    ebp, ebp
0x5EFB58: jz      loc_5EFD18
0x5EFB5E: test    edi, edi
0x5EFB60: jz      loc_5EFC0D
0x5EFB66: mov     edx, [edi]
0x5EFB68: mov     eax, [edx+0Ch]
0x5EFB6B: mov     ecx, edi
0x5EFB6D: call    eax
0x5EFB6F: test    al, al
0x5EFB71: jnz     loc_5EFC0D
0x5EFB77: mov     ecx, ebp
0x5EFB79: call    sub_5E1550
0x5EFB7E: test    al, al
0x5EFB80: jz      loc_5EFC0D
0x5EFB86: mov     ecx, edi
0x5EFB88: call    sub_68B3F0
0x5EFB8D: mov     edx, [eax+4]
0x5EFB90: mov     ecx, [eax]
0x5EFB92: mov     eax, [eax+8]
0x5EFB95: mov     [esp+38h+var_14], edx
0x5EFB99: mov     edx, [esi]
0x5EFB9B: mov     [esp+38h+var_18], ecx
0x5EFB9F: mov     [esp+38h+var_10], eax
0x5EFBA3: mov     eax, [edx+174h]
0x5EFBA9: mov     ecx, esi
0x5EFBAB: call    eax
0x5EFBAD: mov     ecx, [eax]
0x5EFBAF: mov     edx, [eax+4]
0x5EFBB2: mov     eax, [eax+8]
0x5EFBB5: mov     [esp+38h+var_24], ecx
0x5EFBB9: fld     [esp+38h+var_24]
0x5EFBBD: fsub    [esp+38h+var_18]
0x5EFBC1: mov     [esp+38h+var_20], edx
0x5EFBC5: mov     [esp+38h+var_1C], eax
0x5EFBC9: lea     ecx, [esp+38h+var_C]
0x5EFBCD: fstp    [esp+38h+var_C]
0x5EFBD1: fld     [esp+38h+var_20]
0x5EFBD5: fsub    [esp+38h+var_14]
0x5EFBD9: fstp    [esp+38h+var_8]
0x5EFBDD: fld     [esp+38h+var_1C]
0x5EFBE1: fsub    [esp+38h+var_10]
0x5EFBE5: fstp    [esp+38h+var_4]
0x5EFBE9: call    sub_43F350
0x5EFBEE: fstp    st
0x5EFBF0: push    ecx
0x5EFBF1: fld     [esp+3Ch+var_4]
0x5EFBF5: mov     ecx, esi; int
0x5EFBF7: fmul    qword ptr ds:0A6E740h
0x5EFBFD: fstp    dword ptr [esp+3Ch+a2+4]
0x5EFC01: fld     dword ptr [esp+3Ch+a2+4]
0x5EFC05: fstp    [esp+3Ch+var_3C]; float
0x5EFC08: call    sub_65A650
0x5EFC0D: lea     ecx, [ebp+1E0h]
0x5EFC13: call    sub_88D370
0x5EFC18: cmp     eax, 5
0x5EFC1B: jnz     short loc_5EFC52
0x5EFC1D: mov     edx, [esi]
0x5EFC1F: mov     eax, [edx+388h]
0x5EFC25: mov     ecx, esi
0x5EFC27: call    eax
0x5EFC29: test    eax, eax
0x5EFC2B: jz      short loc_5EFC52
0x5EFC2D: fldz
0x5EFC2F: push    ecx
0x5EFC30: fcomp   dword ptr [ebx+4]
0x5EFC33: mov     ecx, esi; int
0x5EFC35: fnstsw  ax
0x5EFC37: test    ah, 5
0x5EFC3A: jp      short loc_5EFC44
0x5EFC3C: fld     dword ptr ds:0A6E738h
0x5EFC42: jmp     short loc_5EFC4A
0x5EFC44: fld     dword ptr ds:0A6E734h
0x5EFC4A: fstp    [esp+3Ch+var_3C]; float
0x5EFC4D: call    sub_65A650
0x5EFC52: mov     edi, [ebp+368h]
0x5EFC58: test    edi, edi
0x5EFC5A: jz      loc_5EFD18
0x5EFC60: mov     edx, [esi]
0x5EFC62: fldz
0x5EFC64: mov     eax, [edx+174h]
0x5EFC6A: fstp    dword ptr [esp+38h+a2+4]
0x5EFC6E: mov     ecx, esi
0x5EFC70: call    eax
0x5EFC72: mov     ecx, ds:0B333C4h
0x5EFC78: push    eax
0x5EFC79: call    sub_4D7E30
0x5EFC7E: fstp    [esp+38h+var_28]
0x5EFC82: mov     ecx, ds:0B333CCh
0x5EFC88: mov     eax, [ecx+0DCh]
0x5EFC8E: mov     edx, [esi]
0x5EFC90: push    eax
0x5EFC91: mov     eax, [edx+154h]
0x5EFC97: mov     ecx, esi
0x5EFC99: call    eax
0x5EFC9B: push    eax
0x5EFC9C: call    sub_47F7B0
0x5EFCA1: fld     qword ptr ds:0A2FC70h
0x5EFCA7: add     esp, 8
0x5EFCAA: test    al, al
0x5EFCAC: jnz     short loc_5EFCB8
0x5EFCAE: fld     [esp+38h+var_28]
0x5EFCB2: fadd    st, st(1)
0x5EFCB4: fstp    [esp+38h+var_28]
0x5EFCB8: fld     [esp+38h+var_28]
0x5EFCBC: fcom    st(1)
0x5EFCBE: fnstsw  ax
0x5EFCC0: fstp    st(1)
0x5EFCC2: test    ah, 41h
0x5EFCC5: jnz     short loc_5EFD09
0x5EFCC7: fld     dword ptr ds:0A3765Ch
0x5EFCCD: fcomp   st(1)
0x5EFCCF: fnstsw  ax
0x5EFCD1: test    ah, 41h
0x5EFCD4: jnz     short loc_5EFCE4
0x5EFCD6: fstp    st
0x5EFCD8: fld     dword ptr ds:0A31C80h
0x5EFCDE: fstp    dword ptr [esp+38h+a2+4]
0x5EFCE2: jmp     short loc_5EFD0B
0x5EFCE4: fcomp   dword ptr ds:0A6E730h
0x5EFCEA: fnstsw  ax
0x5EFCEC: test    ah, 5
0x5EFCEF: jp      short loc_5EFCFD
0x5EFCF1: fld     dword ptr ds:0A379CCh
0x5EFCF7: fstp    dword ptr [esp+38h+a2+4]
0x5EFCFB: jmp     short loc_5EFD0B
0x5EFCFD: fld     dword ptr ds:0A3D8F0h
0x5EFD03: fstp    dword ptr [esp+38h+a2+4]
0x5EFD07: jmp     short loc_5EFD0B
0x5EFD09: fstp    st
0x5EFD0B: fld     dword ptr [esp+38h+a2+4]
0x5EFD0F: fmul    qword ptr ds:0A39088h
0x5EFD15: fstp    dword ptr [edi+60h]
0x5EFD18: mov     ecx, [esp+38h+a3]
0x5EFD1C: fld     dword ptr [esp+38h+a2]
0x5EFD20: push    ecx; int
0x5EFD21: push    ebx; int
0x5EFD22: push    ecx
0x5EFD23: mov     ecx, esi
0x5EFD25: fstp    [esp+44h+var_44]; float
0x5EFD28: call    sub_65AF30
0x5EFD2D: mov     ecx, eax
0x5EFD2F: test    ecx, ecx
0x5EFD31: mov     dword ptr [esp+38h+a2+4], ecx
0x5EFD35: jz      loc_5EFF16
0x5EFD3B: mov     edx, [ecx+1F4h]
0x5EFD41: shr     edx, 7
0x5EFD44: and     dl, 1
0x5EFD47: jz      loc_5EFF16
0x5EFD4D: and     dword ptr [ecx+1F4h], 0FFFFFF7Fh
0x5EFD57: fld     dword ptr [ecx+320h]
0x5EFD5D: fstp    [esp+38h+a3]
0x5EFD61: fldz
0x5EFD63: fstp    dword ptr [ecx+320h]
0x5EFD69: fld     [esp+38h+a3]
0x5EFD6D: fld     dword ptr ds:0B37478h
0x5EFD73: fcomp   st(1)
0x5EFD75: fnstsw  ax
0x5EFD77: test    ah, 41h
0x5EFD7A: jp      loc_5EFF14
0x5EFD80: fmul    dword ptr ds:0B37468h
0x5EFD86: mov     eax, [esi]
0x5EFD88: mov     edx, [eax+388h]
0x5EFD8E: mov     ebx, ecx
0x5EFD90: fadd    dword ptr ds:0B37460h
0x5EFD96: mov     ecx, esi
0x5EFD98: fstp    dword ptr [esp+38h+a2]
0x5EFD9C: call    edx
0x5EFD9E: mov     edi, eax
0x5EFDA0: test    edi, edi
0x5EFDA2: jz      short loc_5EFDB8
0x5EFDA4: mov     ecx, edi; this
0x5EFDA6: call    MobileObject_GetCharProxy
0x5EFDAB: test    eax, eax
0x5EFDAD: jz      short loc_5EFDB8
0x5EFDAF: mov     ecx, edi; this
0x5EFDB1: call    MobileObject_GetCharProxy
0x5EFDB6: mov     ebx, eax
0x5EFDB8: fld     dword ptr [ebx+310h]
0x5EFDBE: mov     eax, [esi]
0x5EFDC0: fmul    dword ptr ds:0B37488h
0x5EFDC6: mov     edx, [eax+170h]
0x5EFDCC: mov     ecx, esi
0x5EFDCE: xor     bl, bl
0x5EFDD0: fadd    dword ptr ds:0B37480h
0x5EFDD6: fstp    [esp+38h+a3]
0x5EFDDA: fld     [esp+38h+a3]
0x5EFDDE: fmul    dword ptr [esp+38h+a2]
0x5EFDE2: fstp    [esp+38h+a3]
0x5EFDE6: call    edx
0x5EFDE8: mov     ebp, eax
0x5EFDEA: test    ebp, ebp
0x5EFDEC: jz      short loc_5EFE0B
0x5EFDEE: mov     eax, [esi]
0x5EFDF0: mov     edx, [eax+190h]
0x5EFDF6: mov     ecx, esi
0x5EFDF8: call    edx
0x5EFDFA: test    al, al
0x5EFDFC: jz      short loc_5EFE0B
0x5EFDFE: mov     ecx, ebp; this
0x5EFE00: call    TESActorBase_CanFly
0x5EFE05: mov     bl, al
0x5EFE07: test    bl, bl
0x5EFE09: jnz     short loc_5EFE2D
0x5EFE0B: mov     eax, [esi]
0x5EFE0D: mov     edx, [eax+380h]
0x5EFE13: mov     ecx, esi
0x5EFE15: call    edx
0x5EFE17: test    eax, eax
0x5EFE19: jnz     short loc_5EFE2D
0x5EFE1B: mov     eax, [esi]
0x5EFE1D: mov     edx, [eax+18Ch]
0x5EFE23: mov     ecx, esi
0x5EFE25: call    edx
0x5EFE27: test    eax, eax
0x5EFE29: jz      short loc_5EFE2D
0x5EFE2B: mov     bl, 1
0x5EFE2D: mov     eax, [esi]
0x5EFE2F: mov     edx, [eax+380h]
0x5EFE35: mov     ecx, esi
0x5EFE37: call    edx
0x5EFE39: test    eax, eax
0x5EFE3B: jnz     loc_5EFF04
0x5EFE41: test    bl, bl
0x5EFE43: jnz     loc_5EFF04
0x5EFE49: fldz
0x5EFE4B: mov     eax, [esi]
0x5EFE4D: mov     edx, [eax+39Ch]
0x5EFE53: push    ecx
0x5EFE54: fstp    [esp+3Ch+var_3C]
0x5EFE57: push    1
0x5EFE59: push    1Ah
0x5EFE5B: mov     ecx, esi
0x5EFE5D: call    edx
0x5EFE5F: fldz
0x5EFE61: mov     eax, [esi]
0x5EFE63: mov     edx, [eax+220h]
0x5EFE69: push    0
0x5EFE6B: sub     esp, 8
0x5EFE6E: fstp    [esp+44h+var_40]
0x5EFE72: mov     ecx, esi
0x5EFE74: fld     [esp+44h+a3]
0x5EFE78: fstp    [esp+44h+var_44]
0x5EFE7B: call    edx
0x5EFE7D: push    1
0x5EFE7F: push    1
0x5EFE81: mov     ecx, esi
0x5EFE83: call    Actor_PlayPainFX
0x5EFE88: test    edi, edi
0x5EFE8A: jz      short loc_5EFF04
0x5EFE8C: mov     ecx, offset fJumpFallRiderMult
0x5EFE91: call    GameSetting_GetSafeFloatPointer
0x5EFE96: fldz
0x5EFE98: fcom    dword ptr [eax]
0x5EFE9A: fnstsw  ax
0x5EFE9C: test    ah, 5
0x5EFE9F: jp      short loc_5EFF02
0x5EFEA1: mov     eax, [edi]
0x5EFEA3: mov     edx, [eax+39Ch]
0x5EFEA9: push    ecx
0x5EFEAA: fstp    [esp+3Ch+var_3C]
0x5EFEAD: push    1
0x5EFEAF: push    1Ah
0x5EFEB1: mov     ecx, edi
0x5EFEB3: call    edx
0x5EFEB5: mov     esi, [edi]
0x5EFEB7: mov     ecx, offset fJumpFallRiderMult
0x5EFEBC: call    GameSetting_GetSafeFloatPointer
0x5EFEC1: fldz
0x5EFEC3: push    0
0x5EFEC5: sub     esp, 8
0x5EFEC8: fstp    [esp+44h+var_40]
0x5EFECC: mov     ecx, edi
0x5EFECE: fld     [esp+44h+a3]
0x5EFED2: fmul    dword ptr [eax]
0x5EFED4: mov     eax, [esi+220h]
0x5EFEDA: fstp    [esp+44h+a3]
0x5EFEDE: fld     [esp+44h+a3]
0x5EFEE2: fstp    [esp+44h+var_44]
0x5EFEE5: call    eax
0x5EFEE7: push    1
0x5EFEE9: push    1
0x5EFEEB: mov     ecx, edi
0x5EFEED: call    Actor_PlayPainFX
0x5EFEF2: mov     ecx, dword ptr [esp+38h+a2+4]
0x5EFEF6: pop     edi
0x5EFEF7: pop     ebp
0x5EFEF8: pop     ebx
0x5EFEF9: mov     eax, ecx
0x5EFEFB: pop     esi
0x5EFEFC: add     esp, 28h
0x5EFEFF: retn    0Ch
0x5EFF02: fstp    st
0x5EFF04: mov     ecx, dword ptr [esp+38h+a2+4]
0x5EFF08: pop     edi
0x5EFF09: pop     ebp
0x5EFF0A: pop     ebx
0x5EFF0B: mov     eax, ecx
0x5EFF0D: pop     esi
0x5EFF0E: add     esp, 28h
0x5EFF11: retn    0Ch
0x5EFF14: fstp    st
0x5EFF16: pop     edi
0x5EFF17: pop     ebp
0x5EFF18: pop     ebx
0x5EFF19: mov     eax, ecx
0x5EFF1B: pop     esi
0x5EFF1C: add     esp, 28h
0x5EFF1F: retn    0Ch
