0x5C4920: push    0FFFFFFFFh
0x5C4922: push    offset SEH_5C4920
0x5C4927: mov     eax, large fs:0
0x5C492D: push    eax
0x5C492E: sub     esp, 0Ch
0x5C4931: push    ebx
0x5C4932: push    ebp
0x5C4933: push    esi
0x5C4934: push    edi
0x5C4935: mov     eax, ds:0B30AACh
0x5C493A: xor     eax, esp
0x5C493C: push    eax
0x5C493D: lea     eax, [esp+2Ch+var_C]
0x5C4941: mov     large fs:0, eax
0x5C4947: mov     ebx, ecx
0x5C4949: mov     ecx, ds:0B333C4h
0x5C494F: mov     eax, [ecx]
0x5C4951: mov     edx, [eax+170h]
0x5C4957: call    edx
0x5C4959: mov     ebp, eax
0x5C495B: mov     esi, [ebp+0E8h]
0x5C4961: mov     ecx, ebp
0x5C4963: call    TESActorBase_IsFemale
0x5C4968: push    eax
0x5C4969: mov     ecx, esi
0x5C496B: call    sub_52B490
0x5C4970: test    eax, eax
0x5C4972: jz      short loc_5C498F
0x5C4974: mov     esi, [ebp+0E8h]
0x5C497A: mov     ecx, ebp
0x5C497C: call    TESActorBase_IsFemale
0x5C4981: push    eax
0x5C4982: mov     ecx, esi
0x5C4984: call    sub_52B490
0x5C4989: mov     [ebp+1C8h], eax
0x5C498F: mov     edi, [ebp+0E8h]
0x5C4995: mov     ecx, [ebp+1C8h]
0x5C499B: xor     esi, esi
0x5C499D: add     edi, 8Ch ; 'Œ'
0x5C49A3: cmp     ecx, esi
0x5C49A5: mov     [esp+2Ch+var_18], ecx
0x5C49A9: jz      loc_5C4BD0
0x5C49AF: call    sub_51FE80
0x5C49B4: test    al, al
0x5C49B6: jz      short loc_5C49CA
0x5C49B8: mov     ecx, [esp+2Ch+var_18]
0x5C49BC: push    ebp
0x5C49BD: call    sub_51FFD0
0x5C49C2: test    al, al
0x5C49C4: jnz     loc_5C4BD0
0x5C49CA: cmp     edi, esi
0x5C49CC: mov     [esp+2Ch+var_18], esi
0x5C49D0: jz      short loc_5C4A07
0x5C49D2: cmp     [edi+4], esi
0x5C49D5: jnz     short loc_5C49E0
0x5C49D7: cmp     [edi], esi
0x5C49D9: jz      short loc_5C4A07
0x5C49DB: jmp     short loc_5C49E0
0x5C49DD: align 10h
0x5C49E0: mov     ecx, [edi]
0x5C49E2: cmp     ecx, esi
0x5C49E4: jz      short loc_5C4A07
0x5C49E6: call    sub_51FE80
0x5C49EB: test    al, al
0x5C49ED: jz      short loc_5C49FB
0x5C49EF: mov     ecx, [edi]
0x5C49F1: push    ebp
0x5C49F2: call    sub_51FFD0
0x5C49F7: test    al, al
0x5C49F9: jnz     short loc_5C4A07
0x5C49FB: mov     edi, [edi+4]
0x5C49FE: add     [esp+2Ch+var_18], 1
0x5C4A03: cmp     edi, esi
0x5C4A05: jnz     short loc_5C49E0
0x5C4A07: mov     eax, [edi]
0x5C4A09: cmp     eax, esi
0x5C4A0B: jnz     short loc_5C4A7B
0x5C4A0D: mov     [ebp+1C8h], esi
0x5C4A13: mov     eax, ds:0B38B80h
0x5C4A18: push    eax
0x5C4A19: mov     eax, ds:0B38F88h
0x5C4A1E: push    0FB4h
0x5C4A23: sub     esp, 8
0x5C4A26: mov     ecx, esp; this
0x5C4A28: mov     [esp+3Ch+var_18], esp
0x5C4A2C: push    esi; a3
0x5C4A2D: push    eax; a2
0x5C4A2E: mov     [ecx], esi
0x5C4A30: mov     [ecx+4], si
0x5C4A34: mov     [ecx+6], si
0x5C4A38: call    BSStringT_Set
0x5C4A3D: mov     eax, ds:0B38F70h
0x5C4A42: sub     esp, 8
0x5C4A45: mov     ecx, esp; this
0x5C4A47: mov     [esp+44h+var_14], esp
0x5C4A4B: push    esi; a3
0x5C4A4C: push    eax; a2
0x5C4A4D: mov     [esp+4Ch+var_4], esi
0x5C4A51: mov     [ecx], esi
0x5C4A53: mov     [ecx+4], si
0x5C4A57: mov     [ecx+6], si
0x5C4A5B: call    BSStringT_Set
0x5C4A60: mov     ecx, ebx
0x5C4A62: mov     [esp+44h+var_4], 0FFFFFFFFh
0x5C4A6A: call    sub_5C3440
0x5C4A6F: mov     ecx, eax
0x5C4A71: call    Tile_SetString
0x5C4A76: jmp     loc_5C4BD0
0x5C4A7B: mov     eax, [eax+1Ch]
0x5C4A7E: cmp     eax, esi
0x5C4A80: jnz     short loc_5C4A87
0x5C4A82: mov     eax, offset EmptyString
0x5C4A87: push    eax
0x5C4A88: mov     eax, ds:0B38F88h
0x5C4A8D: push    0FB4h
0x5C4A92: sub     esp, 8
0x5C4A95: mov     ecx, esp; this
0x5C4A97: mov     [esp+3Ch+var_14], esp
0x5C4A9B: push    esi; a3
0x5C4A9C: push    eax; a2
0x5C4A9D: mov     [ecx], esi
0x5C4A9F: mov     [ecx+4], si
0x5C4AA3: mov     [ecx+6], si
0x5C4AA7: call    BSStringT_Set
0x5C4AAC: mov     eax, ds:0B38F70h
0x5C4AB1: sub     esp, 8
0x5C4AB4: mov     ecx, esp; this
0x5C4AB6: mov     [esp+44h+var_10], esp
0x5C4ABA: push    esi; a3
0x5C4ABB: push    eax; a2
0x5C4ABC: mov     [esp+4Ch+var_4], 1
0x5C4AC4: mov     [ecx], esi
0x5C4AC6: mov     [ecx+4], si
0x5C4ACA: mov     [ecx+6], si
0x5C4ACE: call    BSStringT_Set
0x5C4AD3: mov     ecx, ebx
0x5C4AD5: mov     [esp+44h+var_4], 0FFFFFFFFh
0x5C4ADD: call    sub_5C3440
0x5C4AE2: mov     ecx, eax
0x5C4AE4: call    Tile_SetString
0x5C4AE9: mov     eax, [edi]
0x5C4AEB: mov     eax, [eax+1Ch]
0x5C4AEE: cmp     eax, esi
0x5C4AF0: jnz     short loc_5C4AF7
0x5C4AF2: mov     eax, offset EmptyString
0x5C4AF7: push    eax
0x5C4AF8: mov     eax, ds:0B38FB8h
0x5C4AFD: push    0FB4h; int
0x5C4B02: sub     esp, 8
0x5C4B05: mov     ecx, esp; this
0x5C4B07: mov     [esp+3Ch+var_10], esp
0x5C4B0B: push    esi; a3
0x5C4B0C: push    eax; a2
0x5C4B0D: mov     [ecx], esi
0x5C4B0F: mov     [ecx+4], si
0x5C4B13: mov     [ecx+6], si
0x5C4B17: call    BSStringT_Set
0x5C4B1C: mov     eax, ds:0B38F88h
0x5C4B21: sub     esp, 8
0x5C4B24: mov     ecx, esp; this
0x5C4B26: mov     [esp+44h+var_14], esp
0x5C4B2A: push    esi; a3
0x5C4B2B: push    eax; a2
0x5C4B2C: mov     [esp+4Ch+var_4], 2
0x5C4B34: mov     [ecx], esi
0x5C4B36: mov     [ecx+4], si
0x5C4B3A: mov     [ecx+6], si
0x5C4B3E: call    BSStringT_Set
0x5C4B43: mov     ecx, ebx
0x5C4B45: mov     [esp+44h+var_4], 0FFFFFFFFh
0x5C4B4D: call    sub_5C3440
0x5C4B52: mov     ecx, eax
0x5C4B54: call    Tile_SetString
0x5C4B59: fild    [esp+2Ch+var_18]
0x5C4B5D: mov     eax, ds:0B38FB8h
0x5C4B62: sub     esp, 0Ch
0x5C4B65: mov     ecx, esp; this
0x5C4B67: fstp    [esp+38h+var_30]; float
0x5C4B6B: mov     [esp+38h+var_10], esp
0x5C4B6F: push    esi; a3
0x5C4B70: push    eax; a2
0x5C4B71: mov     [ecx], esi
0x5C4B73: mov     [ecx+4], si
0x5C4B77: mov     [ecx+6], si
0x5C4B7B: call    BSStringT_Set
0x5C4B80: mov     eax, ds:0B38F88h
0x5C4B85: sub     esp, 8
0x5C4B88: mov     ecx, esp; this
0x5C4B8A: mov     [esp+40h+var_14], esp
0x5C4B8E: push    esi; a3
0x5C4B8F: push    eax; a2
0x5C4B90: mov     [esp+48h+var_4], 3
0x5C4B98: mov     [ecx], esi
0x5C4B9A: mov     [ecx+4], si
0x5C4B9E: mov     [ecx+6], si
0x5C4BA2: call    BSStringT_Set
0x5C4BA7: mov     ecx, ebx
0x5C4BA9: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5C4BB1: call    sub_5C3440
0x5C4BB6: push    eax; int
0x5C4BB7: mov     ecx, ebx
0x5C4BB9: call    sub_5C2B50
0x5C4BBE: mov     ecx, [esp+2Ch+var_18]
0x5C4BC2: mov     [ebx+870h], ecx
0x5C4BC8: mov     edx, [edi]
0x5C4BCA: mov     [ebp+1C8h], edx
0x5C4BD0: mov     ecx, ebx
0x5C4BD2: call    sub_5C34D0
0x5C4BD7: mov     ecx, [esp+2Ch+var_C]
0x5C4BDB: mov     large fs:0, ecx
0x5C4BE2: pop     ecx
0x5C4BE3: pop     edi
0x5C4BE4: pop     esi
0x5C4BE5: pop     ebp
0x5C4BE6: pop     ebx
0x5C4BE7: add     esp, 18h
0x5C4BEA: retn
