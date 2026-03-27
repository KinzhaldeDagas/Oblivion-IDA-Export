0x6C5360: push    0FFFFFFFFh
0x6C5362: push    offset ??0NiDefaultAVObjectPalette@@QAE@XZ_SEH
0x6C5367: mov     eax, large fs:0
0x6C536D: push    eax
0x6C536E: push    ecx
0x6C536F: push    esi
0x6C5370: mov     eax, ds:0B30AACh
0x6C5375: xor     eax, esp
0x6C5377: push    eax
0x6C5378: lea     eax, [esp+18h+var_C]
0x6C537C: mov     large fs:0, eax
0x6C5382: mov     esi, ecx
0x6C5384: mov     [esp+18h+var_10], esi
0x6C5388: call    NiObject_constr
0x6C538D: mov     dword ptr [esi], offset ??_7NiDefaultAVObjectPalette@@6B@; const NiDefaultAVObjectPalette::`vftable'
0x6C5393: xor     ecx, ecx
0x6C5395: mov     eax, 25h ; '%'
0x6C539A: mov     [esi+0Ch], eax
0x6C539D: mov     edx, 4
0x6C53A2: mul     edx
0x6C53A4: seto    cl
0x6C53A7: mov     [esp+18h+var_4], 0
0x6C53AF: mov     dword ptr [esi+8], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiAVObject@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiAVObject *>::`vftable'
0x6C53B6: mov     dword ptr [esi+14h], 0
0x6C53BD: neg     ecx
0x6C53BF: or      ecx, eax
0x6C53C1: push    ecx; Size
0x6C53C2: call    FormHeapAlloc
0x6C53C7: mov     ecx, [esi+0Ch]
0x6C53CA: add     ecx, ecx
0x6C53CC: add     ecx, ecx
0x6C53CE: push    ecx
0x6C53CF: push    0
0x6C53D1: push    eax
0x6C53D2: mov     [esi+10h], eax
0x6C53D5: call    __memset
0x6C53DA: mov     al, 1
0x6C53DC: add     esp, 10h
0x6C53DF: mov     [esi+18h], al
0x6C53E2: mov     dword ptr [esi+8], offset ??_7?$NiTStringPointerMap@PAVNiAVObject@@@@6B@; const NiTStringPointerMap<NiAVObject *>::`vftable'
0x6C53E9: mov     edx, [esp+18h+arg_0]
0x6C53ED: mov     ecx, esi
0x6C53EF: mov     byte ptr [esp+18h+var_4], al
0x6C53F3: mov     [esi+1Ch], edx
0x6C53F6: call    sub_716690
0x6C53FB: mov     eax, esi
0x6C53FD: mov     ecx, [esp+18h+var_C]
0x6C5401: mov     large fs:0, ecx
0x6C5408: pop     ecx
0x6C5409: pop     esi
0x6C540A: add     esp, 10h
0x6C540D: retn    4
