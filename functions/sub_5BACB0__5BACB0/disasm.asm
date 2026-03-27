0x5BACB0: push    0FFFFFFFFh
0x5BACB2: push    offset SEH_5BACB0
0x5BACB7: mov     eax, large fs:0
0x5BACBD: push    eax
0x5BACBE: sub     esp, 344h
0x5BACC4: mov     eax, ds:0B30AACh
0x5BACC9: xor     eax, esp
0x5BACCB: mov     [esp+350h+var_10], eax
0x5BACD2: push    ebx
0x5BACD3: push    ebp
0x5BACD4: push    esi; a3
0x5BACD5: push    edi; a3
0x5BACD6: mov     eax, ds:0B30AACh
0x5BACDB: xor     eax, esp
0x5BACDD: push    eax; a3
0x5BACDE: lea     eax, [esp+364h+var_C]
0x5BACE5: mov     large fs:0, eax
0x5BACEB: mov     esi, [esp+364h+arg_0]
0x5BACF2: mov     ecx, ds:0B33B00h
0x5BACF8: mov     [esp+364h+var_350], esi
0x5BACFC: call    sub_45A500
0x5BAD01: test    al, al
0x5BAD03: jnz     loc_5BB184
0x5BAD09: push    3FFh
0x5BAD0E: call    Menu_GetOpenMenuTile
0x5BAD13: xor     ebx, ebx
0x5BAD15: add     esp, 4
0x5BAD18: cmp     eax, ebx
0x5BAD1A: jz      loc_5BB184
0x5BAD20: mov     ecx, eax
0x5BAD22: call    Tile_GetParentMenu
0x5BAD27: mov     ecx, ds:0B333C4h
0x5BAD2D: mov     edi, eax
0x5BAD2F: mov     eax, [ecx+5F4h]
0x5BAD35: cmp     eax, ebx
0x5BAD37: mov     [esp+364h+var_330.m_data], edi
0x5BAD3B: jz      short loc_5BAD49
0x5BAD3D: test    byte ptr [eax+3Ch], 2
0x5BAD41: jz      short loc_5BAD49
0x5BAD43: push    ebx
0x5BAD44: call    sub_660450
0x5BAD49: mov     ecx, [edi+28h]
0x5BAD4C: push    0FAEh
0x5BAD51: call    Tile_GetFloat
0x5BAD56: call    Double_To_SInt32
0x5BAD5B: mov     ebp, eax
0x5BAD5D: cmp     ebp, 4
0x5BAD60: mov     [esp+364h+var_34C], 34h ; '4'
0x5BAD68: jnz     short loc_5BAD74
0x5BAD6A: mov     [esp+364h+var_34C], 33h ; '3'
0x5BAD72: jmp     short loc_5BAD9E
0x5BAD74: cmp     ebp, 3
0x5BAD77: jnz     short loc_5BAD92
0x5BAD79: mov     eax, ds:0B333C4h
0x5BAD7E: mov     ecx, [eax+5F4h]
0x5BAD84: mov     [esp+364h+var_350], ecx
0x5BAD88: mov     [esp+364h+var_34C], 36h ; '6'
0x5BAD90: jmp     short loc_5BAD9E
0x5BAD92: cmp     esi, ebx
0x5BAD94: jz      short loc_5BAD9E
0x5BAD96: mov     [esp+364h+var_34C], 35h ; '5'
0x5BAD9E: mov     edx, [esp+364h+var_34C]
0x5BADA2: push    edx
0x5BADA3: mov     ecx, edi
0x5BADA5: call    sub_5B8FC0
0x5BADAA: fld1
0x5BADAC: mov     ecx, [edi+60h]; this
0x5BADAF: push    ecx
0x5BADB0: fstp    [esp+368h+a2]; a3
0x5BADB3: push    0FA1h; a2
0x5BADB8: call    Tile_SetFloat
0x5BADBD: fld1
0x5BADBF: mov     ecx, [edi+58h]; this
0x5BADC2: push    ecx
0x5BADC3: fstp    [esp+368h+a2]; a3
0x5BADC6: push    0FA1h; a2
0x5BADCB: call    Tile_SetFloat
0x5BADD0: cmp     ds:0B333C4h, ebx
0x5BADD6: jz      loc_5BB184
0x5BADDC: mov     ecx, [edi+4Ch]; this
0x5BADDF: fld1
0x5BADE1: push    ecx
0x5BADE2: fstp    [esp+368h+a2]; a3
0x5BADE5: push    0FA1h; a2
0x5BADEA: mov     [edi+78h], ebx
0x5BADED: call    Tile_SetFloat
0x5BADF2: mov     eax, [edi+48h]
0x5BADF5: mov     esi, [eax+34h]
0x5BADF8: cmp     esi, ebx
0x5BADFA: jz      short loc_5BAE18
0x5BADFC: lea     esp, [esp+0]
0x5BAE00: mov     ecx, [esi+8]
0x5BAE03: cmp     ecx, ebx
0x5BAE05: lea     eax, [esi+8]
0x5BAE08: mov     esi, [esi]
0x5BAE0A: jz      short loc_5BAE14
0x5BAE0C: mov     edx, [ecx]
0x5BAE0E: mov     eax, [edx]
0x5BAE10: push    1
0x5BAE12: call    eax
0x5BAE14: cmp     esi, ebx
0x5BAE16: jnz     short loc_5BAE00
0x5BAE18: mov     ecx, [edi+48h]
0x5BAE1B: add     ecx, 30h ; '0'
0x5BAE1E: call    NiTPointerList__FreeAllNodes
0x5BAE23: mov     ecx, ds:0B333C4h
0x5BAE29: cmp     [ecx+5F4h], ebx
0x5BAE2F: jnz     short loc_5BAE3C
0x5BAE31: cmp     [esp+364h+var_34C], 36h ; '6'
0x5BAE36: jz      loc_5BB184
0x5BAE3C: mov     eax, [esp+364h+var_350]
0x5BAE40: cmp     ebp, 5
0x5BAE43: setz    dl
0x5BAE46: push    1
0x5BAE48: lea     ecx, [esp+368h+var_320]
0x5BAE4C: mov     [esp+368h+var_320], ebx
0x5BAE50: mov     [esp+368h+var_31C], ebx
0x5BAE54: push    edx
0x5BAE55: push    eax
0x5BAE56: push    ecx
0x5BAE57: call    sub_52A8A0
0x5BAE5C: add     esp, 10h
0x5BAE5F: mov     [esp+364h+var_348], ebx
0x5BAE63: mov     [esp+364h+var_350], ebx
0x5BAE67: lea     eax, [esp+364h+var_320]
0x5BAE6B: jmp     short loc_5BAE74
0x5BAE6D: align 10h
0x5BAE70: mov     eax, dword ptr [esp+364h+var_330.m_dataLen]
0x5BAE74: cmp     [eax], ebx
0x5BAE76: jz      loc_5BB11C
0x5BAE7C: mov     edi, [eax]
0x5BAE7E: mov     edx, [edi+64h]
0x5BAE81: mov     eax, [eax+4]
0x5BAE84: mov     ebp, [edi+68h]
0x5BAE87: push    ebx; a3
0x5BAE88: push    offset EmptyString; a2
0x5BAE8D: lea     ecx, [esp+36Ch+var_340]; this
0x5BAE91: mov     [esp+36Ch+var_344], edx
0x5BAE95: mov     dword ptr [esp+36Ch+var_330.m_dataLen], eax
0x5BAE99: mov     [esp+36Ch+var_340.m_data], ebx
0x5BAE9D: mov     [esp+36Ch+var_340.m_dataLen], bx
0x5BAEA2: mov     [esp+36Ch+var_340.m_bufLen], bx
0x5BAEA7: call    BSStringT_Set
0x5BAEAC: mov     eax, [edi+68h]
0x5BAEAF: mov     eax, [eax+34h]
0x5BAEB2: cmp     eax, ebx
0x5BAEB4: mov     [esp+364h+var_4], ebx
0x5BAEBB: jnz     short loc_5BAEC2
0x5BAEBD: mov     eax, offset EmptyString
0x5BAEC2: mov     ecx, [esp+364h+var_348]
0x5BAEC6: push    ecx
0x5BAEC7: push    eax; ArgList
0x5BAEC8: lea     edx, [esp+36Ch+var_340]
0x5BAECC: push    offset aS_I; "%s_%i"
0x5BAED1: push    edx; int
0x5BAED2: call    BSStringT_Static_Format
0x5BAED7: mov     eax, [esp+374h+var_34C]
0x5BAEDB: mov     ecx, [esp+374h+var_340.m_data]
0x5BAEDF: add     esp, 10h
0x5BAEE2: push    eax
0x5BAEE3: push    ecx
0x5BAEE4: mov     ecx, [esp+36Ch+var_330.m_data]
0x5BAEE8: call    sub_5B8D00
0x5BAEED: mov     esi, eax
0x5BAEEF: mov     eax, [edi+68h]
0x5BAEF2: mov     eax, [eax+34h]
0x5BAEF5: cmp     eax, ebx
0x5BAEF7: jnz     short loc_5BAEFE
0x5BAEF9: mov     eax, offset EmptyString
0x5BAEFE: push    ebx; a3
0x5BAEFF: push    eax; a2
0x5BAF00: lea     ecx, [esp+36Ch+var_338]; this
0x5BAF04: mov     [esp+36Ch+var_338.m_data], ebx
0x5BAF08: mov     [esp+36Ch+var_338.m_dataLen], bx
0x5BAF0D: mov     [esp+36Ch+var_338.m_bufLen], bx
0x5BAF12: call    BSStringT_Set
0x5BAF17: mov     edx, [esp+364h+var_338.m_data]
0x5BAF1B: cmp     edx, ebx
0x5BAF1D: mov     byte ptr [esp+364h+var_4], 1
0x5BAF25: jz      short loc_5BAF5A
0x5BAF27: xor     eax, eax
0x5BAF29: lea     esp, [esp+0]
0x5BAF30: mov     cl, [edx+eax]
0x5BAF33: cmp     cl, 20h ; ' '
0x5BAF36: mov     [esp+eax+364h+var_318], cl
0x5BAF3A: jnz     short loc_5BAF41
0x5BAF3C: mov     [esp+eax+364h+var_318], 5Fh ; '_'
0x5BAF41: cmp     [esp+eax+364h+var_318], bl
0x5BAF45: jz      short loc_5BAF51
0x5BAF47: add     eax, 1
0x5BAF4A: cmp     eax, 100h
0x5BAF4F: jb      short loc_5BAF30
0x5BAF51: mov     [esp+364h+var_219], bl
0x5BAF58: jmp     short loc_5BAF5E
0x5BAF5A: mov     [esp+364h+var_318], bl
0x5BAF5E: push    ebx; a3
0x5BAF5F: lea     edx, [esp+368h+var_318]
0x5BAF63: lea     ecx, [esi+8]; this
0x5BAF66: push    edx; a2
0x5BAF67: call    BSStringT_Set
0x5BAF6C: fild    [esp+364h+var_348]
0x5BAF70: push    ecx
0x5BAF71: mov     ecx, esi; this
0x5BAF73: fstp    [esp+368h+a2]; a3
0x5BAF76: push    0FAAh; a2
0x5BAF7B: call    Tile_SetFloat
0x5BAF80: mov     eax, [edi+68h]
0x5BAF83: mov     eax, [eax+34h]
0x5BAF86: add     [esp+364h+var_348], 1
0x5BAF8B: cmp     eax, ebx
0x5BAF8D: jnz     short loc_5BAF94
0x5BAF8F: mov     eax, offset EmptyString
0x5BAF94: push    eax
0x5BAF95: push    0FAFh
0x5BAF9A: mov     ecx, esi
0x5BAF9C: call    Tile_SetString
0x5BAFA1: mov     ecx, [esp+364h+var_344]
0x5BAFA5: lea     eax, [esp+364h+var_328]
0x5BAFA9: push    eax
0x5BAFAA: call    sub_47D400
0x5BAFAF: mov     eax, [eax]
0x5BAFB1: push    eax
0x5BAFB2: push    0FB0h
0x5BAFB7: mov     ecx, esi
0x5BAFB9: mov     byte ptr [esp+36Ch+var_4], 2
0x5BAFC1: call    Tile_SetString
0x5BAFC6: mov     ecx, [esp+364h+var_328]
0x5BAFCA: push    ecx
0x5BAFCB: mov     byte ptr [esp+368h+var_4], 1
0x5BAFD3: call    FormHeapFree
0x5BAFD8: add     esp, 4
0x5BAFDB: push    ebp
0x5BAFDC: mov     ecx, edi
0x5BAFDE: mov     [esp+368h+var_328], ebx
0x5BAFE2: mov     word ptr [esp+368h+a3+2], bx
0x5BAFE7: mov     word ptr [esp+368h+a3], bx
0x5BAFEC: call    QuestStageItem_GetLogText
0x5BAFF1: push    eax
0x5BAFF2: push    0FB1h
0x5BAFF7: mov     ecx, esi
0x5BAFF9: call    Tile_SetString
0x5BAFFE: mov     eax, [ebp+28h]
0x5BB001: cmp     eax, ebx
0x5BB003: jnz     short loc_5BB00A
0x5BB005: mov     eax, offset EmptyString
0x5BB00A: push    eax
0x5BB00B: lea     edx, [esp+368h+var_218]
0x5BB012: push    offset aS; "%s"
0x5BB017: push    edx
0x5BB018: call    __sprintf
0x5BB01D: add     esp, 0Ch
0x5BB020: cmp     [esp+364h+var_218], bl
0x5BB027: mov     [esp+364h+var_114], bl
0x5BB02E: jz      short loc_5BB052
0x5BB030: lea     eax, [esp+364h+var_218]
0x5BB037: push    eax
0x5BB038: push    offset aIcons; "Icons"
0x5BB03D: lea     ecx, [esp+36Ch+var_114]
0x5BB044: push    offset aSS_2; "%s\\%s"
0x5BB049: push    ecx
0x5BB04A: call    __sprintf
0x5BB04F: add     esp, 10h
0x5BB052: lea     edx, [esp+364h+var_114]
0x5BB059: push    edx
0x5BB05A: push    0FB2h
0x5BB05F: mov     ecx, esi
0x5BB061: call    Tile_SetString
0x5BB066: fild    [esp+364h+var_350]
0x5BB06A: push    ecx
0x5BB06B: mov     ecx, esi; this
0x5BB06D: fstp    [esp+368h+var_350]; a3
0x5BB071: fld     [esp+368h+var_350]
0x5BB075: fstp    [esp+368h+a2]; a3
0x5BB078: push    0FB3h; a2
0x5BB07D: call    Tile_SetFloat
0x5BB082: mov     eax, ds:0B333C4h
0x5BB087: mov     eax, [eax+5F4h]
0x5BB08D: xor     ecx, ecx
0x5BB08F: cmp     eax, ebp
0x5BB091: setz    cl
0x5BB094: add     ecx, 1
0x5BB097: mov     [esp+364h+var_344], ecx
0x5BB09B: fild    [esp+364h+var_344]
0x5BB09F: push    ecx
0x5BB0A0: mov     ecx, esi; this
0x5BB0A2: fstp    [esp+368h+a2]; a3
0x5BB0A5: push    0FB4h; a2
0x5BB0AA: call    Tile_SetFloat
0x5BB0AF: push    ebx; float
0x5BB0B0: mov     ecx, esi
0x5BB0B2: call    sub_58FBA0
0x5BB0B7: push    0FCAh
0x5BB0BC: mov     ecx, esi
0x5BB0BE: call    Tile_GetFloat
0x5BB0C3: fadd    [esp+364h+var_350]
0x5BB0C7: call    Double_To_SInt32
0x5BB0CC: mov     edx, [esp+364h+var_338.m_data]
0x5BB0D0: push    edx; a3
0x5BB0D1: mov     [esp+368h+var_350], eax
0x5BB0D5: call    FormHeapFree
0x5BB0DA: mov     eax, [esp+368h+var_340.m_data]
0x5BB0DE: push    eax; a3
0x5BB0DF: mov     [esp+36Ch+var_338.m_data], ebx
0x5BB0E3: mov     [esp+36Ch+var_338.m_bufLen], bx
0x5BB0E8: mov     [esp+36Ch+var_338.m_dataLen], bx
0x5BB0ED: mov     [esp+36Ch+var_4], 0FFFFFFFFh
0x5BB0F8: call    FormHeapFree
0x5BB0FD: mov     edi, [esp+36Ch+var_330.m_data]
0x5BB101: add     esp, 8
0x5BB104: cmp     dword ptr [esp+364h+var_330.m_dataLen], ebx
0x5BB108: mov     [esp+364h+var_340.m_data], ebx
0x5BB10C: mov     [esp+364h+var_340.m_bufLen], bx
0x5BB111: mov     [esp+364h+var_340.m_dataLen], bx
0x5BB116: jnz     loc_5BAE70
0x5BB11C: fild    [esp+364h+var_350]
0x5BB120: push    ecx
0x5BB121: mov     ecx, [edi+48h]; this
0x5BB124: fstp    [esp+368h+a2]; a3
0x5BB127: push    0FCAh; a2
0x5BB12C: call    Tile_SetFloat
0x5BB131: mov     ecx, [esp+364h+var_348]
0x5BB135: add     ecx, 0FFFFFFFEh
0x5BB138: mov     [esp+364h+var_344], ecx
0x5BB13C: fild    [esp+364h+var_344]
0x5BB140: push    ecx
0x5BB141: mov     ecx, [edi+48h]; this
0x5BB144: fstp    [esp+368h+a2]; a3
0x5BB147: push    0FAEh; a2
0x5BB14C: call    Tile_SetFloat
0x5BB151: fld     dword ptr ds:0A6B618h
0x5BB157: push    ecx
0x5BB158: mov     ecx, [edi+44h]; this
0x5BB15B: fstp    [esp+368h+a2]; a3
0x5BB15E: push    0FB7h; a2
0x5BB163: call    Tile_SetFloat
0x5BB168: fldz
0x5BB16A: push    ecx
0x5BB16B: fstp    [esp+368h+a2]; a3
0x5BB16E: mov     ecx, [edi+44h]; this
0x5BB171: push    0FB7h; a2
0x5BB176: call    Tile_SetFloat
0x5BB17B: lea     ecx, [esp+364h+var_320]
0x5BB17F: call    BSSimpleList_Clear
0x5BB184: mov     ecx, dword ptr [esp+364h+var_C]
0x5BB18B: mov     large fs:0, ecx
0x5BB192: pop     ecx
0x5BB193: pop     edi
0x5BB194: pop     esi
0x5BB195: pop     ebp
0x5BB196: pop     ebx
0x5BB197: mov     ecx, [esp+350h+var_10]
0x5BB19E: xor     ecx, esp
0x5BB1A0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5BB1A5: add     esp, 350h
0x5BB1AB: retn
