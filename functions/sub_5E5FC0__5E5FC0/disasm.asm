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
0x5E6022: call    NiObjectNET_GetExtraData; NiObjectNET::GetExtraData(name), native RET 4 behavior. Player shadow BBX lookups remain native after Pass247 rollback.
0x5E6027: push    eax
0x5E6028: push    0B35294h
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
0x5E608B: call    NiObjectNET_AddExtraData; Pass269 ABI and ownership proof: NiObjectNET::AddExtraData consumes one stack argument with RET 4 and also expects owning object in ECX/EBX at this build's callsites. The plugin wrapper must not execute caller-side ADD ESP,4.
0x5E6090: mov     ecx, [esp+18h+var_C]
0x5E6094: mov     large fs:0, ecx
0x5E609B: pop     ecx
0x5E609C: pop     esi
0x5E609D: add     esp, 10h
0x5E60A0: retn    4
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
