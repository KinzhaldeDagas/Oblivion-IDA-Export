0x6B1900: mov     eax, ds:0B3C20Ch
0x6B1905: sub     esp, 10h
0x6B1908: push    ebp
0x6B1909: xor     ebp, ebp
0x6B190B: cmp     eax, ds:0B16304h
0x6B1911: jnb     loc_6B1CF9
0x6B1917: push    ebx
0x6B1918: mov     ebx, [esp+18h+arg_4]
0x6B191C: cmp     ebx, 0Fh
0x6B191F: jl      short loc_6B1924
0x6B1921: sub     ebx, 0Fh
0x6B1924: cmp     ds:0B3C0F0h, ebp
0x6B192A: jnz     short loc_6B193B
0x6B192C: mov     ecx, ds:0B33398h
0x6B1932: mov     edx, [ecx+24h]
0x6B1935: mov     ds:0B3C0F0h, edx
0x6B193B: push    esi
0x6B193C: push    edi
0x6B193D: mov     edi, [esp+20h+arg_0]
0x6B1941: mov     eax, [edi]
0x6B1943: mov     edx, [eax+174h]
0x6B1949: mov     ecx, edi
0x6B194B: call    edx
0x6B194D: mov     ecx, [eax]
0x6B194F: mov     [esp+20h+var_C], ecx
0x6B1953: mov     edx, [eax+4]
0x6B1956: mov     ecx, ds:0B333A0h
0x6B195C: mov     [esp+20h+var_8], edx
0x6B1960: mov     eax, [eax+8]
0x6B1963: mov     edx, [edi]
0x6B1965: mov     [esp+20h+var_4], eax
0x6B1969: mov     esi, [ecx+34h]
0x6B196C: mov     eax, [edx+190h]
0x6B1972: mov     ecx, edi
0x6B1974: call    eax
0x6B1976: test    al, al
0x6B1978: jz      loc_6B1CF6
0x6B197E: mov     edx, [edi]
0x6B1980: mov     eax, [edx+380h]
0x6B1986: mov     ecx, edi
0x6B1988: call    eax
0x6B198A: test    eax, eax
0x6B198C: jz      short loc_6B19CF
0x6B198E: mov     ecx, edi
0x6B1990: call    sub_5E3290
0x6B1995: test    al, al
0x6B1997: jnz     short loc_6B19CF
0x6B1999: mov     edx, [edi]
0x6B199B: mov     eax, [edx+380h]
0x6B19A1: push    0
0x6B19A3: mov     ecx, edi
0x6B19A5: call    eax
0x6B19A7: push    eax
0x6B19A8: call    sub_6B1210
0x6B19AD: mov     edx, [edi]
0x6B19AF: mov     eax, [edx+380h]
0x6B19B5: add     esp, 8
0x6B19B8: push    1
0x6B19BA: mov     ecx, edi
0x6B19BC: call    eax
0x6B19BE: push    eax
0x6B19BF: call    sub_6B1210
0x6B19C4: add     esp, 8
0x6B19C7: pop     edi
0x6B19C8: pop     esi
0x6B19C9: pop     ebx
0x6B19CA: pop     ebp
0x6B19CB: add     esp, 10h
0x6B19CE: retn
0x6B19CF: mov     ecx, edi
0x6B19D1: call    sub_5E3290
0x6B19D6: test    al, al
0x6B19D8: jz      short loc_6B19F5
0x6B19DA: push    0
0x6B19DC: push    edi
0x6B19DD: call    sub_6B1210
0x6B19E2: push    1
0x6B19E4: push    edi
0x6B19E5: call    sub_6B1210
0x6B19EA: add     esp, 10h
0x6B19ED: pop     edi
0x6B19EE: pop     esi
0x6B19EF: pop     ebx
0x6B19F0: pop     ebp
0x6B19F1: add     esp, 10h
0x6B19F4: retn
0x6B19F5: test    esi, esi
0x6B19F7: jnz     short loc_6B1A25
0x6B19F9: mov     ecx, ds:0B333A0h
0x6B19FF: push    esi; int
0x6B1A00: call    TES__GetCurrentWorldspace
0x6B1A05: fld     [esp+24h+var_8]
0x6B1A09: mov     ecx, ds:0B33A98h
0x6B1A0F: push    eax; int
0x6B1A10: sub     esp, 8
0x6B1A13: fstp    [esp+30h+var_2C]; float
0x6B1A17: fld     [esp+30h+var_C]
0x6B1A1B: fstp    [esp+30h+var_30]; float
0x6B1A1E: call    sub_44A270
0x6B1A23: mov     esi, eax
0x6B1A25: mov     edx, [edi]
0x6B1A27: mov     eax, [edx+190h]
0x6B1A2D: mov     ecx, edi
0x6B1A2F: call    eax
0x6B1A31: test    al, al
0x6B1A33: jz      loc_6B1B3C
0x6B1A39: test    esi, esi
0x6B1A3B: jz      loc_6B1B3C
0x6B1A41: mov     ecx, esi; this
0x6B1A43: call    TESObjectCELL_IsInterior
0x6B1A48: test    al, al
0x6B1A4A: jz      short loc_6B1A57
0x6B1A4C: movzx   ecx, byte ptr [esi+24h]
0x6B1A50: shr     ecx, 1
0x6B1A52: test    cl, 1
0x6B1A55: jnz     short loc_6B1A66
0x6B1A57: mov     ecx, esi; this
0x6B1A59: call    TESObjectCELL_IsInterior
0x6B1A5E: test    al, al
0x6B1A60: jnz     loc_6B1B3C
0x6B1A66: mov     ecx, edi
0x6B1A68: call    Actor_IsSwimming
0x6B1A6D: test    al, al
0x6B1A6F: jnz     loc_6B1B3C
0x6B1A75: fld     dword ptr ds:0A77830h
0x6B1A7B: push    ecx
0x6B1A7C: fstp    [esp+24h+var_24]; float
0x6B1A7F: push    esi; int
0x6B1A80: lea     edx, [esp+28h+var_C]
0x6B1A84: push    edx; int
0x6B1A85: mov     ecx, edi
0x6B1A87: call    Actor_IsUnderwater??
0x6B1A8C: test    al, al
0x6B1A8E: jz      loc_6B1B3C
0x6B1A94: mov     ecx, esi
0x6B1A96: call    sub_4CA6F0
0x6B1A9B: test    al, al
0x6B1A9D: jnz     loc_6B1B3C
0x6B1AA3: mov     ecx, ds:0B3C0F0h
0x6B1AA9: push    1
0x6B1AAB: push    410Ah
0x6B1AB0: push    offset aFstwaterland; "FSTWaterLand"
0x6B1AB5: call    PlaySound???
0x6B1ABA: mov     esi, eax
0x6B1ABC: test    esi, esi
0x6B1ABE: jz      loc_6B1CF6
0x6B1AC4: fld     [esp+20h+var_4]
0x6B1AC8: sub     esp, 0Ch
0x6B1ACB: fstp    [esp+2Ch+var_24]; float
0x6B1ACF: mov     ecx, esi
0x6B1AD1: fld     [esp+2Ch+var_8]
0x6B1AD5: fstp    [esp+2Ch+var_28]; float
0x6B1AD9: fld     [esp+2Ch+var_C]
0x6B1ADD: fstp    [esp+2Ch+var_2C]; float
0x6B1AE0: call    sub_6B7360
0x6B1AE5: mov     eax, [esi]
0x6B1AE7: mov     ecx, ds:0B3C0F0h
0x6B1AED: push    edi
0x6B1AEE: push    eax
0x6B1AEF: call    sub_6AC3E0
0x6B1AF4: fld     dword ptr ds:0A2FAACh
0x6B1AFA: push    ecx
0x6B1AFB: fstp    [esp+24h+var_24]; float
0x6B1AFE: call    Rand5
0x6B1B03: fsubr   qword ptr ds:0A77838h
0x6B1B09: mov     ecx, esi
0x6B1B0B: fstp    [esp+24h+var_10]
0x6B1B0F: fld     [esp+24h+var_10]
0x6B1B13: fstp    [esp+24h+var_24]; float
0x6B1B16: call    sub_6B7280
0x6B1B1B: push    0
0x6B1B1D: mov     ecx, esi
0x6B1B1F: call    sub_6B7190
0x6B1B24: mov     ecx, esi; this
0x6B1B26: call    sub_6B73E0
0x6B1B2B: push    esi
0x6B1B2C: call    FormHeapFree
0x6B1B31: add     esp, 4
0x6B1B34: pop     edi
0x6B1B35: pop     esi
0x6B1B36: pop     ebx
0x6B1B37: pop     ebp
0x6B1B38: add     esp, 10h
0x6B1B3B: retn
0x6B1B3C: cmp     ebx, 1Eh; switch 31 cases
0x6B1B3F: ja      short def_6B1B48; jumptable 006B1B48 default case, cases 1-3,6,7,10-29
0x6B1B41: movzx   ecx, ds:byte_6B1D1C[ebx]
0x6B1B48: jmp     ds:jpt_6B1B48[ecx*4]; switch jump
0x6B1B4F: mov     esi, ds:0B36240h; jumptable 006B1B48 case 4
0x6B1B55: jmp     short loc_6B1B7D
0x6B1B57: mov     esi, ds:0B36244h; jumptable 006B1B48 case 5
0x6B1B5D: jmp     short loc_6B1B7D
0x6B1B5F: mov     esi, ds:0B36248h; jumptable 006B1B48 cases 0,30
0x6B1B65: jmp     short loc_6B1B7D
0x6B1B67: mov     esi, ds:0B3624Ch; jumptable 006B1B48 case 8
0x6B1B6D: jmp     short loc_6B1B7D
0x6B1B6F: mov     esi, ds:0B36250h; jumptable 006B1B48 case 9
0x6B1B75: jmp     short loc_6B1B7D
0x6B1B77: mov     esi, ds:0B3623Ch; jumptable 006B1B48 default case, cases 1-3,6,7,10-29
0x6B1B7D: push    5
0x6B1B7F: mov     ecx, edi
0x6B1B81: call    sub_5E4330
0x6B1B86: mov     ebx, eax
0x6B1B88: test    ebx, ebx
0x6B1B8A: jz      short loc_6B1B91
0x6B1B8C: mov     ecx, [ebx+8]
0x6B1B8F: jmp     short loc_6B1B93
0x6B1B91: xor     ecx, ecx
0x6B1B93: or      eax, 0FFFFFFFFh
0x6B1B96: test    ecx, ecx
0x6B1B98: jz      short loc_6B1BA2
0x6B1B9A: call    TESObjectARMO_ISHeavyArmor
0x6B1B9F: movzx   eax, al
0x6B1BA2: sub     eax, 0
0x6B1BA5: jz      short loc_6B1BB4
0x6B1BA7: sub     eax, 1
0x6B1BAA: jnz     short loc_6B1BBA
0x6B1BAC: mov     ebp, ds:0B36234h
0x6B1BB2: jmp     short loc_6B1BBA
0x6B1BB4: mov     ebp, ds:0B36238h
0x6B1BBA: test    esi, esi
0x6B1BBC: jz      loc_6B1C4E
0x6B1BC2: mov     eax, [esi+0Ch]
0x6B1BC5: mov     ecx, ds:0B3C0F0h
0x6B1BCB: push    1
0x6B1BCD: push    410Ah
0x6B1BD2: push    eax
0x6B1BD3: call    OSGLobals_PlaySound
0x6B1BD8: mov     esi, eax
0x6B1BDA: test    esi, esi
0x6B1BDC: jz      short loc_6B1C4E
0x6B1BDE: fld     [esp+20h+var_4]
0x6B1BE2: sub     esp, 0Ch
0x6B1BE5: fstp    [esp+2Ch+var_24]; float
0x6B1BE9: mov     ecx, esi
0x6B1BEB: fld     [esp+2Ch+var_8]
0x6B1BEF: fstp    [esp+2Ch+var_28]; float
0x6B1BF3: fld     [esp+2Ch+var_C]
0x6B1BF7: fstp    [esp+2Ch+var_2C]; float
0x6B1BFA: call    sub_6B7360
0x6B1BFF: mov     edx, [esi]
0x6B1C01: mov     ecx, ds:0B3C0F0h
0x6B1C07: push    edi
0x6B1C08: push    edx
0x6B1C09: call    sub_6AC3E0
0x6B1C0E: fld     dword ptr ds:0A2FAACh
0x6B1C14: push    ecx
0x6B1C15: fstp    [esp+24h+var_24]; float
0x6B1C18: call    Rand5
0x6B1C1D: fsubr   qword ptr ds:0A77838h
0x6B1C23: mov     ecx, esi
0x6B1C25: fstp    [esp+24h+var_10]
0x6B1C29: fld     [esp+24h+var_10]
0x6B1C2D: fstp    [esp+24h+var_24]; float
0x6B1C30: call    sub_6B7280
0x6B1C35: push    0
0x6B1C37: mov     ecx, esi
0x6B1C39: call    sub_6B7190
0x6B1C3E: mov     ecx, esi; this
0x6B1C40: call    sub_6B73E0
0x6B1C45: push    esi
0x6B1C46: call    FormHeapFree
0x6B1C4B: add     esp, 4
0x6B1C4E: test    ebp, ebp
0x6B1C50: jz      loc_6B1CE2
0x6B1C56: mov     eax, [ebp+0Ch]
0x6B1C59: mov     ecx, ds:0B3C0F0h
0x6B1C5F: push    1
0x6B1C61: push    410Ah
0x6B1C66: push    eax
0x6B1C67: call    OSGLobals_PlaySound
0x6B1C6C: mov     esi, eax
0x6B1C6E: test    esi, esi
0x6B1C70: jz      short loc_6B1CE2
0x6B1C72: fld     [esp+20h+var_4]
0x6B1C76: sub     esp, 0Ch
0x6B1C79: fstp    [esp+2Ch+var_24]; float
0x6B1C7D: mov     ecx, esi
0x6B1C7F: fld     [esp+2Ch+var_8]
0x6B1C83: fstp    [esp+2Ch+var_28]; float
0x6B1C87: fld     [esp+2Ch+var_C]
0x6B1C8B: fstp    [esp+2Ch+var_2C]; float
0x6B1C8E: call    sub_6B7360
0x6B1C93: mov     eax, [esi]
0x6B1C95: mov     ecx, ds:0B3C0F0h
0x6B1C9B: push    edi
0x6B1C9C: push    eax
0x6B1C9D: call    sub_6AC3E0
0x6B1CA2: fld     dword ptr ds:0A2FAACh
0x6B1CA8: push    ecx
0x6B1CA9: fstp    [esp+24h+var_24]; float
0x6B1CAC: call    Rand5
0x6B1CB1: fsubr   qword ptr ds:0A77838h
0x6B1CB7: mov     ecx, esi
0x6B1CB9: fstp    [esp+24h+var_10]
0x6B1CBD: fld     [esp+24h+var_10]
0x6B1CC1: fstp    [esp+24h+var_24]; float
0x6B1CC4: call    sub_6B7280
0x6B1CC9: push    0
0x6B1CCB: mov     ecx, esi
0x6B1CCD: call    sub_6B7190
0x6B1CD2: mov     ecx, esi; this
0x6B1CD4: call    sub_6B73E0
0x6B1CD9: push    esi
0x6B1CDA: call    FormHeapFree
0x6B1CDF: add     esp, 4
0x6B1CE2: test    ebx, ebx
0x6B1CE4: jz      short loc_6B1CF6
0x6B1CE6: mov     ecx, ebx
0x6B1CE8: call    ContainerEntryExtraData_DestroyDataTable
0x6B1CED: push    ebx
0x6B1CEE: call    FormHeapFree
0x6B1CF3: add     esp, 4
0x6B1CF6: pop     edi
0x6B1CF7: pop     esi
0x6B1CF8: pop     ebx
0x6B1CF9: pop     ebp
0x6B1CFA: add     esp, 10h
0x6B1CFD: retn
