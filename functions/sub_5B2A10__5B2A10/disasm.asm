0x5B2A10: push    0FFFFFFFFh
0x5B2A12: push    offset SEH_5CEE10
0x5B2A17: mov     eax, large fs:0
0x5B2A1D: push    eax
0x5B2A1E: sub     esp, 10Ch
0x5B2A24: mov     eax, ds:0B30AACh
0x5B2A29: xor     eax, esp
0x5B2A2B: mov     [esp+118h+var_10], eax
0x5B2A32: push    ebx
0x5B2A33: push    ebp
0x5B2A34: push    esi
0x5B2A35: push    edi
0x5B2A36: mov     eax, ds:0B30AACh
0x5B2A3B: xor     eax, esp
0x5B2A3D: push    eax; a3
0x5B2A3E: lea     eax, [esp+12Ch+var_C]
0x5B2A45: mov     large fs:0, eax
0x5B2A4B: mov     edi, [esp+12Ch+arg_0]
0x5B2A52: xor     ebx, ebx
0x5B2A54: push    ebx; a3
0x5B2A55: mov     esi, ecx
0x5B2A57: push    offset aItem_template; "item_template"
0x5B2A5C: lea     ecx, [esp+134h+var_118]; this
0x5B2A60: mov     [esp+134h+var_118.m_data], ebx
0x5B2A64: mov     [esp+134h+var_118.m_dataLen], bx
0x5B2A69: mov     [esp+134h+var_118.m_bufLen], bx
0x5B2A6E: call    BSStringT_Set
0x5B2A73: mov     ebp, [esp+12Ch+var_118.m_data]
0x5B2A77: mov     eax, [esi+2Ch]
0x5B2A7A: push    ebx; lastTile
0x5B2A7B: push    ebp; name
0x5B2A7C: push    eax; parent
0x5B2A7D: mov     ecx, esi; this
0x5B2A7F: mov     [esp+138h+var_4], ebx
0x5B2A86: call    Menu__RenderTemplate; Verified 2026-10-07: case-insensitive search of Menu template list +8/+0xC; saves global build context0xB3B0A8, creates temporary storage, replaces owned default template with borrowed matched template, builds/connects, nulls mainTemplate before Destroy so borrowed template survives, then restores previous build context. Optional lastTile stored Menu+0x10. Fallout named RenderTemplate0x827E4270 corroborates role; Fallout names use interned-string comparison.
0x5B2A8B: mov     esi, eax
0x5B2A8D: cmp     esi, ebx
0x5B2A8F: jz      short loc_5B2ADB
0x5B2A91: push    edi
0x5B2A92: push    0FAFh
0x5B2A97: mov     ecx, esi
0x5B2A99: call    Tile_SetString
0x5B2A9E: lea     ecx, [esp+12Ch+var_110]
0x5B2AA2: xor     edx, edx
0x5B2AA4: sub     edi, ecx
0x5B2AA6: lea     eax, [esp+edx+12Ch+var_110]
0x5B2AAA: mov     cl, [edi+eax]
0x5B2AAD: cmp     cl, 20h ; ' '
0x5B2AB0: mov     [eax], cl
0x5B2AB2: jnz     short loc_5B2AB7
0x5B2AB4: mov     byte ptr [eax], 5Fh ; '_'
0x5B2AB7: cmp     [eax], bl
0x5B2AB9: jz      short loc_5B2AC6
0x5B2ABB: add     edx, 1
0x5B2ABE: cmp     edx, 100h
0x5B2AC4: jl      short loc_5B2AA6
0x5B2AC6: push    ebx; a3
0x5B2AC7: lea     edx, [esp+130h+var_110]
0x5B2ACB: lea     ecx, [esi+8]; this
0x5B2ACE: push    edx; a2
0x5B2ACF: mov     [esp+134h+var_11], bl
0x5B2AD6: call    BSStringT_Set
0x5B2ADB: fild    [esp+12Ch+arg_4]
0x5B2AE2: push    ecx
0x5B2AE3: mov     ecx, esi; this
0x5B2AE5: fstp    [esp+130h+a2]; value
0x5B2AE8: push    0FA8h; propertyCode
0x5B2AED: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5B2AF2: push    ebp
0x5B2AF3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5B2AF8: add     esp, 4
0x5B2AFB: mov     eax, esi
0x5B2AFD: mov     ecx, [esp+12Ch+var_C]
0x5B2B04: mov     large fs:0, ecx
0x5B2B0B: pop     ecx
0x5B2B0C: pop     edi
0x5B2B0D: pop     esi
0x5B2B0E: pop     ebp
0x5B2B0F: pop     ebx
0x5B2B10: mov     ecx, [esp+118h+var_10]
0x5B2B17: xor     ecx, esp
0x5B2B19: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B2B1E: add     esp, 118h
0x5B2B24: retn    8
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
