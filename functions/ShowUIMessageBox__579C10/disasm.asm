0x579C10: push    ecx
0x579C11: push    1; arg1
0x579C13: push    0; canCreate
0x579C15: call    InterfaceManager_GetSingleton
0x579C1A: add     esp, 8
0x579C1D: test    eax, eax
0x579C1F: jz      loc_579CE3
0x579C25: push    1; arg1
0x579C27: push    0; canCreate
0x579C29: call    InterfaceManager_GetSingleton
0x579C2E: add     esp, 8
0x579C31: cmp     dword ptr [eax+1Ch], 0
0x579C35: jz      loc_579CE3
0x579C3B: lea     eax, [esp+4+arg_10]
0x579C3F: push    1; arg1
0x579C41: push    0; canCreate
0x579C43: mov     [esp+0Ch+var_4], eax
0x579C47: call    InterfaceManager_GetSingleton
0x579C4C: add     esp, 8
0x579C4F: test    eax, eax
0x579C51: jz      short loc_579CC1
0x579C53: push    1; arg1
0x579C55: push    0; canCreate
0x579C57: call    InterfaceManager_GetSingleton
0x579C5C: add     esp, 8
0x579C5F: cmp     dword ptr [eax+1Ch], 0
0x579C63: jz      short loc_579CC1
0x579C65: push    1; arg1
0x579C67: push    0; canCreate
0x579C69: call    InterfaceManager_GetSingleton
0x579C6E: add     esp, 8
0x579C71: cmp     dword ptr [eax+68h], 0
0x579C75: jz      short loc_579CC1
0x579C77: push    1; arg1
0x579C79: push    0; canCreate
0x579C7B: call    InterfaceManager_GetSingleton
0x579C80: mov     eax, [eax+68h]
0x579C83: add     esp, 8
0x579C86: push    0FAEh
0x579C8B: mov     ecx, eax
0x579C8D: call    Tile_GetFloat
0x579C92: fcomp   dword ptr ds:0A379B4h
0x579C98: fnstsw  ax
0x579C9A: test    ah, 44h
0x579C9D: jp      short loc_579CC1
0x579C9F: mov     edx, [esp+4+arg_C]
0x579CA3: mov     eax, [esp+4+arg_8]
0x579CA7: lea     ecx, [esp+4+var_4]
0x579CAA: push    ecx
0x579CAB: mov     ecx, [esp+8+arg_4]
0x579CAF: push    edx
0x579CB0: mov     edx, [esp+0Ch+arg_0]
0x579CB4: push    eax
0x579CB5: push    ecx
0x579CB6: push    edx
0x579CB7: call    sub_5BC8B0
0x579CBC: add     esp, 14h
0x579CBF: pop     ecx
0x579CC0: retn
0x579CC1: mov     ecx, [esp+4+arg_C]
0x579CC5: mov     edx, [esp+4+arg_8]
0x579CC9: lea     eax, [esp+4+var_4]
0x579CCC: push    eax
0x579CCD: mov     eax, [esp+8+arg_4]
0x579CD1: push    ecx
0x579CD2: mov     ecx, [esp+0Ch+arg_0]
0x579CD6: push    edx
0x579CD7: push    eax
0x579CD8: push    ecx
0x579CD9: call    sub_5BCC00
0x579CDE: add     esp, 14h
0x579CE1: pop     ecx
0x579CE2: retn
0x579CE3: xor     al, al
0x579CE5: pop     ecx
0x579CE6: retn
