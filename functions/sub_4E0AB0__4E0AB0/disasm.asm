0x4E0AB0: sub     esp, 34h
0x4E0AB3: mov     eax, ds:0B33B00h
0x4E0AB8: push    ebx
0x4E0AB9: xor     ebx, ebx
0x4E0ABB: push    esi
0x4E0ABC: mov     byte ptr [esp+3Ch+a1.vtbl], bl
0x4E0AC0: cmp     byte ptr [eax+7Ch], 16h
0x4E0AC4: push    edi
0x4E0AC5: mov     esi, ecx
0x4E0AC7: jnb     short loc_4E0AE2
0x4E0AC9: push    1; a2
0x4E0ACB: lea     ecx, [esp+44h+a1.vtbl+1]
0x4E0ACF: push    ecx; a1
0x4E0AD0: mov     ecx, esi
0x4E0AD2: call    TESForm_LoadDataFromCurrentSaveGame
0x4E0AD7: cmp     byte ptr [esp+40h+a1.vtbl+1], bl
0x4E0ADB: jz      short loc_4E0AE2
0x4E0ADD: or      byte ptr [esp+40h+a1.vtbl], 1
0x4E0AE2: mov     edi, [esi+3Ch]
0x4E0AE5: cmp     edi, ebx
0x4E0AE7: jz      loc_4E0CB5
0x4E0AED: mov     edx, ds:0B33B00h
0x4E0AF3: cmp     byte ptr [edx+7Ch], 2Bh ; '+'
0x4E0AF7: jb      short loc_4E0B07
0x4E0AF9: push    1; a2
0x4E0AFB: lea     eax, [esp+44h+a1]
0x4E0AFF: push    eax; a1
0x4E0B00: mov     ecx, esi
0x4E0B02: call    TESForm_LoadDataFromCurrentSaveGame
0x4E0B07: mov     ecx, ds:0B33B00h
0x4E0B0D: mov     al, [ecx+7Ch]
0x4E0B10: cmp     al, 16h
0x4E0B12: jb      short loc_4E0B31
0x4E0B14: cmp     al, 2Bh ; '+'
0x4E0B16: jnb     short loc_4E0B31
0x4E0B18: push    1; a2
0x4E0B1A: lea     edx, [esp+44h+a1.vtbl+1]
0x4E0B1E: push    edx; a1
0x4E0B1F: mov     ecx, esi
0x4E0B21: call    TESForm_LoadDataFromCurrentSaveGame
0x4E0B26: cmp     byte ptr [esp+40h+a1.vtbl+1], bl
0x4E0B2A: jz      short loc_4E0B31
0x4E0B2C: or      byte ptr [esp+40h+a1.vtbl], 1
0x4E0B31: mov     eax, ds:0B33B00h
0x4E0B36: cmp     byte ptr [eax+7Ch], 18h
0x4E0B3A: jb      loc_4E0BF2
0x4E0B40: push    1; a2
0x4E0B42: lea     ecx, [esp+44h+a1.vtbl+1]
0x4E0B46: push    ecx; a1
0x4E0B47: mov     ecx, esi
0x4E0B49: call    TESForm_LoadDataFromCurrentSaveGame
0x4E0B4E: lea     edx, [esp+40h+a1.vtbl+2]
0x4E0B52: push    edx
0x4E0B53: mov     ecx, esi
0x4E0B55: mov     byte ptr [esp+44h+a1.vtbl+2], bl
0x4E0B59: mov     word ptr [esp+44h+a1.member.type], bx
0x4E0B5E: mov     word ptr [esp+44h+a1.member.pad+1], bx
0x4E0B63: mov     [esp+44h+a1.member.flags+2], ebx
0x4E0B67: mov     [esp+44h+a1.member.refID+2], ebx
0x4E0B6B: mov     [esp+44h+a1.member.modlist.data+2], ebx
0x4E0B6F: call    sub_4E0970
0x4E0B74: mov     al, [esp+40h+a1.member.type]
0x4E0B78: add     al, [esp+40h+a1.member.pad+1]
0x4E0B7C: mov     cl, byte ptr [esp+40h+a1.vtbl+1]
0x4E0B80: cmp     al, cl
0x4E0B82: jz      short loc_4E0BF2
0x4E0B84: mov     edx, [esi+0Ch]
0x4E0B87: movzx   eax, al
0x4E0B8A: movzx   ecx, cl
0x4E0B8D: push    eax
0x4E0B8E: push    ecx
0x4E0B8F: push    edx
0x4E0B90: mov     edx, [esi]
0x4E0B92: mov     eax, [edx+0D4h]
0x4E0B98: mov     ecx, esi
0x4E0B9A: call    eax
0x4E0B9C: push    eax; ArgList
0x4E0B9D: push    offset aHavokDataBoneC; "Havok data bone count differs on refere"...
0x4E0BA2: call    PrintError
0x4E0BA7: movzx   ecx, [esp+54h+arg_0]
0x4E0BAC: sub     ecx, 2
0x4E0BAF: add     esp, 14h
0x4E0BB2: push    ecx
0x4E0BB3: mov     ecx, ds:0B33B00h
0x4E0BB9: call    SaveLoad_AdvanceBufferOffset
0x4E0BBE: mov     edx, [esi]
0x4E0BC0: mov     eax, [edx+190h]
0x4E0BC6: mov     ecx, esi
0x4E0BC8: call    eax
0x4E0BCA: test    al, al
0x4E0BCC: jz      loc_4E0CE4
0x4E0BD2: fldz
0x4E0BD4: push    ebx; int
0x4E0BD5: push    ecx
0x4E0BD6: fstp    [esp+48h+a2]; float
0x4E0BD9: push    1; int
0x4E0BDB: push    offset Vector3_InitValue?; int
0x4E0BE0: push    edi; int
0x4E0BE1: call    sub_8AB440
0x4E0BE6: add     esp, 14h
0x4E0BE9: pop     edi
0x4E0BEA: pop     esi
0x4E0BEB: pop     ebx
0x4E0BEC: add     esp, 34h
0x4E0BEF: retn    4
0x4E0BF2: push    edi
0x4E0BF3: mov     [esp+44h+var_14], 0Fh
0x4E0BFB: mov     [esp+44h+var_18], 1
0x4E0C00: call    sub_4A05E0
0x4E0C05: movzx   ecx, byte ptr [esp+44h+a1.vtbl]
0x4E0C0A: push    offset sub_4DB080
0x4E0C0F: lea     edx, [esp+48h+a1.member.modlist.next+2]
0x4E0C13: push    edx
0x4E0C14: push    edi
0x4E0C15: mov     [esp+50h+var_10], eax
0x4E0C19: mov     [esp+50h+var_C], esi
0x4E0C1D: mov     [esp+50h+var_8], ecx
0x4E0C21: mov     [esp+50h+var_4], ebx
0x4E0C25: call    sub_88A7D0
0x4E0C2A: mov     eax, [esi]
0x4E0C2C: mov     edx, [eax+190h]
0x4E0C32: add     esp, 10h
0x4E0C35: mov     ecx, esi
0x4E0C37: call    edx
0x4E0C39: test    al, al
0x4E0C3B: jz      short loc_4E0C9E
0x4E0C3D: mov     eax, [esi]
0x4E0C3F: mov     edx, [eax+1A0h]
0x4E0C45: mov     ecx, esi
0x4E0C47: call    edx
0x4E0C49: test    al, al
0x4E0C4B: jz      short loc_4E0C9E
0x4E0C4D: push    1
0x4E0C4F: push    edi
0x4E0C50: call    sub_8A5580
0x4E0C55: push    ebx; a4
0x4E0C56: push    1; a3
0x4E0C58: push    1; a2
0x4E0C5A: push    edi; a1
0x4E0C5B: call    sub_88D070
0x4E0C60: mov     eax, [esi]
0x4E0C62: mov     edx, [eax+164h]
0x4E0C68: add     esp, 18h
0x4E0C6B: mov     ecx, esi
0x4E0C6D: call    edx
0x4E0C6F: mov     esi, eax
0x4E0C71: cmp     esi, ebx
0x4E0C73: jz      short loc_4E0C9E
0x4E0C75: fldz
0x4E0C77: push    ecx
0x4E0C78: fstp    [esp+44h+var_44]; float
0x4E0C7B: mov     ecx, esi
0x4E0C7D: push    5; int
0x4E0C7F: call    sub_470FC0
0x4E0C84: mov     eax, ds:0B3F9A8h
0x4E0C89: mov     [esi+18h], eax
0x4E0C8C: mov     ecx, ds:0B3F9ACh
0x4E0C92: mov     [esi+1Ch], ecx
0x4E0C95: mov     edx, ds:0B3F9B0h
0x4E0C9B: mov     [esi+20h], edx
0x4E0C9E: fldz
0x4E0CA0: push    ebx; a3
0x4E0CA1: push    ecx
0x4E0CA2: fstp    [esp+48h+a2]; a2
0x4E0CA5: mov     ecx, edi; this
0x4E0CA7: call    NiAVObject_UpdateNiAVObject
0x4E0CAC: pop     edi
0x4E0CAD: pop     esi
0x4E0CAE: pop     ebx
0x4E0CAF: add     esp, 34h
0x4E0CB2: retn    4
0x4E0CB5: mov     eax, [esi+0Ch]
0x4E0CB8: push    eax
0x4E0CB9: mov     eax, [esi]
0x4E0CBB: mov     edx, [eax+0D4h]
0x4E0CC1: mov     ecx, esi
0x4E0CC3: call    edx
0x4E0CC5: push    eax; ArgList
0x4E0CC6: push    offset aCannotLoadHavo; "Cannot load Havok data for reference %s"...
0x4E0CCB: call    PrintError
0x4E0CD0: movzx   eax, [esp+4Ch+arg_0]
0x4E0CD5: mov     ecx, ds:0B33B00h
0x4E0CDB: add     esp, 0Ch
0x4E0CDE: push    eax
0x4E0CDF: call    SaveLoad_AdvanceBufferOffset
0x4E0CE4: pop     edi
0x4E0CE5: pop     esi
0x4E0CE6: pop     ebx
0x4E0CE7: add     esp, 34h
0x4E0CEA: retn    4
