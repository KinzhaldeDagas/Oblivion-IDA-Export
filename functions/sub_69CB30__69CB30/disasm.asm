0x69CB30: sub     esp, 34h
0x69CB33: push    ebx
0x69CB34: push    ebp
0x69CB35: mov     ebp, ecx
0x69CB37: mov     eax, [ebp+0]
0x69CB3A: mov     edx, [eax+154h]
0x69CB40: call    edx
0x69CB42: mov     ebx, eax
0x69CB44: test    ebx, ebx
0x69CB46: jz      loc_69CC7A
0x69CB4C: fld     dword ptr [ebp+8Ch]
0x69CB52: push    esi
0x69CB53: fabs
0x69CB55: push    edi
0x69CB56: fstp    [esp+44h+var_34]
0x69CB5A: mov     ecx, ebp
0x69CB5C: fld     [esp+44h+var_34]
0x69CB60: fstp    dword ptr [ebx+60h]
0x69CB63: mov     eax, [ebp+0]
0x69CB66: mov     edx, [eax+174h]
0x69CB6C: call    edx
0x69CB6E: mov     ecx, [eax]
0x69CB70: mov     [ebx+54h], ecx
0x69CB73: mov     edx, [eax+4]
0x69CB76: mov     [ebx+58h], edx
0x69CB79: mov     eax, [eax+8]
0x69CB7C: mov     [ebx+5Ch], eax
0x69CB7F: mov     edx, [ebp+24h]
0x69CB82: mov     ecx, [ebp+20h]
0x69CB85: mov     eax, [ebp+28h]
0x69CB88: sub     esp, 0Ch
0x69CB8B: mov     [esp+50h+var_2C], edx
0x69CB8F: fld     [esp+50h+var_2C]
0x69CB93: fstp    [esp+50h+var_48]; float
0x69CB97: mov     [esp+50h+var_30], ecx
0x69CB9B: fld     [esp+50h+var_30]
0x69CB9F: mov     [esp+50h+var_28], eax
0x69CBA3: fstp    [esp+50h+a2]; float
0x69CBA7: lea     ecx, [esp+50h+var_24]
0x69CBAB: fld     [esp+50h+var_28]
0x69CBAF: fstp    [esp+50h+var_50]; float
0x69CBB2: call    sub_7117C0
0x69CBB7: lea     edi, [ebx+30h]
0x69CBBA: mov     ecx, 9
0x69CBBF: lea     esi, [esp+44h+var_24]
0x69CBC3: push    ebx
0x69CBC4: rep movsd
0x69CBC6: call    sub_6F94E0
0x69CBCB: mov     edx, [ebx]
0x69CBCD: mov     eax, [edx+58h]
0x69CBD0: add     esp, 4
0x69CBD3: push    offset aAreaeffect; "AreaEffect"
0x69CBD8: mov     ecx, ebx
0x69CBDA: call    eax
0x69CBDC: test    eax, eax
0x69CBDE: jz      short loc_69CBE8
0x69CBE0: push    eax
0x69CBE1: mov     ecx, ebp
0x69CBE3: call    sub_69C9A0
0x69CBE8: mov     eax, [ebx+0Ch]
0x69CBEB: push    eax
0x69CBEC: push    offset stru_B3CAC0
0x69CBF1: call    NiRTTI_Cast
0x69CBF6: mov     esi, eax
0x69CBF8: add     esp, 8
0x69CBFB: test    esi, esi
0x69CBFD: jz      short loc_69CC78
0x69CBFF: lea     ecx, [esp+44h+var_34]
0x69CC03: push    ecx
0x69CC04: push    offset aSpecialidle_pr; "SpecialIdle_Projectile"
0x69CC09: lea     ecx, [esi+58h]
0x69CC0C: call    NiTMap_GetAt
0x69CC11: test    al, al
0x69CC13: jz      short loc_69CC78
0x69CC15: mov     edi, [esp+44h+var_34]
0x69CC19: test    edi, edi
0x69CC1B: jz      short loc_69CC78
0x69CC1D: fldz
0x69CC1F: push    ecx
0x69CC20: mov     ecx, esi
0x69CC22: fstp    [esp+48h+var_48]; float
0x69CC25: call    sub_4715C0
0x69CC2A: fldz
0x69CC2C: push    0; int
0x69CC2E: push    0; int
0x69CC30: sub     esp, 8
0x69CC33: fstp    [esp+54h+var_50]; float
0x69CC37: mov     ecx, edi
0x69CC39: fld1
0x69CC3B: fstp    [esp+54h+var_54]; float
0x69CC3E: push    0; char
0x69CC40: push    0; int
0x69CC42: call    sub_6C9BA0
0x69CC47: or      word ptr [esi+8], 8
0x69CC4C: fld     dword ptr ds:0A7DEB4h
0x69CC52: fchs
0x69CC54: push    1; a3
0x69CC56: fstp    dword ptr [edi+48h]
0x69CC59: push    ecx
0x69CC5A: fld     dword ptr ds:0B33A30h
0x69CC60: mov     ecx, ebx; this
0x69CC62: fsub    qword ptr ds:0A2FC80h
0x69CC68: fstp    [esp+4Ch+var_34]
0x69CC6C: fld     [esp+4Ch+var_34]
0x69CC70: fstp    [esp+4Ch+a2]; a2
0x69CC73: call    NiAVObject_UpdateNiAVObject
0x69CC78: pop     edi
0x69CC79: pop     esi
0x69CC7A: pop     ebp
0x69CC7B: pop     ebx
0x69CC7C: add     esp, 34h
0x69CC7F: retn
