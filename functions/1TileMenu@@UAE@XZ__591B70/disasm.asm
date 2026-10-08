0x591B70: push    0FFFFFFFFh; Verified lifecycle from UpdateMenuFades 0x584255: clears Menu_OpenMenuArray[classID-0x3E9], calls Menu_SetTileMenu(menu,NULL), then invokes Menu deleting destructor with flag 1. This establishes ownership: TileMenu root owns the Menu during teardown.
0x591B72: push    offset ??1TileMenu@@UAE@XZ_SEH
0x591B77: mov     eax, large fs:0
0x591B7D: push    eax
0x591B7E: sub     esp, 8
0x591B81: push    esi
0x591B82: mov     eax, ds:0B30AACh
0x591B87: xor     eax, esp
0x591B89: push    eax
0x591B8A: lea     eax, [esp+1Ch+var_C]
0x591B8E: mov     large fs:0, eax
0x591B94: mov     esi, ecx
0x591B96: mov     [esp+1Ch+var_10], esi
0x591B9A: mov     dword ptr [esi], offset ??_7TileMenu@@6B@; const TileMenu::`vftable'
0x591BA0: mov     ecx, [esi+44h]
0x591BA3: test    ecx, ecx
0x591BA5: mov     [esp+1Ch+var_4], 0
0x591BAD: jz      short loc_591BEC
0x591BAF: mov     eax, [ecx]
0x591BB1: mov     edx, [eax+34h]
0x591BB4: mov     [esp+1Ch+var_14], 0
0x591BBC: call    edx
0x591BBE: lea     ecx, [esp+1Ch+var_14]
0x591BC2: push    ecx
0x591BC3: add     eax, 0FFFFFC17h
0x591BC8: push    eax
0x591BC9: mov     ecx, offset Menu_OpenMenuArray
0x591BCE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x591BD3: mov     ecx, [esi+44h]
0x591BD6: push    0
0x591BD8: call    Menu_SetTileMenu
0x591BDD: mov     ecx, [esi+44h]
0x591BE0: test    ecx, ecx
0x591BE2: jz      short loc_591BEC
0x591BE4: mov     edx, [ecx]
0x591BE6: mov     eax, [edx]
0x591BE8: push    1
0x591BEA: call    eax
0x591BEC: cmp     byte ptr [esi+4], 0
0x591BF0: jnz     short loc_591BF9
0x591BF2: mov     ecx, esi; this
0x591BF4: call    Tile__Release; Verified: marks subtree release-in-progress (+5), clears matching interface active/drag references, marks released (+4), detaches parent, destroys each Value, detaches model, then deletes children. Native loop at 0x58DA90 advances child iterator EDX before call; pseudocode may omit this advance.
0x591BF9: mov     ecx, esi; this
0x591BFB: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x591C03: call    ??1TileRect@@UAE@XZ; TileRect::~TileRect(void)
0x591C08: mov     ecx, dword ptr [esp+1Ch+var_C]
0x591C0C: mov     large fs:0, ecx
0x591C13: pop     ecx
0x591C14: pop     esi
0x591C15: add     esp, 14h
0x591C18: retn
0x9BFBF0: mov     ecx, [ebp-10h]; this
0x9BFBF3: jmp     ??1TileRect@@UAE@XZ; TileRect::~TileRect(void)
0x9BFBF8: mov     edx, [esp+arg_4]
0x9BFBFC: lea     eax, [edx-0Ch]
0x9BFBFF: mov     ecx, [edx-10h]
0x9BFC02: xor     ecx, eax
0x9BFC04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BFC09: mov     eax, offset stru_AE9058
0x9BFC0E: jmp     ___CxxFrameHandler3
