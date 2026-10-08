0x6B84A0: push    ecx; Saves response display text and voice path with UInt8 lengths, then the copied 8-byte TRDT prefix as two UInt32 values.
0x6B84A1: push    esi
0x6B84A2: mov     esi, ecx
0x6B84A4: mov     eax, [esi]
0x6B84A6: lea     edx, [eax+1]
0x6B84A9: lea     esp, [esp+0]
0x6B84B0: mov     cl, [eax]
0x6B84B2: add     eax, 1
0x6B84B5: test    cl, cl
0x6B84B7: jnz     short loc_6B84B0
0x6B84B9: mov     ecx, ds:0B33B00h; self
0x6B84BF: sub     eax, edx
0x6B84C1: mov     [esp+8+Src], al
0x6B84C5: push    1; byteCount
0x6B84C7: lea     eax, [esp+0Ch+Src]
0x6B84CB: push    eax; source
0x6B84CC: call    SaveLoad_SaveData
0x6B84D1: mov     al, [esp+8+Src]
0x6B84D5: test    al, al
0x6B84D7: jz      short loc_6B84EB
0x6B84D9: mov     edx, [esi]
0x6B84DB: movzx   ecx, al
0x6B84DE: push    ecx; byteCount
0x6B84DF: mov     ecx, ds:0B33B00h; self
0x6B84E5: push    edx; source
0x6B84E6: call    SaveLoad_SaveData
0x6B84EB: mov     eax, [esi+10h]
0x6B84EE: lea     edx, [eax+1]
0x6B84F1: mov     cl, [eax]
0x6B84F3: add     eax, 1
0x6B84F6: test    cl, cl
0x6B84F8: jnz     short loc_6B84F1
0x6B84FA: mov     ecx, ds:0B33B00h; self
0x6B8500: sub     eax, edx
0x6B8502: mov     [esp+8+source], al
0x6B8506: push    1; byteCount
0x6B8508: lea     eax, [esp+0Ch+source]
0x6B850C: push    eax; source
0x6B850D: call    SaveLoad_SaveData
0x6B8512: mov     al, [esp+8+source]
0x6B8516: test    al, al
0x6B8518: jz      short loc_6B852D
0x6B851A: mov     edx, [esi+10h]
0x6B851D: movzx   ecx, al
0x6B8520: push    ecx; byteCount
0x6B8521: mov     ecx, ds:0B33B00h; self
0x6B8527: push    edx; source
0x6B8528: call    SaveLoad_SaveData
0x6B852D: mov     ecx, ds:0B33B00h; self
0x6B8533: push    4; byteCount
0x6B8535: lea     eax, [esi+8]
0x6B8538: push    eax; source
0x6B8539: call    SaveLoad_SaveData
0x6B853E: mov     ecx, ds:0B33B00h; self
0x6B8544: push    4; byteCount
0x6B8546: add     esi, 0Ch
0x6B8549: push    esi; source
0x6B854A: call    SaveLoad_SaveData
0x6B854F: pop     esi
0x6B8550: pop     ecx
0x6B8551: retn
