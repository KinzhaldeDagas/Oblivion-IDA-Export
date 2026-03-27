0x466BE0: sub     esp, 114h
0x466BE6: mov     eax, ds:0B30AACh
0x466BEB: xor     eax, esp
0x466BED: mov     [esp+114h+var_4], eax
0x466BF4: mov     eax, [esp+114h+arg_0]
0x466BFB: cmp     eax, 4
0x466BFE: push    ebx
0x466BFF: push    ebp
0x466C00: push    esi
0x466C01: push    edi
0x466C02: mov     ebp, ecx
0x466C04: jz      loc_466CE3
0x466C0A: cmp     eax, 5
0x466C0D: jnz     loc_466D35
0x466C13: mov     ecx, ds:0B333A0h
0x466C19: call    sub_43FD20
0x466C1E: mov     edi, eax
0x466C20: mov     eax, ds:0B333A0h
0x466C25: cmp     dword ptr [eax+34h], 0
0x466C29: jz      short loc_466C30
0x466C2B: mov     edi, 1
0x466C30: xor     esi, esi
0x466C32: test    edi, edi
0x466C34: jbe     short loc_466C58
0x466C36: mov     ecx, [eax+34h]
0x466C39: test    ecx, ecx
0x466C3B: jnz     short loc_466C47
0x466C3D: mov     ecx, [eax+3Ch]
0x466C40: mov     ecx, [ecx+esi*4]
0x466C43: test    ecx, ecx
0x466C45: jz      short loc_466C51
0x466C47: call    sub_4D5A90
0x466C4C: mov     eax, ds:0B333A0h
0x466C51: add     esi, 1
0x466C54: cmp     esi, edi
0x466C56: jb      short loc_466C36
0x466C58: mov     ebx, ds:0B35ED0h
0x466C5E: mov     edi, 5
0x466C63: mov     ecx, ds:0B333C4h; this
0x466C69: push    0; a4
0x466C6B: lea     esi, [ecx+20h]
0x466C6E: call    TESObjectREFR_GetWorldSpace
0x466C73: mov     ecx, ds:0B333C4h; this
0x466C79: push    eax; a3
0x466C7A: call    TESObjectREFR_GetParentCell
0x466C7F: mov     ecx, ds:0B333C4h
0x466C85: mov     edx, [ecx]
0x466C87: push    eax; a2
0x466C88: mov     eax, [edx+174h]
0x466C8E: push    esi
0x466C8F: call    eax
0x466C91: mov     ecx, ds:0B33A98h
0x466C97: push    eax
0x466C98: push    ebx
0x466C99: call    TESDataHandler_PlaceObjectRef
0x466C9E: mov     esi, eax
0x466CA0: mov     edx, [esi]
0x466CA2: mov     eax, [edx+174h]
0x466CA8: mov     ecx, esi
0x466CAA: call    eax
0x466CAC: mov     ecx, [eax]
0x466CAE: mov     edx, [eax+4]
0x466CB1: mov     eax, [eax+8]
0x466CB4: mov     [esp+124h+var_10C], eax
0x466CB8: fld     [esp+124h+var_10C]
0x466CBC: fadd    qword ptr ds:0A2FC70h
0x466CC2: sub     esp, 0Ch
0x466CC5: mov     eax, esp
0x466CC7: mov     [eax], ecx
0x466CC9: fstp    [esp+130h+var_10C]
0x466CCD: mov     ecx, [esp+130h+var_10C]
0x466CD1: mov     [eax+4], edx
0x466CD4: mov     [eax+8], ecx
0x466CD7: mov     ecx, esi; this
0x466CD9: call    TESObjectREFR_SetPosition
0x466CDE: sub     edi, 1
0x466CE1: jnz     short loc_466C63
0x466CE3: mov     ecx, ds:0B33C00h
0x466CE9: mov     eax, 51EB851Fh
0x466CEE: imul    ecx
0x466CF0: sar     edx, 4
0x466CF3: mov     eax, edx
0x466CF5: shr     eax, 1Fh
0x466CF8: add     eax, edx
0x466CFA: imul    eax, 32h ; '2'
0x466CFD: mov     edx, ecx
0x466CFF: sub     edx, eax
0x466D01: jnz     short loc_466D2C
0x466D03: push    ecx
0x466D04: lea     eax, [esp+128h+Str]
0x466D08: push    offset aTestAllCellsI_; "Test All Cells %i.ess"
0x466D0D: push    eax
0x466D0E: call    __sprintf
0x466D13: add     esp, 0Ch
0x466D16: push    1; int
0x466D18: lea     ecx, [esp+128h+Str]
0x466D1C: push    ecx; Str
0x466D1D: push    0; int
0x466D1F: mov     ecx, ebp
0x466D21: call    TESSaveLoadGame_SaveGame?
0x466D26: mov     ecx, ds:0B33C00h
0x466D2C: add     ecx, 1
0x466D2F: mov     ds:0B33C00h, ecx
0x466D35: mov     ecx, [esp+124h+var_4]
0x466D3C: pop     edi
0x466D3D: pop     esi
0x466D3E: pop     ebp
0x466D3F: pop     ebx
0x466D40: xor     ecx, esp
0x466D42: call    @__security_check_cookie@4; __security_check_cookie(x)
0x466D47: add     esp, 114h
0x466D4D: retn    4
