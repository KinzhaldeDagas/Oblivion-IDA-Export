0x4E6070: push    0FFFFFFFFh
0x4E6072: push    offset ??1TESPathGrid@@UAE@XZ_SEH
0x4E6077: mov     eax, large fs:0
0x4E607D: push    eax
0x4E607E: push    ecx
0x4E607F: push    ebx
0x4E6080: push    esi
0x4E6081: push    edi
0x4E6082: mov     eax, ds:0B30AACh
0x4E6087: xor     eax, esp
0x4E6089: push    eax
0x4E608A: lea     eax, [esp+20h+var_C]
0x4E608E: mov     large fs:0, eax
0x4E6094: mov     esi, ecx
0x4E6096: mov     [esp+20h+var_10], esi
0x4E609A: call    TESForm_constr
0x4E609F: mov     dword ptr [esi+18h], offset ??_7TESChildCell@@6B@; const TESChildCell::`vftable'
0x4E60A6: xor     edi, edi
0x4E60A8: mov     dword ptr [esi], offset ??_7TESPathGrid@@6BTESPathGrid@@@; const TESPathGrid::`vftable'{for `TESPathGrid'}
0x4E60AE: mov     dword ptr [esi+18h], offset ??_7TESPathGrid@@6BTESChildCell@@@; const TESPathGrid::`vftable'{for `TESChildCell'}
0x4E60B5: mov     [esp+20h+var_4], edi
0x4E60B9: mov     [esi+1Ch], edi
0x4E60BC: xor     ecx, ecx
0x4E60BE: mov     eax, 25h ; '%'
0x4E60C3: mov     edx, 4
0x4E60C8: mul     edx
0x4E60CA: seto    cl
0x4E60CD: mov     [esi+28h], edi
0x4E60D0: mov     [esi+2Ch], edi
0x4E60D3: mov     byte ptr [esp+20h+var_4], 1
0x4E60D8: mov     dword ptr [esi+34h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E60DF: mov     dword ptr [esi+38h], 25h ; '%'
0x4E60E6: mov     [esi+40h], edi
0x4E60E9: neg     ecx
0x4E60EB: or      ecx, eax
0x4E60ED: push    ecx; Size
0x4E60EE: call    FormHeapAlloc
0x4E60F3: mov     ecx, [esi+38h]
0x4E60F6: add     ecx, ecx
0x4E60F8: add     ecx, ecx
0x4E60FA: push    ecx
0x4E60FB: push    edi
0x4E60FC: push    eax
0x4E60FD: mov     [esi+3Ch], eax
0x4E6100: call    __memset
0x4E6105: mov     dword ptr [esi+34h], offset ??_7?$NiTPointerMap@PAVTESObjectREFR@@PAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTPointerMap<TESObjectREFR *,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E610C: xor     ecx, ecx
0x4E610E: mov     eax, 25h ; '%'
0x4E6113: mov     edx, 4
0x4E6118: mul     edx
0x4E611A: seto    cl
0x4E611D: mov     byte ptr [esp+30h+var_4], 2
0x4E6122: mov     dword ptr [esi+44h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E6129: mov     dword ptr [esi+48h], 25h ; '%'
0x4E6130: mov     [esi+50h], edi
0x4E6133: neg     ecx
0x4E6135: or      ecx, eax
0x4E6137: push    ecx; Size
0x4E6138: call    FormHeapAlloc
0x4E613D: mov     ecx, [esi+48h]
0x4E6140: add     ecx, ecx
0x4E6142: add     ecx, ecx
0x4E6144: push    ecx
0x4E6145: push    edi
0x4E6146: push    eax
0x4E6147: mov     [esi+4Ch], eax
0x4E614A: call    __memset
0x4E614F: add     esp, 20h
0x4E6152: mov     dword ptr [esi+44h], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E6159: mov     byte ptr [esi+4], 34h ; '4'
0x4E615D: mov     ebx, [esi+1Ch]
0x4E6160: cmp     ebx, edi
0x4E6162: mov     byte ptr [esp+20h+var_4], 3
0x4E6167: jz      short loc_4E6188
0x4E6169: lea     edx, [ebx+4]
0x4E616C: push    edx; lpAddend
0x4E616D: call    dword ptr ds:0A2807Ch
0x4E6173: test    eax, eax
0x4E6175: jnz     short loc_4E6185
0x4E6177: cmp     ebx, edi
0x4E6179: jz      short loc_4E6185
0x4E617B: mov     eax, [ebx]
0x4E617D: mov     edx, [eax]
0x4E617F: push    1
0x4E6181: mov     ecx, ebx
0x4E6183: call    edx
0x4E6185: mov     [esi+1Ch], edi
0x4E6188: mov     ecx, esi; this
0x4E618A: mov     [esi+20h], edi
0x4E618D: mov     [esi+24h], edi
0x4E6190: mov     [esi+30h], di
0x4E6194: call    j_TESForm_InitializeComponents
0x4E6199: add     dword ptr ds:0B35F80h, 1
0x4E61A0: mov     eax, esi
0x4E61A2: mov     ecx, dword ptr [esp+20h+var_C]
0x4E61A6: mov     large fs:0, ecx
0x4E61AD: pop     ecx
0x4E61AE: pop     edi
0x4E61AF: pop     esi
0x4E61B0: pop     ebx
0x4E61B1: add     esp, 10h
0x4E61B4: retn
