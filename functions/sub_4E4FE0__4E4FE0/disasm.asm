0x4E4FE0: push    ebx; Verified PGRI row creation writes local point index in low u16 and remote point XYZ at +4; bytes +2..+3 are left unwritten here and ignored by inspected readers, so their intended meaning remains Unknown.
0x4E4FE1: mov     ebx, [esp+4+point]
0x4E4FE5: push    esi
0x4E4FE6: mov     esi, [esp+8+neighborPosition]
0x4E4FEA: push    edi
0x4E4FEB: push    esi; neighborPosition
0x4E4FEC: push    ebx; point
0x4E4FED: mov     edi, ecx
0x4E4FEF: call    TESPathGrid_HasPGRICrossCellLinkRequest; Verified duplicate check for a deferred cross-cell PGRI request: compares the point-array entry selected by the record's low u16 index and matches the stored neighbor NiPoint3 at +4 using fConstant_2 tolerance.
0x4E4FF4: test    al, al
0x4E4FF6: jnz     short loc_4E502E
0x4E4FF8: push    ebx; point
0x4E4FF9: mov     ecx, edi; this
0x4E4FFB: call    TESPathGrid_GetPointIndex; Verified scans the TESPathGrid point array for pointer identity and returns its u16 array index; returns 0xFFFFFFFF if no point array or no matching point.
0x4E5000: mov     ebx, eax
0x4E5002: cmp     ebx, 0FFFFFFFFh
0x4E5005: jz      short loc_4E502E
0x4E5007: push    10h; Size
0x4E5009: call    FormHeapAlloc
0x4E500E: mov     [eax], bx
0x4E5011: mov     ecx, [esi]
0x4E5013: mov     [eax+4], ecx
0x4E5016: mov     edx, [esi+4]
0x4E5019: mov     [eax+8], edx
0x4E501C: mov     ecx, [esi+8]
0x4E501F: add     esp, 4
0x4E5022: mov     [eax+0Ch], ecx
0x4E5025: push    eax
0x4E5026: lea     ecx, [edi+28h]
0x4E5029: call    BSSimpleList_PushFront
0x4E502E: pop     edi
0x4E502F: pop     esi
0x4E5030: pop     ebx
0x4E5031: retn    8
