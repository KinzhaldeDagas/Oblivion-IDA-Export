0x6E64C0: push    0FFFFFFFFh
0x6E64C2: push    offset SEH_8C8970
0x6E64C7: mov     eax, large fs:0
0x6E64CD: push    eax
0x6E64CE: push    ecx
0x6E64CF: push    esi
0x6E64D0: push    edi
0x6E64D1: mov     eax, ds:0B30AACh
0x6E64D6: xor     eax, esp
0x6E64D8: push    eax
0x6E64D9: lea     eax, [esp+1Ch+var_C]
0x6E64DD: mov     large fs:0, eax
0x6E64E3: mov     edi, ecx
0x6E64E5: push    3Ch ; '<'; Size
0x6E64E7: call    FormHeapAlloc
0x6E64EC: mov     esi, eax
0x6E64EE: add     esp, 4
0x6E64F1: mov     [esp+1Ch+var_10], esi
0x6E64F5: test    esi, esi
0x6E64F7: mov     [esp+1Ch+var_4], 0
0x6E64FF: jz      short loc_6E652B
0x6E6501: push    0; int
0x6E6503: push    0FFFFh; int
0x6E6508: push    0; int
0x6E650A: mov     ecx, esi; this
0x6E650C: call    sub_6E66C0
0x6E6511: mov     dword ptr [esi], offset ??_7NiBSplineCompColorInterpolator@@6B@; const NiBSplineCompColorInterpolator::`vftable'
0x6E6517: fld     dword ptr ds:0A7DEB4h
0x6E651D: fstp    dword ptr [esi+34h]
0x6E6520: fld     dword ptr ds:0A7DEB4h
0x6E6526: fstp    dword ptr [esi+38h]
0x6E6529: jmp     short loc_6E652D
0x6E652B: xor     esi, esi
0x6E652D: mov     eax, [esp+1Ch+arg_0]
0x6E6531: push    eax
0x6E6532: push    esi
0x6E6533: mov     ecx, edi
0x6E6535: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E653D: call    sub_6E67A0
0x6E6542: fld     dword ptr [edi+34h]
0x6E6545: fstp    dword ptr [esi+34h]
0x6E6548: mov     eax, esi
0x6E654A: fld     dword ptr [edi+38h]
0x6E654D: fstp    dword ptr [esi+38h]
0x6E6550: mov     ecx, [esp+1Ch+var_C]
0x6E6554: mov     large fs:0, ecx
0x6E655B: pop     ecx
0x6E655C: pop     edi
0x6E655D: pop     esi
0x6E655E: add     esp, 10h
0x6E6561: retn    4
