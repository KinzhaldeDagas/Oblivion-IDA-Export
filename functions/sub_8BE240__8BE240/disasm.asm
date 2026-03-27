0x8BE240: push    0FFFFFFFFh
0x8BE242: push    offset SEH_8C62B0
0x8BE247: mov     eax, large fs:0
0x8BE24D: push    eax
0x8BE24E: push    ecx
0x8BE24F: push    esi
0x8BE250: mov     eax, ds:0B30AACh
0x8BE255: xor     eax, esp
0x8BE257: push    eax
0x8BE258: lea     eax, [esp+18h+var_C]
0x8BE25C: mov     large fs:0, eax
0x8BE262: push    10h; Size
0x8BE264: call    FormHeapAlloc
0x8BE269: mov     esi, eax
0x8BE26B: add     esp, 4
0x8BE26E: mov     [esp+18h+var_10], esi
0x8BE272: test    esi, esi
0x8BE274: mov     [esp+18h+var_4], 0
0x8BE27C: jz      short loc_8BE2C8
0x8BE27E: mov     ecx, esi; this
0x8BE280: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BE285: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BE28B: mov     eax, 1
0x8BE290: mov     dword ptr [esi+0Ch], 0
0x8BE297: add     ds:0BA7D00h, eax
0x8BE29D: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x8BE2A3: add     ds:0BA7D40h, eax
0x8BE2A9: mov     dword ptr [esi], offset ??_7bhkDashpotAction@@6B@; const bhkDashpotAction::`vftable'
0x8BE2AF: add     ds:0BA8070h, eax
0x8BE2B5: mov     eax, esi
0x8BE2B7: mov     ecx, [esp+18h+var_C]
0x8BE2BB: mov     large fs:0, ecx
0x8BE2C2: pop     ecx
0x8BE2C3: pop     esi
0x8BE2C4: add     esp, 10h
0x8BE2C7: retn
0x8BE2C8: xor     eax, eax
0x8BE2CA: mov     ecx, [esp+18h+var_C]
0x8BE2CE: mov     large fs:0, ecx
0x8BE2D5: pop     ecx
0x8BE2D6: pop     esi
0x8BE2D7: add     esp, 10h
0x8BE2DA: retn
