0x68FBE0: sub     ecx, 8
0x68FBE3: jmp     loc_68FBF0
0x68FBE8: align 10h
0x68FBF0: push    esi
0x68FBF1: mov     esi, ecx
0x68FBF3: test    esi, esi
0x68FBF5: jz      short loc_68FBFC
0x68FBF7: lea     eax, [esi+8]
0x68FBFA: jmp     short loc_68FBFE
0x68FBFC: xor     eax, eax
0x68FBFE: test    esi, esi
0x68FC00: mov     dword ptr [eax], offset ??_7hkEntityActivationListener@@6B@; const hkEntityActivationListener::`vftable'
0x68FC06: jz      short loc_68FC0D
0x68FC08: lea     eax, [esi+4]
0x68FC0B: jmp     short loc_68FC0F
0x68FC0D: xor     eax, eax
0x68FC0F: test    [esp+4+arg_0], 1
0x68FC14: mov     dword ptr [eax], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x68FC1A: mov     dword ptr [esi], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x68FC20: jz      short loc_68FC2B
0x68FC22: push    esi
0x68FC23: call    FormHeapFree
0x68FC28: add     esp, 4
0x68FC2B: mov     eax, esi
0x68FC2D: pop     esi
0x68FC2E: retn    4
