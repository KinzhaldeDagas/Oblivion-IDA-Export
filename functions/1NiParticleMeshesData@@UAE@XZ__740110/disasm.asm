0x740110: push    0FFFFFFFFh
0x740112: push    offset ??1NiParticleMeshesData@@UAE@XZ_SEH
0x740117: mov     eax, large fs:0
0x74011D: push    eax
0x74011E: push    ecx
0x74011F: push    ebp
0x740120: push    esi
0x740121: push    edi
0x740122: mov     eax, ds:0B30AACh
0x740127: xor     eax, esp
0x740129: push    eax
0x74012A: lea     eax, [esp+20h+var_C]
0x74012E: mov     large fs:0, eax
0x740134: mov     edi, ecx
0x740136: mov     [esp+20h+var_10], edi
0x74013A: mov     dword ptr [edi], offset ??_7NiParticleMeshesData@@6B@; const NiParticleMeshesData::`vftable'
0x740140: mov     esi, [edi+5Ch]
0x740143: test    esi, esi
0x740145: mov     ebp, ds:0A2807Ch
0x74014B: mov     [esp+20h+var_4], 1
0x740153: jz      short loc_740174
0x740155: lea     eax, [esi+4]
0x740158: push    eax; lpAddend
0x740159: call    ebp ; InterlockedDecrement
0x74015B: test    eax, eax
0x74015D: jnz     short loc_74016D
0x74015F: test    esi, esi
0x740161: jz      short loc_74016D
0x740163: mov     edx, [esi]
0x740165: mov     eax, [edx]
0x740167: push    1
0x740169: mov     ecx, esi
0x74016B: call    eax
0x74016D: mov     dword ptr [edi+5Ch], 0
0x740174: mov     esi, [edi+5Ch]
0x740177: test    esi, esi
0x740179: mov     byte ptr [esp+20h+var_4], 0
0x74017E: jz      short loc_740198
0x740180: lea     ecx, [esi+4]
0x740183: push    ecx; lpAddend
0x740184: call    ebp ; InterlockedDecrement
0x740186: test    eax, eax
0x740188: jnz     short loc_740198
0x74018A: test    esi, esi
0x74018C: jz      short loc_740198
0x74018E: mov     edx, [esi]
0x740190: mov     eax, [edx]
0x740192: push    1
0x740194: mov     ecx, esi
0x740196: call    eax
0x740198: mov     ecx, edi; this
0x74019A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7401A2: call    sub_73EEC0
0x7401A7: mov     ecx, [esp+20h+var_C]
0x7401AB: mov     large fs:0, ecx
0x7401B2: pop     ecx
0x7401B3: pop     edi
0x7401B4: pop     esi
0x7401B5: pop     ebp
0x7401B6: add     esp, 10h
0x7401B9: retn
