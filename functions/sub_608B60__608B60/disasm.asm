0x608B60: push    ebp
0x608B61: mov     ebp, esp
0x608B63: and     esp, 0FFFFFFF0h
0x608B66: push    0FFFFFFFFh
0x608B68: push    offset SEH_608B60
0x608B6D: mov     eax, large fs:0
0x608B73: push    eax
0x608B74: sub     esp, 30h
0x608B77: mov     eax, ds:0B30AACh
0x608B7C: xor     eax, esp
0x608B7E: mov     [esp+3Ch+var_14], eax
0x608B82: push    esi
0x608B83: mov     eax, ds:0B30AACh
0x608B88: xor     eax, esp
0x608B8A: push    eax
0x608B8B: lea     eax, [esp+44h+var_C]
0x608B8F: mov     large fs:0, eax
0x608B95: mov     esi, ecx
0x608B97: mov     [esp+44h+var_34], esi
0x608B9B: mov     dword ptr [esi], offset ??_7ArrowProjectile@@6BArrowProjectile@@@; const ArrowProjectile::`vftable'{for `ArrowProjectile'}
0x608BA1: mov     dword ptr [esi+18h], offset ??_7ArrowProjectile@@6BTESChildCell@@@; const ArrowProjectile::`vftable'{for `TESChildCell'}
0x608BA8: sub     dword ptr ds:0B3B7D0h, 1
0x608BAF: push    esi
0x608BB0: mov     ecx, offset ActorProcessManager_ptr.unk4C
0x608BB5: mov     [esp+48h+var_4], 0
0x608BBD: call    BSSimpleList_Remove
0x608BC2: mov     eax, [esi+3Ch]
0x608BC5: test    eax, eax
0x608BC7: jz      short loc_608C0C
0x608BC9: mov     ecx, [esi+5Ch]
0x608BCC: test    ecx, ecx
0x608BCE: jz      short loc_608C0C
0x608BD0: cmp     dword ptr [ecx], 1
0x608BD3: jnz     short loc_608C0C
0x608BD5: push    eax
0x608BD6: call    sub_480340
0x608BDB: add     esp, 4
0x608BDE: test    eax, eax
0x608BE0: jz      short loc_608C0C
0x608BE2: mov     ecx, [eax+10h]
0x608BE5: test    ecx, ecx
0x608BE7: jz      short loc_608C0C
0x608BE9: mov     eax, [ecx]
0x608BEB: mov     eax, [eax+0A8h]
0x608BF1: lea     edx, [esp+44h+var_30]
0x608BF5: push    edx
0x608BF6: call    eax
0x608BF8: mov     ecx, [esi+5Ch]
0x608BFB: mov     edx, [ecx+2Ch]
0x608BFE: push    edx
0x608BFF: lea     eax, [esp+48h+var_30]
0x608C03: push    eax
0x608C04: call    sub_535DD0
0x608C09: add     esp, 8
0x608C0C: cmp     byte ptr [esi+94h], 0
0x608C13: jnz     short loc_608C56
0x608C15: mov     eax, [esi+5Ch]
0x608C18: test    eax, eax
0x608C1A: jz      short loc_608C56
0x608C1C: cmp     dword ptr [eax], 0
0x608C1F: jnz     short loc_608C56
0x608C21: cmp     dword ptr [eax+28h], 0
0x608C25: jz      short loc_608C56
0x608C27: mov     eax, [eax+28h]
0x608C2A: mov     edx, [eax]
0x608C2C: mov     ecx, eax
0x608C2E: mov     eax, [edx+190h]
0x608C34: call    eax
0x608C36: test    al, al
0x608C38: jz      short loc_608C56
0x608C3A: mov     ecx, [esi+5Ch]
0x608C3D: mov     eax, [ecx+28h]
0x608C40: test    eax, eax
0x608C42: jz      short loc_608C56
0x608C44: mov     ecx, [eax+58h]
0x608C47: test    ecx, ecx
0x608C49: jz      short loc_608C56
0x608C4B: mov     edx, [ecx]
0x608C4D: mov     eax, [edx+4FCh]
0x608C53: push    esi
0x608C54: call    eax
0x608C56: mov     eax, [esi+5Ch]
0x608C59: push    eax
0x608C5A: call    FormHeapFree
0x608C5F: add     esp, 4
0x608C62: push    0; a2
0x608C64: mov     ecx, esi; this
0x608C66: call    TESObjectREFR_Set3D
0x608C6B: mov     ecx, ds:0B33A98h
0x608C71: cmp     byte ptr [ecx+0CD4h], 0
0x608C78: jnz     short loc_608C83
0x608C7A: push    0
0x608C7C: mov     ecx, esi
0x608C7E: call    sub_65A050
0x608C83: mov     ecx, esi
0x608C85: mov     [esp+44h+var_4], 0FFFFFFFFh
0x608C8D: call    MobileObject_destr
0x608C92: mov     ecx, dword ptr [esp+44h+var_C]
0x608C96: mov     large fs:0, ecx
0x608C9D: pop     ecx
0x608C9E: pop     esi
0x608C9F: mov     ecx, [esp+3Ch+var_14]
0x608CA3: xor     ecx, esp
0x608CA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x608CAA: mov     esp, ebp
0x608CAC: pop     ebp
0x608CAD: retn
