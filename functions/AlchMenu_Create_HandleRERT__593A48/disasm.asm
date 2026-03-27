0x593A48: mov     ecx, [esp+arg_10]
0x593A4C: test    ecx, ecx
0x593A4E: jz      short loc_593A9C
0x593A50: mov     eax, ds:0B333C4h
0x593A55: push    eax
0x593A56: call    sub_4851B0
0x593A5B: push    eax
0x593A5C: push    offset aIcons; "Icons"
0x593A61: lea     ecx, [esp+8+arg_1C]
0x593A65: push    offset aSS_2; "%s\\%s"
0x593A6A: push    ecx
0x593A6B: call    __sprintf
0x593A70: mov     ecx, [esi+3Ch]
0x593A73: add     esp, 10h
0x593A76: lea     edx, [esp+arg_1C]
0x593A7A: push    edx
0x593A7B: push    0FE6h
0x593A80: call    Tile_SetString
0x593A85: fld     dword ptr ds:0A379B4h
0x593A8B: push    ecx
0x593A8C: mov     ecx, [esi+3Ch]; this
0x593A8F: fstp    [esp+4+a2]; a3
0x593A92: push    0FA1h; a2
0x593A97: call    Tile_SetFloat
0x593A9C: mov     eax, ds:0B38900h
0x593AA1: mov     ecx, [esi+0A0h]
0x593AA7: push    eax
0x593AA8: call    sub_57FF20
0x593AAD: mov     ecx, esi
0x593AAF: call    sub_593710
0x593AB4: push    0; char
0x593AB6: mov     ecx, ebp; int
0x593AB8: call    EnableMenu
0x593ABD: mov     eax, [esp+arg_C]
0x593AC1: jmp     short loc_593AD6
0x593AC3: cmp     dword ptr [ebp+4], 0
0x593AC7: jz      short loc_593AD4
0x593AC9: mov     edx, [ebp+0]
0x593ACC: mov     eax, [edx]
0x593ACE: push    1
0x593AD0: mov     ecx, ebp
0x593AD2: call    eax
0x593AD4: xor     eax, eax
0x593AD6: mov     ecx, [esp+arg_120]
0x593ADD: pop     edi
0x593ADE: pop     esi
0x593ADF: pop     ebp
0x593AE0: pop     ebx
0x593AE1: xor     ecx, esp
0x593AE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x593AE8: add     esp, 118h
0x593AEE: retn
