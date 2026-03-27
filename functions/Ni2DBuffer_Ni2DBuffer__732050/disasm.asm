0x732050: push    0FFFFFFFFh
0x732052: push    offset SEH_8C8970
0x732057: mov     eax, large fs:0
0x73205D: push    eax
0x73205E: push    ecx
0x73205F: push    esi
0x732060: push    edi
0x732061: mov     eax, ds:0B30AACh
0x732066: xor     eax, esp
0x732068: push    eax
0x732069: lea     eax, [esp+1Ch+var_C]
0x73206D: mov     large fs:0, eax
0x732073: push    14h; Size
0x732075: call    FormHeapAlloc
0x73207A: mov     esi, eax
0x73207C: add     esp, 4
0x73207F: mov     [esp+1Ch+var_10], esi
0x732083: xor     edi, edi
0x732085: cmp     esi, edi
0x732087: mov     [esp+1Ch+var_4], edi
0x73208B: jz      short loc_7320A7
0x73208D: mov     ecx, esi; this
0x73208F: call    NiObject_constr
0x732094: mov     dword ptr [esi], offset ??_7Ni2DBuffer@@6B@; const Ni2DBuffer::`vftable'
0x73209A: mov     [esi+8], edi
0x73209D: mov     [esi+0Ch], edi
0x7320A0: mov     [esi+10h], edi
0x7320A3: mov     eax, esi
0x7320A5: jmp     short loc_7320A9
0x7320A7: xor     eax, eax
0x7320A9: mov     ecx, [esp+1Ch+arg_0]
0x7320AD: mov     edx, [esp+1Ch+arg_4]
0x7320B1: mov     [eax+8], ecx
0x7320B4: mov     [eax+0Ch], edx
0x7320B7: mov     ecx, [esp+1Ch+var_C]
0x7320BB: mov     large fs:0, ecx
0x7320C2: pop     ecx
0x7320C3: pop     edi
0x7320C4: pop     esi
0x7320C5: add     esp, 10h
0x7320C8: retn
