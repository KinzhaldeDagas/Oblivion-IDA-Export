0x8A0EF0: push    0FFFFFFFFh
0x8A0EF2: push    offset SEH_8C62B0
0x8A0EF7: mov     eax, large fs:0
0x8A0EFD: push    eax
0x8A0EFE: push    ecx
0x8A0EFF: push    esi
0x8A0F00: mov     eax, ds:0B30AACh
0x8A0F05: xor     eax, esp
0x8A0F07: push    eax
0x8A0F08: lea     eax, [esp+18h+var_C]
0x8A0F0C: mov     large fs:0, eax
0x8A0F12: push    14h; Size
0x8A0F14: call    FormHeapAlloc
0x8A0F19: mov     esi, eax
0x8A0F1B: add     esp, 4
0x8A0F1E: mov     [esp+18h+var_10], esi
0x8A0F22: test    esi, esi
0x8A0F24: mov     [esp+18h+var_4], 0
0x8A0F2C: jz      short loc_8A0F7F
0x8A0F2E: mov     ecx, esi; this
0x8A0F30: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8A0F35: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8A0F3B: mov     eax, 1
0x8A0F40: mov     dword ptr [esi+0Ch], 0
0x8A0F47: mov     dword ptr [esi+10h], 0
0x8A0F4E: add     ds:0BA7D70h, eax
0x8A0F54: mov     dword ptr [esi], offset ??_7bhkShapeCollection@@6B@; const bhkShapeCollection::`vftable'
0x8A0F5A: add     ds:0BA816Ch, eax
0x8A0F60: mov     dword ptr [esi], offset ??_7bhkListShape@@6B@; const bhkListShape::`vftable'
0x8A0F66: add     ds:0BA7D58h, eax
0x8A0F6C: mov     eax, esi
0x8A0F6E: mov     ecx, [esp+18h+var_C]
0x8A0F72: mov     large fs:0, ecx
0x8A0F79: pop     ecx
0x8A0F7A: pop     esi
0x8A0F7B: add     esp, 10h
0x8A0F7E: retn
0x8A0F7F: xor     eax, eax
0x8A0F81: mov     ecx, [esp+18h+var_C]
0x8A0F85: mov     large fs:0, ecx
0x8A0F8C: pop     ecx
0x8A0F8D: pop     esi
0x8A0F8E: add     esp, 10h
0x8A0F91: retn
