0x596020: push    0FFFFFFFFh
0x596022: push    offset SEH_5ACE20
0x596027: mov     eax, large fs:0
0x59602D: push    eax
0x59602E: sub     esp, 8
0x596031: push    ebx
0x596032: push    ebp; a3
0x596033: push    esi; a3
0x596034: push    edi; a3
0x596035: mov     eax, ds:0B30AACh
0x59603A: xor     eax, esp
0x59603C: push    eax; a3
0x59603D: lea     eax, [esp+28h+var_C]
0x596041: mov     large fs:0, eax
0x596047: mov     esi, ecx
0x596049: mov     ebp, [esp+28h+arg_0]
0x59604D: test    byte ptr [ebp+88h], 1
0x596054: mov     ecx, [esi+4]; this
0x596057: push    ecx
0x596058: jz      short loc_59605E
0x59605A: fld1
0x59605C: jmp     short loc_596064
0x59605E: fld     dword ptr ds:0A379B4h
0x596064: fstp    [esp+2Ch+a2]; a3
0x596067: push    0FAEh; a2
0x59606C: call    Tile_SetFloat
0x596071: mov     eax, [ebp+80h]
0x596077: mov     edx, [eax+10h]
0x59607A: lea     edi, [ebp+80h]
0x596080: push    43534544h
0x596085: xor     ebx, ebx
0x596087: push    ebx
0x596088: mov     ecx, edi
0x59608A: call    edx
0x59608C: mov     ecx, [esi+4]
0x59608F: push    eax
0x596090: push    0FB0h
0x596095: call    Tile_SetString
0x59609A: mov     eax, [esp+28h+arg_4]
0x59609E: cmp     eax, ebx
0x5960A0: mov     [esi+30h], eax
0x5960A3: jz      short loc_5960B6
0x5960A5: test    byte ptr [ebp+88h], 2
0x5960AC: jnz     short loc_5960B6
0x5960AE: fld     dword ptr ds:0A379B4h
0x5960B4: jmp     short loc_5960B8
0x5960B6: fld1
0x5960B8: mov     ecx, [esi+4]; this
0x5960BB: push    ecx
0x5960BC: fstp    [esp+2Ch+a2]; a3
0x5960BF: push    0FB1h; a2
0x5960C4: call    Tile_SetFloat
0x5960C9: mov     eax, [edi]
0x5960CB: mov     edx, [eax+10h]
0x5960CE: push    43534544h
0x5960D3: push    ebx
0x5960D4: mov     ecx, edi
0x5960D6: call    edx
0x5960D8: push    ebx; a3
0x5960D9: push    eax; a2
0x5960DA: lea     ecx, [esp+30h+var_14]; this
0x5960DE: mov     [esp+30h+var_14.m_data], ebx
0x5960E2: mov     [esp+30h+var_14.m_dataLen], bx
0x5960E7: mov     [esp+30h+var_14.m_bufLen], bx
0x5960EC: call    BSStringT_Set
0x5960F1: fld     dword ptr ds:0A6B328h
0x5960F7: mov     ecx, [esi+4]; this
0x5960FA: push    ecx
0x5960FB: fstp    [esp+2Ch+a2]; a3
0x5960FE: push    0FB4h; a2
0x596103: mov     [esp+30h+var_4], ebx
0x596107: call    Tile_SetFloat
0x59610C: fldz
0x59610E: mov     ecx, [esi+4]; this
0x596111: push    ecx
0x596112: fstp    [esp+2Ch+a2]; a3
0x596115: push    0FB4h; a2
0x59611A: call    Tile_SetFloat
0x59611F: mov     eax, [esp+28h+var_14.m_data]
0x596123: push    eax
0x596124: call    FormHeapFree
0x596129: add     esp, 4
0x59612C: mov     ecx, [esp+28h+var_C.m_data]
0x596130: mov     large fs:0, ecx
0x596137: pop     ecx
0x596138: pop     edi
0x596139: pop     esi
0x59613A: pop     ebp
0x59613B: pop     ebx
0x59613C: add     esp, 14h
0x59613F: retn    8
