0x73DE50: push    0FFFFFFFFh; Pass225/226: NiScreenTexture constructor; allocates 0x20 layout and zeroes records, +0x14 texturing property, +0x18 pending mask, +0x1C renderer buffer cache.
0x73DE52: push    offset ??0NiScreenTexture@@QAE@XZ_SEH
0x73DE57: mov     eax, large fs:0
0x73DE5D: push    eax
0x73DE5E: push    ecx
0x73DE5F: push    esi
0x73DE60: mov     eax, ds:0B30AACh
0x73DE65: xor     eax, esp
0x73DE67: push    eax
0x73DE68: lea     eax, [esp+18h+var_C]
0x73DE6C: mov     large fs:0, eax
0x73DE72: mov     esi, ecx
0x73DE74: call    NiObject_constr
0x73DE79: xor     eax, eax
0x73DE7B: mov     dword ptr [esi], offset ??_7NiScreenTexture@@6B@; const NiScreenTexture::`vftable'
0x73DE81: mov     [esi+8], eax
0x73DE84: mov     [esi+0Ch], eax
0x73DE87: mov     [esi+10h], eax
0x73DE8A: mov     [esi+14h], eax
0x73DE8D: mov     [esi+18h], ax; Pass226: Constructor clears NiScreenTexture +0x18 pending update mask.
0x73DE91: mov     [esi+1Ch], eax
0x73DE94: mov     eax, esi
0x73DE96: mov     ecx, [esp+18h+var_C]
0x73DE9A: mov     large fs:0, ecx
0x73DEA1: pop     ecx
0x73DEA2: pop     esi
0x73DEA3: add     esp, 10h
0x73DEA6: retn
0x9CADA0: mov     ecx, [ebp-10h]
0x9CADA3: jmp     NiRefObject_destr
0x9CADA8: mov     edx, [esp+arg_4]
0x9CADAC: lea     eax, [edx-8]
0x9CADAF: mov     ecx, [edx-0Ch]
0x9CADB2: xor     ecx, eax
0x9CADB4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CADB9: mov     eax, offset stru_AF33C4
0x9CADBE: jmp     ___CxxFrameHandler3
