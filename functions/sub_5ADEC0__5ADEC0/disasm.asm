0x5ADEC0: push    ecx
0x5ADEC1: push    esi; a3
0x5ADEC2: push    3EFh
0x5ADEC7: call    Menu_GetOpenMenuTile
0x5ADECC: mov     esi, eax
0x5ADECE: add     esp, 4
0x5ADED1: test    esi, esi
0x5ADED3: jz      loc_5AE05B
0x5ADED9: mov     ecx, esi
0x5ADEDB: call    Tile_GetParentMenu
0x5ADEE0: test    eax, eax
0x5ADEE2: jz      loc_5AE05B
0x5ADEE8: fld     dword ptr ds:0A379B4h
0x5ADEEE: push    ecx
0x5ADEEF: fstp    [esp+0Ch+a2]; a3
0x5ADEF2: push    0FA1h; a2
0x5ADEF7: mov     ecx, esi; this
0x5ADEF9: call    Tile_SetFloat
0x5ADEFE: push    0; float
0x5ADF00: mov     ecx, esi
0x5ADF02: call    sub_58FBA0
0x5ADF07: mov     ecx, esi
0x5ADF09: call    Tile_GetParentMenu
0x5ADF0E: mov     esi, eax
0x5ADF10: cmp     dword ptr [esi+3Ch], 64h ; 'd'
0x5ADF14: jge     short loc_5ADF23
0x5ADF16: mov     ecx, ds:0B3A6B0h
0x5ADF1C: push    0
0x5ADF1E: call    sub_572F60
0x5ADF23: cmp     byte ptr ds:0B14130h, 0
0x5ADF2A: push    ebx
0x5ADF2B: mov     ebx, dword ptr [esp+0Ch+ArgList]
0x5ADF2F: push    edi
0x5ADF30: jz      short loc_5ADF7C
0x5ADF32: cmp     [esi+28h], ebx
0x5ADF35: jz      short loc_5ADF51
0x5ADF37: push    ebx; ArgList
0x5ADF38: push    offset aLoadingBarSect; "Loading Bar Section %d"
0x5ADF3D: call    PrintToLog???
0x5ADF42: add     esp, 8
0x5ADF45: mov     dword ptr ds:0B3B3ECh, 0
0x5ADF4F: jmp     short loc_5ADF7C
0x5ADF51: fld     [esp+10h+arg_4]
0x5ADF55: fdiv    qword ptr ds:0A3F3E8h
0x5ADF5B: call    Double_To_SInt32
0x5ADF60: cmp     eax, ds:0B3B3ECh
0x5ADF66: jle     short loc_5ADF7C
0x5ADF68: push    eax
0x5ADF69: push    ebx; ArgList
0x5ADF6A: push    offset aLoadingBarSe_0; "Loading Bar Section %d %d0%%"
0x5ADF6F: mov     ds:0B3B3ECh, eax
0x5ADF74: call    PrintToLog???
0x5ADF79: add     esp, 0Ch
0x5ADF7C: mov     eax, [esi+28h]
0x5ADF7F: cmp     ebx, eax
0x5ADF81: jge     short loc_5ADFB6
0x5ADF83: mov     ecx, [esi+eax*4+2Ch]
0x5ADF87: mov     edx, [esi+ebx*4+2Ch]
0x5ADF8B: push    ecx
0x5ADF8C: push    eax
0x5ADF8D: push    edx
0x5ADF8E: push    ebx; ArgList
0x5ADF8F: push    offset aLoadingmenuSec; "LoadingMenu sections loading out of ord"...
0x5ADF94: call    PrintError
0x5ADF99: lea     eax, [ebx+1]
0x5ADF9C: add     esp, 14h
0x5ADF9F: cmp     eax, 4
0x5ADFA2: mov     [esi+28h], ebx
0x5ADFA5: jge     short loc_5ADFB6
0x5ADFA7: mov     ecx, 4
0x5ADFAC: lea     edi, [esi+eax*4+2Ch]
0x5ADFB0: sub     ecx, eax
0x5ADFB2: xor     eax, eax
0x5ADFB4: rep stosd
0x5ADFB6: cmp     [esi+28h], ebx
0x5ADFB9: mov     edi, 1
0x5ADFBE: jge     short loc_5ADFD8
0x5ADFC0: mov     eax, [esi+28h]
0x5ADFC3: cmp     eax, 0FFFFFFFFh
0x5ADFC6: jz      short loc_5ADFD0
0x5ADFC8: mov     dword ptr [esi+eax*4+2Ch], 64h ; 'd'
0x5ADFD0: add     [esi+28h], edi
0x5ADFD3: cmp     [esi+28h], ebx
0x5ADFD6: jl      short loc_5ADFC0
0x5ADFD8: jnz     short loc_5ADFFA
0x5ADFDA: fild    dword ptr [esi+ebx*4+2Ch]
0x5ADFDE: fld     [esp+10h+arg_4]
0x5ADFE2: fcom    st(1)
0x5ADFE4: fnstsw  ax
0x5ADFE6: fstp    st(1)
0x5ADFE8: test    ah, 41h
0x5ADFEB: jnz     short loc_5ADFF8
0x5ADFED: call    Double_To_SInt32
0x5ADFF2: mov     [esi+ebx*4+2Ch], eax
0x5ADFF6: jmp     short loc_5ADFFA
0x5ADFF8: fstp    st
0x5ADFFA: fldz
0x5ADFFC: mov     eax, offset flt_B3B3DC
0x5AE001: fstp    [esp+10h+var_4]
0x5AE005: lea     ecx, [esi+2Ch]
0x5AE008: fild    dword ptr [ecx]
0x5AE00A: add     eax, 4
0x5AE00D: add     ecx, 4
0x5AE010: cmp     eax, offset dword_B3B3EC
0x5AE015: fmul    dword ptr [eax-4]
0x5AE018: fadd    [esp+10h+var_4]
0x5AE01C: fstp    [esp+10h+var_4]
0x5AE020: jl      short loc_5AE008
0x5AE022: fld     [esp+10h+var_4]
0x5AE026: call    Double_To_SInt32
0x5AE02B: push    0
0x5AE02D: mov     [esi+3Ch], eax
0x5AE030: call    sub_5AD980
0x5AE035: mov     eax, [esi+44h]
0x5AE038: add     esp, 4
0x5AE03B: push    eax
0x5AE03C: mov     ecx, esi
0x5AE03E: call    sub_5AD440
0x5AE043: push    edi; arg1
0x5AE044: push    0; canCreate
0x5AE046: call    InterfaceManager_GetSingleton
0x5AE04B: add     esp, 8
0x5AE04E: pop     edi
0x5AE04F: pop     ebx
0x5AE050: mov     ecx, eax
0x5AE052: pop     esi
0x5AE053: add     esp, 4
0x5AE056: jmp     sub_57E150
0x5AE05B: pop     esi
0x5AE05C: pop     ecx
0x5AE05D: retn
