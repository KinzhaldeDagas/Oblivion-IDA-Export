0x7389C0: push    ebx
0x7389C1: mov     bl, [esp+4+arg_0]
0x7389C5: test    bl, 2
0x7389C8: push    esi
0x7389C9: mov     esi, ecx
0x7389CB: jz      short loc_7389F8
0x7389CD: mov     eax, [esi-4]
0x7389D0: push    edi
0x7389D1: push    offset sub_7387F0; void (__thiscall *)(void *)
0x7389D6: lea     edi, [esi-4]
0x7389D9: push    eax; int
0x7389DA: push    14h; unsigned int
0x7389DC: push    esi; void *
0x7389DD: call    $LN21
0x7389E2: test    bl, 1
0x7389E5: jz      short loc_7389F0
0x7389E7: push    edi
0x7389E8: call    FormHeapFree
0x7389ED: add     esp, 4
0x7389F0: mov     eax, edi
0x7389F2: pop     edi
0x7389F3: pop     esi
0x7389F4: pop     ebx
0x7389F5: retn    4
0x7389F8: mov     ecx, [esi+8]
0x7389FB: push    ecx
0x7389FC: mov     dword ptr [esi], offset ??_7ScreenElement@NiScreenGeometryData@@6B@; const NiScreenGeometryData::ScreenElement::`vftable'
0x738A02: call    FormHeapFree
0x738A07: mov     edx, [esi+0Ch]
0x738A0A: push    edx
0x738A0B: call    FormHeapFree
0x738A10: mov     eax, [esi+10h]
0x738A13: push    eax
0x738A14: call    FormHeapFree
0x738A19: add     esp, 0Ch
0x738A1C: test    bl, 1
0x738A1F: jz      short loc_738A2A
0x738A21: push    esi
0x738A22: call    FormHeapFree
0x738A27: add     esp, 4
0x738A2A: mov     eax, esi
0x738A2C: pop     esi
0x738A2D: pop     ebx
0x738A2E: retn    4
