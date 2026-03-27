0x4F53D0: fldz
0x4F53D2: push    esi
0x4F53D3: mov     esi, [esp+4+arg_0]
0x4F53D7: test    esi, esi
0x4F53D9: push    edi
0x4F53DA: mov     edi, [esp+8+arg_C]
0x4F53DE: fstp    qword ptr [edi]
0x4F53E0: jz      short loc_4F5414
0x4F53E2: mov     eax, [esi]
0x4F53E4: mov     edx, [eax+190h]
0x4F53EA: mov     ecx, esi
0x4F53EC: call    edx
0x4F53EE: test    al, al
0x4F53F0: jz      short loc_4F5414
0x4F53F2: mov     ecx, esi; this
0x4F53F4: call    TESObjectREFR_GetParentCell
0x4F53F9: test    eax, eax
0x4F53FB: jz      short loc_4F5414
0x4F53FD: push    esi
0x4F53FE: mov     ecx, esi; this
0x4F5400: call    TESObjectREFR_GetParentCell
0x4F5405: mov     ecx, eax
0x4F5407: call    sub_4CAAC0
0x4F540C: test    al, al
0x4F540E: jz      short loc_4F5414
0x4F5410: fld1
0x4F5412: fstp    qword ptr [edi]
0x4F5414: cmp     byte ptr ds:0B361ACh, 0
0x4F541B: jz      short loc_4F5432
0x4F541D: fld     qword ptr [edi]
0x4F541F: sub     esp, 8
0x4F5422: fstp    [esp+10h+var_10]
0x4F5425: push    offset aIsInOwnedCellV; "Is in owned cell value %0.2f"
0x4F542A: call    Interface_ConsolePrint
0x4F542F: add     esp, 0Ch
0x4F5432: pop     edi
0x4F5433: mov     al, 1
0x4F5435: pop     esi
0x4F5436: retn
