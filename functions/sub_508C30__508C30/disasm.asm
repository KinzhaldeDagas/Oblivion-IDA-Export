0x508C30: sub     esp, 30h
0x508C33: push    ebx
0x508C34: fldz
0x508C36: push    ebp
0x508C37: fst     dword ptr [esp+38h+var_24]
0x508C3B: mov     ebp, [esp+38h+a4]
0x508C3F: fst     [esp+38h+a2]
0x508C43: push    esi
0x508C44: fst     [esp+3Ch+var_2C]
0x508C48: push    edi
0x508C49: fstp    [esp+40h+var_20]
0x508C4D: lea     eax, [esp+40h+var_30]
0x508C51: push    eax
0x508C52: lea     ecx, [esp+44h+var_20]
0x508C56: push    ecx
0x508C57: lea     edx, [esp+48h+var_2C]
0x508C5B: push    edx; int
0x508C5C: mov     edx, [esp+4Ch+l]
0x508C60: lea     eax, [esp+4Ch+a2]
0x508C64: push    eax; a2
0x508C65: mov     eax, [esp+50h+arg_10]
0x508C69: lea     ecx, [esp+50h+var_24]
0x508C6D: push    ecx; int
0x508C6E: mov     ecx, [esp+54h+arg_C]
0x508C72: push    edx; l
0x508C73: mov     edx, [esp+58h+a3]
0x508C77: push    eax; a6
0x508C78: mov     eax, [esp+5Ch+arg_4]
0x508C7C: push    ecx; a5
0x508C7D: mov     ecx, [esp+60h+a1]
0x508C81: push    ebp; a4
0x508C82: push    edx; a3
0x508C83: push    eax; a2
0x508C84: push    ecx; a1
0x508C85: mov     [esp+70h+var_30], 0
0x508C8D: call    Script_ExtractArgs
0x508C92: add     esp, 30h
0x508C95: test    al, al
0x508C97: jnz     short loc_508CA1
0x508C99: pop     edi
0x508C9A: pop     esi
0x508C9B: pop     ebp
0x508C9C: pop     ebx
0x508C9D: add     esp, 30h
0x508CA0: retn
0x508CA1: mov     ecx, ds:0B333C4h
0x508CA7: cmp     ebp, ecx
0x508CA9: jnz     short loc_508CBF
0x508CAB: mov     edx, [ecx]
0x508CAD: mov     eax, [edx+198h]
0x508CB3: push    0
0x508CB5: call    eax
0x508CB7: test    al, al
0x508CB9: jnz     loc_508E12
0x508CBF: fld     [esp+44h+a2]
0x508CC3: fstp    [esp+44h+var_1C]
0x508CC7: fld     [esp+44h+var_2C]
0x508CCB: fstp    [esp+44h+var_18]
0x508CCF: fld     [esp+44h+var_30]
0x508CD3: fstp    [esp+44h+var_14]
0x508CD7: fldz
0x508CD9: fst     [esp+44h+var_10]
0x508CDD: fstp    [esp+44h+var_C]
0x508CE1: fld     dword ptr [esp+44h+var_24]
0x508CE5: fstp    [esp+44h+var_8]
0x508CE9: fld     [esp+44h+var_1C]
0x508CED: fistp   [esp+44h+var_20]
0x508CF1: mov     edi, [esp+44h+var_20]
0x508CF5: sar     edi, 0Ch
0x508CF8: fld     [esp+44h+var_18]
0x508CFC: fistp   [esp+44h+var_20]
0x508D00: mov     ebx, [esp+44h+var_20]
0x508D04: mov     ecx, [esp+44h+var_34]; this
0x508D08: sar     ebx, 0Ch
0x508D0B: push    ebx; signed int
0x508D0C: push    edi; signed int
0x508D0D: call    TESWorldSpace__GetCellAtCellCoord
0x508D12: cmp     ebp, ds:0B333C4h
0x508D18: mov     esi, eax
0x508D1A: jnz     short loc_508D95
0x508D1C: mov     ecx, ds:0B35B90h
0x508D22: test    ecx, ecx
0x508D24: jz      short loc_508D2B
0x508D26: call    sub_4BE5A0
0x508D2B: mov     ecx, ds:0B35B8Ch
0x508D31: test    ecx, ecx
0x508D33: jz      short loc_508D3A
0x508D35: call    sub_4BD980
0x508D3A: test    esi, esi
0x508D3C: jnz     short loc_508D53
0x508D3E: mov     ecx, [esp+44h+var_34]
0x508D42: push    ebx; int
0x508D43: push    edi; ArgList
0x508D44: call    sub_4F1630
0x508D49: mov     esi, eax
0x508D4B: test    esi, esi
0x508D4D: jz      loc_508E06
0x508D53: mov     ecx, [esp+44h+var_10]
0x508D57: mov     edx, [esp+44h+var_C]
0x508D5B: push    1; char
0x508D5D: push    esi; int
0x508D5E: sub     esp, 0Ch
0x508D61: mov     eax, esp
0x508D63: mov     [eax], ecx
0x508D65: mov     ecx, [esp+58h+var_8]
0x508D69: mov     [eax+4], edx
0x508D6C: mov     edx, [esp+58h+var_1C]
0x508D70: mov     [eax+8], ecx
0x508D73: mov     ecx, [esp+58h+var_18]
0x508D77: sub     esp, 0Ch
0x508D7A: mov     eax, esp
0x508D7C: mov     [eax], edx
0x508D7E: mov     edx, [esp+64h+var_14]
0x508D82: mov     [eax+4], ecx
0x508D85: mov     ecx, ds:0B333C4h; int
0x508D8B: mov     [eax+8], edx
0x508D8E: call    sub_66EAF0
0x508D93: jmp     short loc_508E06
0x508D95: mov     ecx, [esp+44h+var_1C]
0x508D99: mov     edx, [esp+44h+var_18]
0x508D9D: sub     esp, 0Ch
0x508DA0: mov     eax, esp
0x508DA2: mov     [eax], ecx
0x508DA4: mov     ecx, [esp+50h+var_14]
0x508DA8: mov     [eax+4], edx
0x508DAB: mov     [eax+8], ecx
0x508DAE: mov     ecx, ebp; this
0x508DB0: call    TESObjectREFR_SetPosition
0x508DB5: test    esi, esi
0x508DB7: jz      short loc_508DDE
0x508DB9: mov     ecx, ds:0B333A0h
0x508DBF: push    0; a2
0x508DC1: push    esi; a1
0x508DC2: call    TESObjectCELL_IsProcessLevel?LowHigh
0x508DC7: test    al, al
0x508DC9: jz      short loc_508DDE
0x508DCB: fld     [esp+44h+var_8]
0x508DCF: push    ecx
0x508DD0: mov     ecx, ebp
0x508DD2: fstp    [esp+48h+var_48]; float
0x508DD5: call    sub_4D8A10
0x508DDA: fldz
0x508DDC: jmp     short loc_508DEC
0x508DDE: cmp     ebp, ds:0B333C4h
0x508DE4: jz      short loc_508DF7
0x508DE6: fld     dword ptr ds:0A32048h
0x508DEC: push    ecx
0x508DED: mov     ecx, ebp
0x508DEF: fstp    [esp+4Ch+var_4C]; float
0x508DF2: call    sub_4D89D0
0x508DF7: mov     edx, [esp+4Ch+var_3C]
0x508DFB: push    edx; int
0x508DFC: push    esi; int
0x508DFD: push    ebp; Concurrency::details::SchedulerBase *
0x508DFE: call    sub_4DD4B0
0x508E03: add     esp, 0Ch
0x508E06: mov     ecx, ds:0B333C4h
0x508E0C: push    ebp
0x508E0D: call    sub_665260
0x508E12: pop     edi
0x508E13: pop     esi
0x508E14: pop     ebp
0x508E15: mov     al, 1
0x508E17: pop     ebx
0x508E18: add     esp, 30h
0x508E1B: retn
