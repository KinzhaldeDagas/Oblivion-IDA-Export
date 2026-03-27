0x738510: push    0FFFFFFFFh
0x738512: push    offset SEH_7F1810
0x738517: mov     eax, large fs:0
0x73851D: push    eax
0x73851E: push    ecx
0x73851F: push    esi
0x738520: mov     eax, ds:0B30AACh
0x738525: xor     eax, esp
0x738527: push    eax
0x738528: lea     eax, [esp+18h+var_C]
0x73852C: mov     large fs:0, eax
0x738532: mov     esi, ecx
0x738534: mov     [esp+18h+var_10], esi
0x738538: mov     dword ptr [esi], offset ??_7NiShaderFactory@@6B@; const NiShaderFactory::`vftable'
0x73853E: mov     ecx, ds:0B40120h
0x738544: test    ecx, ecx
0x738546: mov     [esp+18h+var_4], 0
0x73854E: jz      short loc_738568
0x738550: mov     eax, [ecx]
0x738552: mov     edx, [eax+20h]
0x738555: call    edx
0x738557: mov     ecx, ds:0B40120h
0x73855D: test    ecx, ecx
0x73855F: jz      short loc_738568
0x738561: mov     eax, [ecx]
0x738563: mov     edx, [eax+30h]
0x738566: call    edx
0x738568: push    offset NiRefObject_objcount; lpAddend
0x73856D: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x738573: call    dword ptr ds:0A2807Ch
0x738579: mov     ecx, [esp+18h+var_C]
0x73857D: mov     large fs:0, ecx
0x738584: pop     ecx
0x738585: pop     esi
0x738586: add     esp, 10h
0x738589: retn
