0x61F8F0: push    ecx
0x61F8F1: mov     eax, [esp+4+arg_1C]
0x61F8F5: push    esi
0x61F8F6: push    edi
0x61F8F7: mov     esi, ecx
0x61F8F9: mov     byte ptr [eax], 0
0x61F8FC: mov     edi, 0FFh
0x61F901: call    sub_6135F0
0x61F906: test    eax, eax
0x61F908: jz      loc_61FAB9
0x61F90E: mov     ecx, [esi+3Ch]; this
0x61F911: push    ebx
0x61F912: push    ebp
0x61F913: call    Actor_IsNPC
0x61F918: test    al, al
0x61F91A: jz      short loc_61F932
0x61F91C: mov     ecx, [esi+3Ch]
0x61F91F: call    Actor_IsSwimming
0x61F924: test    al, al
0x61F926: jz      short loc_61F932
0x61F928: mov     ebp, [esp+14h+arg_18]
0x61F92C: mov     byte ptr [ebp+0], 0
0x61F930: jmp     short loc_61F98B
0x61F932: mov     ebx, [esi+3Ch]
0x61F935: mov     ecx, esi
0x61F937: call    sub_6135F0
0x61F93C: mov     ecx, [esi+3Ch]
0x61F93F: mov     edx, [ebx]
0x61F941: mov     ebp, eax
0x61F943: mov     eax, [edx+25Ch]
0x61F949: mov     [esp+14h+var_4], ecx
0x61F94D: mov     ecx, ebx
0x61F94F: call    eax
0x61F951: mov     edx, [ebp+0]
0x61F954: mov     ecx, ebp
0x61F956: push    eax; int
0x61F957: mov     eax, [edx+19Ch]
0x61F95D: call    eax
0x61F95F: mov     ecx, dword ptr [esp+18h+arg_14]
0x61F963: mov     ebx, [esp+18h+var_4]
0x61F967: push    eax; char
0x61F968: push    ecx; char
0x61F969: mov     ecx, ebx; this
0x61F96B: call    Actor_GetFatigueFraction
0x61F970: push    ecx
0x61F971: mov     ecx, ebx
0x61F973: fstp    [esp+24h+var_24]; float
0x61F976: call    sub_5E0F50
0x61F97B: push    eax; int
0x61F97C: call    sub_546930
0x61F981: mov     ebp, [esp+28h+arg_18]
0x61F985: add     esp, 14h
0x61F988: mov     [ebp+0], al
0x61F98B: cmp     dword ptr [esi+6Ch], 4
0x61F98F: jnz     short loc_61F9C4
0x61F991: fld     dword ptr ds:0B36F30h
0x61F997: push    0; Seed
0x61F999: fadd    [esp+18h+arg_8]
0x61F99D: fstp    [esp+18h+arg_8]
0x61F9A1: call    GetRandomLargeInteger?
0x61F9A6: cdq
0x61F9A7: mov     ecx, 64h ; 'd'
0x61F9AC: idiv    ecx
0x61F9AE: add     esp, 4
0x61F9B1: cmp     edx, 2
0x61F9B4: jge     short loc_61F9C4
0x61F9B6: fld     [esp+14h+arg_8]
0x61F9BA: fadd    qword ptr ds:0A309F0h
0x61F9C0: fstp    [esp+14h+arg_8]
0x61F9C4: fld     [esp+14h+arg_8]
0x61F9C8: push    0; int
0x61F9CA: sub     esp, 8
0x61F9CD: fstp    [esp+20h+var_1C]; float
0x61F9D1: mov     ecx, esi
0x61F9D3: fld     [esp+20h+arg_4]
0x61F9D7: fstp    [esp+20h+var_20]; float
0x61F9DA: call    sub_613440
0x61F9DF: cmp     [esp+14h+arg_0], 0
0x61F9E4: mov     bl, al
0x61F9E6: jnz     short loc_61FA31
0x61F9E8: cmp     byte ptr [ebp+0], 0
0x61F9EC: jnz     loc_61FA90
0x61F9F2: test    bl, bl
0x61F9F4: jz      loc_61FAB7
0x61F9FA: mov     esi, [esi+3Ch]
0x61F9FD: mov     edx, ds:0B241C4h
0x61FA03: mov     eax, [esi]
0x61FA05: push    0; int
0x61FA07: push    edx; Str2
0x61FA08: mov     edx, [eax+164h]
0x61FA0E: push    0; MaxCount
0x61FA10: mov     ecx, esi
0x61FA12: call    edx
0x61FA14: mov     ecx, eax
0x61FA16: call    sub_4727E0
0x61FA1B: xor     ecx, ecx
0x61FA1D: cmp     al, 6Ch ; 'l'
0x61FA1F: setnz   cl
0x61FA22: pop     ebp
0x61FA23: pop     ebx
0x61FA24: add     ecx, 14h
0x61FA27: mov     edi, ecx
0x61FA29: mov     eax, edi
0x61FA2B: pop     edi
0x61FA2C: pop     esi
0x61FA2D: pop     ecx
0x61FA2E: retn    20h ; ' '
0x61FA31: mov     ecx, [esi+3Ch]
0x61FA34: mov     edx, [ecx]
0x61FA36: mov     eax, [edx+164h]
0x61FA3C: push    3
0x61FA3E: call    eax
0x61FA40: mov     ecx, eax
0x61FA42: call    ActorAnimData_GetSomethingFromField8Value
0x61FA47: cmp     eax, 2
0x61FA4A: jnz     short loc_61FAB7
0x61FA4C: cmp     byte ptr [ebp+0], 0
0x61FA50: jnz     short loc_61FA90
0x61FA52: test    bl, bl
0x61FA54: jz      short loc_61FAB7
0x61FA56: mov     ecx, [esi+3Ch]
0x61FA59: mov     edx, [ecx]
0x61FA5B: mov     eax, [edx+164h]
0x61FA61: push    0; int
0x61FA63: push    offset off_A70EA4; Str2
0x61FA68: push    3; MaxCount
0x61FA6A: call    eax
0x61FA6C: mov     ecx, eax
0x61FA6E: call    sub_472720
0x61FA73: mov     ecx, [esp+14h+arg_1C]
0x61FA77: mov     edi, eax
0x61FA79: sub     edi, 0FFFFFFFFh
0x61FA7C: neg     edi
0x61FA7E: sbb     edi, edi
0x61FA80: pop     ebp
0x61FA81: add     edi, 15h
0x61FA84: pop     ebx
0x61FA85: mov     eax, edi
0x61FA87: pop     edi
0x61FA88: mov     byte ptr [ecx], 1
0x61FA8B: pop     esi
0x61FA8C: pop     ecx
0x61FA8D: retn    20h ; ' '
0x61FA90: mov     edx, [esp+14h+arg_10]
0x61FA94: fld     [esp+14h+arg_8]
0x61FA98: mov     eax, [esp+14h+arg_C]
0x61FA9C: push    0; char
0x61FA9E: push    edx; int
0x61FA9F: push    eax; int
0x61FAA0: sub     esp, 8
0x61FAA3: fstp    [esp+28h+var_24]; float
0x61FAA7: mov     ecx, esi
0x61FAA9: fld     [esp+28h+arg_4]
0x61FAAD: fstp    [esp+28h+var_28]; float
0x61FAB0: call    sub_61E0F0
0x61FAB5: mov     edi, eax
0x61FAB7: pop     ebp
0x61FAB8: pop     ebx
0x61FAB9: mov     eax, edi
0x61FABB: pop     edi
0x61FABC: pop     esi
0x61FABD: pop     ecx
0x61FABE: retn    20h ; ' '
