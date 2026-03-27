0x46FFD0: push    0FFFFFFFFh
0x46FFD2: push    offset TESTexture_constr_SEH
0x46FFD7: mov     eax, large fs:0
0x46FFDD: push    eax
0x46FFDE: push    ecx
0x46FFDF: push    esi
0x46FFE0: push    edi
0x46FFE1: mov     eax, ds:0B30AACh
0x46FFE6: xor     eax, esp
0x46FFE8: push    eax
0x46FFE9: lea     eax, [esp+1Ch+var_C]
0x46FFED: mov     large fs:0, eax
0x46FFF3: mov     esi, ecx
0x46FFF5: xor     edi, edi
0x46FFF7: mov     dword ptr [esi], offset ??_7TESTexture@@6B@; const TESTexture::`vftable'
0x46FFFD: mov     [esi+4], edi
0x470000: mov     [esi+8], di
0x470004: mov     [esi+0Ah], di
0x470008: mov     eax, edi
0x47000A: push    eax
0x47000B: call    FormHeapFree
0x470010: add     esp, 4
0x470013: mov     [esi+4], edi
0x470016: mov     [esi+0Ah], di
0x47001A: mov     [esi+8], di
0x47001E: mov     eax, esi
0x470020: mov     ecx, [esp+1Ch+var_C]
0x470024: mov     large fs:0, ecx
0x47002B: pop     ecx
0x47002C: pop     edi
0x47002D: pop     esi
0x47002E: add     esp, 10h
0x470031: retn
