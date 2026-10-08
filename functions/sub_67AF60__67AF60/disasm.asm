0x67AF60: push    0FFFFFFFFh
0x67AF62: push    offset SEH_67AF60
0x67AF67: mov     eax, large fs:0
0x67AF6D: push    eax
0x67AF6E: sub     esp, 8
0x67AF71: push    ebx
0x67AF72: push    esi
0x67AF73: mov     eax, ds:0B30AACh
0x67AF78: xor     eax, esp
0x67AF7A: push    eax
0x67AF7B: lea     eax, [esp+20h+var_C]
0x67AF7F: mov     large fs:0, eax
0x67AF85: mov     esi, ecx
0x67AF87: mov     [esp+20h+var_14], esi
0x67AF8B: call    sub_67B240
0x67AF90: xor     ebx, ebx
0x67AF92: lea     ecx, [esi+0Ch]
0x67AF95: mov     [esp+20h+var_4], ebx
0x67AF99: call    sub_67B240
0x67AF9E: lea     ecx, [esi+18h]
0x67AFA1: mov     byte ptr [esp+20h+var_4], 1
0x67AFA6: call    sub_67B240
0x67AFAB: push    ecx
0x67AFAC: mov     eax, esp
0x67AFAE: lea     ecx, [esi+40h]
0x67AFB1: mov     byte ptr [esp+24h+var_4], 2
0x67AFB6: mov     [esp+24h+var_10], esp
0x67AFBA: mov     [eax], ebx
0x67AFBC: call    sub_532DF0
0x67AFC1: push    ecx
0x67AFC2: mov     eax, esp
0x67AFC4: lea     ecx, [esi+48h]
0x67AFC7: mov     byte ptr [esp+24h+var_4], 3
0x67AFCC: mov     [esp+24h+var_10], esp
0x67AFD0: mov     [eax], ebx
0x67AFD2: call    sub_532DF0
0x67AFD7: mov     [esi+50h], ebx
0x67AFDA: mov     [esi+54h], ebx
0x67AFDD: mov     [esi+58h], ebx
0x67AFE0: mov     [esi+5Ch], ebx
0x67AFE3: lea     ecx, [esi+68h]
0x67AFE6: mov     byte ptr [esp+20h+var_4], 4
0x67AFEB: mov     [esi+60h], ebx
0x67AFEE: mov     [esi+64h], ebx
0x67AFF1: call    sub_67B240
0x67AFF6: push    0Ch
0x67AFF8: push    25h ; '%'
0x67AFFA: push    2
0x67AFFC: lea     ecx, [esi+7Ch]
0x67AFFF: mov     byte ptr [esp+2Ch+var_4], 5
0x67B004: call    sub_677DD0
0x67B009: mov     byte ptr [esi+99h], 1
0x67B010: mov     byte ptr [esi+98h], 1
0x67B017: mov     byte ptr [esi+0A0h], 1
0x67B01E: mov     byte ptr [esi+0A1h], 1
0x67B025: mov     byte ptr [esi+0A2h], 1
0x67B02C: mov     byte ptr [esi+0A3h], 1
0x67B033: mov     byte ptr [esi+0A4h], 1
0x67B03A: mov     [esi+9Ah], bl
0x67B040: mov     [esi+9Ch], ebx
0x67B046: mov     [esi+74h], ebx
0x67B049: mov     [esi+28h], ebx
0x67B04C: mov     [esi+0A5h], bl
0x67B052: mov     [esi+0A6h], bl
0x67B058: fld     dword ptr ds:0B37D58h
0x67B05E: fstp    dword ptr [esi+0ACh]
0x67B064: mov     [esi+0A8h], ebx
0x67B06A: mov     eax, esi
0x67B06C: mov     ecx, [esp+20h+var_C]
0x67B070: mov     large fs:0, ecx
0x67B077: pop     ecx
0x67B078: pop     esi
0x67B079: pop     ebx
0x67B07A: add     esp, 14h
0x67B07D: retn
0x9C4920: mov     ecx, [ebp-14h]
0x9C4923: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C4928: mov     ecx, [ebp-14h]
0x9C492B: add     ecx, 0Ch
0x9C492E: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C4933: mov     ecx, [ebp-14h]
0x9C4936: add     ecx, 18h
0x9C4939: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C493E: mov     ecx, [ebp-14h]
0x9C4941: add     ecx, 40h ; '@'; slot
0x9C4944: jmp     NiPointerSlot_Release
0x9C4949: mov     ecx, [ebp-14h]
0x9C494C: add     ecx, 48h ; 'H'; slot
0x9C494F: jmp     NiPointerSlot_Release
0x9C4954: mov     ecx, [ebp-14h]
0x9C4957: add     ecx, 68h ; 'h'
0x9C495A: jmp     BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x9C495F: mov     edx, [esp+arg_4]
0x9C4963: lea     eax, [edx-10h]
0x9C4966: mov     ecx, [edx-14h]
0x9C4969: xor     ecx, eax
0x9C496B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4970: mov     eax, offset stru_AED260
0x9C4975: jmp     ___CxxFrameHandler3
