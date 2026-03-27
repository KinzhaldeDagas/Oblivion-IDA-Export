0x6C2AB0: push    0FFFFFFFFh
0x6C2AB2: push    offset SEH_6C20D0
0x6C2AB7: mov     eax, large fs:0
0x6C2ABD: push    eax
0x6C2ABE: sub     esp, 18h
0x6C2AC1: push    ebx
0x6C2AC2: push    ebp
0x6C2AC3: push    esi
0x6C2AC4: push    edi
0x6C2AC5: mov     eax, ds:0B30AACh
0x6C2ACA: xor     eax, esp
0x6C2ACC: push    eax
0x6C2ACD: lea     eax, [esp+38h+var_C]
0x6C2AD1: mov     large fs:0, eax
0x6C2AD7: mov     edi, [esp+38h+arg_8]
0x6C2ADB: fld     [esp+38h+arg_0]
0x6C2ADF: mov     eax, [esp+38h+arg_4]
0x6C2AE3: mov     edx, [edi]
0x6C2AE5: mov     ebp, [eax]
0x6C2AE7: push    14h; char
0x6C2AE9: lea     ecx, [esp+3Ch+var_24]
0x6C2AED: push    ecx; int
0x6C2AEE: push    edx; int
0x6C2AEF: push    ebp; int
0x6C2AF0: push    ecx
0x6C2AF1: fstp    [esp+4Ch+var_4C]; float
0x6C2AF4: call    sub_6D31B0
0x6C2AF9: add     esp, 14h
0x6C2AFC: test    al, al
0x6C2AFE: jz      loc_6C2C3F
0x6C2B04: mov     esi, [edi]
0x6C2B06: add     esi, 1
0x6C2B09: xor     ecx, ecx
0x6C2B0B: mov     eax, esi
0x6C2B0D: mov     edx, 14h
0x6C2B12: mul     edx
0x6C2B14: seto    cl
0x6C2B17: neg     ecx
0x6C2B19: or      ecx, eax
0x6C2B1B: xor     eax, eax
0x6C2B1D: add     ecx, 4
0x6C2B20: setb    al
0x6C2B23: neg     eax
0x6C2B25: or      eax, ecx
0x6C2B27: push    eax; Size
0x6C2B28: call    FormHeapAlloc
0x6C2B2D: add     esp, 4
0x6C2B30: mov     [esp+38h+var_20], eax
0x6C2B34: test    eax, eax
0x6C2B36: mov     [esp+38h+var_4], 0
0x6C2B3E: jz      short loc_6C2B5C
0x6C2B40: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; a5
0x6C2B45: push    offset sub_6C0AD0; a4
0x6C2B4A: push    esi; size
0x6C2B4B: lea     ebx, [eax+4]
0x6C2B4E: push    14h; a2
0x6C2B50: push    ebx; a1
0x6C2B51: mov     [eax], esi
0x6C2B53: call    ArrayConstructor
0x6C2B58: mov     esi, ebx
0x6C2B5A: jmp     short loc_6C2B5E
0x6C2B5C: xor     esi, esi
0x6C2B5E: mov     eax, [esp+38h+var_24]
0x6C2B62: lea     ecx, [eax+eax*4]
0x6C2B65: add     ecx, ecx
0x6C2B67: add     ecx, ecx
0x6C2B69: push    ecx; Size
0x6C2B6A: push    ebp; Src
0x6C2B6B: push    esi; Dst
0x6C2B6C: mov     [esp+44h+var_4], 0FFFFFFFFh
0x6C2B74: call    _memcpy
0x6C2B79: mov     ecx, [edi]
0x6C2B7B: mov     edx, [esp+44h+var_24]
0x6C2B7F: add     esp, 0Ch
0x6C2B82: cmp     ecx, edx
0x6C2B84: jbe     short loc_6C2BA8
0x6C2B86: sub     ecx, edx
0x6C2B88: lea     eax, [edx+edx*4]
0x6C2B8B: lea     edx, [ecx+ecx*4]
0x6C2B8E: add     edx, edx
0x6C2B90: add     eax, eax
0x6C2B92: add     eax, eax
0x6C2B94: add     edx, edx
0x6C2B96: push    edx; Size
0x6C2B97: lea     ecx, [eax+ebp]
0x6C2B9A: push    ecx; Src
0x6C2B9B: lea     edx, [eax+esi+14h]
0x6C2B9F: push    edx; Dst
0x6C2BA0: call    _memcpy
0x6C2BA5: add     esp, 0Ch
0x6C2BA8: mov     eax, [edi]
0x6C2BAA: fld     [esp+38h+arg_0]
0x6C2BAE: push    14h; char
0x6C2BB0: push    eax; int
0x6C2BB1: push    5; int
0x6C2BB3: push    ebp; int
0x6C2BB4: push    ecx
0x6C2BB5: lea     ecx, [esp+4Ch+var_1C]
0x6C2BB9: fstp    [esp+4Ch+var_4C]; float
0x6C2BBC: push    ecx; int
0x6C2BBD: call    sub_6BD1F0
0x6C2BC2: fld     [esp+50h+arg_0]
0x6C2BC6: mov     eax, [esp+50h+var_24]
0x6C2BCA: lea     edx, [eax+eax*4]
0x6C2BCD: lea     eax, [esi+edx*4]
0x6C2BD0: fstp    dword ptr [eax]
0x6C2BD2: mov     ecx, [esp+50h+var_1C]
0x6C2BD6: mov     [eax+4], ecx
0x6C2BD9: mov     edx, [esp+50h+var_18]
0x6C2BDD: mov     [eax+8], edx
0x6C2BE0: mov     ecx, [esp+50h+var_14]
0x6C2BE4: mov     [eax+0Ch], ecx
0x6C2BE7: mov     edx, [esp+50h+var_10]
0x6C2BEB: mov     [eax+10h], edx
0x6C2BEE: add     dword ptr [edi], 1
0x6C2BF1: add     esp, 18h
0x6C2BF4: test    ebp, ebp
0x6C2BF6: jz      short loc_6C2C15
0x6C2BF8: mov     eax, [ebp-4]
0x6C2BFB: push    offset ?ClearComponentReferences@TESTexture@@UAEXXZ?; void (__thiscall *)(void *)
0x6C2C00: lea     ebx, [ebp-4]
0x6C2C03: push    eax; int
0x6C2C04: push    14h; unsigned int
0x6C2C06: push    ebp; void *
0x6C2C07: call    $LN21
0x6C2C0C: push    ebx
0x6C2C0D: call    FormHeapFree
0x6C2C12: add     esp, 4
0x6C2C15: mov     ecx, [esp+38h+arg_4]
0x6C2C19: mov     [ecx], esi
0x6C2C1B: mov     edx, [edi]
0x6C2C1D: push    14h
0x6C2C1F: push    edx
0x6C2C20: push    esi
0x6C2C21: call    sub_6BD310
0x6C2C26: add     esp, 0Ch
0x6C2C29: mov     al, 1
0x6C2C2B: mov     ecx, [esp+38h+var_C]
0x6C2C2F: mov     large fs:0, ecx
0x6C2C36: pop     ecx
0x6C2C37: pop     edi
0x6C2C38: pop     esi
0x6C2C39: pop     ebp
0x6C2C3A: pop     ebx
0x6C2C3B: add     esp, 24h
0x6C2C3E: retn
0x6C2C3F: xor     al, al
0x6C2C41: mov     ecx, [esp+38h+var_C]
0x6C2C45: mov     large fs:0, ecx
0x6C2C4C: pop     ecx
0x6C2C4D: pop     edi
0x6C2C4E: pop     esi
0x6C2C4F: pop     ebp
0x6C2C50: pop     ebx
0x6C2C51: add     esp, 24h
0x6C2C54: retn
