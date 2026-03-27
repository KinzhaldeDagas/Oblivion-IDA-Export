0x73FD60: push    0FFFFFFFFh
0x73FD62: push    offset SEH_8C62B0
0x73FD67: mov     eax, large fs:0
0x73FD6D: push    eax
0x73FD6E: push    ecx
0x73FD6F: push    esi
0x73FD70: mov     eax, ds:0B30AACh
0x73FD75: xor     eax, esp
0x73FD77: push    eax
0x73FD78: lea     eax, [esp+18h+var_C]
0x73FD7C: mov     large fs:0, eax
0x73FD82: push    18h; Size
0x73FD84: call    FormHeapAlloc
0x73FD89: mov     esi, eax
0x73FD8B: add     esp, 4
0x73FD8E: mov     [esp+18h+var_10], esi
0x73FD92: xor     eax, eax
0x73FD94: cmp     esi, eax
0x73FD96: mov     [esp+18h+var_4], eax
0x73FD9A: jz      short loc_73FDAB
0x73FD9C: mov     ecx, esi; this
0x73FD9E: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x73FDA3: mov     dword ptr [esi], offset ??_7NiRendererSpecificProperty@@6B@; const NiRendererSpecificProperty::`vftable'
0x73FDA9: mov     eax, esi
0x73FDAB: mov     ecx, [esp+18h+var_C]
0x73FDAF: mov     large fs:0, ecx
0x73FDB6: pop     ecx
0x73FDB7: pop     esi
0x73FDB8: add     esp, 10h
0x73FDBB: retn
