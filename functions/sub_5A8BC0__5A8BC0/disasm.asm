0x5A8BC0: push    0FFFFFFFFh
0x5A8BC2: push    offset SEH_5A8BC0
0x5A8BC7: mov     eax, large fs:0
0x5A8BCD: push    eax
0x5A8BCE: sub     esp, 8
0x5A8BD1: push    esi; a3
0x5A8BD2: mov     eax, ds:0B30AACh
0x5A8BD7: xor     eax, esp
0x5A8BD9: push    eax; a3
0x5A8BDA: lea     eax, [esp+1Ch+var_C]
0x5A8BDE: mov     large fs:0, eax
0x5A8BE4: mov     ecx, ds:0B3B350h; this
0x5A8BEA: xor     esi, esi
0x5A8BEC: cmp     ecx, esi
0x5A8BEE: jz      loc_5A8C78
0x5A8BF4: mov     [esp+1Ch+a3], esi; a3
0x5A8BF8: mov     word ptr [esp+1Ch+var_10], si; a3
0x5A8BFD: mov     word ptr [esp+1Ch+var_10+2], si
0x5A8C02: fld1
0x5A8C04: push    ecx
0x5A8C05: fstp    [esp+20h+a2]; a3
0x5A8C08: push    0FB2h; a2
0x5A8C0D: mov     [esp+24h+var_4], esi
0x5A8C11: call    Tile_SetFloat
0x5A8C16: fld     dword ptr ds:0A379B4h
0x5A8C1C: push    ecx
0x5A8C1D: mov     ecx, ds:0B3B350h; this
0x5A8C23: fstp    [esp+20h+a2]; a3
0x5A8C26: push    0FB2h; a2
0x5A8C2B: call    Tile_SetFloat
0x5A8C30: fild    [esp+1Ch+arg_0]
0x5A8C34: push    ecx
0x5A8C35: mov     ecx, ds:0B3B350h; this
0x5A8C3B: fstp    [esp+20h+a2]; a3
0x5A8C3E: push    0FB3h; a2
0x5A8C43: call    Tile_SetFloat
0x5A8C48: mov     ecx, ds:0B3B350h
0x5A8C4E: push    esi
0x5A8C4F: push    0FAEh
0x5A8C54: call    Tile_SetString
0x5A8C59: fld1
0x5A8C5B: push    ecx
0x5A8C5C: fstp    [esp+20h+a2]; a3
0x5A8C5F: mov     ecx, ds:0B3B350h; this
0x5A8C65: push    0FAFh; a2
0x5A8C6A: call    Tile_SetFloat
0x5A8C6F: push    esi
0x5A8C70: call    FormHeapFree
0x5A8C75: add     esp, 4
0x5A8C78: mov     ecx, [esp+1Ch+var_C]
0x5A8C7C: mov     large fs:0, ecx
0x5A8C83: pop     ecx
0x5A8C84: pop     esi
0x5A8C85: add     esp, 14h
0x5A8C88: retn
