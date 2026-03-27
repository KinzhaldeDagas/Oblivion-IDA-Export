0x5B1F70: push    0FFFFFFFFh
0x5B1F72: push    offset ??1LoadingMenu@@UAE@XZ_SEH
0x5B1F77: mov     eax, large fs:0
0x5B1F7D: push    eax
0x5B1F7E: push    ecx
0x5B1F7F: push    ebx
0x5B1F80: push    ebp
0x5B1F81: push    esi
0x5B1F82: push    edi
0x5B1F83: mov     eax, ds:0B30AACh
0x5B1F88: xor     eax, esp
0x5B1F8A: push    eax
0x5B1F8B: lea     eax, [esp+24h+var_C]
0x5B1F8F: mov     large fs:0, eax
0x5B1F95: mov     ebx, ecx
0x5B1F97: mov     [esp+24h+var_10], ebx
0x5B1F9B: mov     dword ptr [ebx], offset ??_7MagicMenu@@6B@; const MagicMenu::`vftable'
0x5B1FA1: xor     ebp, ebp
0x5B1FA3: cmp     ds:0B14368h, ebp
0x5B1FA9: mov     [esp+24h+var_4], ebp
0x5B1FAD: jz      short loc_5B2011
0x5B1FAF: nop
0x5B1FB0: mov     eax, ds:0B14360h
0x5B1FB5: mov     ecx, [eax]
0x5B1FB7: cmp     ecx, ebp
0x5B1FB9: mov     ds:0B14360h, ecx
0x5B1FBF: jz      short loc_5B1FC6
0x5B1FC1: mov     [ecx+4], ebp
0x5B1FC4: jmp     short loc_5B1FCC
0x5B1FC6: mov     ds:0B14364h, ebp
0x5B1FCC: mov     esi, [eax+8]
0x5B1FCF: push    eax
0x5B1FD0: mov     eax, ds:0B1435Ch
0x5B1FD5: mov     edx, [eax+8]
0x5B1FD8: mov     ecx, offset g_MagicMenuMagicItemList
0x5B1FDD: call    edx
0x5B1FDF: sub     dword ptr ds:0B14368h, 1
0x5B1FE6: cmp     esi, ebp
0x5B1FE8: jz      short loc_5B2009
0x5B1FEA: mov     edi, [esi]
0x5B1FEC: cmp     edi, ebp
0x5B1FEE: jz      short loc_5B2000
0x5B1FF0: mov     ecx, edi
0x5B1FF2: call    ContainerEntryExtraData_DestroyDataTable
0x5B1FF7: push    edi
0x5B1FF8: call    FormHeapFree
0x5B1FFD: add     esp, 4
0x5B2000: push    esi
0x5B2001: call    FormHeapFree
0x5B2006: add     esp, 4
0x5B2009: cmp     ds:0B14368h, ebp
0x5B200F: jnz     short loc_5B1FB0
0x5B2011: cmp     [ebx+3Ch], ebp
0x5B2014: jz      short loc_5B202C
0x5B2016: mov     eax, [ebx+3Ch]
0x5B2019: mov     esi, [eax+4]
0x5B201C: push    eax
0x5B201D: call    FormHeapFree
0x5B2022: add     esp, 4
0x5B2025: cmp     esi, ebp
0x5B2027: mov     [ebx+3Ch], esi
0x5B202A: jnz     short loc_5B2016
0x5B202C: lea     ecx, [ebx+40h]
0x5B202F: mov     [ebx+38h], ebp
0x5B2032: call    sub_5B1D70
0x5B2037: mov     ecx, ebx; this
0x5B2039: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5B2041: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5B2046: mov     ecx, dword ptr [esp+24h+var_C]
0x5B204A: mov     large fs:0, ecx
0x5B2051: pop     ecx
0x5B2052: pop     edi
0x5B2053: pop     esi
0x5B2054: pop     ebp
0x5B2055: pop     ebx
0x5B2056: add     esp, 10h
0x5B2059: retn
