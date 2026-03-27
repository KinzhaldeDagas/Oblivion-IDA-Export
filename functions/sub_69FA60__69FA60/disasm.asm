0x69FA60: push    0FFFFFFFFh
0x69FA62: push    offset SEH_69FA60
0x69FA67: mov     eax, large fs:0
0x69FA6D: push    eax
0x69FA6E: sub     esp, 8
0x69FA71: push    esi
0x69FA72: push    edi
0x69FA73: mov     eax, ds:0B30AACh
0x69FA78: xor     eax, esp
0x69FA7A: push    eax
0x69FA7B: lea     eax, [esp+20h+var_C]
0x69FA7F: mov     large fs:0, eax
0x69FA85: mov     edi, ecx
0x69FA87: mov     [esp+20h+var_10], edi
0x69FA8B: mov     dword ptr [edi], offset ??_7MagicProjectile@@6BMagicProjectile@@@; const MagicProjectile::`vftable'{for `MagicProjectile'}
0x69FA91: mov     dword ptr [edi+18h], offset ??_7MagicProjectile@@6BTESChildCell@@@; const MagicProjectile::`vftable'{for `TESChildCell'}
0x69FA98: mov     ecx, [edi+58h]
0x69FA9B: test    ecx, ecx
0x69FA9D: mov     [esp+20h+var_4], 0
0x69FAA5: jz      short loc_69FABA
0x69FAA7: mov     eax, [ecx]
0x69FAA9: mov     edx, [eax+8]
0x69FAAC: call    edx
0x69FAAE: push    eax
0x69FAAF: push    edi
0x69FAB0: mov     ecx, offset ActorProcessManager_ptr
0x69FAB5: call    sub_674550
0x69FABA: mov     eax, [edi+3Ch]
0x69FABD: test    eax, eax
0x69FABF: jz      short loc_69FAFB
0x69FAC1: mov     ecx, ds:0B333A4h
0x69FAC7: mov     edx, [ecx]
0x69FAC9: mov     edx, [edx+88h]
0x69FACF: push    eax
0x69FAD0: lea     eax, [esp+24h+var_14]
0x69FAD4: push    eax
0x69FAD5: call    edx
0x69FAD7: mov     esi, dword ptr [esp+20h+var_14]
0x69FADB: test    esi, esi
0x69FADD: jz      short loc_69FAFB
0x69FADF: lea     eax, [esi+4]
0x69FAE2: push    eax; lpAddend
0x69FAE3: call    dword ptr ds:0A2807Ch
0x69FAE9: test    eax, eax
0x69FAEB: jnz     short loc_69FAFB
0x69FAED: test    esi, esi
0x69FAEF: jz      short loc_69FAFB
0x69FAF1: mov     edx, [esi]
0x69FAF3: mov     eax, [edx]
0x69FAF5: push    1
0x69FAF7: mov     ecx, esi
0x69FAF9: call    eax
0x69FAFB: mov     eax, [edi+74h]
0x69FAFE: test    eax, eax
0x69FB00: jz      short loc_69FB40
0x69FB02: lea     ecx, [eax+18h]
0x69FB05: movzx   eax, word ptr [ecx+8]
0x69FB09: cmp     ax, 0FFFFh
0x69FB0D: jnz     short loc_69FB22
0x69FB0F: mov     eax, [ecx+4]
0x69FB12: lea     esi, [eax+1]
0x69FB15: mov     dl, [eax]
0x69FB17: add     eax, 1
0x69FB1A: test    dl, dl
0x69FB1C: jnz     short loc_69FB15
0x69FB1E: sub     eax, esi
0x69FB20: jmp     short loc_69FB25
0x69FB22: movzx   eax, ax
0x69FB25: test    eax, eax
0x69FB27: jbe     short loc_69FB40
0x69FB29: mov     edx, [ecx]
0x69FB2B: mov     eax, [edx+14h]
0x69FB2E: push    1
0x69FB30: push    0
0x69FB32: call    eax
0x69FB34: mov     ecx, ds:0B33A1Ch
0x69FB3A: push    eax
0x69FB3B: call    QueuedModelLoader_RemoveModel
0x69FB40: mov     ecx, ds:0B33A98h
0x69FB46: cmp     byte ptr [ecx+0CD4h], 0
0x69FB4D: jnz     short loc_69FB58
0x69FB4F: push    0
0x69FB51: mov     ecx, edi
0x69FB53: call    sub_65A050
0x69FB58: mov     ecx, edi
0x69FB5A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x69FB62: call    MobileObject_destr
0x69FB67: mov     ecx, dword ptr [esp+20h+var_C]
0x69FB6B: mov     large fs:0, ecx
0x69FB72: pop     ecx
0x69FB73: pop     edi
0x69FB74: pop     esi
0x69FB75: add     esp, 14h
0x69FB78: retn
