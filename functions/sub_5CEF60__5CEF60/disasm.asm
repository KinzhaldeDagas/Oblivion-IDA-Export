0x5CEF60: push    0FFFFFFFFh
0x5CEF62: push    offset SEH_5DC520
0x5CEF67: mov     eax, large fs:0
0x5CEF6D: push    eax
0x5CEF6E: sub     esp, 8
0x5CEF71: push    esi
0x5CEF72: push    edi
0x5CEF73: mov     eax, ds:0B30AACh
0x5CEF78: xor     eax, esp
0x5CEF7A: push    eax
0x5CEF7B: lea     eax, [esp+20h+var_C]
0x5CEF7F: mov     large fs:0, eax
0x5CEF85: mov     esi, ecx
0x5CEF87: xor     edi, edi
0x5CEF89: mov     [esp+20h+var_14.m_data], edi
0x5CEF8D: mov     [esp+20h+var_14.m_dataLen], di
0x5CEF92: mov     [esp+20h+var_14.m_bufLen], di
0x5CEF97: mov     ecx, ds:0B333C4h
0x5CEF9D: mov     [esp+20h+var_4], edi
0x5CEFA1: call    sub_5E4420
0x5CEFA6: push    eax; ArgList
0x5CEFA7: lea     eax, [esp+24h+var_14]
0x5CEFAB: push    offset aD_0; "%d"
0x5CEFB0: push    eax; int
0x5CEFB1: call    BSStringT_Static_Format
0x5CEFB6: mov     edx, [esp+2Ch+var_14.m_data]
0x5CEFBA: mov     ecx, [esi+4]
0x5CEFBD: add     esp, 0Ch
0x5CEFC0: push    edx
0x5CEFC1: push    0FB0h
0x5CEFC6: call    Tile_SetString
0x5CEFCB: mov     eax, dword ptr [esp+20h+ArgList]
0x5CEFCF: cmp     eax, edi
0x5CEFD1: jz      short loc_5CEFE8
0x5CEFD3: push    eax; ArgList
0x5CEFD4: lea     eax, [esp+24h+var_14]
0x5CEFD8: push    offset aD_0; "%d"
0x5CEFDD: push    eax; int
0x5CEFDE: call    BSStringT_Static_Format
0x5CEFE3: add     esp, 0Ch
0x5CEFE6: jmp     short loc_5CEFF7
0x5CEFE8: push    edi; a3
0x5CEFE9: push    offset asc_A3A0E4; "-"
0x5CEFEE: lea     ecx, [esp+28h+var_14]; this
0x5CEFF2: call    BSStringT_Set
0x5CEFF7: mov     ecx, [esi+4]
0x5CEFFA: mov     esi, [esp+20h+var_14.m_data]
0x5CEFFE: push    esi
0x5CEFFF: push    0FB2h
0x5CF004: call    Tile_SetString
0x5CF009: push    esi
0x5CF00A: call    FormHeapFree
0x5CF00F: add     esp, 4
0x5CF012: mov     ecx, [esp+20h+var_C]
0x5CF016: mov     large fs:0, ecx
0x5CF01D: pop     ecx
0x5CF01E: pop     edi
0x5CF01F: pop     esi
0x5CF020: add     esp, 14h
0x5CF023: retn    4
