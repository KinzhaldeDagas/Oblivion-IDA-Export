0x5DBBD0: push    0FFFFFFFFh
0x5DBBD2: push    offset SEH_5DBBD0
0x5DBBD7: mov     eax, large fs:0
0x5DBBDD: push    eax
0x5DBBDE: sub     esp, 38h
0x5DBBE1: mov     eax, ds:0B30AACh
0x5DBBE6: xor     eax, esp
0x5DBBE8: mov     [esp+44h+var_10], eax
0x5DBBEC: push    ebx; a3
0x5DBBED: push    ebp; a3
0x5DBBEE: push    esi; a3
0x5DBBEF: push    edi; a3
0x5DBBF0: mov     eax, ds:0B30AACh
0x5DBBF5: xor     eax, esp
0x5DBBF7: push    eax; a3
0x5DBBF8: lea     eax, [esp+58h+var_C]
0x5DBBFC: mov     large fs:0, eax
0x5DBC02: mov     ebp, dword ptr [esp+58h+arg_0]; char
0x5DBC06: cmp     ebp, 22h ; '"'
0x5DBC09: mov     edi, [esp+58h+arg_4]
0x5DBC0D: mov     esi, ecx
0x5DBC0F: jz      short loc_5DBC1F
0x5DBC11: cmp     ebp, 18h
0x5DBC14: jz      short loc_5DBC1F
0x5DBC16: cmp     ebp, 0Eh
0x5DBC19: jnz     loc_5DC4F8
0x5DBC1F: push    4; int
0x5DBC21: call    sub_57DE50
0x5DBC26: add     esp, 4
0x5DBC29: mov     ecx, edi
0x5DBC2B: call    sub_588D90
0x5DBC30: fsub    qword ptr ds:0A2FAA0h
0x5DBC36: push    ecx
0x5DBC37: mov     ecx, [esi+54h]; this
0x5DBC3A: fstp    [esp+5Ch+a3]; a3
0x5DBC3E: fld     [esp+5Ch+a3]
0x5DBC42: fstp    [esp+5Ch+a2]; a3
0x5DBC45: push    0FABh; a2
0x5DBC4A: call    Tile_SetFloat
0x5DBC4F: push    0FCBh
0x5DBC54: mov     ecx, edi
0x5DBC56: call    Tile_GetFloat
0x5DBC5B: fsub    qword ptr ds:0A49310h
0x5DBC61: push    ecx
0x5DBC62: mov     ecx, [esi+54h]; this
0x5DBC65: fstp    [esp+5Ch+a3]; a3
0x5DBC69: fld     [esp+5Ch+a3]
0x5DBC6D: fstp    [esp+5Ch+a2]; a3
0x5DBC70: push    0FCBh; a2
0x5DBC75: call    Tile_SetFloat
0x5DBC7A: push    0FCAh
0x5DBC7F: mov     ecx, edi
0x5DBC81: call    Tile_GetFloat
0x5DBC86: fsub    qword ptr ds:0A49310h
0x5DBC8C: push    ecx
0x5DBC8D: mov     ecx, [esi+54h]; this
0x5DBC90: fstp    [esp+5Ch+a3]
0x5DBC94: fld     [esp+5Ch+a3]
0x5DBC98: fstp    [esp+5Ch+a2]; a3
0x5DBC9B: push    0FCAh; a2
0x5DBCA0: call    Tile_SetFloat
0x5DBCA5: mov     ecx, edi
0x5DBCA7: call    sub_588C50
0x5DBCAC: push    ecx
0x5DBCAD: mov     ecx, [esi+54h]; this
0x5DBCB0: fstp    [esp+5Ch+a2]; a3
0x5DBCB3: push    0FADh; a2
0x5DBCB8: call    Tile_SetFloat
0x5DBCBD: mov     ecx, edi
0x5DBCBF: call    sub_588CF0
0x5DBCC4: fadd    qword ptr ds:0A3D0C0h
0x5DBCCA: push    ecx
0x5DBCCB: mov     ecx, [esi+54h]; this
0x5DBCCE: fstp    [esp+5Ch+a3]
0x5DBCD2: fld     [esp+5Ch+a3]
0x5DBCD6: fstp    [esp+5Ch+a2]; a3
0x5DBCD9: push    0FACh; a2
0x5DBCDE: call    Tile_SetFloat
0x5DBCE3: fld     dword ptr ds:0A379B4h
0x5DBCE9: mov     ecx, [esi+54h]; this
0x5DBCEC: push    ecx
0x5DBCED: fstp    [esp+5Ch+a2]; a3
0x5DBCF0: push    0FA1h; a2
0x5DBCF5: call    Tile_SetFloat
0x5DBCFA: cmp     ebp, 18h
0x5DBCFD: jnz     short loc_5DBD5C
0x5DBCFF: push    0FAEh
0x5DBD04: mov     ecx, edi
0x5DBD06: call    Tile_GetFloat
0x5DBD0B: call    Double_To_SInt32
0x5DBD10: fld     dword ptr ds:0A379B4h
0x5DBD16: push    ecx
0x5DBD17: mov     ecx, [esi+58h]; this
0x5DBD1A: fstp    [esp+5Ch+a2]; a3
0x5DBD1D: push    0FB2h; a2
0x5DBD22: mov     edi, eax
0x5DBD24: call    Tile_SetFloat
0x5DBD29: push    edi
0x5DBD2A: call    ActorValue_GetIcon
0x5DBD2F: mov     ecx, [esi+58h]
0x5DBD32: add     esp, 4
0x5DBD35: push    eax
0x5DBD36: push    0FB0h
0x5DBD3B: call    Tile_SetString
0x5DBD40: push    edi
0x5DBD41: call    ActorValue_GetDescription
0x5DBD46: mov     ecx, [esi+58h]
0x5DBD49: add     esp, 4
0x5DBD4C: push    eax
0x5DBD4D: push    0FB1h
0x5DBD52: call    Tile_SetString
0x5DBD57: jmp     loc_5DC4C1
0x5DBD5C: cmp     ebp, 0Eh
0x5DBD5F: jnz     loc_5DC377
0x5DBD65: push    0FAEh
0x5DBD6A: mov     ecx, edi
0x5DBD6C: call    Tile_GetFloat
0x5DBD71: call    Double_To_SInt32
0x5DBD76: cmp     eax, 4
0x5DBD79: jl      loc_5DBE51
0x5DBD7F: lea     edi, [eax+4]
0x5DBD82: push    edi
0x5DBD83: call    ActorValue_GetDescription
0x5DBD88: xor     ebx, ebx
0x5DBD8A: add     esp, 4
0x5DBD8D: push    ebx; a3
0x5DBD8E: push    eax; a2
0x5DBD8F: lea     ecx, [esp+60h+var_40]; this
0x5DBD93: mov     [esp+60h+var_40.m_data], ebx
0x5DBD97: mov     [esp+60h+var_40.m_dataLen], bx
0x5DBD9C: mov     [esp+60h+var_40.m_bufLen], bx
0x5DBDA1: call    BSStringT_Set
0x5DBDA6: mov     ax, [esp+58h+var_40.m_dataLen]
0x5DBDAB: cmp     ax, 0FFFFh
0x5DBDAF: mov     ebp, [esp+58h+var_40.m_data]
0x5DBDB3: mov     [esp+58h+var_4], ebx
0x5DBDB7: jnz     short loc_5DBDCD
0x5DBDB9: mov     eax, ebp
0x5DBDBB: lea     edx, [eax+1]
0x5DBDBE: mov     edi, edi
0x5DBDC0: mov     cl, [eax]
0x5DBDC2: add     eax, 1
0x5DBDC5: test    cl, cl
0x5DBDC7: jnz     short loc_5DBDC0
0x5DBDC9: sub     eax, edx
0x5DBDCB: jmp     short loc_5DBDD0
0x5DBDCD: movzx   eax, ax
0x5DBDD0: cmp     eax, ebx
0x5DBDD2: jz      short loc_5DBE43
0x5DBDD4: mov     ecx, [esi+58h]; this
0x5DBDD7: fld1
0x5DBDD9: push    ecx
0x5DBDDA: fstp    [esp+5Ch+a2]; a3
0x5DBDDD: push    0FB2h; a2
0x5DBDE2: call    Tile_SetFloat
0x5DBDE7: push    edi
0x5DBDE8: call    ActorValue_GetIcon
0x5DBDED: mov     ecx, [esi+58h]
0x5DBDF0: add     esp, 4
0x5DBDF3: push    eax
0x5DBDF4: push    0FB0h
0x5DBDF9: call    Tile_SetString
0x5DBDFE: mov     ecx, [esi+58h]
0x5DBE01: push    ebp
0x5DBE02: push    0FB1h
0x5DBE07: call    Tile_SetString
0x5DBE0C: mov     ecx, [esi+58h]
0x5DBE0F: push    0FAFh
0x5DBE14: call    Tile_GetFloat
0x5DBE19: mov     ecx, [esi+58h]
0x5DBE1C: sub     esp, 8
0x5DBE1F: fstp    [esp+60h+a2]; float
0x5DBE23: fld1
0x5DBE25: fstp    [esp+60h+var_60]; float
0x5DBE28: push    0FAEh
0x5DBE2D: call    Tile_GetFloat
0x5DBE32: push    ecx
0x5DBE33: mov     ecx, [esi+58h]; int
0x5DBE36: fstp    [esp+64h+var_64]; float
0x5DBE39: push    0FAEh; int
0x5DBE3E: call    sub_589980
0x5DBE43: push    ebp
0x5DBE44: call    FormHeapFree
0x5DBE49: add     esp, 4
0x5DBE4C: jmp     loc_5DC4F8
0x5DBE51: test    eax, eax
0x5DBE53: jnz     short loc_5DBE88
0x5DBE55: mov     ecx, ds:0B333C4h
0x5DBE5B: call    Actor__GetRaceIfNPC
0x5DBE60: lea     ecx, [eax+24h]
0x5DBE63: mov     eax, [ecx]
0x5DBE65: mov     edx, [eax+10h]
0x5DBE68: push    43534544h
0x5DBE6D: push    0
0x5DBE6F: call    edx
0x5DBE71: push    eax
0x5DBE72: lea     ecx, [esp+5Ch+var_38]
0x5DBE76: call    BSStringT_constr_str
0x5DBE7B: mov     [esp+58h+var_4], 1
0x5DBE83: jmp     loc_5DC2F8
0x5DBE88: cmp     eax, 1
0x5DBE8B: jnz     loc_5DC05D
0x5DBE91: mov     ecx, ds:0B333C4h
0x5DBE97: mov     edx, [ecx]
0x5DBE99: mov     eax, [edx+268h]
0x5DBE9F: call    eax
0x5DBEA1: test    eax, eax
0x5DBEA3: jz      loc_5DC4F8
0x5DBEA9: mov     ecx, ds:0B333C4h
0x5DBEAF: mov     edx, [ecx]
0x5DBEB1: mov     eax, [edx+268h]
0x5DBEB7: call    eax
0x5DBEB9: mov     edx, [eax+30h]
0x5DBEBC: lea     ecx, [eax+30h]
0x5DBEBF: mov     eax, [edx+10h]
0x5DBEC2: push    43534544h
0x5DBEC7: push    0; a3
0x5DBEC9: call    eax
0x5DBECB: push    eax
0x5DBECC: lea     ecx, [esp+5Ch+var_38]
0x5DBED0: call    BSStringT_constr_str
0x5DBED5: lea     ecx, [esp+58h+var_38]
0x5DBED9: mov     [esp+58h+var_4], 2
0x5DBEE1: call    BSStringT_GetLen
0x5DBEE6: test    eax, eax
0x5DBEE8: jz      loc_5DC361
0x5DBEEE: mov     ecx, [esi+58h]; this
0x5DBEF1: fld     dword ptr ds:0A379B4h
0x5DBEF7: push    ecx
0x5DBEF8: fstp    [esp+5Ch+a2]; a3
0x5DBEFB: push    0FB2h; a2
0x5DBF00: call    Tile_SetFloat
0x5DBF05: mov     ecx, ds:0B333C4h
0x5DBF0B: mov     edx, [ecx]
0x5DBF0D: mov     eax, [edx+268h]
0x5DBF13: call    eax
0x5DBF15: add     eax, 24h ; '$'
0x5DBF18: mov     eax, [eax+4]
0x5DBF1B: test    eax, eax
0x5DBF1D: jz      short loc_5DBF27
0x5DBF1F: mov     edi, eax
0x5DBF21: mov     [esp+58h+a3], eax
0x5DBF25: jmp     short loc_5DBF30
0x5DBF27: mov     edi, offset EmptyString
0x5DBF2C: mov     [esp+58h+a3], edi
0x5DBF30: mov     eax, offset aMenusBirthsign; "Menus\\BirthSign\\Birthsign_"
0x5DBF35: lea     edx, [eax+1]
0x5DBF38: mov     cl, [eax]
0x5DBF3A: add     eax, 1
0x5DBF3D: test    cl, cl
0x5DBF3F: jnz     short loc_5DBF38
0x5DBF41: sub     eax, edx
0x5DBF43: mov     ebp, eax
0x5DBF45: cmp     ebp, 4
0x5DBF48: mov     ecx, offset aMenusBirthsign; "Menus\\BirthSign\\Birthsign_"
0x5DBF4D: mov     edx, edi
0x5DBF4F: jb      short loc_5DBF65
0x5DBF51: mov     edi, [edx]
0x5DBF53: cmp     edi, [ecx]
0x5DBF55: jnz     short loc_5DBF69
0x5DBF57: sub     eax, 4
0x5DBF5A: add     ecx, 4
0x5DBF5D: add     edx, 4
0x5DBF60: cmp     eax, 4
0x5DBF63: jnb     short loc_5DBF51
0x5DBF65: test    eax, eax
0x5DBF67: jz      short loc_5DBFC6
0x5DBF69: movzx   edi, byte ptr [edx]
0x5DBF6C: movzx   ebx, byte ptr [ecx]
0x5DBF6F: sub     edi, ebx
0x5DBF71: jnz     short loc_5DBFB8
0x5DBF73: sub     eax, 1
0x5DBF76: add     ecx, 1
0x5DBF79: add     edx, 1
0x5DBF7C: test    eax, eax
0x5DBF7E: jz      short loc_5DBFC6
0x5DBF80: movzx   edi, byte ptr [edx]
0x5DBF83: movzx   ebx, byte ptr [ecx]
0x5DBF86: sub     edi, ebx
0x5DBF88: jnz     short loc_5DBFB8
0x5DBF8A: sub     eax, 1
0x5DBF8D: add     ecx, 1
0x5DBF90: add     edx, 1
0x5DBF93: test    eax, eax
0x5DBF95: jz      short loc_5DBFC6
0x5DBF97: movzx   edi, byte ptr [edx]
0x5DBF9A: movzx   ebx, byte ptr [ecx]
0x5DBF9D: sub     edi, ebx
0x5DBF9F: jnz     short loc_5DBFB8
0x5DBFA1: sub     eax, 1
0x5DBFA4: add     ecx, 1
0x5DBFA7: add     edx, 1
0x5DBFAA: test    eax, eax
0x5DBFAC: jz      short loc_5DBFC6
0x5DBFAE: movzx   edi, byte ptr [edx]
0x5DBFB1: movzx   ecx, byte ptr [ecx]
0x5DBFB4: sub     edi, ecx
0x5DBFB6: jz      short loc_5DBFC6
0x5DBFB8: test    edi, edi
0x5DBFBA: mov     eax, 1
0x5DBFBF: jg      short loc_5DBFC8
0x5DBFC1: or      eax, 0FFFFFFFFh
0x5DBFC4: jmp     short loc_5DBFC8
0x5DBFC6: xor     eax, eax
0x5DBFC8: test    eax, eax
0x5DBFCA: jnz     loc_5DC318
0x5DBFD0: mov     edx, [esp+58h+a3]
0x5DBFD4: lea     eax, [edx+ebp]
0x5DBFD7: lea     edx, [esp+58h+ArgList]
0x5DBFDB: sub     edx, eax
0x5DBFDD: lea     ecx, [ecx+0]
0x5DBFE0: mov     cl, [eax]
0x5DBFE2: mov     [edx+eax], cl
0x5DBFE5: add     eax, 1
0x5DBFE8: test    cl, cl
0x5DBFEA: jnz     short loc_5DBFE0
0x5DBFEC: cmp     [esp+58h+ArgList], cl
0x5DBFF0: lea     eax, [esp+58h+ArgList]
0x5DBFF4: jz      short loc_5DC006
0x5DBFF6: cmp     byte ptr [eax], 20h ; ' '
0x5DBFF9: jnz     short loc_5DBFFE
0x5DBFFB: mov     byte ptr [eax], 5Fh ; '_'
0x5DBFFE: add     eax, 1
0x5DC001: cmp     byte ptr [eax], 0
0x5DC004: jnz     short loc_5DBFF6
0x5DC006: mov     [esp+58h+var_40.m_data], 0
0x5DC00E: mov     [esp+58h+var_40.m_dataLen], 0
0x5DC015: mov     [esp+58h+var_40.m_bufLen], 0
0x5DC01C: lea     eax, [esp+58h+ArgList]
0x5DC020: push    eax; ArgList
0x5DC021: lea     ecx, [esp+5Ch+var_40]
0x5DC025: push    offset aMenusStatsSmal; "Menus\\Stats\\small_birthsign\\small_%s"
0x5DC02A: push    ecx; int
0x5DC02B: mov     byte ptr [esp+64h+var_4], 3
0x5DC030: call    BSStringT_Static_Format
0x5DC035: mov     edx, [esp+64h+var_40.m_data]
0x5DC039: mov     ecx, [esi+58h]
0x5DC03C: add     esp, 0Ch
0x5DC03F: push    edx
0x5DC040: push    0FB0h
0x5DC045: call    Tile_SetString
0x5DC04A: lea     ecx, [esp+58h+var_40]; void *
0x5DC04E: mov     byte ptr [esp+58h+var_4], 2
0x5DC053: call    BSStringT_Clear
0x5DC058: jmp     loc_5DC318
0x5DC05D: cmp     eax, 2
0x5DC060: jnz     loc_5DC2D7
0x5DC066: mov     ecx, ds:0B333C4h
0x5DC06C: call    Actor_GetBaseClass
0x5DC071: test    eax, eax
0x5DC073: jz      loc_5DC4F8
0x5DC079: mov     ecx, ds:0B333C4h; this
0x5DC07F: call    TESObjectREFR_GetName
0x5DC084: cmp     byte ptr [eax], 2Dh ; '-'
0x5DC087: jz      loc_5DC4F8
0x5DC08D: mov     ecx, ds:0B333C4h
0x5DC093: call    Actor_GetBaseClass
0x5DC098: mov     edx, [eax+24h]
0x5DC09B: lea     ecx, [eax+24h]
0x5DC09E: mov     eax, [edx+10h]
0x5DC0A1: push    43534544h
0x5DC0A6: push    0; a3
0x5DC0A8: call    eax
0x5DC0AA: push    eax
0x5DC0AB: lea     ecx, [esp+5Ch+var_38]
0x5DC0AF: call    BSStringT_constr_str
0x5DC0B4: lea     ecx, [esp+58h+var_38]
0x5DC0B8: mov     [esp+58h+var_4], 4
0x5DC0C0: call    BSStringT_GetLen
0x5DC0C5: test    eax, eax
0x5DC0C7: jz      loc_5DC361
0x5DC0CD: mov     ecx, [esi+58h]; this
0x5DC0D0: fld     dword ptr ds:0A379B4h
0x5DC0D6: push    ecx
0x5DC0D7: fstp    [esp+5Ch+a2]; a3
0x5DC0DA: push    0FB2h; a2
0x5DC0DF: call    Tile_SetFloat
0x5DC0E4: mov     [esp+58h+var_40.m_data], 0
0x5DC0EC: mov     [esp+58h+var_40.m_dataLen], 0
0x5DC0F3: mov     [esp+58h+var_40.m_bufLen], 0
0x5DC0FA: mov     ecx, ds:0B333C4h
0x5DC100: mov     byte ptr [esp+58h+var_4], 5
0x5DC105: call    Actor_GetBaseClass
0x5DC10A: mov     ecx, ds:0B37C88h
0x5DC110: push    ecx
0x5DC111: mov     ecx, ds:0B33A98h
0x5DC117: mov     edi, eax
0x5DC119: call    TESDataHandler_LookupTESClassByFormID
0x5DC11E: cmp     edi, eax
0x5DC120: jnz     short loc_5DC12E
0x5DC122: mov     edx, ds:0B333C4h
0x5DC128: mov     edi, [edx+654h]
0x5DC12E: test    edi, edi
0x5DC130: jz      loc_5DC232
0x5DC136: mov     ecx, edi
0x5DC138: call    TESClass_IsPlayable
0x5DC13D: test    al, al
0x5DC13F: jz      loc_5DC232
0x5DC145: mov     edi, [edi+30h]
0x5DC148: test    edi, edi
0x5DC14A: jnz     short loc_5DC151
0x5DC14C: mov     edi, offset EmptyString
0x5DC151: mov     eax, offset aMenusLevel_upC; "Menus\\Level_up\\class_creation\\class_"...
0x5DC156: mov     [esp+58h+a3], edi
0x5DC15A: lea     edx, [eax+1]
0x5DC15D: lea     ecx, [ecx+0]
0x5DC160: mov     cl, [eax]
0x5DC162: add     eax, 1
0x5DC165: test    cl, cl
0x5DC167: jnz     short loc_5DC160
0x5DC169: sub     eax, edx
0x5DC16B: mov     ebp, eax
0x5DC16D: cmp     ebp, 4
0x5DC170: mov     ecx, offset aMenusLevel_upC; "Menus\\Level_up\\class_creation\\class_"...
0x5DC175: mov     edx, edi
0x5DC177: jb      short loc_5DC194
0x5DC179: lea     esp, [esp+0]
0x5DC180: mov     edi, [edx]
0x5DC182: cmp     edi, [ecx]
0x5DC184: jnz     short loc_5DC198
0x5DC186: sub     eax, 4
0x5DC189: add     ecx, 4
0x5DC18C: add     edx, 4
0x5DC18F: cmp     eax, 4
0x5DC192: jnb     short loc_5DC180
0x5DC194: test    eax, eax
0x5DC196: jz      short loc_5DC1F5
0x5DC198: movzx   edi, byte ptr [edx]
0x5DC19B: movzx   ebx, byte ptr [ecx]
0x5DC19E: sub     edi, ebx
0x5DC1A0: jnz     short loc_5DC1E7
0x5DC1A2: sub     eax, 1
0x5DC1A5: add     ecx, 1
0x5DC1A8: add     edx, 1
0x5DC1AB: test    eax, eax
0x5DC1AD: jz      short loc_5DC1F5
0x5DC1AF: movzx   edi, byte ptr [edx]
0x5DC1B2: movzx   ebx, byte ptr [ecx]
0x5DC1B5: sub     edi, ebx
0x5DC1B7: jnz     short loc_5DC1E7
0x5DC1B9: sub     eax, 1
0x5DC1BC: add     ecx, 1
0x5DC1BF: add     edx, 1
0x5DC1C2: test    eax, eax
0x5DC1C4: jz      short loc_5DC1F5
0x5DC1C6: movzx   edi, byte ptr [edx]
0x5DC1C9: movzx   ebx, byte ptr [ecx]
0x5DC1CC: sub     edi, ebx
0x5DC1CE: jnz     short loc_5DC1E7
0x5DC1D0: sub     eax, 1
0x5DC1D3: add     ecx, 1
0x5DC1D6: add     edx, 1
0x5DC1D9: test    eax, eax
0x5DC1DB: jz      short loc_5DC1F5
0x5DC1DD: movzx   edi, byte ptr [edx]
0x5DC1E0: movzx   eax, byte ptr [ecx]
0x5DC1E3: sub     edi, eax
0x5DC1E5: jz      short loc_5DC1F5
0x5DC1E7: test    edi, edi
0x5DC1E9: mov     eax, 1
0x5DC1EE: jg      short loc_5DC1F7
0x5DC1F0: or      eax, 0FFFFFFFFh
0x5DC1F3: jmp     short loc_5DC1F7
0x5DC1F5: xor     eax, eax
0x5DC1F7: test    eax, eax
0x5DC1F9: jnz     short loc_5DC244
0x5DC1FB: mov     ecx, [esp+58h+a3]
0x5DC1FF: lea     eax, [ecx+ebp]
0x5DC202: lea     edx, [esp+58h+ArgList]
0x5DC206: sub     edx, eax
0x5DC208: mov     cl, [eax]
0x5DC20A: mov     [eax+edx], cl
0x5DC20D: add     eax, 1
0x5DC210: test    cl, cl
0x5DC212: jnz     short loc_5DC208
0x5DC214: lea     edx, [esp+58h+ArgList]
0x5DC218: push    edx; ArgList
0x5DC219: lea     eax, [esp+5Ch+var_40]
0x5DC21D: push    offset aMenusStatsSm_0; "Menus\\Stats\\small_class\\small_%s"
0x5DC222: push    eax; int
0x5DC223: call    BSStringT_Static_Format
0x5DC228: mov     ecx, [esp+64h+var_40.m_data]
0x5DC22C: add     esp, 0Ch
0x5DC22F: push    ecx
0x5DC230: jmp     short loc_5DC237
0x5DC232: push    offset aMenusStatsSm_1; "Menus\\Stats\\small_class\\small_thief."...
0x5DC237: mov     ecx, [esi+58h]
0x5DC23A: push    0FB0h
0x5DC23F: call    Tile_SetString
0x5DC244: mov     ecx, ds:0B333C4h
0x5DC24A: mov     edi, ds:0B383D8h
0x5DC250: call    Actor_GetBaseClass
0x5DC255: mov     ecx, eax; this
0x5DC257: call    TESObjectREFR_GetParentCell
0x5DC25C: push    eax
0x5DC25D: call    sub_52E7E0
0x5DC262: mov     edx, dword ptr [esp+5Ch+var_38]
0x5DC266: push    eax
0x5DC267: push    edi
0x5DC268: push    edx; ArgList
0x5DC269: lea     eax, [esp+68h+var_40]
0x5DC26D: push    offset aSSS_7; "%s\n\n%s%s"
0x5DC272: push    eax; int
0x5DC273: call    BSStringT_Static_Format
0x5DC278: mov     ecx, [esp+70h+var_40.m_data]
0x5DC27C: add     esp, 18h
0x5DC27F: push    ecx
0x5DC280: mov     ecx, [esi+58h]
0x5DC283: push    0FB1h
0x5DC288: call    Tile_SetString
0x5DC28D: mov     ecx, [esi+58h]
0x5DC290: push    0FAFh
0x5DC295: call    Tile_GetFloat
0x5DC29A: mov     ecx, [esi+58h]
0x5DC29D: sub     esp, 8
0x5DC2A0: fstp    [esp+60h+a2]; float
0x5DC2A4: fld1
0x5DC2A6: fstp    [esp+60h+var_60]; float
0x5DC2A9: push    0FAEh
0x5DC2AE: call    Tile_GetFloat
0x5DC2B3: push    ecx
0x5DC2B4: mov     ecx, [esi+58h]; int
0x5DC2B7: fstp    [esp+64h+var_64]; float
0x5DC2BA: push    0FAEh; int
0x5DC2BF: call    sub_589980
0x5DC2C4: lea     ecx, [esp+58h+var_40]; void *
0x5DC2C8: mov     byte ptr [esp+58h+var_4], 4
0x5DC2CD: call    BSStringT_Clear
0x5DC2D2: jmp     loc_5DC361
0x5DC2D7: cmp     eax, 3
0x5DC2DA: jnz     loc_5DC4F8
0x5DC2E0: mov     edx, ds:0B383E0h
0x5DC2E6: push    edx
0x5DC2E7: lea     ecx, [esp+5Ch+var_38]
0x5DC2EB: call    BSStringT_constr_str
0x5DC2F0: mov     [esp+58h+var_4], 6
0x5DC2F8: lea     ecx, [esp+58h+var_38]
0x5DC2FC: call    BSStringT_GetLen
0x5DC301: test    eax, eax
0x5DC303: jz      short loc_5DC361
0x5DC305: mov     ecx, [esi+58h]; this
0x5DC308: fld1
0x5DC30A: push    ecx
0x5DC30B: fstp    [esp+5Ch+a2]; a3
0x5DC30E: push    0FB2h; a2
0x5DC313: call    Tile_SetFloat
0x5DC318: mov     eax, dword ptr [esp+58h+var_38]
0x5DC31C: mov     ecx, [esi+58h]
0x5DC31F: push    eax
0x5DC320: push    0FB1h
0x5DC325: call    Tile_SetString
0x5DC32A: mov     ecx, [esi+58h]
0x5DC32D: push    0FAFh
0x5DC332: call    Tile_GetFloat
0x5DC337: mov     ecx, [esi+58h]
0x5DC33A: sub     esp, 8
0x5DC33D: fstp    [esp+60h+a2]; float
0x5DC341: fld1
0x5DC343: fstp    [esp+60h+var_60]; float
0x5DC346: push    0FAEh
0x5DC34B: call    Tile_GetFloat
0x5DC350: push    ecx
0x5DC351: mov     ecx, [esi+58h]; int
0x5DC354: fstp    [esp+64h+var_64]; float
0x5DC357: push    0FAEh; int
0x5DC35C: call    sub_589980
0x5DC361: lea     ecx, [esp+58h+var_38]; void *
0x5DC365: mov     [esp+58h+var_4], 0FFFFFFFFh
0x5DC36D: call    BSStringT_Clear
0x5DC372: jmp     loc_5DC4F8
0x5DC377: cmp     ebp, 22h ; '"'
0x5DC37A: jnz     loc_5DC4F8
0x5DC380: push    0FB4h
0x5DC385: mov     ecx, edi
0x5DC387: call    Tile_GetFloat
0x5DC38C: call    Double_To_SInt32
0x5DC391: mov     ebp, eax
0x5DC393: push    ebp
0x5DC394: push    2
0x5DC396: call    ActorValue_GetGroupOffsetFromAV
0x5DC39B: mov     byte ptr [esp+60h+a3], al
0x5DC39F: mov     ecx, [esp+60h+a3]
0x5DC3A3: add     esp, 8
0x5DC3A6: push    ecx
0x5DC3A7: mov     ecx, ds:0B33A98h
0x5DC3AD: call    TESDataHandler_GetTESSkillByCode
0x5DC3B2: mov     edi, eax
0x5DC3B4: test    edi, edi
0x5DC3B6: jz      loc_5DC4C1
0x5DC3BC: mov     ecx, [esi+58h]; this
0x5DC3BF: fld     dword ptr ds:0A379B4h
0x5DC3C5: push    ecx
0x5DC3C6: fstp    [esp+5Ch+a2]; a3
0x5DC3C9: push    0FB2h; a2
0x5DC3CE: call    Tile_SetFloat
0x5DC3D3: mov     eax, [edi+24h]
0x5DC3D6: test    eax, eax
0x5DC3D8: jnz     short loc_5DC3DF
0x5DC3DA: mov     eax, offset EmptyString
0x5DC3DF: mov     ecx, [esi+58h]
0x5DC3E2: push    eax
0x5DC3E3: push    0FB0h
0x5DC3E8: call    Tile_SetString
0x5DC3ED: xor     eax, eax
0x5DC3EF: mov     dword ptr [esp+58h+var_38], eax
0x5DC3F3: mov     [esp+58h+var_34], ax
0x5DC3F8: mov     [esp+58h+var_32], ax
0x5DC3FD: mov     edx, [edi+30h]
0x5DC400: mov     eax, ds:0B383C8h
0x5DC405: mov     ecx, ds:0B333C4h
0x5DC40B: mov     ebx, ds:0B383D0h
0x5DC411: push    ebp
0x5DC412: mov     [esp+5Ch+var_4], 7
0x5DC41A: mov     [esp+5Ch+a3], edx
0x5DC41E: mov     [esp+5Ch+var_40.m_data], eax
0x5DC422: add     edi, 18h
0x5DC425: call    Actor_GetSkillMasteryLevel
0x5DC42A: push    eax
0x5DC42B: call    ActorValue_GetMasteryName
0x5DC430: mov     ecx, [esp+5Ch+a3]
0x5DC434: add     esp, 4
0x5DC437: push    eax
0x5DC438: push    ebx; a3
0x5DC439: push    ecx
0x5DC43A: call    ActorValue_GetName
0x5DC43F: mov     edx, [esp+64h+var_40.m_data]
0x5DC443: add     esp, 4
0x5DC446: push    eax
0x5DC447: mov     eax, [edi]
0x5DC449: push    edx
0x5DC44A: mov     edx, [eax+10h]
0x5DC44D: push    43534544h
0x5DC452: push    0
0x5DC454: mov     ecx, edi
0x5DC456: call    edx
0x5DC458: push    eax; ArgList
0x5DC459: lea     eax, [esp+6Ch+var_38]
0x5DC45D: push    offset aSSSSS_0; "%s\n\n%s%s\n\n%s%s"
0x5DC462: push    eax; int
0x5DC463: call    BSStringT_Static_Format
0x5DC468: mov     ecx, dword ptr [esp+74h+var_38]
0x5DC46C: add     esp, 1Ch
0x5DC46F: push    ecx
0x5DC470: mov     ecx, [esi+58h]
0x5DC473: push    0FB1h
0x5DC478: call    Tile_SetString
0x5DC47D: or      edi, 0FFFFFFFFh
0x5DC480: cmp     ebp, 11h
0x5DC483: jnz     short loc_5DC49B
0x5DC485: mov     ecx, ds:0B333C4h
0x5DC48B: mov     edx, [ecx]
0x5DC48D: mov     eax, [edx+34Ch]
0x5DC493: call    eax
0x5DC495: mov     [esp+58h+a3], eax
0x5DC499: jmp     short loc_5DC49F
0x5DC49B: mov     [esp+58h+a3], edi
0x5DC49F: mov     ecx, [esi+58h]; this
0x5DC4A2: fild    [esp+58h+a3]
0x5DC4A6: push    ecx
0x5DC4A7: fstp    [esp+5Ch+a2]; a3
0x5DC4AA: push    0FB3h; a2
0x5DC4AF: call    Tile_SetFloat
0x5DC4B4: lea     ecx, [esp+58h+var_38]; void *
0x5DC4B8: mov     [esp+58h+var_4], edi
0x5DC4BC: call    BSStringT_Clear
0x5DC4C1: mov     ecx, [esi+58h]
0x5DC4C4: push    0FAFh
0x5DC4C9: call    Tile_GetFloat
0x5DC4CE: mov     ecx, [esi+58h]
0x5DC4D1: sub     esp, 8
0x5DC4D4: fstp    [esp+60h+a2]; float
0x5DC4D8: fld1
0x5DC4DA: fstp    [esp+60h+var_60]; float
0x5DC4DD: push    0FAEh
0x5DC4E2: call    Tile_GetFloat
0x5DC4E7: push    ecx
0x5DC4E8: mov     ecx, [esi+58h]; int
0x5DC4EB: fstp    [esp+64h+var_64]; float
0x5DC4EE: push    0FAEh; int
0x5DC4F3: call    sub_589980
0x5DC4F8: mov     ecx, [esp+58h+var_C]
0x5DC4FC: mov     large fs:0, ecx
0x5DC503: pop     ecx
0x5DC504: pop     edi
0x5DC505: pop     esi
0x5DC506: pop     ebp
0x5DC507: pop     ebx
0x5DC508: mov     ecx, [esp+44h+var_10]
0x5DC50C: xor     ecx, esp
0x5DC50E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5DC513: add     esp, 44h
0x5DC516: retn    8
