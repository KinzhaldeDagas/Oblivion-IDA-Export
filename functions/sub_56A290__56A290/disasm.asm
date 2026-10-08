0x56A290: push    ecx
0x56A291: push    esi
0x56A292: mov     esi, ecx
0x56A294: mov     ecx, ds:0B33B00h; self
0x56A29A: push    1; byteCount
0x56A29C: push    esi; source
0x56A29D: call    SaveLoad_SaveData
0x56A2A2: mov     ecx, ds:0B33B00h; self
0x56A2A8: push    4; byteCount
0x56A2AA: lea     eax, [esi+8]
0x56A2AD: push    eax; source
0x56A2AE: call    SaveLoad_SaveData
0x56A2B3: mov     al, [esi]
0x56A2B5: cmp     al, 1
0x56A2B7: jbe     short loc_56A2D1
0x56A2B9: cmp     al, 2
0x56A2BB: jnz     short loc_56A2F9
0x56A2BD: mov     ecx, ds:0B33B00h; self
0x56A2C3: push    4; byteCount
0x56A2C5: add     esi, 4
0x56A2C8: push    esi; source
0x56A2C9: call    SaveLoad_SaveData
0x56A2CE: pop     esi
0x56A2CF: pop     ecx
0x56A2D0: retn
0x56A2D1: mov     esi, [esi+4]
0x56A2D4: test    esi, esi
0x56A2D6: mov     [esp+8+source], 0
0x56A2DE: jz      short loc_56A2E7
0x56A2E0: mov     ecx, [esi+0Ch]
0x56A2E3: mov     [esp+8+source], ecx
0x56A2E7: mov     ecx, ds:0B33B00h; self
0x56A2ED: push    4; byteCount
0x56A2EF: lea     edx, [esp+0Ch+source]
0x56A2F3: push    edx; source
0x56A2F4: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x56A2F9: pop     esi
0x56A2FA: pop     ecx
0x56A2FB: retn
