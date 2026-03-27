0x579770: push    1; arg1
0x579772: push    0; canCreate
0x579774: call    InterfaceManager_GetSingleton
0x579779: add     esp, 8
0x57977C: test    eax, eax
0x57977E: jz      short locret_5797DF
0x579780: push    1; arg1
0x579782: push    0; canCreate
0x579784: call    InterfaceManager_GetSingleton
0x579789: add     esp, 8
0x57978C: cmp     dword ptr [eax+1Ch], 0
0x579790: jz      short locret_5797DF
0x579792: push    1; arg1
0x579794: push    0; canCreate
0x579796: call    InterfaceManager_GetSingleton
0x57979B: add     esp, 8
0x57979E: cmp     dword ptr [eax+68h], 0
0x5797A2: jz      short locret_5797DF
0x5797A4: push    1; arg1
0x5797A6: push    0; canCreate
0x5797A8: call    InterfaceManager_GetSingleton
0x5797AD: mov     eax, [eax+68h]
0x5797B0: add     esp, 8
0x5797B3: push    0FAEh
0x5797B8: mov     ecx, eax
0x5797BA: call    Tile_GetFloat
0x5797BF: fcomp   dword ptr ds:0A379B4h
0x5797C5: fnstsw  ax
0x5797C7: test    ah, 44h
0x5797CA: jp      short locret_5797DF
0x5797CC: push    1; arg1
0x5797CE: push    0; canCreate
0x5797D0: call    InterfaceManager_GetSingleton
0x5797D5: add     esp, 8
0x5797D8: mov     ecx, eax
0x5797DA: jmp     sub_57CEE0
0x5797DF: retn
