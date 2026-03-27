0x5F0810: push    0FFFFFFFFh
0x5F0812: push    offset SEH_62F810
0x5F0817: mov     eax, large fs:0
0x5F081D: push    eax
0x5F081E: sub     esp, 28h
0x5F0821: push    ebx
0x5F0822: push    ebp
0x5F0823: push    esi
0x5F0824: push    edi
0x5F0825: mov     eax, ds:0B30AACh
0x5F082A: xor     eax, esp
0x5F082C: push    eax
0x5F082D: lea     eax, [esp+48h+var_C]
0x5F0831: mov     large fs:0, eax
0x5F0837: mov     ebp, ecx
0x5F0839: mov     eax, [ebp+0]
0x5F083C: mov     edx, [eax+380h]
0x5F0842: xor     edi, edi
0x5F0844: mov     [esp+48h+var_31], 0
0x5F0849: mov     [esp+48h+a4], edi
0x5F084D: call    edx
0x5F084F: mov     esi, eax
0x5F0851: cmp     esi, edi
0x5F0853: mov     [esp+48h+var_30], esi
0x5F0857: jz      short loc_5F08BB
0x5F0859: cmp     ebp, ds:0B333C4h
0x5F085F: mov     [esp+48h+var_31], 1
0x5F0864: jnz     loc_5F0941
0x5F086A: mov     ecx, esi; this
0x5F086C: call    TESObjectREFR_GetOwner
0x5F0871: test    eax, eax
0x5F0873: jz      short loc_5F0888
0x5F0875: mov     eax, ds:0B333C4h
0x5F087A: push    1
0x5F087C: push    eax
0x5F087D: mov     ecx, esi
0x5F087F: call    TESOBjectREFR_IsOwnedBy
0x5F0884: test    al, al
0x5F0886: jz      short loc_5F08A3
0x5F0888: mov     edx, [ebp+0]
0x5F088B: mov     eax, [edx+380h]
0x5F0891: mov     ecx, ebp
0x5F0893: call    eax
0x5F0895: mov     ecx, ds:0B333C4h
0x5F089B: mov     [ecx+1E0h], eax
0x5F08A1: jmp     short loc_5F08FA
0x5F08A3: cmp     ds:0B333C4h, ebp
0x5F08A9: jnz     loc_5F0941
0x5F08AF: mov     ecx, ebp
0x5F08B1: call    sub_5F0410
0x5F08B6: jmp     loc_5F0D46
0x5F08BB: mov     eax, ds:0B333C4h
0x5F08C0: cmp     [eax+1E0h], edi
0x5F08C6: jz      short loc_5F08FA
0x5F08C8: mov     ecx, [eax+1E0h]; this
0x5F08CE: call    TESObjectREFR_GetOwner
0x5F08D3: test    eax, eax
0x5F08D5: jz      short loc_5F08FA
0x5F08D7: mov     eax, ds:0B333C4h
0x5F08DC: mov     ecx, [eax+1E0h]
0x5F08E2: push    1
0x5F08E4: push    eax
0x5F08E5: call    TESOBjectREFR_IsOwnedBy
0x5F08EA: test    al, al
0x5F08EC: jnz     short loc_5F08FA
0x5F08EE: mov     edx, ds:0B333C4h
0x5F08F4: mov     [edx+1E0h], edi
0x5F08FA: mov     eax, ds:0B333C4h
0x5F08FF: cmp     ebp, eax
0x5F0901: jnz     short loc_5F0941
0x5F0903: cmp     [eax+1E0h], edi
0x5F0909: jz      short loc_5F092B
0x5F090B: mov     ecx, [eax+1E0h]
0x5F0911: mov     eax, [ecx]
0x5F0913: mov     edx, [eax+198h]
0x5F0919: push    edi
0x5F091A: call    edx
0x5F091C: test    al, al
0x5F091E: jz      short loc_5F092B
0x5F0920: mov     eax, ds:0B333C4h
0x5F0925: mov     [eax+1E0h], edi
0x5F092B: cmp     esi, edi
0x5F092D: jnz     short loc_5F0945
0x5F092F: mov     ecx, ds:0B333C4h
0x5F0935: mov     edx, [ecx+1E0h]
0x5F093B: mov     [esp+18h], edx
0x5F093F: mov     esi, edx
0x5F0941: cmp     esi, edi
0x5F0943: jz      short loc_5F0950
0x5F0945: mov     ecx, esi; this
0x5F0947: call    TESObjectREFR_GetWorldSpace
0x5F094C: mov     [esp+4Ch+var_30], eax
0x5F0950: lea     ecx, [esp+4Ch+var_24]
0x5F0954: mov     [esp+4Ch+a4], edi
0x5F0958: mov     [esp+4Ch+var_28], edi
0x5F095C: call    sub_68A9F0
0x5F0961: mov     esi, [esp+4Ch]
0x5F0965: mov     ecx, esi; this
0x5F0967: mov     [esp+4Ch+var_8], edi
0x5F096B: call    TESObjectREFR_GetWorldSpace
0x5F0970: push    eax
0x5F0971: mov     ecx, esi; this
0x5F0973: call    TESObjectREFR_GetParentCell
0x5F0978: push    eax; a3
0x5F0979: mov     eax, [esi]
0x5F097B: mov     edx, [eax+174h]
0x5F0981: mov     ecx, esi
0x5F0983: call    edx
0x5F0985: push    eax; a2
0x5F0986: mov     eax, ds:0B333C4h
0x5F098B: push    eax
0x5F098C: lea     ecx, [esp+5Ch+var_24]
0x5F0990: call    sub_68B030
0x5F0995: lea     ecx, [esp+4Ch+a4]
0x5F0999: push    ecx; a4
0x5F099A: lea     ecx, [esp+50h+var_24]
0x5F099E: call    sub_689BB0
0x5F09A3: mov     edx, [ebp+0]
0x5F09A6: mov     eax, [edx+174h]
0x5F09AC: mov     ecx, ebp
0x5F09AE: call    eax
0x5F09B0: mov     ecx, ebp
0x5F09B2: call    sub_4D8AF0
0x5F09B7: cmp     [esp+4Ch+var_28], edi
0x5F09BB: jnz     short loc_5F09C7
0x5F09BD: cmp     [esp+4Ch+a4], edi
0x5F09C1: jz      loc_5F0CA1
0x5F09C7: mov     eax, ds:0B333C4h
0x5F09CC: cmp     byte ptr [eax+114h], 0
0x5F09D3: jnz     short loc_5F09E0
0x5F09D5: cmp     ebp, eax
0x5F09D7: jnz     short loc_5F09E0
0x5F09D9: mov     byte ptr [eax+114h], 1
0x5F09E0: cmp     [esp+4Ch+var_28], edi
0x5F09E4: jnz     short loc_5F09F0
0x5F09E6: cmp     [esp+4Ch+a4], edi
0x5F09EA: jz      loc_5F0CA1
0x5F09F0: xor     bl, bl
0x5F09F2: cmp     [esp+4Ch+var_35], bl
0x5F09F6: lea     esi, [esp+4Ch+a4]
0x5F09FA: mov     [esp+4Ch], esi
0x5F09FE: jz      short loc_5F0A07
0x5F0A00: mov     ecx, ebp
0x5F0A02: call    sub_5F0410
0x5F0A07: cmp     [esi+4], edi
0x5F0A0A: jnz     short loc_5F0A14
0x5F0A0C: cmp     [esi], edi
0x5F0A0E: jz      loc_5F0D35
0x5F0A14: mov     esi, [esi]
0x5F0A16: mov     ecx, esi; this
0x5F0A18: call    GetTeleportExtraData
0x5F0A1D: mov     edi, eax
0x5F0A1F: mov     ecx, edi
0x5F0A21: call    sub_42B410
0x5F0A26: mov     ecx, eax
0x5F0A28: call    sub_4D8AF0
0x5F0A2D: mov     ecx, edi
0x5F0A2F: call    sub_6899C0
0x5F0A34: test    bl, bl
0x5F0A36: jz      loc_5F0B62
0x5F0A3C: mov     ecx, esi; this
0x5F0A3E: call    TESObjectREFR_GetWorldSpace
0x5F0A43: mov     edi, eax
0x5F0A45: test    edi, edi
0x5F0A47: jz      short loc_5F0A84
0x5F0A49: mov     edx, [esi]
0x5F0A4B: fld     dword ptr ds:0A68FD8h
0x5F0A51: mov     eax, [edx+174h]
0x5F0A57: push    ebp; a4
0x5F0A58: push    offset sub_5E1260; a3
0x5F0A5D: push    ecx
0x5F0A5E: mov     ecx, esi
0x5F0A60: fstp    [esp+58h+a2]; a2
0x5F0A63: call    eax
0x5F0A65: fld     dword ptr ds:0A68FD8h
0x5F0A6B: mov     edx, [esi]
0x5F0A6D: push    eax; int
0x5F0A6E: mov     eax, [edx+174h]
0x5F0A74: push    ecx
0x5F0A75: mov     ecx, esi
0x5F0A77: fstp    [esp+60h+var_60]; float
0x5F0A7A: call    eax
0x5F0A7C: push    eax; int
0x5F0A7D: mov     ecx, edi
0x5F0A7F: call    sub_4F0750
0x5F0A84: mov     ecx, ds:0B3B778h; this
0x5F0A8A: test    ecx, ecx
0x5F0A8C: jnz     short loc_5F0AC2
0x5F0A8E: mov     ecx, esi; this
0x5F0A90: mov     ds:0B3B778h, esi
0x5F0A96: call    GetTeleportExtraData
0x5F0A9B: mov     ecx, eax
0x5F0A9D: call    sub_42B410
0x5F0AA2: mov     ecx, eax; this
0x5F0AA4: mov     ds:0B3B778h, eax
0x5F0AA9: call    GetTeleportExtraData
0x5F0AAE: mov     edi, eax
0x5F0AB0: mov     ecx, edi
0x5F0AB2: call    sub_42B460
0x5F0AB7: mov     ecx, edi
0x5F0AB9: mov     esi, eax
0x5F0ABB: call    sub_42B470
0x5F0AC0: jmp     short loc_5F0AD4
0x5F0AC2: call    TESObjectREFR_GetParentCell
0x5F0AC7: mov     ecx, ds:0B3B778h; this
0x5F0ACD: mov     esi, eax
0x5F0ACF: call    TESObjectREFR_GetWorldSpace
0x5F0AD4: mov     edi, eax
0x5F0AD6: mov     eax, ds:0B333C4h
0x5F0ADB: cmp     eax, ebp
0x5F0ADD: jnz     short loc_5F0B53
0x5F0ADF: cmp     dword ptr [eax+1E0h], 0
0x5F0AE6: jz      short loc_5F0B5E
0x5F0AE8: mov     ecx, ds:0B3B778h
0x5F0AEE: mov     eax, [ecx]
0x5F0AF0: mov     edx, [eax+174h]
0x5F0AF6: call    edx
0x5F0AF8: mov     edx, [eax]
0x5F0AFA: sub     esp, 0Ch
0x5F0AFD: mov     ecx, esp
0x5F0AFF: mov     [ecx], edx
0x5F0B01: mov     edx, [eax+4]
0x5F0B04: mov     eax, [eax+8]
0x5F0B07: mov     [ecx+4], edx
0x5F0B0A: mov     [ecx+8], eax
0x5F0B0D: mov     ecx, ds:0B333C4h
0x5F0B13: mov     ecx, [ecx+1E0h]; this
0x5F0B19: call    TESObjectREFR_SetPosition
0x5F0B1E: test    esi, esi
0x5F0B20: jz      short loc_5F0B9B
0x5F0B22: mov     ecx, ds:0B333A0h
0x5F0B28: push    0; a2
0x5F0B2A: push    esi; a1
0x5F0B2B: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F0B30: test    al, al
0x5F0B32: jz      short loc_5F0B9B
0x5F0B34: mov     edx, ds:0B3B778h
0x5F0B3A: mov     eax, ds:0B333C4h
0x5F0B3F: fld     dword ptr [edx+28h]
0x5F0B42: push    ecx
0x5F0B43: mov     ecx, [eax+1E0h]
0x5F0B49: fstp    [esp+50h+var_50]; float
0x5F0B4C: call    sub_4D8A10
0x5F0B51: jmp     short loc_5F0BB6
0x5F0B53: cmp     dword ptr [esp+18h], 0
0x5F0B58: jnz     loc_5F0C00
0x5F0B5E: xor     bl, bl
0x5F0B60: jmp     short loc_5F0B85
0x5F0B62: cmp     dword ptr [esp+18h], 0
0x5F0B67: jz      short loc_5F0B7A
0x5F0B69: mov     ecx, esi
0x5F0B6B: call    sub_4D8AF0
0x5F0B70: cmp     [esp+4Ch+var_30], eax
0x5F0B74: jnz     short loc_5F0B7A
0x5F0B76: mov     bl, 1
0x5F0B78: jmp     short loc_5F0B85
0x5F0B7A: mov     ecx, [esp+4Ch]
0x5F0B7E: mov     edx, [ecx+4]
0x5F0B81: mov     [esp+4Ch], edx
0x5F0B85: cmp     dword ptr [esp+4Ch], 0
0x5F0B8A: jz      loc_5F0D35
0x5F0B90: mov     esi, [esp+4Ch]
0x5F0B94: xor     edi, edi
0x5F0B96: jmp     loc_5F0A07
0x5F0B9B: fld     dword ptr ds:0A32048h
0x5F0BA1: push    ecx
0x5F0BA2: mov     ecx, ds:0B333C4h
0x5F0BA8: fstp    [esp+50h+var_50]; float
0x5F0BAB: mov     ecx, [ecx+1E0h]
0x5F0BB1: call    sub_4D89D0
0x5F0BB6: mov     edx, ds:0B333C4h
0x5F0BBC: mov     eax, [edx+1E0h]
0x5F0BC2: push    edi; int
0x5F0BC3: push    esi; int
0x5F0BC4: push    eax; Concurrency::details::SchedulerBase *
0x5F0BC5: call    sub_4DD4B0
0x5F0BCA: mov     ecx, ds:0B333A0h
0x5F0BD0: add     esp, 0Ch
0x5F0BD3: push    1; a2
0x5F0BD5: push    esi; a1
0x5F0BD6: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F0BDB: test    al, al
0x5F0BDD: jz      loc_5F0D35
0x5F0BE3: mov     ecx, ds:0B333C4h
0x5F0BE9: mov     ecx, [ecx+1E0h]
0x5F0BEF: mov     edx, [ecx]
0x5F0BF1: mov     eax, [edx+178h]
0x5F0BF7: push    0
0x5F0BF9: call    eax
0x5F0BFB: jmp     loc_5F0D35
0x5F0C00: mov     ecx, ds:0B3B778h
0x5F0C06: mov     edx, [ecx]
0x5F0C08: mov     eax, [edx+174h]
0x5F0C0E: call    eax
0x5F0C10: mov     edx, [eax]
0x5F0C12: mov     ebx, [esp+18h]
0x5F0C16: sub     esp, 0Ch
0x5F0C19: mov     ecx, esp
0x5F0C1B: mov     [ecx], edx
0x5F0C1D: mov     edx, [eax+4]
0x5F0C20: mov     eax, [eax+8]
0x5F0C23: mov     [ecx+4], edx
0x5F0C26: mov     [ecx+8], eax
0x5F0C29: mov     ecx, ebx; this
0x5F0C2B: call    TESObjectREFR_SetPosition
0x5F0C30: test    esi, esi
0x5F0C32: jz      short loc_5F0C5C
0x5F0C34: mov     ecx, ds:0B333A0h
0x5F0C3A: push    0; a2
0x5F0C3C: push    esi; a1
0x5F0C3D: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F0C42: test    al, al
0x5F0C44: jz      short loc_5F0C5C
0x5F0C46: push    ecx
0x5F0C47: mov     ecx, ds:0B3B778h
0x5F0C4D: fld     dword ptr [ecx+28h]
0x5F0C50: mov     ecx, ebx
0x5F0C52: fstp    [esp+50h+var_50]; float
0x5F0C55: call    sub_4D8A10
0x5F0C5A: jmp     short loc_5F0C6D
0x5F0C5C: fld     dword ptr ds:0A32048h
0x5F0C62: push    ecx
0x5F0C63: mov     ecx, ebx
0x5F0C65: fstp    [esp+50h+var_50]; float
0x5F0C68: call    sub_4D89D0
0x5F0C6D: push    edi; int
0x5F0C6E: push    esi; int
0x5F0C6F: push    ebx; Concurrency::details::SchedulerBase *
0x5F0C70: call    sub_4DD4B0
0x5F0C75: mov     ecx, ds:0B333A0h
0x5F0C7B: add     esp, 0Ch
0x5F0C7E: push    1; a2
0x5F0C80: push    esi; a1
0x5F0C81: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F0C86: test    al, al
0x5F0C88: jz      loc_5F0D35
0x5F0C8E: mov     edx, [ebx]
0x5F0C90: mov     eax, [edx+178h]
0x5F0C96: push    0
0x5F0C98: mov     ecx, ebx
0x5F0C9A: call    eax
0x5F0C9C: jmp     loc_5F0D35
0x5F0CA1: cmp     [esp+4Ch+var_35], 0
0x5F0CA6: jz      loc_5F0D35
0x5F0CAC: mov     ecx, ebp
0x5F0CAE: call    sub_5F0410
0x5F0CB3: mov     ecx, esi; this
0x5F0CB5: call    TESObjectREFR_GetParentCell
0x5F0CBA: mov     ecx, esi; this
0x5F0CBC: mov     edi, eax
0x5F0CBE: call    TESObjectREFR_GetWorldSpace
0x5F0CC3: mov     edx, [esi]
0x5F0CC5: mov     ebx, eax
0x5F0CC7: mov     eax, [edx+174h]
0x5F0CCD: mov     ecx, esi
0x5F0CCF: call    eax
0x5F0CD1: mov     edx, [eax]
0x5F0CD3: mov     ebp, [esp+18h]
0x5F0CD7: sub     esp, 0Ch
0x5F0CDA: mov     ecx, esp
0x5F0CDC: mov     [ecx], edx
0x5F0CDE: mov     edx, [eax+4]
0x5F0CE1: mov     eax, [eax+8]
0x5F0CE4: mov     [ecx+4], edx
0x5F0CE7: mov     [ecx+8], eax
0x5F0CEA: mov     ecx, ebp; this
0x5F0CEC: call    TESObjectREFR_SetPosition
0x5F0CF1: test    edi, edi
0x5F0CF3: jz      short loc_5F0D19
0x5F0CF5: mov     ecx, ds:0B333A0h
0x5F0CFB: push    0; a2
0x5F0CFD: push    edi; a1
0x5F0CFE: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F0D03: test    al, al
0x5F0D05: jz      short loc_5F0D19
0x5F0D07: fld     dword ptr [esi+28h]
0x5F0D0A: push    ecx
0x5F0D0B: mov     ecx, ebp
0x5F0D0D: fstp    [esp+50h+var_50]; float
0x5F0D10: call    sub_4D8A10
0x5F0D15: fldz
0x5F0D17: jmp     short loc_5F0D1F
0x5F0D19: fld     dword ptr ds:0A32048h
0x5F0D1F: push    ecx
0x5F0D20: mov     ecx, ebp
0x5F0D22: fstp    [esp+54h+var_54]; float
0x5F0D25: call    sub_4D89D0
0x5F0D2A: push    ebx; int
0x5F0D2B: push    edi; int
0x5F0D2C: push    ebp; Concurrency::details::SchedulerBase *
0x5F0D2D: call    sub_4DD4B0
0x5F0D32: add     esp, 0Ch
0x5F0D35: lea     ecx, [esp+54h+a4]
0x5F0D39: mov     [esp+54h+var_10], 0FFFFFFFFh
0x5F0D41: call    sub_68AA10
0x5F0D46: mov     ecx, [esp+54h+var_18]
0x5F0D4A: mov     large fs:0, ecx
0x5F0D51: pop     ecx
0x5F0D52: pop     edi
0x5F0D53: pop     esi
0x5F0D54: pop     ebp
0x5F0D55: pop     ebx
0x5F0D56: add     esp, 34h
0x5F0D59: retn    14h
