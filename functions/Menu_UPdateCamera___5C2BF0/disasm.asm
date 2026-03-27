0x5C2BF0: push    0FFFFFFFFh
0x5C2BF2: push    offset Menu_UPdateCamera???_SEH
0x5C2BF7: mov     eax, large fs:0
0x5C2BFD: push    eax
0x5C2BFE: sub     esp, 5Ch
0x5C2C01: push    ebx
0x5C2C02: push    esi
0x5C2C03: push    edi
0x5C2C04: mov     eax, ds:0B30AACh
0x5C2C09: xor     eax, esp
0x5C2C0B: push    eax
0x5C2C0C: lea     eax, [esp+78h+var_C]
0x5C2C10: mov     large fs:0, eax
0x5C2C16: cmp     byte ptr ds:0B3B5D8h, 0
0x5C2C1D: jnz     loc_5C2EFE
0x5C2C23: fld     dword ptr ds:0A6BC94h
0x5C2C29: lea     esi, [ecx+8A4h]
0x5C2C2F: fstp    [esp+78h+PlayerPosition.x]
0x5C2C33: push    0; a5
0x5C2C35: fldz
0x5C2C37: fst     [esp+7Ch+PlayerPosition.y]
0x5C2C3B: fst     [esp+7Ch+PlayerPosition.z]
0x5C2C3F: fst     [esp+7Ch+var_60]
0x5C2C43: fld     dword ptr ds:0A37CC8h
0x5C2C49: mov     eax, [esp+7Ch+var_60]
0x5C2C4D: fstp    [esp+7Ch+var_5C]
0x5C2C51: mov     [esi], eax
0x5C2C53: mov     ecx, [esp+7Ch+var_5C]
0x5C2C57: mov     [esi+4], ecx
0x5C2C5A: fstp    [esp+7Ch+a1]
0x5C2C5E: mov     edx, [esp+7Ch+a1]
0x5C2C62: mov     [esi+8], edx
0x5C2C65: mov     ecx, ds:0B333C4h
0x5C2C6B: mov     eax, [ecx]
0x5C2C6D: mov     edx, [eax+134h]
0x5C2C73: mov     ebx, ds:0B333CCh
0x5C2C79: call    edx
0x5C2C7B: test    eax, eax
0x5C2C7D: jz      loc_5C2EFE
0x5C2C83: mov     ecx, [eax+20h]
0x5C2C86: mov     edx, [eax+24h]
0x5C2C89: mov     eax, [eax+28h]
0x5C2C8C: mov     [esp+78h+var_60], ecx
0x5C2C90: mov     ecx, ds:0B333C4h
0x5C2C96: mov     [esp+78h+var_5C], edx
0x5C2C9A: mov     edx, [ecx]
0x5C2C9C: mov     [esp+78h+a1], eax
0x5C2CA0: mov     eax, [edx+1E0h]
0x5C2CA6: call    eax
0x5C2CA8: fld     [esp+78h+arg_4]
0x5C2CAF: fadd    qword ptr ds:0A2FC68h
0x5C2CB5: push    ecx
0x5C2CB6: lea     ecx, [esp+7Ch+var_30]
0x5C2CBA: fmul    qword ptr ds:0A31C78h
0x5C2CC0: faddp   st(1), st
0x5C2CC2: fstp    [esp+7Ch+arg_4]
0x5C2CC9: fld     [esp+7Ch+arg_4]
0x5C2CD0: fstp    [esp+7Ch+var_7C]; float
0x5C2CD3: call    NiMatrix33_InitRotationTransform
0x5C2CD8: push    esi
0x5C2CD9: lea     ecx, [esp+7Ch+var_48]
0x5C2CDD: push    ecx
0x5C2CDE: lea     ecx, [esp+80h+var_30]
0x5C2CE2: call    sub_7101F0
0x5C2CE7: fld     [esp+78h+var_60]
0x5C2CEB: fadd    dword ptr [eax]
0x5C2CED: fstp    [esp+78h+arg_4]
0x5C2CF4: fld     dword ptr [eax+4]
0x5C2CF7: fadd    [esp+78h+var_5C]
0x5C2CFB: fstp    [esp+78h+var_68]
0x5C2CFF: fld     dword ptr [eax+8]
0x5C2D02: fadd    [esp+78h+a1]
0x5C2D06: fstp    [esp+78h+var_64]
0x5C2D0A: fld     [esp+78h+arg_4]
0x5C2D11: fstp    [esp+78h+var_48]
0x5C2D15: mov     edx, [esp+78h+var_48]
0x5C2D19: fld     [esp+78h+var_68]
0x5C2D1D: mov     [esi], edx
0x5C2D1F: fstp    [esp+78h+var_44]
0x5C2D23: mov     eax, [esp+78h+var_44]
0x5C2D27: fld     [esp+78h+var_64]
0x5C2D2B: mov     [esi+4], eax
0x5C2D2E: lea     edx, [esp+78h+PlayerPosition]
0x5C2D32: fstp    [esp+78h+var_40]
0x5C2D36: mov     ecx, [esp+78h+var_40]
0x5C2D3A: push    edx
0x5C2D3B: lea     eax, [esp+7Ch+var_3C]
0x5C2D3F: mov     [esi+8], ecx
0x5C2D42: push    eax
0x5C2D43: lea     ecx, [esp+80h+var_30]
0x5C2D47: call    sub_7101F0
0x5C2D4C: fld     dword ptr [eax]
0x5C2D4E: fadd    [esp+78h+var_60]
0x5C2D52: fstp    [esp+78h+arg_4]
0x5C2D59: fld     dword ptr [eax+4]
0x5C2D5C: fadd    [esp+78h+var_5C]
0x5C2D60: fstp    [esp+78h+var_64]
0x5C2D64: fld     dword ptr [eax+8]
0x5C2D67: fadd    [esp+78h+a1]
0x5C2D6B: fstp    [esp+78h+var_68]
0x5C2D6F: fld     [esp+78h+arg_4]
0x5C2D76: fstp    [esp+78h+var_48]
0x5C2D7A: mov     ecx, [esp+78h+var_48]
0x5C2D7E: fld     [esp+78h+var_64]
0x5C2D82: mov     [esp+78h+PlayerPosition.x], ecx
0x5C2D86: mov     ecx, ds:0B333C4h; this
0x5C2D8C: fstp    [esp+78h+var_44]
0x5C2D90: fld     [esp+78h+var_68]
0x5C2D94: mov     edx, [esp+78h+var_44]
0x5C2D98: fstp    [esp+78h+var_40]
0x5C2D9C: mov     eax, [esp+78h+var_40]
0x5C2DA0: mov     [esp+78h+PlayerPosition.y], edx
0x5C2DA4: mov     [esp+78h+PlayerPosition.z], eax
0x5C2DA8: call    sub_66A5E0
0x5C2DAD: push    1; CameraChasing
0x5C2DAF: lea     ecx, [esp+7Ch+PlayerPosition]
0x5C2DB3: push    ecx; PlayerPosition
0x5C2DB4: mov     ecx, ds:0B333C4h; a2
0x5C2DBA: push    esi; CameraPosition
0x5C2DBB: call    UpdateCameraCollision
0x5C2DC0: test    byte ptr ds:0B3B704h, 1
0x5C2DC7: jnz     short loc_5C2DF7
0x5C2DC9: or      dword ptr ds:0B3B704h, 1
0x5C2DD0: mov     ecx, offset stru_B3B5E0
0x5C2DD5: mov     [esp+78h+var_4], 0
0x5C2DDD: call    sub_70D590
0x5C2DE2: push    offset sub_A24E60; void (__cdecl *)()
0x5C2DE7: call    _atexit
0x5C2DEC: add     esp, 4
0x5C2DEF: mov     [esp+78h+var_4], 0FFFFFFFFh
0x5C2DF7: mov     edx, [esi]
0x5C2DF9: fldz
0x5C2DFB: mov     ds:0B3B634h, edx
0x5C2E01: mov     eax, [esi+4]
0x5C2E04: mov     ds:0B3B638h, eax
0x5C2E09: mov     ecx, [esi+8]
0x5C2E0C: push    1; a3
0x5C2E0E: push    ecx
0x5C2E0F: mov     ds:0B3B63Ch, ecx
0x5C2E15: fstp    [esp+80h+a2]; a2
0x5C2E18: mov     ecx, offset stru_B3B5E0; this
0x5C2E1D: call    NiAVObject_UpdateNiAVObject
0x5C2E22: push    offset dword_B258E8
0x5C2E27: lea     edx, [esp+7Ch+PlayerPosition]
0x5C2E2B: push    edx
0x5C2E2C: mov     ecx, offset stru_B3B5E0
0x5C2E31: call    sub_70C340
0x5C2E36: fld     dword ptr ds:0B3B618h
0x5C2E3C: fstp    [esp+78h+var_30]
0x5C2E40: fld     dword ptr ds:0B3B610h
0x5C2E46: fstp    [esp+78h+var_2C]
0x5C2E4A: fld     dword ptr ds:0B3B614h
0x5C2E50: fstp    [esp+78h+var_28]
0x5C2E54: fld     dword ptr ds:0B3B624h
0x5C2E5A: fstp    [esp+78h+var_24]
0x5C2E5E: fld     dword ptr ds:0B3B61Ch
0x5C2E64: fstp    [esp+78h+var_20]
0x5C2E68: fld     dword ptr ds:0B3B620h
0x5C2E6E: fstp    [esp+78h+var_1C]
0x5C2E72: fld     dword ptr ds:0B3B630h
0x5C2E78: fstp    [esp+78h+var_18]
0x5C2E7C: fld     dword ptr ds:0B3B628h
0x5C2E82: fstp    [esp+78h+var_14]
0x5C2E86: fld     dword ptr ds:0B3B62Ch
0x5C2E8C: fstp    [esp+78h+var_10]
0x5C2E90: cmp     word ptr [ebx+0B6h], 0
0x5C2E98: ja      short loc_5C2E9E
0x5C2E9A: xor     eax, eax
0x5C2E9C: jmp     short loc_5C2EA6
0x5C2E9E: mov     eax, [ebx+0B0h]
0x5C2EA4: mov     eax, [eax]
0x5C2EA6: mov     ecx, [esi]
0x5C2EA8: mov     [eax+54h], ecx
0x5C2EAB: mov     edx, [esi+4]
0x5C2EAE: mov     [eax+58h], edx
0x5C2EB1: mov     ecx, [esi+8]
0x5C2EB4: mov     [eax+5Ch], ecx
0x5C2EB7: cmp     word ptr [ebx+0B6h], 0
0x5C2EBF: ja      short loc_5C2EC5
0x5C2EC1: xor     eax, eax
0x5C2EC3: jmp     short loc_5C2ECD
0x5C2EC5: mov     edx, [ebx+0B0h]
0x5C2ECB: mov     eax, [edx]
0x5C2ECD: lea     edi, [eax+30h]
0x5C2ED0: mov     ecx, 9
0x5C2ED5: lea     esi, [esp+78h+var_30]
0x5C2ED9: rep movsd
0x5C2EDB: cmp     word ptr [ebx+0B6h], 0
0x5C2EE3: ja      short loc_5C2EE9
0x5C2EE5: xor     ecx, ecx
0x5C2EE7: jmp     short loc_5C2EF1
0x5C2EE9: mov     eax, [ebx+0B0h]
0x5C2EEF: mov     ecx, [eax]; this
0x5C2EF1: fldz
0x5C2EF3: push    0; a3
0x5C2EF5: push    ecx
0x5C2EF6: fstp    [esp+80h+a2]; a2
0x5C2EF9: call    NiAVObject_UpdateNiAVObject
0x5C2EFE: mov     ecx, dword ptr [esp+78h+var_C]
0x5C2F02: mov     large fs:0, ecx
0x5C2F09: pop     ecx
0x5C2F0A: pop     edi
0x5C2F0B: pop     esi
0x5C2F0C: pop     ebx
0x5C2F0D: add     esp, 68h
0x5C2F10: retn    8
