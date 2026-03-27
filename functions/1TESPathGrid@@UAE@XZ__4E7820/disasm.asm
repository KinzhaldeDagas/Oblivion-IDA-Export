0x4E7820: push    0FFFFFFFFh
0x4E7822: push    offset ??1TESPathGrid@@UAE@XZ_SEH
0x4E7827: mov     eax, large fs:0
0x4E782D: push    eax
0x4E782E: push    ecx
0x4E782F: push    ebp
0x4E7830: push    esi
0x4E7831: push    edi
0x4E7832: mov     eax, ds:0B30AACh
0x4E7837: xor     eax, esp
0x4E7839: push    eax
0x4E783A: lea     eax, [esp+20h+var_C]
0x4E783E: mov     large fs:0, eax
0x4E7844: mov     esi, ecx
0x4E7846: mov     [esp+20h+var_10], esi
0x4E784A: mov     dword ptr [esi], offset ??_7TESPathGrid@@6BTESPathGrid@@@; const TESPathGrid::`vftable'{for `TESPathGrid'}
0x4E7850: mov     dword ptr [esi+18h], offset ??_7TESPathGrid@@6BTESChildCell@@@; const TESPathGrid::`vftable'{for `TESChildCell'}
0x4E7857: mov     [esp+20h+var_4], 3
0x4E785F: call    sub_4E5400
0x4E7864: mov     ecx, esi
0x4E7866: call    sub_4E6CA0
0x4E786B: mov     ecx, esi
0x4E786D: call    sub_4E4ED0
0x4E7872: mov     ecx, esi
0x4E7874: call    sub_4E5280
0x4E7879: mov     ecx, esi
0x4E787B: call    j_TESForm_ClearComponentReferences
0x4E7880: sub     dword ptr ds:0B35F80h, 1
0x4E7887: mov     ebp, ds:0A2807Ch
0x4E788D: jnz     short loc_4E78E7
0x4E788F: mov     edi, ds:0B35F88h
0x4E7895: test    edi, edi
0x4E7897: jz      short loc_4E78BB
0x4E7899: lea     eax, [edi+4]
0x4E789C: push    eax; lpAddend
0x4E789D: call    ebp ; InterlockedDecrement
0x4E789F: test    eax, eax
0x4E78A1: jnz     short loc_4E78B1
0x4E78A3: test    edi, edi
0x4E78A5: jz      short loc_4E78B1
0x4E78A7: mov     edx, [edi]
0x4E78A9: mov     eax, [edx]
0x4E78AB: push    1
0x4E78AD: mov     ecx, edi
0x4E78AF: call    eax
0x4E78B1: mov     dword ptr ds:0B35F88h, 0
0x4E78BB: mov     edi, ds:0B35F8Ch
0x4E78C1: test    edi, edi
0x4E78C3: jz      short loc_4E78E7
0x4E78C5: lea     ecx, [edi+4]
0x4E78C8: push    ecx; lpAddend
0x4E78C9: call    ebp ; InterlockedDecrement
0x4E78CB: test    eax, eax
0x4E78CD: jnz     short loc_4E78DD
0x4E78CF: test    edi, edi
0x4E78D1: jz      short loc_4E78DD
0x4E78D3: mov     edx, [edi]
0x4E78D5: mov     eax, [edx]
0x4E78D7: push    1
0x4E78D9: mov     ecx, edi
0x4E78DB: call    eax
0x4E78DD: mov     dword ptr ds:0B35F8Ch, 0
0x4E78E7: lea     ecx, [esi+44h]
0x4E78EA: mov     byte ptr [esp+20h+var_4], 2
0x4E78EF: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<uint,BSSimpleList<TESPathGridPoint *> *>(void)
0x4E78F4: lea     ecx, [esi+34h]
0x4E78F7: mov     byte ptr [esp+20h+var_4], 1
0x4E78FC: call    ??1?$NiTPointerMap@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@UAE@XZ; NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>(void)
0x4E7901: mov     edi, [esi+1Ch]
0x4E7904: test    edi, edi
0x4E7906: mov     byte ptr [esp+20h+var_4], 0
0x4E790B: jz      short loc_4E7925
0x4E790D: lea     ecx, [edi+4]
0x4E7910: push    ecx; lpAddend
0x4E7911: call    ebp ; InterlockedDecrement
0x4E7913: test    eax, eax
0x4E7915: jnz     short loc_4E7925
0x4E7917: test    edi, edi
0x4E7919: jz      short loc_4E7925
0x4E791B: mov     edx, [edi]
0x4E791D: mov     eax, [edx]
0x4E791F: push    1
0x4E7921: mov     ecx, edi
0x4E7923: call    eax
0x4E7925: mov     ecx, esi; this
0x4E7927: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4E792F: call    TESForm_destr
0x4E7934: mov     ecx, dword ptr [esp+20h+var_C]
0x4E7938: mov     large fs:0, ecx
0x4E793F: pop     ecx
0x4E7940: pop     edi
0x4E7941: pop     esi
0x4E7942: pop     ebp
0x4E7943: add     esp, 10h
0x4E7946: retn
