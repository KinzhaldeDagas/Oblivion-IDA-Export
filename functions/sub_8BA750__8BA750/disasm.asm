0x8BA750: push    0FFFFFFFFh
0x8BA752: push    offset SEH_8C8970
0x8BA757: mov     eax, large fs:0
0x8BA75D: push    eax
0x8BA75E: push    ecx
0x8BA75F: push    ebx
0x8BA760: push    esi
0x8BA761: mov     eax, ds:0B30AACh
0x8BA766: xor     eax, esp
0x8BA768: push    eax
0x8BA769: lea     eax, [esp+1Ch+var_C]
0x8BA76D: mov     large fs:0, eax
0x8BA773: push    14h; Size
0x8BA775: call    FormHeapAlloc
0x8BA77A: mov     esi, eax
0x8BA77C: add     esp, 4
0x8BA77F: mov     [esp+1Ch+var_10], esi
0x8BA783: xor     ebx, ebx
0x8BA785: cmp     esi, ebx
0x8BA787: mov     [esp+1Ch+var_4], ebx
0x8BA78B: jz      short loc_8BA7DA
0x8BA78D: mov     ecx, esi; this
0x8BA78F: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8BA794: mov     dword ptr [esi], offset ??_7bhkWorldObject@@6B@; const bhkWorldObject::`vftable'
0x8BA79A: mov     eax, 1
0x8BA79F: mov     [esi+0Ch], ebx
0x8BA7A2: add     ds:0BA7D34h, eax
0x8BA7A8: mov     dword ptr [esi], offset ??_7bhkPhantom@@6B@; const bhkPhantom::`vftable'
0x8BA7AE: add     ds:0BA7F5Ch, eax
0x8BA7B4: mov     [esi+10h], bl
0x8BA7B7: mov     dword ptr [esi], offset ??_7bhkAabbPhantom@@6B@; const bhkAabbPhantom::`vftable'
0x8BA7BD: add     ds:0BA802Ch, eax
0x8BA7C3: mov     [esi+10h], bl
0x8BA7C6: mov     eax, esi
0x8BA7C8: mov     ecx, [esp+1Ch+var_C]
0x8BA7CC: mov     large fs:0, ecx
0x8BA7D3: pop     ecx
0x8BA7D4: pop     esi
0x8BA7D5: pop     ebx
0x8BA7D6: add     esp, 10h
0x8BA7D9: retn
0x8BA7DA: xor     eax, eax
0x8BA7DC: mov     ecx, [esp+1Ch+var_C]
0x8BA7E0: mov     large fs:0, ecx
0x8BA7E7: pop     ecx
0x8BA7E8: pop     esi
0x8BA7E9: pop     ebx
0x8BA7EA: add     esp, 10h
0x8BA7ED: retn
