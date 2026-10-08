0x7A3470: push    esi; Deep copy-assigns a compact 0x54 SIdvLeafTexture: byte blossom flag, color/variance, owned filename, origin, size, and sizeUsed.
0x7A3471: mov     esi, ecx
0x7A3473: push    edi
0x7A3474: mov     edi, [esp+8+source]
0x7A3478: mov     al, [edi]
0x7A347A: mov     [esi], al
0x7A347C: mov     ecx, [edi+4]
0x7A347F: mov     [esi+4], ecx
0x7A3482: mov     edx, [edi+8]
0x7A3485: mov     [esi+8], edx
0x7A3488: mov     eax, [edi+0Ch]
0x7A348B: push    0FFFFFFFFh; count
0x7A348D: push    0; offset
0x7A348F: lea     ecx, [edi+14h]
0x7A3492: mov     [esi+0Ch], eax
0x7A3495: fld     dword ptr [edi+10h]
0x7A3498: push    ecx; source
0x7A3499: fstp    dword ptr [esi+10h]
0x7A349C: lea     ecx, [esi+14h]; this
0x7A349F: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A34A4: mov     edx, [edi+30h]
0x7A34A7: mov     [esi+30h], edx; SpeedTreeOBSE 2026-07-09: copies compact SIdvLeafTexture m_cOrigin from source +0x30; this is not the exported per-card texcoord table.
0x7A34AA: mov     eax, [edi+34h]
0x7A34AD: mov     [esi+34h], eax
0x7A34B0: mov     ecx, [edi+38h]
0x7A34B3: mov     [esi+38h], ecx
0x7A34B6: mov     edx, [edi+3Ch]
0x7A34B9: mov     [esi+3Ch], edx; SpeedTreeOBSE 2026-07-09: copies compact SIdvLeafTexture m_cSize from source +0x3C.
0x7A34BC: mov     eax, [edi+40h]
0x7A34BF: mov     [esi+40h], eax
0x7A34C2: mov     ecx, [edi+44h]
0x7A34C5: lea     eax, [edi+48h]
0x7A34C8: mov     [esi+44h], ecx
0x7A34CB: mov     edx, [eax]
0x7A34CD: mov     [esi+48h], edx; SpeedTreeOBSE 2026-07-09: copies compact SIdvLeafTexture m_cSizeUsed from source +0x48; world-space leaf sizing, not a UV texture extent.
0x7A34D0: mov     ecx, [eax+4]
0x7A34D3: mov     [esi+4Ch], ecx
0x7A34D6: mov     edx, [eax+8]
0x7A34D9: pop     edi
0x7A34DA: mov     [esi+50h], edx
0x7A34DD: mov     eax, esi
0x7A34DF: pop     esi
0x7A34E0: retn    4
