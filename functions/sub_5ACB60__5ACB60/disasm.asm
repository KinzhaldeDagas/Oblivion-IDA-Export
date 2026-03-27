0x5ACB60: push    ebp
0x5ACB61: mov     ebp, esp
0x5ACB63: and     esp, 0FFFFFFF8h
0x5ACB66: push    0FFFFFFFFh
0x5ACB68: push    offset SEH_5ACB60
0x5ACB6D: mov     eax, large fs:0
0x5ACB73: push    eax
0x5ACB74: sub     esp, 130h
0x5ACB7A: mov     eax, ds:0B30AACh
0x5ACB7F: xor     eax, esp
0x5ACB81: mov     [esp+13Ch+var_14], eax
0x5ACB88: push    ebx; a3
0x5ACB89: push    esi; a3
0x5ACB8A: push    edi; a3
0x5ACB8B: mov     eax, ds:0B30AACh
0x5ACB90: xor     eax, esp
0x5ACB92: push    eax; a3
0x5ACB93: lea     eax, [esp+14Ch+var_C]
0x5ACB9A: mov     large fs:0, eax
0x5ACBA0: mov     ebx, ecx
0x5ACBA2: xor     edi, edi
0x5ACBA4: mov     [esp+14Ch+var_120], ebx
0x5ACBA8: mov     [esp+14Ch+var_130], 8
0x5ACBB0: mov     [esp+14Ch+var_12C.m_data], edi
0x5ACBB4: mov     eax, [ebx+28h]
0x5ACBB7: push    0
0x5ACBB9: push    offset aLevelup_templa; "levelup_template"
0x5ACBBE: push    eax
0x5ACBBF: mov     ecx, ebx
0x5ACBC1: call    Menu_CreateTileFromTemplate
0x5ACBC6: mov     esi, eax
0x5ACBC8: test    esi, esi
0x5ACBCA: jz      loc_5ACDD0
0x5ACBD0: push    edi
0x5ACBD1: push    0
0x5ACBD3: call    ActorValue_GetAVFromGroupOffset
0x5ACBD8: fild    [esp+154h+var_12C.m_data]
0x5ACBDC: add     esp, 4
0x5ACBDF: mov     ecx, esi; this
0x5ACBE1: fstp    [esp+150h+a2]; a3
0x5ACBE4: push    0FAAh; a2
0x5ACBE9: mov     edi, eax
0x5ACBEB: call    Tile_SetFloat
0x5ACBF0: mov     ecx, ds:0B333C4h
0x5ACBF6: push    edi
0x5ACBF7: call    Player_GetAttributeLevelingBonus
0x5ACBFC: mov     ecx, ds:0B333C4h
0x5ACC02: push    edi
0x5ACC03: mov     ebx, eax
0x5ACC05: call    Actor_GetBaseCalcAVi
0x5ACC0A: add     eax, ebx
0x5ACC0C: cmp     eax, 64h ; 'd'
0x5ACC0F: jle     short loc_5ACC24
0x5ACC11: mov     ecx, ds:0B333C4h
0x5ACC17: push    edi
0x5ACC18: call    Actor_GetBaseCalcAVi
0x5ACC1D: mov     ebx, 64h ; 'd'
0x5ACC22: sub     ebx, eax
0x5ACC24: cmp     ebx, 1
0x5ACC27: jle     loc_5ACCB5
0x5ACC2D: mov     ecx, ds:0B333C4h
0x5ACC33: push    edi
0x5ACC34: call    Actor_GetBaseCalcAVi
0x5ACC39: cmp     eax, 64h ; 'd'
0x5ACC3C: jge     short loc_5ACCB5
0x5ACC3E: xor     eax, eax
0x5ACC40: mov     dword ptr [esp+14Ch+var_12C.m_dataLen], eax
0x5ACC44: mov     [esp+14Ch+var_124], ax
0x5ACC49: mov     [esp+14Ch+var_122], ax
0x5ACC4E: push    ebx; ArgList
0x5ACC4F: lea     ecx, [esp+150h+var_12C.m_dataLen]
0x5ACC53: push    offset off_A6C2A0; Format
0x5ACC58: push    ecx; int
0x5ACC59: mov     [esp+158h+var_4], eax
0x5ACC60: call    BSStringT_Static_Format
0x5ACC65: mov     ebx, dword ptr [esp+158h+var_12C.m_dataLen]
0x5ACC69: add     esp, 0Ch
0x5ACC6C: push    ebx
0x5ACC6D: push    0FB0h
0x5ACC72: mov     ecx, esi
0x5ACC74: call    Tile_SetString
0x5ACC79: fld     dword ptr ds:0A379B4h
0x5ACC7F: push    ecx
0x5ACC80: fstp    [esp+150h+a2]; a3
0x5ACC83: push    0FAFh; a2
0x5ACC88: mov     ecx, esi; this
0x5ACC8A: call    Tile_SetFloat
0x5ACC8F: push    ebx
0x5ACC90: mov     [esp+150h+var_4], 0FFFFFFFFh
0x5ACC9B: call    FormHeapFree
0x5ACCA0: add     esp, 4
0x5ACCA3: xor     ebx, ebx
0x5ACCA5: mov     dword ptr [esp+14Ch+var_12C.m_dataLen], ebx
0x5ACCA9: mov     [esp+14Ch+var_122], bx
0x5ACCAE: mov     [esp+14Ch+var_124], bx
0x5ACCB3: jmp     short loc_5ACCB7
0x5ACCB5: xor     ebx, ebx
0x5ACCB7: mov     ecx, ds:0B333C4h
0x5ACCBD: push    edi
0x5ACCBE: call    Actor_GetBaseCalcAVi
0x5ACCC3: mov     [esp+14Ch+var_11C], eax
0x5ACCC7: fild    [esp+14Ch+var_11C]
0x5ACCCB: push    ecx
0x5ACCCC: mov     ecx, esi; this
0x5ACCCE: fstp    [esp+150h+a2]; a3
0x5ACCD1: push    0FB1h; a2
0x5ACCD6: call    Tile_SetFloat
0x5ACCDB: push    edi
0x5ACCDC: call    ActorValue_GetName
0x5ACCE1: add     esp, 4
0x5ACCE4: push    eax
0x5ACCE5: push    0FB2h
0x5ACCEA: mov     ecx, esi
0x5ACCEC: call    Tile_SetString
0x5ACCF1: push    edi
0x5ACCF2: call    ActorValue_GetSmallIcon
0x5ACCF7: add     esp, 4
0x5ACCFA: push    eax
0x5ACCFB: push    0FB3h
0x5ACD00: mov     ecx, esi
0x5ACD02: call    Tile_SetString
0x5ACD07: push    edi
0x5ACD08: call    ActorValue_GetName
0x5ACD0D: add     esp, 4
0x5ACD10: push    ebx; a3
0x5ACD11: push    eax; a2
0x5ACD12: lea     ecx, [esp+154h+var_138]; this
0x5ACD16: mov     [esp+154h+var_138.m_data], ebx
0x5ACD1A: mov     [esp+154h+var_138.m_dataLen], bx
0x5ACD1F: mov     [esp+154h+var_138.m_bufLen], bx
0x5ACD24: call    BSStringT_Set
0x5ACD29: mov     [esp+14Ch+var_4], 1
0x5ACD34: xor     eax, eax
0x5ACD36: mov     ecx, [esp+14Ch+var_138.m_data]
0x5ACD3A: mov     edx, ecx
0x5ACD3C: neg     edx
0x5ACD3E: sbb     edx, edx
0x5ACD40: and     edx, eax
0x5ACD42: mov     cl, [edx+ecx]
0x5ACD45: cmp     cl, 20h ; ' '
0x5ACD48: mov     [esp+eax+14Ch+var_118], cl
0x5ACD4C: jnz     short loc_5ACD53
0x5ACD4E: mov     [esp+eax+14Ch+var_118], 5Fh ; '_'
0x5ACD53: cmp     [esp+eax+14Ch+var_118], 0
0x5ACD58: jz      short loc_5ACD64
0x5ACD5A: add     eax, 1
0x5ACD5D: cmp     eax, 100h
0x5ACD62: jl      short loc_5ACD36
0x5ACD64: push    ebx; a3
0x5ACD65: lea     eax, [esp+150h+var_118]
0x5ACD69: lea     ecx, [esi+8]; this
0x5ACD6C: push    eax; a2
0x5ACD6D: mov     [esp+154h+var_19], 0
0x5ACD75: call    BSStringT_Set
0x5ACD7A: mov     ecx, ds:0B333C4h
0x5ACD80: push    edi
0x5ACD81: call    Actor_GetBaseCalcAVi
0x5ACD86: cmp     eax, 64h ; 'd'
0x5ACD89: jl      short loc_5ACDA2
0x5ACD8B: fldz
0x5ACD8D: push    ecx
0x5ACD8E: fstp    [esp+150h+a2]; a3
0x5ACD91: mov     ecx, esi; this
0x5ACD93: push    0FB4h; a2
0x5ACD98: call    Tile_SetFloat
0x5ACD9D: sub     [esp+14Ch+var_130], 1
0x5ACDA2: mov     ecx, [esp+14Ch+var_138.m_data]
0x5ACDA6: push    ecx
0x5ACDA7: mov     [esp+150h+var_4], 0FFFFFFFFh
0x5ACDB2: call    FormHeapFree
0x5ACDB7: mov     edi, [esp+150h+var_12C.m_data]
0x5ACDBB: mov     [esp+150h+var_138.m_data], ebx
0x5ACDBF: mov     [esp+150h+var_138.m_bufLen], bx
0x5ACDC4: mov     [esp+150h+var_138.m_dataLen], bx
0x5ACDC9: mov     ebx, [esp+150h+var_120]
0x5ACDCD: add     esp, 4
0x5ACDD0: add     edi, 1
0x5ACDD3: cmp     edi, 8
0x5ACDD6: mov     [esp+14Ch+var_12C.m_data], edi
0x5ACDDA: jl      loc_5ACBB4
0x5ACDE0: mov     eax, [ebx+2Ch]
0x5ACDE3: mov     ecx, [esp+14Ch+var_130]
0x5ACDE7: cmp     eax, ecx
0x5ACDE9: jge     short loc_5ACDF0
0x5ACDEB: mov     [ebx+2Ch], eax
0x5ACDEE: jmp     short loc_5ACDF3
0x5ACDF0: mov     [ebx+2Ch], ecx
0x5ACDF3: mov     ecx, [esp+14Ch+var_C]
0x5ACDFA: mov     large fs:0, ecx
0x5ACE01: pop     ecx
0x5ACE02: pop     edi
0x5ACE03: pop     esi
0x5ACE04: pop     ebx
0x5ACE05: mov     ecx, [esp+13Ch+var_14]
0x5ACE0C: xor     ecx, esp
0x5ACE0E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5ACE13: mov     esp, ebp
0x5ACE15: pop     ebp
0x5ACE16: retn
