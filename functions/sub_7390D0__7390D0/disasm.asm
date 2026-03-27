0x7390D0: push    0FFFFFFFFh
0x7390D2: push    offset SEH_8C8970
0x7390D7: mov     eax, large fs:0
0x7390DD: push    eax
0x7390DE: push    ecx
0x7390DF: push    esi
0x7390E0: push    edi
0x7390E1: mov     eax, ds:0B30AACh
0x7390E6: xor     eax, esp
0x7390E8: push    eax
0x7390E9: lea     eax, [esp+1Ch+var_C]
0x7390ED: mov     large fs:0, eax
0x7390F3: push    1Ch; Size
0x7390F5: call    FormHeapAlloc
0x7390FA: mov     esi, eax
0x7390FC: add     esp, 4
0x7390FF: mov     [esp+1Ch+var_10], esi
0x739103: xor     edi, edi
0x739105: cmp     esi, edi
0x739107: mov     [esp+1Ch+var_4], edi
0x73910B: jz      short loc_73913E
0x73910D: mov     ecx, esi
0x73910F: call    NiObject_constr
0x739114: mov     dword ptr [esi], offset ??_7NiScreenPolygon@@6B@; const NiScreenPolygon::`vftable'
0x73911A: mov     [esi+8], edi
0x73911D: mov     [esi+0Ch], di
0x739121: mov     [esi+10h], edi
0x739124: mov     [esi+14h], edi
0x739127: mov     [esi+18h], edi
0x73912A: mov     eax, esi
0x73912C: mov     ecx, [esp+1Ch+var_C]
0x739130: mov     large fs:0, ecx
0x739137: pop     ecx
0x739138: pop     edi
0x739139: pop     esi
0x73913A: add     esp, 10h
0x73913D: retn
0x73913E: xor     eax, eax
0x739140: mov     ecx, [esp+1Ch+var_C]
0x739144: mov     large fs:0, ecx
0x73914B: pop     ecx
0x73914C: pop     edi
0x73914D: pop     esi
0x73914E: add     esp, 10h
0x739151: retn
