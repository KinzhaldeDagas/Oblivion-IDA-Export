0x591B70: push    0FFFFFFFFh
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
0x591BF2: mov     ecx, esi
0x591BF4: call    sub_58DA70
0x591BF9: mov     ecx, esi; this
0x591BFB: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x591C03: call    ??1TileRect@@UAE@XZ; TileRect::~TileRect(void)
0x591C08: mov     ecx, dword ptr [esp+1Ch+var_C]
0x591C0C: mov     large fs:0, ecx
0x591C13: pop     ecx
0x591C14: pop     esi
0x591C15: add     esp, 14h
0x591C18: retn
