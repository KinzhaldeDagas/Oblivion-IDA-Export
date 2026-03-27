0x58FAB0: push    0FFFFFFFFh
0x58FAB2: push    offset ??1Tile@@UAE@XZ_SEH
0x58FAB7: mov     eax, large fs:0
0x58FABD: push    eax
0x58FABE: push    ecx
0x58FABF: push    ebx
0x58FAC0: push    esi
0x58FAC1: push    edi
0x58FAC2: mov     eax, ds:0B30AACh
0x58FAC7: xor     eax, esp
0x58FAC9: push    eax; ArgList
0x58FACA: lea     eax, [esp+20h+var_C]
0x58FACE: mov     large fs:0, eax
0x58FAD4: mov     esi, ecx
0x58FAD6: mov     [esp+20h+var_10], esi
0x58FADA: mov     dword ptr [esi], offset ??_7Tile@@6B@; const Tile::`vftable'
0x58FAE0: push    1; arg1
0x58FAE2: xor     ebx, ebx
0x58FAE4: push    ebx; canCreate
0x58FAE5: mov     [esp+28h+var_4], 2
0x58FAED: call    InterfaceManager_GetSingleton
0x58FAF2: add     esp, 8
0x58FAF5: cmp     [eax+98h], esi
0x58FAFB: jnz     short loc_58FB09
0x58FAFD: mov     [eax+98h], ebx
0x58FB03: mov     [eax+9Ch], ebx
0x58FB09: cmp     [eax+88h], esi
0x58FB0F: jnz     short loc_58FB17
0x58FB11: mov     [eax+88h], ebx
0x58FB17: cmp     [esi+4], bl
0x58FB1A: jnz     short loc_58FB30
0x58FB1C: push    offset aWarningBaseTil; "WARNING: Base tile should have been rel"...
0x58FB21: call    sub_40FEC0
0x58FB26: add     esp, 4
0x58FB29: mov     ecx, esi
0x58FB2B: call    sub_58DA70
0x58FB30: mov     eax, [esi+28h]
0x58FB33: cmp     eax, ebx
0x58FB35: jz      short loc_58FB50
0x58FB37: cmp     eax, ebx
0x58FB39: mov     ecx, [esi+28h]
0x58FB3C: mov     edi, [ecx+14h]
0x58FB3F: jz      short loc_58FB4A
0x58FB41: push    eax
0x58FB42: call    FormHeapFree
0x58FB47: add     esp, 4
0x58FB4A: cmp     edi, ebx
0x58FB4C: mov     eax, edi
0x58FB4E: jnz     short loc_58FB37
0x58FB50: lea     ecx, [esi+30h]
0x58FB53: mov     byte ptr [esp+20h+var_4], 1
0x58FB58: call    ??1?$NiTList@PAVTile@@@@UAE@XZ; NiTList<Tile *>::~NiTList<Tile *>(void)
0x58FB5D: lea     ecx, [esi+14h]
0x58FB60: mov     byte ptr [esp+20h+var_4], bl
0x58FB64: call    ??1?$NiTList@PAVValue@Tile@@@@UAE@XZ; NiTList<Tile::Value *>::~NiTList<Tile::Value *>(void)
0x58FB69: mov     edx, [esi+8]
0x58FB6C: push    edx
0x58FB6D: call    FormHeapFree
0x58FB72: add     esp, 4
0x58FB75: mov     [esi+8], ebx
0x58FB78: mov     [esi+0Eh], bx
0x58FB7C: mov     [esi+0Ch], bx
0x58FB80: mov     ecx, [esp+20h+var_C]
0x58FB84: mov     large fs:0, ecx
0x58FB8B: pop     ecx
0x58FB8C: pop     edi
0x58FB8D: pop     esi
0x58FB8E: pop     ebx
0x58FB8F: add     esp, 10h
0x58FB92: retn
