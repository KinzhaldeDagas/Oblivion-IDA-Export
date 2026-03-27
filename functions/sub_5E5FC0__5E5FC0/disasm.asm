0x5E5FC0: push    0FFFFFFFFh
0x5E5FC2: push    offset SEH_8C62B0
0x5E5FC7: mov     eax, large fs:0
0x5E5FCD: push    eax
0x5E5FCE: push    ecx
0x5E5FCF: push    esi
0x5E5FD0: mov     eax, ds:0B30AACh
0x5E5FD5: xor     eax, esp
0x5E5FD7: push    eax
0x5E5FD8: lea     eax, [esp+18h+var_C]
0x5E5FDC: mov     large fs:0, eax
0x5E5FE2: mov     eax, [ecx]
0x5E5FE4: mov     edx, [eax+154h]
0x5E5FEA: call    edx
0x5E5FEC: mov     esi, eax
0x5E5FEE: test    esi, esi
0x5E5FF0: jz      loc_5E6090
0x5E5FF6: fld1
0x5E5FF8: push    offset off_A3FA90
0x5E5FFD: fcomp   [esp+1Ch+arg_0]
0x5E6001: mov     ecx, esi
0x5E6003: fnstsw  ax
0x5E6005: test    ah, 41h
0x5E6008: jp      short loc_5E6022
0x5E600A: call    sub_6FFAC0
0x5E600F: mov     ecx, [esp+18h+var_C]
0x5E6013: mov     large fs:0, ecx
0x5E601A: pop     ecx
0x5E601B: pop     esi
0x5E601C: add     esp, 10h
0x5E601F: retn    4
0x5E6022: call    NiObjectNET_GetExtraData
0x5E6027: push    eax
0x5E6028: push    offset dword_B35294
0x5E602D: call    NiRTTI_Cast
0x5E6032: add     esp, 8
0x5E6035: test    eax, eax
0x5E6037: jz      short loc_5E6053
0x5E6039: fld     [esp+18h+arg_0]
0x5E603D: fstp    dword ptr [eax+0Ch]
0x5E6040: mov     ecx, [esp+18h+var_C]
0x5E6044: mov     large fs:0, ecx
0x5E604B: pop     ecx
0x5E604C: pop     esi
0x5E604D: add     esp, 10h
0x5E6050: retn    4
0x5E6053: push    10h; Size
0x5E6055: call    FormHeapAlloc
0x5E605A: add     esp, 4
0x5E605D: mov     [esp+18h+var_10], eax
0x5E6061: test    eax, eax
0x5E6063: mov     [esp+18h+var_4], 0
0x5E606B: jz      short loc_5E607E
0x5E606D: fld     [esp+18h+arg_0]
0x5E6071: push    ecx
0x5E6072: mov     ecx, eax
0x5E6074: fstp    [esp+1Ch+var_1C]; float
0x5E6077: call    sub_5E1570
0x5E607C: jmp     short loc_5E6080
0x5E607E: xor     eax, eax
0x5E6080: push    eax
0x5E6081: mov     ecx, esi
0x5E6083: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5E608B: call    NiNode_AddNiExtraData
0x5E6090: mov     ecx, [esp+18h+var_C]
0x5E6094: mov     large fs:0, ecx
0x5E609B: pop     ecx
0x5E609C: pop     esi
0x5E609D: add     esp, 10h
0x5E60A0: retn    4
