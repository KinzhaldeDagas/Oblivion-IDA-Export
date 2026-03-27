0x6E6220: push    0FFFFFFFFh
0x6E6222: push    offset SEH_8C62B0
0x6E6227: mov     eax, large fs:0
0x6E622D: push    eax
0x6E622E: push    ecx
0x6E622F: push    esi
0x6E6230: mov     eax, ds:0B30AACh
0x6E6235: xor     eax, esp
0x6E6237: push    eax
0x6E6238: lea     eax, [esp+18h+var_C]
0x6E623C: mov     large fs:0, eax
0x6E6242: push    2Ch ; ','; Size
0x6E6244: call    FormHeapAlloc
0x6E6249: mov     esi, eax
0x6E624B: add     esp, 4
0x6E624E: mov     [esp+18h+var_10], esi
0x6E6252: xor     eax, eax
0x6E6254: cmp     esi, eax
0x6E6256: mov     [esp+18h+var_4], eax
0x6E625A: jz      short loc_6E6284
0x6E625C: push    eax; int
0x6E625D: push    0FFFFh; int
0x6E6262: push    eax; int
0x6E6263: mov     ecx, esi; this
0x6E6265: call    sub_6E5490
0x6E626A: mov     dword ptr [esi], offset ??_7NiBSplineCompFloatInterpolator@@6B@; const NiBSplineCompFloatInterpolator::`vftable'
0x6E6270: fld     dword ptr ds:0A7DEB4h
0x6E6276: fstp    dword ptr [esi+24h]
0x6E6279: mov     eax, esi
0x6E627B: fld     dword ptr ds:0A7DEB4h
0x6E6281: fstp    dword ptr [esi+28h]
0x6E6284: mov     ecx, [esp+18h+var_C]
0x6E6288: mov     large fs:0, ecx
0x6E628F: pop     ecx
0x6E6290: pop     esi
0x6E6291: add     esp, 10h
0x6E6294: retn
