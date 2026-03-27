0x5B8FC0: push    0FFFFFFFFh
0x5B8FC2: push    offset SEH_5B8FC0
0x5B8FC7: mov     eax, large fs:0
0x5B8FCD: push    eax
0x5B8FCE: sub     esp, 1Ch
0x5B8FD1: push    ebp
0x5B8FD2: push    esi
0x5B8FD3: push    edi
0x5B8FD4: mov     eax, ds:0B30AACh
0x5B8FD9: xor     eax, esp
0x5B8FDB: push    eax
0x5B8FDC: lea     eax, [esp+38h+var_C]
0x5B8FE0: mov     large fs:0, eax
0x5B8FE6: mov     edi, ecx
0x5B8FE8: mov     [esp+38h+var_20], edi
0x5B8FEC: xor     ebp, ebp
0x5B8FEE: mov     [esp+38h+var_1C.m_data], ebp
0x5B8FF2: mov     [esp+38h+var_1C.m_dataLen], bp
0x5B8FF7: mov     [esp+38h+var_1C.m_bufLen], bp
0x5B8FFC: mov     eax, [esp+38h+arg_0]
0x5B9000: cmp     eax, 34h ; '4'
0x5B9003: mov     [esp+38h+var_4], ebp
0x5B9007: jnz     short loc_5B901B
0x5B9009: mov     eax, ds:0B39468h
0x5B900E: push    ebp; a3
0x5B900F: push    eax; a2
0x5B9010: lea     ecx, [esp+40h+var_1C]; this
0x5B9014: call    BSStringT_Set
0x5B9019: jmp     short loc_5B906A
0x5B901B: cmp     eax, 33h ; '3'
0x5B901E: jnz     short loc_5B9033
0x5B9020: mov     ecx, ds:0B39460h
0x5B9026: push    ebp; a3
0x5B9027: push    ecx; a2
0x5B9028: lea     ecx, [esp+40h+var_1C]; this
0x5B902C: call    BSStringT_Set
0x5B9031: jmp     short loc_5B906A
0x5B9033: cmp     eax, 36h ; '6'
0x5B9036: lea     ecx, [esp+38h+var_1C]; this
0x5B903A: jnz     short loc_5B904B
0x5B903C: mov     edx, ds:0B39458h
0x5B9042: push    ebp; a3
0x5B9043: push    edx; a2
0x5B9044: call    BSStringT_Set
0x5B9049: jmp     short loc_5B906A
0x5B904B: cmp     eax, 35h ; '5'
0x5B904E: jnz     short loc_5B905E
0x5B9050: mov     eax, ds:0B39470h
0x5B9055: push    ebp; a3
0x5B9056: push    eax; a2
0x5B9057: call    BSStringT_Set
0x5B905C: jmp     short loc_5B906A
0x5B905E: push    ecx
0x5B905F: mov     ecx, ds:0B333C4h
0x5B9065: call    GetTeleportCellName
0x5B906A: mov     edx, [esp+38h+var_1C.m_data]
0x5B906E: cmp     edx, ebp
0x5B9070: jz      short loc_5B9096
0x5B9072: mov     ax, [esp+38h+var_1C.m_dataLen]
0x5B9077: cmp     ax, 0FFFFh
0x5B907B: jnz     short loc_5B908F
0x5B907D: mov     eax, edx
0x5B907F: lea     esi, [eax+1]
0x5B9082: mov     cl, [eax]
0x5B9084: add     eax, 1
0x5B9087: test    cl, cl
0x5B9089: jnz     short loc_5B9082
0x5B908B: sub     eax, esi
0x5B908D: jmp     short loc_5B9092
0x5B908F: movzx   eax, ax
0x5B9092: cmp     eax, ebp
0x5B9094: jnz     short loc_5B90A9
0x5B9096: push    ebp; a3
0x5B9097: push    offset aTamriel; "Tamriel"
0x5B909C: lea     ecx, [esp+40h+var_1C]; this
0x5B90A0: call    BSStringT_Set
0x5B90A5: mov     edx, [esp+38h+var_1C.m_data]
0x5B90A9: mov     ecx, [edi+4]
0x5B90AC: push    edx
0x5B90AD: push    0FAFh
0x5B90B2: call    Tile_SetString
0x5B90B7: mov     ecx, offset TimeGlobals
0x5B90BC: call    TimeGlobals_GetGameHour
0x5B90C1: fstp    [esp+38h+arg_0]
0x5B90C5: fld     [esp+38h+arg_0]
0x5B90C9: fld     st
0x5B90CB: call    Double_To_SInt32
0x5B90D0: mov     esi, eax
0x5B90D2: mov     [esp+38h+var_28], esi
0x5B90D6: fisub   [esp+38h+var_28]
0x5B90DA: fmul    qword ptr ds:0A2FCC8h
0x5B90E0: call    Double_To_SInt32
0x5B90E5: cmp     esi, 1
0x5B90E8: mov     edi, eax
0x5B90EA: jge     short loc_5B90F3
0x5B90EC: mov     esi, 0Ch
0x5B90F1: jmp     short loc_5B90FB
0x5B90F3: cmp     esi, 0Ch
0x5B90F6: jle     short loc_5B90FB
0x5B90F8: sub     esi, 0Ch
0x5B90FB: push    ebp
0x5B90FC: call    FormHeapFree
0x5B9101: add     esp, 4
0x5B9104: mov     [esp+38h+var_28], ebp
0x5B9108: mov     [esp+38h+var_22], bp
0x5B910D: mov     [esp+38h+var_24], bp
0x5B9112: fld     dword ptr ds:0A2F918h
0x5B9118: cmp     edi, 0Ah
0x5B911B: fcomp   [esp+38h+arg_0]
0x5B911F: mov     byte ptr [esp+38h+var_4], 1
0x5B9124: mov     ebp, offset aPm; "pm"
0x5B9129: fnstsw  ax
0x5B912B: jge     short loc_5B9158
0x5B912D: test    ah, 41h
0x5B9130: jnp     short loc_5B9137
0x5B9132: mov     ebp, offset aAm; "am"
0x5B9137: lea     edx, [esp+38h+var_14]
0x5B913B: push    edx
0x5B913C: mov     ecx, offset TimeGlobals
0x5B9141: call    sub_402E50
0x5B9146: mov     eax, [eax]
0x5B9148: push    ebp
0x5B9149: push    edi
0x5B914A: push    esi
0x5B914B: push    eax
0x5B914C: mov     byte ptr [esp+48h+var_4], 2
0x5B9151: push    offset aSI0IS; "%s %i:0%i %s"
0x5B9156: jmp     short loc_5B9181
0x5B9158: test    ah, 41h
0x5B915B: jnp     short loc_5B9162
0x5B915D: mov     ebp, offset aAm; "am"
0x5B9162: lea     edx, [esp+38h+var_14]
0x5B9166: push    edx
0x5B9167: mov     ecx, offset TimeGlobals
0x5B916C: call    sub_402E50
0x5B9171: mov     eax, [eax]
0x5B9173: push    ebp
0x5B9174: push    edi
0x5B9175: push    esi
0x5B9176: push    eax; ArgList
0x5B9177: mov     byte ptr [esp+48h+var_4], 3
0x5B917C: push    offset aSIIS; "%s %i:%i %s"
0x5B9181: lea     eax, [esp+4Ch+var_28]
0x5B9185: push    eax; int
0x5B9186: call    BSStringT_Static_Format
0x5B918B: mov     ecx, [esp+50h+var_14]
0x5B918F: push    ecx
0x5B9190: mov     byte ptr [esp+54h+var_4], 1
0x5B9195: call    FormHeapFree
0x5B919A: mov     esi, [esp+54h+var_28]
0x5B919E: mov     edx, [esp+54h+var_20]
0x5B91A2: mov     ecx, [edx+4]
0x5B91A5: add     esp, 1Ch
0x5B91A8: push    esi
0x5B91A9: push    0FB0h
0x5B91AE: call    Tile_SetString
0x5B91B3: push    esi
0x5B91B4: call    FormHeapFree
0x5B91B9: mov     eax, [esp+3Ch+var_1C.m_data]
0x5B91BD: push    eax
0x5B91BE: call    FormHeapFree
0x5B91C3: add     esp, 8
0x5B91C6: mov     ecx, [esp+38h+var_C]
0x5B91CA: mov     large fs:0, ecx
0x5B91D1: pop     ecx
0x5B91D2: pop     edi
0x5B91D3: pop     esi
0x5B91D4: pop     ebp
0x5B91D5: add     esp, 28h
0x5B91D8: retn    4
