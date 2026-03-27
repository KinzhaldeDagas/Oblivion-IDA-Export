0x8BD780: push    0FFFFFFFFh
0x8BD782: push    offset SEH_8C62B0
0x8BD787: mov     eax, large fs:0
0x8BD78D: push    eax
0x8BD78E: push    ecx
0x8BD78F: push    esi
0x8BD790: mov     eax, ds:0B30AACh
0x8BD795: xor     eax, esp
0x8BD797: push    eax
0x8BD798: lea     eax, [esp+18h+var_C]
0x8BD79C: mov     large fs:0, eax
0x8BD7A2: push    10h; Size
0x8BD7A4: call    FormHeapAlloc
0x8BD7A9: mov     esi, eax
0x8BD7AB: add     esp, 4
0x8BD7AE: mov     [esp+18h+var_10], esi
0x8BD7B2: test    esi, esi
0x8BD7B4: mov     [esp+18h+var_4], 0
0x8BD7BC: jz      short loc_8BD808
0x8BD7BE: mov     ecx, esi; this
0x8BD7C0: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BD7C5: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x8BD7CB: mov     eax, 1
0x8BD7D0: mov     dword ptr [esi+0Ch], 0
0x8BD7D7: add     ds:0BA7D00h, eax
0x8BD7DD: mov     dword ptr [esi], offset ??_7bhkBinaryAction@@6B@; const bhkBinaryAction::`vftable'
0x8BD7E3: add     ds:0BA7D40h, eax
0x8BD7E9: mov     dword ptr [esi], offset ??_7bhkSpringAction@@6B@; const bhkSpringAction::`vftable'
0x8BD7EF: add     ds:0BA8058h, eax
0x8BD7F5: mov     eax, esi
0x8BD7F7: mov     ecx, [esp+18h+var_C]
0x8BD7FB: mov     large fs:0, ecx
0x8BD802: pop     ecx
0x8BD803: pop     esi
0x8BD804: add     esp, 10h
0x8BD807: retn
0x8BD808: xor     eax, eax
0x8BD80A: mov     ecx, [esp+18h+var_C]
0x8BD80E: mov     large fs:0, ecx
0x8BD815: pop     ecx
0x8BD816: pop     esi
0x8BD817: add     esp, 10h
0x8BD81A: retn
