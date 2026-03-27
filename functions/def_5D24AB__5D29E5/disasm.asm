0x5D29E5: fld1; jumptable 005D24AB default case
0x5D29E7: push    ecx
0x5D29E8: mov     ecx, [ebp+3Ch]; this
0x5D29EB: fstp    [esp+4+a2]; a3
0x5D29EE: push    0FA1h; a2
0x5D29F3: call    Tile_SetFloat
0x5D29F8: mov     ecx, esi
0x5D29FA: call    ContainerEntryExtraData_DestroyDataTable
0x5D29FF: push    esi
0x5D2A00: call    FormHeapFree
0x5D2A05: add     esp, 4
0x5D2A08: mov     ecx, [esp+arg_298]
0x5D2A0F: mov     large fs:0, ecx
0x5D2A16: pop     ecx
0x5D2A17: pop     edi
0x5D2A18: pop     esi
0x5D2A19: pop     ebp
0x5D2A1A: pop     ebx
0x5D2A1B: mov     ecx, [esp-14h+arg_294]
0x5D2A22: xor     ecx, esp
0x5D2A24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D2A29: add     esp, 294h
0x5D2A2F: retn    8
