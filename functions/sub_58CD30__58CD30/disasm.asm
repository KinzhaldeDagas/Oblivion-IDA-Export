0x58CD30: push    0FFFFFFFFh
0x58CD32: push    offset SEH_8C8970
0x58CD37: mov     eax, large fs:0
0x58CD3D: push    eax
0x58CD3E: push    ecx
0x58CD3F: push    esi
0x58CD40: push    edi
0x58CD41: mov     eax, ds:0B30AACh
0x58CD46: xor     eax, esp
0x58CD48: push    eax
0x58CD49: lea     eax, [esp+1Ch+var_C]
0x58CD4D: mov     large fs:0, eax
0x58CD53: mov     esi, ecx
0x58CD55: xor     edi, edi
0x58CD57: push    1Ch; Size
0x58CD59: mov     [esi+4], edi
0x58CD5C: mov     [esi+8], edi
0x58CD5F: call    FormHeapAlloc
0x58CD64: add     esp, 4
0x58CD67: mov     [esp+1Ch+var_10], eax
0x58CD6B: cmp     eax, edi
0x58CD6D: mov     [esp+1Ch+var_4], edi
0x58CD71: jz      short loc_58CD82
0x58CD73: push    esi; storage
0x58CD74: push    offset aMain; "main"
0x58CD79: mov     ecx, eax; this
0x58CD7B: call    Tile__TileTemplate__Initialize; Verified 2026-10-07: this is TileTemplate initialization, not TileTemplateItem (old name corrected). Constructor initializes BSStringT name+0, storage+8, NiTList vtable+0xC/head+0x10/tail+0x14/count+0x18. Allocation0x1C at BuildStorage constructor corroborates size. Fallout template is0x14 due NiFixedString and different list layout.
0x58CD80: jmp     short loc_58CD84
0x58CD82: xor     eax, eax
0x58CD84: mov     [esi], eax
0x58CD86: mov     [esi+0Ch], edi
0x58CD89: mov     byte ptr [esi+10h], 1
0x58CD8D: mov     eax, esi
0x58CD8F: mov     ecx, [esp+1Ch+var_C]
0x58CD93: mov     large fs:0, ecx
0x58CD9A: pop     ecx
0x58CD9B: pop     edi
0x58CD9C: pop     esi
0x58CD9D: add     esp, 10h
0x58CDA0: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
