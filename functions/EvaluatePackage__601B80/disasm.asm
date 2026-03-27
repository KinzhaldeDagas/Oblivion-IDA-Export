0x601B80: sub     esp, 8
0x601B83: push    esi
0x601B84: mov     esi, ecx
0x601B86: cmp     dword ptr [esi+58h], 0
0x601B8A: jz      short loc_601BA7
0x601B8C: mov     ecx, [esi+58h]
0x601B8F: mov     eax, [ecx]
0x601B91: mov     edx, [eax+184h]
0x601B97: call    edx
0x601B99: test    eax, eax
0x601B9B: jz      short loc_601BA7
0x601B9D: cmp     byte ptr [eax+20h], 12h
0x601BA1: jz      loc_60204B
0x601BA7: mov     eax, [esi]
0x601BA9: mov     edx, [eax+198h]
0x601BAF: push    1
0x601BB1: mov     ecx, esi
0x601BB3: call    edx
0x601BB5: test    al, al
0x601BB7: jnz     loc_60204B
0x601BBD: mov     ecx, [esi+58h]
0x601BC0: test    ecx, ecx
0x601BC2: push    edi
0x601BC3: jz      loc_601FE6
0x601BC9: mov     eax, [ecx]
0x601BCB: mov     edx, [eax+184h]
0x601BD1: call    edx
0x601BD3: test    eax, eax
0x601BD5: jz      short loc_601C02
0x601BD7: mov     al, [eax+20h]
0x601BDA: cmp     al, 17h
0x601BDC: jz      loc_60204A
0x601BE2: cmp     al, 1Eh
0x601BE4: jz      loc_60204A
0x601BEA: cmp     al, 18h
0x601BEC: jnz     short loc_601C02
0x601BEE: mov     eax, [esi]
0x601BF0: mov     edx, [eax+388h]
0x601BF6: mov     ecx, esi
0x601BF8: call    edx
0x601BFA: test    eax, eax
0x601BFC: jnz     loc_60204A
0x601C02: mov     ecx, [esi+58h]
0x601C05: xor     edi, edi
0x601C07: cmp     [ecx+8], edi
0x601C0A: jz      loc_601CC5
0x601C10: mov     eax, [ecx]
0x601C12: mov     edx, [eax+0B8h]
0x601C18: push    esi
0x601C19: call    edx
0x601C1B: mov     eax, [esi+58h]
0x601C1E: mov     edi, [eax+8]
0x601C21: mov     ecx, edi
0x601C23: call    sub_565DC0
0x601C28: test    al, al
0x601C2A: jz      short loc_601C73
0x601C2C: mov     edx, [esi]
0x601C2E: fld     dword ptr ds:0A5B6C0h
0x601C34: mov     eax, [edx+174h]
0x601C3A: push    esi; a7
0x601C3B: push    offset sub_645AF0; a6
0x601C40: push    ecx
0x601C41: mov     ecx, esi
0x601C43: fstp    [esp+1Ch+a5]; a5
0x601C46: call    eax
0x601C48: fld     dword ptr ds:0A5B6C0h
0x601C4E: mov     edx, [esi]
0x601C50: push    eax; a4
0x601C51: mov     eax, [edx+174h]
0x601C57: push    ecx
0x601C58: mov     ecx, esi
0x601C5A: fstp    [esp+24h+a3]; a3
0x601C5D: call    eax
0x601C5F: push    eax; a2
0x601C60: mov     ecx, esi; this
0x601C62: call    TESObjectREFR_GetParentCell
0x601C67: mov     ecx, ds:0B33A98h
0x601C6D: push    eax; a1
0x601C6E: call    sub_446B90
0x601C73: mov     ecx, edi
0x601C75: call    sub_565DB0
0x601C7A: test    al, al
0x601C7C: jz      short loc_601CC5
0x601C7E: mov     edx, [esi]
0x601C80: fld     dword ptr ds:0A5B6C0h
0x601C86: mov     eax, [edx+174h]
0x601C8C: push    esi; a7
0x601C8D: push    offset sub_645A30; a6
0x601C92: push    ecx
0x601C93: mov     ecx, esi
0x601C95: fstp    [esp+1Ch+a5]; a5
0x601C98: call    eax
0x601C9A: fld     dword ptr ds:0A5B6C0h
0x601CA0: mov     edx, [esi]
0x601CA2: push    eax; a4
0x601CA3: mov     eax, [edx+174h]
0x601CA9: push    ecx
0x601CAA: mov     ecx, esi
0x601CAC: fstp    [esp+24h+a3]; a3
0x601CAF: call    eax
0x601CB1: push    eax; a2
0x601CB2: mov     ecx, esi; this
0x601CB4: call    TESObjectREFR_GetParentCell
0x601CB9: mov     ecx, ds:0B33A98h
0x601CBF: push    eax; a1
0x601CC0: call    sub_446B90
0x601CC5: mov     ecx, [esi+58h]
0x601CC8: mov     edx, [ecx]
0x601CCA: mov     eax, [edx+248h]
0x601CD0: call    eax
0x601CD2: test    al, al
0x601CD4: jz      short loc_601D1E
0x601CD6: mov     ecx, [esi+58h]
0x601CD9: mov     edx, [ecx]
0x601CDB: mov     eax, [edx+0CCh]
0x601CE1: call    eax
0x601CE3: test    eax, eax
0x601CE5: jz      short loc_601D1E
0x601CE7: mov     ecx, [esi+58h]
0x601CEA: mov     edx, [ecx]
0x601CEC: mov     eax, [edx+0CCh]
0x601CF2: call    eax
0x601CF4: mov     edx, [eax]
0x601CF6: mov     ecx, eax
0x601CF8: mov     eax, [edx+190h]
0x601CFE: call    eax
0x601D00: test    al, al
0x601D02: jz      short loc_601D1E
0x601D04: mov     ecx, [esi+58h]
0x601D07: mov     edx, [ecx]
0x601D09: mov     eax, [edx+0CCh]
0x601D0F: call    eax
0x601D11: test    eax, eax
0x601D13: jz      short loc_601D1E
0x601D15: push    esi
0x601D16: lea     ecx, [eax+44h]
0x601D19: call    sub_424D00
0x601D1E: push    ebx; int
0x601D1F: mov     ecx, esi; int
0x601D21: call    sub_5EAE70
0x601D26: mov     ecx, [esi+58h]
0x601D29: mov     ebx, [ecx+8]
0x601D2C: test    ebx, ebx
0x601D2E: jz      short loc_601D48
0x601D30: mov     eax, ecx
0x601D32: mov     ecx, [eax+8]
0x601D35: call    sub_5660B0
0x601D3A: test    al, al
0x601D3C: jnz     short loc_601D48
0x601D3E: mov     edx, [esi+58h]
0x601D41: mov     dword ptr [edx+8], 0
0x601D48: mov     ecx, [esi+58h]
0x601D4B: mov     eax, [ecx]
0x601D4D: mov     edx, [eax+3C0h]
0x601D53: push    esi
0x601D54: call    edx
0x601D56: mov     ecx, [esi+58h]
0x601D59: mov     eax, [ecx]
0x601D5B: mov     edx, [eax+394h]
0x601D61: push    0
0x601D63: call    edx
0x601D65: mov     ecx, [esi+58h]
0x601D68: mov     eax, [ecx]
0x601D6A: mov     edx, [eax+18h]
0x601D6D: push    1
0x601D6F: push    esi
0x601D70: call    edx
0x601D72: mov     eax, [esi+58h]
0x601D75: cmp     [eax+8], edi
0x601D78: jz      short loc_601D8C
0x601D7A: push    800h
0x601D7F: lea     ecx, [esi+44h]
0x601D82: push    ecx
0x601D83: push    edi
0x601D84: call    Script_AddEventToExtraScript
0x601D89: add     esp, 0Ch
0x601D8C: test    ebx, ebx
0x601D8E: jz      loc_601E3F
0x601D94: cmp     byte ptr [ebx+20h], 4
0x601D98: jz      short loc_601DB2
0x601D9A: mov     eax, [ebx+1Ch]
0x601D9D: mov     edx, eax
0x601D9F: shr     edx, 14h
0x601DA2: test    dl, 1
0x601DA5: jnz     short loc_601DB2
0x601DA7: shr     eax, 15h
0x601DAA: test    al, 1
0x601DAC: jz      loc_601E3F
0x601DB2: mov     eax, [esi]
0x601DB4: mov     edx, [eax+170h]
0x601DBA: mov     ecx, esi
0x601DBC: call    edx
0x601DBE: movzx   edx, byte ptr [eax+4]
0x601DC2: xor     ecx, ecx
0x601DC4: xor     edi, edi
0x601DC6: sub     edx, 23h ; '#'
0x601DC9: jz      short loc_601DD4
0x601DCB: sub     edx, 1
0x601DCE: jnz     short loc_601DD6
0x601DD0: mov     edi, eax
0x601DD2: jmp     short loc_601DD6
0x601DD4: mov     ecx, eax; int
0x601DD6: mov     eax, [esi+58h]
0x601DD9: mov     eax, [eax+8]
0x601DDC: test    eax, eax
0x601DDE: mov     byte ptr [esp+14h+var_4], 1
0x601DE3: mov     byte ptr [esp+14h+var_8], 1
0x601DE8: jz      short loc_601DF5
0x601DEA: mov     edx, [eax+1Ch]
0x601DED: shr     edx, 14h
0x601DF0: test    dl, 1
0x601DF3: jz      short loc_601DFA
0x601DF5: mov     byte ptr [esp+14h+var_4], 0
0x601DFA: test    eax, eax
0x601DFC: jz      short loc_601E08
0x601DFE: mov     eax, [eax+1Ch]
0x601E01: shr     eax, 15h
0x601E04: test    al, 1
0x601E06: jz      short loc_601E0D
0x601E08: mov     byte ptr [esp+14h+var_8], 0
0x601E0D: test    ecx, ecx
0x601E0F: jz      short loc_601E27
0x601E11: mov     edx, [esp+14h+var_8]
0x601E15: mov     eax, [esp+14h+var_4]
0x601E19: push    1; char
0x601E1B: push    0; int
0x601E1D: push    edx; int
0x601E1E: push    eax; int
0x601E1F: push    esi; int
0x601E20: call    sub_5227A0
0x601E25: jmp     short loc_601E3F
0x601E27: test    edi, edi
0x601E29: jz      short loc_601E3F
0x601E2B: mov     ecx, [esp+14h+var_8]
0x601E2F: mov     edx, [esp+14h+var_4]
0x601E33: push    1
0x601E35: push    ecx
0x601E36: push    edx
0x601E37: push    esi
0x601E38: mov     ecx, edi
0x601E3A: call    sub_51E240
0x601E3F: cmp     dword ptr [esi+58h], 0
0x601E43: jz      short loc_601E53
0x601E45: mov     ecx, [esi+58h]
0x601E48: mov     eax, [ecx]
0x601E4A: mov     edx, [eax+194h]
0x601E50: push    esi
0x601E51: call    edx
0x601E53: mov     eax, [esi]
0x601E55: mov     edx, [eax+18Ch]
0x601E5B: mov     ecx, esi
0x601E5D: call    edx
0x601E5F: test    eax, eax
0x601E61: jz      loc_601FE5
0x601E67: cmp     eax, 4
0x601E6A: jz      loc_601F80
0x601E70: cmp     eax, 9
0x601E73: jz      loc_601FD9
0x601E79: mov     eax, [esi]
0x601E7B: mov     edx, [eax+380h]
0x601E81: mov     ecx, esi
0x601E83: call    edx
0x601E85: test    eax, eax
0x601E87: jz      loc_601F26
0x601E8D: mov     eax, [esi]
0x601E8F: mov     edx, [eax+380h]
0x601E95: push    ebp
0x601E96: mov     ecx, esi
0x601E98: call    edx
0x601E9A: mov     edi, eax
0x601E9C: mov     eax, [edi]
0x601E9E: mov     edx, [eax+164h]
0x601EA4: mov     ecx, edi
0x601EA6: call    edx
0x601EA8: mov     ebp, eax
0x601EAA: test    ebp, ebp
0x601EAC: jz      short loc_601EC8
0x601EAE: fldz
0x601EB0: push    ecx
0x601EB1: fstp    [esp+10h+var_10]; float
0x601EB4: mov     ecx, ebp
0x601EB6: push    5; int
0x601EB8: call    sub_470FC0
0x601EBD: push    0
0x601EBF: push    1
0x601EC1: mov     ecx, ebp
0x601EC3: call    sub_475440
0x601EC8: push    0
0x601ECA: mov     ecx, esi
0x601ECC: call    sub_5E13D0
0x601ED1: mov     eax, [esi]
0x601ED3: mov     edx, [eax+154h]
0x601ED9: mov     ecx, esi
0x601EDB: call    edx
0x601EDD: mov     ecx, esi; this
0x601EDF: mov     ebx, eax
0x601EE1: call    MobileObject_GetCharProxy
0x601EE6: mov     [esp+0Ch+arg_4], eax
0x601EEA: call    sub_531D80
0x601EEF: mov     ecx, [esp+0Ch+arg_4]
0x601EF3: mov     ebp, eax
0x601EF5: push    ebp
0x601EF6: call    sub_5EA350
0x601EFB: push    0
0x601EFD: push    1
0x601EFF: push    ebp
0x601F00: push    ebx
0x601F01: call    sub_88D0E0
0x601F06: mov     eax, [edi]
0x601F08: mov     edx, [eax+38Ch]
0x601F0E: add     esp, 10h
0x601F11: push    0
0x601F13: mov     ecx, edi
0x601F15: call    edx
0x601F17: mov     eax, [esi]
0x601F19: mov     edx, [eax+384h]
0x601F1F: push    0
0x601F21: mov     ecx, esi
0x601F23: call    edx
0x601F25: pop     ebp
0x601F26: push    0
0x601F28: mov     ecx, esi
0x601F2A: call    sub_65AC20
0x601F2F: mov     ecx, [esi+58h]
0x601F32: mov     eax, [ecx]
0x601F34: mov     edx, [eax+370h]
0x601F3A: push    7Fh
0x601F3C: push    0
0x601F3E: push    0
0x601F40: push    esi
0x601F41: call    edx
0x601F43: push    0
0x601F45: push    0FFFFFFFFh
0x601F47: mov     ecx, esi
0x601F49: call    HighPRocess_DoAction?????
0x601F4E: mov     eax, [esi]
0x601F50: mov     edx, [eax+164h]
0x601F56: mov     ecx, esi
0x601F58: call    edx
0x601F5A: mov     edi, eax
0x601F5C: test    edi, edi
0x601F5E: jz      loc_601FE5
0x601F64: fldz
0x601F66: push    ecx
0x601F67: fstp    [esp+18h+var_18]; float
0x601F6A: mov     ecx, edi
0x601F6C: push    5; int
0x601F6E: call    sub_470FC0
0x601F73: push    0
0x601F75: push    1
0x601F77: mov     ecx, edi
0x601F79: call    sub_475440
0x601F7E: jmp     short loc_601FE5
0x601F80: mov     eax, [esi]
0x601F82: mov     edx, [eax+380h]
0x601F88: mov     ecx, esi
0x601F8A: call    edx
0x601F8C: test    eax, eax
0x601F8E: jz      short loc_601FD9
0x601F90: mov     eax, [esi+58h]
0x601F93: mov     eax, [eax+8]
0x601F96: test    eax, eax
0x601F98: jz      short loc_601FA5
0x601F9A: mov     ecx, [eax+1Ch]
0x601F9D: shr     ecx, 17h
0x601FA0: test    cl, 1
0x601FA3: jnz     short loc_601FD9
0x601FA5: mov     edx, [esi]
0x601FA7: mov     eax, [edx+380h]
0x601FAD: mov     ecx, esi
0x601FAF: call    eax
0x601FB1: mov     ecx, eax
0x601FB3: call    sub_5E9A60
0x601FB8: test    al, al
0x601FBA: jnz     short loc_601FCF
0x601FBC: mov     edx, [esi]
0x601FBE: mov     eax, [edx+380h]
0x601FC4: mov     ecx, esi
0x601FC6: call    eax
0x601FC8: mov     ecx, eax; int
0x601FCA: call    sub_5F80D0
0x601FCF: mov     edx, [esi]
0x601FD1: mov     eax, [edx+230h]
0x601FD7: jmp     short loc_601FE1
0x601FD9: mov     edx, [esi]
0x601FDB: mov     eax, [edx+320h]
0x601FE1: mov     ecx, esi
0x601FE3: call    eax
0x601FE5: pop     ebx
0x601FE6: cmp     dword ptr [esi+58h], 0
0x601FEA: jz      short loc_602023
0x601FEC: mov     ecx, [esi+58h]
0x601FEF: mov     edx, [ecx]
0x601FF1: mov     eax, [edx+8]
0x601FF4: call    eax
0x601FF6: test    eax, eax
0x601FF8: jz      short loc_602023
0x601FFA: mov     ecx, [esi+58h]
0x601FFD: mov     edi, [ecx]
0x601FFF: mov     ecx, offset TimeGlobals
0x602004: call    TimeGlobals_GetGameHour
0x602009: fsub    qword ptr ds:0A2F928h
0x60200F: mov     edx, [edi+1Ch]
0x602012: push    ecx
0x602013: mov     ecx, [esi+58h]
0x602016: fstp    [esp+14h+var_4]
0x60201A: fld     [esp+14h+var_4]
0x60201E: fstp    [esp+14h+var_14]
0x602021: call    edx
0x602023: mov     eax, [esi+58h]
0x602026: mov     eax, [eax+8]
0x602029: test    eax, eax
0x60202B: jz      short loc_60204A
0x60202D: mov     ecx, [eax+28h]
0x602030: test    ecx, ecx
0x602032: jz      short loc_60204A
0x602034: mov     edx, [esi+58h]
0x602037: mov     edi, [edx]
0x602039: call    sub_452A60
0x60203E: mov     ecx, [esi+58h]
0x602041: push    eax
0x602042: mov     eax, [edi+100h]
0x602048: call    eax
0x60204A: pop     edi
0x60204B: pop     esi
0x60204C: add     esp, 8
0x60204F: retn
