0x5CEE10: push    0FFFFFFFFh
0x5CEE12: push    offset SEH_5CEE10
0x5CEE17: mov     eax, large fs:0
0x5CEE1D: push    eax
0x5CEE1E: sub     esp, 10Ch
0x5CEE24: mov     eax, ds:0B30AACh
0x5CEE29: xor     eax, esp
0x5CEE2B: mov     [esp+118h+var_10], eax
0x5CEE32: push    ebx
0x5CEE33: push    ebp
0x5CEE34: push    esi
0x5CEE35: push    edi; a3
0x5CEE36: mov     eax, ds:0B30AACh
0x5CEE3B: xor     eax, esp
0x5CEE3D: push    eax; a3
0x5CEE3E: lea     eax, [esp+12Ch+var_C]
0x5CEE45: mov     large fs:0, eax
0x5CEE4B: mov     eax, [esp+12Ch+a2]
0x5CEE52: mov     edi, [esp+12Ch+arg_4]
0x5CEE59: xor     ebx, ebx
0x5CEE5B: push    ebx; a3
0x5CEE5C: mov     ebp, ecx
0x5CEE5E: push    eax; a2
0x5CEE5F: lea     ecx, [esp+134h+var_118]; this
0x5CEE63: mov     [esp+134h+var_118.m_data], ebx
0x5CEE67: mov     [esp+134h+var_118.m_dataLen], bx
0x5CEE6C: mov     [esp+134h+var_118.m_bufLen], bx
0x5CEE71: call    BSStringT_Set
0x5CEE76: mov     eax, [ebp+38h]
0x5CEE79: push    ebx; lastTile
0x5CEE7A: push    offset aRecharge_item_; "recharge_item_template"
0x5CEE7F: push    eax; parent
0x5CEE80: mov     ecx, ebp; this
0x5CEE82: mov     [esp+138h+var_4], ebx
0x5CEE89: call    Menu__RenderTemplate; Verified 2026-10-07: case-insensitive search of Menu template list +8/+0xC; saves global build context0xB3B0A8, creates temporary storage, replaces owned default template with borrowed matched template, builds/connects, nulls mainTemplate before Destroy so borrowed template survives, then restores previous build context. Optional lastTile stored Menu+0x10. Fallout named RenderTemplate0x827E4270 corroborates role; Fallout names use interned-string comparison.
0x5CEE8E: mov     esi, eax
0x5CEE90: cmp     esi, ebx
0x5CEE92: jz      loc_5CEF27
0x5CEE98: push    edi
0x5CEE99: push    0FAFh
0x5CEE9E: mov     ecx, esi
0x5CEEA0: call    Tile_SetString
0x5CEEA5: lea     ecx, [esp+12Ch+var_110]
0x5CEEA9: xor     edx, edx
0x5CEEAB: sub     edi, ecx
0x5CEEAD: lea     ecx, [ecx+0]
0x5CEEB0: lea     eax, [esp+edx+12Ch+var_110]
0x5CEEB4: mov     cl, [edi+eax]
0x5CEEB7: cmp     cl, 20h ; ' '
0x5CEEBA: mov     [eax], cl
0x5CEEBC: jnz     short loc_5CEEC1
0x5CEEBE: mov     byte ptr [eax], 5Fh ; '_'
0x5CEEC1: cmp     [eax], bl
0x5CEEC3: jz      short loc_5CEED0
0x5CEEC5: add     edx, 1
0x5CEEC8: cmp     edx, 100h
0x5CEECE: jl      short loc_5CEEB0
0x5CEED0: push    ebx; a3
0x5CEED1: lea     edx, [esp+130h+var_110]
0x5CEED5: lea     ecx, [esi+8]; this
0x5CEED8: push    edx; a2
0x5CEED9: mov     [esp+134h+var_11], bl
0x5CEEE0: call    BSStringT_Set
0x5CEEE5: mov     eax, [esp+12Ch+var_118.m_data]
0x5CEEE9: push    eax
0x5CEEEA: push    0FB1h
0x5CEEEF: mov     ecx, esi
0x5CEEF1: call    Tile_SetString
0x5CEEF6: fild    [esp+12Ch+arg_8]
0x5CEEFD: push    ecx
0x5CEEFE: mov     ecx, esi; this
0x5CEF00: fstp    [esp+130h+var_130]; value
0x5CEF03: push    0FAEh; propertyCode
0x5CEF08: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5CEF0D: fild    [esp+12Ch+arg_C]
0x5CEF14: push    ecx
0x5CEF15: mov     ecx, esi; this
0x5CEF17: fstp    [esp+130h+var_130]; value
0x5CEF1A: push    0FA8h; propertyCode
0x5CEF1F: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5CEF24: mov     [ebp+10h], esi
0x5CEF27: mov     ecx, [esp+12Ch+var_118.m_data]
0x5CEF2B: push    ecx
0x5CEF2C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5CEF31: add     esp, 4
0x5CEF34: mov     eax, esi
0x5CEF36: mov     ecx, [esp+12Ch+var_C]
0x5CEF3D: mov     large fs:0, ecx
0x5CEF44: pop     ecx
0x5CEF45: pop     edi
0x5CEF46: pop     esi
0x5CEF47: pop     ebp
0x5CEF48: pop     ebx
0x5CEF49: mov     ecx, [esp+118h+var_10]
0x5CEF50: xor     ecx, esp
0x5CEF52: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5CEF57: add     esp, 118h
0x5CEF5D: retn    10h
0x9C0900: lea     ecx, [ebp-118h]; void *
0x9C0906: jmp     BSStringT_Clear
0x9C090B: mov     edx, [esp+arg_4]
0x9C090F: lea     eax, [edx-11Ch]
0x9C0915: mov     ecx, [edx-120h]
0x9C091B: xor     ecx, eax
0x9C091D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0922: add     eax, 10h
0x9C0925: mov     ecx, [edx-4]
0x9C0928: xor     ecx, eax
0x9C092A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C092F: mov     eax, offset stru_AE9B44
0x9C0934: jmp     ___CxxFrameHandler3
